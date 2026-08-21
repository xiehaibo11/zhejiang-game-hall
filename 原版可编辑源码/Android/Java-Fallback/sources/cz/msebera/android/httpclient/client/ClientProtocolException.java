package cz.msebera.android.httpclient.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class ClientProtocolException extends java.io.IOException {
    private static final long serialVersionUID = -5596590843227115865L;

    public ClientProtocolException() {
            r0 = this;
            r0.<init>()
            return
    }

    public ClientProtocolException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ClientProtocolException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1)
            r0.initCause(r2)
            return
    }

    public ClientProtocolException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>()
            r0.initCause(r1)
            return
    }
}
