import classes.*;
import interfaces.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import fileio.*;

public class Start
{
	public static void main(String args[])//throws Exception
	{
		Scanner sc = new Scanner(System.in);
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader bfr = new BufferedReader(isr);
		Market m= new Market();
		FileReadWriteDemo frwd = new FileReadWriteDemo();
		
		System.out.println("-----Welcome to our Console Market  Application-----");
		
		boolean repeat = true;
		
		
		
		while(repeat)
		{
			System.out.println("What do you want to do?\n");
			System.out.println("	1. Employee Management");
			System.out.println("	2. Shop Management");
			System.out.println("	3. Shop Product Management");
			System.out.println("	4. Product Quantity Add-Sell");
			System.out.println("	5. Exit\n");
			System.out.print("Your Choice: ");
		  try
		  {
			int choice = sc.nextInt();
			
			
			switch(choice)
			{
				case 1:
				
					System.out.println("--------------------------------");
					System.out.println("You have choosen Employee Management");
					
					System.out.println("Choose any one Option from the followings\n");
					System.out.println("	1. Insert New Employee");
					System.out.println("	2. Removing an Existing Employee");
					System.out.println("	3. Show All Employees");
					System.out.println("	4. Search an Employee");
					System.out.println("	5. Go Back\n");
					
					System.out.print("Your Option: ");
					int option1 = sc.nextInt();
					
					switch(option1)
					{
						case 1:
						try{
							System.out.println("########################");
							System.out.println("Insert New Employee");
							
							System.out.print("Enter Employee ID: ");
							
						    int empId1 = sc.nextInt();
							
							System.out.print("Enter Employee Name: ");
							String name1 =bfr.readLine();
							System.out.print("Enter Employee Salary: ");
							double salary1 = sc.nextDouble();
							
							Employee e1 = new Employee();
							e1.setEmpId(empId1);
							e1.setName(name1);
							e1.setSalary(salary1);
								
							m.insertEmployee(e1);
							
                        }
						catch(InputMismatchException ime)
						{
							System.out.println(ime.getMessage());
							System.out.println("Employee ID is a integer value and Salary is a double value.");
							sc.next();
						}							
						catch(IOException io)
						{
							System.out.println("Something went wrong.");
						}
							System.out.println("########################");
							break;
							
						
							
						case 2:
						
						try
						{
							System.out.println("########################");
							System.out.println("Remove an Existing Employee");
							
							System.out.print("Enter Employee ID: ");
							int empId3 = sc.nextInt();
							
							Employee e3 = m.getEmployee(empId3);
							
							if(e3 != null)
							{
								m.removeEmployee(e3);
							}
							else 
							{
								System.out.println("Employee not found.");
							}
						}
						catch(InputMismatchException ime)
						{
							System.out.println(ime.getMessage());
							System.out.println("Employee ID is an Integer.");
							sc.next();
						}	
							System.out.println("########################");
							break;
							
						case 3:
						
							System.out.println("########################");
							System.out.println("Show All Employees");
							m.showAllEmployees();
							System.out.println("########################");
							break;
							
						case 4:
						try
						{
							System.out.println("########################");
							System.out.println("Search an Employee");
							
							System.out.print("Enter Employee ID: ");
							int empId2 = sc.nextInt();
							
							Employee e2 = m.getEmployee(empId2);
							
							if(e2 !=null)
							{
								System.out.println();
								System.out.println("Employee ID: "+e2.getEmpId());
								System.out.println("Employee Name: "+e2.getName());
								System.out.println("Employee Salary: "+e2.getSalary());
								System.out.println();
							}
							else
							{
								System.out.println("Employee not found.");
							}
						}
						catch(InputMismatchException ime)
						{
							System.out.println(ime.getMessage());
							System.out.println("Employee ID is an Integer value .");
							sc.next();
						}	
							System.out.println("########################");
							break;
							
						case 5:
						
							System.out.println("########################");
							System.out.println("Going Back......");
							System.out.println("########################");
							break;
							
						default:
						
							System.out.println("########################");
							System.out.println("Invalid Option");
							System.out.println("########################");
							break;
					}
					
					System.out.println("--------------------------------");
					break;
					
				case 2:
				
					System.out.println("--------------------------------");
					System.out.println("You have choosen Shop Management");
					
					System.out.println("Choose any one Option from the followings:\n");
					System.out.println("	1. Insert New Shop");
					System.out.println("	2. Removing an Existing Shop");
					System.out.println("	3. Show All Shops");
					System.out.println("	4. Search a Shop");
					System.out.println("	5. Go Back\n");
					
					try
					{
					System.out.print("Your Option: ");
					int option2 = sc.nextInt();
					
					switch(option2)
					{
						case 1:
						   
							System.out.println("########################");
						    System.out.println("Insert New Shop");
								
							System.out.print("Enter Shop SID: ");
							String sid1 = bfr.readLine();
							System.out.print("Enter Shop Name: ");
							String name1 = bfr.readLine();
						
								
							Shop s1 = new Shop();
							s1.setSid(sid1);
							s1.setName(name1);
							
							m.insertShop(s1);
							   
						   
							
							System.out.println("########################");
							break;
							
						case 2:
						   
							System.out.println("########################");
							System.out.println("Remove an Existing Shop");
							System.out.print("Enter Shop SID: ");
							String sid3 = bfr.readLine();
									
							Shop s3 = m.getShop(sid3);
									
							if(s3!= null)
							{
								m.removeShop(s3);
							}
							else
							{
								System.out.println("Unable to remove.No shop is associated with this Sid");
							}
							
						   
						System.out.println("########################");
						break;
						
					    case 3:
						
							System.out.println("########################");
							System.out.println("Show All Shops");
							m.showAllShops();
							System.out.println("########################");
							break;
							
						case 4:
						   
								System.out.println("########################");
								System.out.println("Search a Shop");
								
								System.out.print("Enter Shop SID: ");
								String sid2 =bfr.readLine();
								
								Shop s2 = m.getShop(sid2);
								
								if(s2 !=null)
								{
									System.out.println();
									System.out.println("Shop SID: "+s2.getSid());
									System.out.println("Shop Name: "+s2.getName());
									//s2.showAllShops();
									System.out.println();
								}
								else
								{
									System.out.println("Shop not Found.");
								}
						
						   
						System.out.println("########################");
						break;
						   
						case 5:
						
							System.out.println("########################");
							System.out.println("Going Back......");
							System.out.println("########################");
							break;
						default:
						
							System.out.println("########################");
							System.out.println("Invalid Option");
							System.out.println("########################");
							break;
					}
					}
					catch(InputMismatchException ime)
					{
						System.out.println(ime.getMessage());
						System.out.println("Please enter Correct value.");
						sc.next();
					}
                    catch(IOException io)
					{
						System.out.println("Something went wrong.");
					}						
							
					System.out.println("########################");
					break;
					
				case 3:
				
					System.out.println("--------------------------------");
					System.out.println("You have choosen Shop Product Management");
					
					System.out.println("Choose any one Option from the followings:\n");
					System.out.println("	1. Insert New Product");
					System.out.println("	2. Remove Existing Product");
					System.out.println("	3. Show All Product");
					System.out.println("	4. Search a Product");
					System.out.println("	5. Go Back\n");
					
					System.out.print("Your Option: ");
					int option3 = sc.nextInt();	
					
					switch(option3)
					{
						case 1:
						   try{
								System.out.println("########################");
								System.out.println("Insert New Product");
								
								Product p=null;
								
								System.out.println("Which type of Product do you want to Insert?\n");
							    System.out.println("	1. Local Product");
							    System.out.println("	2. Imported Product");
							    System.out.println("	3. Go Back");
							
							    System.out.print("Enter Type: ");
				
							    int type = sc.nextInt();
								
								if(type == 1)
								{
								LocalProduct lp=new LocalProduct();
								
								System.out.print("Enter Product PID: ");
								String pid1 = bfr.readLine();
								System.out.print("Enter Product Name: ");
								String name1 = bfr.readLine();
								System.out.print("Enter Product Price: ");
								double price1=sc.nextDouble();
								System.out.print("Enter Product Discount Rate: ");
								double discountRate1=sc.nextDouble();
								System.out.print("Enter Product Available Quantity: ");
								int availableQuantity1=sc.nextInt();
								
								
								lp.setPid(pid1);
								lp.setName(name1);
								lp.setPrice(price1);
								lp.setDiscountRate(discountRate1);
								lp.setAvailableQuantity(availableQuantity1);
								
								p = lp;
								
							    }
							else if(type == 2)
							   {
							     ImportedProduct ip=new ImportedProduct();
								
								System.out.print("Enter Product PID: ");
								String pid2 = bfr.readLine();
								System.out.print("Enter Product Name: ");
								String name2 = bfr.readLine();
								System.out.print("Enter Product Price: ");
								double price2=sc.nextDouble();
								System.out.print("Enter Product Imported Country: ");
								String importedCountry2=bfr.readLine();
								System.out.print("Enter Product Available Quantity: ");
								int availableQuantity2=sc.nextInt();
								
								ip.setPid(pid2);
								ip.setName(name2);
								ip.setPrice(price2);
								ip.setCountryName(importedCountry2);
								ip.setAvailableQuantity(availableQuantity2);
								
								p = ip;
								
							}
							else if(type == 3)
							{
								System.out.println("Going Back.......");
							}
							else
							{
								System.out.println("Invalid Type");
							}
							if(p!=null)
							{
								System.out.print("Enter Shop SID: ");
								String sid4=bfr.readLine();
								m.getShop(sid4).insertProduct(p);
							}
							
							
						}
						catch(InputMismatchException ime)
						{
							System.out.println(ime.getMessage());
							System.out.println("Price and Discount Rate are double value and Available Quantity is integer value");
							sc.next();
						}
                        catch(IOException io)
						{
							System.out.println("Something went wrong.");
						}	
                            System.out.println("########################");
							break;						
							
						case 2:
						try
						{						
                            System.out.println("########################");
							System.out.println("Remove an Existing Product");
							System.out.print("Enter Shop SID: ");
							String sid5 = bfr.readLine();
							System.out.print("Enter Product PID: ");
							String pid3=bfr.readLine();
							m.getShop(sid5).removeProduct(m.getShop(sid5).getProduct(pid3));
						}
						catch(NullPointerException np)
					   {
						System.out.println(np.getMessage());
					   }
                        catch(IOException io)
						{
							System.out.println("Something went wrong.");
						}						
						   
						System.out.println("########################");
						break;
						
					    case 3: 
						try
						{
							System.out.println("########################");
							System.out.println("Show All Product of a Shop");
							
							System.out.print("Enter Shop SID: ");
							String sid6 =bfr.readLine();
							m.getShop(sid6).showAllProducts();
						}
						catch(IOException io)
						{
							System.out.println("Something went wrong.");
						}
							System.out.println("########################");
							break;
							
						case 4:
						   try{
								System.out.println("########################");
							    System.out.println("Search a Product in a Shop\n");
							
							    System.out.print("Enter Shop SID: ");
								String sid7 = bfr.readLine();
								System.out.print("Enter Product PID: ");
								String pid4=bfr.readLine();
							
							    Product p1 = m.getShop(sid7).getProduct(pid4);
							
							    if(p1 != null)
							   {
							     	p1.showInfo();
							   }
						   }
						   catch(NullPointerException np)
					      {
						    System.out.println(np.getMessage());
					      }
						   catch(IOException io)
						  {
							System.out.println("Something went wrong.");
						  }
							System.out.println("########################");
							break;
							
						   
						case 5:
						
							System.out.println("########################");
							System.out.println("Going Back......");
							System.out.println("########################");
							break;
						default:
						
							System.out.println("########################");
							System.out.println("Invalid Option");
							System.out.println("########################");
							break;
					}
			
					System.out.println("--------------------------------");
					break;
				
                case 4:
				
					System.out.println("--------------------------------");
					System.out.println("You have choosen Product Quantity Add-Sell :");
					
					System.out.println("Choose any one Option from the followings:\n");
					System.out.println("	1. Add Product");
					System.out.println("	2. Sell Product");
					System.out.println("	3. Show Add Sell History");
					System.out.println("	4. Go Back\n");
					
					System.out.print("Your Option: ");
					try{
					int option4 = sc.nextInt();	
                    
                    switch(option4)
                    {
						case 1:
						    System.out.println("#########################");
							System.out.println("Add Product");
						    System.out.print("Enter Shop SID: ");
							String sid8 = bfr.readLine();
							System.out.print("Enter Product PID: ");
							String pid5=bfr.readLine();
							System.out.print("Enter the Amount of Product: ");
							int amount1=sc.nextInt();
							if(amount1>0)
							{
							   m.getShop(sid8).getProduct(pid5).addQuantity(amount1);
							  frwd.writeInFile(""+amount1+" products have been Added to a Shop named  "+ m.getShop(sid8).getName());
							}
							break;
							
						case 2:
						    System.out.println("#########################");
							System.out.println("Sell Product");
						    System.out.print("Enter Shop SID: ");
							String sid9 = bfr.readLine();
							System.out.print("Enter Product PID: ");
							String pid6=bfr.readLine();
							System.out.print("Enter the Amount of Product: ");
							int amount3=sc.nextInt();
							if (amount3>0 && amount3<=m.getShop(sid9).getProduct(pid6).getAvailableQuantity())
							{
							    m.getShop(sid9).getProduct(pid6).sellQuantity(amount3);
								frwd.writeInFile(""+amount3+" products have been Sold to a Shop named  "+ m.getShop(sid9).getName());
							}
							break;
							
						case 3:
						
							System.out.println("#########################");
							System.out.println("Show Add-Sell History\n");
							frwd.readFromFile();
							System.out.println("\n#########################");
							break;
							
						case 4:
						
							System.out.println("#########################");
							System.out.println("Going Back");
							System.out.println("#########################");
							break;
							
						default:
						
							System.out.println("#########################");
							System.out.println("Invalid Option");
							System.out.println("#########################");
							break;
					}
                    }
					catch(InputMismatchException ime)
					{
						System.out.println(ime.getMessage());
						System.out.println("Price and Discount Rate are double value and Available Quantity is integer value");
						sc.next();
					}
					catch(NullPointerException np)
					{
						System.out.println(np.getMessage());
					}
                    catch(FileNotFoundException fe)
					{
						System.out.println(fe.getMessage());
					}
                    catch(IOException io)
					{
						System.out.println("Something went wrong.");
					}					
                    System.out.println("--------------------------------");
					break;					
				
				case 5:
				
					System.out.println("--------------------------------");
					System.out.println("You have choosen to Exit");
					repeat = false;
					System.out.println("--------------------------------");
					break;
					
				
				default:
				
				System.out.println("--------------------------------");
				System.out.println("Invalid Choice");
				System.out.println("--------------------------------");
				break;
			} 
		  	
            }
            catch(InputMismatchException ime)
			{
				System.out.println(ime.getMessage());
				System.out.println("please enter an integer.");
				sc.next();
			}
            catch(Exception e)
			{
				System.out.println("Something went wrong.");
			}	
		}
		  
			
	}	
}
	
