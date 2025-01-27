
import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class LoanCalculatorApp{
    public static void main(String[] args) {
        String option = JOptionPane.showInputDialog("Enter '1' for Simple Interest or '2' for Compound Interest:");
        double loanAmount = Double.parseDouble(JOptionPane.showInputDialog("Enter the loan amount:"));
        double annualInterestRate = Double.parseDouble(JOptionPane.showInputDialog("Enter the annual interest rate:"));
        int numberOfYears = Integer.parseInt(JOptionPane.showInputDialog("Enter the number of years:"));

        LoanCalculator calculator = new LoanCalculator(loanAmount, annualInterestRate, numberOfYears);
        DecimalFormat df = new DecimalFormat("#.##");

        if ("1".equals(option)) {
            String message = "Mconthly Payment (Simple Interest): $" + df.format(calculator.calculateMonthlyPaymentSimple()) +
                             "\nTotal Payment (Simple Interest): $" + df.format(calculator.calculateTotalPaymentSimple());
            JOptionPane.showMessageDialog(null, message, "Simple Interest Calculation", JOptionPane.INFORMATION_MESSAGE);
        } else if ("2".equals(option)) {
            String message = "Monthly Payment (Compound Interest): $" + df.format(calculator.calculateMonthlyPaymentCompound()) +
                             "\nTotal Payment (Compound Interest): $" + df.format(calculator.calculateTotalPaymentCompound());
            JOptionPane.showMessageDialog(null, message, "Compound Interest Calculation", JOptionPane.INFORMATION_MESSAGE);
        } else {
            JOptionPane.showMessageDialog(null, "Invalid option selected.", "Error", JOptionPane.ERROR_MESSAGE);
        }
    }
}
