package com.igexin.push.extension.distribution.basic.f;

/* JADX INFO: loaded from: classes2.dex */
public abstract class d extends com.igexin.b.a.d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f2636a;
    byte[] b;
    protected boolean c;
    protected boolean d;
    protected boolean e;
    public boolean f;

    public d(String str) {
        this.f2636a = str;
    }

    public void a(Exception exc) {
    }

    public void a(byte[] bArr) {
        this.f = false;
        if (bArr != null && bArr.length >= 7 && bArr[5] == 111 && bArr[6] == 107) {
            this.f = true;
        }
    }

    public String b() {
        return this.f2636a;
    }

    public void b(byte[] bArr) {
        this.b = bArr;
    }

    public byte[] c() {
        return this.b;
    }

    public boolean d() {
        return this.c;
    }

    public boolean e() {
        return this.d;
    }
}
