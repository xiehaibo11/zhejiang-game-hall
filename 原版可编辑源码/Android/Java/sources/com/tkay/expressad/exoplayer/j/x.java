package com.tkay.expressad.exoplayer.j;

import com.tkay.expressad.exoplayer.j.h;

public final class x implements h.a {
    private final h.a a;
    private final com.tkay.expressad.exoplayer.k.v b;
    private final int c;

    private x(h.a aVar, com.tkay.expressad.exoplayer.k.v vVar, int i) {
        this.a = aVar;
        this.b = vVar;
        this.c = i;
    }

    private w b() {
        return new w(this.a.a(), this.b, this.c);
    }

    @Override
    public final h a() {
        return new w(this.a.a(), this.b, this.c);
    }
}
