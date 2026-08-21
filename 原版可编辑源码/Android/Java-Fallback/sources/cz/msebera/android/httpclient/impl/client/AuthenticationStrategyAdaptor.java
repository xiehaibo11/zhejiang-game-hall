package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
class AuthenticationStrategyAdaptor implements cz.msebera.android.httpclient.client.AuthenticationStrategy {
    private final cz.msebera.android.httpclient.client.AuthenticationHandler handler;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public AuthenticationStrategyAdaptor(cz.msebera.android.httpclient.client.AuthenticationHandler r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.handler = r3
            return
    }

    private boolean isCachable(cz.msebera.android.httpclient.auth.AuthScheme r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L1f
            boolean r1 = r3.isComplete()
            if (r1 != 0) goto La
            goto L1f
        La:
            java.lang.String r3 = r3.getSchemeName()
            java.lang.String r1 = "Basic"
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 != 0) goto L1e
            java.lang.String r1 = "Digest"
            boolean r3 = r3.equalsIgnoreCase(r1)
            if (r3 == 0) goto L1f
        L1e:
            r0 = 1
        L1f:
            return r0
    }

    @Override
    public void authFailed(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.auth.AuthScheme r5, cz.msebera.android.httpclient.protocol.HttpContext r6) {
            r3 = this;
            java.lang.String r0 = "http.auth.auth-cache"
            java.lang.Object r6 = r6.getAttribute(r0)
            cz.msebera.android.httpclient.client.AuthCache r6 = (cz.msebera.android.httpclient.client.AuthCache) r6
            if (r6 != 0) goto Lb
            return
        Lb:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L35
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Removing from cache '"
            r1.append(r2)
            java.lang.String r5 = r5.getSchemeName()
            r1.append(r5)
            java.lang.String r5 = "' auth scheme for "
            r1.append(r5)
            r1.append(r4)
            java.lang.String r5 = r1.toString()
            r0.debug(r5)
        L35:
            r6.remove(r4)
            return
    }

    @Override
    public void authSucceeded(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.auth.AuthScheme r5, cz.msebera.android.httpclient.protocol.HttpContext r6) {
            r3 = this;
            java.lang.String r0 = "http.auth.auth-cache"
            java.lang.Object r1 = r6.getAttribute(r0)
            cz.msebera.android.httpclient.client.AuthCache r1 = (cz.msebera.android.httpclient.client.AuthCache) r1
            boolean r2 = r3.isCachable(r5)
            if (r2 == 0) goto L45
            if (r1 != 0) goto L18
            cz.msebera.android.httpclient.impl.client.BasicAuthCache r1 = new cz.msebera.android.httpclient.impl.client.BasicAuthCache
            r1.<init>()
            r6.setAttribute(r0, r1)
        L18:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r3.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L42
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r3.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Caching '"
            r0.append(r2)
            java.lang.String r2 = r5.getSchemeName()
            r0.append(r2)
            java.lang.String r2 = "' auth scheme for "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r6.debug(r0)
        L42:
            r1.put(r4, r5)
        L45:
            return
    }

    @Override
    public java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> getChallenges(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            cz.msebera.android.httpclient.client.AuthenticationHandler r1 = r0.handler
            java.util.Map r1 = r1.getChallenges(r2, r3)
            return r1
    }

    public cz.msebera.android.httpclient.client.AuthenticationHandler getHandler() {
            r1 = this;
            cz.msebera.android.httpclient.client.AuthenticationHandler r0 = r1.handler
            return r0
    }

    @Override
    public boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            cz.msebera.android.httpclient.client.AuthenticationHandler r1 = r0.handler
            boolean r1 = r1.isAuthenticationRequested(r2, r3)
            return r1
    }

    @Override
    public java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> select(java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> r5, cz.msebera.android.httpclient.HttpHost r6, cz.msebera.android.httpclient.HttpResponse r7, cz.msebera.android.httpclient.protocol.HttpContext r8) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r4 = this;
            java.lang.String r0 = "Map of auth challenges"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r7, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r8, r0)
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.lang.String r1 = "http.auth.credentials-provider"
            java.lang.Object r1 = r8.getAttribute(r1)
            cz.msebera.android.httpclient.client.CredentialsProvider r1 = (cz.msebera.android.httpclient.client.CredentialsProvider) r1
            if (r1 != 0) goto L2b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r4.log
            java.lang.String r6 = "Credentials provider not set in the context"
            r5.debug(r6)
            return r0
        L2b:
            cz.msebera.android.httpclient.client.AuthenticationHandler r2 = r4.handler     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L68
            cz.msebera.android.httpclient.auth.AuthScheme r7 = r2.selectScheme(r5, r7, r8)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L68
            java.lang.String r8 = r7.getSchemeName()
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r8 = r8.toLowerCase(r2)
            java.lang.Object r5 = r5.get(r8)
            cz.msebera.android.httpclient.Header r5 = (cz.msebera.android.httpclient.Header) r5
            r7.processChallenge(r5)
            cz.msebera.android.httpclient.auth.AuthScope r5 = new cz.msebera.android.httpclient.auth.AuthScope
            java.lang.String r8 = r6.getHostName()
            int r6 = r6.getPort()
            java.lang.String r2 = r7.getRealm()
            java.lang.String r3 = r7.getSchemeName()
            r5.<init>(r8, r6, r2, r3)
            cz.msebera.android.httpclient.auth.Credentials r5 = r1.getCredentials(r5)
            if (r5 == 0) goto L67
            cz.msebera.android.httpclient.auth.AuthOption r6 = new cz.msebera.android.httpclient.auth.AuthOption
            r6.<init>(r7, r5)
            r0.add(r6)
        L67:
            return r0
        L68:
            r5 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log
            boolean r6 = r6.isWarnEnabled()
            if (r6 == 0) goto L7a
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r4.log
            java.lang.String r7 = r5.getMessage()
            r6.warn(r7, r5)
        L7a:
            return r0
    }
}
