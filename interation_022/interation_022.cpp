#include <iostream>
using namespace std;


int arr[20];
int n;

void  input() {

    while (true) {
        cout << "masukan elemen/jumlah data array : \n";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "masukan data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }

}
void insertionsort() {       // Procedure Insertionsort }

    Int temp;                // Membuat variable data temporer atau penyimpanan sementara 
    Int j;                   // Mmebuat variable j sebagai penanda 

    for (int i = 1; i < n; i++) {       // Looping dengan i dimulai dari 1 hingga n-1 

        temp = arr[i];                  // simpan nilai arr[i] ke variable sementara temp 

        j = i - 1;                      // setting nilai j sama dengan i-1; 

        while (j >= 0 && arr[j] > temp)  // Loopig while dimana nilai j lebih besar sama dengan 0 dan 
            // arr[j] lebih besar dari pada temp 
        {
            arr[j + 1] = arr[j];         // Simpan arr[j] ke dalam variable arr[j+1] 
            j--;                         // Decrement nilai j by 1 
        }

        arr[j + 1] = arr[j];

        cout << "\nStep " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
}


         }
    }
}
