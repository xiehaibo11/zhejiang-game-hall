package com.kwad.components.ad.interstitial.aggregate;

import android.support.v4.view.PagerAdapter;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsInterstitialAd;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends PagerAdapter {
    private final KsAdVideoPlayConfig dJ;
    private final com.kwad.components.ad.interstitial.d hG;
    private final boolean hH;
    private b hI;
    private InterfaceC0106a hJ;
    private final KsInterstitialAd.AdInteractionListener hz;
    private final List<AdTemplate> mAdTemplateList = new ArrayList();

    /* JADX INFO: renamed from: com.kwad.components.ad.interstitial.aggregate.a$a, reason: collision with other inner class name */
    public interface InterfaceC0106a {
        void cl();
    }

    public interface b {
        void a(com.kwad.components.ad.interstitial.f.c cVar, int i);
    }

    public a(AdTemplate adTemplate, com.kwad.components.ad.interstitial.d dVar, KsAdVideoPlayConfig ksAdVideoPlayConfig, KsInterstitialAd.AdInteractionListener adInteractionListener) {
        this.hG = dVar;
        this.dJ = ksAdVideoPlayConfig;
        this.hz = adInteractionListener;
        this.hH = com.kwad.sdk.core.response.b.a.cd(com.kwad.sdk.core.response.b.d.cg(adTemplate)) == 1;
    }

    public final void a(InterfaceC0106a interfaceC0106a) {
        this.hJ = interfaceC0106a;
    }

    public final void a(b bVar) {
        this.hI = bVar;
    }

    @Override // android.support.v4.view.PagerAdapter
    public final void destroyItem(ViewGroup viewGroup, int i, Object obj) {
        if (obj instanceof View) {
            viewGroup.removeView((View) obj);
        }
    }

    @Override // android.support.v4.view.PagerAdapter
    public final int getCount() {
        return this.mAdTemplateList.size();
    }

    @Override // android.support.v4.view.PagerAdapter
    public final Object instantiateItem(ViewGroup viewGroup, int i) {
        com.kwad.components.ad.interstitial.f.c cVar = new com.kwad.components.ad.interstitial.f.c(viewGroup.getContext());
        viewGroup.addView(cVar);
        cVar.setAggregateAdView(i > 0);
        if (i == 0) {
            cVar.setAdConvertListener(new c.a() { // from class: com.kwad.components.ad.interstitial.aggregate.a.1
                @Override // com.kwad.components.ad.interstitial.d.c.a
                public final void ck() {
                    if (a.this.hJ != null) {
                        a.this.hJ.cl();
                    }
                }
            });
        }
        if (i > 0) {
            int i2 = 7;
            if (i == 1 && this.hH) {
                i2 = 8;
            }
            cVar.setAggregateShowTriggerType(i2);
        }
        cVar.a(this.mAdTemplateList.get(i), this.hG, this.dJ, this.hz);
        b bVar = this.hI;
        if (bVar != null) {
            bVar.a(cVar, i);
        }
        return cVar;
    }

    @Override // android.support.v4.view.PagerAdapter
    public final boolean isViewFromObject(View view, Object obj) {
        return view == obj;
    }

    public final void setAdTemplateList(List<AdTemplate> list) {
        if (list == null || list.size() <= 0) {
            return;
        }
        this.mAdTemplateList.clear();
        this.mAdTemplateList.addAll(list);
    }
}
