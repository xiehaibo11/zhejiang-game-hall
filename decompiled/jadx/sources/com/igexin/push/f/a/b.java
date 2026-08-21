package com.igexin.push.f.a;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b extends com.igexin.b.a.d.a {
    String b;
    byte[] c;
    public boolean d;

    public b(String str) {
        this.b = str;
    }

    public void a(Exception exc) {
    }

    public void a(byte[] bArr) {
        this.d = false;
        if (bArr != null && bArr.length >= 7 && bArr[5] == 111 && bArr[6] == 107) {
            this.d = true;
        }
    }

    public void b(byte[] bArr) {
        this.c = bArr;
    }

    public String c() {
        return this.b;
    }

    public byte[] d() {
        return this.c;
    }
}
