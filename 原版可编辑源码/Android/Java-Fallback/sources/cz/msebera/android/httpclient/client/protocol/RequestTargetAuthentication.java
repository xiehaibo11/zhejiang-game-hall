package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class RequestTargetAuthentication extends cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase {
    public RequestTargetAuthentication() {
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
            cz.msebera.android.httpclient.RequestLine r0 = r5.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            java.lang.String r1 = "CONNECT"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L1b
            return
        L1b:
            java.lang.String r0 = "Authorization"
            boolean r0 = r5.containsHeader(r0)
            if (r0 == 0) goto L24
            return
        L24:
            java.lang.String r0 = "http.auth.target-scope"
            java.lang.Object r0 = r6.getAttribute(r0)
            cz.msebera.android.httpclient.auth.AuthState r0 = (cz.msebera.android.httpclient.auth.AuthState) r0
            if (r0 != 0) goto L36
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "Target auth state not set in the context"
            r5.debug(r6)
            return
        L36:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L58
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Target auth state: "
            r2.append(r3)
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r0.getState()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L58:
            r4.process(r0, r5, r6)
            return
    }
}
