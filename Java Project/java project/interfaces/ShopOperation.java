package interfaces;
import java.lang.*;
import classes.*;
public interface ShopOperation
{
	void insertShop(Shop s);
	void removeShop(Shop s);
	Shop getShop(String sid);
	void showAllShops();
	
}