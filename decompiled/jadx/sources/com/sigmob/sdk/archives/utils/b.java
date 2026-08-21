package com.sigmob.sdk.archives.utils;

import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: classes3.dex */
public class b extends FilterInputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f4781a;

    public b(InputStream inputStream) {
        super(inputStream);
    }

    public long a() {
        return this.f4781a;
    }

    protected final void a(long j) {
        if (j != -1) {
            this.f4781a += j;
        }
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public int read() throws IOException {
        int i = this.in.read();
        if (i >= 0) {
            a(1L);
        }
        return i;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public int read(byte[] bArr) throws IOException {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public int read(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this.in.read(bArr, i, i2);
        if (i3 >= 0) {
            a(i3);
        }
        return i3;
    }
}
