package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public final class jo extends jp {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8258a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f829a;
    private int b;

    @Override // com.xiaomi.push.jp
    public int a() {
        return this.f8258a;
    }

    @Override // com.xiaomi.push.jp
    public int a(byte[] bArr, int i, int i2) {
        int iB = b();
        if (i2 > iB) {
            i2 = iB;
        }
        if (i2 > 0) {
            System.arraycopy(this.f829a, this.f8258a, bArr, i, i2);
            a(i2);
        }
        return i2;
    }

    @Override // com.xiaomi.push.jp
    public void a(int i) {
        this.f8258a += i;
    }

    public void a(byte[] bArr) {
        b(bArr, 0, bArr.length);
    }

    @Override // com.xiaomi.push.jp
    /* JADX INFO: renamed from: a */
    public void mo569a(byte[] bArr, int i, int i2) {
        throw new UnsupportedOperationException("No writing allowed!");
    }

    @Override // com.xiaomi.push.jp
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] mo570a() {
        return this.f829a;
    }

    @Override // com.xiaomi.push.jp
    public int b() {
        return this.b - this.f8258a;
    }

    public void b(byte[] bArr, int i, int i2) {
        this.f829a = bArr;
        this.f8258a = i;
        this.b = i + i2;
    }
}
