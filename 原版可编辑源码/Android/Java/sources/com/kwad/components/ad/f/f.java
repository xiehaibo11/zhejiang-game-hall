package com.kwad.components.ad.f;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import com.kwad.components.ad.f.b.g;
import com.kwad.components.ad.f.b.h;
import com.kwad.components.ad.f.b.i;
import com.kwad.components.ad.f.b.k;
import com.kwad.components.ad.f.d;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBasePvFrameLayout;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.l;
import com.kwad.sdk.widget.KSFrameLayout;
import com.kwad.sdk.widget.j;

public final class f extends KSFrameLayout {
    private com.kwad.components.core.widget.a.b bG;
    private j ct;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private DetailVideoView mDetailVideoView;
    private d.a mE;
    private Presenter mPresenter;
    private AdBasePvFrameLayout mQ;
    private com.kwad.components.ad.f.a.b mV;
    private com.kwad.components.ad.f.c.a mW;
    private KsAdVideoPlayConfig mX;
    private KsNativeAd.VideoPlayListener mz;

    public f(Context context) {
        this(context, null);
    }

    private f(Context context, AttributeSet attributeSet) {
        this(context, null, 0);
    }

    private f(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, 0);
        this.ct = new j() {
            @Override
            public final void am() {
                l.cB(f.this.mAdTemplate);
            }
        };
        D(context);
    }

    private void D(Context context) {
        com.kwad.sdk.m.l.inflate(context, R.layout.ksad_native_video_layout, this);
        AdBasePvFrameLayout adBasePvFrameLayout = (AdBasePvFrameLayout) findViewById(R.id.ksad_root_container);
        this.mQ = adBasePvFrameLayout;
        DetailVideoView detailVideoView = (DetailVideoView) adBasePvFrameLayout.findViewById(R.id.ksad_video_player);
        this.mDetailVideoView = detailVideoView;
        detailVideoView.setAd(true);
    }

    private Presenter ad() {
        Presenter presenter = new Presenter();
        presenter.a(new com.kwad.components.ad.f.b.e());
        presenter.a(new com.kwad.components.ad.f.b.c());
        presenter.a(new i());
        presenter.a(new com.kwad.components.ad.f.b.j());
        presenter.a(new com.kwad.components.ad.f.b.d());
        presenter.a(new com.kwad.components.ad.f.b.b());
        presenter.a(new k());
        presenter.a(new com.kwad.components.ad.f.b.a(this.mX));
        presenter.a(new g());
        presenter.a(com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) ? new com.kwad.components.ad.f.b.f() : new h());
        return presenter;
    }

    private com.kwad.components.ad.f.a.b eM() {
        com.kwad.components.ad.f.a.b bVar = new com.kwad.components.ad.f.a.b();
        bVar.mQ = this.mQ;
        bVar.mAdTemplate = this.mAdTemplate;
        bVar.mE = this.mE;
        bVar.mz = this.mz;
        bVar.mApkDownloadHelper = (this.mApkDownloadHelper == null && com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) ? new com.kwad.components.core.e.d.c(this.mAdTemplate) : this.mApkDownloadHelper;
        bVar.mW = this.mW;
        return bVar;
    }

    public final void a(AdTemplate adTemplate, com.kwad.components.core.e.d.c cVar, KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        this.mAdTemplate = adTemplate;
        this.mApkDownloadHelper = cVar;
        this.mX = ksAdVideoPlayConfig;
        this.mQ.setVisibleListener(this.ct);
        this.bG = new com.kwad.components.core.widget.a.b(getParent() == null ? this : (View) getParent(), 30);
    }

    @Override
    public final void aa() {
        super.aa();
        if (this.mW == null) {
            this.mW = new com.kwad.components.ad.f.c.a(this.mAdTemplate, this.bG, this.mDetailVideoView, this.mX);
        }
        this.mV = eM();
        Presenter presenterAd = ad();
        this.mPresenter = presenterAd;
        presenterAd.F(this.mQ);
        this.mPresenter.k(this.mV);
        this.bG.sy();
        this.mW.aH();
    }

    @Override
    public final void ab() {
        super.ab();
        com.kwad.components.core.widget.a.b bVar = this.bG;
        if (bVar != null) {
            bVar.release();
        }
        com.kwad.components.ad.f.c.a aVar = this.mW;
        if (aVar != null) {
            aVar.aI();
        }
        com.kwad.components.ad.f.a.b bVar2 = this.mV;
        if (bVar2 != null) {
            bVar2.release();
        }
        Presenter presenter = this.mPresenter;
        if (presenter != null) {
            presenter.destroy();
        }
    }

    public final void setInnerAdInteractionListener(d.a aVar) {
        this.mE = aVar;
    }

    public final void setVideoPlayListener(KsNativeAd.VideoPlayListener videoPlayListener) {
        this.mz = videoPlayListener;
    }
}
