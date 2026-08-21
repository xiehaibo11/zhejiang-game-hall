package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicSecureHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public BasicSecureHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "secure"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            boolean r2 = r2.isSecure()
            if (r2 == 0) goto L19
            boolean r2 = r3.isSecure()
            if (r2 == 0) goto L17
            goto L19
        L17:
            r2 = 0
            goto L1a
        L19:
            r2 = 1
        L1a:
            return r2
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r1, java.lang.String r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            java.lang.String r2 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            r2 = 1
            r1.setSecure(r2)
            return
    }
}
