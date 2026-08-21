package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicScheme extends cz.msebera.android.httpclient.impl.auth.RFC2617Scheme {
    private static final long serialVersionUID = -1931571557597830536L;
    private boolean complete;

    public BasicScheme() {
            r1 = this;
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            r1.<init>(r0)
            return
    }

    @java.lang.Deprecated
    public BasicScheme(cz.msebera.android.httpclient.auth.ChallengeState r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public BasicScheme(java.nio.charset.Charset r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.complete = r1
            return
    }

    @java.lang.Deprecated
    public static cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r2, java.lang.String r3, boolean r4) {
            java.lang.String r0 = "Credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "charset"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.security.Principal r1 = r2.getUserPrincipal()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r1 = r2.getPassword()
            if (r1 != 0) goto L28
            java.lang.String r2 = "null"
            goto L2c
        L28:
            java.lang.String r2 = r2.getPassword()
        L2c:
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            byte[] r2 = cz.msebera.android.httpclient.util.EncodingUtils.getBytes(r2, r3)
            r3 = 2
            byte[] r2 = cz.msebera.android.httpclient.extras.Base64.encode(r2, r3)
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r0 = 32
            r3.<init>(r0)
            if (r4 == 0) goto L4b
            java.lang.String r4 = "Proxy-Authorization"
            r3.append(r4)
            goto L50
        L4b:
            java.lang.String r4 = "Authorization"
            r3.append(r4)
        L50:
            java.lang.String r4 = ": Basic "
            r3.append(r4)
            r4 = 0
            int r0 = r2.length
            r3.append(r2, r4, r0)
            cz.msebera.android.httpclient.message.BufferedHeader r2 = new cz.msebera.android.httpclient.message.BufferedHeader
            r2.<init>(r3)
            return r2
    }

    @Override
    @java.lang.Deprecated
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r2, cz.msebera.android.httpclient.HttpRequest r3) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r1 = this;
            cz.msebera.android.httpclient.protocol.BasicHttpContext r0 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r0.<init>()
            cz.msebera.android.httpclient.Header r2 = r1.authenticate(r2, r3, r0)
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r2, cz.msebera.android.httpclient.HttpRequest r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r1 = this;
            java.lang.String r4 = "Credentials"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r4)
            java.lang.String r4 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.security.Principal r0 = r2.getUserPrincipal()
            java.lang.String r0 = r0.getName()
            r4.append(r0)
            java.lang.String r0 = ":"
            r4.append(r0)
            java.lang.String r0 = r2.getPassword()
            if (r0 != 0) goto L28
            java.lang.String r2 = "null"
            goto L2c
        L28:
            java.lang.String r2 = r2.getPassword()
        L2c:
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r3 = r1.getCredentialsCharset(r3)
            byte[] r2 = cz.msebera.android.httpclient.util.EncodingUtils.getBytes(r2, r3)
            r3 = 2
            byte[] r2 = cz.msebera.android.httpclient.extras.Base64.encode(r2, r3)
            cz.msebera.android.httpclient.util.CharArrayBuffer r3 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            r4 = 32
            r3.<init>(r4)
            boolean r4 = r1.isProxy()
            if (r4 == 0) goto L53
            java.lang.String r4 = "Proxy-Authorization"
            r3.append(r4)
            goto L58
        L53:
            java.lang.String r4 = "Authorization"
            r3.append(r4)
        L58:
            java.lang.String r4 = ": Basic "
            r3.append(r4)
            r4 = 0
            int r0 = r2.length
            r3.append(r2, r4, r0)
            cz.msebera.android.httpclient.message.BufferedHeader r2 = new cz.msebera.android.httpclient.message.BufferedHeader
            r2.<init>(r3)
            return r2
    }

    @Override
    public java.lang.String getSchemeName() {
            r1 = this;
            java.lang.String r0 = "basic"
            return r0
    }

    @Override
    public boolean isComplete() {
            r1 = this;
            boolean r0 = r1.complete
            return r0
    }

    @Override
    public boolean isConnectionBased() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void processChallenge(cz.msebera.android.httpclient.Header r1) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r0 = this;
            super.processChallenge(r1)
            r1 = 1
            r0.complete = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BASIC [complete="
            r0.append(r1)
            boolean r1 = r2.complete
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
