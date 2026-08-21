package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class RFC2965SpecFactory implements cz.msebera.android.httpclient.cookie.CookieSpecFactory, cz.msebera.android.httpclient.cookie.CookieSpecProvider {
    private final cz.msebera.android.httpclient.cookie.CookieSpec cookieSpec;

    public RFC2965SpecFactory() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    public RFC2965SpecFactory(java.lang.String[] r2, boolean r3) {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec
            r0.<init>(r2, r3)
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
    public cz.msebera.android.httpclient.cookie.CookieSpec newInstance(cz.msebera.android.httpclient.params.HttpParams r4) {
            r3 = this;
            if (r4 == 0) goto L26
            r0 = 0
            java.lang.String r1 = "http.protocol.cookie-datepatterns"
            java.lang.Object r1 = r4.getParameter(r1)
            java.util.Collection r1 = (java.util.Collection) r1
            if (r1 == 0) goto L19
            int r0 = r1.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r0 = r1.toArray(r0)
            java.lang.String[] r0 = (java.lang.String[]) r0
        L19:
            r1 = 0
            java.lang.String r2 = "http.protocol.single-cookie-header"
            boolean r4 = r4.getBooleanParameter(r2, r1)
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec
            r1.<init>(r0, r4)
            return r1
        L26:
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r4 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec
            r4.<init>()
            return r4
    }
}
