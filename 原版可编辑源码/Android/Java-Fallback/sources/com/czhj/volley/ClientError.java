package com.czhj.volley;

public class ClientError extends com.czhj.volley.ServerError {
    private java.lang.String a;

    public ClientError() {
            r0 = this;
            r0.<init>()
            return
    }

    public ClientError(com.czhj.volley.NetworkResponse r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ClientError(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    public java.lang.String getRequest_id() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }
}
