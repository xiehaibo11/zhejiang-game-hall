package com.bytedance.pangle.res.a;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

public abstract class j extends FilterInputStream {
    protected void a(int i) {
    }

    public j(InputStream inputStream) {
        super(inputStream);
    }

    @Override
    public int read() throws IOException {
        try {
            int i = this.in.read();
            a(i != -1 ? 1 : -1);
            return i;
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public int read(byte[] bArr) throws IOException {
        try {
            int i = this.in.read(bArr);
            a(i);
            return i;
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        try {
            int i3 = this.in.read(bArr, i, i2);
            a(i3);
            return i3;
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public long skip(long j) throws IOException {
        try {
            return this.in.skip(j);
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public int available() throws IOException {
        try {
            return super.available();
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public void close() throws IOException {
        try {
            this.in.close();
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public synchronized void mark(int i) {
        this.in.mark(i);
    }

    @Override
    public synchronized void reset() {
        try {
            this.in.reset();
        } catch (IOException e) {
            throw e;
        }
    }

    @Override
    public boolean markSupported() {
        return this.in.markSupported();
    }
}
