//#include <iostream>
//#include <limits>
//#include <iomanip>
//
//
//
//
//using namespace std;
//int line_down_times;
//const int ORDER = 6, rand_square = ORDER*ORDER, block_order = ORDER / 2;
//int *pos1, *pos2, *pos3, *pos4;
//
//
//void lineDown(int times=1){
//    for(line_down_times = 0; line_down_times < times; line_down_times++){
//        cout << "\n";
//    }
//}
//
//
//void printMatrix(int mtx[][ORDER]){
//    int size = (ORDER * ORDER) - 1;
//
//    for (int *ptr = *mtx; ptr <= *mtx + size; ptr++){
//        cout << setw(4) << *ptr;
//        if ((ptr - *mtx + 1) % ORDER == 0){
//            lineDown();
//        }
//    }
//}
//
//
//void clearStream(){
//    cin.clear();
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//}
//
//
//int randint(int end){
//    return (rand() % end) + 1;
//}
//
//
//void moveMatrixBlocks(int mtx[][ORDER], int method){
//    if (method == 1){
//        for (int i = 0; i < block_order; i++){
//            for(int j = 0; j < block_order; j++){
//                pos1 = *(mtx + i) + j;
//                pos2 = pos1 + block_order;
//                pos3 = pos1 + ((ORDER + 1) * block_order);
//                pos4 = pos1 + (ORDER * block_order);
//                cout << *pos3 << " ";
//            }
//        }
//    }else{
//        if(method == 2){
//
//        }
//    }
//}
//
//
//void fillMatrix(int mtx[ORDER][ORDER], int method){
//    if (method == 1)
//    {
//        int N = ORDER;
//        int i = 0;
//        int j = 0;
//        for (int n = 0; n < ORDER / 2; n++){
//
//            for (;j < N; j++){ //right
//                *(*(mtx + i) + j) = randint(rand_square);
//            }
//            j--;
//            i++;
//
//            for (;i < N; i++){ // down
//                *(*(mtx + i) + j) = randint(rand_square);
//            }
//            i--;
//            j--;
//
//            for (;j > ORDER - N - 1; j--){ // left
//                *(*(mtx + i) + j) = randint(rand_square);
//            }
//            j++;
//            i--;
//            N--;
//
//            for (;i > ORDER - N - 1; i--){ // up
//                *(*(mtx + i) + j) = randint(rand_square);
//            }
//            j = n + 1;
//            i = n + 1;
//
//        }
//
//    }
//    else if (method == 2)
//    {
//        int *ptr = *mtx;
//        int start = 1;
//
//        for (int col = 1; col <= ORDER; col++){
//            if (col % 2 ){  // down
//                for (int row = 0; row < ORDER; row++){
//                    *ptr = start;
//                    ptr += ORDER;
//                    start++;
//                }
//                ptr -= ORDER;
//
//            }else{ // up
//                for (int row = 0; row < ORDER; row++){
//                    *ptr = start;
//                    ptr -= ORDER;
//                    start++;
//                }
//                ptr += ORDER;
//            }
//            ptr++;
//        }
//    }
//}
//
//
//
//
//int main(){
//    int mtx[ORDER][ORDER];
//    int problem;
//    cout << "Заполним матрицу\n";
//    lineDown();
//    int method;
//
//    for(int repeat = 0; repeat < 10; ++repeat) {
//        cout << "Введите номер задания: ";
//        cin >> problem;
//        clearStream();
//
//        switch (problem) {
//            case 1:
//                cout << "Введите способ заполнения матрицы(1 или 2): ";
//                cin >> method;
//                clearStream();
//                fillMatrix(mtx, method);
//                printMatrix(mtx);
//                break;
//
//            case 2:
//                cin >> method;
//                clearStream();
//                moveMatrixBlocks(mtx, method);
//                break;
//
//            case 3:
//                break;
//        }
//    }
//
//
//
//
//
//
//
//    return 0;
//}