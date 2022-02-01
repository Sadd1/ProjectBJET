package interfaces;
import java.lang.*;
import classes.*;
public interface EmployeeOperation
{
	void insertEmployee(Employee e);
	void removeEmployee(Employee e);
	Employee getEmployee(int empId);
	void showAllEmployees();
	
}