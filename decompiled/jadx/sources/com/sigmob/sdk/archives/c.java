package com.sigmob.sdk.archives;

import java.io.IOException;
import java.io.InputStream;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public abstract class c extends InputStream {
    private static final int b = 255;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f4773a = new byte[1];
    private long c = 0;

    private void b(long j) {
        if (j != -1) {
            this.c += j;
        }
    }

    public abstract a a() throws IOException;

    protected void a(int i) {
        b(i);
    }

    protected void a(long j) {
        this.c -= j;
    }

    public boolean a(a aVar) {
        return true;
    }

    @Deprecated
    public int b() {
        return (int) this.c;
    }

    protected long c() {
        return this.c;
    }

    @Override // java.io.InputStream
    public int read() throws IOException {
        if (read(this.f4773a, 0, 1) == -1) {
            return -1;
        }
        return this.f4773a[0] & UByte.MAX_VALUE;
    }
}
