package com.kwad.components.ad.reward.f;

import com.kwad.components.core.video.g;
import com.kwad.components.offline.api.core.adlive.IAdLivePlayModule;
import com.kwad.components.offline.api.core.adlive.listener.AdLiveCallerContextListener;
import com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener;
import com.kwad.components.offline.api.core.adlive.listener.OnAdLiveResumeInterceptor;
import com.kwad.components.offline.api.core.adlive.model.LiveShopItemInfo;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.j.a<g> {
    private IAdLivePlayModule eF;
    private List<g> rC;
    private long rD;
    private AdLivePlayStateListener rE;

    public a(AdTemplate adTemplate, IAdLivePlayModule iAdLivePlayModule) {
        super(adTemplate);
        this.rC = new CopyOnWriteArrayList();
        this.rE = new AdLivePlayStateListener() { // from class: com.kwad.components.ad.reward.f.a.1
            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLiveAudioEnableChange(final boolean z) {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.8
                    @Override // com.kwad.sdk.g.a
                    public final /* bridge */ /* synthetic */ void accept(g gVar) {
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayCompleted() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.6
                    private static void c(g gVar) {
                        gVar.onMediaPlayCompleted();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayEnd() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.7
                    private static void c(g gVar) {
                        gVar.onLivePlayEnd();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayPause() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.5
                    private static void c(g gVar) {
                        gVar.onMediaPlayPaused();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayProgress(final long j) {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.2
                    /* JADX INFO: Access modifiers changed from: private */
                    @Override // com.kwad.sdk.g.a
                    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
                    public void accept(g gVar) {
                        gVar.onMediaPlayProgress(a.this.rD, j);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayResume() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.4
                    private static void c(g gVar) {
                        gVar.onLivePlayResume();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePlayStart() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.3
                    private static void c(g gVar) {
                        gVar.onMediaPlayStart();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override // com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener
            public final void onLivePrepared() {
                a.this.a(new com.kwad.sdk.g.a<g>() { // from class: com.kwad.components.ad.reward.f.a.1.1
                    private static void c(g gVar) {
                        gVar.onMediaPrepared();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(g gVar) {
                        c(gVar);
                    }
                });
            }
        };
        this.eF = iAdLivePlayModule;
        this.rD = com.kwad.sdk.core.response.b.a.Y(d.cg(adTemplate));
        this.eF.registerAdLivePlayStateListener(this.rE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.components.ad.j.a
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void b(g gVar) {
        if (gVar != null) {
            this.rC.add(gVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(com.kwad.sdk.g.a<g> aVar) {
        if (aVar != null) {
            Iterator<g> it = this.rC.iterator();
            while (it.hasNext()) {
                aVar.accept(it.next());
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.components.ad.j.a
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public void a(g gVar) {
        if (gVar != null) {
            this.rC.remove(gVar);
        }
    }

    private void hd() {
        try {
            this.rC.clear();
            this.eF.unRegisterAdLivePlayStateListener(this.rE);
            this.eF.onDestroy();
        } catch (Throwable th) {
            c.printStackTraceOnly(th);
        }
    }

    public final LiveShopItemInfo getCurrentShowShopItemInfo() {
        return this.eF.getCurrentShowShopItemInfo();
    }

    @Override // com.kwad.components.ad.j.a
    public final long getPlayDuration() {
        return this.eF.getPlayDuration();
    }

    public final void onPause() {
        this.eF.onPause();
    }

    public final void onResume() {
        this.eF.onResume();
    }

    @Override // com.kwad.components.ad.j.a
    public final void pause() {
        this.eF.pause();
    }

    public final void registerAdLiveCallerContextListener(AdLiveCallerContextListener adLiveCallerContextListener) {
        this.eF.registerAdLiveCallerContextListener(adLiveCallerContextListener);
    }

    @Override // com.kwad.components.ad.j.a
    public final void release() {
        super.release();
        hd();
    }

    public final void removeInterceptor(OnAdLiveResumeInterceptor onAdLiveResumeInterceptor) {
        this.eF.removeInterceptor(onAdLiveResumeInterceptor);
    }

    @Override // com.kwad.components.ad.j.a
    public final void resume() {
        this.eF.resume();
    }

    @Override // com.kwad.components.ad.j.a
    public final void setAudioEnabled(boolean z, boolean z2) {
        this.eF.setAudioEnabled(z, z2);
    }

    @Override // com.kwad.components.ad.j.a
    public final void skipToEnd() {
        this.eF.skipToEnd();
    }

    public final void unRegisterAdLiveCallerContextListener(AdLiveCallerContextListener adLiveCallerContextListener) {
        this.eF.unRegisterAdLiveCallerContextListener(adLiveCallerContextListener);
    }
}
