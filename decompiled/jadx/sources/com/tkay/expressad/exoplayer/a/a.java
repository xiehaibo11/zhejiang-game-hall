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

/* JADX INFO: loaded from: classes3.dex */
public final class a implements g, com.tkay.expressad.exoplayer.d.c, f, t, d.a, h, w.c {
    private final com.tkay.expressad.exoplayer.k.c b;
    private w e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> f6470a = new CopyOnWriteArraySet<>();
    private final b d = new b();
    private final ae.b c = new ae.b();

    /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.a.a$a, reason: collision with other inner class name */
    public static class C0435a {
        public static a a(w wVar, com.tkay.expressad.exoplayer.k.c cVar) {
            return new a(wVar, cVar);
        }
    }

    protected a(w wVar, com.tkay.expressad.exoplayer.k.c cVar) {
        this.e = wVar;
        this.b = (com.tkay.expressad.exoplayer.k.c) com.tkay.expressad.exoplayer.k.a.a(cVar);
    }

    public final void a(com.tkay.expressad.exoplayer.a.b bVar) {
        this.f6470a.add(bVar);
    }

    public final void b(com.tkay.expressad.exoplayer.a.b bVar) {
        this.f6470a.remove(bVar);
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
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI);
        }
    }

    private void a(int i, int i2) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, i, i2);
        }
    }

    private void a(NetworkInfo networkInfo) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, networkInfo);
        }
    }

    public final void b() {
        for (c cVar : new ArrayList(this.d.f6471a)) {
            b(cVar.f6472a, cVar.b);
        }
    }

    @Override // com.tkay.expressad.exoplayer.g.f
    public final void a(com.tkay.expressad.exoplayer.g.a aVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, aVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void c(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarI, 1);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void a(int i) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().f(aVarJ, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void b(String str, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 1, str);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void b(m mVar) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 1, mVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void a(int i, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, i, j, j2);
        }
    }

    @Override // com.tkay.expressad.exoplayer.b.g
    public final void d(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarH, 1);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarI, 2);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(String str, long j, long j2) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 2, str);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(m mVar) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, 2, mVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(int i, long j) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().g(aVarH, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(int i, int i2, int i3, float f) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarJ, i, i2);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void a(Surface surface) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, surface);
        }
    }

    @Override // com.tkay.expressad.exoplayer.l.h
    public final void b(com.tkay.expressad.exoplayer.c.d dVar) {
        b.a aVarH = h();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarH, 2);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void a(int i, s.a aVar) {
        this.d.a(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().c(aVarD);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void b(int i, s.a aVar) {
        this.d.b(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().d(aVarD);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void a(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void b(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void c(int i, s.a aVar, t.b bVar, t.c cVar) {
        d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void a(int i, s.a aVar, t.b bVar, t.c cVar, IOException iOException, boolean z) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarD, iOException);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void c(int i, s.a aVar) {
        this.d.c(i, aVar);
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().e(aVarD);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void a(int i, s.a aVar, t.c cVar) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarD, cVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.t
    public final void b(int i, s.a aVar, t.c cVar) {
        b.a aVarD = d(i, aVar);
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarD, cVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onTimelineChanged(ae aeVar, Object obj, int i) {
        this.d.a(aeVar);
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onTracksChanged(af afVar, com.tkay.expressad.exoplayer.i.g gVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, gVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onLoadingChanged(boolean z) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarI, z);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onPlayerStateChanged(boolean z, int i) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, z, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onRepeatModeChanged(int i) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().c(aVarI, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onShuffleModeEnabledChanged(boolean z) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, z);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onPlayerError(com.tkay.expressad.exoplayer.g gVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, gVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onPositionDiscontinuity(int i) {
        this.d.f();
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().b(aVarI, i);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onPlaybackParametersChanged(v vVar) {
        b.a aVarI = i();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarI, vVar);
        }
    }

    @Override // com.tkay.expressad.exoplayer.w.c
    public final void onSeekProcessed() {
        if (this.d.e()) {
            this.d.h();
            b.a aVarI = i();
            Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
            while (it.hasNext()) {
                it.next().b(aVarI);
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.d.c
    public final void d() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().f(aVarJ);
        }
    }

    @Override // com.tkay.expressad.exoplayer.d.c
    public final void a(Exception exc) {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().a(aVarJ, exc);
        }
    }

    @Override // com.tkay.expressad.exoplayer.d.c
    public final void e() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().g(aVarJ);
        }
    }

    @Override // com.tkay.expressad.exoplayer.d.c
    public final void f() {
        b.a aVarJ = j();
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next().h(aVarJ);
        }
    }

    private Set<com.tkay.expressad.exoplayer.a.b> g() {
        return Collections.unmodifiableSet(this.f6470a);
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
        return d(cVar.f6472a, cVar.b);
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final ArrayList<c> f6471a = new ArrayList<>();
        private final ae.a b = new ae.a();
        private ae e = ae.f6477a;

        public final c a() {
            if (this.f6471a.isEmpty() || this.e.a() || this.f) {
                return null;
            }
            return this.f6471a.get(0);
        }

        public final c b() {
            return this.c;
        }

        public final c c() {
            return this.d;
        }

        public final c d() {
            if (this.f6471a.isEmpty()) {
                return null;
            }
            return this.f6471a.get(r0.size() - 1);
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
            for (int i2 = 0; i2 < this.f6471a.size(); i2++) {
                c cVar = this.f6471a.get(i2);
                int i3 = cVar.b.f6667a;
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
            for (int i = 0; i < this.f6471a.size(); i++) {
                ArrayList<c> arrayList = this.f6471a;
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
            this.f6471a.add(new c(i, aVar));
            if (this.f6471a.size() != 1 || this.e.a()) {
                return;
            }
            i();
        }

        public final void b(int i, s.a aVar) {
            c cVar = new c(i, aVar);
            this.f6471a.remove(cVar);
            if (cVar.equals(this.d)) {
                this.d = this.f6471a.isEmpty() ? null : this.f6471a.get(0);
            }
        }

        public final void c(int i, s.a aVar) {
            this.d = new c(i, aVar);
        }

        private void i() {
            if (this.f6471a.isEmpty()) {
                return;
            }
            this.c = this.f6471a.get(0);
        }

        private c a(c cVar, ae aeVar) {
            int iA;
            return (aeVar.a() || this.e.a() || (iA = aeVar.a(this.e.a(cVar.b.f6667a, this.b, true).b)) == -1) ? cVar : new c(aeVar.a(iA, this.b, false).c, cVar.b.a(iA));
        }
    }

    private static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6472a;
        public final s.a b;

        public c(int i, s.a aVar) {
            this.f6472a = i;
            this.b = aVar;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                c cVar = (c) obj;
                if (this.f6472a == cVar.f6472a && this.b.equals(cVar.b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return (this.f6472a * 31) + this.b.hashCode();
        }
    }

    @Override // com.tkay.expressad.exoplayer.j.d.a
    public final void c() {
        a(this.d.d());
        Iterator<com.tkay.expressad.exoplayer.a.b> it = this.f6470a.iterator();
        while (it.hasNext()) {
            it.next();
        }
    }
}
