package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Obsolete
@cz.msebera.android.httpclient.annotation.ThreadSafe
public class NetscapeDraftSpec extends cz.msebera.android.httpclient.impl.cookie.CookieSpecBase {
    protected static final java.lang.String EXPIRES_PATTERN = "EEE, dd-MMM-yy HH:mm:ss z";

    public NetscapeDraftSpec() {
            r1 = this;
            r0 = 0
            java.lang.String[] r0 = (java.lang.String[]) r0
            r1.<init>(r0)
            return
    }

    NetscapeDraftSpec(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public NetscapeDraftSpec(java.lang.String[] r4) {
            r3 = this;
            r0 = 5
            cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[] r0 = new cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler[r0]
            cz.msebera.android.httpclient.impl.cookie.BasicPathHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicPathHandler
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.NetscapeDomainHandler r1 = new cz.msebera.android.httpclient.impl.cookie.NetscapeDomainHandler
            r1.<init>()
            r2 = 1
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicSecureHandler
            r1.<init>()
            r2 = 2
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicCommentHandler
            r1.<init>()
            r2 = 3
            r0[r2] = r1
            cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler r1 = new cz.msebera.android.httpclient.impl.cookie.BasicExpiresHandler
            if (r4 == 0) goto L2e
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            goto L34
        L2e:
            java.lang.String r4 = "EEE, dd-MMM-yy HH:mm:ss z"
            java.lang.String[] r4 = new java.lang.String[]{r4}
        L34:
            r1.<init>(r4)
            r4 = 4
            r0[r4] = r1
            r3.<init>(r0)
            return
    }

    @Override
    public java.util.List<cz.msebera.android.httpclient.Header> formatCookies(java.util.List<cz.msebera.android.httpclient.cookie.Cookie> r5) {
            r4 = this;
            java.lang.String r0 = "List of cookies"
            cz.msebera.android.httpclient.util.Args.notEmpty(r5, r0)
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r5.size()
            int r1 = r1 * 20
            r0.<init>(r1)
            java.lang.String r1 = "Cookie"
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            r1 = 0
        L1b:
            int r2 = r5.size()
            if (r1 >= r2) goto L46
            java.lang.Object r2 = r5.get(r1)
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2
            if (r1 <= 0) goto L2e
            java.lang.String r3 = "; "
            r0.append(r3)
        L2e:
            java.lang.String r3 = r2.getName()
            r0.append(r3)
            java.lang.String r2 = r2.getValue()
            if (r2 == 0) goto L43
            java.lang.String r3 = "="
            r0.append(r3)
            r0.append(r2)
        L43:
            int r1 = r1 + 1
            goto L1b
        L46:
            java.util.ArrayList r5 = new java.util.ArrayList
            r1 = 1
            r5.<init>(r1)
            cz.msebera.android.httpclient.message.BufferedHeader r1 = new cz.msebera.android.httpclient.message.BufferedHeader
            r1.<init>(r0)
            r5.add(r1)
            return r5
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
    public java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.Header r6, cz.msebera.android.httpclient.cookie.CookieOrigin r7) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r5 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = r6.getName()
            java.lang.String r1 = "Set-Cookie"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L62
            cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser r0 = cz.msebera.android.httpclient.impl.cookie.NetscapeDraftHeaderParser.DEFAULT
            boolean r1 = r6 instanceof cz.msebera.android.httpclient.FormattedHeader
            r2 = 0
            if (r1 == 0) goto L31
            cz.msebera.android.httpclient.FormattedHeader r6 = (cz.msebera.android.httpclient.FormattedHeader) r6
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = r6.getBuffer()
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r6 = r6.getValuePos()
            int r4 = r1.length()
            r3.<init>(r6, r4)
            goto L4c
        L31:
            java.lang.String r6 = r6.getValue()
            if (r6 == 0) goto L5a
            cz.msebera.android.httpclient.util.CharArrayBuffer r1 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r3 = r6.length()
            r1.<init>(r3)
            r1.append(r6)
            cz.msebera.android.httpclient.message.ParserCursor r3 = new cz.msebera.android.httpclient.message.ParserCursor
            int r6 = r1.length()
            r3.<init>(r2, r6)
        L4c:
            r6 = 1
            cz.msebera.android.httpclient.HeaderElement[] r6 = new cz.msebera.android.httpclient.HeaderElement[r6]
            cz.msebera.android.httpclient.HeaderElement r0 = r0.parseHeader(r1, r3)
            r6[r2] = r0
            java.util.List r6 = r5.parse(r6, r7)
            return r6
        L5a:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r6 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r7 = "Header value is null"
            r6.<init>(r7)
            throw r6
        L62:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r7 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unrecognized cookie header '"
            r0.append(r1)
            java.lang.String r6 = r6.toString()
            r0.append(r6)
            java.lang.String r6 = "'"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7.<init>(r6)
            throw r7
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "netscape"
            return r0
    }
}
