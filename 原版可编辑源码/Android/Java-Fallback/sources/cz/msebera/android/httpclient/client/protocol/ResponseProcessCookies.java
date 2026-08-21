package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class ResponseProcessCookies implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public ResponseProcessCookies() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    private static java.lang.String formatCooke(cz.msebera.android.httpclient.cookie.Cookie r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r1 = "=\""
            r0.append(r1)
            java.lang.String r1 = r5.getValue()
            if (r1 == 0) goto L38
            int r2 = r1.length()
            r3 = 100
            if (r2 <= r3) goto L35
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r4 = 0
            java.lang.String r1 = r1.substring(r4, r3)
            r2.append(r1)
            java.lang.String r1 = "..."
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L35:
            r0.append(r1)
        L38:
            java.lang.String r1 = "\""
            r0.append(r1)
            java.lang.String r1 = ", version:"
            r0.append(r1)
            int r1 = r5.getVersion()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r1 = ", domain:"
            r0.append(r1)
            java.lang.String r1 = r5.getDomain()
            r0.append(r1)
            java.lang.String r1 = ", path:"
            r0.append(r1)
            java.lang.String r1 = r5.getPath()
            r0.append(r1)
            java.lang.String r1 = ", expiry:"
            r0.append(r1)
            java.util.Date r5 = r5.getExpiryDate()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
    }

    private void processCookies(cz.msebera.android.httpclient.HeaderIterator r8, cz.msebera.android.httpclient.cookie.CookieSpec r9, cz.msebera.android.httpclient.cookie.CookieOrigin r10, cz.msebera.android.httpclient.client.CookieStore r11) {
            r7 = this;
        L0:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto La9
            cz.msebera.android.httpclient.Header r0 = r8.nextHeader()
            java.util.List r1 = r9.parse(r0, r10)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.util.Iterator r1 = r1.iterator()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
        L12:
            boolean r2 = r1.hasNext()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            if (r2 == 0) goto L0
            java.lang.Object r2 = r1.next()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            cz.msebera.android.httpclient.cookie.Cookie r2 = (cz.msebera.android.httpclient.cookie.Cookie) r2     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            r9.validate(r2, r10)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            r11.addCookie(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            boolean r3 = r3.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            if (r3 == 0) goto L12
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            r4.<init>()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            java.lang.String r5 = "Cookie accepted ["
            r4.append(r5)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            java.lang.String r5 = formatCooke(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            r4.append(r5)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            java.lang.String r5 = "]"
            r4.append(r5)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            java.lang.String r4 = r4.toString()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            r3.debug(r4)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L4c
            goto L12
        L4c:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.log     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            boolean r4 = r4.isWarnEnabled()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            if (r4 == 0) goto L12
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r7.log     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            r5.<init>()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.String r6 = "Cookie rejected ["
            r5.append(r6)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.String r2 = formatCooke(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            r5.append(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.String r2 = "] "
            r5.append(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.String r2 = r3.getMessage()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            r5.append(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            java.lang.String r2 = r5.toString()     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            r4.warn(r2)     // Catch: cz.msebera.android.httpclient.cookie.MalformedCookieException -> L7c
            goto L12
        L7c:
            r1 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            boolean r2 = r2.isWarnEnabled()
            if (r2 == 0) goto L0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Invalid cookie header: \""
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "\". "
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.warn(r0)
            goto L0
        La9:
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r3 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r5 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r5)
            cz.msebera.android.httpclient.cookie.CookieSpec r0 = r5.getCookieSpec()
            if (r0 != 0) goto L1c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Cookie spec not specified in HTTP context"
            r4.debug(r5)
            return
        L1c:
            cz.msebera.android.httpclient.client.CookieStore r1 = r5.getCookieStore()
            if (r1 != 0) goto L2a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Cookie store not specified in HTTP context"
            r4.debug(r5)
            return
        L2a:
            cz.msebera.android.httpclient.cookie.CookieOrigin r5 = r5.getCookieOrigin()
            if (r5 != 0) goto L38
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r3.log
            java.lang.String r5 = "Cookie origin not specified in HTTP context"
            r4.debug(r5)
            return
        L38:
            java.lang.String r2 = "Set-Cookie"
            cz.msebera.android.httpclient.HeaderIterator r2 = r4.headerIterator(r2)
            r3.processCookies(r2, r0, r5, r1)
            int r2 = r0.getVersion()
            if (r2 <= 0) goto L50
            java.lang.String r2 = "Set-Cookie2"
            cz.msebera.android.httpclient.HeaderIterator r4 = r4.headerIterator(r2)
            r3.processCookies(r4, r0, r5, r1)
        L50:
            return
    }
}
