package com.tkay.expressad.exoplayer.b;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import com.tkay.expressad.exoplayer.b.g;
import com.tkay.expressad.exoplayer.b.h;
import com.tkay.expressad.exoplayer.k.ad;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.v;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public abstract class r extends com.tkay.expressad.exoplayer.a implements com.tkay.expressad.exoplayer.k.n {
    private static final int n = 0;
    private static final int o = 1;
    private static final int p = 2;
    private com.tkay.expressad.exoplayer.c.g<com.tkay.expressad.exoplayer.c.e, ? extends com.tkay.expressad.exoplayer.c.h, ? extends e> A;
    private com.tkay.expressad.exoplayer.c.e B;
    private com.tkay.expressad.exoplayer.c.h C;
    private com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.i> D;
    private com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.i> E;
    private int F;
    private boolean G;
    private boolean H;
    private long I;
    private boolean J;
    private boolean K;
    private boolean L;
    private boolean M;
    private boolean N;
    private final com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.i> q;
    private final boolean r;
    private final g.a s;
    private final h t;
    private final com.tkay.expressad.exoplayer.n u;
    private final com.tkay.expressad.exoplayer.c.e v;
    private com.tkay.expressad.exoplayer.c.d w;
    private com.tkay.expressad.exoplayer.m x;
    private int y;
    private int z;

    @Retention(RetentionPolicy.SOURCE)
    private @interface b {
    }

    private static void A() {
    }

    private static void y() {
    }

    private static void z() {
    }

    @Override // com.tkay.expressad.exoplayer.a, com.tkay.expressad.exoplayer.y
    public final com.tkay.expressad.exoplayer.k.n c() {
        return this;
    }

    protected abstract int w();

    protected abstract com.tkay.expressad.exoplayer.c.g<com.tkay.expressad.exoplayer.c.e, ? extends com.tkay.expressad.exoplayer.c.h, ? extends e> x();

    static /* synthetic */ boolean b(r rVar) {
        rVar.K = true;
        return true;
    }

    public r() {
        this((Handler) null, (g) null, new f[0]);
    }

    private r(Handler handler, g gVar, f... fVarArr) {
        this(handler, gVar, null, null, fVarArr);
    }

    private r(Handler handler, g gVar, c cVar) {
        this(handler, gVar, cVar, null, new f[0]);
    }

    private r(Handler handler, g gVar, c cVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.i> gVar2, f... fVarArr) {
        this(handler, gVar, gVar2, new l(cVar, fVarArr));
    }

    private r(Handler handler, g gVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.i> gVar2, h hVar) {
        super(1);
        this.q = gVar2;
        this.r = false;
        this.s = new g.a(handler, gVar);
        this.t = hVar;
        hVar.a(new a(this, (byte) 0));
        this.u = new com.tkay.expressad.exoplayer.n();
        this.v = com.tkay.expressad.exoplayer.c.e.e();
        this.F = 0;
        this.H = true;
    }

    @Override // com.tkay.expressad.exoplayer.z
    public final int a(com.tkay.expressad.exoplayer.m mVar) {
        int iW = w();
        if (iW <= 2) {
            return iW;
        }
        return iW | (af.f6754a >= 21 ? 32 : 0) | 8;
    }

    private boolean b(int i) {
        return this.t.a(i);
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0077 A[Catch: d -> 0x01bc, b -> 0x01be, e | a | b | d -> 0x01c0, e -> 0x01c2, TryCatch #3 {e | a | b | d -> 0x01c0, blocks: (B:19:0x004c, B:20:0x0051, B:22:0x0058, B:24:0x0064, B:39:0x00df, B:41:0x00e3, B:43:0x00e7, B:46:0x00ed, B:48:0x00f1, B:51:0x00fd, B:53:0x0102, B:54:0x0114, B:62:0x0129, B:94:0x01b8, B:64:0x0133, B:66:0x013b, B:67:0x0148, B:70:0x0154, B:73:0x0159, B:80:0x0175, B:83:0x017a, B:85:0x0185, B:87:0x018b, B:89:0x019b, B:90:0x019f, B:91:0x01a1, B:77:0x0165, B:78:0x0173, B:57:0x011a, B:25:0x006f, B:27:0x0077, B:29:0x007b, B:30:0x0084, B:31:0x008f, B:33:0x0093, B:34:0x00bc, B:36:0x00cc), top: B:108:0x004c }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x008f A[Catch: d -> 0x01bc, b -> 0x01be, e | a | b | d -> 0x01c0, e -> 0x01c2, TryCatch #3 {e | a | b | d -> 0x01c0, blocks: (B:19:0x004c, B:20:0x0051, B:22:0x0058, B:24:0x0064, B:39:0x00df, B:41:0x00e3, B:43:0x00e7, B:46:0x00ed, B:48:0x00f1, B:51:0x00fd, B:53:0x0102, B:54:0x0114, B:62:0x0129, B:94:0x01b8, B:64:0x0133, B:66:0x013b, B:67:0x0148, B:70:0x0154, B:73:0x0159, B:80:0x0175, B:83:0x017a, B:85:0x0185, B:87:0x018b, B:89:0x019b, B:90:0x019f, B:91:0x01a1, B:77:0x0165, B:78:0x0173, B:57:0x011a, B:25:0x006f, B:27:0x0077, B:29:0x007b, B:30:0x0084, B:31:0x008f, B:33:0x0093, B:34:0x00bc, B:36:0x00cc), top: B:108:0x004c }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00fd A[Catch: d -> 0x01bc, b -> 0x01be, e | a | b | d -> 0x01c0, e -> 0x01c2, TryCatch #3 {e | a | b | d -> 0x01c0, blocks: (B:19:0x004c, B:20:0x0051, B:22:0x0058, B:24:0x0064, B:39:0x00df, B:41:0x00e3, B:43:0x00e7, B:46:0x00ed, B:48:0x00f1, B:51:0x00fd, B:53:0x0102, B:54:0x0114, B:62:0x0129, B:94:0x01b8, B:64:0x0133, B:66:0x013b, B:67:0x0148, B:70:0x0154, B:73:0x0159, B:80:0x0175, B:83:0x017a, B:85:0x0185, B:87:0x018b, B:89:0x019b, B:90:0x019f, B:91:0x01a1, B:77:0x0165, B:78:0x0173, B:57:0x011a, B:25:0x006f, B:27:0x0077, B:29:0x007b, B:30:0x0084, B:31:0x008f, B:33:0x0093, B:34:0x00bc, B:36:0x00cc), top: B:108:0x004c }] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0174  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0179  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x017a A[Catch: d -> 0x01bc, b -> 0x01be, e | a | b | d -> 0x01c0, e -> 0x01c2, TryCatch #3 {e | a | b | d -> 0x01c0, blocks: (B:19:0x004c, B:20:0x0051, B:22:0x0058, B:24:0x0064, B:39:0x00df, B:41:0x00e3, B:43:0x00e7, B:46:0x00ed, B:48:0x00f1, B:51:0x00fd, B:53:0x0102, B:54:0x0114, B:62:0x0129, B:94:0x01b8, B:64:0x0133, B:66:0x013b, B:67:0x0148, B:70:0x0154, B:73:0x0159, B:80:0x0175, B:83:0x017a, B:85:0x0185, B:87:0x018b, B:89:0x019b, B:90:0x019f, B:91:0x01a1, B:77:0x0165, B:78:0x0173, B:57:0x011a, B:25:0x006f, B:27:0x0077, B:29:0x007b, B:30:0x0084, B:31:0x008f, B:33:0x0093, B:34:0x00bc, B:36:0x00cc), top: B:108:0x004c }] */
    @Override // com.tkay.expressad.exoplayer.y
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(long r19, long r21) throws com.tkay.expressad.exoplayer.g {
        /*
            Method dump skipped, instruction units count: 461
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.b.r.a(long, long):void");
    }

    private com.tkay.expressad.exoplayer.m B() {
        return com.tkay.expressad.exoplayer.m.a((String) null, "audio/raw", (String) null, -1, this.x.u, this.x.v, 2, (List<byte[]>) null, (com.tkay.expressad.exoplayer.d.e) null, (String) null);
    }

    private boolean C() throws com.tkay.expressad.exoplayer.g {
        if (this.C == null) {
            com.tkay.expressad.exoplayer.c.h hVar = (com.tkay.expressad.exoplayer.c.h) this.A.c();
            this.C = hVar;
            if (hVar == null) {
                return false;
            }
            this.w.f += this.C.b;
        }
        if (this.C.c()) {
            if (this.F == 2) {
                H();
                G();
                this.H = true;
            } else {
                this.C.e();
                this.C = null;
                E();
            }
            return false;
        }
        if (this.H) {
            com.tkay.expressad.exoplayer.m mVarA = com.tkay.expressad.exoplayer.m.a((String) null, "audio/raw", (String) null, -1, this.x.u, this.x.v, 2, (List<byte[]>) null, (com.tkay.expressad.exoplayer.d.e) null, (String) null);
            this.t.a(mVarA.w, mVarA.u, mVarA.v, null, this.y, this.z);
            this.H = false;
        }
        if (!this.t.a(this.C.c, this.C.f6516a)) {
            return false;
        }
        this.w.e++;
        this.C.e();
        this.C = null;
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x0092  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean D() throws com.tkay.expressad.exoplayer.g {
        /*
            Method dump skipped, instruction units count: 211
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.b.r.D():boolean");
    }

    private boolean b(boolean z) throws com.tkay.expressad.exoplayer.g {
        if (this.D == null || (!z && this.r)) {
            return false;
        }
        int iE = this.D.e();
        if (iE != 1) {
            return iE != 4;
        }
        throw com.tkay.expressad.exoplayer.g.a(this.D.f(), s());
    }

    private void E() throws com.tkay.expressad.exoplayer.g {
        this.M = true;
        try {
            this.t.c();
        } catch (h.d e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    private void F() throws com.tkay.expressad.exoplayer.g {
        this.N = false;
        if (this.F != 0) {
            H();
            G();
            return;
        }
        this.B = null;
        com.tkay.expressad.exoplayer.c.h hVar = this.C;
        if (hVar != null) {
            hVar.e();
            this.C = null;
        }
        this.A.d();
        this.G = false;
    }

    @Override // com.tkay.expressad.exoplayer.y
    public final boolean v() {
        return this.M && this.t.d();
    }

    @Override // com.tkay.expressad.exoplayer.y
    public final boolean u() {
        if (this.t.e()) {
            return true;
        }
        if (this.x == null || this.N) {
            return false;
        }
        return t() || this.C != null;
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final long d() {
        if (a_() == 2) {
            I();
        }
        return this.I;
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v a(v vVar) {
        return this.t.a(vVar);
    }

    @Override // com.tkay.expressad.exoplayer.k.n
    public final v e() {
        return this.t.f();
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void a(boolean z) {
        com.tkay.expressad.exoplayer.c.d dVar = new com.tkay.expressad.exoplayer.c.d();
        this.w = dVar;
        this.s.a(dVar);
        int i = r().b;
        if (i != 0) {
            this.t.c(i);
        } else {
            this.t.g();
        }
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void a(long j, boolean z) throws com.tkay.expressad.exoplayer.g {
        this.t.i();
        this.I = j;
        this.J = true;
        this.K = true;
        this.L = false;
        this.M = false;
        if (this.A != null) {
            this.N = false;
            if (this.F != 0) {
                H();
                G();
                return;
            }
            this.B = null;
            com.tkay.expressad.exoplayer.c.h hVar = this.C;
            if (hVar != null) {
                hVar.e();
                this.C = null;
            }
            this.A.d();
            this.G = false;
        }
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void n() {
        this.t.a();
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void o() {
        I();
        this.t.h();
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void p() {
        this.x = null;
        this.H = true;
        this.N = false;
        try {
            H();
            this.t.j();
            try {
                if (this.D != null) {
                    this.q.a(this.D);
                }
                try {
                    if (this.E != null && this.E != this.D) {
                        this.q.a(this.E);
                    }
                } finally {
                }
            } catch (Throwable th) {
                try {
                    if (this.E != null && this.E != this.D) {
                        this.q.a(this.E);
                    }
                    throw th;
                } finally {
                }
            }
        } catch (Throwable th2) {
            try {
                if (this.D != null) {
                    this.q.a(this.D);
                }
                try {
                    if (this.E != null && this.E != this.D) {
                        this.q.a(this.E);
                    }
                    throw th2;
                } finally {
                }
            } catch (Throwable th3) {
                try {
                    if (this.E != null && this.E != this.D) {
                        this.q.a(this.E);
                    }
                    throw th3;
                } finally {
                }
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.a, com.tkay.expressad.exoplayer.x.b
    public final void a(int i, Object obj) {
        if (i == 2) {
            this.t.a(((Float) obj).floatValue());
        } else if (i == 3) {
            this.t.a((com.tkay.expressad.exoplayer.b.b) obj);
        } else {
            super.a(i, obj);
        }
    }

    private void G() throws com.tkay.expressad.exoplayer.g {
        if (this.A != null) {
            return;
        }
        com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.i> fVar = this.E;
        this.D = fVar;
        if (fVar != null && fVar.g() == null && this.D.f() == null) {
            return;
        }
        try {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            ad.a("createAudioDecoder");
            this.A = x();
            ad.a();
            long jElapsedRealtime2 = SystemClock.elapsedRealtime();
            this.s.a(this.A.a(), jElapsedRealtime2, jElapsedRealtime2 - jElapsedRealtime);
            this.w.f6514a++;
        } catch (e e) {
            throw com.tkay.expressad.exoplayer.g.a(e, s());
        }
    }

    private void H() {
        com.tkay.expressad.exoplayer.c.g<com.tkay.expressad.exoplayer.c.e, ? extends com.tkay.expressad.exoplayer.c.h, ? extends e> gVar = this.A;
        if (gVar == null) {
            return;
        }
        this.B = null;
        this.C = null;
        gVar.e();
        this.A = null;
        this.w.b++;
        this.F = 0;
        this.G = false;
    }

    private void b(com.tkay.expressad.exoplayer.m mVar) throws com.tkay.expressad.exoplayer.g {
        com.tkay.expressad.exoplayer.m mVar2 = this.x;
        this.x = mVar;
        if (!af.a(mVar.k, mVar2 == null ? null : mVar2.k)) {
            if (this.x.k != null) {
                com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.i> gVar = this.q;
                if (gVar == null) {
                    throw com.tkay.expressad.exoplayer.g.a(new IllegalStateException("Media requires a DrmSessionManager"), s());
                }
                com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.i> fVarA = gVar.a(Looper.myLooper(), this.x.k);
                this.E = fVarA;
                if (fVarA == this.D) {
                    this.q.a(fVarA);
                }
            } else {
                this.E = null;
            }
        }
        if (this.G) {
            this.F = 1;
        } else {
            H();
            G();
            this.H = true;
        }
        this.y = mVar.x;
        this.z = mVar.y;
        this.s.a(mVar);
    }

    private void a(com.tkay.expressad.exoplayer.c.e eVar) {
        if (!this.J || eVar.b()) {
            return;
        }
        if (Math.abs(eVar.f - this.I) > 500000) {
            this.I = eVar.f;
        }
        this.J = false;
    }

    private void I() {
        long jA = this.t.a(v());
        if (jA != Long.MIN_VALUE) {
            if (!this.K) {
                jA = Math.max(this.I, jA);
            }
            this.I = jA;
            this.K = false;
        }
    }

    private final class a implements h.c {
        private a() {
        }

        /* synthetic */ a(r rVar, byte b) {
            this();
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a(int i) {
            r.this.s.a(i);
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a() {
            r.b(r.this);
        }

        @Override // com.tkay.expressad.exoplayer.b.h.c
        public final void a(int i, long j, long j2) {
            r.this.s.a(i, j, j2);
        }
    }
}
