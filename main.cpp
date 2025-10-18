#include "AdministrativeStaff.h"
#include "ProbationerStaff.h"
#include "ProductionWorker.h"

int main() {
    AdministrativeStaff nvhc(1, "Nguyen Anh", "Tu", 1990, "20 Tang Nhon Phu", "0902888088",
                             "Programmer", "IT", 30000000, 300000, 3);

    ProbationerStaff nvts(2, "Huynh Tan", "Phat", 1995, "21 Tang Nhon Phu", "0845550555",
                          "Programmer", "IT", 5000000, 100000, 1.5);

    ProductionWorker ncsx(3, "Tran Nhat", "Nam", 1996, "22 Tang Nhon Phu", "0877990099",
                          "Programmer", "IT", 20000000, 200000, 2.34);

    nvhc.print();
    cout << endl;
    nvts.print();
    cout << endl;
    ncsx.print();

    return 0;
}
