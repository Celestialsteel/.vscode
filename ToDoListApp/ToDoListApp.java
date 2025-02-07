import java.io.IOException;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class ToDoListApp {
    private static final String FILENAME = "tasks.txt";

    public static void main(String[] args) {
        ToDoList toDoList = new ToDoList();
        try {
            toDoList.loadTasksFromFile(FILENAME);
        } catch (IOException e) {
            System.out.println("Could not load tasks from file: " + e.getMessage());
        }

        Scanner scanner = new Scanner(System.in);
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");

        while (true) {
            System.out.println("1. Add Task");
            System.out.println("2. Remove Task");
            System.out.println("3. Update Task");
            System.out.println("4. Shift Task");
            System.out.println("5. List Tasks");
            System.out.println("6. Exit");
            System.out.print("Choose an option: ");
            int option = scanner.nextInt();
            scanner.nextLine();  // Consume newline

            switch (option) {
                case 1:
                    System.out.print("Enter task description: ");
                    String description = scanner.nextLine();
                    System.out.print("Enter due date (yyyy-MM-dd): ");
                    LocalDate dueDate = LocalDate.parse(scanner.nextLine(), formatter);
                    toDoList.addTask(description, dueDate);
                    break;
                case 2:
                    System.out.print("Enter task ID to remove: ");
                    int removeId = scanner.nextInt();
                    toDoList.removeTask(removeId);
                    break;
                case 3:
                    System.out.print("Enter task ID to update: ");
                    int updateId = scanner.nextInt();
                    scanner.nextLine();  // Consume newline
                    System.out.print("Enter new task description: ");
                    String newDescription = scanner.nextLine();
                    System.out.print("Enter new due date (yyyy-MM-dd): ");
                    LocalDate newDueDate = LocalDate.parse(scanner.nextLine(), formatter);
                    toDoList.updateTask(updateId, newDescription, newDueDate);
                    break;
                case 4:
                    System.out.print("Enter task ID to shift: ");
                    int shiftId = scanner.nextInt();
                    scanner.nextLine();  // Consume newline
                    System.out.print("Enter new due date (yyyy-MM-dd): ");
                    LocalDate shiftDueDate = LocalDate.parse(scanner.nextLine(), formatter);
                    toDoList.shiftTask(shiftId, shiftDueDate);
                    break;
                case 5:
                    for (Task task : toDoList.getTasks()) {
                        System.out.println(task);
                    }
                    break;
                case 6:
                    try {
                        toDoList.saveTasksToFile(FILENAME);
                    } catch (IOException e) {
                        System.out.println("Could not save tasks to file: " + e.getMessage());
                    }
                    System.out.println("Exiting...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid option. Please try again.");
            }
        }
    }
}
