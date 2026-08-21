package cz.msebera.android.httpclient.conn.socket;

@cz.msebera.android.httpclient.annotation.Immutable
public class PlainConnectionSocketFactory implements cz.msebera.android.httpclient.conn.socket.ConnectionSocketFactory {
    public static final cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory INSTANCE = null;

    static {
            cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory r0 = new cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory
            r0.<init>()
            cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory.INSTANCE = r0
            return
    }

    public PlainConnectionSocketFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory getSocketFactory() {
            cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory r0 = cz.msebera.android.httpclient.conn.socket.PlainConnectionSocketFactory.INSTANCE
            return r0
    }

    @Override
    public java.net.Socket connectSocket(int r1, java.net.Socket r2, cz.msebera.android.httpclient.HttpHost r3, java.net.InetSocketAddress r4, java.net.InetSocketAddress r5, cz.msebera.android.httpclient.protocol.HttpContext r6) throws java.io.IOException {
            r0 = this;
            if (r2 == 0) goto L3
            goto L7
        L3:
            java.net.Socket r2 = r0.createSocket(r6)
        L7:
            if (r5 == 0) goto Lc
            r2.bind(r5)
        Lc:
            r2.connect(r4, r1)     // Catch: java.io.IOException -> L10
            return r2
        L10:
            r1 = move-exception
            r2.close()     // Catch: java.io.IOException -> L14
        L14:
            throw r1
    }

    @Override
    public java.net.Socket createSocket(cz.msebera.android.httpclient.protocol.HttpContext r1) throws java.io.IOException {
            r0 = this;
            java.net.Socket r1 = new java.net.Socket
            r1.<init>()
            return r1
    }
}
