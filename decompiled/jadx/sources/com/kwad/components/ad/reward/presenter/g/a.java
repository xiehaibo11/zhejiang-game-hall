package com.kwad.components.ad.reward.presenter.g;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import com.kwad.components.ad.reward.e.j;
import com.kwad.components.ad.reward.k.d;
import com.kwad.components.ad.reward.m.c;
import com.kwad.components.ad.reward.m.e;
import com.kwad.components.ad.reward.m.q;
import com.kwad.sdk.R;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.widget.KSFrameLayout;
import com.kwad.sdk.widget.f;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a implements c.a, com.kwad.sdk.core.webview.d.a.a, com.kwad.sdk.widget.c {
    private final j mRewardVerifyListener = new j() { // from class: com.kwad.components.ad.reward.presenter.g.a.1
        @Override // com.kwad.components.ad.reward.e.j
        public final void onRewardVerify() {
            if (a.this.xc != null) {
                a.this.xc.jV();
            }
            if (a.this.xd != null) {
                a.this.xd.jV();
            }
        }
    };
    private com.kwad.components.ad.reward.k.a.a pB;
    private ViewGroup wY;
    private q wZ;
    private ViewGroup xa;
    private e xb;
    private c xc;
    private c xd;

    private void a(AdBaseFrameLayout adBaseFrameLayout) {
        Context context;
        float f;
        getContext();
        if (!ai.IN()) {
            com.kwad.sdk.core.e.c.d("LandPageOpenTaskPresenter", "initBottomActionBar screen is horizontal");
            return;
        }
        ((ViewStub) findViewById(R.id.ksad_reward_apk_info_stub)).inflate();
        KSFrameLayout kSFrameLayout = (KSFrameLayout) findViewById(R.id.ksad_reward_apk_info_card_root);
        kSFrameLayout.setRadius(getContext().getResources().getDimension(R.dimen.ksad_reward_apk_info_card_step_icon_radius));
        int size = com.kwad.sdk.core.response.b.c.bX(this.qx.mAdTemplate).size();
        kSFrameLayout.setRatio(0.0f);
        if (size == 0) {
            context = getContext();
            f = 136.0f;
        } else {
            context = getContext();
            f = 155.0f;
        }
        com.kwad.sdk.d.a.a.m(kSFrameLayout, com.kwad.sdk.d.a.a.a(context, f));
        ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_reward_apk_info_card_native_container);
        this.xa = viewGroup;
        viewGroup.setClickable(true);
        new f(this.xa, this);
        c cVar = new c(this.xa);
        this.xc = cVar;
        cVar.a(this);
        this.xc.c(this.qx.mAdTemplate, true);
        e eVar = new e((KsAdWebView) findViewById(R.id.ksad_reward_apk_info_card_h5), this.xa, null, this);
        this.xb = eVar;
        eVar.a(this.qx.mAdTemplate, adBaseFrameLayout);
    }

    private void c(View view, boolean z) {
        int id = view.getId();
        if (id == R.id.ksad_reward_apk_info_card_native_container || id == R.id.ksad_activity_apk_info_area_native) {
            d(z, 2);
        }
    }

    private void d(boolean z, int i) {
        this.qx.a(1, getContext(), z ? 1 : 153, i);
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        c(view, true);
    }

    @Override // com.kwad.sdk.core.webview.d.a.a
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        com.kwad.sdk.core.e.c.d("LandPageOpenTaskPresenter", "onBind");
        if (com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate)) {
            this.pB = d.jF();
            this.qx.pB = this.pB;
            com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
            AdBaseFrameLayout adBaseFrameLayout = (AdBaseFrameLayout) findViewById(R.id.ksad_root_container);
            ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_activity_apk_info_area_native);
            this.wY = viewGroup;
            if (viewGroup != null) {
                viewGroup.setClickable(true);
                this.wY.setVisibility(8);
                new f(this.wY, this);
                c cVar = new c(this.wY);
                this.xd = cVar;
                cVar.a(this);
                this.xd.c(this.qx.mAdTemplate, false);
                ((KSFrameLayout) findViewById(R.id.ksad_right_area_webview_container)).setWidthBasedRatio(false);
                q qVar = new q((KsAdWebView) findViewById(R.id.ksad_right_area_webview), this.wY, null, this);
                this.wZ = qVar;
                qVar.a(this.qx.mAdTemplate, adBaseFrameLayout);
            }
            a(adBaseFrameLayout);
        }
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.qx.mAdTemplate)) {
            c(view, false);
        }
    }

    @Override // com.kwad.components.ad.reward.m.c.a
    public final void c(boolean z, int i) {
        d(z, 1);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.e.c.d("LandPageOpenTaskPresenter", "onUnbind");
        e eVar = this.xb;
        if (eVar != null) {
            eVar.jX();
            this.xb = null;
        }
        c cVar = this.xd;
        if (cVar != null) {
            cVar.jU();
        }
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        this.qx.pB = null;
    }
}
