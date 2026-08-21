package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class jn extends jp {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8257a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ix f828a;

    public jn(int i) {
        this.f828a = new ix(i);
    }

    @Override // com.xiaomi.push.jp
    public int a(byte[] bArr, int i, int i2) {
        byte[] bArrM546a = this.f828a.m546a();
        if (i2 > this.f828a.a() - this.f8257a) {
            i2 = this.f828a.a() - this.f8257a;
        }
        if (i2 > 0) {
            System.arraycopy(bArrM546a, this.f8257a, bArr, i, i2);
            this.f8257a += i2;
        }
        return i2;
    }

    @Override // com.xiaomi.push.jp
    /* JADX INFO: renamed from: a */
    public void mo569a(byte[] bArr, int i, int i2) {
        this.f828a.write(bArr, i, i2);
    }

    public int a_() {
        return this.f828a.size();
    }
}
