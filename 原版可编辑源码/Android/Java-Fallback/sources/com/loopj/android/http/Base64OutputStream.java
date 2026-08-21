package com.loopj.android.http;

public class Base64OutputStream extends java.io.FilterOutputStream {
    private static final byte[] EMPTY = null;
    private int bpos;
    private byte[] buffer;
    private final com.loopj.android.http.Base64.Coder coder;
    private final int flags;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.loopj.android.http.Base64OutputStream.EMPTY = r0
            return
    }

    public Base64OutputStream(java.io.OutputStream r2, int r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r3, r0)
            return
    }

    public Base64OutputStream(java.io.OutputStream r2, int r3, boolean r4) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.buffer = r2
            r0 = 0
            r1.bpos = r0
            r1.flags = r3
            if (r4 == 0) goto L15
            com.loopj.android.http.Base64$Encoder r4 = new com.loopj.android.http.Base64$Encoder
            r4.<init>(r3, r2)
            r1.coder = r4
            goto L1c
        L15:
            com.loopj.android.http.Base64$Decoder r4 = new com.loopj.android.http.Base64$Decoder
            r4.<init>(r3, r2)
            r1.coder = r4
        L1c:
            return
    }

    private byte[] embiggen(byte[] r2, int r3) {
            r1 = this;
            if (r2 == 0) goto L7
            int r0 = r2.length
            if (r0 >= r3) goto L6
            goto L7
        L6:
            return r2
        L7:
            byte[] r2 = new byte[r3]
            return r2
    }

    private void flushBuffer() throws java.io.IOException {
            r3 = this;
            int r0 = r3.bpos
            if (r0 <= 0) goto Lc
            byte[] r1 = r3.buffer
            r2 = 0
            r3.internalWrite(r1, r2, r0, r2)
            r3.bpos = r2
        Lc:
            return
    }

    private void internalWrite(byte[] r4, int r5, int r6, boolean r7) throws java.io.IOException {
            r3 = this;
            com.loopj.android.http.Base64$Coder r0 = r3.coder
            byte[] r1 = r0.output
            com.loopj.android.http.Base64$Coder r2 = r3.coder
            int r2 = r2.maxOutputSize(r6)
            byte[] r1 = r3.embiggen(r1, r2)
            r0.output = r1
            com.loopj.android.http.Base64$Coder r0 = r3.coder
            boolean r4 = r0.process(r4, r5, r6, r7)
            if (r4 == 0) goto L27
            java.io.OutputStream r4 = r3.out
            com.loopj.android.http.Base64$Coder r5 = r3.coder
            byte[] r5 = r5.output
            r6 = 0
            com.loopj.android.http.Base64$Coder r7 = r3.coder
            int r7 = r7.op
            r4.write(r5, r6, r7)
            return
        L27:
            com.loopj.android.http.Base64DataException r4 = new com.loopj.android.http.Base64DataException
            java.lang.String r5 = "bad base-64"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            r3.flushBuffer()     // Catch: java.io.IOException -> Lc
            byte[] r0 = com.loopj.android.http.Base64OutputStream.EMPTY     // Catch: java.io.IOException -> Lc
            r1 = 1
            r2 = 0
            r3.internalWrite(r0, r2, r2, r1)     // Catch: java.io.IOException -> Lc
            r0 = 0
            goto Ld
        Lc:
            r0 = move-exception
        Ld:
            int r1 = r3.flags     // Catch: java.io.IOException -> L1f
            r1 = r1 & 16
            if (r1 != 0) goto L19
            java.io.OutputStream r1 = r3.out     // Catch: java.io.IOException -> L1f
            r1.close()     // Catch: java.io.IOException -> L1f
            goto L23
        L19:
            java.io.OutputStream r1 = r3.out     // Catch: java.io.IOException -> L1f
            r1.flush()     // Catch: java.io.IOException -> L1f
            goto L23
        L1f:
            r1 = move-exception
            if (r0 == 0) goto L23
            r0 = r1
        L23:
            if (r0 != 0) goto L26
            return
        L26:
            throw r0
    }

    @Override
    public void write(int r4) throws java.io.IOException {
            r3 = this;
            byte[] r0 = r3.buffer
            if (r0 != 0) goto La
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            r3.buffer = r0
        La:
            int r0 = r3.bpos
            byte[] r1 = r3.buffer
            int r2 = r1.length
            if (r0 < r2) goto L17
            r2 = 0
            r3.internalWrite(r1, r2, r0, r2)
            r3.bpos = r2
        L17:
            byte[] r0 = r3.buffer
            int r1 = r3.bpos
            int r2 = r1 + 1
            r3.bpos = r2
            byte r4 = (byte) r4
            r0[r1] = r4
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            if (r4 > 0) goto L3
            return
        L3:
            r1.flushBuffer()
            r0 = 0
            r1.internalWrite(r2, r3, r4, r0)
            return
    }
}
