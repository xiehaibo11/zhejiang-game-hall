package com.kwad.components.ad.interstitial.f;

import android.content.Context;
import android.util.AttributeSet;
import android.view.ViewGroup;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.ad.interstitial.d.i;
import com.kwad.components.ad.interstitial.d.k;
import com.kwad.components.ad.interstitial.f.f;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.mvp.Presenter;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.widget.KSFrameLayout;

public final class e extends a {
    private KsAdVideoPlayConfig dJ;
    private com.kwad.components.core.webview.b.e.e gt;
    private com.kwad.components.ad.interstitial.d hG;
    protected KsInterstitialAd.AdInteractionListener hz;
    protected com.kwad.components.ad.interstitial.d.c jf;
    private boolean jk;
    private c.a jl;
    private int ju;
    protected com.kwad.components.ad.interstitial.d.b lH;
    private boolean lI;
    protected ViewGroup lJ;
    protected AdInfo mAdInfo;
    protected AdTemplate mAdTemplate;

    public e(Context context) {
        this(context, null);
    }

    private e(Context context, AttributeSet attributeSet) {
        super(context, null);
        this.ju = -1;
        this.gt = new com.kwad.components.core.webview.b.e.e() {
            @Override
            public final void q(String str) {
                if (j.b("ksad-interstitial-card", e.this.mAdTemplate).equals(str)) {
                    e.a(e.this, false);
                    if (e.this.lH != null) {
                        e.this.lH.lI();
                    }
                    e eVar = e.this;
                    eVar.lH = eVar.er();
                    e.this.lH.F(e.this.lJ);
                    e.this.lH.k(e.this.jf);
                }
            }
        };
        this.lJ = (ViewGroup) l.inflate(context, getLayoutId(), this);
    }

    private f a(Context context, AdInfo adInfo, com.kwad.components.ad.interstitial.d.c cVar) {
        boolean zA = com.kwad.components.ad.interstitial.d.c.a(this.mContext, adInfo);
        f.a aVar = new f.a();
        aVar.v(zA);
        boolean z = true;
        aVar.w(!cVar.M(context) && com.kwad.components.ad.interstitial.a.b.cB());
        aVar.E(com.kwad.components.ad.interstitial.a.b.cC());
        if (com.kwad.sdk.core.response.b.a.aO(adInfo) && ai.IN()) {
            z = false;
        }
        aVar.x(z);
        return new f(context, aVar);
    }

    static boolean a(e eVar, boolean z) {
        eVar.lI = false;
        return false;
    }

    private com.kwad.components.ad.interstitial.d.c eq() {
        com.kwad.components.ad.interstitial.d.c cVar = new com.kwad.components.ad.interstitial.d.c();
        cVar.mAdTemplate = this.mAdTemplate;
        cVar.hz = this.hz;
        cVar.hG = this.hG;
        cVar.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate);
        cVar.dJ = this.dJ;
        cVar.ex = new com.kwad.sdk.core.video.videoview.a(this.mContext);
        cVar.jo = (KSFrameLayout) this.lJ.findViewById(R.id.ksad_container);
        cVar.hx = new com.kwad.components.ad.interstitial.e.b(cVar.jo, 100);
        cVar.hx.sy();
        cVar.ju = this.ju;
        cVar.jk = this.jk;
        cVar.jl = this.jl;
        cVar.gt = this.gt;
        cVar.jg = a(this.mContext, com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate), cVar);
        return cVar;
    }

    @Override
    public final void a(AdTemplate adTemplate, com.kwad.components.ad.interstitial.d dVar, KsAdVideoPlayConfig ksAdVideoPlayConfig, KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        adTemplate.realShowType = 2;
        this.dJ = ksAdVideoPlayConfig;
        this.hG = dVar;
        this.lI = com.kwad.sdk.core.response.b.b.bA(this.mAdTemplate);
        this.hz = adInteractionListener;
        this.jf = eq();
        if (this.lH == null) {
            this.lH = er();
        }
        this.lH.F(this.lJ);
        this.lH.k(this.jf);
    }

    @Override
    public final void cn() {
        com.kwad.components.ad.interstitial.d.b bVar = this.lH;
        if (bVar != null) {
            bVar.cN();
        }
    }

    @Override
    public final void co() {
        com.kwad.components.ad.interstitial.d.b bVar = this.lH;
        if (bVar != null) {
            bVar.cO();
        }
    }

    public final com.kwad.components.ad.interstitial.d.b er() {
        Presenter gVar;
        com.kwad.components.ad.interstitial.d.b bVar = new com.kwad.components.ad.interstitial.d.b();
        if (!this.lI) {
            bVar.a(new com.kwad.components.ad.interstitial.d.d());
            if (com.kwad.sdk.core.response.b.a.aU(this.mAdInfo)) {
                bVar.a(new com.kwad.components.ad.interstitial.d.j());
            }
            bVar.a(new k());
            bVar.a(new com.kwad.components.ad.interstitial.d.f());
            if (com.kwad.sdk.core.response.b.a.aH(this.mAdInfo)) {
                bVar.a(new com.kwad.components.ad.interstitial.d.a());
            }
            if (this.jf.M(getContext())) {
                gVar = new com.kwad.components.ad.interstitial.d.g();
            }
            bVar.a(new i());
            return bVar;
        }
        gVar = new com.kwad.components.ad.interstitial.d.a.b();
        bVar.a(gVar);
        bVar.a(new i());
        return bVar;
    }

    protected final int getLayoutId() {
        return R.layout.ksad_interstitial_vertical;
    }

    @Override
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            cVar.release();
        }
        com.kwad.components.ad.interstitial.d.b bVar = this.lH;
        if (bVar != null) {
            bVar.destroy();
        }
    }

    public final void setAdConvertListener(c.a aVar) {
        this.jl = aVar;
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            cVar.jl = aVar;
        }
    }

    @Override
    public final void setAdInteractionListener(KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.hz = adInteractionListener;
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            cVar.hz = adInteractionListener;
        }
    }

    public final void setAggregateAdView(boolean z) {
        this.jk = z;
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            cVar.jk = z;
        }
    }

    public final void setAggregateShowTriggerType(int i) {
        this.ju = i;
        com.kwad.components.ad.interstitial.d.c cVar = this.jf;
        if (cVar != null) {
            cVar.ju = i;
        }
    }
}
