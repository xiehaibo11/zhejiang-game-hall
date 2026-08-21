package org.bouncycastle.crypto.tls;

public class TlsRuntimeException extends RuntimeException {
    Throwable e;

    public TlsRuntimeException(String str) {
        super(str);
    }

    public TlsRuntimeException(String str, Throwable th) {
        super(str);
        this.e = th;
    }

    @Override
    public Throwable getCause() {
        return this.e;
    }
}
