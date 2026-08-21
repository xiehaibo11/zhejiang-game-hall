package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class SocketInputBuffer extends cz.msebera.android.httpclient.impl.io.AbstractSessionInputBuffer implements cz.msebera.android.httpclient.io.EofSensor {
    private boolean eof;
    private final java.net.Socket socket;

    public SocketInputBuffer(java.net.Socket r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            r1.socket = r2
            r0 = 0
            r1.eof = r0
            if (r3 >= 0) goto L13
            int r3 = r2.getReceiveBufferSize()
        L13:
            r0 = 1024(0x400, float:1.435E-42)
            if (r3 >= r0) goto L19
            r3 = 1024(0x400, float:1.435E-42)
        L19:
            java.io.InputStream r2 = r2.getInputStream()
            r1.init(r2, r3, r4)
            return
    }

    @Override
    protected int fillBuffer() throws java.io.IOException {
            r2 = this;
            int r0 = super.fillBuffer()
            r1 = -1
            if (r0 != r1) goto L9
            r1 = 1
            goto La
        L9:
            r1 = 0
        La:
            r2.eof = r1
            return r0
    }

    @Override
    public boolean isDataAvailable(int r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.hasBufferedData()
            if (r0 != 0) goto L25
            java.net.Socket r0 = r2.socket
            int r0 = r0.getSoTimeout()
            java.net.Socket r1 = r2.socket     // Catch: java.lang.Throwable -> L1e
            r1.setSoTimeout(r3)     // Catch: java.lang.Throwable -> L1e
            r2.fillBuffer()     // Catch: java.lang.Throwable -> L1e
            boolean r3 = r2.hasBufferedData()     // Catch: java.lang.Throwable -> L1e
            java.net.Socket r1 = r2.socket
            r1.setSoTimeout(r0)
            goto L26
        L1e:
            r3 = move-exception
            java.net.Socket r1 = r2.socket
            r1.setSoTimeout(r0)
            throw r3
        L25:
            r3 = r0
        L26:
            return r3
    }

    @Override
    public boolean isEof() {
            r1 = this;
            boolean r0 = r1.eof
            return r0
    }
}
