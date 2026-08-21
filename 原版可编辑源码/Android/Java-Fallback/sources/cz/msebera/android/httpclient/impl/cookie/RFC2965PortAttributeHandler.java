package cz.msebera.android.httpclient.impl.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public class RFC2965PortAttributeHandler implements cz.msebera.android.httpclient.cookie.CommonCookieAttributeHandler {
    public RFC2965PortAttributeHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int[] parsePortAttribute(java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            java.util.StringTokenizer r0 = new java.util.StringTokenizer
            java.lang.String r1 = ","
            r0.<init>(r3, r1)
            int r3 = r0.countTokens()
            int[] r3 = new int[r3]
            r1 = 0
        Le:
            boolean r2 = r0.hasMoreTokens()     // Catch: java.lang.NumberFormatException -> L32
            if (r2 == 0) goto L31
            java.lang.String r2 = r0.nextToken()     // Catch: java.lang.NumberFormatException -> L32
            java.lang.String r2 = r2.trim()     // Catch: java.lang.NumberFormatException -> L32
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L32
            r3[r1] = r2     // Catch: java.lang.NumberFormatException -> L32
            r2 = r3[r1]     // Catch: java.lang.NumberFormatException -> L32
            if (r2 < 0) goto L29
            int r1 = r1 + 1
            goto Le
        L29:
            cz.msebera.android.httpclient.cookie.MalformedCookieException r3 = new cz.msebera.android.httpclient.cookie.MalformedCookieException     // Catch: java.lang.NumberFormatException -> L32
            java.lang.String r0 = "Invalid Port attribute."
            r3.<init>(r0)     // Catch: java.lang.NumberFormatException -> L32
            throw r3     // Catch: java.lang.NumberFormatException -> L32
        L31:
            return r3
        L32:
            r3 = move-exception
            cz.msebera.android.httpclient.cookie.MalformedCookieException r0 = new cz.msebera.android.httpclient.cookie.MalformedCookieException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid Port attribute: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static boolean portMatch(int r4, int[] r5) {
            int r0 = r5.length
            r1 = 0
            r2 = 0
        L3:
            if (r2 >= r0) goto Le
            r3 = r5[r2]
            if (r4 != r3) goto Lb
            r1 = 1
            goto Le
        Lb:
            int r2 = r2 + 1
            goto L3
        Le:
            return r1
    }

    @Override
    public java.lang.String getAttributeName() {
            r1 = this;
            java.lang.String r0 = "port"
            return r0
    }

    @Override
    public boolean match(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            int r4 = r4.getPort()
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r0 == 0) goto L30
            r0 = r3
            cz.msebera.android.httpclient.cookie.ClientCookie r0 = (cz.msebera.android.httpclient.cookie.ClientCookie) r0
            java.lang.String r1 = "port"
            boolean r0 = r0.containsAttribute(r1)
            if (r0 == 0) goto L30
            int[] r0 = r3.getPorts()
            r1 = 0
            if (r0 != 0) goto L25
            return r1
        L25:
            int[] r3 = r3.getPorts()
            boolean r3 = portMatch(r4, r3)
            if (r3 != 0) goto L30
            return r1
        L30:
            r3 = 1
            return r3
    }

    @Override
    public void parse(cz.msebera.android.httpclient.cookie.SetCookie r2, java.lang.String r3) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r1 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.cookie.SetCookie2
            if (r0 == 0) goto L1e
            cz.msebera.android.httpclient.cookie.SetCookie2 r2 = (cz.msebera.android.httpclient.cookie.SetCookie2) r2
            if (r3 == 0) goto L1e
            java.lang.String r0 = r3.trim()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1e
            int[] r3 = parsePortAttribute(r3)
            r2.setPorts(r3)
        L1e:
            return
    }

    @Override
    public void validate(cz.msebera.android.httpclient.cookie.Cookie r3, cz.msebera.android.httpclient.cookie.CookieOrigin r4) throws cz.msebera.android.httpclient.cookie.MalformedCookieException {
            r2 = this;
            java.lang.String r0 = "Cookie"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = "Cookie origin"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            int r4 = r4.getPort()
            boolean r0 = r3 instanceof cz.msebera.android.httpclient.cookie.ClientCookie
            if (r0 == 0) goto L30
            r0 = r3
            cz.msebera.android.httpclient.cookie.ClientCookie r0 = (cz.msebera.android.httpclient.cookie.ClientCookie) r0
            java.lang.String r1 = "port"
            boolean r0 = r0.containsAttribute(r1)
            if (r0 == 0) goto L30
            int[] r3 = r3.getPorts()
            boolean r3 = portMatch(r4, r3)
            if (r3 == 0) goto L28
            goto L30
        L28:
            cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException r3 = new cz.msebera.android.httpclient.cookie.CookieRestrictionViolationException
            java.lang.String r4 = "Port attribute violates RFC 2965: Request port not found in cookie's port list."
            r3.<init>(r4)
            throw r3
        L30:
            return
    }
}
