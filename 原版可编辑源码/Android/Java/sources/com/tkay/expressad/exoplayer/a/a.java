package com.tkay.expressad.exoplayer.a;

import android.net.NetworkInfo;
import android.view.Surface;
import com.tkay.expressad.exoplayer.a.b;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.b.g;
import com.tkay.expressad.exoplayer.g.f;
import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.h.t;
import com.tkay.expressad.exoplayer.j.d;
import com.tkay.expressad.exoplayer.l.h;
import com.tkay.expressad.exoplayer.m;
import com.tkay.expressad.exoplayer.v;
import com.tkay.expressad.exoplayer.w;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;

public final class a implements g, com.tkay.expressad.exoplayer.d.c, f, t, d.a, h, w.c {
    private final com.tkay.expressad.exoplayer.k.c b;
    private w e;
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> a = new CopyOnWriteArraySet<>();
    private final b d = new b();
    private final ae.b c = new ae.b();

    public static class a {
        public static a a(w wVar, com.tkay.expressad.exoplayer.k.c cVar) {
            return new a(wVar, cVar);
        }
    }

    protected a(w wVar, com.tkay.expressad.exoplayer.k.c cVar) {
        this.e = wVar;
        this.b = (com.tkay.expressad.exoplayer.k.c) com.tkay.expressad.exoplayer.k.a.a(cVar);
    }

    public final void a(com.tkay.expressad.exoplayer.a.b bVar) {
        this.a.add(bVar);
    }

    public final void b(com.tkay.expressad.exoplayer.a.b bVar) {
        this.a.remove(bVar);
    }

    private void a(w wVar) {
        com.tkay.expressad.exoplayer.k.a.b(this.e == null);
        this.e = (w) com.tkay.expressad.exoplayer.k.a.a(wVar);
    }

    public final void a() {
        if (this.d.e()) {
            return;
        }
        b.a aVarI = i();
        this.d.g();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI);
        }
    }

    private void a(int i, int i2) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, i, i2);
        }
    }

    private void a(NetworkInfo networkInfo) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, networkInfo);
        }
    }

    public final void b() {
        for (c cVar : new ArrayList(this.d.a)) {
            b(cVar.a, cVar.b);
        }
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.g.a aVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, aVar);
        }
    }

    @Override
    public final void c(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarI, 1);
        }
    }

    @Override
    public final void a(int i) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().f(aVarJ, i);
        }
    }

    @Override
    public final void b(String str, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 1, str);
        }
    }

    @Override
    public final void b(m mVar) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 1, mVar);
        }
    }

    @Override
    public final void a(int i, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, i, j, j2);
        }
    }

    @Override
    public final void d(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarH, 1);
        }
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarI, 2);
        }
    }

    @Override
    public final void a(String str, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 2, str);
        }
    }

    @Override
    public final void a(m mVar) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 2, mVar);
        }
    }

    @Override
    public final void a(int i, long j) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().g(aVarH, i);
        }
    }

    @Override
    public final void a(int i, int i2, int i3, float f) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarJ, i, i2);
        }
    }

    @Override
    public final void a(Surface surface) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, surface);
        }
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarH, 2);
        }
    }

    @Override
    public final void a(int i, s.a aVar) {
        this.d.a(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().c(aVarD);
        }
    }

    @Override
    public final void b(int i, s.a aVar) {
        this.d.b(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarD);
        }
    }

    @Override
    public final void a(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override
    public final void b(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override
    public final void c(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override
    public final void a(int i, s.a aVar, t.b bVar, t.c cVar, IOException iOException, boolean z) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarD, iOException);
        }
    }

    @Override
    public final void c(int i, s.a aVar) {
        this.d.c(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarD);
        }
    }

    @Override
    public final void a(int i, s.a aVar, t.c cVar) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarD, cVar);
        }
    }

    @Override
    public final void b(int i, s.a aVar, t.c cVar) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarD, cVar);
        }
    }

    @Override
    public final void onTimelineChanged(ae aeVar, Object obj, int i) {
        this.d.a(aeVar);
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, i);
        }
    }

    @Override
    public final void onTracksChanged(af afVar, com.tkay.expressad.exoplayer.i.g gVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, gVar);
        }
    }

    @Override
    public final void onLoadingChanged(boolean z) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarI, z);
        }
    }

    @Override
    public final void onPlayerStateChanged(boolean z, int i) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, z, i);
        }
    }

    @Override
    public final void onRepeatModeChanged(int i) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().c(aVarI, i);
        }
    }

    @Override
    public final void onShuffleModeEnabledChanged(boolean z) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, z);
        }
    }

    @Override
    public final void onPlayerError(com.tkay.expressad.exoplayer.g gVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, gVar);
        }
    }

    @Override
    public final void onPositionDiscontinuity(int i) {
        this.d.f();
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarI, i);
        }
    }

    @Override
    public final void onPlaybackParametersChanged(v vVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, vVar);
        }
    }

    @Override
    public final void onSeekProcessed() {
        if (this.d.e()) {
            this.d.h();
            b.a aVarI = i();
            Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
            while (it.hasNext()) {
                it.next().b(aVarI);
            }
        }
    }

    @Override
    public final void d() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().f(aVarJ);
        }
    }

    @Override
    public final void a(Exception exc) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, exc);
        }
    }

    @Override
    public final void e() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().g(aVarJ);
        }
    }

    @Override
    public final void f() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next().h(aVarJ);
        }
    }

    private Set<com.tkay.expressad.exoplayer.a.b> g() {
        return Collections.unmodifiableSet(this.a);
    }

    private b.a d(int i, s.a aVar) {
        long jA;
        long j;
        com.tkay.expressad.exoplayer.k.a.a(this.e);
        long jA2 = this.b.a();
        ae aeVarF = this.e.F();
        long jT = 0;
        if (i == this.e.p()) {
            if (aVar != null && aVar.a()) {
                if (this.e.z() == aVar.b && this.e.A() == aVar.c) {
                    jT = this.e.t();
                }
                j = jT;
            } else {
                jA = this.e.B();
                j = jA;
            }
        } else {
            if (i < aeVarF.b() && (aVar == null || !aVar.a())) {
                jA = com.tkay.expressad.exoplayer.b.a(aeVarF.a(i, this.c, false).h);
                j = jA;
            }
            j = jT;
        }
        return new b.a(jA2, aeVarF, i, aVar, j, this.e.t(), this.e.u() - this.e.B());
    }

    private b.a a(c cVar) {
        if (cVar == null) {
            int iP = ((w) com.tkay.expressad.exoplayer.k.a.a(this.e)).p();
            return d(iP, this.d.a(iP));
        }
        return d(cVar.a, cVar.b);
    }

    private b.a h() {
        return a(this.d.b());
    }

    private b.a i() {
        return a(this.d.a());
    }

    private b.a j() {
        return a(this.d.c());
    }

    private b.a k() {
        return a(this.d.d());
    }

    private static final class b {
        private c c;
        private c d;
        private boolean f;
        private final ArrayList<c> a = new ArrayList<>();
        private final ae.a b = new ae.a();
        private ae e = ae.a;

        public final c a() {
            if (this.a.isEmpty() || this.e.a() || this.f) {
                return null;
            }
            return this.a.get(0);
        }

        public final c b() {
            return this.c;
        }

        public final c c() {
            return this.d;
        }

        public final c d() {
            if (this.a.isEmpty()) {
                return null;
            }
            return this.a.get(r0.size() - 1);
        }

        public final boolean e() {
            return this.f;
        }

        public final s.a a(int i) {
            ae aeVar = this.e;
            if (aeVar == null) {
                return null;
            }
            int iC = aeVar.c();
            s.a aVar = null;
            for (int i2 = 0; i2 < this.a.size(); i2++) {
                c cVar = this.a.get(i2);
                int i3 = cVar.b.a;
                if (i3 < iC && this.e.a(i3, this.b, false).c == i) {
                    if (aVar != null) {
                        return null;
                    }
                    aVar = cVar.b;
                }
            }
            return aVar;
        }

        public final void f() {
            i();
        }

        public final void a(ae aeVar) {
            for (int i = 0; i < this.a.size(); i++) {
                ArrayList<c> arrayList = this.a;
                arrayList.set(i, a(arrayList.get(i), aeVar));
            }
            c cVar = this.d;
            if (cVar != null) {
                this.d = a(cVar, aeVar);
            }
            this.e = aeVar;
            i();
        }

        public final void g() {
            this.f = true;
        }

        public final void h() {
            this.f = false;
            i();
        }

        public final void a(int i, s.a aVar) {
            this.a.add(new c(i, aVar));
            if (this.a.size() != 1 || this.e.a()) {
                return;
            }
            i();
        }

        public final void b(int i, s.a aVar) {
            c cVar = new c(i, aVar);
            this.a.remove(cVar);
            if (cVar.equals(this.d)) {
                this.d = this.a.isEmpty() ? null : this.a.get(0);
            }
        }

        public final void c(int i, s.a aVar) {
            this.d = new c(i, aVar);
        }

        private void i() {
            if (this.a.isEmpty()) {
                return;
            }
            this.c = this.a.get(0);
        }

        private c a(c cVar, ae aeVar) {
            int iA;
            return (aeVar.a() || this.e.a() || (iA = aeVar.a(this.e.a(cVar.b.a, this.b, true).b)) == -1) ? cVar : new c(aeVar.a(iA, this.b, false).c, cVar.b.a(iA));
        }
    }

    private static final class c {
        public final int a;
        public final s.a b;

        public c(int i, s.a aVar) {
            this.a = i;
            this.b = aVar;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                c cVar = (c) obj;
                if (this.a == cVar.a && this.b.equals(cVar.b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return (this.a * 31) + this.b.hashCode();
        }
    }

    @Override
    public final void c() {
        a(this.d.d());
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }
}
