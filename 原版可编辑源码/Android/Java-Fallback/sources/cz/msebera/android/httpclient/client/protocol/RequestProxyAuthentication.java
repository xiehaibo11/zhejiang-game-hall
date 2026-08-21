package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class RequestProxyAuthentication extends cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase {
    public RequestProxyAuthentication() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r4 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "Proxy-Authorization"
            boolean r0 = r5.containsHeader(r0)
            if (r0 == 0) goto L13
            return
        L13:
            java.lang.String r0 = "http.connection"
            java.lang.Object r0 = r6.getAttribute(r0)
            cz.msebera.android.httpclient.conn.HttpRoutedConnection r0 = (cz.msebera.android.httpclient.conn.HttpRoutedConnection) r0
            if (r0 != 0) goto L25
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "HTTP connection not set in the context"
            r5.debug(r6)
            return
        L25:
            cz.msebera.android.httpclient.conn.routing.HttpRoute r0 = r0.getRoute()
            boolean r0 = r0.isTunnelled()
            if (r0 == 0) goto L30
            return
        L30:
            java.lang.String r0 = "http.auth.proxy-scope"
            java.lang.Object r0 = r6.getAttribute(r0)
            cz.msebera.android.httpclient.auth.AuthState r0 = (cz.msebera.android.httpclient.auth.AuthState) r0
            if (r0 != 0) goto L42
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "Proxy auth state not set in the context"
            r5.debug(r6)
            return
        L42:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L64
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Proxy auth state: "
            r2.append(r3)
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r0.getState()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L64:
            r4.process(r0, r5, r6)
            return
    }
}
