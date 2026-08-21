package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
abstract class AuthenticationStrategyImpl implements cz.msebera.android.httpclient.client.AuthenticationStrategy {
    private static final java.util.List<java.lang.String> DEFAULT_SCHEME_PRIORITY = null;
    private final int challengeCode;
    private final java.lang.String headerName;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static {
            java.lang.String r0 = "Negotiate"
            java.lang.String r1 = "Kerberos"
            java.lang.String r2 = "NTLM"
            java.lang.String r3 = "Digest"
            java.lang.String r4 = "Basic"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            cz.msebera.android.httpclient.impl.client.AuthenticationStrategyImpl.DEFAULT_SCHEME_PRIORITY = r0
            return
    }

    AuthenticationStrategyImpl(int r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.challengeCode = r3
            r2.headerName = r4
            return
    }

    @Override
    public void authFailed(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.auth.AuthScheme r4, cz.msebera.android.httpclient.protocol.HttpContext r5) {
            r2 = this;
            java.lang.String r4 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r4)
            java.lang.String r4 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r4)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r4 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r5)
            cz.msebera.android.httpclient.client.AuthCache r4 = r4.getAuthCache()
            if (r4 == 0) goto L35
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r2.log
            boolean r5 = r5.isDebugEnabled()
            if (r5 == 0) goto L32
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r2.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Clearing cached auth scheme for "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r5.debug(r0)
        L32:
            r4.remove(r3)
        L35:
            return
    }

    @Override
    public void authSucceeded(cz.msebera.android.httpclient.HttpHost r4, cz.msebera.android.httpclient.auth.AuthScheme r5, cz.msebera.android.httpclient.protocol.HttpContext r6) {
            r3 = this;
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r6 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r6)
            boolean r0 = r3.isCachable(r5)
            if (r0 == 0) goto L54
            cz.msebera.android.httpclient.client.AuthCache r0 = r6.getAuthCache()
            if (r0 != 0) goto L27
            cz.msebera.android.httpclient.impl.client.BasicAuthCache r0 = new cz.msebera.android.httpclient.impl.client.BasicAuthCache
            r0.<init>()
            r6.setAuthCache(r0)
        L27:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r3.log
            boolean r6 = r6.isDebugEnabled()
            if (r6 == 0) goto L51
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r3.log
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Caching '"
            r1.append(r2)
            java.lang.String r2 = r5.getSchemeName()
            r1.append(r2)
            java.lang.String r2 = "' auth scheme for "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r6.debug(r1)
        L51:
            r0.put(r4, r5)
        L54:
            return
    }

    @Override
    public java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> getChallenges(cz.msebera.android.httpclient.HttpHost r8, cz.msebera.android.httpclient.HttpResponse r9, cz.msebera.android.httpclient.protocol.HttpContext r10) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r7 = this;
            java.lang.String r8 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r9, r8)
            java.lang.String r8 = r7.headerName
            cz.msebera.android.httpclient.Header[] r8 = r9.getHeaders(r8)
            java.util.HashMap r9 = new java.util.HashMap
            int r10 = r8.length
            r9.<init>(r10)
            int r10 = r8.length
            r0 = 0
            r1 = 0
        L14:
            if (r1 >= r10) goto L7a
            r2 = r8[r1]
            boolean r3 = r2 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r3 == 0) goto L28
            r3 = r2
            cz.msebera.android.httpclient.FormattedHeader r3 = (cz.msebera.android.httpclient.FormattedHeader) r3
            cz.msebera.android.httpclient.util.CharArrayBuffer r4 = r3.getBuffer()
            int r3 = r3.getValuePos()
            goto L3b
        L28:
            java.lang.String r3 = r2.getValue()
            if (r3 == 0) goto L72
            cz.msebera.android.httpclient.util.CharArrayBuffer r4 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r5 = r3.length()
            r4.<init>(r5)
            r4.append(r3)
            r3 = 0
        L3b:
            int r5 = r4.length()
            if (r3 >= r5) goto L4e
            char r5 = r4.charAt(r3)
            boolean r5 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r5)
            if (r5 == 0) goto L4e
            int r3 = r3 + 1
            goto L3b
        L4e:
            r5 = r3
        L4f:
            int r6 = r4.length()
            if (r5 >= r6) goto L62
            char r6 = r4.charAt(r5)
            boolean r6 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r6)
            if (r6 != 0) goto L62
            int r5 = r5 + 1
            goto L4f
        L62:
            java.lang.String r3 = r4.substring(r3, r5)
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r4)
            r9.put(r3, r2)
            int r1 = r1 + 1
            goto L14
        L72:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r8 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.String r9 = "Header value is null"
            r8.<init>(r9)
            throw r8
        L7a:
            return r9
    }

    abstract java.util.Collection<java.lang.String> getPreferredAuthSchemes(cz.msebera.android.httpclient.client.config.RequestConfig r1);

    @Override
    public boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) {
            r0 = this;
            java.lang.String r1 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r1)
            cz.msebera.android.httpclient.StatusLine r1 = r2.getStatusLine()
            int r1 = r1.getStatusCode()
            int r2 = r0.challengeCode
            if (r1 != r2) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }

    protected boolean isCachable(cz.msebera.android.httpclient.auth.AuthScheme r3) {
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
    public java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> select(java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> r10, cz.msebera.android.httpclient.HttpHost r11, cz.msebera.android.httpclient.HttpResponse r12, cz.msebera.android.httpclient.protocol.HttpContext r13) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r9 = this;
            java.lang.String r0 = "Map of auth challenges"
            cz.msebera.android.httpclient.util.Args.notNull(r10, r0)
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r11, r0)
            java.lang.String r0 = "HTTP response"
            cz.msebera.android.httpclient.util.Args.notNull(r12, r0)
            java.lang.String r12 = "HTTP context"
            cz.msebera.android.httpclient.util.Args.notNull(r13, r12)
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r12 = cz.msebera.android.httpclient.client.protocol.HttpClientContext.adapt(r13)
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            cz.msebera.android.httpclient.config.Lookup r1 = r12.getAuthSchemeRegistry()
            if (r1 != 0) goto L2b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r11 = "Auth scheme registry not set in the context"
            r10.debug(r11)
            return r0
        L2b:
            cz.msebera.android.httpclient.client.CredentialsProvider r2 = r12.getCredentialsProvider()
            if (r2 != 0) goto L39
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r10 = r9.log
            java.lang.String r11 = "Credentials provider not set in the context"
            r10.debug(r11)
            return r0
        L39:
            cz.msebera.android.httpclient.client.config.RequestConfig r12 = r12.getRequestConfig()
            java.util.Collection r12 = r9.getPreferredAuthSchemes(r12)
            if (r12 != 0) goto L45
            java.util.List<java.lang.String> r12 = cz.msebera.android.httpclient.impl.client.AuthenticationStrategyImpl.DEFAULT_SCHEME_PRIORITY
        L45:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r9.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L63
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r9.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Authentication schemes in the order of preference: "
            r4.append(r5)
            r4.append(r12)
            java.lang.String r4 = r4.toString()
            r3.debug(r4)
        L63:
            java.util.Iterator r12 = r12.iterator()
        L67:
            boolean r3 = r12.hasNext()
            if (r3 == 0) goto Lfd
            java.lang.Object r3 = r12.next()
            java.lang.String r3 = (java.lang.String) r3
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r4 = r3.toLowerCase(r4)
            java.lang.Object r4 = r10.get(r4)
            cz.msebera.android.httpclient.Header r4 = (cz.msebera.android.httpclient.Header) r4
            if (r4 == 0) goto Ld8
            java.lang.Object r5 = r1.lookup(r3)
            cz.msebera.android.httpclient.auth.AuthSchemeProvider r5 = (cz.msebera.android.httpclient.auth.AuthSchemeProvider) r5
            if (r5 != 0) goto Lad
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log
            boolean r4 = r4.isWarnEnabled()
            if (r4 == 0) goto L67
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Authentication scheme "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = " not supported"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.warn(r3)
            goto L67
        Lad:
            cz.msebera.android.httpclient.auth.AuthScheme r3 = r5.create(r13)
            r3.processChallenge(r4)
            cz.msebera.android.httpclient.auth.AuthScope r4 = new cz.msebera.android.httpclient.auth.AuthScope
            java.lang.String r5 = r11.getHostName()
            int r6 = r11.getPort()
            java.lang.String r7 = r3.getRealm()
            java.lang.String r8 = r3.getSchemeName()
            r4.<init>(r5, r6, r7, r8)
            cz.msebera.android.httpclient.auth.Credentials r4 = r2.getCredentials(r4)
            if (r4 == 0) goto L67
            cz.msebera.android.httpclient.auth.AuthOption r5 = new cz.msebera.android.httpclient.auth.AuthOption
            r5.<init>(r3, r4)
            r0.add(r5)
            goto L67
        Ld8:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log
            boolean r4 = r4.isDebugEnabled()
            if (r4 == 0) goto L67
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Challenge for "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = " authentication scheme not available"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.debug(r3)
            goto L67
        Lfd:
            return r0
    }
}
