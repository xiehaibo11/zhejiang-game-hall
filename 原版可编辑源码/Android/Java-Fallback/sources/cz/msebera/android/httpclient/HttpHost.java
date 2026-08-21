package cz.msebera.android.httpclient;

@cz.msebera.android.httpclient.annotation.Immutable
public final class HttpHost implements java.lang.Cloneable, java.io.Serializable {
    public static final java.lang.String DEFAULT_SCHEME_NAME = "http";
    private static final long serialVersionUID = -7529410654042457626L;
    protected final java.net.InetAddress address;
    protected final java.lang.String hostname;
    protected final java.lang.String lcHostname;
    protected final int port;
    protected final java.lang.String schemeName;

    public HttpHost(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = r2.hostname
            r1.hostname = r0
            java.lang.String r0 = r2.lcHostname
            r1.lcHostname = r0
            java.lang.String r0 = r2.schemeName
            r1.schemeName = r0
            int r0 = r2.port
            r1.port = r0
            java.net.InetAddress r2 = r2.address
            r1.address = r2
            return
    }

    public HttpHost(java.lang.String r3) {
            r2 = this;
            r0 = -1
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public HttpHost(java.lang.String r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public HttpHost(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Host name"
            java.lang.CharSequence r0 = cz.msebera.android.httpclient.util.Args.containsNoBlanks(r2, r0)
            java.lang.String r0 = (java.lang.String) r0
            r1.hostname = r0
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r0)
            r1.lcHostname = r2
            if (r4 == 0) goto L20
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r2 = r4.toLowerCase(r2)
            r1.schemeName = r2
            goto L24
        L20:
            java.lang.String r2 = "http"
            r1.schemeName = r2
        L24:
            r1.port = r3
            r2 = 0
            r1.address = r2
            return
    }

    public HttpHost(java.net.InetAddress r3) {
            r2 = this;
            r0 = -1
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public HttpHost(java.net.InetAddress r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public HttpHost(java.net.InetAddress r2, int r3, java.lang.String r4) {
            r1 = this;
            java.lang.String r0 = "Inet address"
            java.lang.Object r0 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.net.InetAddress r0 = (java.net.InetAddress) r0
            java.lang.String r2 = r2.getHostName()
            r1.<init>(r0, r2, r3, r4)
            return
    }

    public HttpHost(java.net.InetAddress r2, java.lang.String r3, int r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Inet address"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.net.InetAddress r2 = (java.net.InetAddress) r2
            r1.address = r2
            java.lang.String r2 = "Hostname"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r3, r2)
            java.lang.String r2 = (java.lang.String) r2
            r1.hostname = r2
            java.lang.String r2 = r1.hostname
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r3)
            r1.lcHostname = r2
            if (r5 == 0) goto L2c
            java.util.Locale r2 = java.util.Locale.ROOT
            java.lang.String r2 = r5.toLowerCase(r2)
            r1.schemeName = r2
            goto L30
        L2c:
            java.lang.String r2 = "http"
            r1.schemeName = r2
        L30:
            r1.port = r4
            return
    }

    public static cz.msebera.android.httpclient.HttpHost create(java.lang.String r4) {
            java.lang.String r0 = "HTTP Host"
            cz.msebera.android.httpclient.util.Args.containsNoBlanks(r4, r0)
            java.lang.String r0 = "://"
            int r0 = r4.indexOf(r0)
            r1 = 0
            if (r0 <= 0) goto L19
            java.lang.String r2 = r4.substring(r1, r0)
            int r0 = r0 + 3
            java.lang.String r4 = r4.substring(r0)
            goto L1a
        L19:
            r2 = 0
        L1a:
            r0 = -1
            java.lang.String r3 = ":"
            int r3 = r4.lastIndexOf(r3)
            if (r3 <= 0) goto L49
            int r0 = r3 + 1
            java.lang.String r0 = r4.substring(r0)     // Catch: java.lang.NumberFormatException -> L32
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L32
            java.lang.String r4 = r4.substring(r1, r3)
            goto L49
        L32:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid HTTP host: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L49:
            cz.msebera.android.httpclient.HttpHost r1 = new cz.msebera.android.httpclient.HttpHost
            r1.<init>(r4, r0, r2)
            return r1
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.HttpHost
            r2 = 0
            if (r1 == 0) goto L39
            cz.msebera.android.httpclient.HttpHost r5 = (cz.msebera.android.httpclient.HttpHost) r5
            java.lang.String r1 = r4.lcHostname
            java.lang.String r3 = r5.lcHostname
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L37
            int r1 = r4.port
            int r3 = r5.port
            if (r1 != r3) goto L37
            java.lang.String r1 = r4.schemeName
            java.lang.String r3 = r5.schemeName
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L37
            java.net.InetAddress r1 = r4.address
            if (r1 != 0) goto L2e
            java.net.InetAddress r5 = r5.address
            if (r5 != 0) goto L37
            goto L38
        L2e:
            java.net.InetAddress r5 = r5.address
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L37
            goto L38
        L37:
            r0 = 0
        L38:
            return r0
        L39:
            return r2
    }

    public java.net.InetAddress getAddress() {
            r1 = this;
            java.net.InetAddress r0 = r1.address
            return r0
    }

    public java.lang.String getHostName() {
            r1 = this;
            java.lang.String r0 = r1.hostname
            return r0
    }

    public int getPort() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    public java.lang.String getSchemeName() {
            r1 = this;
            java.lang.String r0 = r1.schemeName
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.lcHostname
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            int r1 = r2.port
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            java.lang.String r1 = r2.schemeName
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            java.net.InetAddress r1 = r2.address
            if (r1 == 0) goto L1c
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
        L1c:
            return r0
    }

    public java.lang.String toHostString() {
            r2 = this;
            int r0 = r2.port
            r1 = -1
            if (r0 == r1) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = r2.hostname
            int r1 = r1.length()
            int r1 = r1 + 6
            r0.<init>(r1)
            java.lang.String r1 = r2.hostname
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r2.port
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L2a:
            java.lang.String r0 = r2.hostname
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.toURI()
            return r0
    }

    public java.lang.String toURI() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.schemeName
            r0.append(r1)
            java.lang.String r1 = "://"
            r0.append(r1)
            java.lang.String r1 = r3.hostname
            r0.append(r1)
            int r1 = r3.port
            r2 = -1
            if (r1 == r2) goto L27
            r1 = 58
            r0.append(r1)
            int r1 = r3.port
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r0.append(r1)
        L27:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
