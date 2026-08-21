package com.tencent.open.utils;

/* JADX INFO: compiled from: ProGuard */
/* JADX INFO: loaded from: classes3.dex */
public final class n implements Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f5545a;

    public n(long j) {
        this.f5545a = j;
    }

    public boolean equals(Object obj) {
        return obj != null && (obj instanceof n) && this.f5545a == ((n) obj).b();
    }

    public byte[] a() {
        long j = this.f5545a;
        return new byte[]{(byte) (255 & j), (byte) ((65280 & j) >> 8), (byte) ((16711680 & j) >> 16), (byte) ((j & 4278190080L) >> 24)};
    }

    public long b() {
        return this.f5545a;
    }

    public int hashCode() {
        return (int) this.f5545a;
    }
}
