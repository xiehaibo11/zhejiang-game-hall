package com.kwad.components.ad.j;

public class b extends com.kwad.components.ad.j.a<com.kwad.components.core.video.k> {
    public com.kwad.components.core.video.b GL;
    private boolean GM;
    private com.kwad.components.core.video.k GN;
    protected com.kwad.components.core.video.DetailVideoView mDetailVideoView;


    public b(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.components.core.video.DetailVideoView r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.GM = r1
            com.kwad.components.ad.j.b$1 r1 = new com.kwad.components.ad.j.b$1
            r1.<init>(r0)
            r0.GN = r1
            r0.mDetailVideoView = r2
            com.kwad.components.core.video.b r1 = new com.kwad.components.core.video.b
            com.kwad.components.core.video.DetailVideoView r2 = r0.mDetailVideoView
            r1.<init>(r2)
            r0.GL = r1
            r0.lQ()
            return
    }

    static boolean a(com.kwad.components.ad.j.b r0) {
            boolean r0 = r0.GM
            return r0
    }

    static void b(com.kwad.components.ad.j.b r0) {
            r0.lS()
            return
    }

    private void lQ() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.GL
            com.kwad.components.core.video.k r1 = r2.GN
            r0.c(r1)
            return
    }

    private void lR() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 == 0) goto Le
            com.kwad.components.core.video.k r1 = r2.GN
            if (r1 == 0) goto Le
            r0.d(r1)
            r0 = 0
            r2.GN = r0
        Le:
            return
    }

    private void lS() {
            r3 = this;
            com.kwad.components.core.o.a r0 = com.kwad.components.core.o.a.pA()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            r2 = 21008(0x5210, float:2.9438E-41)
            r0.g(r1, r2)
            r0 = 1
            r3.GM = r0
            return
    }

    @Override
    public final void a(com.kwad.components.core.video.h r1) {
            r0 = this;
            com.kwad.components.core.video.k r1 = (com.kwad.components.core.video.k) r1
            r0.b(r1)
            return
    }

    public final void a(com.kwad.components.core.video.k r2) {
            r1 = this;
            if (r2 == 0) goto La
            com.kwad.components.core.video.b r0 = r1.GL
            if (r0 != 0) goto L7
            goto La
        L7:
            r0.c(r2)
        La:
            return
    }

    @Override
    public final void b(com.kwad.components.core.video.h r1) {
            r0 = this;
            com.kwad.components.core.video.k r1 = (com.kwad.components.core.video.k) r1
            r0.a(r1)
            return
    }

    public final void b(com.kwad.components.core.video.k r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.core.video.b r0 = r1.GL
            r0.d(r2)
            return
    }

    @Override
    public long getPlayDuration() {
            r2 = this;
            com.kwad.components.core.video.b r0 = r2.GL
            if (r0 == 0) goto L9
            long r0 = r0.getPlayDuration()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public void pause() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.GL
            r0.pause()
            return
    }

    @Override
    public void release() {
            r1 = this;
            super.release()
            r0 = 0
            r1.GM = r0
            r1.lR()
            com.kwad.components.core.video.b r0 = r1.GL
            if (r0 == 0) goto L15
            r0.clear()
            com.kwad.components.core.video.b r0 = r1.GL
            r0.release()
        L15:
            return
    }

    @Override
    public void resume() {
            r1 = this;
            com.kwad.components.core.video.b r0 = r1.GL
            r0.resume()
            return
    }
}
