#include <iostream>
#include <iomanip>
using namespace std;

struct Employee
{
          int EmpNo;
          string Name;
          int Grade;
          int BasicSalary;
          double TransportAllowance;
          double HseAllowance;
          double Gross;
          double Tax;
          double Net;
};

int main()
{
          struct Employee E[30] ;
          int n;
          cout<< "Number of employees in organisation: "<<endl;
          cin>>n;
    for( int i = 0; i < n ; i++ )
     {
                cout<< "Enter EmployeeNo: ";
                cin>>E[i].EmpNo;
                cout<< "Enter employee name: ";
                cin>> E[i].Name;
                cout<< "Enter employee pay grade(1-5): ";
                cin>> E[i].Grade;
                cout<< "Enter Employee Basic Salary: ";
                cin>> E[i].BasicSalary;

         if(E[i].Grade < 1 || E[i].Grade > 6)
           {
            cout<< "Not a valid pay grade in organisation!Cannot calculate salary! "<<endl;
           break;
           }

         else  
           {
            if(E[i].Grade == 1)
            {
                E[i].TransportAllowance =0.08 *E[i].BasicSalary;
                E[i].HseAllowance =0.1 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            }
           
          if(E[i].Grade == 2)
            {
                E[i].TransportAllowance =0.1 *E[i].BasicSalary;
                E[i].HseAllowance =0.13 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            }

           if(E[i].Grade == 3)
            {
                E[i].TransportAllowance =0.12 *E[i].BasicSalary;
                E[i].HseAllowance =0.15 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            }
            
            if(E[i].Grade == 4)
            {
                E[i].TransportAllowance =0.15 *E[i].BasicSalary;
                E[i].HseAllowance =0.17 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            }
            if(E[i].Grade == 5)
            {
                E[i].TransportAllowance =0.18 *E[i].BasicSalary;
                E[i].HseAllowance =0.2 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            } 

            if(E[i].Grade == 6)
            {

                E[i].TransportAllowance =0.2 *E[i].BasicSalary;
                E[i].HseAllowance =0.22 *E[i].BasicSalary;
                E[i].Tax = 0.3* E[i].BasicSalary;
                E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
                E[i].Net= E[i].Gross-E[i].Tax;           
            }

             }
             }


         for(int i = 0 ; i < n ; i++)
         {
           
            cout << "+----------+---------------+----------+---------------+--------------------+---------------+----------+----------+" << endl;
            cout << "| EmpNo    | Name          | Grade    | BasicSalary   | TransportAllowance | HseAllowance  | Gross    | Net      |" << endl;
            cout << "+----------+---------------+----------+---------------+--------------------+---------------+----------+----------+" << endl; 
            cout << "| " << setw(8) << E[i].EmpNo << " | " << setw(13) << E[i].Name << " | " << setw(8) << E[i].Grade
             << " | " << setw(13) << E[i].BasicSalary << " | " << setw(18) << E[i].TransportAllowance
             << " | " << setw(13) << E[i].HseAllowance << " | " << setw(8) << E[i].Gross << " | " << setw(8) << E[i].Net << " |" << endl;
    

            cout << "+----------+---------------+----------+---------------+--------------------+---------------+----------+----------+" << endl;
         }
        return 0;
}