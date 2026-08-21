package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public abstract class AbstractAuthenticationHandler implements cz.msebera.android.httpclient.client.AuthenticationHandler {
    private static final java.util.List<java.lang.String> DEFAULT_SCHEME_PRIORITY = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static {
            java.lang.String r0 = "Negotiate"
            java.lang.String r1 = "NTLM"
            java.lang.String r2 = "Digest"
            java.lang.String r3 = "Basic"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            cz.msebera.android.httpclient.impl.client.AbstractAuthenticationHandler.DEFAULT_SCHEME_PRIORITY = r0
            return
    }

    public AbstractAuthenticationHandler() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    protected java.util.List<java.lang.String> getAuthPreferences() {
            r1 = this;
            java.util.List<java.lang.String> r0 = cz.msebera.android.httpclient.impl.client.AbstractAuthenticationHandler.DEFAULT_SCHEME_PRIORITY
            return r0
    }

    protected java.util.List<java.lang.String> getAuthPreferences(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) {
            r0 = this;
            java.util.List r1 = r0.getAuthPreferences()
            return r1
    }

    protected java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> parseChallenges(cz.msebera.android.httpclient.Header[] r10) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r9 = this;
            java.util.HashMap r0 = new java.util.HashMap
            int r1 = r10.length
            r0.<init>(r1)
            int r1 = r10.length
            r2 = 0
            r3 = 0
        L9:
            if (r3 >= r1) goto L6f
            r4 = r10[r3]
            boolean r5 = r4 instanceof cz.msebera.android.httpclient.FormattedHeader
            if (r5 == 0) goto L1d
            r5 = r4
            cz.msebera.android.httpclient.FormattedHeader r5 = (cz.msebera.android.httpclient.FormattedHeader) r5
            cz.msebera.android.httpclient.util.CharArrayBuffer r6 = r5.getBuffer()
            int r5 = r5.getValuePos()
            goto L30
        L1d:
            java.lang.String r5 = r4.getValue()
            if (r5 == 0) goto L67
            cz.msebera.android.httpclient.util.CharArrayBuffer r6 = new cz.msebera.android.httpclient.util.CharArrayBuffer
            int r7 = r5.length()
            r6.<init>(r7)
            r6.append(r5)
            r5 = 0
        L30:
            int r7 = r6.length()
            if (r5 >= r7) goto L43
            char r7 = r6.charAt(r5)
            boolean r7 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r7)
            if (r7 == 0) goto L43
            int r5 = r5 + 1
            goto L30
        L43:
            r7 = r5
        L44:
            int r8 = r6.length()
            if (r7 >= r8) goto L57
            char r8 = r6.charAt(r7)
            boolean r8 = cz.msebera.android.httpclient.protocol.HTTP.isWhitespace(r8)
            if (r8 != 0) goto L57
            int r7 = r7 + 1
            goto L44
        L57:
            java.lang.String r5 = r6.substring(r5, r7)
            java.util.Locale r6 = java.util.Locale.ROOT
            java.lang.String r5 = r5.toLowerCase(r6)
            r0.put(r5, r4)
            int r3 = r3 + 1
            goto L9
        L67:
            cz.msebera.android.httpclient.auth.MalformedChallengeException r10 = new cz.msebera.android.httpclient.auth.MalformedChallengeException
            java.lang.String r0 = "Header value is null"
            r10.<init>(r0)
            throw r10
        L6f:
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme selectScheme(java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> r7, cz.msebera.android.httpclient.HttpResponse r8, cz.msebera.android.httpclient.protocol.HttpContext r9) throws cz.msebera.android.httpclient.auth.AuthenticationException {
            r6 = this;
            java.lang.String r0 = "http.authscheme-registry"
            java.lang.Object r0 = r9.getAttribute(r0)
            cz.msebera.android.httpclient.auth.AuthSchemeRegistry r0 = (cz.msebera.android.httpclient.auth.AuthSchemeRegistry) r0
            java.lang.String r1 = "AuthScheme registry"
            cz.msebera.android.httpclient.util.Asserts.notNull(r0, r1)
            java.util.List r9 = r6.getAuthPreferences(r8, r9)
            if (r9 != 0) goto L15
            java.util.List<java.lang.String> r9 = cz.msebera.android.httpclient.impl.client.AbstractAuthenticationHandler.DEFAULT_SCHEME_PRIORITY
        L15:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            boolean r1 = r1.isDebugEnabled()
            if (r1 == 0) goto L33
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Authentication schemes in the order of preference: "
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
        L33:
            r1 = 0
            java.util.Iterator r9 = r9.iterator()
        L38:
            boolean r2 = r9.hasNext()
            if (r2 == 0) goto Lc2
            java.lang.Object r2 = r9.next()
            java.lang.String r2 = (java.lang.String) r2
            java.util.Locale r3 = java.util.Locale.ENGLISH
            java.lang.String r3 = r2.toLowerCase(r3)
            java.lang.Object r3 = r7.get(r3)
            cz.msebera.android.httpclient.Header r3 = (cz.msebera.android.httpclient.Header) r3
            if (r3 == 0) goto L9d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L70
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r5 = " authentication scheme selected"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.debug(r4)
        L70:
            cz.msebera.android.httpclient.params.HttpParams r3 = r8.getParams()     // Catch: java.lang.IllegalStateException -> L79
            cz.msebera.android.httpclient.auth.AuthScheme r1 = r0.getAuthScheme(r2, r3)     // Catch: java.lang.IllegalStateException -> L79
            goto Lc2
        L79:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isWarnEnabled()
            if (r3 == 0) goto L38
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Authentication scheme "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = " not supported"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.warn(r2)
            goto L38
        L9d:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L38
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r6.log
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Challenge for "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = " authentication scheme not available"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.debug(r2)
            goto L38
        Lc2:
            if (r1 == 0) goto Lc5
            return r1
        Lc5:
            cz.msebera.android.httpclient.auth.AuthenticationException r8 = new cz.msebera.android.httpclient.auth.AuthenticationException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Unable to respond to any of these challenges: "
            r9.append(r0)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r8.<init>(r7)
            throw r8
    }
}
