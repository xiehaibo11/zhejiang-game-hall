package com.bytedance.pangle.res.a;

public abstract class j extends java.io.FilterInputStream {
    public j(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected void a(int r1) {
            r0 = this;
            return
    }

    @Override
    public int available() {
            r1 = this;
            int r0 = super.available()     // Catch: java.io.IOException -> L5
            return r0
        L5:
            r0 = move-exception
            throw r0
    }

    @Override
    public void close() {
            r1 = this;
            java.io.InputStream r0 = r1.in     // Catch: java.io.IOException -> L6
            r0.close()     // Catch: java.io.IOException -> L6
            return
        L6:
            r0 = move-exception
            throw r0
    }

    @Override
    public synchronized void mark(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.io.InputStream r0 = r1.in     // Catch: java.lang.Throwable -> L8
            r0.mark(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            java.io.InputStream r0 = r1.in
            boolean r0 = r0.markSupported()
            return r0
    }

    @Override
    public int read() {
            r2 = this;
            java.io.InputStream r0 = r2.in     // Catch: java.io.IOException -> Le
            int r0 = r0.read()     // Catch: java.io.IOException -> Le
            r1 = -1
            if (r0 == r1) goto La
            r1 = 1
        La:
            r2.a(r1)     // Catch: java.io.IOException -> Le
            return r0
        Le:
            r0 = move-exception
            throw r0
    }

    @Override
    public int read(byte[] r2) {
            r1 = this;
            java.io.InputStream r0 = r1.in     // Catch: java.io.IOException -> La
            int r2 = r0.read(r2)     // Catch: java.io.IOException -> La
            r1.a(r2)     // Catch: java.io.IOException -> La
            return r2
        La:
            r2 = move-exception
            throw r2
    }

    @Override
    public int read(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.InputStream r0 = r1.in     // Catch: java.io.IOException -> La
            int r2 = r0.read(r2, r3, r4)     // Catch: java.io.IOException -> La
            r1.a(r2)     // Catch: java.io.IOException -> La
            return r2
        La:
            r2 = move-exception
            throw r2
    }

    @Override
    public synchronized void reset() {
            r1 = this;
            monitor-enter(r1)
            java.io.InputStream r0 = r1.in     // Catch: java.lang.Throwable -> L8 java.io.IOException -> La
            r0.reset()     // Catch: java.lang.Throwable -> L8 java.io.IOException -> La
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            goto Lc
        La:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L8
        Lc:
            monitor-exit(r1)
            throw r0
    }

    @Override
    public long skip(long r2) {
            r1 = this;
            java.io.InputStream r0 = r1.in     // Catch: java.io.IOException -> L7
            long r2 = r0.skip(r2)     // Catch: java.io.IOException -> L7
            return r2
        L7:
            r2 = move-exception
            throw r2
    }
}
