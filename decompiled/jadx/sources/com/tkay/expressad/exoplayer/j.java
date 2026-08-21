package com.tkay.expressad.exoplayer;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.Pair;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.h;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.w;
import com.tkay.expressad.exoplayer.x;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.TimeoutException;

/* JADX INFO: loaded from: classes3.dex */
final class j implements h {
    private static final String w = "ExoPlayerImpl";
    private final Handler A;
    private final k B;
    private final Handler C;
    private final CopyOnWriteArraySet<w.c> D;
    private final ae.b E;
    private final ae.a F;
    private final ArrayDeque<a> G;
    private boolean H;
    private int I;
    private boolean J;
    private int K;
    private boolean L;
    private boolean M;
    private v N;
    private g O;
    private u P;
    private int Q;
    private int R;
    private long S;
    private final y[] x;
    private final com.tkay.expressad.exoplayer.i.h y;
    private final com.tkay.expressad.exoplayer.i.i z;

    @Override // com.tkay.expressad.exoplayer.w
    public final w.g b() {
        return null;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final w.e c() {
        return null;
    }

    public j(y[] yVarArr, com.tkay.expressad.exoplayer.i.h hVar, p pVar, com.tkay.expressad.exoplayer.k.c cVar) {
        Log.i(w, "Init " + Integer.toHexString(System.identityHashCode(this)) + " [ExoPlayerLib/2.8.4] [" + af.e + "]");
        com.tkay.expressad.exoplayer.k.a.b(yVarArr.length > 0);
        this.x = (y[]) com.tkay.expressad.exoplayer.k.a.a(yVarArr);
        this.y = (com.tkay.expressad.exoplayer.i.h) com.tkay.expressad.exoplayer.k.a.a(hVar);
        this.H = false;
        this.I = 0;
        this.J = false;
        this.D = new CopyOnWriteArraySet<>();
        this.z = new com.tkay.expressad.exoplayer.i.i(new aa[yVarArr.length], new com.tkay.expressad.exoplayer.i.f[yVarArr.length], null);
        this.E = new ae.b();
        this.F = new ae.a();
        this.N = v.f6813a;
        this.A = new Handler(Looper.myLooper() != null ? Looper.myLooper() : Looper.getMainLooper()) { // from class: com.tkay.expressad.exoplayer.j.1
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
                j.this.a(message);
            }
        };
        this.P = new u(ae.f6477a, 0L, com.tkay.expressad.exoplayer.h.af.f6633a, this.z);
        this.G = new ArrayDeque<>();
        this.B = new k(yVarArr, hVar, this.z, pVar, this.H, this.I, this.J, this.A, this, cVar);
        this.C = new Handler(this.B.b());
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final Looper a() {
        return this.B.b();
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(w.c cVar) {
        this.D.add(cVar);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void b(w.c cVar) {
        this.D.remove(cVar);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int d() {
        return this.P.f;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final g e() {
        return this.O;
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final void a(com.tkay.expressad.exoplayer.h.s sVar) {
        a(sVar, true, true);
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final void a(com.tkay.expressad.exoplayer.h.s sVar, boolean z, boolean z2) {
        this.O = null;
        u uVarA = a(z, z2, 2);
        this.L = true;
        this.K++;
        this.B.a(sVar, z, z2);
        a(uVarA, false, 4, 1, false, false);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(boolean z) {
        if (this.H != z) {
            this.H = z;
            this.B.a(z);
            a(this.P, false, 4, 1, false, true);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean f() {
        return this.H;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(int i) {
        if (this.I != i) {
            this.I = i;
            this.B.a(i);
            Iterator<w.c> it = this.D.iterator();
            while (it.hasNext()) {
                it.next().onRepeatModeChanged(i);
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int g() {
        return this.I;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void b(boolean z) {
        if (this.J != z) {
            this.J = z;
            this.B.b(z);
            Iterator<w.c> it = this.D.iterator();
            while (it.hasNext()) {
                it.next().onShuffleModeEnabledChanged(z);
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean h() {
        return this.J;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean i() {
        return this.P.g;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void j() {
        b(p());
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void b(int i) {
        a(i, -9223372036854775807L);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(long j) {
        a(p(), j);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(int i, long j) {
        long jB;
        ae aeVar = this.P.f6812a;
        if (i < 0 || (!aeVar.a() && i >= aeVar.b())) {
            throw new o(aeVar, i, j);
        }
        this.M = true;
        this.K++;
        if (y()) {
            Log.w(w, "seekTo ignored because an ad is playing");
            this.A.obtainMessage(0, 1, -1, this.P).sendToTarget();
            return;
        }
        this.Q = i;
        if (aeVar.a()) {
            this.S = j == -9223372036854775807L ? 0L : j;
            this.R = 0;
        } else {
            if (j != -9223372036854775807L) {
                jB = b.b(j);
            } else {
                jB = aeVar.a(i, this.E, false).h;
            }
            long j2 = jB;
            Pair<Integer, Long> pairA = aeVar.a(this.E, this.F, i, j2);
            this.S = b.a(j2);
            this.R = ((Integer) pairA.first).intValue();
        }
        this.B.a(aeVar, i, b.b(j));
        Iterator<w.c> it = this.D.iterator();
        while (it.hasNext()) {
            it.next().onPositionDiscontinuity(1);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void a(v vVar) {
        if (vVar == null) {
            vVar = v.f6813a;
        }
        this.B.b(vVar);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final v k() {
        return this.N;
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final void a(ac acVar) {
        if (acVar == null) {
            acVar = ac.e;
        }
        this.B.a(acVar);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final Object l() {
        int iP = p();
        if (iP > this.P.f6812a.b()) {
            return null;
        }
        return this.P.f6812a.a(iP, this.E, true).f6479a;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void m() {
        c(false);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void c(boolean z) {
        if (z) {
            this.O = null;
        }
        u uVarA = a(z, z, 1);
        this.K++;
        this.B.c(z);
        a(uVarA, false, 4, 1, false, false);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final void n() {
        Log.i(w, "Release " + Integer.toHexString(System.identityHashCode(this)) + " [ExoPlayerLib/2.8.4] [" + af.e + "] [" + l.a() + "]");
        this.B.a();
        this.A.removeCallbacksAndMessages(null);
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final void a(h.c... cVarArr) {
        for (h.c cVar : cVarArr) {
            a(cVar.f6610a).a(cVar.b).a(cVar.c).i();
        }
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final x a(x.b bVar) {
        return new x(this.B, bVar, this.P.f6812a, p(), this.C);
    }

    @Override // com.tkay.expressad.exoplayer.h
    public final void b(h.c... cVarArr) {
        ArrayList<x> arrayList = new ArrayList();
        for (h.c cVar : cVarArr) {
            arrayList.add(a(cVar.f6610a).a(cVar.b).a(cVar.c).i());
        }
        boolean z = false;
        for (x xVar : arrayList) {
            boolean z2 = true;
            while (z2) {
                try {
                    xVar.k();
                    z2 = false;
                } catch (InterruptedException unused) {
                    z = true;
                } catch (TimeoutException e) {
                    e.getMessage();
                }
            }
        }
        if (z) {
            Thread.currentThread().interrupt();
        }
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int o() {
        if (H()) {
            return this.R;
        }
        return this.P.c.f6667a;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int p() {
        if (H()) {
            return this.Q;
        }
        return this.P.f6812a.a(this.P.c.f6667a, this.F, false).c;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int q() {
        ae aeVar = this.P.f6812a;
        if (aeVar.a()) {
            return -1;
        }
        return aeVar.a(p(), this.I, this.J);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int r() {
        ae aeVar = this.P.f6812a;
        if (aeVar.a()) {
            return -1;
        }
        return aeVar.b(p(), this.I, this.J);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final long s() {
        ae aeVar = this.P.f6812a;
        if (aeVar.a()) {
            return -9223372036854775807L;
        }
        if (y()) {
            s.a aVar = this.P.c;
            aeVar.a(aVar.f6667a, this.F, false);
            return b.a(this.F.c(aVar.b, aVar.c));
        }
        return b.a(aeVar.a(p(), this.E, false).i);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final long t() {
        if (H()) {
            return this.S;
        }
        return b(this.P.j);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final long u() {
        if (H()) {
            return this.S;
        }
        return b(this.P.k);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int v() {
        long jU = u();
        long jS = s();
        if (jU == -9223372036854775807L || jS == -9223372036854775807L) {
            return 0;
        }
        if (jS == 0) {
            return 100;
        }
        return af.a((int) ((jU * 100) / jS), 0, 100);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean w() {
        ae aeVar = this.P.f6812a;
        return !aeVar.a() && aeVar.a(p(), this.E, false).e;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean x() {
        ae aeVar = this.P.f6812a;
        return !aeVar.a() && aeVar.a(p(), this.E, false).d;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final boolean y() {
        return !H() && this.P.c.a();
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int z() {
        if (y()) {
            return this.P.c.b;
        }
        return -1;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int A() {
        if (y()) {
            return this.P.c.c;
        }
        return -1;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final long B() {
        if (!y()) {
            return t();
        }
        this.P.f6812a.a(this.P.c.f6667a, this.F, false);
        return this.F.a() + b.a(this.P.e);
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int C() {
        return this.x.length;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final int c(int i) {
        return this.x[i].a();
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final com.tkay.expressad.exoplayer.h.af D() {
        return this.P.h;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final com.tkay.expressad.exoplayer.i.g E() {
        return this.P.i.c;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final ae F() {
        return this.P.f6812a;
    }

    @Override // com.tkay.expressad.exoplayer.w
    public final Object G() {
        return this.P.b;
    }

    final void a(Message message) {
        int i = message.what;
        if (i != 0) {
            if (i != 1) {
                if (i == 2) {
                    g gVar = (g) message.obj;
                    this.O = gVar;
                    Iterator<w.c> it = this.D.iterator();
                    while (it.hasNext()) {
                        it.next().onPlayerError(gVar);
                    }
                    return;
                }
                throw new IllegalStateException();
            }
            v vVar = (v) message.obj;
            if (this.N.equals(vVar)) {
                return;
            }
            this.N = vVar;
            Iterator<w.c> it2 = this.D.iterator();
            while (it2.hasNext()) {
                it2.next().onPlaybackParametersChanged(vVar);
            }
            return;
        }
        u uVar = (u) message.obj;
        int i2 = message.arg1;
        boolean z = message.arg2 != -1;
        int i3 = message.arg2;
        int i4 = this.K - i2;
        this.K = i4;
        if (i4 == 0) {
            u uVarA = uVar.d == -9223372036854775807L ? uVar.a(uVar.c, 0L, uVar.e) : uVar;
            if ((!this.P.f6812a.a() || this.L) && uVarA.f6812a.a()) {
                this.R = 0;
                this.Q = 0;
                this.S = 0L;
            }
            int i5 = this.L ? 0 : 2;
            boolean z2 = this.M;
            this.L = false;
            this.M = false;
            a(uVarA, z, i3, i5, z2, false);
        }
    }

    private void a(u uVar, int i, boolean z, int i2) {
        int i3 = this.K - i;
        this.K = i3;
        if (i3 == 0) {
            if (uVar.d == -9223372036854775807L) {
                uVar = uVar.a(uVar.c, 0L, uVar.e);
            }
            u uVar2 = uVar;
            if ((!this.P.f6812a.a() || this.L) && uVar2.f6812a.a()) {
                this.R = 0;
                this.Q = 0;
                this.S = 0L;
            }
            int i4 = this.L ? 0 : 2;
            boolean z2 = this.M;
            this.L = false;
            this.M = false;
            a(uVar2, z, i2, i4, z2, false);
        }
    }

    private u a(boolean z, boolean z2, int i) {
        if (z) {
            this.Q = 0;
            this.R = 0;
            this.S = 0L;
        } else {
            this.Q = p();
            this.R = o();
            this.S = t();
        }
        return new u(z2 ? ae.f6477a : this.P.f6812a, z2 ? null : this.P.b, this.P.c, this.P.d, this.P.e, i, false, z2 ? com.tkay.expressad.exoplayer.h.af.f6633a : this.P.h, z2 ? this.z : this.P.i);
    }

    private void a(u uVar, boolean z, int i, int i2, boolean z2, boolean z3) {
        boolean z4 = !this.G.isEmpty();
        this.G.addLast(new a(uVar, this.P, this.D, this.y, z, i, i2, z2, this.H, z3));
        this.P = uVar;
        if (z4) {
            return;
        }
        while (!this.G.isEmpty()) {
            this.G.peekFirst().a();
            this.G.removeFirst();
        }
    }

    private long b(long j) {
        long jA = b.a(j);
        if (this.P.c.a()) {
            return jA;
        }
        this.P.f6812a.a(this.P.c.f6667a, this.F, false);
        return jA + this.F.a();
    }

    private boolean H() {
        return this.P.f6812a.a() || this.K > 0;
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final u f6705a;
        private final Set<w.c> b;
        private final com.tkay.expressad.exoplayer.i.h c;
        private final boolean d;
        private final int e;
        private final int f;
        private final boolean g;
        private final boolean h;
        private final boolean i;
        private final boolean j;
        private final boolean k;
        private final boolean l;

        public a(u uVar, u uVar2, Set<w.c> set, com.tkay.expressad.exoplayer.i.h hVar, boolean z, int i, int i2, boolean z2, boolean z3, boolean z4) {
            this.f6705a = uVar;
            this.b = set;
            this.c = hVar;
            this.d = z;
            this.e = i;
            this.f = i2;
            this.g = z2;
            this.h = z3;
            this.i = z4 || uVar2.f != uVar.f;
            this.j = (uVar2.f6812a == uVar.f6812a && uVar2.b == uVar.b) ? false : true;
            this.k = uVar2.g != uVar.g;
            this.l = uVar2.i != uVar.i;
        }

        public final void a() {
            if (this.j || this.f == 0) {
                Iterator<w.c> it = this.b.iterator();
                while (it.hasNext()) {
                    it.next().onTimelineChanged(this.f6705a.f6812a, this.f6705a.b, this.f);
                }
            }
            if (this.d) {
                Iterator<w.c> it2 = this.b.iterator();
                while (it2.hasNext()) {
                    it2.next().onPositionDiscontinuity(this.e);
                }
            }
            if (this.l) {
                this.c.a(this.f6705a.i.d);
                Iterator<w.c> it3 = this.b.iterator();
                while (it3.hasNext()) {
                    it3.next().onTracksChanged(this.f6705a.h, this.f6705a.i.c);
                }
            }
            if (this.k) {
                Iterator<w.c> it4 = this.b.iterator();
                while (it4.hasNext()) {
                    it4.next().onLoadingChanged(this.f6705a.g);
                }
            }
            if (this.i) {
                Iterator<w.c> it5 = this.b.iterator();
                while (it5.hasNext()) {
                    it5.next().onPlayerStateChanged(this.h, this.f6705a.f);
                }
            }
            if (this.g) {
                Iterator<w.c> it6 = this.b.iterator();
                while (it6.hasNext()) {
                    it6.next().onSeekProcessed();
                }
            }
        }
    }
}
