package com.czhj.volley.toolbox;

import java.io.ByteArrayOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class PoolingByteArrayOutputStream extends ByteArrayOutputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f1861a = 256;
    private final ByteArrayPool b;

    public PoolingByteArrayOutputStream(ByteArrayPool byteArrayPool) {
        this(byteArrayPool, 256);
    }

    public PoolingByteArrayOutputStream(ByteArrayPool byteArrayPool, int i) {
        this.b = byteArrayPool;
        this.buf = byteArrayPool.getBuf(Math.max(i, 256));
    }

    private void a(int i) {
        if (this.count + i <= this.buf.length) {
            return;
        }
        byte[] buf = this.b.getBuf((this.count + i) * 2);
        System.arraycopy(this.buf, 0, buf, 0, this.count);
        this.b.returnBuf(this.buf);
        this.buf = buf;
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.b.returnBuf(this.buf);
        this.buf = null;
        super.close();
    }

    public void finalize() {
        this.b.returnBuf(this.buf);
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream
    public synchronized void write(int i) {
        a(1);
        super.write(i);
    }

    @Override // java.io.ByteArrayOutputStream, java.io.OutputStream
    public synchronized void write(byte[] bArr, int i, int i2) {
        a(i2);
        super.write(bArr, i, i2);
    }
}
