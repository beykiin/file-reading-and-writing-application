// file reading and writing application.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string fileName;
    cout << "Enter the filename: ";
    cin >> fileName;
    ofstream outFile(fileName);
    if (!outFile) {

        cerr << "The file could not be created!" << endl;
        return 1;

    }

    cout << "Write the texts to the file. You can exit by entering 'q'." << endl;

    string input;
    while (true) {

        cin >> input;
        if (input == "q") {

            break;

        }

        outFile << input << endl;

    }

    outFile.close();

    ifstream inFile(fileName);
    
    if(!inFile) {

        cerr << "File not opened!" << endl;
        return 1;

    }

    cout << "Texts read from the file: " << endl;
    string line;
    while (getline(inFile, line)) {

        cout << line << endl;

    }

    inFile.close();
    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
