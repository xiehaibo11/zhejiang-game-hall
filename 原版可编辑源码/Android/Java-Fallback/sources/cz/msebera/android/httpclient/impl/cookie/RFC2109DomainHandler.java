package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2109DomainHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2109DomainHandler() {
            r0 = this;
            r0.<init>()
            return
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
            java.lang.String r3 = r3.getDomain()
            r0 = 0
            if (r3 != 0) goto L16
            return r0
        L16:
            boolean r1 = r4.equals(r3)
            if (r1 != 0) goto L2a
            java.lang.String r1 = "."
            boolean r1 = r3.startsWith(r1)
            if (r1 == 0) goto L2b
            boolean r3 = r4.endsWith(r3)
            if (r3 == 0) goto L2b
        L2a:
            r0 = 1
        L2b:
            return r0
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 == 0) goto L1d
            java.lang.String r0 = r3.trim()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L15
            r2.setDomain(r3)
            return
        L15:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Blank value for domain attribute"
            r2.<init>(r3)
            throw r2
        L1d:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r2 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r3 = "Missing value for domain attribute"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r8, cz.msebera.android.httpclient.cookie.CookieOrigin r9) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r7 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r0)
            java.lang.String r9 = r9.getHost()
            java.lang.String r8 = r8.getDomain()
            if (r8 == 0) goto Lf0
            boolean r0 = r8.equals(r9)
            if (r0 != 0) goto Lef
            r0 = 46
            int r1 = r8.indexOf(r0)
            java.lang.String r2 = "\""
            r3 = -1
            java.lang.String r4 = "Domain attribute \""
            if (r1 == r3) goto Lcf
            java.lang.String r1 = "."
            boolean r1 = r8.startsWith(r1)
            if (r1 == 0) goto Lb5
            r1 = 1
            int r5 = r8.indexOf(r0, r1)
            if (r5 < 0) goto L9b
            int r6 = r8.length()
            int r6 = r6 - r1
            if (r5 == r6) goto L9b
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r9 = r9.toLowerCase(r1)
            boolean r1 = r9.endsWith(r8)
            if (r1 == 0) goto L79
            r1 = 0
            int r2 = r9.length()
            int r5 = r8.length()
            int r2 = r2 - r5
            java.lang.String r9 = r9.substring(r1, r2)
            int r9 = r9.indexOf(r0)
            if (r9 != r3) goto L5f
            goto Lef
        L5f:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r9 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r8)
            java.lang.String r8 = "\" violates RFC 2109: host minus domain may not contain any dots"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        L79:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Illegal domain attribute \""
            r1.append(r3)
            r1.append(r8)
            java.lang.String r8 = "\". Domain of origin: \""
            r1.append(r8)
            r1.append(r9)
            r1.append(r2)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        L9b:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r9 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r8)
            java.lang.String r8 = "\" violates RFC 2109: domain must contain an embedded dot"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Lb5:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r9 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r8)
            java.lang.String r8 = "\" violates RFC 2109: domain must start with a dot"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Lcf:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r0 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r8)
            java.lang.String r8 = "\" does not match the host \""
            r1.append(r8)
            r1.append(r9)
            r1.append(r2)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
        Lef:
            return
        Lf0:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r8 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r9 = "Cookie domain may not be null"
            r8.<init>(r9)
            throw r8
    }
}
