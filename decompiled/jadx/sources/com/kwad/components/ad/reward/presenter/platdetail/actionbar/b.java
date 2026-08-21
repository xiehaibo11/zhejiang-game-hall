package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import com.kwad.components.ad.reward.m.h;
import com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl;
import com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape;
import com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait;
import com.kwad.components.ad.reward.widget.actionbar.ActionBarH5;
import com.kwad.components.core.t.m;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a {
    private ValueAnimator cL;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private RewardActionBarControl oY;
    private KsLogoView so;
    private boolean uA;
    private ActionBarAppLandscape ur;
    private ActionBarAppPortrait us;
    private ActionBarH5 ut;
    private boolean uv;
    private ViewGroup uw;
    private ViewGroup ux;
    private ViewGroup uy;
    private h uz;
    private boolean uu = false;
    private final l ss = new l() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.g
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            b.this.uA = true;
            if (!com.kwad.sdk.core.response.b.a.cw(b.this.mAdInfo) || b.this.uy == null) {
                return;
            }
            b.this.uy.setVisibility(8);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            b.this.uA = false;
            if (!com.kwad.sdk.core.response.b.a.cw(b.this.mAdInfo) || b.this.uy == null) {
                return;
            }
            b.this.uy.setVisibility(0);
        }
    };
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.5
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-bottom-card-v2", b.this.qx.mAdTemplate).equals(str)) {
                b.this.bU();
            }
        }
    };
    private RewardActionBarControl.b uB = new RewardActionBarControl.b() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.6
        @Override // com.kwad.components.ad.reward.presenter.platdetail.actionbar.RewardActionBarControl.b
        public final void a(boolean z, a aVar) {
            b.this.uv = true;
            b.this.a(z, aVar);
        }
    };
    private com.kwad.components.ad.reward.e.f uC = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.7
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            b.this.uv = false;
            b.this.N(false);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void N(boolean z) {
        View view;
        if (this.uu) {
            this.uu = false;
            this.so.setVisibility(8);
            ViewGroup viewGroup = this.uw;
            if (viewGroup != null) {
                viewGroup.setVisibility(8);
            }
            ViewGroup viewGroup2 = this.uy;
            if (viewGroup2 != null) {
                viewGroup2.setVisibility(8);
            }
            if (com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
                if (this.qx.mScreenOrientation == 1) {
                    if (z) {
                        id();
                        return;
                    } else {
                        ie();
                        return;
                    }
                }
                if (!z) {
                    ActionBarAppPortrait actionBarAppPortrait = this.us;
                    if (actionBarAppPortrait != null) {
                        actionBarAppPortrait.setVisibility(8);
                        return;
                    }
                    return;
                }
                view = this.us;
                if (view == null) {
                    return;
                }
            } else {
                if (!z) {
                    this.ut.setVisibility(8);
                    return;
                }
                view = this.ut;
            }
            g(view, com.kwad.sdk.d.a.a.a(getContext(), 90.0f));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:30:0x009a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(boolean r5, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a r6) {
        /*
            Method dump skipped, instruction units count: 228
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.a(boolean, com.kwad.components.ad.reward.presenter.platdetail.actionbar.a):void");
    }

    private void aE() {
        ValueAnimator valueAnimator = this.cL;
        if (valueAnimator != null) {
            valueAnimator.removeAllListeners();
            this.cL.cancel();
        }
    }

    private void b(boolean z, a aVar) {
        ib();
        this.ur.a(this.mAdTemplate, this.mApkDownloadHelper, new ActionBarAppLandscape.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.10
            @Override // com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape.a
            public final void P(boolean z2) {
                b.this.O(z2);
            }
        });
        if (z) {
            f(this.ur, com.kwad.sdk.d.a.a.a(getContext(), 90.0f));
        } else {
            this.ur.setVisibility(0);
        }
        RewardActionBarControl.a(aVar, this.ur, RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        if (com.kwad.sdk.core.response.b.a.cq(adInfoCg)) {
            this.uw = (ViewGroup) findViewById(R.id.ksad_reward_jinniu_root);
        }
        this.so.aa(this.mAdTemplate);
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        RewardActionBarControl rewardActionBarControl = this.qx.oY;
        this.oY = rewardActionBarControl;
        rewardActionBarControl.a(this.uB);
        this.qx.b(this.uC);
    }

    private void c(boolean z, a aVar) {
        ic();
        this.us.a(this.mAdTemplate, this.mApkDownloadHelper, new ActionBarAppPortrait.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.11
            @Override // com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.a
            public final void P(boolean z2) {
                b.this.O(z2);
            }
        });
        if (z) {
            f(this.us, com.kwad.sdk.d.a.a.a(getContext(), 90.0f));
        } else {
            this.us.setVisibility(0);
        }
        RewardActionBarControl.a(aVar, this.us, RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT);
    }

    private void d(boolean z, a aVar) {
        this.ut.a(this.mAdTemplate, new ActionBarH5.a() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.12
            @Override // com.kwad.components.ad.reward.widget.actionbar.ActionBarH5.a
            public final void P(boolean z2) {
                b.this.O(z2);
            }
        });
        if (z) {
            f(this.ut, com.kwad.sdk.d.a.a.a(getContext(), 90.0f));
        } else {
            this.ut.setVisibility(0);
        }
        RewardActionBarControl.a(aVar, this.ut, RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_DEFAULT);
    }

    private void e(final View view, int i) {
        aE();
        view.setVisibility(0);
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        ValueAnimator valueAnimatorC = m.c(view, i, 0);
        this.cL = valueAnimatorC;
        valueAnimatorC.setInterpolator(interpolatorCreate);
        this.cL.setDuration(500L);
        this.cL.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                view.setVisibility(0);
            }
        });
        this.cL.start();
    }

    @Deprecated
    private void f(final View view, int i) {
        aE();
        view.setVisibility(0);
        ValueAnimator valueAnimatorB = m.b(view, 0, i);
        this.cL = valueAnimatorB;
        valueAnimatorB.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cL.setDuration(500L);
        this.cL.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.3
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                view.setVisibility(0);
            }
        });
        this.cL.start();
    }

    private void g(final View view, int i) {
        aE();
        view.setVisibility(0);
        ValueAnimator valueAnimatorB = m.b(view, i, 0);
        this.cL = valueAnimatorB;
        valueAnimatorB.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cL.setDuration(300L);
        this.cL.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.reward.presenter.platdetail.actionbar.b.4
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                view.setVisibility(8);
            }
        });
        this.cL.start();
    }

    private void ib() {
        ViewStub viewStub = (ViewStub) findViewById(R.id.view_stub_action_bar_landscape);
        this.ur = (ActionBarAppLandscape) (viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_video_play_bar_app_landscape));
    }

    private void ic() {
        ViewStub viewStub = (ViewStub) findViewById(R.id.view_stub_action_bar);
        this.us = (ActionBarAppPortrait) (viewStub != null ? viewStub.inflate() : findViewById(R.id.ksad_video_play_bar_app_portrait));
    }

    private void id() {
        ic();
        f(this.us, com.kwad.sdk.d.a.a.a(getContext(), 90.0f));
    }

    private void ie() {
        ActionBarAppPortrait actionBarAppPortrait = this.us;
        if (actionBarAppPortrait != null) {
            actionBarAppPortrait.setVisibility(8);
        }
    }

    protected final void O(boolean z) {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, "native_id", (String) null, new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(z ? 1 : 153), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.d(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            this.qx.oV.a(this.ss);
            bU();
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
        this.ut = (ActionBarH5) findViewById(R.id.ksad_video_play_bar_h5);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        RewardActionBarControl rewardActionBarControl = this.oY;
        if (rewardActionBarControl != null) {
            rewardActionBarControl.a((RewardActionBarControl.b) null);
        }
        this.qx.oV.b(this.ss);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.c(this.uC);
        aE();
    }
}
