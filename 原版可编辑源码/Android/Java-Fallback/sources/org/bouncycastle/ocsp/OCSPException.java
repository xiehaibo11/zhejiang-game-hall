package org.bouncycastle.ocsp;

public class OCSPException extends java.lang.Exception {
    java.lang.Exception e;

    public OCSPException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public OCSPException(java.lang.String r1, java.lang.Exception r2) {
            r0 = this;
            r0.<init>(r1)
            r0.e = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Exception r0 = r1.e
            return r0
    }

    public java.lang.Exception getUnderlyingException() {
            r1 = this;
            java.lang.Exception r0 = r1.e
            return r0
    }
}
