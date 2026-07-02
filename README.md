# Zomato (Low Level Design)

This is a C++ console application demonstrating a Low-Level Design (LLD) for a food delivery application similar to Zomato.

## Features
- **User Management**: Create and manage user sessions.
- **Restaurant Search**: Find restaurants by location (e.g., Delhi, Kolkata, Chennai).
- **Cart Management**: Add menu items from a selected restaurant to the cart.
- **Order Placement**: Supports multiple order types using Factory Design Pattern (e.g., NowOrder, ScheduledOrder).
- **Payment Processing**: Uses Strategy Design Pattern for payment methods (e.g., UPI Payment).
- **Notifications**: Notification service upon successful payment.

## Project Structure
- `Managers/`: Contains manager classes like `RestaurantManager` and `OrderManager` (Singleton Pattern).
- `factories/`: Factory classes for order creation (`NowOrderFactory`, `ScheduledOrderFactory`).
- `models/`: Data models for `User`, `Restaurant`, `Cart`, `MenuItem`, `Order`.
- `services/`: Services like `NotificationService`.
- `strategies/`: Payment strategies (`PaymentStrategy`, `UpiPaymentStrategy`).
- `utils/`: Utility classes.

## How to Run
1. Open terminal in the project directory.
2. Compile the project:
   ```bash
   g++ -o main main.cpp
   ```
3. Run the executable:
   ```bash
   ./main
   ```
   
*(Note: If you are running this in Windows Command Prompt/Powershell, you might need to run `chcp 65001` first to correctly display the Rupee symbol ₹).*
