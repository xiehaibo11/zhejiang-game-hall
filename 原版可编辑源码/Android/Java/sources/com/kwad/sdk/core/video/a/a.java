package com.kwad.sdk.core.video.a;

import android.media.TimedText;
import com.kwad.sdk.core.video.a.c;

public abstract class a implements c {
    private c.e Sh;
    private c.h Si;
    private c.b Sj;
    private c.c Sk;
    private c.d Sl;
    private c.a Sm;
    private c.f avC;
    private c.g avD;

    protected static void f(float f) {
        com.kwad.sdk.core.video.a.a.a.dI(f == 0.0f ? "autoMute" : "autoVoice");
    }

    @Override
    public final void a(c.a aVar) {
        this.Sm = aVar;
    }

    @Override
    public final void a(c.b bVar) {
        this.Sj = bVar;
    }

    @Override
    public final void a(c.c cVar) {
        this.Sk = cVar;
    }

    @Override
    public final void a(c.f fVar) {
        this.avC = fVar;
    }

    @Override
    public final void a(c.g gVar) {
        this.avD = gVar;
    }

    @Override
    public final void a(c.h hVar) {
        this.Si = hVar;
    }

    protected final void b(TimedText timedText) {
        c.g gVar = this.avD;
        if (gVar != null) {
            gVar.a(timedText);
        }
    }

    @Override
    public final void b(c.e eVar) {
        this.Sh = eVar;
    }

    @Override
    public final void c(c.d dVar) {
        this.Sl = dVar;
    }

    protected final void notifyOnBufferingUpdate(int i) {
        c.a aVar = this.Sm;
        if (aVar != null) {
            aVar.aw(i);
        }
    }

    protected final void notifyOnCompletion() {
        c.b bVar = this.Sj;
        if (bVar != null) {
            bVar.os();
        }
    }

    protected final boolean notifyOnError(int i, int i2) {
        c.c cVar = this.Sk;
        return cVar != null && cVar.j(i, i2);
    }

    protected final boolean notifyOnInfo(int i, int i2) {
        c.d dVar = this.Sl;
        return dVar != null && dVar.k(i, i2);
    }

    protected final void notifyOnPrepared() {
        c.e eVar = this.Sh;
        if (eVar != null) {
            eVar.a(this);
        }
    }

    protected final void notifyOnSeekComplete() {
        c.f fVar = this.avC;
        if (fVar != null) {
            fVar.ot();
        }
    }

    public final void resetListeners() {
        this.Sh = null;
        this.Sm = null;
        this.Sj = null;
        this.avC = null;
        this.Si = null;
        this.Sk = null;
        this.Sl = null;
        this.avD = null;
    }

    protected final void u(int i, int i2) {
        c.h hVar = this.Si;
        if (hVar != null) {
            hVar.i(i, i2);
        }
    }
}
