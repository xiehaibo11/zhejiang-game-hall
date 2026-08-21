package org.bouncycastle.crypto.tls;

public class TlsRuntimeException extends java.lang.RuntimeException {
    java.lang.Throwable e;

    public TlsRuntimeException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TlsRuntimeException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0.e = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1.e
            return r0
    }
}
