package cz.msebera.android.httpclient.impl;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class DefaultHttpServerConnection extends cz.msebera.android.httpclient.impl.SocketHttpServerConnection {
    public DefaultHttpServerConnection() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void bind(java.net.Socket r5, cz.msebera.android.httpclient.params.HttpParams r6) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r5, r0)
            java.lang.String r0 = "HTTP parameters"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            r4.assertNotOpen()
            r0 = 1
            java.lang.String r1 = "http.tcp.nodelay"
            boolean r1 = r6.getBooleanParameter(r1, r0)
            r5.setTcpNoDelay(r1)
            r1 = 0
            java.lang.String r2 = "http.socket.timeout"
            int r2 = r6.getIntParameter(r2, r1)
            r5.setSoTimeout(r2)
            java.lang.String r2 = "http.socket.keepalive"
            boolean r2 = r6.getBooleanParameter(r2, r1)
            r5.setKeepAlive(r2)
            java.lang.String r2 = "http.socket.linger"
            r3 = -1
            int r2 = r6.getIntParameter(r2, r3)
            if (r2 < 0) goto L3b
            if (r2 <= 0) goto L37
            r3 = 1
            goto L38
        L37:
            r3 = 0
        L38:
            r5.setSoLinger(r3, r2)
        L3b:
            if (r2 < 0) goto L44
            if (r2 <= 0) goto L40
            goto L41
        L40:
            r0 = 0
        L41:
            r5.setSoLinger(r0, r2)
        L44:
            super.bind(r5, r6)
            return
    }
}
