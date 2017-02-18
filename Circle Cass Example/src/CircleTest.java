//Jason Bowerman
// tests circle class
public class CircleTest {

	public static void main(String[] args) {
		Circle circle = new Circle(5);
		circle.printResults(); //original results
		circle.setCircum(35);
		circle.printResults(); //set Circumference works
		circle.setDiameter(12);
		circle.printResults(); // set diameter works
		circle.setRad(9);
		circle.printResults(); // set radius works
	}

}
