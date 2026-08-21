package cz.msebera.android.httpclient.auth;

@cz.msebera.android.httpclient.annotation.Immutable
public class AuthScope {
    public static final cz.msebera.android.httpclient.auth.AuthScope ANY = null;
    public static final java.lang.String ANY_HOST = null;
    public static final int ANY_PORT = -1;
    public static final java.lang.String ANY_REALM = null;
    public static final java.lang.String ANY_SCHEME = null;
    private final java.lang.String host;
    private final cz.msebera.android.httpclient.HttpHost origin;
    private final int port;
    private final java.lang.String realm;
    private final java.lang.String scheme;

    static {
            cz.msebera.android.httpclient.auth.AuthScope r0 = new cz.msebera.android.httpclient.auth.AuthScope
            java.lang.String r1 = cz.msebera.android.httpclient.auth.AuthScope.ANY_HOST
            java.lang.String r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
            java.lang.String r3 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            r4 = -1
            r0.<init>(r1, r4, r2, r3)
            cz.msebera.android.httpclient.auth.AuthScope.ANY = r0
            return
    }

    public AuthScope(cz.msebera.android.httpclient.HttpHost r3) {
            r2 = this;
            java.lang.String r0 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
            java.lang.String r1 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            r2.<init>(r3, r0, r1)
            return
    }

    public AuthScope(cz.msebera.android.httpclient.HttpHost r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            java.lang.String r0 = r3.getHostName()
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r0 = r0.toLowerCase(r1)
            r2.host = r0
            int r0 = r3.getPort()
            if (r0 >= 0) goto L1c
            r0 = -1
            goto L20
        L1c:
            int r0 = r3.getPort()
        L20:
            r2.port = r0
            if (r4 != 0) goto L26
            java.lang.String r4 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
        L26:
            r2.realm = r4
            if (r5 != 0) goto L2d
            java.lang.String r4 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            goto L33
        L2d:
            java.util.Locale r4 = java.util.Locale.ROOT
            java.lang.String r4 = r5.toUpperCase(r4)
        L33:
            r2.scheme = r4
            r2.origin = r3
            return
    }

    public AuthScope(cz.msebera.android.httpclient.auth.AuthScope r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Scope"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = r2.getHost()
            r1.host = r0
            int r0 = r2.getPort()
            r1.port = r0
            java.lang.String r0 = r2.getRealm()
            r1.realm = r0
            java.lang.String r0 = r2.getScheme()
            r1.scheme = r0
            cz.msebera.android.httpclient.HttpHost r2 = r2.getOrigin()
            r1.origin = r2
            return
    }

    public AuthScope(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.String r0 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
            java.lang.String r1 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public AuthScope(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public AuthScope(java.lang.String r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            if (r2 != 0) goto L8
            java.lang.String r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY_HOST
            goto Le
        L8:
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
        Le:
            r1.host = r2
            if (r3 >= 0) goto L13
            r3 = -1
        L13:
            r1.port = r3
            if (r4 != 0) goto L19
            java.lang.String r4 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
        L19:
            r1.realm = r4
            if (r5 != 0) goto L20
            java.lang.String r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            goto L26
        L20:
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r2 = r5.toUpperCase(r2)
        L26:
            r1.scheme = r2
            r2 = 0
            r1.origin = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r5 != r4) goto L8
            return r1
        L8:
            boolean r2 = r5 instanceof cz.msebera.android.httpclient.auth.AuthScope
            if (r2 != 0) goto L11
            boolean r5 = super.equals(r5)
            return r5
        L11:
            cz.msebera.android.httpclient.auth.AuthScope r5 = (cz.msebera.android.httpclient.auth.AuthScope) r5
            java.lang.String r2 = r4.host
            java.lang.String r3 = r5.host
            boolean r2 = cz.msebera.android.httpclient.util.LangUtils.equals(r2, r3)
            if (r2 == 0) goto L38
            int r2 = r4.port
            int r3 = r5.port
            if (r2 != r3) goto L38
            java.lang.String r2 = r4.realm
            java.lang.String r3 = r5.realm
            boolean r2 = cz.msebera.android.httpclient.util.LangUtils.equals(r2, r3)
            if (r2 == 0) goto L38
            java.lang.String r2 = r4.scheme
            java.lang.String r5 = r5.scheme
            boolean r5 = cz.msebera.android.httpclient.util.LangUtils.equals(r2, r5)
            if (r5 == 0) goto L38
            r0 = 1
        L38:
            return r0
    }

    public java.lang.String getHost() {
            r1 = this;
            java.lang.String r0 = r1.host
            return r0
    }

    public cz.msebera.android.httpclient.HttpHost getOrigin() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.origin
            return r0
    }

    public int getPort() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    public java.lang.String getRealm() {
            r1 = this;
            java.lang.String r0 = r1.realm
            return r0
    }

    public java.lang.String getScheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.host
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            int r1 = r2.port
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            java.lang.String r1 = r2.realm
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            java.lang.String r1 = r2.scheme
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            return r0
    }

    public int match(cz.msebera.android.httpclient.auth.AuthScope r5) {
            r4 = this;
            java.lang.String r0 = r4.scheme
            java.lang.String r1 = r5.scheme
            boolean r0 = cz.msebera.android.httpclient.util.LangUtils.equals(r0, r1)
            r1 = -1
            if (r0 == 0) goto Ld
            r0 = 1
            goto L19
        Ld:
            java.lang.String r0 = r4.scheme
            java.lang.String r2 = cz.msebera.android.httpclient.auth.AuthScope.ANY_SCHEME
            if (r0 == r2) goto L18
            java.lang.String r0 = r5.scheme
            if (r0 == r2) goto L18
            return r1
        L18:
            r0 = 0
        L19:
            java.lang.String r2 = r4.realm
            java.lang.String r3 = r5.realm
            boolean r2 = cz.msebera.android.httpclient.util.LangUtils.equals(r2, r3)
            if (r2 == 0) goto L26
            int r0 = r0 + 2
            goto L31
        L26:
            java.lang.String r2 = r4.realm
            java.lang.String r3 = cz.msebera.android.httpclient.auth.AuthScope.ANY_REALM
            if (r2 == r3) goto L31
            java.lang.String r2 = r5.realm
            if (r2 == r3) goto L31
            return r1
        L31:
            int r2 = r4.port
            int r3 = r5.port
            if (r2 != r3) goto L3a
            int r0 = r0 + 4
            goto L3f
        L3a:
            if (r2 == r1) goto L3f
            if (r3 == r1) goto L3f
            return r1
        L3f:
            java.lang.String r2 = r4.host
            java.lang.String r3 = r5.host
            boolean r2 = cz.msebera.android.httpclient.util.LangUtils.equals(r2, r3)
            if (r2 == 0) goto L4c
            int r0 = r0 + 8
            goto L57
        L4c:
            java.lang.String r2 = r4.host
            java.lang.String r3 = cz.msebera.android.httpclient.auth.AuthScope.ANY_HOST
            if (r2 == r3) goto L57
            java.lang.String r5 = r5.host
            if (r5 == r3) goto L57
            return r1
        L57:
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.scheme
            if (r1 == 0) goto L17
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r1 = r1.toUpperCase(r2)
            r0.append(r1)
            r1 = 32
            r0.append(r1)
        L17:
            java.lang.String r1 = r3.realm
            if (r1 == 0) goto L29
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = r3.realm
            r0.append(r2)
            r0.append(r1)
            goto L2e
        L29:
            java.lang.String r1 = "<any realm>"
            r0.append(r1)
        L2e:
            java.lang.String r1 = r3.host
            if (r1 == 0) goto L4a
            r1 = 64
            r0.append(r1)
            java.lang.String r1 = r3.host
            r0.append(r1)
            int r1 = r3.port
            if (r1 < 0) goto L4a
            r1 = 58
            r0.append(r1)
            int r1 = r3.port
            r0.append(r1)
        L4a:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
