#include<iostream>
#include<cstring>
#include<limits>

using namespace std;

class Product {
    int Pid;
    char Pname[50];
    int Quantity;
    int Reorderlevel;
    float Rate;
public:
    Product() {
        Pid = 0;
        strcpy(Pname, "");
        Quantity = 0;
        Reorderlevel = 0;
        Rate = 0.0;
    }
    Product(int id, char* n, int q, int rl, float r) {
        Pid = id;
        strcpy(Pname, n);
        Quantity = q;
        Reorderlevel = rl;
        Rate = r;
    }
    void setPid(int id) {
        Pid = id;
    }
    void setPname(char* n) {
        strcpy(Pname, n);
    }
    void setQuantity(int q) {
        Quantity = q;
    }
    void setReorderlevel(int rl) {
        Reorderlevel = rl;
    }
    void setRate(float r) {
        Rate = r;
    }
    int getPid() {
        return Pid;
    }
    char* getPname() {
        return Pname;
    }
    int getQuantity() {
        return Quantity;
    }
    int getReorderlevel() {
        return Reorderlevel;
    }
    float getRate() {
        return Rate;
    }
    void insert() {
        cout << "\nEnter the Product ID:";
        cin >> Pid;
        cin.ignore();
        cout << "\nEnter the Product Name:";
        cin >> Pname;
        cin.ignore();
        cout << "\nEnter the Quantity:";
        cin >> Quantity;
        cout << "\nEnter the Reorder Level:";
        cin >> Reorderlevel;
        cout << "\nEnter the Rate:";
        cin >> Rate;
    }
    void display() {
        cout << "\nProduct ID:" << Pid << "\nProduct Name:" << Pname;
        cout << "\nQuantity:" << Quantity << "\nReorderlevel:" << Reorderlevel;
        cout << "\nRate is:" << Rate;
    }
    void update() {
        cout << "\nEnter new Product name:";
        cin.ignore();
        cin.getline(Pname, 50);
        cout << "\nEnter the Quantity:";
        cin >> Quantity;
        cout << "\nEnter the New Rate:";
        cin >> Rate;
        cout << "\nEnter new Reorder level:";
        cin >> Reorderlevel;
    }
    void displayRecord(int id) {
        if (Pid == id) {
            display();
        } else {
            cout << "\nProduct ID not Found.";
        }
    }
};

class Invoice {
    int PinvoiceNo;
    char Date[11];
    int Discount;
    char Custname[50];
    char Phone[11];
public:
    Invoice() {
        PinvoiceNo = 0;
        strcpy(Date, "");
        Discount = 0;
        strcpy(Custname, "");
        strcpy(Phone, "");
    }
    Invoice(int PN, char* D, int Dis, char* CN, char* P) {
        PinvoiceNo = PN;
        strcpy(Date, D);
        Discount = Dis;
        strcpy(Custname, CN);
        strcpy(Phone, P);
    }
    void setPinvoiceNo(int PN) {
        PinvoiceNo = PN;
    }
    void setDate(char* D) {
        strcpy(Date, D);
    }
    void setDiscount(int Dis) {
        Discount = Dis;
    }
    void setCustname(char* CN) {
        strcpy(Custname, CN);
    }
    void setPhone(char* P) {
        strcpy(Phone, P);
    }
    int getPinvoiceNo() {
        return PinvoiceNo;
    }
    char* getDate() {
        return Date;
    }
    int getDiscount() {
        return Discount;
    }
    char* getCustname() {
        return Custname;
    }
    char* getPhone() {
        return Phone;
    }
    void insert() {
        cout << "\nEnter Product Invoice No:";
        cin >> PinvoiceNo;
        cout << "\nEnter Date (dd|mm|yyyy):";
        cin >> Date;
        cout << "\nEnter Discount:";
        cin >> Discount;
        cin.ignore();
        cout << "\nEnter the Customer Name:";
        cin >> Custname;
        cout << "\nEnter the Phone Number:";
        cin >> Phone;
    }
    void display() {
        cout << "\nProduct Invoice No:" << PinvoiceNo;
        cout << "\nDate:" << Date << "\nDiscount:" << Discount;
        cout << "\nCustomer Name:" << Custname << "\nPhone Number:" << Phone;
        
    }
    void update() {
        cout << "\nEnter new Date:";
        cin.ignore();
        cin.getline(Date, 11);
        cout << "\nEnter After Discount:";
        cin >> Discount;
        cout << "\nEnter the New Customer Name:";
        cin.getline(Custname, 50);
        cout << "\nEnter new Phone Number:";
        cin.getline(Phone, 11);
    }
    void displayRecord() {
        if (PinvoiceNo == this->PinvoiceNo) {
            cout << "\nProduct Invoice No: " << PinvoiceNo;
            cout << "\n Date: " << Date;
            cout << "\nCustomer Name: " << Custname;
            return;
        }
        cout << "\nProduct Invoice with Invoice No " << PinvoiceNo << "\nPinvoiceNo not found." ;
    }
};

class Sale {
    int Pid;
    int InvoiceNo;
    int quantity;
public:
    Sale() {
        Pid = 0;
        InvoiceNo = 0;
        quantity = 0;
    }
    Sale(int id, int IN, int q) {
        Pid = id;
        InvoiceNo = IN;
        quantity = q;
    }
    void setPid(int id) {
        Pid = id;
    }
    void setInvoiceNo(int IN) {
        InvoiceNo = IN;
    }
    void setquantity(int q) {
        quantity = q;
    }
    int getPid() {
        return Pid;
    }
    int getInvoiceNo() {
        return InvoiceNo;
    }
    int getquantity() {
        return quantity;
    }
    void insert() {
        cout << "\nEnter Product ID:";
        cin >> Pid;
        cout << "\nEnter the  Invoice No:";
        cin >> InvoiceNo;
        cout << "\nEnter the Quantity:";
        cin >> quantity;
    }
    void display() {
        cout << "\nProduct Id:" << Pid << "\nInvoice No is:" << InvoiceNo << "\nQuantity is:" << quantity;
    }
    void update() {
        cout << "\nEnter Product ID to be Updated:";
        cin.ignore();
        cin >> Pid;
        cout << "\nEnter Invoice No to be Updated:";
        cin >> InvoiceNo;
        cout << "\nEnter the Quantity to be Updated:";
        cin >> quantity;
    }
};

int main() {
    int productCount, invoiceCount, saleCount;
    int productCounter = 0;
    cout << "Enter the number of Products: ";
    cin >> productCount;

    cout << "Enter the number of Invoices: ";
    cin >> invoiceCount;

    cout << "Enter the number of Sales: ";
    cin >> saleCount;
    system("cls");

    Product *products = new Product[productCount];
    Invoice *invoices = new Invoice[invoiceCount];
    Sale *sale = new Sale[saleCount];

    int mainChoice;

    do {
        cout << "\n************** Main Menu **************\n";
        cout << "\n1) Products";                          
        cout << "\n2) Invoices";
        cout << "\n3) Sale";
        cout << "\n0) Exit";
        cout << "\n*\n";
        cout << "\nEnter your choice: ";
      while(true){
	    cin >> mainChoice;
	    if (cin.fail()) {
                cout << "Invalid input. Please enter an integer.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break; // Exit the loop
            }
        }

        switch (mainChoice) {
            case 1: {
                int productChoice;

                do {
                    cout << "\n---**** Products Menu ****---\n";
                    cout << "\n1. Insert Product";
                    cout << "\n2. Update Product";
                    cout << "\n3. Delete Product";
                    cout << "\n4. Display All Products";
                    cout << "\n5. Display Product by ID";
                    cout << "\n0. Back to Main Menu";
                    cout << "\nEnter your choice: ";
                   while(true) {
				    cin >> productChoice;
				    if (cin.fail()) {
                cout << "\nInvalid input. Please enter an integer.";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break; // Exit the loop
            }
        }

                    switch (productChoice) {
                        case 1: {
                            // check for duplicate ID
                            if (productCounter != productCount) {
                                int ID;
                                bool duplicate = false;
                                do {
                                    
                                    duplicate = false;
                                    for (int i = 0; i < productCounter; i++) {
                                        if (products[i].getPid() == ID) {
                                            cout << "\nDuplicate product ID is not acceptable.";
                                            duplicate = true;
                                            break;
                                        }
                                    }
                                } while (duplicate);

                                products[productCounter].insert();
                                productCounter++;
                            }
                            if (productCounter == productCount) {
                                cout << "\nProduct inserted successfully.";
                            } else {
                                cout << "\nThere is no space for another Product. ";
                            }
                            break;
                        }
                        
                        case 2:{
                        	int pid;
                        	cout<<"Enter Product ID to update: ";
                        	cin >> pid;
                        	for(int i = 0; i < productCount; i++){
                        		if(pid == products[i].getPid()){
                        			products[i].update();
                        			break;
								}
							}
							
							break;
						}

                        case 3: {
                            int pid;
                            bool found = false;
                            cout << "\nEnter Product ID to delete";
                            cin >> pid;
                            // Delete the product if found
                            for (int i = 0; i < saleCount; i++) {
                                if (sale[i].getPid() == pid) {
                                    // Shift elements to fill the gap
                                    cout<<"Cant delete as it is present in sale";
                                    found = true;
                                   break;
                                }
                            }
                            if(!found){
                            	 for (int i = 0; i < productCounter; i++) {
                                        products[i] = products[i + 1];
                                    }
                                    productCounter--;
                                    cout << "\nProduct deleted successfully";
                                
							}
                            break;
                        }

                        case 4: {
                            if (productCounter == 0) {
                               cout<<"Inavlid";
                               break;
                            } 
							else {
                                for (int i = 0; i < productCounter; ++i) {
                                    products[i].display();
                                }
                            }
                            break;
                        }
                        case 5: {
                            int pid;
                            cout << "\nEnter Product ID to display:";
                            cin >> pid;
                            // Find the product with the given Pid and display
                            for (int i = 0; i < productCounter; ++i) {
                                if (products[i].getPid() == pid) {
                                    products[i].display();
                                    break;
                                }
                            }
                            break;
                        }

                        case 0: {
                            // Back to Main Menu
                            break;
                        }

                        default: {
                            cout << "\nInvalid choice. Please try again.";
                            break;
                        }
                    }

                } while (productChoice != 0);
                break;
            }

            case 2: {
                int invoiceChoice;

                do {
                    cout << "\n---**** Invoices Menu ****---\n";
                    cout << "\n1. Insert Invoice";
                    cout << "\n2. Update Invoice";
                    cout << "\n3. Delete Invoice";
                    cout << "\n4. Display All Invoices";
                    cout << "\n5. Display Invoice by PID+InvoiceNo";
                    cout << "\n6. Display Invoices with Discount > 10%";
                    cout << "\n0. Back to Main Menu";
                    cout << "\nEnter your choice: ";
                    cin >> invoiceChoice;

                    switch (invoiceChoice) {
                        case 1: {
                            for (int i = 0; i < invoiceCount; ++i) {
                                invoices[i].insert();
                                cout << "\nInvoice inserted successfully.";
                            }
                            break;
                        }

                        case 2: {
                            int invoiceNo;
                            cout << "\nEnter  Invoice Number to update:";
                            cin >> invoiceNo;

                            for (int i = 0; i < invoiceCount; ++i) {
                                if (invoices[i].getPinvoiceNo() == invoiceNo) {
                                    invoices[i].update();
                                    cout << "\nInvoice updated successfully.";
                                    break;
                                }
                            }
                            break;
                        }

                        case 3: {
                            int pinvoiceNo;
                            cout << "\nEnter Product Invoice Number to delete:";
                            cin >> pinvoiceNo;
                            // Delete the invoice if found
                            for (int i = 0; i < invoiceCount; ++i) {
                                if (invoices[i].getPinvoiceNo() == pinvoiceNo) {
                                    // Shift elements to fill the gap
                                    for (int j = i; j < invoiceCount - 1; ++j) {
                                        invoices[j] = invoices[j + 1];
                                    }
                                    invoiceCount--;
                                    cout << "\nInvoice deleted successfully.";
                                    break;
                                }
                            }
                            break;
                        }

                        case 4: {
                            if (invoiceCount > 0) {
                                for (int i = 0; i < invoiceCount; ++i) {
                                    invoices[i].display();
                                }
                            } else {
                                cout << "\nNo invoices to display.";
                            }
                            break;
                        }

                        case 5: {
                            int pinvoiceNo;
                            cout << "\nEnter Product Invoice Number to display:";
                            cin >> pinvoiceNo;
                            // Find the invoice with the given PID and InvoiceNo and display
                            for (int i = 0; i < invoiceCount; ++i) {
                                if (invoices[i].getPinvoiceNo() == pinvoiceNo) {
                                    invoices[i].display();
                                    break;
                                }
                            }
                            break;
                        }

                        case 6: {
                            // Display invoices with discount > 10%
                            for (int i = 0; i < invoiceCount; i++) {
                                if (invoices[i].getDiscount() > 10) {
                                    invoices[i].display();
                                }
                            }
                            break;
                        }

                        case 0: {
                            // Back to Main Menu
                            break;
                        }

                        default: {
                            cout << "\nInvalid choice. Please try again.";
                            break;
                        }
                    }

                } while (invoiceChoice != 0);

                break;
            }

            case 3: {
                int saleChoice;

                do {
                    cout << "\n---**** Sale Menu ****---\n";
                    cout << "\n1. Insert Sale";
                    cout << "\n2. Update Sale";
                    cout << "\n3. Delete Sale";
                    cout << "\n4. Display All Sale";
                    cout << "\n5. Display Sale by PID + invoiceNo + Quantity";
                    cout << "\n0. Back to Main Menu";
                    cout << "\nEnter your choice: ";
                    cin >> saleChoice;

                    switch (saleChoice) {
                        case 1: {
                            for (int i = 0; i < saleCount; ++i) {
                                sale[i].insert();
                                cout << "\nSale inserted successfully.";
                            }
                            break;
                        }

                        case 2: {
                            int pid, invoiceNo, quantity;
                            cout << "\nEnter Product ID, and  Invoice Number and Quantity to update:";
                            cin >> pid >> invoiceNo >> quantity;

                            for (int i = 0; i < saleCount; ++i) {
                                if (sale[i].getPid() == pid && sale[i].getInvoiceNo() == invoiceNo && sale[i].getquantity() == quantity) {
                                    sale[i].update();
                                    cout << "\nSale updated successfully.";
                                    break;
                                }
                            }
                            break;
                        }

                        case 3: {
                            int pid, invoiceNo;
                            cout << "\nEnter Product ID, and Invoice Number to delete:";
                            cin >> pid >> invoiceNo ;
                            // Delete the Sale if found
                            for (int i = 0; i < saleCount; ++i) {
                                if (sale[i].getPid() == pid && sale[i].getInvoiceNo() == invoiceNo ) {
                                    // Shift elements to fill the gap
                                    for (int j = i; j < saleCount - 1; j++) {
                                        sale[j] = sale[j + 1];
                                    }
                                    saleCount--;
                                    cout << "\nSale deleted successfully.";
                                    break;
                                }
                            }
                            break;
                        }

                        case 4: {
                            if (saleCount > 0) {
                                for (int i = 0; i < saleCount; ++i) {
                                    sale[i].display();
                                }
                            } else {
                                cout << "\nNo Sales to display.";
                            }
                            break;
                        }

                        case 5: {
                            int pid, invoiceNo, Quantity;
                            cout << "\nEnter Product ID, and Invoice Number and Quantity to display:";
                            cin >> pid >> invoiceNo >> Quantity;

                            for (int i = 0; i < saleCount; ++i) {
                                if (sale[i].getPid() == pid && sale[i].getInvoiceNo() == invoiceNo && sale[i].getquantity() == Quantity) {
                                    sale[i].display();
                                    break;
                                }
                            }
                            break;
                        }

                        case 0: {
                            // Back to Main Menu
                            break;
                        }

                        default: {
                            cout << "\nInvalid choice. Please try again.";
                            break;
                        }
                    }

                } while (saleChoice != 0);

                break;
            }

            case 0: {
                // Exit program
                break;
            }

            default: {
                cout << "\nInvalid choice. Please try again.";
                break;
            }
        }

    } while (mainChoice != 0);

    return 0;
}
