package cz.msebera.android.httpclient.client.params;

@java.lang.Deprecated
public final class HttpClientParamConfig {
    private HttpClientParamConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.client.config.RequestConfig getRequestConfig(cz.msebera.android.httpclient.params.HttpParams r6) {
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = cz.msebera.android.httpclient.client.config.RequestConfig.custom()
            r1 = 0
            java.lang.String r2 = "http.socket.timeout"
            int r2 = r6.getIntParameter(r2, r1)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setSocketTimeout(r2)
            r2 = 1
            java.lang.String r3 = "http.connection.stalecheck"
            boolean r3 = r6.getBooleanParameter(r3, r2)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setStaleConnectionCheckEnabled(r3)
            java.lang.String r3 = "http.connection.timeout"
            int r3 = r6.getIntParameter(r3, r1)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setConnectTimeout(r3)
            java.lang.String r3 = "http.protocol.expect-continue"
            boolean r3 = r6.getBooleanParameter(r3, r1)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setExpectContinueEnabled(r3)
            java.lang.String r3 = "http.route.default-proxy"
            java.lang.Object r3 = r6.getParameter(r3)
            cz.msebera.android.httpclient.HttpHost r3 = (cz.msebera.android.httpclient.HttpHost) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setProxy(r3)
            java.lang.String r3 = "http.route.local-address"
            java.lang.Object r3 = r6.getParameter(r3)
            java.net.InetAddress r3 = (java.net.InetAddress) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setLocalAddress(r3)
            java.lang.String r3 = "http.auth.proxy-scheme-pref"
            java.lang.Object r3 = r6.getParameter(r3)
            java.util.Collection r3 = (java.util.Collection) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setProxyPreferredAuthSchemes(r3)
            java.lang.String r3 = "http.auth.target-scheme-pref"
            java.lang.Object r3 = r6.getParameter(r3)
            java.util.Collection r3 = (java.util.Collection) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setTargetPreferredAuthSchemes(r3)
            java.lang.String r3 = "http.protocol.handle-authentication"
            boolean r3 = r6.getBooleanParameter(r3, r2)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setAuthenticationEnabled(r3)
            java.lang.String r3 = "http.protocol.allow-circular-redirects"
            boolean r3 = r6.getBooleanParameter(r3, r1)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setCircularRedirectsAllowed(r3)
            java.lang.String r3 = "http.conn-manager.timeout"
            r4 = 0
            long r3 = r6.getLongParameter(r3, r4)
            int r4 = (int) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setConnectionRequestTimeout(r4)
            java.lang.String r3 = "http.protocol.cookie-policy"
            java.lang.Object r3 = r6.getParameter(r3)
            java.lang.String r3 = (java.lang.String) r3
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setCookieSpec(r3)
            java.lang.String r3 = "http.protocol.max-redirects"
            r4 = 50
            int r3 = r6.getIntParameter(r3, r4)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setMaxRedirects(r3)
            java.lang.String r3 = "http.protocol.handle-redirects"
            boolean r3 = r6.getBooleanParameter(r3, r2)
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setRedirectsEnabled(r3)
            java.lang.String r3 = "http.protocol.reject-relative-redirect"
            boolean r6 = r6.getBooleanParameter(r3, r1)
            r6 = r6 ^ r2
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r6 = r0.setRelativeRedirectsAllowed(r6)
            cz.msebera.android.httpclient.client.config.RequestConfig r6 = r6.build()
            return r6
    }
}
