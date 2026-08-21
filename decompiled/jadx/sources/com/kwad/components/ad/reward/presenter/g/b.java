package com.kwad.components.ad.reward.presenter.g;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import com.kwad.components.ad.reward.e.j;
import com.kwad.components.ad.reward.m.c;
import com.kwad.components.ad.reward.m.e;
import com.kwad.components.ad.reward.m.q;
import com.kwad.sdk.R;
import com.kwad.sdk.core.c.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.v;
import com.kwad.sdk.widget.KSFrameLayout;
import com.kwad.sdk.widget.f;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a implements c.a, com.kwad.sdk.b.a, com.kwad.sdk.core.webview.d.a.a, com.kwad.sdk.widget.c {
    private static float xf = 0.4548105f;
    private AdInfo mAdInfo;
    private com.kwad.components.ad.reward.k.b.a pA;
    private ViewGroup wY;
    private q wZ;
    private ViewGroup xa;
    private e xb;
    private c xc;
    private c xd;
    private int xg = 15;
    private long xh = -1;
    private boolean xi = false;
    private final j mRewardVerifyListener = new j() { // from class: com.kwad.components.ad.reward.presenter.g.b.3
        @Override // com.kwad.components.ad.reward.e.j
        public final void onRewardVerify() {
            if (b.this.xc != null && com.kwad.components.ad.reward.j.t(b.this.qx.mAdTemplate)) {
                b.this.xc.jV();
            }
            if (b.this.xd != null) {
                b.this.xd.jV();
            }
        }
    };
    private com.kwad.sdk.core.c.c xj = new d() { // from class: com.kwad.components.ad.reward.presenter.g.b.4
        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        public final void onBackToBackground() {
            super.onBackToBackground();
            b.this.Y(false);
        }

        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
        public final void onBackToForeground() {
            super.onBackToForeground();
            b.this.Y(true);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void Y(boolean z) {
        com.kwad.components.ad.reward.k.b.a aVar;
        com.kwad.components.ad.reward.k.b.a.a(this.pA, getContext(), this.qx.mAdTemplate);
        if (!this.pA.jM()) {
            if (z) {
                Z(false);
            }
        } else {
            if (!z) {
                this.xh = System.currentTimeMillis();
                return;
            }
            boolean zJk = jk();
            if (zJk && (aVar = this.pA) != null) {
                aVar.jL();
                com.kwad.components.ad.reward.c.ft().notifyRewardVerify();
                this.qx.mAdOpenInteractionListener.onRewardVerify();
            }
            Z(zJk);
        }
    }

    private void Z(boolean z) {
        com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "showTaskToast hasShowCompletedToast: " + this.xi + " completed: " + z);
        if (this.xi) {
            return;
        }
        v.d(getContext(), z ? "恭喜！任务达标啦，成功获取奖励~" : "哎呀，差一点就达标啦，再试一次~", 0);
        if (z) {
            this.xi = true;
        }
    }

    private void a(AdBaseFrameLayout adBaseFrameLayout) {
        getContext();
        if (!ai.IN()) {
            com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "initBottomActionBar screen is horizontal");
            return;
        }
        ((ViewStub) findViewById(R.id.ksad_reward_apk_info_stub)).inflate();
        ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_reward_apk_info_card_native_container);
        this.xa = viewGroup;
        viewGroup.setClickable(true);
        new f(this.xa, this);
        final KSFrameLayout kSFrameLayout = (KSFrameLayout) findViewById(R.id.ksad_reward_apk_info_card_root);
        kSFrameLayout.setRadius(getContext().getResources().getDimension(R.dimen.ksad_reward_apk_info_card_step_icon_radius));
        final float dimension = getContext().getResources().getDimension(R.dimen.ksad_reward_apk_info_card_height);
        kSFrameLayout.post(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.g.b.1
            @Override // java.lang.Runnable
            public final void run() {
                kSFrameLayout.getHeight();
            }
        });
        ViewGroup viewGroup2 = (ViewGroup) findViewById(R.id.ksad_reward_apk_info_card_native_container);
        this.xa = viewGroup2;
        c cVar = new c(viewGroup2);
        this.xc = cVar;
        cVar.a(this.qx.mApkDownloadHelper);
        this.xc.a(this);
        this.xc.c(this.qx.mAdTemplate, false);
        e eVar = new e((KsAdWebView) findViewById(R.id.ksad_reward_apk_info_card_h5), this.xa, this.qx.mApkDownloadHelper, this);
        this.xb = eVar;
        eVar.a(new com.kwad.components.ad.reward.m.f() { // from class: com.kwad.components.ad.reward.presenter.g.b.2
            @Override // com.kwad.components.ad.reward.m.f
            public final void h(String str, int i) {
                com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "onUpdateDownloadProgress downloadStatus: " + com.kwad.sdk.core.response.b.d.cg(b.this.qx.mAdTemplate).status);
                b.this.xc.i(str, i);
            }
        });
        this.xb.a(this.qx.mAdTemplate, adBaseFrameLayout);
    }

    private void aa(boolean z) {
        this.qx.a(1, getContext(), z ? 1 : 153, 1);
    }

    private boolean jk() {
        com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "checkUseAppTime appBackgroundTimestamp: " + this.xh);
        return this.xh >= 0 && System.currentTimeMillis() - this.xh > ((long) (this.xg * 1000));
    }

    @Override // com.kwad.sdk.b.a
    public final void S(String str) {
        if (TextUtils.equals(com.kwad.sdk.core.response.b.a.aq(this.mAdInfo), str) && this.qx.pA != null && com.kwad.components.ad.reward.j.r(this.qx.mAdTemplate)) {
            this.qx.pA.jJ();
            com.kwad.sdk.core.c.b.AU();
            if (com.kwad.sdk.core.c.b.isAppOnForeground()) {
                return;
            }
            this.xh = System.currentTimeMillis();
        }
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        aa(true);
    }

    @Override // com.kwad.sdk.core.webview.d.a.a
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "onBind");
        if (com.kwad.components.ad.reward.j.r(this.qx.mAdTemplate)) {
            this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
            this.xg = com.kwad.components.ad.reward.a.b.gE();
            com.kwad.sdk.core.c.b.AU();
            com.kwad.sdk.core.c.b.a(this.xj);
            com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
            this.pA = com.kwad.components.ad.reward.k.d.jE();
            this.qx.pA = this.pA;
            com.kwad.components.ad.reward.k.b.a.a(this.pA, getContext(), this.qx.mAdTemplate);
            AdBaseFrameLayout adBaseFrameLayout = (AdBaseFrameLayout) findViewById(R.id.ksad_root_container);
            ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ksad_activity_apk_info_area_native);
            this.wY = viewGroup;
            if (viewGroup != null) {
                viewGroup.setVisibility(8);
                c cVar = new c(this.wY);
                this.xd = cVar;
                cVar.a(this.qx.mApkDownloadHelper);
                this.xd.a(this);
                this.xd.c(this.qx.mAdTemplate, false);
                ((KSFrameLayout) findViewById(R.id.ksad_right_area_webview_container)).setWidthBasedRatio(false);
                q qVar = new q((KsAdWebView) findViewById(R.id.ksad_right_area_webview), this.wY, this.qx.mApkDownloadHelper, this);
                this.wZ = qVar;
                qVar.a(this.qx.mAdTemplate, adBaseFrameLayout);
            }
            com.kwad.sdk.b.b.yB().a(this);
            a(adBaseFrameLayout);
        }
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.qx.mAdTemplate)) {
            aa(false);
        }
    }

    @Override // com.kwad.components.ad.reward.m.c.a
    public final void c(boolean z, int i) {
        this.qx.b(1, getContext(), z ? 1 : 153, 1);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.e.c.d("LaunchAppTaskPresenter", "onUnbind");
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.b(this.xj);
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        com.kwad.sdk.b.b.yB().b(this);
        e eVar = this.xb;
        if (eVar != null) {
            eVar.jX();
            this.xb = null;
        }
        c cVar = this.xd;
        if (cVar != null) {
            cVar.jU();
        }
        this.qx.pA = null;
    }
}
