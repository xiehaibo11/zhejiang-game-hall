package com.tkay.expressad.exoplayer.j;

import com.tkay.expressad.exoplayer.k.af;
import java.util.Arrays;

public final class l implements b {
    private static final int a = 100;
    private final boolean b;
    private final int c;
    private final byte[] d;
    private final a[] e;
    private int f;
    private int g;
    private int h;
    private a[] i;

    public l(byte b) {
        this();
    }

    private l() {
        com.tkay.expressad.exoplayer.k.a.a(true);
        com.tkay.expressad.exoplayer.k.a.a(true);
        this.b = true;
        this.c = 65536;
        this.h = 0;
        this.i = new a[100];
        this.d = null;
        this.e = new a[1];
    }

    public final synchronized void e() {
        if (this.b) {
            a(0);
        }
    }

    public final synchronized void a(int i) {
        boolean z = i < this.f;
        this.f = i;
        if (z) {
            b();
        }
    }

    @Override
    public final synchronized a a() {
        a aVar;
        this.g++;
        if (this.h > 0) {
            a[] aVarArr = this.i;
            int i = this.h - 1;
            this.h = i;
            aVar = aVarArr[i];
            this.i[i] = null;
        } else {
            aVar = new a(new byte[this.c]);
        }
        return aVar;
    }

    @Override
    public final synchronized void a(a aVar) {
        this.e[0] = aVar;
        a(this.e);
    }

    @Override
    public final synchronized void a(a[] aVarArr) {
        if (this.h + aVarArr.length >= this.i.length) {
            this.i = (a[]) Arrays.copyOf(this.i, Math.max(this.i.length * 2, this.h + aVarArr.length));
        }
        for (a aVar : aVarArr) {
            if (aVar.a != this.d && aVar.a.length != this.c) {
                throw new IllegalArgumentException("Unexpected allocation: " + System.identityHashCode(aVar.a) + ", " + System.identityHashCode(this.d) + ", " + aVar.a.length + ", " + this.c);
            }
            a[] aVarArr2 = this.i;
            int i = this.h;
            this.h = i + 1;
            aVarArr2[i] = aVar;
        }
        this.g -= aVarArr.length;
        notifyAll();
    }

    @Override
    public final synchronized void b() {
        int i = 0;
        int iMax = Math.max(0, af.a(this.f, this.c) - this.g);
        if (iMax >= this.h) {
            return;
        }
        if (this.d != null) {
            int i2 = this.h - 1;
            while (i <= i2) {
                a aVar = this.i[i];
                if (aVar.a == this.d) {
                    i++;
                } else {
                    a aVar2 = this.i[i2];
                    if (aVar2.a != this.d) {
                        i2--;
                    } else {
                        this.i[i] = aVar2;
                        this.i[i2] = aVar;
                        i2--;
                        i++;
                    }
                }
            }
            iMax = Math.max(iMax, i);
            if (iMax >= this.h) {
                return;
            }
        }
        Arrays.fill(this.i, iMax, this.h, (Object) null);
        this.h = iMax;
    }

    @Override
    public final synchronized int c() {
        return this.g * this.c;
    }

    @Override
    public final int d() {
        return this.c;
    }
}
