package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class AuthSchemeBase implements cz.msebera.android.httpclient.auth.ContextAwareAuthScheme {
    private cz.msebera.android.httpclient.auth.ChallengeState challengeState;

    public AuthSchemeBase() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public AuthSchemeBase(cz.msebera.android.httpclient.auth.ChallengeState r1) {
            r0 = this;
            r0.<init>()
            r0.challengeState = r1
            return
    }

    @Override
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r0 = this;
            cz.msebera.android.httpclient.Header r1 = r0.authenticate(r1, r2)
            return r1
    }

    public cz.msebera.android.httpclient.auth.ChallengeState getChallengeState() {
            r1 = this;
            cz.msebera.android.httpclient.auth.ChallengeState r0 = r1.challengeState
            return r0
    }

    public boolean isProxy() {
            r2 = this;
            cz.msebera.android.httpclient.auth.ChallengeState r0 = r2.challengeState
            if (r0 == 0) goto La
            cz.msebera.android.httpclient.auth.ChallengeState r1 = cz.msebera.android.httpclient.auth.ChallengeState.PROXY
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    protected abstract void parseChallenge(cz.msebera.android.httpclient.util.CharArrayBuffer r1, int r2, int r3) throws cz.msebera.android.httpclient.auth.MalformedChallengeException;

    @Override
    public void processChallenge(cz.msebera.android.httpclient.Header r4) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r3 = this;
            java.lang.String r0 = "Header"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.lang.String r0 = r4.getName()
            java.lang.String r1 = "WWW-Authenticate"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto L16
            cz.msebera.android.httpclient.auth.ChallengeState r0 = cz.msebera.android.httpclient.auth.ChallengeState.TARGET
            r3.challengeState = r0
            goto L22
        L16:
            java.lang.String r1 = "Proxy-Authenticate"
            boolean r1 = r0.equalsIgnoreCase(r1)
            if (r1 == 0) goto La0
            cz.msebera.android.httpclient.auth.ChallengeState r0 = cz.msebera.android.httpclient.auth.ChallengeState.PROXY
            r3.challengeState = r0
        L22:
            boolean r0 = r4 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r0 == 0) goto L31
            cz.msebera.android.httpclient.FormattedHeader r4 = (cz.msebera.android.httpclient.FormattedHeader) r4
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = r4.getBuffer()
            int r4 = r4.getValuePos()
            goto L44
        L31:
            java.lang.String r4 = r4.getValue()
            if (r4 == 0) goto L98
            cz.msebera.android.httpclient.util.CharArrayBuffer r0 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r1 = r4.length()
            r0.<init>(r1)
            r0.append(r4)
            r4 = 0
        L44:
            int r1 = r0.length()
            if (r4 >= r1) goto L57
            char r1 = r0.charAt(r4)
            boolean r1 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r1)
            if (r1 == 0) goto L57
            int r4 = r4 + 1
            goto L44
        L57:
            r1 = r4
        L58:
            int r2 = r0.length()
            if (r1 >= r2) goto L6b
            char r2 = r0.charAt(r1)
            boolean r2 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r2)
            if (r2 != 0) goto L6b
            int r1 = r1 + 1
            goto L58
        L6b:
            java.lang.String r4 = r0.substring(r4, r1)
            java.lang.String r2 = r3.getSchemeName()
            boolean r2 = r4.equalsIgnoreCase(r2)
            if (r2 == 0) goto L81
            int r4 = r0.length()
            r3.parseChallenge(r0, r1, r4)
            return
        L81:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r0 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid scheme identifier: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L98:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r4 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.String r0 = "Header value is null"
            r4.<init>(r0)
            throw r4
        La0:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r4 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected header name: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.String r0 = r2.getSchemeName()
            if (r0 == 0) goto Ld
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toUpperCase(r1)
            return r0
        Ld:
            java.lang.String r0 = super.toString()
            return r0
    }
}
