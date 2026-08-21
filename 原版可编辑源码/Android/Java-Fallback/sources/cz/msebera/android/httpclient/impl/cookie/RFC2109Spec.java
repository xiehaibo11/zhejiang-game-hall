package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.ThreadSafe
public class RFC2109Spec extends cz.msebera.android.httpclient.impl.cookie.CookieSpecBase {
    static final java.lang.String[] DATE_PATTERNS = null;
    private final boolean oneHeader;

    static {
            java.lang.String r0 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r1 = "EEE, dd-MMM-yy HH:mm:ss zzz"
            java.lang.String r2 = "EEE MMM d HH:mm:ss yyyy"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec.DATE_PATTERNS = r0
            return
    }

    public RFC2109Spec() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    protected RFC2109Spec(boolean r1, cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r2) {
            r0 = this;
            r0.<init>(r2)
            r0.oneHeader = r1
            return
    }

    public RFC2109Spec(java.lang.String[] r4, boolean r5) {
            r3 = this;
            r0 = 7
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r0]
            cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r1.<init>()
            r2 = 1
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler r1 = new cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler
            r1.<init>()
            r2 = 2
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r1.<init>()
            r2 = 3
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r2 = 4
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r1.<init>()
            r2 = 5
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            if (r4 == 0) goto L3e
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            goto L40
        L3e:
            java.lang.String[] r4 = cz.msebera.android.httpclient.impl.cookie.RFC2109Spec.DATE_PATTERNS
        L40:
            r1.<init>(r4)
            r4 = 6
            r0[r4] = r1
            r3.<init>(r0)
            r3.oneHeader = r5
            return
    }

    private java.util.List<cz.msebera.android.httpclient.Header> doFormatManyHeaders(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.size()
            r0.<init>(r1)
            java.util.Iterator r6 = r6.iterator()
        Ld:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r6.next()
            cz.msebera.android.httpclient.cookie.Cookie r1 = (cz.msebera.android.httpclient.cookie.Cookie) r1
            int r2 = r1.getVersion()
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r4 = 40
            r3.<init>(r4)
            java.lang.String r4 = "Cookie: "
            r3.append(r4)
            java.lang.String r4 = "$Version="
            r3.append(r4)
            java.lang.String r4 = java.lang.Integer.toString(r2)
            r3.append(r4)
            java.lang.String r4 = "; "
            r3.append(r4)
            r5.formatCookieAsVer(r3, r1, r2)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r3)
            r0.add(r1)
            goto Ld
        L46:
            return r0
    }

    private java.util.List<cz.msebera.android.httpclient.Header> doFormatOneHeader(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r5) {
            r4 = this;
            java.util.Iterator r0 = r5.iterator()
            r1 = 2147483647(0x7fffffff, float:NaN)
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r0.next()
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2
            int r3 = r2.getVersion()
            if (r3 >= r1) goto L7
            int r1 = r2.getVersion()
            goto L7
        L1e:
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r2 = r5.size()
            int r2 = r2 * 40
            r0.<init>(r2)
            java.lang.String r2 = "Cookie"
            r0.append(r2)
            java.lang.String r2 = ": "
            r0.append(r2)
            java.lang.String r2 = "$Version="
            r0.append(r2)
            java.lang.String r2 = java.lang.Integer.toString(r1)
            r0.append(r2)
            java.util.Iterator r5 = r5.iterator()
        L43:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L58
            java.lang.Object r2 = r5.next()
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2
            java.lang.String r3 = "; "
            r0.append(r3)
            r4.formatCookieAsVer(r0, r2, r1)
            goto L43
        L58:
            java.util.ArrayList r5 = new java.util.ArrayList
            r1 = 1
            r5.<init>(r1)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r0)
            r5.add(r1)
            return r5
    }

    protected void formatCookieAsVer(cz.msebera.android.httpclient.util.CharArrayBuffer r4, cz.msebera.android.httpclient.cookie.Cookie r5, int r6) {
            r3 = this;
            java.lang.String r0 = r5.getName()
            java.lang.String r1 = r5.getValue()
            r3.formatParamAsVer(r4, r0, r1, r6)
            java.lang.String r0 = r5.getPath()
            java.lang.String r1 = "; "
            if (r0 == 0) goto L2e
            boolean r0 = r5 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r0 == 0) goto L2e
            r0 = r5
            cz.msebera.android.httpclient.cookie.ClientCookie r0 = (cz.msebera.android.httpclient.cookie.ClientCookie) r0
            java.lang.String r2 = "path"
            boolean r0 = r0.containsAttribute(r2)
            if (r0 == 0) goto L2e
            r4.append(r1)
            java.lang.String r0 = r5.getPath()
            java.lang.String r2 = "$Path"
            r3.formatParamAsVer(r4, r2, r0, r6)
        L2e:
            java.lang.String r0 = r5.getDomain()
            if (r0 == 0) goto L4f
            boolean r0 = r5 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r0 == 0) goto L4f
            r0 = r5
            cz.msebera.android.httpclient.cookie.ClientCookie r0 = (cz.msebera.android.httpclient.cookie.ClientCookie) r0
            java.lang.String r2 = "domain"
            boolean r0 = r0.containsAttribute(r2)
            if (r0 == 0) goto L4f
            r4.append(r1)
            java.lang.String r5 = r5.getDomain()
            java.lang.String r0 = "$Domain"
            r3.formatParamAsVer(r4, r0, r5, r6)
        L4f:
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r3) {
            r2 = this;
            java.lang.String r0 = "List of cookies"
            cz.msebera.android.httpclient.util.Args.notEmpty(r3, r0)
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L17
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r3)
            cz.msebera.android.httpclient.cookie.CookiePathComparator r3 = cz.msebera.android.httpclient.cookie.CookiePathComparator.INSTANCE
            java.util.Collections.sort(r0, r3)
            r3 = r0
        L17:
            boolean r0 = r2.oneHeader
            if (r0 == 0) goto L20
            java.util.List r3 = r2.doFormatOneHeader(r3)
            return r3
        L20:
            java.util.List r3 = r2.doFormatManyHeaders(r3)
            return r3
    }

    protected void formatParamAsVer(cz.msebera.android.httpclient.util.CharArrayBuffer r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = this;
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            if (r3 == 0) goto L1b
            if (r4 <= 0) goto L18
            r2 = 34
            r1.append(r2)
            r1.append(r3)
            r1.append(r2)
            goto L1b
        L18:
            r1.append(r3)
        L1b:
            return
    }

    @Override
    public int getVersion() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getVersionHeader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = r3.getName()
            java.lang.String r1 = "Set-Cookie"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L1f
            cz.msebera.android.httpclient.HeaderElement[] r3 = r3.getElements()
            java.util.List r3 = r2.parse(r3, r4)
            return r3
        L1f:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r4 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unrecognized cookie header '"
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = "'"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "rfc2109"
            return r0
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r4, cz.msebera.android.httpclient.cookie.CookieOrigin r5) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r3 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = r4.getName()
            r1 = 32
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L26
            java.lang.String r1 = "$"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L1e
            super.validate(r4, r5)
            return
        L1e:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r4 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r5 = "Cookie name may not start with $"
            r4.<init>(r5)
            throw r4
        L26:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r4 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r5 = "Cookie name may not contain blanks"
            r4.<init>(r5)
            throw r4
    }
}
