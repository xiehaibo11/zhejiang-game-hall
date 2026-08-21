package org.bouncycastle.jce.provider;

class ExtCRLException extends java.security.cert.CRLException {
    java.lang.Throwable cause;

    ExtCRLException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0.cause = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1.cause
            return r0
    }
}
