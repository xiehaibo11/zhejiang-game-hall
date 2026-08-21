package com.sigmob.sdk.videocache;

import java.io.ByteArrayInputStream;

public class b implements s {
    private final byte[] a;
    private ByteArrayInputStream b;

    public b(byte[] bArr) {
        this.a = bArr;
    }

    @Override
    public int a(byte[] bArr) throws p {
        return this.b.read(bArr, 0, bArr.length);
    }

    @Override
    public long a() throws p {
        return this.a.length;
    }

    @Override
    public void a(long j) throws p {
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(this.a);
        this.b = byteArrayInputStream;
        byteArrayInputStream.skip(j);
    }

    @Override
    public void b() throws p {
    }
}
