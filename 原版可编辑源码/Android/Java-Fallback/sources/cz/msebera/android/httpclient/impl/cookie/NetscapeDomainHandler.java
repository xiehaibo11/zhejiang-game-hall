package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class NetscapeDomainHandler extends cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler {
    public NetscapeDomainHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean isSpecialDomain(java.lang.String r1) {
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toUpperCase(r0)
            java.lang.String r0 = ".COM"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".EDU"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".NET"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".GOV"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".MIL"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".ORG"
            boolean r0 = r1.endsWith(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".INT"
            boolean r1 = r1.endsWith(r0)
            if (r1 == 0) goto L3f
            goto L41
        L3f:
            r1 = 0
            goto L42
        L41:
            r1 = 1
        L42:
            return r1
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "domain"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r3 = r3.getHost()
            java.lang.String r2 = r2.getDomain()
            if (r2 != 0) goto L16
            r2 = 0
            return r2
        L16:
            boolean r2 = r3.endsWith(r2)
            return r2
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r0 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r3)
            if (r0 != 0) goto Lf
            r2.setDomain(r3)
            return
        Lf:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Blank or null value for domain attribute"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r4, cz.msebera.android.httpclient.cookie.CookieOrigin r5) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r3 = this;
            java.lang.String r5 = r5.getHost()
            java.lang.String r4 = r4.getDomain()
            boolean r0 = r5.equals(r4)
            if (r0 != 0) goto L39
            boolean r0 = cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler.domainMatch(r4, r5)
            if (r0 == 0) goto L15
            goto L39
        L15:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal domain attribute \""
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
        L39:
            java.lang.String r0 = "."
            boolean r5 = r5.contains(r0)
            if (r5 == 0) goto L93
            java.util.StringTokenizer r5 = new java.util.StringTokenizer
            r5.<init>(r4, r0)
            int r5 = r5.countTokens()
            boolean r0 = isSpecialDomain(r4)
            java.lang.String r1 = "Domain attribute \""
            if (r0 == 0) goto L75
            r0 = 2
            if (r5 < r0) goto L56
            goto L93
        L56:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r5 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "\" violates the Netscape cookie specification for "
            r0.append(r4)
            java.lang.String r4 = "special domains"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L75:
            r0 = 3
            if (r5 < r0) goto L79
            goto L93
        L79:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r5 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "\" violates the Netscape cookie specification"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L93:
            return
    }
}
