package com.czhj.volley;

public class NetworkError extends VolleyError {
    public NetworkError() {
    }

    public NetworkError(NetworkResponse networkResponse) {
        super(networkResponse);
    }

    public NetworkError(Throwable th) {
        super(th);
    }
}
