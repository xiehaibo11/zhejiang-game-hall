package cz.msebera.android.httpclient;

public class HttpException extends java.lang.Exception {
    private static final long serialVersionUID = -5437299376222011036L;

    public HttpException() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public HttpException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0.initCause(r2)
            return
    }
}
