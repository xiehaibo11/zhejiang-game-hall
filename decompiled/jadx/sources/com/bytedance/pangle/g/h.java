package com.bytedance.pangle.g;

import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes.dex */
final class h implements k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ByteBuffer f1543a;

    h(ByteBuffer byteBuffer) {
        this.f1543a = byteBuffer.slice();
    }

    @Override // com.bytedance.pangle.g.k
    public final long a() {
        return this.f1543a.capacity();
    }

    @Override // com.bytedance.pangle.g.k
    public final void a(j jVar, long j, int i) {
        ByteBuffer byteBufferSlice;
        synchronized (this.f1543a) {
            this.f1543a.position(0);
            int i2 = (int) j;
            this.f1543a.limit(i + i2);
            this.f1543a.position(i2);
            byteBufferSlice = this.f1543a.slice();
        }
        jVar.a(byteBufferSlice);
    }
}
