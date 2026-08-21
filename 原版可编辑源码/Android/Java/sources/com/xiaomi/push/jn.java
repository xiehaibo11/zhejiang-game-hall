package com.xiaomi.push;

public class jn extends jp {
    private int a;
    private ix a;

    public jn(int i) {
        this.a = new ix(i);
    }

    @Override
    public int a(byte[] bArr, int i, int i2) {
        byte[] bArrA = this.a.a();
        if (i2 > this.a.a() - this.a) {
            i2 = this.a.a() - this.a;
        }
        if (i2 > 0) {
            System.arraycopy(bArrA, this.a, bArr, i, i2);
            this.a += i2;
        }
        return i2;
    }

    @Override
    public void a(byte[] bArr, int i, int i2) {
        this.a.write(bArr, i, i2);
    }

    public int a_() {
        return this.a.size();
    }
}
