import java.time.LocalDate;

public class Task {
    private int id;
    private String description;
    private boolean isDone;
    private LocalDate dueDate;

    public Task(int id, String description, LocalDate dueDate) {
        this.id = id;
        this.description = description;
        this.isDone = false;
        this.dueDate = dueDate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public boolean isDone() {
        return isDone;
    }

    public void setDone(boolean isDone) {
        this.isDone = isDone;
    }

    public LocalDate getDueDate() {
        return dueDate;
    }

    public void setDueDate(LocalDate dueDate) {
        this.dueDate = dueDate;
    }

    @Override
    public String toString() {
        return "Task{" +
                "id=" + id +
                ", description='" + description + '\'' +
                ", isDone=" + isDone +
                ", dueDate=" + dueDate +
                '}';
    }
}