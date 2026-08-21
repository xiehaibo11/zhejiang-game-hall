package com.sigmob.windad;

/* JADX INFO: loaded from: classes3.dex */
public class WindAdAdapterError {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5275a;
    String message;

    public WindAdAdapterError(int i, String str) {
        this.f5275a = i;
        this.message = str;
    }

    public int getErrorCode() {
        return this.f5275a;
    }

    public String getMessage() {
        return this.message;
    }

    public void setErrorCode(int i) {
        this.f5275a = i;
    }

    public void setMessage(String str) {
        this.message = str;
    }

    public String toString() {
        return "{errorCode:" + this.f5275a + ", message:'" + this.message + "'}";
    }
}
