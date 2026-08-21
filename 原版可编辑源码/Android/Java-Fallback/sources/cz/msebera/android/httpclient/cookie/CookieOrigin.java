package cz.msebera.android.httpclient.cookie;

@cz.msebera.android.httpclient.annotation.Immutable
public final class CookieOrigin {
    private final java.lang.String host;
    private final java.lang.String path;
    private final int port;
    private final boolean secure;

    public CookieOrigin(java.lang.String r2, int r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notBlank(r2, r0)
            java.lang.String r0 = "Port"
            cz.msebera.android.httpclient.util.Args.notNegative(r3, r0)
            java.lang.String r0 = "Path"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
            r1.host = r2
            r1.port = r3
            boolean r2 = cz.msebera.android.httpclient.util.TextUtils.isBlank(r4)
            if (r2 != 0) goto L25
            r1.path = r4
            goto L29
        L25:
            java.lang.String r2 = "/"
            r1.path = r2
        L29:
            r1.secure = r5
            return
    }

    public java.lang.String getHost() {
            r1 = this;
            java.lang.String r0 = r1.host
            return r0
    }

    public java.lang.String getPath() {
            r1 = this;
            java.lang.String r0 = r1.path
            return r0
    }

    public int getPort() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    public boolean isSecure() {
            r1 = this;
            boolean r0 = r1.secure
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 91
            r0.append(r1)
            boolean r1 = r2.secure
            if (r1 == 0) goto L13
            java.lang.String r1 = "(secure)"
            r0.append(r1)
        L13:
            java.lang.String r1 = r2.host
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            int r1 = r2.port
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r1 = r2.path
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
