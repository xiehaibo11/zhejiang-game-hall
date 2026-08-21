package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class ChunkedOutputStream extends java.io.OutputStream {
    private final byte[] cache;
    private int cachePosition;
    private boolean closed;
    private final cz.msebera.android.httpclient.io.SessionOutputBuffer out;
    private boolean wroteLastChunk;

    public ChunkedOutputStream(int r2, cz.msebera.android.httpclient.io.SessionOutputBuffer r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.cachePosition = r0
            r1.wroteLastChunk = r0
            r1.closed = r0
            byte[] r2 = new byte[r2]
            r1.cache = r2
            r1.out = r3
            return
    }

    @java.lang.Deprecated
    public ChunkedOutputStream(cz.msebera.android.httpclient.io.SessionOutputBuffer r2) throws java.io.IOException {
            r1 = this;
            r0 = 2048(0x800, float:2.87E-42)
            r1.<init>(r0, r2)
            return
    }

    @java.lang.Deprecated
    public ChunkedOutputStream(cz.msebera.android.httpclient.io.SessionOutputBuffer r1, int r2) throws java.io.IOException {
            r0 = this;
            r0.<init>(r2, r1)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Lf
            r0 = 1
            r1.closed = r0
            r1.finish()
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
        Lf:
            return
    }

    public void finish() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.wroteLastChunk
            if (r0 != 0) goto Ld
            r1.flushCache()
            r1.writeClosingChunk()
            r0 = 1
            r1.wroteLastChunk = r0
        Ld:
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            r1.flushCache()
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
            return
    }

    protected void flushCache() throws java.io.IOException {
            r4 = this;
            int r0 = r4.cachePosition
            if (r0 <= 0) goto L20
            cz.msebera.android.httpclient.io.SessionOutputBuffer r1 = r4.out
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            r1.writeLine(r0)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r4.out
            byte[] r1 = r4.cache
            int r2 = r4.cachePosition
            r3 = 0
            r0.write(r1, r3, r2)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r4.out
            java.lang.String r1 = ""
            r0.writeLine(r1)
            r4.cachePosition = r3
        L20:
            return
    }

    protected void flushCacheWithAppend(byte[] r5, int r6, int r7) throws java.io.IOException {
            r4 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r4.out
            int r1 = r4.cachePosition
            int r1 = r1 + r7
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.writeLine(r1)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r4.out
            byte[] r1 = r4.cache
            int r2 = r4.cachePosition
            r3 = 0
            r0.write(r1, r3, r2)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r4.out
            r0.write(r5, r6, r7)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r5 = r4.out
            java.lang.String r6 = ""
            r5.writeLine(r6)
            r4.cachePosition = r3
            return
    }

    @Override
    public void write(int r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.closed
            if (r0 != 0) goto L18
            byte[] r0 = r2.cache
            int r1 = r2.cachePosition
            byte r3 = (byte) r3
            r0[r1] = r3
            int r1 = r1 + 1
            r2.cachePosition = r1
            int r3 = r2.cachePosition
            int r0 = r0.length
            if (r3 != r0) goto L17
            r2.flushCache()
        L17:
            return
        L18:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r0 = "Attempted write to closed stream."
            r3.<init>(r0)
            throw r3
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
    public void write(byte[] r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.closed
            if (r0 != 0) goto L19
            byte[] r0 = r3.cache
            int r1 = r0.length
            int r2 = r3.cachePosition
            int r1 = r1 - r2
            if (r6 < r1) goto L10
            r3.flushCacheWithAppend(r4, r5, r6)
            goto L18
        L10:
            java.lang.System.arraycopy(r4, r5, r0, r2, r6)
            int r4 = r3.cachePosition
            int r4 = r4 + r6
            r3.cachePosition = r4
        L18:
            return
        L19:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "Attempted write to closed stream."
            r4.<init>(r5)
            throw r4
    }

    protected void writeClosingChunk() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r2.out
            java.lang.String r1 = "0"
            r0.writeLine(r1)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r2.out
            java.lang.String r1 = ""
            r0.writeLine(r1)
            return
    }
}
