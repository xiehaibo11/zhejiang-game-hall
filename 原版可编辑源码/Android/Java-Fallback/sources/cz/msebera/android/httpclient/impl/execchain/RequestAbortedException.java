package cz.msebera.android.httpclient.impl.execchain;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestAbortedException extends java.io.InterruptedIOException {
    private static final long serialVersionUID = 4973849966012490112L;

    public RequestAbortedException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public RequestAbortedException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            if (r2 == 0) goto L8
            r0.initCause(r2)
        L8:
            return
    }
}
