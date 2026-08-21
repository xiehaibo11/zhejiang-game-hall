package com.xiaomi.push;

public final class jo extends jp {
    private int a;
    private byte[] a;
    private int b;

    @Override
    public int a() {
        return this.a;
    }

    @Override
    public int a(byte[] bArr, int i, int i2) {
        int iB = b();
        if (i2 > iB) {
            i2 = iB;
        }
        if (i2 > 0) {
            System.arraycopy(this.a, this.a, bArr, i, i2);
            a(i2);
        }
        return i2;
    }

    @Override
    public void a(int i) {
        this.a += i;
    }

    public void a(byte[] bArr) {
        b(bArr, 0, bArr.length);
    }

    @Override
    public void a(byte[] bArr, int i, int i2) {
        throw new UnsupportedOperationException("No writing allowed!");
    }

    @Override
    public byte[] a() {
        return this.a;
    }

    @Override
    public int b() {
        return this.b - this.a;
    }

    public void b(byte[] bArr, int i, int i2) {
        this.a = bArr;
        this.a = i;
        this.b = i + i2;
    }
}
