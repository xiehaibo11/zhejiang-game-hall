package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class AuthState {
    private java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> authOptions;
    private cz.msebera.android.httpclient.auth.AuthScheme authScheme;
    private cz.msebera.android.httpclient.auth.AuthScope authScope;
    private cz.msebera.android.httpclient.auth.Credentials credentials;
    private cz.msebera.android.httpclient.auth.AuthProtocolState state;

    public AuthState() {
            r1 = this;
            r1.<init>()
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            r1.state = r0
            return
    }

    public java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> getAuthOptions() {
            r1 = this;
            java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> r0 = r1.authOptions
            return r0
    }

    public cz.msebera.android.httpclient.auth.AuthScheme getAuthScheme() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r1.authScheme
            return r0
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.auth.AuthScope getAuthScope() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthScope r0 = r1.authScope
            return r0
    }

    public cz.msebera.android.httpclient.auth.Credentials getCredentials() {
            r1 = this;
            cz.msebera.android.httpclient.auth.Credentials r0 = r1.credentials
            return r0
    }

    public cz.msebera.android.httpclient.auth.AuthProtocolState getState() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = r1.state
            return r0
    }

    public boolean hasAuthOptions() {
            r1 = this;
            java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> r0 = r1.authOptions
            if (r0 == 0) goto Lc
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @java.lang.Deprecated
    public void invalidate() {
            r0 = this;
            r0.reset()
            return
    }

    @java.lang.Deprecated
    public boolean isValid() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r1.authScheme
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public void reset() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthProtocolState r0 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
            r1.state = r0
            r0 = 0
            r1.authOptions = r0
            r1.authScheme = r0
            r1.authScope = r0
            r1.credentials = r0
            return
    }

    @java.lang.Deprecated
    public void setAuthScheme(cz.msebera.android.httpclient.auth.AuthScheme r1) {
            r0 = this;
            if (r1 != 0) goto L6
            r0.reset()
            return
        L6:
            r0.authScheme = r1
            return
    }

    @java.lang.Deprecated
    public void setAuthScope(cz.msebera.android.httpclient.auth.AuthScope r1) {
            r0 = this;
            r0.authScope = r1
            return
    }

    @java.lang.Deprecated
    public void setCredentials(cz.msebera.android.httpclient.auth.Credentials r1) {
            r0 = this;
            r0.credentials = r1
            return
    }

    public void setState(cz.msebera.android.httpclient.auth.AuthProtocolState r1) {
            r0 = this;
            if (r1 == 0) goto L3
            goto L5
        L3:
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = cz.msebera.android.httpclient.auth.AuthProtocolState.UNCHALLENGED
        L5:
            r0.state = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "state:"
            r0.append(r1)
            cz.msebera.android.httpclient.auth.AuthProtocolState r1 = r3.state
            r0.append(r1)
            java.lang.String r1 = ";"
            r0.append(r1)
            cz.msebera.android.httpclient.auth.AuthScheme r2 = r3.authScheme
            if (r2 == 0) goto L29
            java.lang.String r2 = "auth scheme:"
            r0.append(r2)
            cz.msebera.android.httpclient.auth.AuthScheme r2 = r3.authScheme
            java.lang.String r2 = r2.getSchemeName()
            r0.append(r2)
            r0.append(r1)
        L29:
            cz.msebera.android.httpclient.auth.Credentials r1 = r3.credentials
            if (r1 == 0) goto L32
            java.lang.String r1 = "credentials present"
            r0.append(r1)
        L32:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void update(cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.auth.Credentials r3) {
            r1 = this;
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "Credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.authScheme = r2
            r1.credentials = r3
            r2 = 0
            r1.authOptions = r2
            return
    }

    public void update(java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> r2) {
            r1 = this;
            java.lang.String r0 = "Queue of auth options"
            cz.msebera.android.httpclient.util.Args.notEmpty(r2, r0)
            r1.authOptions = r2
            r2 = 0
            r1.authScheme = r2
            r1.credentials = r2
            return
    }
}
