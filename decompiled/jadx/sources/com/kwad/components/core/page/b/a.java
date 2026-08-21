package com.kwad.components.core.page.b;

import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.widget.FeedVideoView;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.mvp.Presenter;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends Presenter {
    private int ML;
    private FeedVideoView MM;

    @Override // com.kwad.sdk.mvp.Presenter
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
        this.MM.setOnEndBtnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.b.a.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
                    if (eVar.JG != null) {
                        com.kwad.components.core.e.d.a.a(new a.C0150a(a.this.getActivity()).am(false).an(false).ar(true).P(eVar.adTemplate).ap(false));
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
            this.MM.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.b.a.2
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
                        if (eVar.JG != null) {
                            com.kwad.components.core.e.d.a.a(new a.C0150a(a.this.getActivity()).am(false).an(false).ar(true).P(eVar.adTemplate).ap(false));
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
        this.MM.setWindowFullScreenListener(new FeedVideoView.a() { // from class: com.kwad.components.core.page.b.a.3
            @Override // com.kwad.components.core.widget.FeedVideoView.a
            public final void oG() {
                if (eVar.Oj != null) {
                    a.this.ML = eVar.Oj.computeVerticalScrollOffset();
                }
            }

            @Override // com.kwad.components.core.widget.FeedVideoView.a
            public final void oH() {
                if (eVar.Oj != null) {
                    eVar.Oj.scrollToPosition(a.this.ML);
                }
            }
        });
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.MM.release();
    }
}
