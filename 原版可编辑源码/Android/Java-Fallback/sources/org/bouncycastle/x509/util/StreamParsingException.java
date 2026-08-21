package org.bouncycastle.x509.util;

public class StreamParsingException extends java.lang.Exception {
    java.lang.Throwable _e;

    public StreamParsingException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0._e = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1._e
            return r0
    }
}
