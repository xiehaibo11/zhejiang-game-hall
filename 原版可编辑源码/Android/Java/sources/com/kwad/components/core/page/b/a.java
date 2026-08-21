package com.kwad.components.core.page.b;

import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.widget.FeedVideoView;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.mvp.Presenter;

public final class a extends Presenter {
    private int ML;
    private FeedVideoView MM;

    @Override
    public final void ah() {
        super.ah();
        final com.kwad.components.core.page.recycle.e eVar = (com.kwad.components.core.page.recycle.e) Gk();
        KsAdVideoPlayConfig ksAdVideoPlayConfigBuild = new KsAdVideoPlayConfig.Builder().videoSoundEnable(eVar.adTemplate.mIsAudioEnable).build();
        FeedVideoView feedVideoView = (FeedVideoView) getRootView();
        this.MM = feedVideoView;
        feedVideoView.b(eVar.adTemplate);
        this.MM.a(ksAdVideoPlayConfigBuild, eVar.JG);
        this.MM.setVisibility(0);
        final AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(eVar.adTemplate);
        this.MM.setOnEndBtnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
                    if (eVar.JG != null) {
                        com.kwad.components.core.e.d.a.a(new a.a(a.this.getActivity()).am(false).an(false).ar(true).P(eVar.adTemplate).ap(false));
                        com.kwad.sdk.core.report.a.a(eVar.adTemplate, 50, a.this.MM.getTouchCoords());
                        return;
                    }
                    return;
                }
                if (eVar.Oj == null || eVar.Oj.getAdapter() == null || eVar.Oj.getAdapter().getItemCount() <= 1) {
                    return;
                }
                eVar.Oj.scrollToPosition(1);
                com.kwad.sdk.core.report.a.a(eVar.adTemplate, 50, a.this.MM.getTouchCoords());
            }
        });
        if (com.kwad.sdk.core.response.b.a.ai(adInfoCg)) {
            this.MM.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
                        if (eVar.JG != null) {
                            com.kwad.components.core.e.d.a.a(new a.a(a.this.getActivity()).am(false).an(false).ar(true).P(eVar.adTemplate).ap(false));
                            com.kwad.sdk.core.report.a.a(eVar.adTemplate, 171, a.this.MM.getTouchCoords());
                            return;
                        }
                        return;
                    }
                    if (eVar.Oj == null || eVar.Oj.getAdapter() == null || eVar.Oj.getAdapter().getItemCount() <= 1) {
                        return;
                    }
                    eVar.Oj.scrollToPosition(1);
                    com.kwad.sdk.core.report.a.a(eVar.adTemplate, 171, a.this.MM.getTouchCoords());
                }
            });
        }
        this.MM.setWindowFullScreenListener(new FeedVideoView.a() {
            @Override
            public final void oG() {
                if (eVar.Oj != null) {
                    a.this.ML = eVar.Oj.computeVerticalScrollOffset();
                }
            }

            @Override
            public final void oH() {
                if (eVar.Oj != null) {
                    eVar.Oj.scrollToPosition(a.this.ML);
                }
            }
        });
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.MM.release();
    }
}
