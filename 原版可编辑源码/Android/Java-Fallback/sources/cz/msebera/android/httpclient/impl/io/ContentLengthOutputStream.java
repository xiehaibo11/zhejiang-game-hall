package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ContentLengthOutputStream extends java.io.OutputStream {
    private boolean closed;
    private final long contentLength;
    private final cz.msebera.android.httpclient.io.SessionOutputBuffer out;
    private long total;

    public ContentLengthOutputStream(cz.msebera.android.httpclient.io.SessionOutputBuffer r3, long r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.total = r0
            r0 = 0
            r2.closed = r0
            java.lang.String r0 = "Session output buffer"
            java.lang.Object r3 = cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r3 = (cz.msebera.android.httpclient.io.SessionOutputBuffer) r3
            r2.out = r3
            java.lang.String r3 = "Content length"
            long r3 = cz.msebera.android.httpclient.util.Args.notNegative(r4, r3)
            r2.contentLength = r3
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Lc
            r0 = 1
            r1.closed = r0
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
        Lc:
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
            return
    }

    @Override
    public void write(int r6) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 != 0) goto L19
            long r0 = r5.total
            long r2 = r5.contentLength
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L18
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r5.out
            r0.write(r6)
            long r0 = r5.total
            r2 = 1
            long r0 = r0 + r2
            r5.total = r0
        L18:
            return
        L19:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r0 = "Attempted write to closed stream."
            r6.<init>(r0)
            throw r6
    }

    @Override
    public void write(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.write(r3, r1, r0)
            return
    }

    @Override
    public void write(byte[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 != 0) goto L1f
            long r0 = r5.total
            long r2 = r5.contentLength
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L1e
            long r2 = r2 - r0
            long r0 = (long) r8
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L13
            int r8 = (int) r2
        L13:
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r5.out
            r0.write(r6, r7, r8)
            long r6 = r5.total
            long r0 = (long) r8
            long r6 = r6 + r0
            r5.total = r6
        L1e:
            return
        L1f:
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "Attempted write to closed stream."
            r6.<init>(r7)
            throw r6
    }
}
