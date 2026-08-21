package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BrowserCompatSpec extends cz.msebera.android.httpclient.impl.cookie.CookieSpecBase {
    private static final java.lang.String[] DEFAULT_DATE_PATTERNS = null;


    static {
            java.lang.String r0 = "EEE, dd MMM yyyy HH:mm:ss zzz"
            java.lang.String r1 = "EEE, dd-MMM-yy HH:mm:ss zzz"
            java.lang.String r2 = "EEE MMM d HH:mm:ss yyyy"
            java.lang.String r3 = "EEE, dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r4 = "EEE, dd-MMM-yyyy HH-mm-ss z"
            java.lang.String r5 = "EEE, dd MMM yy HH:mm:ss z"
            java.lang.String r6 = "EEE dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r7 = "EEE dd MMM yyyy HH:mm:ss z"
            java.lang.String r8 = "EEE dd-MMM-yyyy HH-mm-ss z"
            java.lang.String r9 = "EEE dd-MMM-yy HH:mm:ss z"
            java.lang.String r10 = "EEE dd MMM yy HH:mm:ss z"
            java.lang.String r11 = "EEE,dd-MMM-yy HH:mm:ss z"
            java.lang.String r12 = "EEE,dd-MMM-yyyy HH:mm:ss z"
            java.lang.String r13 = "EEE, dd-MM-yyyy HH:mm:ss z"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13}
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec.DEFAULT_DATE_PATTERNS = r0
            return
    }

    public BrowserCompatSpec() {
            r2 = this;
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r0 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT
            r1 = 0
            r2.<init>(r1, r0)
            return
    }

    public BrowserCompatSpec(java.lang.String[] r2) {
            r1 = this;
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r0 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_DEFAULT
            r1.<init>(r2, r0)
            return
    }

    public BrowserCompatSpec(java.lang.String[] r4, cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel r5) {
            r3 = this;
            r0 = 7
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r0]
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatVersionAttributeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatVersionAttributeHandler
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler
            r1.<init>()
            r2 = 1
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory$SecurityLevel r1 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpecFactory.SecurityLevel.SECURITYLEVEL_IE_MEDIUM
            if (r5 != r1) goto L1d
            cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec$1 r5 = new cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec$1
            r5.<init>()
            goto L22
        L1d:
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r5 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r5.<init>()
        L22:
            r1 = 2
            r0[r1] = r5
            r5 = 3
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r1.<init>()
            r0[r5] = r1
            r5 = 4
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r0[r5] = r1
            r5 = 5
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r1.<init>()
            r0[r5] = r1
            r5 = 6
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            if (r4 == 0) goto L49
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            goto L4b
        L49:
            java.lang.String[] r4 = cz.msebera.android.httpclient.impl.cookie.BrowserCompatSpec.DEFAULT_DATE_PATTERNS
        L4b:
            r1.<init>(r4)
            r0[r5] = r1
            r3.<init>(r0)
            return
    }

    private static boolean isQuoteEnclosed(java.lang.String r2) {
            if (r2 == 0) goto L12
            java.lang.String r0 = "\""
            boolean r1 = r2.startsWith(r0)
            if (r1 == 0) goto L12
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r8) {
            r7 = this;
            java.lang.String r0 = "List of cookies"
            cz.msebera.android.httpclient.util.Args.notEmpty(r8, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r8.size()
            int r1 = r1 * 20
            r0.<init>(r1)
            java.lang.String r1 = "Cookie"
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            r1 = 0
            r2 = 0
        L1c:
            int r3 = r8.size()
            if (r2 >= r3) goto L5e
            java.lang.Object r3 = r8.get(r2)
            cz.msebera.android.httpclient.cookie.Cookie r3 = (cz.msebera.android.httpclient.cookie.Cookie) r3
            if (r2 <= 0) goto L2f
            java.lang.String r4 = "; "
            r0.append(r4)
        L2f:
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = r3.getValue()
            int r3 = r3.getVersion()
            if (r3 <= 0) goto L4e
            boolean r3 = isQuoteEnclosed(r5)
            if (r3 != 0) goto L4e
            cz.msebera.android.httpclient.message.BasicHeaderValueFormatter r3 = cz.msebera.android.httpclient.message.BasicHeaderValueFormatter.INSTANCE
            cz.msebera.android.httpclient.message.BasicHeaderElement r6 = new cz.msebera.android.httpclient.message.BasicHeaderElement
            r6.<init>(r4, r5)
            r3.formatHeaderElement(r0, r6, r1)
            goto L5b
        L4e:
            r0.append(r4)
            java.lang.String r3 = "="
            r0.append(r3)
            if (r5 == 0) goto L5b
            r0.append(r5)
        L5b:
            int r2 = r2 + 1
            goto L1c
        L5e:
            java.util.ArrayList r8 = new java.util.ArrayList
            r1 = 1
            r8.<init>(r1)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r0)
            r8.add(r1)
            return r8
    }

    @Override
    public int getVersion() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getVersionHeader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r10, cz.msebera.android.httpclient.cookie.CookieOrigin r11) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r9 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.lang.String r0 = r10.getName()
            java.lang.String r1 = "Set-Cookie"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Le4
            cz.msebera.android.httpclient.HeaderElement[] r0 = r10.getElements()
            int r1 = r0.length
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
        L1f:
            r6 = 1
            if (r3 >= r1) goto L39
            r7 = r0[r3]
            java.lang.String r8 = "version"
            cz.msebera.android.httpclient.NameValuePair r8 = r7.getParameterByName(r8)
            if (r8 == 0) goto L2d
            r5 = 1
        L2d:
            java.lang.String r8 = "expires"
            cz.msebera.android.httpclient.NameValuePair r7 = r7.getParameterByName(r8)
            if (r7 == 0) goto L36
            r4 = 1
        L36:
            int r3 = r3 + 1
            goto L1f
        L39:
            if (r4 != 0) goto L43
            if (r5 != 0) goto L3e
            goto L43
        L3e:
            java.util.List r10 = r9.parse(r0, r11)
            return r10
        L43:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser r0 = cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.DEFAULT
            boolean r1 = r10 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r1 == 0) goto L5d
            cz.msebera.android.httpclient.FormattedHeader r10 = (cz.msebera.android.httpclient.FormattedHeader) r10
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r10.getBuffer()
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r10 = r10.getValuePos()
            int r5 = r1.length()
            r3.<init>(r10, r5)
            goto L78
        L5d:
            java.lang.String r10 = r10.getValue()
            if (r10 == 0) goto Ldc
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r3 = r10.length()
            r1.<init>(r3)
            r1.append(r10)
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r10 = r1.length()
            r3.<init>(r2, r10)
        L78:
            cz.msebera.android.httpclient.HeaderElement r10 = r0.parseHeader(r1, r3)
            java.lang.String r0 = r10.getName()
            java.lang.String r1 = r10.getValue()
            if (r0 == 0) goto Ld4
            boolean r3 = r0.isEmpty()
            if (r3 != 0) goto Ld4
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r3 = new cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            r3.<init>(r0, r1)
            java.lang.String r0 = getDefaultPath(r11)
            r3.setPath(r0)
            java.lang.String r11 = getDefaultDomain(r11)
            r3.setDomain(r11)
            cz.msebera.android.httpclient.NameValuePair[] r10 = r10.getParameters()
            int r11 = r10.length
            int r11 = r11 - r6
        La5:
            if (r11 < 0) goto Lca
            r0 = r10[r11]
            java.lang.String r1 = r0.getName()
            java.util.Locale r5 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toLowerCase(r5)
            java.lang.String r5 = r0.getValue()
            r3.setAttribute(r1, r5)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r1 = r9.findAttribHandler(r1)
            if (r1 == 0) goto Lc7
            java.lang.String r0 = r0.getValue()
            r1.parse(r3, r0)
        Lc7:
            int r11 = r11 + (-1)
            goto La5
        Lca:
            if (r4 == 0) goto Lcf
            r3.setVersion(r2)
        Lcf:
            java.util.List r10 = java.util.Collections.singletonList(r3)
            return r10
        Ld4:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r10 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r11 = "Cookie name may not be empty"
            r10.<init>(r11)
            throw r10
        Ldc:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r10 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r11 = "Header value is null"
            r10.<init>(r11)
            throw r10
        Le4:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r11 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unrecognized cookie header '"
            r0.append(r1)
            java.lang.String r10 = r10.toString()
            r0.append(r10)
            java.lang.String r10 = "'"
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            r11.<init>(r10)
            throw r11
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "compatibility"
            return r0
    }
}
