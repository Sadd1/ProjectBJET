package classes;
import java.lang.*;
import interfaces.*;
public class Shop implements ProductOperation
{
	protected String sid;
	protected String name;
	Product products[]=new Product[1000];
	
	public void setSid(String sid)
	{
		this.sid=sid;
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public String getSid(){return sid;}
	public String getName(){return name;}
	
	public void insertProduct(Product p)
	{
		boolean flag=false;
		
		for(int i=0;i<products.length;i++)
		{
			if(products[i]==null)
			{
				products[i]=p;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Products inserted.");
		}
		else
		{
			System.out.println("Products can not be inserted.");
		}
	}
	public void removeProduct(Product p)
	{
		boolean flag=false;
		
		for(int i=0;i<products.length;i++)
		{
			if(products[i]==p)
			{
				products[i]=null;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Product removed.");
		}
		else
		{
			System.out.println("Product can not be removed.");
		}
	}
	public Product getProduct(String pid)
	{
		Product p=null;
		
		for(int i=0;i<products.length;i++)
		{
			if(products[i]!=null)
			{
				if(products[i].getPid().equals(pid))
				{
					p=products[i];
					break;
				}
			}
		}
		return p;
	}
	public void showAllProducts()
	{
		for(Product p : products)
		{
			if(p!= null)
			{
				p.showInfo();
			}
		}
	}
} 