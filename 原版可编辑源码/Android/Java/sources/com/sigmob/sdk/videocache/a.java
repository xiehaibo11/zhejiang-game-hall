package com.sigmob.sdk.videocache;

import java.io.ByteArrayInputStream;
import java.util.Arrays;

public class a implements c {
    private volatile byte[] a;
    private volatile boolean b;

    public a() {
        this(new byte[0]);
    }

    public a(byte[] bArr) {
        this.a = (byte[]) n.a(bArr);
    }

    @Override
    public int a(byte[] bArr, long j, int i) throws p {
        if (j >= this.a.length) {
            return -1;
        }
        if (j <= 2147483647L) {
            return new ByteArrayInputStream(this.a).read(bArr, (int) j, i);
        }
        throw new IllegalArgumentException("Too long offset for memory cache " + j);
    }

    @Override
    public long a() throws p {
        return this.a.length;
    }

    @Override
    public void a(byte[] bArr, int i) throws p {
        n.a(this.a);
        n.a(i >= 0 && i <= bArr.length);
        byte[] bArrCopyOf = Arrays.copyOf(this.a, this.a.length + i);
        System.arraycopy(bArr, 0, bArrCopyOf, this.a.length, i);
        this.a = bArrCopyOf;
    }

    @Override
    public void b() throws p {
    }

    @Override
    public void c() {
        this.b = true;
    }

    @Override
    public boolean d() {
        return this.b;
    }
}
