package org.bouncycastle.jce.provider;

public class AnnotatedException extends java.lang.Exception implements org.bouncycastle.jce.exception.ExtException {
    private java.lang.Throwable _underlyingException;

    AnnotatedException(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    AnnotatedException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0._underlyingException = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1._underlyingException
            return r0
    }

    java.lang.Throwable getUnderlyingException() {
            r1 = this;
            java.lang.Throwable r0 = r1._underlyingException
            return r0
    }
}
