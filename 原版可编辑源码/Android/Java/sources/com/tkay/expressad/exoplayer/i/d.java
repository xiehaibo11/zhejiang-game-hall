package com.tkay.expressad.exoplayer.i;

import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.i.f;

public final class d extends b {
    private final int a;
    private final Object b;

    @Override
    public final void a(long j, long j2) {
    }

    @Override
    public final int b() {
        return 0;
    }

    public static final class a implements f.a {
        private final int a;
        private final Object b;

        public a() {
            this.a = 0;
            this.b = null;
        }

        private a(int i, Object obj) {
            this.a = i;
            this.b = obj;
        }

        private d b(ae aeVar, int... iArr) {
            com.tkay.expressad.exoplayer.k.a.a(iArr.length == 1);
            return new d(aeVar, iArr[0], this.a, this.b);
        }

        @Override
        public final f a(ae aeVar, int[] iArr) {
            com.tkay.expressad.exoplayer.k.a.a(iArr.length == 1);
            return new d(aeVar, iArr[0], this.a, this.b);
        }
    }

    public d(ae aeVar, int i) {
        this(aeVar, i, 0, null);
    }

    public d(ae aeVar, int i, int i2, Object obj) {
        super(aeVar, i);
        this.a = i2;
        this.b = obj;
    }

    @Override
    public final int c() {
        return this.a;
    }

    @Override
    public final Object d() {
        return this.b;
    }
}
