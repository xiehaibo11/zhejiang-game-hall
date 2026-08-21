package org.json;

public class JSONException extends RuntimeException {
    private static final long serialVersionUID = 0;
    private Throwable cause;

    public JSONException(String r1) {
        super(r1);
    }

    @Override
    public Throwable getCause() {
        return this.cause;
    }

    public JSONException(Throwable r2) {
        super(r2.getMessage());
        this.cause = r2;
    }
}
