package com.sigmob.sdk.videocache;

import java.io.ByteArrayInputStream;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public class a implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile byte[] f5212a;
    private volatile boolean b;

    public a() {
        this(new byte[0]);
    }

    public a(byte[] bArr) {
        this.f5212a = (byte[]) n.a(bArr);
    }

    @Override // com.sigmob.sdk.videocache.c
    public int a(byte[] bArr, long j, int i) throws p {
        if (j >= this.f5212a.length) {
            return -1;
        }
        if (j <= 2147483647L) {
            return new ByteArrayInputStream(this.f5212a).read(bArr, (int) j, i);
        }
        throw new IllegalArgumentException("Too long offset for memory cache " + j);
    }

    @Override // com.sigmob.sdk.videocache.c
    public long a() throws p {
        return this.f5212a.length;
    }

    @Override // com.sigmob.sdk.videocache.c
    public void a(byte[] bArr, int i) throws p {
        n.a(this.f5212a);
        n.a(i >= 0 && i <= bArr.length);
        byte[] bArrCopyOf = Arrays.copyOf(this.f5212a, this.f5212a.length + i);
        System.arraycopy(bArr, 0, bArrCopyOf, this.f5212a.length, i);
        this.f5212a = bArrCopyOf;
    }

    @Override // com.sigmob.sdk.videocache.c
    public void b() throws p {
    }

    @Override // com.sigmob.sdk.videocache.c
    public void c() {
        this.b = true;
    }

    @Override // com.sigmob.sdk.videocache.c
    public boolean d() {
        return this.b;
    }
}
