package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestAuthCache implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public RequestAuthCache() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    private void doPreemptiveAuth(cz.msebera.android.httpclient.HttpHost r5, cz.msebera.android.httpclient.auth.AuthScheme r6, cz.msebera.android.httpclient.auth.AuthState r7, cz.msebera.android.httpclient.client.CredentialsProvider r8) {
            r4 = this;
            java.lang.String r0 = r6.getSchemeName()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L2a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r4.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Re-using cached '"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = "' auth scheme for "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L2a:
            cz.msebera.android.httpclient.auth.AuthScope r1 = new cz.msebera.android.httpclient.auth.AuthScope
            java.lang.String r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
            r1.<init>(r5, r2, r0)
            cz.msebera.android.httpclient.auth.Credentials r5 = r8.getCredentials(r1)
            if (r5 == 0) goto L52
            java.lang.String r8 = r6.getSchemeName()
            java.lang.String r0 = "BASIC"
            boolean r8 = r0.equalsIgnoreCase(r8)
            if (r8 == 0) goto L49
            cz.msebera.android.httpclient.auth.AuthProtocolState r8 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED
            r7.setState(r8)
            goto L4e
        L49:
            cz.msebera.android.httpclient.auth.AuthProtocolState r8 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS
            r7.setState(r8)
        L4e:
            r7.update(r6, r5)
            goto L59
        L52:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "No credentials for preemptive authentication"
            r5.debug(r6)
        L59:
            return
    }

    @Override
    public void process(cz.msebera.android.httpclient.HttpRequest r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r6 = this;
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r7 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r7)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r7 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r8)
            cz.msebera.android.httpclient.client.AuthCache r8 = r7.getAuthCache()
            if (r8 != 0) goto L1c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Auth cache not set in the context"
            r7.debug(r8)
            return
        L1c:
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = r7.getCredentialsProvider()
            if (r0 != 0) goto L2a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Credentials provider not set in the context"
            r7.debug(r8)
            return
        L2a:
            cz.msebera.android.httpclient.conn.routing.RouteInfo r1 = r7.getHttpRoute()
            if (r1 != 0) goto L38
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Route info not set in the context"
            r7.debug(r8)
            return
        L38:
            cz.msebera.android.httpclient.HttpHost r2 = r7.getTargetHost()
            if (r2 != 0) goto L46
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.String r8 = "Target host not set in the context"
            r7.debug(r8)
            return
        L46:
            int r3 = r2.getPort()
            if (r3 >= 0) goto L62
            cz.msebera.android.httpclient.HttpHost r3 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r4 = r2.getHostName()
            cz.msebera.android.httpclient.HttpHost r5 = r1.getTargetHost()
            int r5 = r5.getPort()
            java.lang.String r2 = r2.getSchemeName()
            r3.<init>(r4, r5, r2)
            r2 = r3
        L62:
            cz.msebera.android.httpclient.auth.AuthState r3 = r7.getTargetAuthState()
            if (r3 == 0) goto L79
            cz.msebera.android.httpclient.auth.AuthProtocolState r4 = r3.getState()
            cz.msebera.android.httpclient.auth.AuthProtocolState r5 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            if (r4 != r5) goto L79
            cz.msebera.android.httpclient.auth.AuthScheme r4 = r8.get(r2)
            if (r4 == 0) goto L79
            r6.doPreemptiveAuth(r2, r4, r3, r0)
        L79:
            cz.msebera.android.httpclient.HttpHost r1 = r1.getProxyHost()
            cz.msebera.android.httpclient.auth.AuthState r7 = r7.getProxyAuthState()
            if (r1 == 0) goto L96
            if (r7 == 0) goto L96
            cz.msebera.android.httpclient.auth.AuthProtocolState r2 = r7.getState()
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            if (r2 != r3) goto L96
            cz.msebera.android.httpclient.auth.AuthScheme r8 = r8.get(r1)
            if (r8 == 0) goto L96
            r6.doPreemptiveAuth(r1, r8, r7, r0)
        L96:
            return
    }
}
