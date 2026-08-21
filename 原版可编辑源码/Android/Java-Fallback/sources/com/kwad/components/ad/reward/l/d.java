package com.kwad.components.ad.reward.l;

public final class d {
    private int yi;
    private com.kwad.components.ad.reward.f.a yj;
    private com.kwad.components.ad.reward.l.c yk;
    private com.kwad.components.ad.reward.l.a yl;
    private com.kwad.components.ad.j.a ym;
    private int yn;

    public d(int r2, com.kwad.components.ad.j.a r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.yn = r0
            r1.yi = r2
            r0 = 1
            if (r2 != r0) goto L11
            r2 = r3
            com.kwad.components.ad.reward.l.c r2 = (com.kwad.components.ad.reward.l.c) r2
            r1.yk = r2
            goto L22
        L11:
            r0 = 2
            if (r2 != r0) goto L1a
            r2 = r3
            com.kwad.components.ad.reward.f.a r2 = (com.kwad.components.ad.reward.f.a) r2
            r1.yj = r2
            goto L22
        L1a:
            r0 = 3
            if (r2 != r0) goto L22
            r2 = r3
            com.kwad.components.ad.reward.l.a r2 = (com.kwad.components.ad.reward.l.a) r2
            r1.yl = r2
        L22:
            r1.ym = r3
            return
    }

    private com.kwad.components.ad.j.a jQ() {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.ym
            return r0
    }

    public final void a(com.kwad.components.ad.reward.l.b r2) {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public final void a(com.kwad.components.core.video.l r2) {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.b(r2)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r3) {
            r1 = this;
            r0 = 2
            r1.yi = r0
            com.kwad.components.ad.reward.f.a r0 = new com.kwad.components.ad.reward.f.a
            r0.<init>(r2, r3)
            r1.yj = r0
            r1.ym = r0
            return
    }

    public final void a(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.ad.reward.l.b r2) {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public final void b(com.kwad.components.core.video.l r2) {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.a(r2)
            return
    }

    public final void b(com.kwad.sdk.utils.h.a r2) {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public final long getPlayDuration() {
            r2 = this;
            com.kwad.components.ad.j.a r0 = r2.jQ()
            long r0 = r0.getPlayDuration()
            return r0
    }

    public final void jN() {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L8
            r0.jN()
            return
        L8:
            com.kwad.components.ad.reward.l.a r0 = r1.yl
            if (r0 == 0) goto Lf
            r0.jN()
        Lf:
            return
    }

    public final void jO() {
            r1 = this;
            com.kwad.components.ad.reward.l.c r0 = r1.yk
            if (r0 == 0) goto L7
            r0.jO()
        L7:
            return
    }

    public final boolean jR() {
            r1 = this;
            com.kwad.components.ad.reward.f.a r0 = r1.yj
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final com.kwad.components.ad.reward.f.a jS() {
            r1 = this;
            com.kwad.components.ad.reward.f.a r0 = r1.yj
            return r0
    }

    public final com.kwad.components.ad.reward.l.a jT() {
            r1 = this;
            com.kwad.components.ad.reward.l.a r0 = r1.yl
            return r0
    }

    public final void pause() {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.pause()
            return
    }

    public final void release() {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.release()
            return
    }

    public final void resume() {
            r4 = this;
            com.kwad.components.ad.j.a r0 = r4.jQ()
            r0.resume()
            com.kwad.components.ad.reward.f.a r0 = r4.yj
            if (r0 == 0) goto L19
            int r1 = r4.yn
            if (r1 <= 0) goto L19
            r2 = 2
            r3 = 0
            if (r1 != r2) goto L15
            r1 = 1
            goto L16
        L15:
            r1 = r3
        L16:
            r0.setAudioEnabled(r1, r3)
        L19:
            return
    }

    public final void setAudioEnabled(boolean r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L4
            r0 = 2
            goto L5
        L4:
            r0 = 1
        L5:
            r1.yn = r0
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.setAudioEnabled(r2, r3)
            return
    }

    public final void skipToEnd() {
            r1 = this;
            com.kwad.components.ad.j.a r0 = r1.jQ()
            r0.skipToEnd()
            return
    }
}
