package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class ResponseAuthCache implements cz.msebera.android.httpclient.HttpResponseInterceptor {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static class 1 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = null;

        static {
                cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.client.protocol.ResponseAuthCache.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = r0
                int[] r0 = cz.msebera.android.httpclient.client.protocol.ResponseAuthCache.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.client.protocol.ResponseAuthCache.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                return
        }
    }

    public ResponseAuthCache() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    private void cache(cz.msebera.android.httpclient.client.AuthCache r4, cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.auth.AuthScheme r6) {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L2a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Caching '"
            r1.append(r2)
            java.lang.String r2 = r6.getSchemeName()
            r1.append(r2)
            java.lang.String r2 = "' auth scheme for "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.debug(r1)
        L2a:
            r4.put(r5, r6)
            return
    }

    private boolean isCachable(cz.msebera.android.httpclient.auth.AuthState r3) {
            r2 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r3 = r3.getAuthScheme()
            r0 = 0
            if (r3 == 0) goto L23
            boolean r1 = r3.isComplete()
            if (r1 != 0) goto Le
            goto L23
        Le:
            java.lang.String r3 = r3.getSchemeName()
            java.lang.String r1 = "Basic"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 != 0) goto L22
            java.lang.String r1 = "Digest"
            boolean r3 = r3.equalsIgnoreCase(r1)
            if (r3 == 0) goto L23
        L22:
            r0 = 1
        L23:
            return r0
    }

    private void uncache(cz.msebera.android.httpclient.client.AuthCache r4, cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.auth.AuthScheme r6) {
            r3 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L2a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Removing from cache '"
            r1.append(r2)
            java.lang.String r6 = r6.getSchemeName()
            r1.append(r6)
            java.lang.String r6 = "' auth scheme for "
            r1.append(r6)
            r1.append(r5)
            java.lang.String r6 = r1.toString()
            r0.debug(r6)
        L2a:
            r4.remove(r5)
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpResponse r10, cz.msebera.android.httpclient.protocol.HttpContext r11) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r9 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r10 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r10)
            java.lang.String r10 = "http.auth.auth-cache"
            java.lang.Object r0 = r11.getAttribute(r10)
            cz.msebera.android.httpclient.client.AuthCache r0 = (cz.msebera.android.httpclient.client.AuthCache) r0
            java.lang.String r1 = "http.target_host"
            java.lang.Object r1 = r11.getAttribute(r1)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            java.lang.String r2 = "http.auth.target-scope"
            java.lang.Object r2 = r11.getAttribute(r2)
            cz.msebera.android.httpclient.auth.AuthState r2 = (cz.msebera.android.httpclient.auth.AuthState) r2
            r3 = 2
            r4 = 1
            if (r1 == 0) goto La2
            if (r2 == 0) goto La2
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            boolean r5 = r5.isDebugEnabled()
            if (r5 == 0) goto L4a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Target auth state: "
            r6.append(r7)
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = r2.getState()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.debug(r6)
        L4a:
            boolean r5 = r9.isCachable(r2)
            if (r5 == 0) goto La2
            java.lang.String r5 = "http.scheme-registry"
            java.lang.Object r5 = r11.getAttribute(r5)
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r5 = (cz.msebera.android.httpclient.conn.scheme.SchemeRegistry) r5
            int r6 = r1.getPort()
            if (r6 >= 0) goto L78
            cz.msebera.android.httpclient.conn.scheme.Scheme r5 = r5.getScheme(r1)
            cz.msebera.android.httpclient.HttpHost r6 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r7 = r1.getHostName()
            int r8 = r1.getPort()
            int r5 = r5.resolvePort(r8)
            java.lang.String r1 = r1.getSchemeName()
            r6.<init>(r7, r5, r1)
            r1 = r6
        L78:
            if (r0 != 0) goto L82
            cz.msebera.android.httpclient.impl.client.BasicAuthCache r0 = new cz.msebera.android.httpclient.impl.client.BasicAuthCache
            r0.<init>()
            r11.setAttribute(r10, r0)
        L82:
            int[] r5 = cz.msebera.android.httpclient.client.protocol.ResponseAuthCache.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState
            cz.msebera.android.httpclient.auth.AuthProtocolState r6 = r2.getState()
            int r6 = r6.ordinal()
            r5 = r5[r6]
            if (r5 == r4) goto L9b
            if (r5 == r3) goto L93
            goto La2
        L93:
            cz.msebera.android.httpclient.auth.AuthScheme r2 = r2.getAuthScheme()
            r9.uncache(r0, r1, r2)
            goto La2
        L9b:
            cz.msebera.android.httpclient.auth.AuthScheme r2 = r2.getAuthScheme()
            r9.cache(r0, r1, r2)
        La2:
            java.lang.String r1 = "http.proxy_host"
            java.lang.Object r1 = r11.getAttribute(r1)
            cz.msebera.android.httpclient.HttpHost r1 = (cz.msebera.android.httpclient.HttpHost) r1
            java.lang.String r2 = "http.auth.proxy-scope"
            java.lang.Object r2 = r11.getAttribute(r2)
            cz.msebera.android.httpclient.auth.AuthState r2 = (cz.msebera.android.httpclient.auth.AuthState) r2
            if (r1 == 0) goto L108
            if (r2 == 0) goto L108
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            boolean r5 = r5.isDebugEnabled()
            if (r5 == 0) goto Ld8
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Proxy auth state: "
            r6.append(r7)
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = r2.getState()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.debug(r6)
        Ld8:
            boolean r5 = r9.isCachable(r2)
            if (r5 == 0) goto L108
            if (r0 != 0) goto Le8
            cz.msebera.android.httpclient.impl.client.BasicAuthCache r0 = new cz.msebera.android.httpclient.impl.client.BasicAuthCache
            r0.<init>()
            r11.setAttribute(r10, r0)
        Le8:
            int[] r10 = cz.msebera.android.httpclient.client.protocol.ResponseAuthCache.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState
            cz.msebera.android.httpclient.auth.AuthProtocolState r11 = r2.getState()
            int r11 = r11.ordinal()
            r10 = r10[r11]
            if (r10 == r4) goto L101
            if (r10 == r3) goto Lf9
            goto L108
        Lf9:
            cz.msebera.android.httpclient.auth.AuthScheme r10 = r2.getAuthScheme()
            r9.uncache(r0, r1, r10)
            goto L108
        L101:
            cz.msebera.android.httpclient.auth.AuthScheme r10 = r2.getAuthScheme()
            r9.cache(r0, r1, r10)
        L108:
            return
    }
}
