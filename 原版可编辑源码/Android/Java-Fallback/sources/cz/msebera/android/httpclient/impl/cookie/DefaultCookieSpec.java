package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class DefaultCookieSpec implements cz.msebera.android.httpclient.cookie.CookieSpec {
    private final cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec netscapeDraft;
    private final cz.msebera.android.httpclient.impl.cookie.RFC2109Spec obsoleteStrict;
    private final cz.msebera.android.httpclient.impl.cookie.RFC2965Spec strict;

    public DefaultCookieSpec() {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1)
            return
    }

    DefaultCookieSpec(cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r1, cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r2, cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r3) {
            r0 = this;
            r0.<init>()
            r0.strict = r1
            r0.obsoleteStrict = r2
            r0.netscapeDraft = r3
            return
    }

    public DefaultCookieSpec(java.lang.String[] r12, boolean r13) {
            r11 = this;
            r11.<init>()
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = new cz.msebera.android.httpclient.impl.cookie.RFC2965Spec
            r1 = 9
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r1 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r1]
            cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965VersionAttributeHandler
            r2.<init>()
            r3 = 0
            r1[r3] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r2.<init>()
            r4 = 1
            r1[r4] = r2
            cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DomainAttributeHandler
            r2.<init>()
            r5 = 2
            r1[r5] = r2
            cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965PortAttributeHandler
            r2.<init>()
            r6 = 3
            r1[r6] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r2.<init>()
            r7 = 4
            r1[r7] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r2.<init>()
            r8 = 5
            r1[r8] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r2.<init>()
            r9 = 6
            r1[r9] = r2
            cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965CommentUrlAttributeHandler
            r2.<init>()
            r10 = 7
            r1[r10] = r2
            cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2965DiscardAttributeHandler
            r2.<init>()
            r10 = 8
            r1[r10] = r2
            r0.<init>(r13, r1)
            r11.strict = r0
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r0 = new cz.msebera.android.httpclient.impl.cookie.RFC2109Spec
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r1 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r9]
            cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2109VersionHandler
            r2.<init>()
            r1[r3] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r2.<init>()
            r1[r4] = r2
            cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler r2 = new cz.msebera.android.httpclient.impl.cookie.RFC2109DomainHandler
            r2.<init>()
            r1[r5] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicMaxAgeHandler
            r2.<init>()
            r1[r6] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r2.<init>()
            r1[r7] = r2
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r2 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r2.<init>()
            r1[r8] = r2
            r0.<init>(r13, r1)
            r11.obsoleteStrict = r0
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r13 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r8]
            cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicDomainHandler
            r1.<init>()
            r0[r3] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r1.<init>()
            r0[r4] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r0[r5] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r1.<init>()
            r0[r6] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            if (r12 == 0) goto Lb5
            java.lang.Object r12 = r12.clone()
            java.lang.String[] r12 = (java.lang.String[]) r12
            goto Lbb
        Lb5:
            java.lang.String r12 = "EEE, dd-MMM-yy HH:mm:ss z"
            java.lang.String[] r12 = new java.lang.String[]{r12}
        Lbb:
            r1.<init>(r12)
            r0[r7] = r1
            r13.<init>(r0)
            r11.netscapeDraft = r13
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r6) {
            r5 = this;
            java.lang.String r0 = "List of cookies"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.util.Iterator r0 = r6.iterator()
            r1 = 2147483647(0x7fffffff, float:NaN)
            r2 = 1
        Ld:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L29
            java.lang.Object r3 = r0.next()
            cz.msebera.android.httpclient.cookie.Cookie r3 = (cz.msebera.android.httpclient.cookie.Cookie) r3
            boolean r4 = r3 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r4 != 0) goto L1e
            r2 = 0
        L1e:
            int r4 = r3.getVersion()
            if (r4 >= r1) goto Ld
            int r1 = r3.getVersion()
            goto Ld
        L29:
            if (r1 <= 0) goto L3b
            if (r2 == 0) goto L34
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = r5.strict
            java.util.List r6 = r0.formatCookies(r6)
            return r6
        L34:
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r0 = r5.obsoleteStrict
            java.util.List r6 = r0.formatCookies(r6)
            return r6
        L3b:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r0 = r5.netscapeDraft
            java.util.List r6 = r0.formatCookies(r6)
            return r6
    }

    @Override
    public int getVersion() {
            r1 = this;
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = r1.strict
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.Header getVersionHeader() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            int r0 = r2.getVersion()
            if (r0 <= 0) goto L22
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r0 == 0) goto L1b
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = r1.strict
            boolean r2 = r0.match(r2, r3)
            return r2
        L1b:
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r0 = r1.obsoleteStrict
            boolean r2 = r0.match(r2, r3)
            return r2
        L22:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r0 = r1.netscapeDraft
            boolean r2 = r0.match(r2, r3)
            return r2
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r10, cz.msebera.android.httpclient.cookie.CookieOrigin r11) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r9 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            cz.msebera.android.httpclient.HeaderElement[] r0 = r10.getElements()
            int r1 = r0.length
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
        L13:
            r6 = 1
            if (r3 >= r1) goto L2d
            r7 = r0[r3]
            java.lang.String r8 = "version"
            cz.msebera.android.httpclient.NameValuePair r8 = r7.getParameterByName(r8)
            if (r8 == 0) goto L21
            r5 = 1
        L21:
            java.lang.String r8 = "expires"
            cz.msebera.android.httpclient.NameValuePair r7 = r7.getParameterByName(r8)
            if (r7 == 0) goto L2a
            r4 = 1
        L2a:
            int r3 = r3 + 1
            goto L13
        L2d:
            if (r4 != 0) goto L4c
            if (r5 != 0) goto L32
            goto L4c
        L32:
            java.lang.String r10 = r10.getName()
            java.lang.String r1 = "Set-Cookie2"
            boolean r10 = r1.equals(r10)
            if (r10 == 0) goto L45
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r10 = r9.strict
            java.util.List r10 = r10.parse(r0, r11)
            return r10
        L45:
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r10 = r9.obsoleteStrict
            java.util.List r10 = r10.parse(r0, r11)
            return r10
        L4c:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser r0 = cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.DEFAULT
            boolean r1 = r10 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r1 == 0) goto L66
            cz.msebera.android.httpclient.FormattedHeader r10 = (cz.msebera.android.httpclient.FormattedHeader) r10
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r10.getBuffer()
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r10 = r10.getValuePos()
            int r4 = r1.length()
            r3.<init>(r10, r4)
            goto L81
        L66:
            java.lang.String r10 = r10.getValue()
            if (r10 == 0) goto L90
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r3 = r10.length()
            r1.<init>(r3)
            r1.append(r10)
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r10 = r1.length()
            r3.<init>(r2, r10)
        L81:
            cz.msebera.android.httpclient.HeaderElement[] r10 = new cz.msebera.android.httpclient.HeaderElement[r6]
            cz.msebera.android.httpclient.HeaderElement r0 = r0.parseHeader(r1, r3)
            r10[r2] = r0
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r0 = r9.netscapeDraft
            java.util.List r10 = r0.parse(r10, r11)
            return r10
        L90:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r10 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r11 = "Header value is null"
            r10.<init>(r11)
            throw r10
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "default"
            return r0
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r2, cz.msebera.android.httpclient.cookie.CookieOrigin r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            int r0 = r2.getVersion()
            if (r0 <= 0) goto L20
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r0 == 0) goto L1a
            cz.msebera.android.httpclient.impl.cookie.RFC2965Spec r0 = r1.strict
            r0.validate(r2, r3)
            goto L25
        L1a:
            cz.msebera.android.httpclient.impl.cookie.RFC2109Spec r0 = r1.obsoleteStrict
            r0.validate(r2, r3)
            goto L25
        L20:
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftSpec r0 = r1.netscapeDraft
            r0.validate(r2, r3)
        L25:
            return
    }
}
