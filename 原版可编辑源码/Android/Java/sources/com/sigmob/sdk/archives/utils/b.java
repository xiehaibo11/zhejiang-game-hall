package com.sigmob.sdk.archives.utils;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

public class b extends FilterInputStream {
    private long a;

    public b(InputStream inputStream) {
        super(inputStream);
    }

    public long a() {
        return this.a;
    }

    protected final void a(long j) {
        if (j != -1) {
            this.a += j;
        }
    }

    @Override
    public int read() throws IOException {
        int i = this.in.read();
        if (i >= 0) {
            a(1L);
        }
        return i;
    }

    @Override
    public int read(byte[] bArr) throws IOException {
        return read(bArr, 0, bArr.length);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this.in.read(bArr, i, i2);
        if (i3 >= 0) {
            a(i3);
        }
        return i3;
    }
}
