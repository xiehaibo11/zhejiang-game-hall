package com.meizu.cloud.pushsdk.c.g;

/* JADX INFO: loaded from: classes3.dex */
public abstract class f implements l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final l f4553a;

    public f(l lVar) {
        if (lVar == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.f4553a = lVar;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l
    public void a(b bVar, long j) {
        this.f4553a.a(bVar, j);
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Closeable, java.lang.AutoCloseable, com.meizu.cloud.pushsdk.c.g.m
    public void close() {
        this.f4553a.close();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Flushable
    public void flush() {
        this.f4553a.flush();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.f4553a.toString() + ")";
    }
}
