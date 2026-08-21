package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ContentLengthInputStream extends java.io.InputStream {
    private static final int BUFFER_SIZE = 2048;
    private boolean closed;
    private final long contentLength;
    private cz.msebera.android.httpclient.io.SessionInputBuffer in;
    private long pos;

    public ContentLengthInputStream(cz.msebera.android.httpclient.io.SessionInputBuffer r3, long r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.pos = r0
            r0 = 0
            r2.closed = r0
            r0 = 0
            r2.in = r0
            java.lang.String r0 = "Session input buffer"
            java.lang.Object r3 = cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            cz.msebera.android.httpclient.io.SessionInputBuffer r3 = (cz.msebera.android.httpclient.io.SessionInputBuffer) r3
            r2.in = r3
            java.lang.String r3 = "Content length"
            long r3 = cz.msebera.android.httpclient.util.Args.notNegative(r4, r3)
            r2.contentLength = r3
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r5 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r5.in
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.io.BufferInfo
            if (r1 == 0) goto L17
            cz.msebera.android.httpclient.io.BufferInfo r0 = (cz.msebera.android.httpclient.io.BufferInfo) r0
            int r0 = r0.length()
            long r1 = r5.contentLength
            long r3 = r5.pos
            long r1 = r1 - r3
            int r2 = (int) r1
            int r0 = java.lang.Math.min(r0, r2)
            return r0
        L17:
            r0 = 0
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.closed
            if (r0 != 0) goto L1f
            r0 = 1
            long r1 = r6.pos     // Catch: java.lang.Throwable -> L1b
            long r3 = r6.contentLength     // Catch: java.lang.Throwable -> L1b
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L18
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L1b
        L11:
            int r2 = r6.read(r1)     // Catch: java.lang.Throwable -> L1b
            if (r2 < 0) goto L18
            goto L11
        L18:
            r6.closed = r0
            goto L1f
        L1b:
            r1 = move-exception
            r6.closed = r0
            throw r1
        L1f:
            return
    }

    @Override
    public int read() throws java.io.IOException {
            r6 = this;
            boolean r0 = r6.closed
            if (r0 != 0) goto L4a
            long r0 = r6.pos
            long r2 = r6.contentLength
            r4 = -1
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto Le
            return r4
        Le:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r6.in
            int r0 = r0.read()
            if (r0 != r4) goto L42
            long r1 = r6.pos
            long r3 = r6.contentLength
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L1f
            goto L49
        L1f:
            cz.msebera.android.httpclient.ConnectionClosedException r0 = new cz.msebera.android.httpclient.ConnectionClosedException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Premature end of Content-Length delimited message body (expected: "
            r1.append(r2)
            long r2 = r6.contentLength
            r1.append(r2)
            java.lang.String r2 = "; received: "
            r1.append(r2)
            long r2 = r6.pos
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L42:
            long r1 = r6.pos
            r3 = 1
            long r1 = r1 + r3
            r6.pos = r1
        L49:
            return r0
        L4a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "Attempted read from closed stream."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public int read(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r9, int r10, int r11) throws java.io.IOException {
            r8 = this;
            boolean r0 = r8.closed
            if (r0 != 0) goto L53
            long r0 = r8.pos
            long r2 = r8.contentLength
            r4 = -1
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto Le
            return r4
        Le:
            long r5 = (long) r11
            long r5 = r5 + r0
            int r7 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r7 <= 0) goto L16
            long r2 = r2 - r0
            int r11 = (int) r2
        L16:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r8.in
            int r9 = r0.read(r9, r10, r11)
            if (r9 != r4) goto L4a
            long r10 = r8.pos
            long r0 = r8.contentLength
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 < 0) goto L27
            goto L4a
        L27:
            cz.msebera.android.httpclient.ConnectionClosedException r9 = new cz.msebera.android.httpclient.ConnectionClosedException
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Premature end of Content-Length delimited message body (expected: "
            r10.append(r11)
            long r0 = r8.contentLength
            r10.append(r0)
            java.lang.String r11 = "; received: "
            r10.append(r11)
            long r0 = r8.pos
            r10.append(r0)
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            throw r9
        L4a:
            if (r9 <= 0) goto L52
            long r10 = r8.pos
            long r0 = (long) r9
            long r10 = r10 + r0
            r8.pos = r10
        L52:
            return r9
        L53:
            java.io.IOException r9 = new java.io.IOException
            java.lang.String r10 = "Attempted read from closed stream."
            r9.<init>(r10)
            throw r9
    }

    @Override
    public long skip(long r9) throws java.io.IOException {
            r8 = this;
            r0 = 0
            int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r2 > 0) goto L7
            return r0
        L7:
            r2 = 2048(0x800, float:2.87E-42)
            byte[] r2 = new byte[r2]
            long r3 = r8.contentLength
            long r5 = r8.pos
            long r3 = r3 - r5
            long r9 = java.lang.Math.min(r9, r3)
            r3 = r0
        L15:
            int r5 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r5 <= 0) goto L2d
            r5 = 0
            r6 = 2048(0x800, double:1.012E-320)
            long r6 = java.lang.Math.min(r6, r9)
            int r7 = (int) r6
            int r5 = r8.read(r2, r5, r7)
            r6 = -1
            if (r5 != r6) goto L29
            goto L2d
        L29:
            long r5 = (long) r5
            long r3 = r3 + r5
            long r9 = r9 - r5
            goto L15
        L2d:
            return r3
    }
}
