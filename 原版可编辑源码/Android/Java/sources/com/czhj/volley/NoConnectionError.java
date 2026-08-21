package com.czhj.volley;

public class NoConnectionError extends NetworkError {
    public NoConnectionError() {
    }

    public NoConnectionError(Throwable th) {
        super(th);
    }
}
