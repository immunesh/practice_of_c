#include<stdio.h>
#include<stdlib.h>

struct item {
    char *itemName;
    int qty;
    float price;
    float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    struct item itm = { NULL, 0, 0.0, 0.0 };
    struct item *pItem = NULL;

    pItem = &itm;

    pItem->itemName = (char *) malloc (30 * sizeof(char));

    if(pItem == NULL)
        exit(-1);
    
    //read Item
    readItem(pItem);

    //print item
    printItem(pItem);

    free(pItem->itemName);
    
    return 0;
}

void readItem (struct item *i){
    printf("Enter product Name: ");
    scanf("%s", i->itemName);

    printf("\n Enter Price: ");
    scanf("%2f", &i->price);

    printf("\n Enter Quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float)i->qty * i->price;
}

void printItem(struct item *i)
{
    printf("\n Name: %s", i->itemName);
    printf("\n Price: %.2f", i->price);
    printf("\n Quantity: %d", i->qty);
    printf("\n Total Amount: %.2f", i->amount);
}