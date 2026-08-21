package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public abstract class CookieSpecBase extends cz.msebera.android.httpclient.impl.cookie.AbstractCookieSpec {
    public CookieSpecBase() {
            r0 = this;
            r0.<init>()
            return
    }

    protected CookieSpecBase(java.util.HashMap<java.lang.String, cz.msebera.android.httpclient.cookie.CookieAttributeHandler> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected CookieSpecBase(cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler... r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected static java.lang.String getDefaultDomain(cz.msebera.android.httpclient.cookie.CookieOrigin r0) {
            java.lang.String r0 = r0.getHost()
            return r0
    }

    protected static java.lang.String getDefaultPath(cz.msebera.android.httpclient.cookie.CookieOrigin r2) {
            java.lang.String r2 = r2.getPath()
            r0 = 47
            int r0 = r2.lastIndexOf(r0)
            if (r0 < 0) goto L14
            if (r0 != 0) goto Lf
            r0 = 1
        Lf:
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
        L14:
            return r2
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.Collection r0 = r2.getAttribHandlers()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r1 = (cz.msebera.android.httpclient.cookie.CookieAttributeHandler) r1
            boolean r1 = r1.match(r3, r4)
            if (r1 != 0) goto L12
            r3 = 0
            return r3
        L26:
            r3 = 1
            return r3
    }

    protected java.util.List<cz.msebera.android.httpclient.cookie.Cookie> parse(cz.msebera.android.httpclient.HeaderElement[] r10, cz.msebera.android.httpclient.cookie.CookieOrigin r11) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r9 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r10.length
            r0.<init>(r1)
            int r1 = r10.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L69
            r3 = r10[r2]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = r3.getValue()
            if (r4 == 0) goto L61
            boolean r6 = r4.isEmpty()
            if (r6 != 0) goto L61
            cz.msebera.android.httpclient.impl.cookie.BasicClientCookie r6 = new cz.msebera.android.httpclient.impl.cookie.BasicClientCookie
            r6.<init>(r4, r5)
            java.lang.String r4 = getDefaultPath(r11)
            r6.setPath(r4)
            java.lang.String r4 = getDefaultDomain(r11)
            r6.setDomain(r4)
            cz.msebera.android.httpclient.NameValuePair[] r3 = r3.getParameters()
            int r4 = r3.length
            int r4 = r4 + (-1)
        L36:
            if (r4 < 0) goto L5b
            r5 = r3[r4]
            java.lang.String r7 = r5.getName()
            java.util.Locale r8 = java.util.Locale.ROOT
            java.lang.String r7 = r7.toLowerCase(r8)
            java.lang.String r8 = r5.getValue()
            r6.setAttribute(r7, r8)
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r7 = r9.findAttribHandler(r7)
            if (r7 == 0) goto L58
            java.lang.String r5 = r5.getValue()
            r7.parse(r6, r5)
        L58:
            int r4 = r4 + (-1)
            goto L36
        L5b:
            r0.add(r6)
            int r2 = r2 + 1
            goto L8
        L61:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r10 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.String r11 = "Cookie name may not be empty"
            r10.<init>(r11)
            throw r10
        L69:
            return r0
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.Collection r0 = r2.getAttribHandlers()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.cookie.CookieAttributeHandler r1 = (cz.msebera.android.httpclient.cookie.CookieAttributeHandler) r1
            r1.validate(r3, r4)
            goto L12
        L22:
            return
    }
}
