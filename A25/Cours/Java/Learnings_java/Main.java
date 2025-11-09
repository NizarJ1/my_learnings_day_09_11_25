package Learnings_java;

public class Main {
    public static void main(String[] args) {
        Inventory inventory = new Inventory();
        Item item1 = new Item("Apples", 20);
        Item item2 = new Item("Sword", 2);
        //Fruit fruit = new Fruit( "Apple", 25,"Fuji");
       // Weapon weapon = new Weapon("Shotgun", 1, 99, "Close range");

        inventory.addItem(item1);
        inventory.addItem(item2);
        inventory.addItem("Apple", 25,"Fuji");
        inventory.addItem("Shotgun", 1, 99, "Close range");

        inventory.displayinventory();
    }
}
