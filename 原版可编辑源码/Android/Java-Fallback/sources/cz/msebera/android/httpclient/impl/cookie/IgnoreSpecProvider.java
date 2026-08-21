package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class IgnoreSpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;

    public IgnoreSpecProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r1 = r0.cookieSpec
            if (r1 != 0) goto L15
            monitor-enter(r0)
            cz.msebera.android.httpclient.cookie.CookieSpec r1 = r0.cookieSpec     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            cz.msebera.android.httpclient.impl.cookie.IgnoreSpec r1 = new cz.msebera.android.httpclient.impl.cookie.IgnoreSpec     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            r0.cookieSpec = r1     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            goto L15
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
        L15:
            cz.msebera.android.httpclient.cookie.CookieSpec r1 = r0.cookieSpec
            return r1
    }
}
