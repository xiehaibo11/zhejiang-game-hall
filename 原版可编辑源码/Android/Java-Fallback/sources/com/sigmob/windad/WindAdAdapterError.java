package com.sigmob.windad;

public class WindAdAdapterError {
    int a;
    java.lang.String message;

    public WindAdAdapterError(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.message = r2
            return
    }

    public int getErrorCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }

    public void setErrorCode(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setMessage(java.lang.String r1) {
            r0 = this;
            r0.message = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{errorCode:"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", message:'"
            r0.append(r1)
            java.lang.String r1 = r2.message
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
