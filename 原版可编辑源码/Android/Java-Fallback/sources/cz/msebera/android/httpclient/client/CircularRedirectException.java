package cz.msebera.android.httpclient.client;

@cz.msebera.android.httpclient.annotation.Immutable
public class CircularRedirectException extends cz.msebera.android.httpclient.client.RedirectException {
    private static final long serialVersionUID = 6830063487001091803L;

    public CircularRedirectException() {
            r0 = this;
            r0.<init>()
            return
    }

    public CircularRedirectException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public CircularRedirectException(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }
}
