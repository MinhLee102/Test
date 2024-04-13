//B2

void printImage(const Image& img){
    int cnt = img.width;
    for (int i = 0; i < img.width*img.height; i++)
    {
        if (cnt == 0){
            cout << endl;
            cnt = img.width;
        }
        cout << img.pixels[i] << " ";
        cnt--;
    }
}

Image halve(const Image& img){
    Image temp;
    cout << endl;
    int index = 0; int cnt = img.width; int rows = 0;
    for (int i = 0; i < img.width*img.height; i++){
        if (i % 2 == 0 && rows % 2 == 0)
            {
                temp.pixels[index] = img.pixels[i];
                index++;
                //cout << " " << i;
            }
        cnt--;
        if(cnt == 0){
            rows++;
            cnt = img.width;
        }
    }

    temp.width = ceil(img.width/2.0);
    temp.height = ceil(img.height/2.0);
    return temp;
}
