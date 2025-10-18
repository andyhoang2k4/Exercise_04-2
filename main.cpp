#include <iostream>
#include "AdministrativeStaff.h"
#include "ProbationerStaff.h"
#include "ProductionWorker.h"
using namespace std;

int main() {
    cout << "===== PROGRAM START =====\n";

    AdministrativeStaff nvhc(1, "Nguyen", "Anh", 1990, "20 Tang Nhon Phu", "0902880088", "IT", "Programmer", 25000000, 300000, 3);
    ProbationerStaff nvts(2, "Huynh", "Tan Phat", 1995, "21 Tang Nhon Phu", "0845550555", "IT", "Programmer", 5000000, 100000, 1.5);
    ProductionWorker ncsx(3, "Tran", "Nhat Nam", 1996, "22 Tang Nhon Phu", "0877990099", "IT", "Programmer", 20000000, 200000, 2.34);

    cout << "\n===== END OF MAIN SCOPE =====\n";
    return 0; // khi return, destructor của 3 đối tượng được gọi tự động
}
