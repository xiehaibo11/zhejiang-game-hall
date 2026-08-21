package cz.msebera.android.httpclient.impl.auth;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public abstract class RFC2617Scheme extends cz.msebera.android.httpclient.impl.auth.AuthSchemeBase implements java.io.Serializable {
    private static final long serialVersionUID = -2845454858205884623L;
    private transient java.nio.charset.Charset credentialsCharset;
    private final java.util.Map<java.lang.String, java.lang.String> params;

    public RFC2617Scheme() {
            r1 = this;
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            r1.<init>(r0)
            return
    }

    @java.lang.Deprecated
    public RFC2617Scheme(cz.msebera.android.httpclient.auth.ChallengeState r1) {
            r0 = this;
            r0.<init>(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.params = r1
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
            r0.credentialsCharset = r1
            return
    }

    public RFC2617Scheme(java.nio.charset.Charset r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.params = r0
            if (r2 == 0) goto Ld
            goto Lf
        Ld:
            java.nio.charset.Charset r2 = cz.msebera.android.httpclient.Consts.ASCII
        Lf:
            r1.credentialsCharset = r2
            return
    }

    private void readObject(java.io.ObjectInputStream r1) throws java.io.IOException, java.lang.ClassNotFoundException {
            r0 = this;
            r1.defaultReadObject()
            java.lang.String r1 = r1.readUTF()
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.util.CharsetUtils.get(r1)
            r0.credentialsCharset = r1
            java.nio.charset.Charset r1 = r0.credentialsCharset
            if (r1 != 0) goto L15
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
            r0.credentialsCharset = r1
        L15:
            return
    }

    private void readObjectNoData() throws java.io.ObjectStreamException {
            r0 = this;
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            r2.defaultWriteObject()
            java.nio.charset.Charset r0 = r1.credentialsCharset
            java.lang.String r0 = r0.name()
            r2.writeUTF(r0)
            return
    }

    java.lang.String getCredentialsCharset(cz.msebera.android.httpclient.HttpRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.params.HttpParams r2 = r2.getParams()
            java.lang.String r0 = "http.auth.credential-charset"
            java.lang.Object r2 = r2.getParameter(r0)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 != 0) goto L16
            java.nio.charset.Charset r2 = r1.getCredentialsCharset()
            java.lang.String r2 = r2.name()
        L16:
            return r2
    }

    public java.nio.charset.Charset getCredentialsCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.credentialsCharset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
        L7:
            return r0
    }

    @Override
    public java.lang.String getParameter(java.lang.String r3) {
            r2 = this;
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.params
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r3 = r3.toLowerCase(r1)
            java.lang.Object r3 = r0.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            return r3
    }

    protected java.util.Map<java.lang.String, java.lang.String> getParameters() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.params
            return r0
    }

    @Override
    public java.lang.String getRealm() {
            r1 = this;
            java.lang.String r0 = "realm"
            java.lang.String r0 = r1.getParameter(r0)
            return r0
    }

    @Override
    protected void parseChallenge(cz.msebera.android.httpclient.util.CharArrayBuffer r5, int r6, int r7) throws cz.msebera.android.httpclient.auth.MalformedChallengeException {
            r4 = this;
            cz.msebera.android.httpclient.message.BasicHeaderValueParser r7 = cz.msebera.android.httpclient.message.BasicHeaderValueParser.INSTANCE
            cz.msebera.android.httpclient.message.ParserCursor r0 = new cz.msebera.android.httpclient.message.ParserCursor
            int r1 = r5.length()
            r0.<init>(r6, r1)
            cz.msebera.android.httpclient.HeaderElement[] r5 = r7.parseElements(r5, r0)
            java.util.Map<java.lang.String, java.lang.String> r6 = r4.params
            r6.clear()
            int r6 = r5.length
            r7 = 0
        L16:
            if (r7 >= r6) goto L30
            r0 = r5[r7]
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.params
            java.lang.String r2 = r0.getName()
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r3)
            java.lang.String r0 = r0.getValue()
            r1.put(r2, r0)
            int r7 = r7 + 1
            goto L16
        L30:
            return
    }
}
