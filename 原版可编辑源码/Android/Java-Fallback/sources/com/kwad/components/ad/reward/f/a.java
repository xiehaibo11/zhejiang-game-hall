package com.kwad.components.ad.reward.f;

public final class a extends com.kwad.components.ad.j.a<com.kwad.components.core.video.g> {
    private com.kwad.components.offline.api.core.adlive.IAdLivePlayModule eF;
    private java.util.List<com.kwad.components.core.video.g> rC;
    private long rD;
    private com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener rE;


    public a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r3) {
            r1 = this;
            r1.<init>(r2)
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.rC = r0
            com.kwad.components.ad.reward.f.a$1 r0 = new com.kwad.components.ad.reward.f.a$1
            r0.<init>(r1)
            r1.rE = r0
            r1.eF = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            long r2 = com.kwad.sdk.core.response.b.a.Y(r2)
            r1.rD = r2
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r2 = r1.eF
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r3 = r1.rE
            r2.registerAdLivePlayStateListener(r3)
            return
    }

    static long a(com.kwad.components.ad.reward.f.a r2) {
            long r0 = r2.rD
            return r0
    }

    static void a(com.kwad.components.ad.reward.f.a r0, com.kwad.sdk.g.a r1) {
            r0.a(r1)
            return
    }

    private void a(com.kwad.components.core.video.g r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.components.core.video.g> r0 = r1.rC
            r0.add(r2)
        L7:
            return
    }

    private void a(com.kwad.sdk.g.a<com.kwad.components.core.video.g> r3) {
            r2 = this;
            if (r3 == 0) goto L18
            java.util.List<com.kwad.components.core.video.g> r0 = r2.rC
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.kwad.components.core.video.g r1 = (com.kwad.components.core.video.g) r1
            r3.accept(r1)
            goto L8
        L18:
            return
    }

    private void b(com.kwad.components.core.video.g r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.components.core.video.g> r0 = r1.rC
            r0.remove(r2)
        L7:
            return
    }

    private void hd() {
            r2 = this;
            java.util.List<com.kwad.components.core.video.g> r0 = r2.rC     // Catch: java.lang.Throwable -> L12
            r0.clear()     // Catch: java.lang.Throwable -> L12
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF     // Catch: java.lang.Throwable -> L12
            com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener r1 = r2.rE     // Catch: java.lang.Throwable -> L12
            r0.unRegisterAdLivePlayStateListener(r1)     // Catch: java.lang.Throwable -> L12
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF     // Catch: java.lang.Throwable -> L12
            r0.onDestroy()     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }

    @Override
    public final void a(com.kwad.components.core.video.h r1) {
            r0 = this;
            com.kwad.components.core.video.g r1 = (com.kwad.components.core.video.g) r1
            r0.b(r1)
            return
    }

    @Override
    public final void b(com.kwad.components.core.video.h r1) {
            r0 = this;
            com.kwad.components.core.video.g r1 = (com.kwad.components.core.video.g) r1
            r0.a(r1)
            return
    }

    public final com.kwad.components.offline.api.core.adlive.model.LiveShopItemInfo getCurrentShowShopItemInfo() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            com.kwad.components.offline.api.core.adlive.model.LiveShopItemInfo r0 = r0.getCurrentShowShopItemInfo()
            return r0
    }

    @Override
    public final long getPlayDuration() {
            r2 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r2.eF
            long r0 = r0.getPlayDuration()
            return r0
    }

    public final void onPause() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.onPause()
            return
    }

    public final void onResume() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.onResume()
            return
    }

    @Override
    public final void pause() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.pause()
            return
    }

    public final void registerAdLiveCallerContextListener(com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r2) {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.registerAdLiveCallerContextListener(r2)
            return
    }

    @Override
    public final void release() {
            r0 = this;
            super.release()
            r0.hd()
            return
    }

    public final void removeInterceptor(com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor r2) {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.removeInterceptor(r2)
            return
    }

    @Override
    public final void resume() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.resume()
            return
    }

    @Override
    public final void setAudioEnabled(boolean r2, boolean r3) {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.setAudioEnabled(r2, r3)
            return
    }

    @Override
    public final void skipToEnd() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.skipToEnd()
            return
    }

    public final void unRegisterAdLiveCallerContextListener(com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener r2) {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.IAdLivePlayModule r0 = r1.eF
            r0.unRegisterAdLiveCallerContextListener(r2)
            return
    }
}
