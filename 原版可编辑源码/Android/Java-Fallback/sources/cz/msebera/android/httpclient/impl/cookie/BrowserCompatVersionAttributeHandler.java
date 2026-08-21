package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BrowserCompatVersionAttributeHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public BrowserCompatVersionAttributeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "version"
            return r0
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto L10
            r0 = 0
            int r0 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> Lc
        Lc:
            r2.setVersion(r0)
            return
        L10:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Missing value for version attribute"
            r2.<init>(r3)
            throw r2
    }
}
