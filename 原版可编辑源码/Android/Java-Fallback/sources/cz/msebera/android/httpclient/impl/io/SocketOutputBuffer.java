package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
public class SocketOutputBuffer extends cz.msebera.android.httpclient.impl.io.AbstractSessionOutputBuffer {
    public SocketOutputBuffer(java.net.Socket r2, int r3, cz.msebera.android.httpclient.params.HttpParams r4) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Socket"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            if (r3 >= 0) goto Le
            int r3 = r2.getSendBufferSize()
        Le:
            r0 = 1024(0x400, float:1.435E-42)
            if (r3 >= r0) goto L14
            r3 = 1024(0x400, float:1.435E-42)
        L14:
            java.io.OutputStream r2 = r2.getOutputStream()
            r1.init(r2, r3, r4)
            return
    }
}
