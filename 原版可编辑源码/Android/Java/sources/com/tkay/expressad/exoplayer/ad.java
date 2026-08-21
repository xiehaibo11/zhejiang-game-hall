package com.tkay.expressad.exoplayer;

import android.graphics.SurfaceTexture;
import android.media.PlaybackParams;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.TextureView;
import com.tkay.expressad.exoplayer.a.a;
import com.tkay.expressad.exoplayer.b.b;
import com.tkay.expressad.exoplayer.h;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.w;
import com.tkay.expressad.exoplayer.x;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.TimeoutException;

public class ad implements h, w.e, w.g {
    private static final String x = "SimpleExoPlayer";
    private final a A;
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> B;
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> C;
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> D;
    private final CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> E;
    private final com.tkay.expressad.exoplayer.a.a F;
    private m G;
    private m H;
    private Surface I;
    private boolean J;
    private int K;
    private SurfaceHolder L;
    private TextureView M;
    private com.tkay.expressad.exoplayer.c.d N;
    private com.tkay.expressad.exoplayer.c.d O;
    private int P;
    private com.tkay.expressad.exoplayer.b.b Q;
    private float R;
    private com.tkay.expressad.exoplayer.h.s S;
    protected final y[] w;
    private final h y;
    private final Handler z;

    @Deprecated
    public interface b extends com.tkay.expressad.exoplayer.l.g {
    }

    @Override
    public final w.g b() {
        return this;
    }

    @Override
    public final w.e c() {
        return this;
    }

    protected ad(ab abVar, com.tkay.expressad.exoplayer.i.h hVar, p pVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar) {
        new a.a();
        this(abVar, hVar, pVar, gVar, (byte) 0);
    }

    protected ad(ab abVar, com.tkay.expressad.exoplayer.i.h hVar, p pVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, byte b2) {
        this(abVar, hVar, pVar, gVar, com.tkay.expressad.exoplayer.k.c.a);
    }

    private ad(ab abVar, com.tkay.expressad.exoplayer.i.h hVar, p pVar, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> gVar, com.tkay.expressad.exoplayer.k.c cVar) {
        this.A = new a(this, (byte) 0);
        this.B = new CopyOnWriteArraySet<>();
        this.C = new CopyOnWriteArraySet<>();
        this.D = new CopyOnWriteArraySet<>();
        this.E = new CopyOnWriteArraySet<>();
        Handler handler = new Handler(Looper.myLooper() != null ? Looper.myLooper() : Looper.getMainLooper());
        this.z = handler;
        a aVar = this.A;
        this.w = abVar.a(handler, aVar, aVar, aVar, gVar);
        this.R = 1.0f;
        this.P = 0;
        this.Q = com.tkay.expressad.exoplayer.b.b.a;
        this.K = 1;
        j jVar = new j(this.w, hVar, pVar, cVar);
        this.y = jVar;
        com.tkay.expressad.exoplayer.a.a aVarA = a.a.a(jVar, cVar);
        this.F = aVarA;
        a((w.c) aVarA);
        this.D.add(this.F);
        this.E.add(this.F);
        a(this.F);
        if (gVar instanceof com.tkay.expressad.exoplayer.d.d) {
            ((com.tkay.expressad.exoplayer.d.d) gVar).a(this.z, this.F);
        }
    }

    @Override
    public final void d(int i) {
        this.K = i;
        for (y yVar : this.w) {
            if (yVar.a() == 2) {
                this.y.a(yVar).a(4).a(Integer.valueOf(i)).i();
            }
        }
    }

    @Override
    public final int H() {
        return this.K;
    }

    @Override
    public final void I() {
        a((Surface) null);
    }

    @Override
    public final void a(Surface surface) {
        T();
        a(surface, false);
    }

    @Override
    public final void b(Surface surface) {
        if (surface == null || surface != this.I) {
            return;
        }
        a((Surface) null);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x001a  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(SurfaceHolder surfaceHolder) {
        Surface surface;
        T();
        this.L = surfaceHolder;
        if (surfaceHolder == null) {
            surface = null;
        } else {
            surfaceHolder.addCallback(this.A);
            surface = surfaceHolder.getSurface();
            if (surface == null || !surface.isValid()) {
            }
        }
        a(surface, false);
    }

    @Override
    public final void b(SurfaceHolder surfaceHolder) {
        if (surfaceHolder == null || surfaceHolder != this.L) {
            return;
        }
        a((SurfaceHolder) null);
    }

    @Override
    public final void a(SurfaceView surfaceView) {
        a(surfaceView == null ? null : surfaceView.getHolder());
    }

    @Override
    public final void b(SurfaceView surfaceView) {
        SurfaceHolder holder = surfaceView == null ? null : surfaceView.getHolder();
        if (holder == null || holder != this.L) {
            return;
        }
        a((SurfaceHolder) null);
    }

    @Override
    public final void a(TextureView textureView) {
        T();
        this.M = textureView;
        Surface surface = null;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != null) {
                Log.w(x, "Replacing existing SurfaceTextureListener.");
            }
            textureView.setSurfaceTextureListener(this.A);
            SurfaceTexture surfaceTexture = textureView.isAvailable() ? textureView.getSurfaceTexture() : null;
            if (surfaceTexture != null) {
                surface = new Surface(surfaceTexture);
            }
        }
        a(surface, true);
    }

    @Override
    public final void b(TextureView textureView) {
        if (textureView == null || textureView != this.M) {
            return;
        }
        a((TextureView) null);
    }

    @Deprecated
    private void e(int i) {
        com.tkay.expressad.exoplayer.b.b bVarA = new b.a().b(af.d(i)).a(af.e(i)).a();
        this.Q = bVarA;
        for (y yVar : this.w) {
            if (yVar.a() == 1) {
                this.y.a(yVar).a(3).a(bVarA).i();
            }
        }
    }

    @Deprecated
    private int K() {
        return af.f(this.Q.d);
    }

    private com.tkay.expressad.exoplayer.a.a L() {
        return this.F;
    }

    private void a(com.tkay.expressad.exoplayer.a.b bVar) {
        this.F.a(bVar);
    }

    private void b(com.tkay.expressad.exoplayer.a.b bVar) {
        this.F.b(bVar);
    }

    private void a(com.tkay.expressad.exoplayer.b.b bVar) {
        this.Q = bVar;
        for (y yVar : this.w) {
            if (yVar.a() == 1) {
                this.y.a(yVar).a(3).a(bVar).i();
            }
        }
    }

    private com.tkay.expressad.exoplayer.b.b M() {
        return this.Q;
    }

    public final void a(float f) {
        this.R = f;
        for (y yVar : this.w) {
            if (yVar.a() == 1) {
                this.y.a(yVar).a(2).a(Float.valueOf(f)).i();
            }
        }
    }

    private float N() {
        return this.R;
    }

    @Deprecated
    private void a(PlaybackParams playbackParams) {
        v vVar;
        if (playbackParams != null) {
            playbackParams.allowDefaults();
            vVar = new v(playbackParams.getSpeed(), playbackParams.getPitch());
        } else {
            vVar = null;
        }
        a(vVar);
    }

    private m O() {
        return this.G;
    }

    private m P() {
        return this.H;
    }

    private int Q() {
        return this.P;
    }

    private com.tkay.expressad.exoplayer.c.d R() {
        return this.N;
    }

    private com.tkay.expressad.exoplayer.c.d S() {
        return this.O;
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.l.g gVar) {
        this.B.add(gVar);
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.l.g gVar) {
        this.B.remove(gVar);
    }

    @Deprecated
    private void a(b bVar) {
        this.B.clear();
        if (bVar != null) {
            a((com.tkay.expressad.exoplayer.l.g) bVar);
        }
    }

    @Deprecated
    private void b(b bVar) {
        b((com.tkay.expressad.exoplayer.l.g) bVar);
    }

    private void a(com.tkay.expressad.exoplayer.g.f fVar) {
        this.C.add(fVar);
    }

    private void b(com.tkay.expressad.exoplayer.g.f fVar) {
        this.C.remove(fVar);
    }

    @Deprecated
    private void c(com.tkay.expressad.exoplayer.g.f fVar) {
        this.C.retainAll(Collections.singleton(this.F));
        if (fVar != null) {
            a(fVar);
        }
    }

    @Deprecated
    private void a(com.tkay.expressad.exoplayer.l.h hVar) {
        this.D.retainAll(Collections.singleton(this.F));
        if (hVar != null) {
            this.D.add(hVar);
        }
    }

    @Deprecated
    private void b(com.tkay.expressad.exoplayer.l.h hVar) {
        this.D.add(hVar);
    }

    @Deprecated
    private void c(com.tkay.expressad.exoplayer.l.h hVar) {
        this.D.remove(hVar);
    }

    @Deprecated
    private void a(com.tkay.expressad.exoplayer.b.g gVar) {
        this.E.retainAll(Collections.singleton(this.F));
        if (gVar != null) {
            this.E.add(gVar);
        }
    }

    @Deprecated
    private void b(com.tkay.expressad.exoplayer.b.g gVar) {
        this.E.add(gVar);
    }

    @Deprecated
    private void c(com.tkay.expressad.exoplayer.b.g gVar) {
        this.E.remove(gVar);
    }

    @Override
    public final Looper a() {
        return this.y.a();
    }

    @Override
    public final void a(w.c cVar) {
        this.y.a(cVar);
    }

    @Override
    public final void b(w.c cVar) {
        this.y.b(cVar);
    }

    @Override
    public final int d() {
        return this.y.d();
    }

    @Override
    public final g e() {
        return this.y.e();
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s sVar) {
        a(sVar, true, true);
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s sVar, boolean z, boolean z2) {
        com.tkay.expressad.exoplayer.h.s sVar2 = this.S;
        if (sVar2 != sVar) {
            if (sVar2 != null) {
                sVar2.a(this.F);
                this.F.b();
            }
            sVar.a(this.z, this.F);
            this.S = sVar;
        }
        this.y.a(sVar, z, z2);
    }

    @Override
    public final void a(boolean z) {
        this.y.a(z);
    }

    @Override
    public final boolean f() {
        return this.y.f();
    }

    @Override
    public final int g() {
        return this.y.g();
    }

    @Override
    public final void a(int i) {
        this.y.a(i);
    }

    @Override
    public final void b(boolean z) {
        this.y.b(z);
    }

    @Override
    public final boolean h() {
        return this.y.h();
    }

    @Override
    public final boolean i() {
        return this.y.i();
    }

    @Override
    public final void j() {
        this.F.a();
        this.y.j();
    }

    @Override
    public final void b(int i) {
        this.F.a();
        this.y.b(i);
    }

    @Override
    public final void a(long j) {
        this.F.a();
        this.y.a(j);
    }

    @Override
    public final void a(int i, long j) {
        this.F.a();
        this.y.a(i, j);
    }

    @Override
    public final void a(v vVar) {
        this.y.a(vVar);
    }

    @Override
    public final v k() {
        return this.y.k();
    }

    @Override
    public final void a(ac acVar) {
        this.y.a(acVar);
    }

    @Override
    public final Object l() {
        return this.y.l();
    }

    @Override
    public final void m() {
        c(false);
    }

    @Override
    public final void c(boolean z) {
        this.y.c(z);
        com.tkay.expressad.exoplayer.h.s sVar = this.S;
        if (sVar != null) {
            sVar.a(this.F);
            this.S = null;
            this.F.b();
        }
    }

    @Override
    public final void n() {
        this.y.n();
        T();
        Surface surface = this.I;
        if (surface != null) {
            if (this.J) {
                surface.release();
            }
            this.I = null;
        }
        com.tkay.expressad.exoplayer.h.s sVar = this.S;
        if (sVar != null) {
            sVar.a(this.F);
        }
    }

    @Override
    public final void a(h.c... cVarArr) {
        this.y.a(cVarArr);
    }

    @Override
    public final x a(x.b bVar) {
        return this.y.a(bVar);
    }

    @Override
    public final void b(h.c... cVarArr) {
        this.y.b(cVarArr);
    }

    @Override
    public final int C() {
        return this.y.C();
    }

    @Override
    public final int c(int i) {
        return this.y.c(i);
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af D() {
        return this.y.D();
    }

    @Override
    public final com.tkay.expressad.exoplayer.i.g E() {
        return this.y.E();
    }

    @Override
    public final ae F() {
        return this.y.F();
    }

    @Override
    public final Object G() {
        return this.y.G();
    }

    @Override
    public final int o() {
        return this.y.o();
    }

    @Override
    public final int p() {
        return this.y.p();
    }

    @Override
    public final int q() {
        return this.y.q();
    }

    @Override
    public final int r() {
        return this.y.r();
    }

    @Override
    public final long s() {
        return this.y.s();
    }

    @Override
    public final long t() {
        return this.y.t();
    }

    @Override
    public final long u() {
        return this.y.u();
    }

    @Override
    public final int v() {
        return this.y.v();
    }

    @Override
    public final boolean w() {
        return this.y.w();
    }

    @Override
    public final boolean x() {
        return this.y.x();
    }

    @Override
    public final boolean y() {
        return this.y.y();
    }

    @Override
    public final int z() {
        return this.y.z();
    }

    @Override
    public final int A() {
        return this.y.A();
    }

    @Override
    public final long B() {
        return this.y.B();
    }

    private static h a(y[] yVarArr, com.tkay.expressad.exoplayer.i.h hVar, p pVar, com.tkay.expressad.exoplayer.k.c cVar) {
        return new j(yVarArr, hVar, pVar, cVar);
    }

    private void T() {
        TextureView textureView = this.M;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != this.A) {
                Log.w(x, "SurfaceTextureListener already unset or replaced.");
            } else {
                this.M.setSurfaceTextureListener(null);
            }
            this.M = null;
        }
        SurfaceHolder surfaceHolder = this.L;
        if (surfaceHolder != null) {
            surfaceHolder.removeCallback(this.A);
            this.L = null;
        }
    }

    private void a(Surface surface, boolean z) {
        ArrayList arrayList = new ArrayList();
        for (y yVar : this.w) {
            if (yVar.a() == 2) {
                arrayList.add(this.y.a(yVar).a(1).a(surface).i());
            }
        }
        Surface surface2 = this.I;
        if (surface2 != null && surface2 != surface) {
            try {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((x) it.next()).k();
                }
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
            } catch (TimeoutException unused2) {
                this.y.c(false);
            }
            if (this.J) {
                this.I.release();
            }
        }
        this.I = surface;
        this.J = z;
    }

    private final class a implements SurfaceHolder.Callback, TextureView.SurfaceTextureListener, com.tkay.expressad.exoplayer.b.g, com.tkay.expressad.exoplayer.g.f, com.tkay.expressad.exoplayer.l.h {
        @Override
        public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
        }

        @Override
        public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
        }

        @Override
        public final void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        }

        private a() {
        }

        a(ad adVar, byte b) {
            this();
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.c.d dVar) {
            ad.this.N = dVar;
            Iterator it = ad.this.D.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it.next()).a(dVar);
            }
        }

        @Override
        public final void a(String str, long j, long j2) {
            Iterator it = ad.this.D.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it.next()).a(str, j, j2);
            }
        }

        @Override
        public final void a(m mVar) {
            ad.this.G = mVar;
            Iterator it = ad.this.D.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it.next()).a(mVar);
            }
        }

        @Override
        public final void a(int i, long j) {
            Iterator it = ad.this.D.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it.next()).a(i, j);
            }
        }

        @Override
        public final void a(int i, int i2, int i3, float f) {
            Iterator it = ad.this.B.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.g) it.next()).a(i, i2);
            }
            Iterator it2 = ad.this.D.iterator();
            while (it2.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it2.next()).a(i, i2, i3, f);
            }
        }

        @Override
        public final void a(Surface surface) {
            if (ad.this.I == surface) {
                Iterator it = ad.this.B.iterator();
                while (it.hasNext()) {
                    it.next();
                }
            }
            Iterator it2 = ad.this.D.iterator();
            while (it2.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it2.next()).a(surface);
            }
        }

        @Override
        public final void b(com.tkay.expressad.exoplayer.c.d dVar) {
            Iterator it = ad.this.D.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.l.h) it.next()).b(dVar);
            }
            ad.this.G = null;
            ad.this.N = null;
        }

        @Override
        public final void c(com.tkay.expressad.exoplayer.c.d dVar) {
            ad.this.O = dVar;
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).c(dVar);
            }
        }

        @Override
        public final void a(int i) {
            ad.this.P = i;
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).a(i);
            }
        }

        @Override
        public final void b(String str, long j, long j2) {
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).b(str, j, j2);
            }
        }

        @Override
        public final void b(m mVar) {
            ad.this.H = mVar;
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).b(mVar);
            }
        }

        @Override
        public final void a(int i, long j, long j2) {
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).a(i, j, j2);
            }
        }

        @Override
        public final void d(com.tkay.expressad.exoplayer.c.d dVar) {
            Iterator it = ad.this.E.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.b.g) it.next()).d(dVar);
            }
            ad.this.H = null;
            ad.this.O = null;
            ad.this.P = 0;
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.g.a aVar) {
            Iterator it = ad.this.C.iterator();
            while (it.hasNext()) {
                ((com.tkay.expressad.exoplayer.g.f) it.next()).a(aVar);
            }
        }

        @Override
        public final void surfaceCreated(SurfaceHolder surfaceHolder) {
            ad.this.a(surfaceHolder.getSurface(), false);
        }

        @Override
        public final void surfaceDestroyed(SurfaceHolder surfaceHolder) {
            ad.this.a((Surface) null, false);
        }

        @Override
        public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
            ad.this.a(new Surface(surfaceTexture), true);
        }

        @Override
        public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
            ad.this.a((Surface) null, true);
            return true;
        }
    }

    public final boolean J() {
        return d() == 3 && f();
    }

    @Deprecated
    private void d(com.tkay.expressad.exoplayer.g.f fVar) {
        this.C.remove(fVar);
    }
}
