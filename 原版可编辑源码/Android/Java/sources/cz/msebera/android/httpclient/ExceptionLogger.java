package cz.msebera.android.httpclient;

public interface ExceptionLogger {
    public static final ExceptionLogger NO_OP = new ExceptionLogger() {
        @Override
        public void log(Exception exc) {
        }
    };
    public static final ExceptionLogger STD_ERR = new ExceptionLogger() {
        @Override
        public void log(Exception exc) {
            exc.printStackTrace();
        }
    };

    void log(Exception exc);
}
