package org.bouncycastle.jce.exception;

public class ExtCertPathValidatorException extends java.security.cert.CertPathValidatorException implements org.bouncycastle.jce.exception.ExtException {
    private java.lang.Throwable cause;

    public ExtCertPathValidatorException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0.cause = r2
            return
    }

    public ExtCertPathValidatorException(java.lang.String r1, java.lang.Throwable r2, java.security.cert.CertPath r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
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
