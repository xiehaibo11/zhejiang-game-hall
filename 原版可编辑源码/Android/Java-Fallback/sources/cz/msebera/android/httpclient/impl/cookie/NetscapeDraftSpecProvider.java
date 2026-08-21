package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.Immutable
public class NetscapeDraftSpecProvider implements cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private volatile cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;
    private final java.lang.String[] datepatterns;

    public NetscapeDraftSpecProvider() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public NetscapeDraftSpecProvider(java.lang.String[] r1) {
            r0 = this;
            r0.<init>()
            r0.datepatterns = r1
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r1 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r2 = r1.cookieSpec
            if (r2 != 0) goto L17
            monitor-enter(r1)
            cz.msebera.android.httpclient.cookie.CookieSpec r2 = r1.cookieSpec     // Catch: java.lang.Throwable -> L14
            if (r2 != 0) goto L12
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r2 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec     // Catch: java.lang.Throwable -> L14
            java.lang.String[] r0 = r1.datepatterns     // Catch: java.lang.Throwable -> L14
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L14
            r1.cookieSpec = r2     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            cz.msebera.android.httpclient.cookie.CookieSpec r2 = r1.cookieSpec
            return r2
    }
}
