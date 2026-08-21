package com.tkay.expressad.exoplayer.h;

import com.tkay.expressad.exoplayer.h.aa;
import com.tkay.expressad.exoplayer.h.s;

/* JADX INFO: loaded from: classes3.dex */
public final class q extends f<Void> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final s f6666a;
    private final int b;
    private int c;

    private q(s sVar) {
        this(sVar, (byte) 0);
    }

    private q(s sVar, byte b2) {
        com.tkay.expressad.exoplayer.k.a.a(true);
        this.f6666a = sVar;
        this.b = Integer.MAX_VALUE;
    }

    @Override // com.tkay.expressad.exoplayer.h.f, com.tkay.expressad.exoplayer.h.c
    public final void a(com.tkay.expressad.exoplayer.h hVar, boolean z) {
        super.a(hVar, z);
        a((Object) null, this.f6666a);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final r a(s.a aVar, com.tkay.expressad.exoplayer.j.b bVar) {
        if (this.b != Integer.MAX_VALUE) {
            return this.f6666a.a(aVar.a(aVar.f6667a % this.c), bVar);
        }
        return this.f6666a.a(aVar, bVar);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(r rVar) {
        this.f6666a.a(rVar);
    }

    @Override // com.tkay.expressad.exoplayer.h.f, com.tkay.expressad.exoplayer.h.c
    public final void a() {
        super.a();
        this.c = 0;
    }

    private void b(com.tkay.expressad.exoplayer.ae aeVar, Object obj) {
        com.tkay.expressad.exoplayer.ae aVar;
        this.c = aeVar.c();
        if (this.b != Integer.MAX_VALUE) {
            aVar = new b(aeVar, this.b);
        } else {
            aVar = new a(aeVar);
        }
        a(aVar, obj);
    }

    private static final class b extends com.tkay.expressad.exoplayer.h.a {
        private final com.tkay.expressad.exoplayer.ae b;
        private final int c;
        private final int d;
        private final int e;

        public b(com.tkay.expressad.exoplayer.ae aeVar, int i) {
            super(false, new aa.b(i));
            this.b = aeVar;
            this.c = aeVar.c();
            this.d = aeVar.b();
            this.e = i;
            int i2 = this.c;
            if (i2 > 0) {
                com.tkay.expressad.exoplayer.k.a.b(i <= Integer.MAX_VALUE / i2, "LoopingMediaSource contains too many periods");
            }
        }

        @Override // com.tkay.expressad.exoplayer.ae
        public final int b() {
            return this.d * this.e;
        }

        @Override // com.tkay.expressad.exoplayer.ae
        public final int c() {
            return this.c * this.e;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final int a(int i) {
            return i / this.c;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final int b(int i) {
            return i / this.d;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final int b(Object obj) {
            if (obj instanceof Integer) {
                return ((Integer) obj).intValue();
            }
            return -1;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final com.tkay.expressad.exoplayer.ae c(int i) {
            return this.b;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final int d(int i) {
            return i * this.c;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final int e(int i) {
            return i * this.d;
        }

        @Override // com.tkay.expressad.exoplayer.h.a
        protected final Object f(int i) {
            return Integer.valueOf(i);
        }
    }

    private static final class a extends p {
        public a(com.tkay.expressad.exoplayer.ae aeVar) {
            super(aeVar);
        }

        @Override // com.tkay.expressad.exoplayer.h.p, com.tkay.expressad.exoplayer.ae
        public final int a(int i, int i2, boolean z) {
            int iA = this.b.a(i, i2, z);
            return iA == -1 ? b(z) : iA;
        }

        @Override // com.tkay.expressad.exoplayer.h.p, com.tkay.expressad.exoplayer.ae
        public final int b(int i, int i2, boolean z) {
            int iB = this.b.b(i, i2, z);
            return iB == -1 ? a(z) : iB;
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.f
    protected final /* synthetic */ void a(Void r1, s sVar, com.tkay.expressad.exoplayer.ae aeVar, Object obj) {
        com.tkay.expressad.exoplayer.ae aVar;
        this.c = aeVar.c();
        if (this.b != Integer.MAX_VALUE) {
            aVar = new b(aeVar, this.b);
        } else {
            aVar = new a(aeVar);
        }
        a(aVar, obj);
    }
}
