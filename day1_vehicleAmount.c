#include <stdio.h>
#include <string.h>

int main() {
    char v_type[30];
    int dist;
    float discount = 0.0f;
    float base_charge = 0.0f;

    // Input for vehicle type
    printf("Enter vehicle type (Car/Truck/Bus): ");
    scanf("%s", v_type);

    // Input for distance traveled
    printf("Enter the distance travelled in km: ");
    scanf("%d", &dist);

    // Calculate base charge based on vehicle type
    if (strcmp(v_type, "car") == 0) {
        base_charge = dist * 5.0f;
    } else if (strcmp(v_type, "truck") == 0) {
        base_charge = dist * 10.0f;
    } else if (strcmp(v_type, "bus") == 0) {
        base_charge = dist * 8.0f;
    }

    // Calculate discount based on distance traveled and vehicle type
    if (strcmp(v_type, "truck") == 0 && dist > 500) {
        discount = base_charge * 0.10;
    } else if (strcmp(v_type, "bus") == 0 && dist > 300) {
        discount = base_charge * 0.05;
    }

    // Calculate total toll tax after applying discount
    float total_toll_tax = base_charge - discount;

    // Output the results
    printf("Vehicle type: %s\n", v_type);
    printf("Distance travelled: %d km\n", dist);
    printf("Base charge: ₹%.2f\n", base_charge);
    printf("Discount: ₹%.2f\n", discount);
    printf("Total Toll Tax: ₹%.2f", total_toll_tax);
    return 0;
}