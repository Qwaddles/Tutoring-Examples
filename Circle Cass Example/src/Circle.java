

public class Circle {
	double radius;
	double diameter;
	double circum;
	
	Circle(double radius)
	{
		this.radius = radius;
		diameter = radius *2;
		circum = Math.PI * diameter;
	}
	
	//sets the radius
	public void setRad(double radius)
	{
		this.radius = radius;
		diameter = radius *2;
		circum = Math.PI * diameter;
	}
	
	//returns radius
	public double getRad()
	{
		return radius;
	}
	
	//gets the circumference
	public double getCirc()
	{
		return circum;
	}
	
	//gets the diameter
	public double getDiameter()
	{
		return diameter;
	}
	//sets the diameter and fixes other variables
	public void setDiameter(double diameter)
	{
		this.diameter = diameter;
		radius = diameter/2;
		circum = Math.PI* diameter;
	}
	
	//sets circumference
	public void setCircum(double circum)
	{
		this.circum = circum;
		diameter = circum / Math.PI;
		radius = diameter/2;
	}
	
	//prints out results
	public void printResults()
	{
		System.out.printf("Radius: %.2f%nDiameter: %.2f%nCircumference: %.2f%n%n", radius, diameter, circum);
	}
}
