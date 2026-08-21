package com.czhj.volley.toolbox;

public class PoolingByteArrayOutputStream extends java.io.ByteArrayOutputStream {
    private static final int a = 256;
    private final com.czhj.volley.toolbox.ByteArrayPool b;

    public PoolingByteArrayOutputStream(com.czhj.volley.toolbox.ByteArrayPool r2) {
            r1 = this;
            r0 = 256(0x100, float:3.59E-43)
            r1.<init>(r2, r0)
            return
    }

    public PoolingByteArrayOutputStream(com.czhj.volley.toolbox.ByteArrayPool r2, int r3) {
            r1 = this;
            r1.<init>()
            r1.b = r2
            r0 = 256(0x100, float:3.59E-43)
            int r3 = java.lang.Math.max(r3, r0)
            byte[] r2 = r2.getBuf(r3)
            r1.buf = r2
            return
    }

    private void a(int r4) {
            r3 = this;
            int r0 = r3.count
            int r0 = r0 + r4
            byte[] r1 = r3.buf
            int r1 = r1.length
            if (r0 > r1) goto L9
            return
        L9:
            com.czhj.volley.toolbox.ByteArrayPool r0 = r3.b
            int r1 = r3.count
            int r1 = r1 + r4
            int r1 = r1 * 2
            byte[] r4 = r0.getBuf(r1)
            byte[] r0 = r3.buf
            int r1 = r3.count
            r2 = 0
            java.lang.System.arraycopy(r0, r2, r4, r2, r1)
            com.czhj.volley.toolbox.ByteArrayPool r0 = r3.b
            byte[] r1 = r3.buf
            r0.returnBuf(r1)
            r3.buf = r4
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            com.czhj.volley.toolbox.ByteArrayPool r0 = r2.b
            byte[] r1 = r2.buf
            r0.returnBuf(r1)
            r0 = 0
            r2.buf = r0
            super.close()
            return
    }

    public void finalize() {
            r2 = this;
            com.czhj.volley.toolbox.ByteArrayPool r0 = r2.b
            byte[] r1 = r2.buf
            r0.returnBuf(r1)
            return
    }

    @Override
    public synchronized void write(int r2) {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.a(r0)     // Catch: java.lang.Throwable -> La
            super.write(r2)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void write(byte[] r1, int r2, int r3) {
            r0 = this;
            monitor-enter(r0)
            r0.a(r3)     // Catch: java.lang.Throwable -> L9
            super.write(r1, r2, r3)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return
        L9:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
