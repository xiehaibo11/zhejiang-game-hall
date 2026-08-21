package cz.msebera.android.httpclient.conn;

@java.lang.Deprecated
public class HttpInetSocketAddress extends java.net.InetSocketAddress {
    private static final long serialVersionUID = -6650701828361907957L;
    private final cz.msebera.android.httpclient.HttpHost httphost;

    public HttpInetSocketAddress(cz.msebera.android.httpclient.HttpHost r1, java.net.InetAddress r2, int r3) {
            r0 = this;
            r0.<init>(r2, r3)
            java.lang.String r2 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r2)
            r0.httphost = r1
            return
    }

    public cz.msebera.android.httpclient.HttpHost getHttpHost() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.httphost
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            cz.msebera.android.httpclient.HttpHost r1 = r2.httphost
            java.lang.String r1 = r1.getHostName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r2.getPort()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
