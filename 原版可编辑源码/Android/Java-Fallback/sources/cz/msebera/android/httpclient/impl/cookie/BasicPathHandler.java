package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicPathHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public BasicPathHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean pathMatch(java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "/"
            if (r5 != 0) goto L5
            r5 = r0
        L5:
            int r1 = r5.length()
            r2 = 0
            r3 = 1
            if (r1 <= r3) goto L1c
            boolean r1 = r5.endsWith(r0)
            if (r1 == 0) goto L1c
            int r1 = r5.length()
            int r1 = r1 - r3
            java.lang.String r5 = r5.substring(r2, r1)
        L1c:
            boolean r1 = r4.startsWith(r5)
            if (r1 == 0) goto L41
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L29
            return r3
        L29:
            int r0 = r4.length()
            int r1 = r5.length()
            if (r0 != r1) goto L34
            return r3
        L34:
            int r5 = r5.length()
            char r4 = r4.charAt(r5)
            r5 = 47
            if (r4 != r5) goto L41
            return r3
        L41:
            return r2
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "path"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r3 = r3.getPath()
            java.lang.String r2 = r2.getPath()
            boolean r2 = pathMatch(r3, r2)
            return r2
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r3)
            if (r0 != 0) goto Lc
            goto Le
        Lc:
            java.lang.String r3 = "/"
        Le:
            r2.setPath(r3)
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r4, cz.msebera.android.httpclient.cookie.CookieOrigin r5) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r3 = this;
            boolean r0 = r3.match(r4, r5)
            if (r0 == 0) goto L7
            return
        L7:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal 'path' attribute \""
            r1.append(r2)
            java.lang.String r4 = r4.getPath()
            r1.append(r4)
            java.lang.String r4 = "\". Path of origin: \""
            r1.append(r4)
            java.lang.String r4 = r5.getPath()
            r1.append(r4)
            java.lang.String r4 = "\""
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
