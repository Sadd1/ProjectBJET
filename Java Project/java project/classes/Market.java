package classes;
import java.lang.*;
import interfaces.*;

public class Market implements EmployeeOperation,ShopOperation
{
	Shop shops[]=new Shop[500];
	Employee employees[]=new Employee[10000];
	
	public void insertEmployee(Employee e)
	{
		boolean flag=false;
		
		for(int i=0;i<employees.length;i++)
		{
			if(employees[i]==null)
			{
				employees[i]=e;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Employee inserted.");
		}
		else
		{
			System.out.println("Employees can not be inserted.");
		}
	}
	public void removeEmployee(Employee e)
	{
		boolean flag=false;
		
		for(int i=0;i<employees.length;i++)
		{
			if(employees[i]==e)
			{
				employees[i]=null;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Employee removed.");
		}
		else
		{
			System.out.println("Employee can not be removed.");
		}
	}
	public Employee getEmployee(int empId)
	{
		Employee e=null;
		
		for(int i=0;i<employees.length;i++)
		{
			if(employees[i]!=null)
			{
				if(employees[i].getEmpId()==empId)
				{
					e=employees[i];
					break;
				}
			}
		}
		return e;
	}
	public void showAllEmployees()
	{
		for(Employee e : employees)
		{
			if(e!= null)
			{
				System.out.println("Employee Name : "+e.getName());
				System.out.println("Employee ID : "+e.getEmpId());
				System.out.println("Employee Salary : "+e.getSalary());
				System.out.println();
			}
			
		}
	}
	public void insertShop(Shop s)
	{
		boolean flag=false;
		
		for(int i=0;i<shops.length;i++)
		{
			if(shops[i]==null)
			{
				shops[i]=s;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Shop inserted.");
		}
		else
		{
			System.out.println("Shop can not be inserted.");
		}
	}
	public void removeShop(Shop s)
	{
		boolean flag=false;
		
		for(int i=0;i<shops.length;i++)
		{
			if(shops[i]==s)
			{
				shops[i]=null;
				flag=true;
				break;
			}
			
		}
		if(flag)
		{
			System.out.println("Shop removed.");
		}
		else
		{
			System.out.println("Shop can not be removed.");
		}
	}
	public Shop getShop(String sid)
	{
		Shop ss=null;
		
		for(int i=0;i<shops.length;i++)
		{
			if(shops[i]!=null)
			{
				if(shops[i].getSid().equals(sid))
				{
					ss=shops[i];
					break;
				}
			}
		}
		return ss;
	}
	public void showAllShops()
	{
		for(Shop s :shops)
		{
			if(s!= null)
			{
				System.out.println("Shop Name : "+s.getName());
				System.out.println("Shop ID : "+s.getSid());
				System.out.println("----------------------------------");
				s.showAllProducts();
				System.out.println("----------------------------------");
				
			}
		}
	}
}