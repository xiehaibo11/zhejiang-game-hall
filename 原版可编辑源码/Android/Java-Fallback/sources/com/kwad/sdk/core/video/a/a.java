package com.kwad.sdk.core.video.a;

public abstract class a implements com.kwad.sdk.core.video.a.c {
    private com.kwad.sdk.core.video.a.c.e Sh;
    private com.kwad.sdk.core.video.a.c.h Si;
    private com.kwad.sdk.core.video.a.c.b Sj;
    private com.kwad.sdk.core.video.a.c.c Sk;
    private com.kwad.sdk.core.video.a.c.d Sl;
    private com.kwad.sdk.core.video.a.c.a Sm;
    private com.kwad.sdk.core.video.a.c.f avC;
    private com.kwad.sdk.core.video.a.c.g avD;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void f(float r1) {
            r0 = 0
            int r1 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r1 != 0) goto Lb
            java.lang.String r1 = "autoMute"
        L7:
            com.kwad.sdk.core.video.a.a.a.dI(r1)
            return
        Lb:
            java.lang.String r1 = "autoVoice"
            goto L7
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.a r1) {
            r0 = this;
            r0.Sm = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.b r1) {
            r0 = this;
            r0.Sj = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.c r1) {
            r0 = this;
            r0.Sk = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.f r1) {
            r0 = this;
            r0.avC = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.g r1) {
            r0 = this;
            r0.avD = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.video.a.c.h r1) {
            r0 = this;
            r0.Si = r1
            return
    }

    protected final void b(android.media.TimedText r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c$g r0 = r1.avD
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.video.a.c.e r1) {
            r0 = this;
            r0.Sh = r1
            return
    }

    @Override
    public final void c(com.kwad.sdk.core.video.a.c.d r1) {
            r0 = this;
            r0.Sl = r1
            return
    }

    protected final void notifyOnBufferingUpdate(int r2) {
            r1 = this;
            com.kwad.sdk.core.video.a.c$a r0 = r1.Sm
            if (r0 == 0) goto L7
            r0.aw(r2)
        L7:
            return
    }

    protected final void notifyOnCompletion() {
            r1 = this;
            com.kwad.sdk.core.video.a.c$b r0 = r1.Sj
            if (r0 == 0) goto L7
            r0.os()
        L7:
            return
    }

    protected final boolean notifyOnError(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c$c r0 = r1.Sk
            if (r0 == 0) goto Lc
            boolean r2 = r0.j(r2, r3)
            if (r2 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    protected final boolean notifyOnInfo(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c$d r0 = r1.Sl
            if (r0 == 0) goto Lc
            boolean r2 = r0.k(r2, r3)
            if (r2 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    protected final void notifyOnPrepared() {
            r1 = this;
            com.kwad.sdk.core.video.a.c$e r0 = r1.Sh
            if (r0 == 0) goto L7
            r0.a(r1)
        L7:
            return
    }

    protected final void notifyOnSeekComplete() {
            r1 = this;
            com.kwad.sdk.core.video.a.c$f r0 = r1.avC
            if (r0 == 0) goto L7
            r0.ot()
        L7:
            return
    }

    public final void resetListeners() {
            r1 = this;
            r0 = 0
            r1.Sh = r0
            r1.Sm = r0
            r1.Sj = r0
            r1.avC = r0
            r1.Si = r0
            r1.Sk = r0
            r1.Sl = r0
            r1.avD = r0
            return
    }

    protected final void u(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.core.video.a.c$h r0 = r1.Si
            if (r0 == 0) goto L7
            r0.i(r2, r3)
        L7:
            return
    }
}
