package Learnings_java;

import java.util.ArrayList;

public class Inventory {
    private ArrayList<Item> items;

    public Inventory(){
        items = new ArrayList<>();
    }

    public void addItem(Item item){
        items.add(item);
    }

    public void addItem(String name, int quantity, String type){
        items.add(new Fruit(name,quantity,type));
    }

    public void addItem(String name, int quantity, int damage, String type){
        items.add(new Weapon(name, quantity, damage, type));
    }

    public void displayinventory(){
        for(Item item : items){
            System.out.println(item.toString());
        }
    }
}
