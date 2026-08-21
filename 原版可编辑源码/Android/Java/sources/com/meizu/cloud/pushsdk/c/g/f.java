package com.meizu.cloud.pushsdk.c.g;

public abstract class f implements l {
    private final l a;

    public f(l lVar) {
        if (lVar == null) {
            throw new IllegalArgumentException("delegate == null");
        }
        this.a = lVar;
    }

    @Override
    public void a(b bVar, long j) {
        this.a.a(bVar, j);
    }

    @Override
    public void close() {
        this.a.close();
    }

    @Override
    public void flush() {
        this.a.flush();
    }

    public String toString() {
        return getClass().getSimpleName() + "(" + this.a.toString() + ")";
    }
}
