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

public final class a extends com.kwad.components.ad.j.a<g> {
    private IAdLivePlayModule eF;
    private List<g> rC;
    private long rD;
    private AdLivePlayStateListener rE;

    public a(AdTemplate adTemplate, IAdLivePlayModule iAdLivePlayModule) {
        super(adTemplate);
        this.rC = new CopyOnWriteArrayList();
        this.rE = new AdLivePlayStateListener() {
            @Override
            public final void onLiveAudioEnableChange(final boolean z) {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    @Override
                    public final void accept(g gVar) {
                    }
                });
            }

            @Override
            public final void onLivePlayCompleted() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onMediaPlayCompleted();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override
            public final void onLivePlayEnd() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onLivePlayEnd();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override
            public final void onLivePlayPause() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onMediaPlayPaused();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override
            public final void onLivePlayProgress(final long j) {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    @Override
                    private void accept(g gVar) {
                        gVar.onMediaPlayProgress(a.this.rD, j);
                    }
                });
            }

            @Override
            public final void onLivePlayResume() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onLivePlayResume();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override
            public final void onLivePlayStart() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onMediaPlayStart();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }

            @Override
            public final void onLivePrepared() {
                a.this.a(new com.kwad.sdk.g.a<g>() {
                    private static void c(g gVar) {
                        gVar.onMediaPrepared();
                    }

                    @Override
                    public final void accept(g gVar) {
                        c(gVar);
                    }
                });
            }
        };
        this.eF = iAdLivePlayModule;
        this.rD = com.kwad.sdk.core.response.b.a.Y(d.cg(adTemplate));
        this.eF.registerAdLivePlayStateListener(this.rE);
    }

    @Override
    private void b(g gVar) {
        if (gVar != null) {
            this.rC.add(gVar);
        }
    }

    private void a(com.kwad.sdk.g.a<g> aVar) {
        if (aVar != null) {
            Iterator<g> it = this.rC.iterator();
            while (it.hasNext()) {
                aVar.accept(it.next());
            }
        }
    }

    @Override
    private void a(g gVar) {
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

    @Override
    public final long getPlayDuration() {
        return this.eF.getPlayDuration();
    }

    public final void onPause() {
        this.eF.onPause();
    }

    public final void onResume() {
        this.eF.onResume();
    }

    @Override
    public final void pause() {
        this.eF.pause();
    }

    public final void registerAdLiveCallerContextListener(AdLiveCallerContextListener adLiveCallerContextListener) {
        this.eF.registerAdLiveCallerContextListener(adLiveCallerContextListener);
    }

    @Override
    public final void release() {
        super.release();
        hd();
    }

    public final void removeInterceptor(OnAdLiveResumeInterceptor onAdLiveResumeInterceptor) {
        this.eF.removeInterceptor(onAdLiveResumeInterceptor);
    }

    @Override
    public final void resume() {
        this.eF.resume();
    }

    @Override
    public final void setAudioEnabled(boolean z, boolean z2) {
        this.eF.setAudioEnabled(z, z2);
    }

    @Override
    public final void skipToEnd() {
        this.eF.skipToEnd();
    }

    public final void unRegisterAdLiveCallerContextListener(AdLiveCallerContextListener adLiveCallerContextListener) {
        this.eF.unRegisterAdLiveCallerContextListener(adLiveCallerContextListener);
    }
}
