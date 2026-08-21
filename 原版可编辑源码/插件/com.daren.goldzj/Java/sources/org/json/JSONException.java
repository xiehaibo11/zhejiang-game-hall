package org.json;

public class JSONException extends RuntimeException {
    private static final long serialVersionUID = 0;
    private Throwable cause;

    public JSONException(String str) {
        super(str);
    }

    @Override
    public Throwable getCause() {
        return this.cause;
    }

    public JSONException(Throwable th) {
        super(th.getMessage());
        this.cause = th;
    }
}
