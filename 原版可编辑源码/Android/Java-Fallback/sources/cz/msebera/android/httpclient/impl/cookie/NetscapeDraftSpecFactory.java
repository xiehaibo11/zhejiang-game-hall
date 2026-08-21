package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class NetscapeDraftSpecFactory implements cz.msebera.android.httpclient.cookie.CookieSpecFactory, cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private final cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;

    public NetscapeDraftSpecFactory() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public NetscapeDraftSpecFactory(java.lang.String[] r2) {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r0 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec
            r0.<init>(r2)
            r1.cookieSpec = r0
            return
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec create(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            cz.msebera.android.httpclient.cookie.CookieSpec r1 = r0.cookieSpec
            return r1
    }

    @Override
    public cz.msebera.android.httpclient.cookie.CookieSpec newInstance(cz.msebera.android.httpclient.params.HttpParams r3) {
            r2 = this;
            if (r3 == 0) goto L20
            r0 = 0
            java.lang.String r1 = "http.protocol.cookie-datepatterns"
            java.lang.Object r3 = r3.getParameter(r1)
            java.util.Collection r3 = (java.util.Collection) r3
            if (r3 == 0) goto L1a
            int r0 = r3.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            r0 = r3
            java.lang.String[] r0 = (java.lang.String[]) r0
        L1a:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r3 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec
            r3.<init>(r0)
            return r3
        L20:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r3 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec
            r3.<init>()
            return r3
    }
}
