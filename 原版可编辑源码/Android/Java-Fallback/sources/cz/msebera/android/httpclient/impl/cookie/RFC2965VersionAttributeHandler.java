package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965VersionAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2965VersionAttributeHandler() {
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
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto L1b
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> Lc
            goto Ld
        Lc:
            r3 = -1
        Ld:
            if (r3 < 0) goto L13
            r2.setVersion(r3)
            return
        L13:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Invalid cookie version."
            r2.<init>(r3)
            throw r2
        L1b:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Missing value for version attribute"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r1, cz.msebera.android.httpclient.cookie.CookieOrigin r2) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r0 = this;
            java.lang.String r2 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            boolean r2 = r1 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r2 == 0) goto L20
            boolean r2 = r1 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r2 == 0) goto L20
            cz.msebera.android.httpclient.cookie.ClientCookie r1 = (cz.msebera.android.httpclient.cookie.ClientCookie) r1
            java.lang.String r2 = "version"
            boolean r1 = r1.containsAttribute(r2)
            if (r1 == 0) goto L18
            goto L20
        L18:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r1 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r2 = "Violates RFC 2965. Version attribute is required."
            r1.<init>(r2)
            throw r1
        L20:
            return
    }
}
