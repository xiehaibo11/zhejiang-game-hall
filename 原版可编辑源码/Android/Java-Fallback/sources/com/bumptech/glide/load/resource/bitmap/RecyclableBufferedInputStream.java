package com.bumptech.glide.load.resource.bitmap;

public class RecyclableBufferedInputStream extends java.io.FilterInputStream {
    private static final java.lang.String TAG = "BufferedIs";
    private volatile byte[] buf;
    private int count;
    private int marklimit;
    private int markpos;
    private int pos;

    public static class InvalidMarkException extends java.lang.RuntimeException {
        private static final long serialVersionUID = -4338378848813561757L;

        public InvalidMarkException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public RecyclableBufferedInputStream(java.io.InputStream r1, byte[] r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = -1
            r0.markpos = r1
            if (r2 == 0) goto Le
            int r1 = r2.length
            if (r1 == 0) goto Le
            r0.buf = r2
            return
        Le:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "buffer is null or empty"
            r1.<init>(r2)
            throw r1
    }

    private int fillbuf(java.io.InputStream r6, byte[] r7) throws java.io.IOException {
            r5 = this;
            int r0 = r5.markpos
            r1 = -1
            r2 = 0
            if (r0 == r1) goto L69
            int r3 = r5.pos
            int r3 = r3 - r0
            int r4 = r5.marklimit
            if (r3 < r4) goto Le
            goto L69
        Le:
            if (r0 != 0) goto L46
            int r0 = r7.length
            if (r4 <= r0) goto L46
            int r0 = r5.count
            int r1 = r7.length
            if (r0 != r1) goto L46
            int r0 = r7.length
            int r0 = r0 * 2
            if (r0 <= r4) goto L1e
            goto L1f
        L1e:
            r4 = r0
        L1f:
            r0 = 3
            java.lang.String r1 = "BufferedIs"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "allocate buffer of length: "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r1, r0)
        L3c:
            byte[] r0 = new byte[r4]
            int r1 = r7.length
            java.lang.System.arraycopy(r7, r2, r0, r2, r1)
            r5.buf = r0
            r7 = r0
            goto L4f
        L46:
            int r0 = r5.markpos
            if (r0 <= 0) goto L4f
            int r1 = r7.length
            int r1 = r1 - r0
            java.lang.System.arraycopy(r7, r0, r7, r2, r1)
        L4f:
            int r0 = r5.pos
            int r1 = r5.markpos
            int r0 = r0 - r1
            r5.pos = r0
            r5.markpos = r2
            r5.count = r2
            int r1 = r7.length
            int r1 = r1 - r0
            int r6 = r6.read(r7, r0, r1)
            int r7 = r5.pos
            if (r6 > 0) goto L65
            goto L66
        L65:
            int r7 = r7 + r6
        L66:
            r5.count = r7
            return r6
        L69:
            int r6 = r6.read(r7)
            if (r6 <= 0) goto L75
            r5.markpos = r1
            r5.pos = r2
            r5.count = r6
        L75:
            return r6
    }

    private static java.io.IOException streamClosed() throws java.io.IOException {
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "BufferedInputStream is closed"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public synchronized int available() throws java.io.IOException {
            r3 = this;
            monitor-enter(r3)
            java.io.InputStream r0 = r3.in     // Catch: java.lang.Throwable -> L1a
            byte[] r1 = r3.buf     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L15
            if (r0 == 0) goto L15
            int r1 = r3.count     // Catch: java.lang.Throwable -> L1a
            int r2 = r3.pos     // Catch: java.lang.Throwable -> L1a
            int r1 = r1 - r2
            int r0 = r0.available()     // Catch: java.lang.Throwable -> L1a
            int r1 = r1 + r0
            monitor-exit(r3)
            return r1
        L15:
            java.io.IOException r0 = streamClosed()     // Catch: java.lang.Throwable -> L1a
            throw r0     // Catch: java.lang.Throwable -> L1a
        L1a:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            r0 = 0
            r2.buf = r0
            java.io.InputStream r1 = r2.in
            r2.in = r0
            if (r1 == 0) goto Lc
            r1.close()
        Lc:
            return
    }

    public synchronized void fixMarkLimit() {
            r1 = this;
            monitor-enter(r1)
            byte[] r0 = r1.buf     // Catch: java.lang.Throwable -> L8
            int r0 = r0.length     // Catch: java.lang.Throwable -> L8
            r1.marklimit = r0     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public synchronized void mark(int r2) {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.marklimit     // Catch: java.lang.Throwable -> Lf
            int r2 = java.lang.Math.max(r0, r2)     // Catch: java.lang.Throwable -> Lf
            r1.marklimit = r2     // Catch: java.lang.Throwable -> Lf
            int r2 = r1.pos     // Catch: java.lang.Throwable -> Lf
            r1.markpos = r2     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public synchronized int read() throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            byte[] r0 = r5.buf     // Catch: java.lang.Throwable -> L40
            java.io.InputStream r1 = r5.in     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto L3b
            if (r1 == 0) goto L3b
            int r2 = r5.pos     // Catch: java.lang.Throwable -> L40
            int r3 = r5.count     // Catch: java.lang.Throwable -> L40
            r4 = -1
            if (r2 < r3) goto L18
            int r1 = r5.fillbuf(r1, r0)     // Catch: java.lang.Throwable -> L40
            if (r1 != r4) goto L18
            monitor-exit(r5)
            return r4
        L18:
            byte[] r1 = r5.buf     // Catch: java.lang.Throwable -> L40
            if (r0 == r1) goto L26
            byte[] r0 = r5.buf     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto L21
            goto L26
        L21:
            java.io.IOException r0 = streamClosed()     // Catch: java.lang.Throwable -> L40
            throw r0     // Catch: java.lang.Throwable -> L40
        L26:
            int r1 = r5.count     // Catch: java.lang.Throwable -> L40
            int r2 = r5.pos     // Catch: java.lang.Throwable -> L40
            int r1 = r1 - r2
            if (r1 <= 0) goto L39
            int r1 = r5.pos     // Catch: java.lang.Throwable -> L40
            int r2 = r1 + 1
            r5.pos = r2     // Catch: java.lang.Throwable -> L40
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L40
            r0 = r0 & 255(0xff, float:3.57E-43)
            monitor-exit(r5)
            return r0
        L39:
            monitor-exit(r5)
            return r4
        L3b:
            java.io.IOException r0 = streamClosed()     // Catch: java.lang.Throwable -> L40
            throw r0     // Catch: java.lang.Throwable -> L40
        L40:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    @Override
    public synchronized int read(byte[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            monitor-enter(r5)
            byte[] r0 = r5.buf     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L99
            if (r8 != 0) goto La
            r6 = 0
            monitor-exit(r5)
            return r6
        La:
            java.io.InputStream r1 = r5.in     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L94
            int r2 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r3 = r5.count     // Catch: java.lang.Throwable -> L9e
            if (r2 >= r3) goto L3b
            int r2 = r5.count     // Catch: java.lang.Throwable -> L9e
            int r3 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r2 = r2 - r3
            if (r2 < r8) goto L1d
            r2 = r8
            goto L22
        L1d:
            int r2 = r5.count     // Catch: java.lang.Throwable -> L9e
            int r3 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r2 = r2 - r3
        L22:
            int r3 = r5.pos     // Catch: java.lang.Throwable -> L9e
            java.lang.System.arraycopy(r0, r3, r6, r7, r2)     // Catch: java.lang.Throwable -> L9e
            int r3 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r3 = r3 + r2
            r5.pos = r3     // Catch: java.lang.Throwable -> L9e
            if (r2 == r8) goto L39
            int r3 = r1.available()     // Catch: java.lang.Throwable -> L9e
            if (r3 != 0) goto L35
            goto L39
        L35:
            int r7 = r7 + r2
            int r2 = r8 - r2
            goto L3c
        L39:
            monitor-exit(r5)
            return r2
        L3b:
            r2 = r8
        L3c:
            int r3 = r5.markpos     // Catch: java.lang.Throwable -> L9e
            r4 = -1
            if (r3 != r4) goto L51
            int r3 = r0.length     // Catch: java.lang.Throwable -> L9e
            if (r2 < r3) goto L51
            int r3 = r1.read(r6, r7, r2)     // Catch: java.lang.Throwable -> L9e
            if (r3 != r4) goto L84
            if (r2 != r8) goto L4d
            goto L4f
        L4d:
            int r4 = r8 - r2
        L4f:
            monitor-exit(r5)
            return r4
        L51:
            int r3 = r5.fillbuf(r1, r0)     // Catch: java.lang.Throwable -> L9e
            if (r3 != r4) goto L5e
            if (r2 != r8) goto L5a
            goto L5c
        L5a:
            int r4 = r8 - r2
        L5c:
            monitor-exit(r5)
            return r4
        L5e:
            byte[] r3 = r5.buf     // Catch: java.lang.Throwable -> L9e
            if (r0 == r3) goto L6c
            byte[] r0 = r5.buf     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L67
            goto L6c
        L67:
            java.io.IOException r6 = streamClosed()     // Catch: java.lang.Throwable -> L9e
            throw r6     // Catch: java.lang.Throwable -> L9e
        L6c:
            int r3 = r5.count     // Catch: java.lang.Throwable -> L9e
            int r4 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r3 = r3 - r4
            if (r3 < r2) goto L75
            r3 = r2
            goto L7a
        L75:
            int r3 = r5.count     // Catch: java.lang.Throwable -> L9e
            int r4 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r3 = r3 - r4
        L7a:
            int r4 = r5.pos     // Catch: java.lang.Throwable -> L9e
            java.lang.System.arraycopy(r0, r4, r6, r7, r3)     // Catch: java.lang.Throwable -> L9e
            int r4 = r5.pos     // Catch: java.lang.Throwable -> L9e
            int r4 = r4 + r3
            r5.pos = r4     // Catch: java.lang.Throwable -> L9e
        L84:
            int r2 = r2 - r3
            if (r2 != 0) goto L89
            monitor-exit(r5)
            return r8
        L89:
            int r4 = r1.available()     // Catch: java.lang.Throwable -> L9e
            if (r4 != 0) goto L92
            int r8 = r8 - r2
            monitor-exit(r5)
            return r8
        L92:
            int r7 = r7 + r3
            goto L3c
        L94:
            java.io.IOException r6 = streamClosed()     // Catch: java.lang.Throwable -> L9e
            throw r6     // Catch: java.lang.Throwable -> L9e
        L99:
            java.io.IOException r6 = streamClosed()     // Catch: java.lang.Throwable -> L9e
            throw r6     // Catch: java.lang.Throwable -> L9e
        L9e:
            r6 = move-exception
            monitor-exit(r5)
            goto La2
        La1:
            throw r6
        La2:
            goto La1
    }

    @Override
    public synchronized void reset() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            byte[] r0 = r2.buf     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L18
            r0 = -1
            int r1 = r2.markpos     // Catch: java.lang.Throwable -> L20
            if (r0 == r1) goto L10
            int r0 = r2.markpos     // Catch: java.lang.Throwable -> L20
            r2.pos = r0     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            return
        L10:
            com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream$InvalidMarkException r0 = new com.bumptech.glide.load.resource.bitmap.RecyclableBufferedInputStream$InvalidMarkException     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "Mark has been invalidated"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L20
            throw r0     // Catch: java.lang.Throwable -> L20
        L18:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "Stream is closed"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L20
            throw r0     // Catch: java.lang.Throwable -> L20
        L20:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public synchronized long skip(long r9) throws java.io.IOException {
            r8 = this;
            monitor-enter(r8)
            byte[] r0 = r8.buf     // Catch: java.lang.Throwable -> L79
            java.io.InputStream r1 = r8.in     // Catch: java.lang.Throwable -> L79
            if (r0 == 0) goto L74
            r2 = 1
            int r4 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r4 >= 0) goto L11
            r9 = 0
            monitor-exit(r8)
            return r9
        L11:
            if (r1 == 0) goto L6f
            int r2 = r8.count     // Catch: java.lang.Throwable -> L79
            int r3 = r8.pos     // Catch: java.lang.Throwable -> L79
            int r2 = r2 - r3
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L79
            int r4 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r4 < 0) goto L26
            int r0 = r8.pos     // Catch: java.lang.Throwable -> L79
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L79
            long r0 = r0 + r9
            int r1 = (int) r0     // Catch: java.lang.Throwable -> L79
            r8.pos = r1     // Catch: java.lang.Throwable -> L79
            monitor-exit(r8)
            return r9
        L26:
            int r2 = r8.count     // Catch: java.lang.Throwable -> L79
            int r3 = r8.pos     // Catch: java.lang.Throwable -> L79
            int r2 = r2 - r3
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L79
            int r4 = r8.count     // Catch: java.lang.Throwable -> L79
            r8.pos = r4     // Catch: java.lang.Throwable -> L79
            int r4 = r8.markpos     // Catch: java.lang.Throwable -> L79
            r5 = -1
            if (r4 == r5) goto L67
            int r4 = r8.marklimit     // Catch: java.lang.Throwable -> L79
            long r6 = (long) r4     // Catch: java.lang.Throwable -> L79
            int r4 = (r9 > r6 ? 1 : (r9 == r6 ? 0 : -1))
            if (r4 > 0) goto L67
            int r0 = r8.fillbuf(r1, r0)     // Catch: java.lang.Throwable -> L79
            if (r0 != r5) goto L44
            monitor-exit(r8)
            return r2
        L44:
            int r0 = r8.count     // Catch: java.lang.Throwable -> L79
            int r1 = r8.pos     // Catch: java.lang.Throwable -> L79
            int r0 = r0 - r1
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L79
            long r4 = r9 - r2
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 < 0) goto L59
            int r0 = r8.pos     // Catch: java.lang.Throwable -> L79
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L79
            long r0 = r0 + r4
            int r1 = (int) r0     // Catch: java.lang.Throwable -> L79
            r8.pos = r1     // Catch: java.lang.Throwable -> L79
            monitor-exit(r8)
            return r9
        L59:
            int r9 = r8.count     // Catch: java.lang.Throwable -> L79
            long r9 = (long) r9     // Catch: java.lang.Throwable -> L79
            long r2 = r2 + r9
            int r9 = r8.pos     // Catch: java.lang.Throwable -> L79
            long r9 = (long) r9     // Catch: java.lang.Throwable -> L79
            long r2 = r2 - r9
            int r9 = r8.count     // Catch: java.lang.Throwable -> L79
            r8.pos = r9     // Catch: java.lang.Throwable -> L79
            monitor-exit(r8)
            return r2
        L67:
            long r9 = r9 - r2
            long r9 = r1.skip(r9)     // Catch: java.lang.Throwable -> L79
            long r2 = r2 + r9
            monitor-exit(r8)
            return r2
        L6f:
            java.io.IOException r9 = streamClosed()     // Catch: java.lang.Throwable -> L79
            throw r9     // Catch: java.lang.Throwable -> L79
        L74:
            java.io.IOException r9 = streamClosed()     // Catch: java.lang.Throwable -> L79
            throw r9     // Catch: java.lang.Throwable -> L79
        L79:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }
}
