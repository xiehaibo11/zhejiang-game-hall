package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestAddCookies implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public RequestAddCookies() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r12, cz.msebera.android.httpclient.protocol.HttpContext r13) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r11 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r0)
            cz.msebera.android.httpclient.RequestLine r0 = r12.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "CONNECT"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L1b
            return
        L1b:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r13)
            cz.msebera.android.httpclient.client.CookieStore r1 = r0.getCookieStore()
            if (r1 != 0) goto L2d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            java.lang.String r13 = "Cookie store not specified in HTTP context"
            r12.debug(r13)
            return
        L2d:
            cz.msebera.android.httpclient.config.Lookup r2 = r0.getCookieSpecRegistry()
            if (r2 != 0) goto L3b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            java.lang.String r13 = "CookieSpec registry not specified in HTTP context"
            r12.debug(r13)
            return
        L3b:
            cz.msebera.android.httpclient.HttpHost r3 = r0.getTargetHost()
            if (r3 != 0) goto L49
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            java.lang.String r13 = "Target host not set in the context"
            r12.debug(r13)
            return
        L49:
            cz.msebera.android.httpclient.conn.routing.RouteInfo r4 = r0.getHttpRoute()
            if (r4 != 0) goto L57
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            java.lang.String r13 = "Connection route not set in the context"
            r12.debug(r13)
            return
        L57:
            cz.msebera.android.httpclient.client.config.RequestConfig r5 = r0.getRequestConfig()
            java.lang.String r5 = r5.getCookieSpec()
            if (r5 != 0) goto L63
            java.lang.String r5 = "default"
        L63:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L81
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "CookieSpec selected: "
            r7.append(r8)
            r7.append(r5)
            java.lang.String r7 = r7.toString()
            r6.debug(r7)
        L81:
            boolean r6 = r12 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            r7 = 0
            if (r6 == 0) goto L8e
            r6 = r12
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r6 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r6
            java.net.URI r6 = r6.getURI()
            goto L9d
        L8e:
            java.net.URI r6 = new java.net.URI     // Catch: java.net.URISyntaxException -> L9c
            cz.msebera.android.httpclient.RequestLine r8 = r12.getRequestLine()     // Catch: java.net.URISyntaxException -> L9c
            java.lang.String r8 = r8.getUri()     // Catch: java.net.URISyntaxException -> L9c
            r6.<init>(r8)     // Catch: java.net.URISyntaxException -> L9c
            goto L9d
        L9c:
            r6 = r7
        L9d:
            if (r6 == 0) goto La3
            java.lang.String r7 = r6.getPath()
        La3:
            java.lang.String r6 = r3.getHostName()
            int r3 = r3.getPort()
            if (r3 >= 0) goto Lb5
            cz.msebera.android.httpclient.HttpHost r3 = r4.getTargetHost()
            int r3 = r3.getPort()
        Lb5:
            cz.msebera.android.httpclient.cookie.CookieOrigin r8 = new cz.msebera.android.httpclient.cookie.CookieOrigin
            r9 = 0
            if (r3 < 0) goto Lbb
            goto Lbc
        Lbb:
            r3 = 0
        Lbc:
            boolean r10 = cz.msebera.android.httpclient.util.TextUtils.isEmpty(r7)
            if (r10 != 0) goto Lc3
            goto Lc5
        Lc3:
            java.lang.String r7 = "/"
        Lc5:
            boolean r4 = r4.isSecure()
            r8.<init>(r6, r3, r7, r4)
            java.lang.Object r2 = r2.lookup(r5)
            cz.msebera.android.httpclient.cookie.CookieSpecProvider r2 = (cz.msebera.android.httpclient.cookie.CookieSpecProvider) r2
            if (r2 != 0) goto Lf3
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            boolean r12 = r12.isDebugEnabled()
            if (r12 == 0) goto Lf2
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r12 = r11.log
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = "Unsupported cookie policy: "
            r13.append(r0)
            r13.append(r5)
            java.lang.String r13 = r13.toString()
            r12.debug(r13)
        Lf2:
            return
        Lf3:
            cz.msebera.android.httpclient.cookie.CookieSpec r0 = r2.create(r0)
            java.util.List r2 = r1.getCookies()
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.Date r4 = new java.util.Date
            r4.<init>()
            java.util.Iterator r2 = r2.iterator()
        L109:
            boolean r5 = r2.hasNext()
            if (r5 == 0) goto L16f
            java.lang.Object r5 = r2.next()
            cz.msebera.android.httpclient.cookie.Cookie r5 = (cz.msebera.android.httpclient.cookie.Cookie) r5
            boolean r6 = r5.isExpired(r4)
            java.lang.String r7 = "Cookie "
            if (r6 != 0) goto L14b
            boolean r6 = r0.match(r5, r8)
            if (r6 == 0) goto L109
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L147
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r7)
            r10.append(r5)
            java.lang.String r7 = " match "
            r10.append(r7)
            r10.append(r8)
            java.lang.String r7 = r10.toString()
            r6.debug(r7)
        L147:
            r3.add(r5)
            goto L109
        L14b:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L16c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r11.log
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r7)
            r9.append(r5)
            java.lang.String r5 = " expired"
            r9.append(r5)
            java.lang.String r5 = r9.toString()
            r6.debug(r5)
        L16c:
            r5 = 1
            r9 = 1
            goto L109
        L16f:
            if (r9 == 0) goto L174
            r1.clearExpired(r4)
        L174:
            boolean r1 = r3.isEmpty()
            if (r1 != 0) goto L192
            java.util.List r1 = r0.formatCookies(r3)
            java.util.Iterator r1 = r1.iterator()
        L182:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L192
            java.lang.Object r2 = r1.next()
            cz.msebera.android.httpclient.Header r2 = (cz.msebera.android.httpclient.Header) r2
            r12.addHeader(r2)
            goto L182
        L192:
            int r1 = r0.getVersion()
            if (r1 <= 0) goto L1a1
            cz.msebera.android.httpclient.Header r1 = r0.getVersionHeader()
            if (r1 == 0) goto L1a1
            r12.addHeader(r1)
        L1a1:
            java.lang.String r12 = "http.cookie-spec"
            r13.setAttribute(r12, r0)
            java.lang.String r12 = "http.cookie-origin"
            r13.setAttribute(r12, r8)
            return
    }
}
