package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2109VersionHandler extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2109VersionHandler() {
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
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r3, java.lang.String r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 == 0) goto L3d
            java.lang.String r0 = r4.trim()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L35
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L19
            r3.setVersion(r4)     // Catch: java.lang.NumberFormatException -> L19
            return
        L19:
            r3 = move-exception
            cz.msebera.android.httpclient.cookie.MalformedCookieException r4 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid version: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L35:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Blank value for version attribute"
            r3.<init>(r4)
            throw r3
        L3d:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Missing value for version attribute"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            java.lang.String r2 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            int r1 = r1.getVersion()
            if (r1 < 0) goto Lc
            return
        Lc:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r1 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r2 = "Cookie version may not be negative"
            r1.<init>(r2)
            throw r1
    }
}
