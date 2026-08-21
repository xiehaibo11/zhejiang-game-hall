package cz.msebera.android.httpclient.impl.auth;

public class HttpAuthenticator {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static class 1 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = null;

        static {
                cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = r0
                int[] r0 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.HANDSHAKE     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L2a
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                int[] r0 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L35
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE     // Catch: java.lang.NoSuchFieldError -> L35
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L35
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L35
            L35:
                int[] r0 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L40
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED     // Catch: java.lang.NoSuchFieldError -> L40
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L40
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L40
            L40:
                return
        }
    }

    public HttpAuthenticator() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public HttpAuthenticator(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L6
            goto Lf
        L6:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r0 = r1.getClass()
            r2.<init>(r0)
        Lf:
            r1.log = r2
            return
    }

    private cz.msebera.android.httpclient.Header doAuth(cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.auth.Credentials r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r1 = this;
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.auth.ContextAwareAuthScheme
            if (r0 == 0) goto Lb
            cz.msebera.android.httpclient.auth.ContextAwareAuthScheme r2 = (cz.msebera.android.httpclient.auth.ContextAwareAuthScheme) r2
            cz.msebera.android.httpclient.Header r2 = r2.authenticate(r3, r4, r5)
            return r2
        Lb:
            cz.msebera.android.httpclient.Header r2 = r2.authenticate(r3, r4)
            return r2
    }

    private void ensureAuthScheme(cz.msebera.android.httpclient.auth.AuthScheme r2) {
            r1 = this;
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Asserts.notNull(r2, r0)
            return
    }

    public void generateAuthResponse(cz.msebera.android.httpclient.HttpRequest r8, cz.msebera.android.httpclient.auth.AuthState r9, cz.msebera.android.httpclient.protocol.HttpContext r10) throws cz.msebera.android.httpclient.HttpException, java.io.IOException {
            r7 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r9.getAuthScheme()
            cz.msebera.android.httpclient.auth.Credentials r1 = r9.getCredentials()
            int[] r2 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r9.getState()
            int r3 = r3.ordinal()
            r2 = r2[r3]
            r3 = 1
            java.lang.String r4 = " authentication error: "
            if (r2 == r3) goto L2c
            r9 = 3
            if (r2 == r9) goto L22
            r9 = 4
            if (r2 == r9) goto L21
            goto La1
        L21:
            return
        L22:
            r7.ensureAuthScheme(r0)
            boolean r9 = r0.isConnectionBased()
            if (r9 == 0) goto La1
            return
        L2c:
            java.util.Queue r2 = r9.getAuthOptions()
            if (r2 == 0) goto L9e
        L32:
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L9d
            java.lang.Object r0 = r2.remove()
            cz.msebera.android.httpclient.auth.AuthOption r0 = (cz.msebera.android.httpclient.auth.AuthOption) r0
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r0.getAuthScheme()
            cz.msebera.android.httpclient.auth.Credentials r0 = r0.getCredentials()
            r9.update(r1, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L70
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Generating response to an authentication challenge using "
            r5.append(r6)
            java.lang.String r6 = r1.getSchemeName()
            r5.append(r6)
            java.lang.String r6 = " scheme"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.debug(r5)
        L70:
            cz.msebera.android.httpclient.Header r0 = r7.doAuth(r1, r0, r8, r10)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L78
            r8.addHeader(r0)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L78
            goto L9d
        L78:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            boolean r3 = r3.isWarnEnabled()
            if (r3 == 0) goto L32
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r0 = r0.getMessage()
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r3.warn(r0)
            goto L32
        L9d:
            return
        L9e:
            r7.ensureAuthScheme(r0)
        La1:
            if (r0 == 0) goto Lcf
            cz.msebera.android.httpclient.Header r9 = r7.doAuth(r0, r1, r8, r10)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> Lab
            r8.addHeader(r9)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> Lab
            goto Lcf
        Lab:
            r8 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log
            boolean r9 = r9.isErrorEnabled()
            if (r9 == 0) goto Lcf
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r0)
            r10.append(r4)
            java.lang.String r8 = r8.getMessage()
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            r9.error(r8)
        Lcf:
            return
    }

    public boolean handleAuthChallenge(cz.msebera.android.httpclient.HttpHost r7, cz.msebera.android.httpclient.HttpResponse r8, cz.msebera.android.httpclient.client.AuthenticationStrategy r9, cz.msebera.android.httpclient.auth.AuthState r10, cz.msebera.android.httpclient.protocol.HttpContext r11) {
            r6 = this;
            r0 = 0
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            boolean r1 = r1.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r1 == 0) goto L23
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r2.<init>()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r3 = r7.toHostString()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r3 = " requested authentication"
            r2.append(r3)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r2 = r2.toString()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r1.debug(r2)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
        L23:
            java.util.Map r1 = r9.getChallenges(r7, r8, r11)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            boolean r2 = r1.isEmpty()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r2 == 0) goto L35
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r8 = "Response contains no authentication challenges"
            r7.debug(r8)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            return r0
        L35:
            cz.msebera.android.httpclient.auth.AuthScheme r2 = r10.getAuthScheme()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            int[] r3 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            cz.msebera.android.httpclient.auth.AuthProtocolState r4 = r10.getState()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            int r4 = r4.ordinal()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r3 = r3[r4]     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r4 = 1
            if (r3 == r4) goto L5a
            r5 = 2
            if (r3 == r5) goto L5a
            r5 = 3
            if (r3 == r5) goto L56
            r5 = 4
            if (r3 == r5) goto L55
            r5 = 5
            if (r3 == r5) goto L70
            goto Lb4
        L55:
            return r0
        L56:
            r10.reset()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            goto Lb4
        L5a:
            if (r2 != 0) goto L70
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r1 = "Auth scheme is null"
            r8.debug(r1)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r8 = 0
            r9.authFailed(r7, r8, r11)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.reset()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.setState(r7)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            return r0
        L70:
            if (r2 == 0) goto Lb4
            java.lang.String r3 = r2.getSchemeName()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.util.Locale r5 = java.util.Locale.ROOT     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r3 = r3.toLowerCase(r5)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.Object r3 = r1.get(r3)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            cz.msebera.android.httpclient.Header r3 = (cz.msebera.android.httpclient.Header) r3     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r3 == 0) goto Lb1
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r1 = "Authorization challenge processed"
            r8.debug(r1)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r2.processChallenge(r3)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            boolean r8 = r2.isComplete()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r8 == 0) goto Lab
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r1 = "Authentication failed"
            r8.debug(r1)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            cz.msebera.android.httpclient.auth.AuthScheme r8 = r10.getAuthScheme()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r9.authFailed(r7, r8, r11)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.reset()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.setState(r7)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            return r0
        Lab:
            cz.msebera.android.httpclient.auth.AuthProtocolState r7 = cz.msebera.android.httpclient.auth.AuthProtocolState.HANDSHAKE     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.setState(r7)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            return r4
        Lb1:
            r10.reset()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
        Lb4:
            java.util.Queue r7 = r9.select(r1, r7, r8, r11)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r7 == 0) goto Le7
            boolean r8 = r7.isEmpty()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r8 != 0) goto Le7
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            boolean r8 = r8.isDebugEnabled()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            if (r8 == 0) goto Lde
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r9.<init>()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r11 = "Selected authentication options: "
            r9.append(r11)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r9.append(r7)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            java.lang.String r9 = r9.toString()     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r8.debug(r9)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
        Lde:
            cz.msebera.android.httpclient.auth.AuthProtocolState r8 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.setState(r8)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            r10.update(r7)     // Catch: cz.msebera.android.httpclient.auth.MalformedChallengeException -> Le8
            return r4
        Le7:
            return r0
        Le8:
            r7 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log
            boolean r8 = r8.isWarnEnabled()
            if (r8 == 0) goto L10b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r6.log
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r11 = "Malformed challenge: "
            r9.append(r11)
            java.lang.String r7 = r7.getMessage()
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r8.warn(r7)
        L10b:
            r10.reset()
            return r0
    }

    public boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.HttpResponse r4, cz.msebera.android.httpclient.client.AuthenticationStrategy r5, cz.msebera.android.httpclient.auth.AuthState r6, cz.msebera.android.httpclient.protocol.HttpContext r7) {
            r2 = this;
            boolean r4 = r5.isAuthenticationRequested(r3, r4, r7)
            r0 = 1
            if (r4 == 0) goto L1e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            java.lang.String r1 = "Authentication required"
            r4.debug(r1)
            cz.msebera.android.httpclient.auth.AuthProtocolState r4 = r6.getState()
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS
            if (r4 != r1) goto L1d
            cz.msebera.android.httpclient.auth.AuthScheme r4 = r6.getAuthScheme()
            r5.authFailed(r3, r4, r7)
        L1d:
            return r0
        L1e:
            int[] r4 = cz.msebera.android.httpclient.impl.auth.HttpAuthenticator.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = r6.getState()
            int r1 = r1.ordinal()
            r4 = r4[r1]
            if (r4 == r0) goto L38
            r0 = 2
            if (r4 == r0) goto L38
            r3 = 3
            if (r4 == r3) goto L4b
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            r6.setState(r3)
            goto L4b
        L38:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            java.lang.String r0 = "Authentication succeeded"
            r4.debug(r0)
            cz.msebera.android.httpclient.auth.AuthProtocolState r4 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS
            r6.setState(r4)
            cz.msebera.android.httpclient.auth.AuthScheme r4 = r6.getAuthScheme()
            r5.authSucceeded(r3, r4, r7)
        L4b:
            r3 = 0
            return r3
    }
}
