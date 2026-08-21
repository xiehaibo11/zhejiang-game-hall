package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965DomainAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2965DomainAttributeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean domainMatch(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r2.equals(r3)
            if (r0 != 0) goto L17
            java.lang.String r0 = "."
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L15
            boolean r2 = r2.endsWith(r3)
            if (r2 == 0) goto L15
            goto L17
        L15:
            r2 = 0
            goto L18
        L17:
            r2 = 1
        L18:
            return r2
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "domain"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r4 = r4.getHost()
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r4 = r4.toLowerCase(r0)
            java.lang.String r3 = r3.getDomain()
            boolean r0 = r2.domainMatch(r4, r3)
            r1 = 0
            if (r0 != 0) goto L20
            return r1
        L20:
            int r0 = r4.length()
            int r3 = r3.length()
            int r0 = r0 - r3
            java.lang.String r3 = r4.substring(r1, r0)
            r4 = 46
            int r3 = r3.indexOf(r4)
            r4 = -1
            if (r3 != r4) goto L37
            r1 = 1
        L37:
            return r1
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r3, java.lang.String r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 == 0) goto L3c
            java.lang.String r0 = r4.trim()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L34
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r0 = r4.toLowerCase(r0)
            java.lang.String r1 = "."
            boolean r4 = r4.startsWith(r1)
            if (r4 != 0) goto L30
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r1 = 46
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
        L30:
            r3.setDomain(r0)
            return
        L34:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Blank value for domain attribute"
            r3.<init>(r4)
            throw r3
        L3c:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r4 = "Missing value for domain attribute"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r7, cz.msebera.android.httpclient.cookie.CookieOrigin r8) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r6 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r8 = r8.getHost()
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r8 = r8.toLowerCase(r0)
            java.lang.String r0 = r7.getDomain()
            if (r0 == 0) goto L131
            java.lang.String r0 = r7.getDomain()
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            boolean r1 = r7 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r1 == 0) goto Lf9
            r1 = r7
            cz.msebera.android.httpclient.cookie.ClientCookie r1 = (cz.msebera.android.httpclient.cookie.ClientCookie) r1
            java.lang.String r2 = "domain"
            boolean r1 = r1.containsAttribute(r2)
            if (r1 == 0) goto Lf9
            java.lang.String r1 = "."
            boolean r1 = r0.startsWith(r1)
            java.lang.String r2 = "Domain attribute \""
            if (r1 == 0) goto Ldb
            r1 = 1
            r3 = 46
            int r4 = r0.indexOf(r3, r1)
            if (r4 < 0) goto L4d
            int r5 = r0.length()
            int r5 = r5 - r1
            if (r4 != r5) goto L55
        L4d:
            java.lang.String r1 = ".local"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lb8
        L55:
            boolean r1 = r6.domainMatch(r8, r0)
            if (r1 == 0) goto L95
            r1 = 0
            int r4 = r8.length()
            int r0 = r0.length()
            int r4 = r4 - r0
            java.lang.String r8 = r8.substring(r1, r4)
            int r8 = r8.indexOf(r3)
            r0 = -1
            if (r8 != r0) goto L72
            goto L103
        L72:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r8 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r7 = r7.getDomain()
            r0.append(r7)
            java.lang.String r7 = "\" violates RFC 2965: "
            r0.append(r7)
            java.lang.String r7 = "effective host minus domain may not contain any dots"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
        L95:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r8 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r7 = r7.getDomain()
            r0.append(r7)
            java.lang.String r7 = "\" violates RFC 2965: effective host name does not "
            r0.append(r7)
            java.lang.String r7 = "domain-match domain attribute."
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
        Lb8:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r8 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r7 = r7.getDomain()
            r0.append(r7)
            java.lang.String r7 = "\" violates RFC 2965: the value contains no embedded dots "
            r0.append(r7)
            java.lang.String r7 = "and the value is not .local"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
        Ldb:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r8 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r7 = r7.getDomain()
            r0.append(r7)
            java.lang.String r7 = "\" violates RFC 2109: domain must start with a dot"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            r8.<init>(r7)
            throw r8
        Lf9:
            java.lang.String r0 = r7.getDomain()
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L104
        L103:
            return
        L104:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal domain attribute: \""
            r1.append(r2)
            java.lang.String r7 = r7.getDomain()
            r1.append(r7)
            java.lang.String r7 = "\"."
            r1.append(r7)
            java.lang.String r7 = "Domain of origin: \""
            r1.append(r7)
            r1.append(r8)
            java.lang.String r7 = "\""
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
        L131:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r7 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r8 = "Invalid cookie state: domain not specified"
            r7.<init>(r8)
            throw r7
    }
}
