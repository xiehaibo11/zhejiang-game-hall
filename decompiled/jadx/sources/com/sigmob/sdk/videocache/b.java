package com.sigmob.sdk.videocache;

import java.io.ByteArrayInputStream;

/* JADX INFO: loaded from: classes3.dex */
public class b implements s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final byte[] f5213a;
    private ByteArrayInputStream b;

    public b(byte[] bArr) {
        this.f5213a = bArr;
    }

    @Override // com.sigmob.sdk.videocache.s
    public int a(byte[] bArr) throws p {
        return this.b.read(bArr, 0, bArr.length);
    }

    @Override // com.sigmob.sdk.videocache.s
    public long a() throws p {
        return this.f5213a.length;
    }

    @Override // com.sigmob.sdk.videocache.s
    public void a(long j) throws p {
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(this.f5213a);
        this.b = byteArrayInputStream;
        byteArrayInputStream.skip(j);
    }

    @Override // com.sigmob.sdk.videocache.s
    public void b() throws p {
    }
}
