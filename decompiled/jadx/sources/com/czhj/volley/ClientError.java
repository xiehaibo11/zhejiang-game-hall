package com.czhj.volley;

/* JADX INFO: loaded from: classes.dex */
public class ClientError extends ServerError {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1825a;

    public ClientError() {
    }

    public ClientError(NetworkResponse networkResponse) {
        super(networkResponse);
    }

    public ClientError(String str, String str2) {
        super(str);
        this.f1825a = str2;
    }

    public String getRequest_id() {
        return this.f1825a;
    }
}
