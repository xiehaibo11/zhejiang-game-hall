package com.czhj.volley;

public class ClientError extends ServerError {
    private String a;

    public ClientError() {
    }

    public ClientError(NetworkResponse networkResponse) {
        super(networkResponse);
    }

    public ClientError(String str, String str2) {
        super(str);
        this.a = str2;
    }

    public String getRequest_id() {
        return this.a;
    }
}
