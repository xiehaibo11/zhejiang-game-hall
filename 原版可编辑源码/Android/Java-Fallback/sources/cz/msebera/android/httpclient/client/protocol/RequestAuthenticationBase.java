package cz.msebera.android.httpclient.client.protocol;

@java.lang.Deprecated
abstract class RequestAuthenticationBase implements cz.msebera.android.httpclient.HttpRequestInterceptor {
    final cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static class 1 {
        static final int[] $SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = null;

        static {
                cz.msebera.android.httpclient.auth.AuthProtocolState[] r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState = r0
                int[] r0 = cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L14
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.FAILURE     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L1f
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.SUCCESS     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState     // Catch: java.lang.NoSuchFieldError -> L2a
                cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.CHALLENGED     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                return
        }
    }

    public RequestAuthenticationBase() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    private cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.auth.Credentials r3, cz.msebera.android.httpclient.HttpRequest r4, cz.msebera.android.httpclient.protocol.HttpContext r5) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r1 = this;
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Asserts.notNull(r2, r0)
            boolean r0 = r2 instanceof cz.msebera.android.httpclient.auth.ContextAwareAuthScheme
            if (r0 == 0) goto L10
            cz.msebera.android.httpclient.auth.ContextAwareAuthScheme r2 = (cz.msebera.android.httpclient.auth.ContextAwareAuthScheme) r2
            cz.msebera.android.httpclient.Header r2 = r2.authenticate(r3, r4, r5)
            return r2
        L10:
            cz.msebera.android.httpclient.Header r2 = r2.authenticate(r3, r4)
            return r2
    }

    private void ensureAuthScheme(cz.msebera.android.httpclient.auth.AuthScheme r2) {
            r1 = this;
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Asserts.notNull(r2, r0)
            return
    }

    void process(cz.msebera.android.httpclient.auth.AuthState r8, cz.msebera.android.httpclient.HttpRequest r9, cz.msebera.android.httpclient.protocol.HttpContext r10) {
            r7 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r8.getAuthScheme()
            cz.msebera.android.httpclient.auth.Credentials r1 = r8.getCredentials()
            int[] r2 = cz.msebera.android.httpclient.client.protocol.RequestAuthenticationBase.1.$SwitchMap$cz$msebera$android$httpclient$auth$AuthProtocolState
            cz.msebera.android.httpclient.auth.AuthProtocolState r3 = r8.getState()
            int r3 = r3.ordinal()
            r2 = r2[r3]
            r3 = 1
            if (r2 == r3) goto Lcf
            r3 = 2
            java.lang.String r4 = " authentication error: "
            if (r2 == r3) goto L97
            r3 = 3
            if (r2 == r3) goto L21
            goto La1
        L21:
            java.util.Queue r2 = r8.getAuthOptions()
            if (r2 == 0) goto L93
        L27:
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L92
            java.lang.Object r0 = r2.remove()
            cz.msebera.android.httpclient.auth.AuthOption r0 = (cz.msebera.android.httpclient.auth.AuthOption) r0
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r0.getAuthScheme()
            cz.msebera.android.httpclient.auth.Credentials r0 = r0.getCredentials()
            r8.update(r1, r0)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L65
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
        L65:
            cz.msebera.android.httpclient.Header r0 = r7.authenticate(r1, r0, r9, r10)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L6d
            r9.addHeader(r0)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> L6d
            goto L92
        L6d:
            r0 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            boolean r3 = r3.isWarnEnabled()
            if (r3 == 0) goto L27
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r7.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r0 = r0.getMessage()
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r3.warn(r0)
            goto L27
        L92:
            return
        L93:
            r7.ensureAuthScheme(r0)
            goto La1
        L97:
            r7.ensureAuthScheme(r0)
            boolean r8 = r0.isConnectionBased()
            if (r8 == 0) goto La1
            return
        La1:
            if (r0 == 0) goto Lcf
            cz.msebera.android.httpclient.Header r8 = r7.authenticate(r0, r1, r9, r10)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> Lab
            r9.addHeader(r8)     // Catch: cz.msebera.android.httpclient.auth.AuthenticationException -> Lab
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
}
