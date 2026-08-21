package com.kwad.components.ad.reward.presenter.platdetail.actionbar;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.content.res.Resources;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.Interpolator;
import com.kwad.components.ad.reward.m.h;
import com.kwad.components.ad.reward.m.r;
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
import com.kwad.sdk.utils.ai;

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
    private final l ss = new l() {
        @Override
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            b.this.uA = true;
            if (!com.kwad.sdk.core.response.b.a.cw(b.this.mAdInfo) || b.this.uy == null) {
                return;
            }
            b.this.uy.setVisibility(8);
        }

        @Override
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            b.this.uA = false;
            if (!com.kwad.sdk.core.response.b.a.cw(b.this.mAdInfo) || b.this.uy == null) {
                return;
            }
            b.this.uy.setVisibility(0);
        }
    };
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-bottom-card-v2", b.this.qx.mAdTemplate).equals(str)) {
                b.this.bU();
            }
        }
    };
    private RewardActionBarControl.b uB = new RewardActionBarControl.b() {
        @Override
        public final void a(boolean z, a aVar) {
            b.this.uv = true;
            b.this.a(z, aVar);
        }
    };
    private com.kwad.components.ad.reward.e.f uC = new com.kwad.components.ad.reward.e.a() {
        @Override
        public final void bD() {
            b.this.uv = false;
            b.this.N(false);
        }
    };

    private void N(boolean z) {
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

    /* JADX WARN: Removed duplicated region for block: B:30:0x009a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(boolean z, a aVar) {
        ViewGroup viewGroupGQ;
        RewardActionBarControl.ShowActionBarResult showActionBarResult;
        ViewGroup viewGroup;
        if (this.uu) {
            return;
        }
        this.uu = true;
        this.so.setVisibility(com.kwad.sdk.core.response.b.a.cw(this.mAdInfo) ? 8 : 0);
        getContext();
        final boolean z2 = !ai.IN();
        if (com.kwad.sdk.core.response.b.a.aV(this.mAdInfo)) {
            if (this.uz == null) {
                h hVar = new h() {
                    @Override
                    public final int if() {
                        return z2 ? R.id.ksad_common_app_card_land_stub : super.if();
                    }
                };
                this.uz = hVar;
                hVar.a(new h.a() {
                    @Override
                    public final void ig() {
                        b.this.qx.a(1, b.this.getContext(), 29, 1);
                    }

                    @Override
                    public final void ih() {
                        b.this.qx.a(1, b.this.getContext(), 30, 2);
                    }

                    @Override
                    public final void ii() {
                        b.this.qx.a(1, b.this.getContext(), 31, 2);
                    }

                    @Override
                    public final void ij() {
                        b.this.qx.a(1, b.this.getContext(), 32, 2);
                    }

                    @Override
                    public final void ik() {
                        b.this.qx.a(1, b.this.getContext(), 84, 2);
                    }

                    @Override
                    public final void il() {
                        b.this.qx.a(1, b.this.getContext(), 53, 2);
                    }
                });
                this.uz.f((ViewGroup) getRootView());
                this.uz.b(r.a(this.mAdTemplate, this.mApkDownloadHelper));
            }
            this.uz.show();
            viewGroupGQ = this.uz.gQ();
            showActionBarResult = RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_PLAYABLE_PORTRAIT;
        } else if (com.kwad.sdk.core.response.b.a.bL(this.mAdInfo) == 1 && (viewGroup = this.uw) != null) {
            viewGroup.setVisibility(0);
            viewGroupGQ = this.uw;
            showActionBarResult = RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_JINNIU;
        } else if (com.kwad.sdk.core.response.b.a.cw(this.mAdInfo)) {
            ViewGroup viewGroup2 = (ViewGroup) findViewById(R.id.ksad_reward_origin_live_root);
            this.uy = viewGroup2;
            if (viewGroup2 == null) {
                if (com.kwad.sdk.core.response.b.a.aN(this.mAdTemplate)) {
                    ViewGroup viewGroup3 = (ViewGroup) findViewById(R.id.ksad_reward_live_subscribe_root);
                    this.ux = viewGroup3;
                    if (viewGroup3 != null) {
                        Resources resources = viewGroup3.getResources();
                        e(this.ux, (int) (resources.getDimension(R.dimen.ksad_live_subscribe_card_full_height) + resources.getDimension(R.dimen.ksad_live_subscribe_card_margin)));
                        viewGroupGQ = this.ux;
                        showActionBarResult = RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_LIVE_SUBSCRIBE;
                    }
                }
                if (!com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
                    d(z, aVar);
                    return;
                } else if (this.qx.mScreenOrientation == 1) {
                    b(z, aVar);
                    return;
                } else {
                    c(z, aVar);
                    return;
                }
            }
            if (!this.uA) {
                viewGroup2.setVisibility(0);
            }
            viewGroupGQ = this.uy;
            showActionBarResult = RewardActionBarControl.ShowActionBarResult.SHOW_NATIVE_ORIGIN_LIVE;
        }
        RewardActionBarControl.a(aVar, viewGroupGQ, showActionBarResult);
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
        this.ur.a(this.mAdTemplate, this.mApkDownloadHelper, new ActionBarAppLandscape.a() {
            @Override
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

    private void bU() {
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
        this.us.a(this.mAdTemplate, this.mApkDownloadHelper, new ActionBarAppPortrait.a() {
            @Override
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
        this.ut.a(this.mAdTemplate, new ActionBarH5.a() {
            @Override
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
        this.cL.addListener(new AnimatorListenerAdapter() {
            @Override
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
        this.cL.addListener(new AnimatorListenerAdapter() {
            @Override
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
        this.cL.addListener(new AnimatorListenerAdapter() {
            @Override
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

    @Override
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.d(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            this.qx.oV.a(this.ss);
            bU();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.so = (KsLogoView) findViewById(R.id.ksad_ad_label_play_bar);
        this.ut = (ActionBarH5) findViewById(R.id.ksad_video_play_bar_h5);
    }

    @Override
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
