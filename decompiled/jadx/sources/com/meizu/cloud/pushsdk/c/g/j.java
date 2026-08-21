package com.meizu.cloud.pushsdk.c.g;

/* JADX INFO: loaded from: classes3.dex */
final class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final byte[] f4560a;
    int b;
    int c;
    boolean d;
    final boolean e;
    j f;
    j g;

    j() {
        this.f4560a = new byte[2048];
        this.e = true;
        this.d = false;
    }

    j(j jVar) {
        this(jVar.f4560a, jVar.b, jVar.c);
    }

    j(byte[] bArr, int i, int i2) {
        this.f4560a = bArr;
        this.b = i;
        this.c = i2;
        this.e = false;
        this.d = true;
    }

    public j a() {
        j jVar = this.f;
        if (jVar == this) {
            jVar = null;
        }
        j jVar2 = this.g;
        jVar2.f = this.f;
        this.f.g = jVar2;
        this.f = null;
        this.g = null;
        return jVar;
    }

    public j a(int i) {
        if (i <= 0 || i > this.c - this.b) {
            throw new IllegalArgumentException();
        }
        j jVar = new j(this);
        jVar.c = jVar.b + i;
        this.b += i;
        this.g.a(jVar);
        return jVar;
    }

    public j a(j jVar) {
        jVar.g = this;
        jVar.f = this.f;
        this.f.g = jVar;
        this.f = jVar;
        return jVar;
    }

    public void a(j jVar, int i) {
        if (!jVar.e) {
            throw new IllegalArgumentException();
        }
        int i2 = jVar.c;
        if (i2 + i > 2048) {
            if (jVar.d) {
                throw new IllegalArgumentException();
            }
            int i3 = jVar.b;
            if ((i2 + i) - i3 > 2048) {
                throw new IllegalArgumentException();
            }
            byte[] bArr = jVar.f4560a;
            System.arraycopy(bArr, i3, bArr, 0, i2 - i3);
            jVar.c -= jVar.b;
            jVar.b = 0;
        }
        System.arraycopy(this.f4560a, this.b, jVar.f4560a, jVar.c, i);
        jVar.c += i;
        this.b += i;
    }

    public void b() {
        j jVar = this.g;
        if (jVar == this) {
            throw new IllegalStateException();
        }
        if (jVar.e) {
            int i = this.c - this.b;
            if (i > (2048 - jVar.c) + (jVar.d ? 0 : jVar.b)) {
                return;
            }
            a(this.g, i);
            a();
            k.a(this);
        }
    }
}
