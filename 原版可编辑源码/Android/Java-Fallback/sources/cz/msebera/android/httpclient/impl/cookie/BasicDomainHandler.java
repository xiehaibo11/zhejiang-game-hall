package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class BasicDomainHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public BasicDomainHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean domainMatch(java.lang.String r3, java.lang.String r4) {
            boolean r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv4Address(r4)
            r1 = 0
            if (r0 != 0) goto L39
            boolean r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r4)
            if (r0 == 0) goto Le
            goto L39
        Le:
            java.lang.String r0 = "."
            boolean r0 = r3.startsWith(r0)
            r2 = 1
            if (r0 == 0) goto L1b
            java.lang.String r3 = r3.substring(r2)
        L1b:
            boolean r0 = r4.endsWith(r3)
            if (r0 == 0) goto L39
            int r0 = r4.length()
            int r3 = r3.length()
            int r0 = r0 - r3
            if (r0 != 0) goto L2d
            return r2
        L2d:
            if (r0 <= r2) goto L39
            int r0 = r0 - r2
            char r3 = r4.charAt(r0)
            r4 = 46
            if (r3 != r4) goto L39
            return r2
        L39:
            return r1
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "domain"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r5, cz.msebera.android.httpclient.cookie.CookieOrigin r6) {
            r4 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r6 = r6.getHost()
            java.lang.String r0 = r5.getDomain()
            r1 = 0
            if (r0 != 0) goto L16
            return r1
        L16:
            java.lang.String r2 = "."
            boolean r2 = r0.startsWith(r2)
            r3 = 1
            if (r2 == 0) goto L23
            java.lang.String r0 = r0.substring(r3)
        L23:
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r2)
            boolean r2 = r6.equals(r0)
            if (r2 == 0) goto L30
            return r3
        L30:
            boolean r2 = r5 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r2 == 0) goto L43
            cz.msebera.android.httpclient.cookie.ClientCookie r5 = (cz.msebera.android.httpclient.cookie.ClientCookie) r5
            java.lang.String r2 = "domain"
            boolean r5 = r5.containsAttribute(r2)
            if (r5 == 0) goto L43
            boolean r5 = domainMatch(r0, r6)
            return r5
        L43:
            return r1
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r3, java.lang.String r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r4)
            if (r0 != 0) goto L29
            java.lang.String r0 = "."
            boolean r1 = r4.endsWith(r0)
            if (r1 == 0) goto L14
            return
        L14:
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L1f
            r0 = 1
            java.lang.String r4 = r4.substring(r0)
        L1f:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r4 = r4.toLowerCase(r0)
            r3.setDomain(r4)
            return
        L29:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Blank or null value for domain attribute"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r4, cz.msebera.android.httpclient.cookie.CookieOrigin r5) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r3 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r5 = r5.getHost()
            java.lang.String r4 = r4.getDomain()
            if (r4 == 0) goto L46
            boolean r0 = r5.equals(r4)
            if (r0 != 0) goto L45
            boolean r0 = domainMatch(r4, r5)
            if (r0 == 0) goto L21
            goto L45
        L21:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal 'domain' attribute \""
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "\". Domain of origin: \""
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = "\""
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L45:
            return
        L46:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r4 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r5 = "Cookie 'domain' may not be null"
            r4.<init>(r5)
            throw r4
    }
}
