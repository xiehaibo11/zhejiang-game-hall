package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public final class AuthOption {
    private final cz.msebera.android.httpclient.auth.AuthScheme authScheme;
    private final cz.msebera.android.httpclient.auth.Credentials creds;

    public AuthOption(cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.auth.Credentials r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Auth scheme"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "User credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            r1.authScheme = r2
            r1.creds = r3
            return
    }

    public cz.msebera.android.httpclient.auth.AuthScheme getAuthScheme() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r1.authScheme
            return r0
    }

    public cz.msebera.android.httpclient.auth.Credentials getCredentials() {
            r1 = this;
            cz.msebera.android.httpclient.auth.Credentials r0 = r1.creds
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            cz.msebera.android.httpclient.auth.AuthScheme r0 = r1.authScheme
            java.lang.String r0 = r0.toString()
            return r0
    }
}
