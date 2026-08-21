package com.kwad.components.ad.reward.presenter.platdetail.a;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.os.Message;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.n;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bn;

public final class a extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener, bn.a {
    private static final String[] vg = {"%ss后获得奖励1", "已获得奖励1/2", "已获得全部奖励"};
    private TextView gv;
    private bn gx;
    private boolean gy;
    private long gz;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private TextView vc;
    private ImageView vd;
    private View ve;
    private boolean vf = false;
    private boolean vh = false;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", a.this.qx.mAdTemplate).equals(str)) {
                a.this.bU();
            }
        }
    };
    private final l mVideoPlayStateListener = new l() {
        @Override
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            if (a.this.gy) {
                return;
            }
            a.this.gx.sendEmptyMessageDelayed(1, 500L);
        }

        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            long jA = com.kwad.components.ad.reward.j.a(j, a.this.mAdInfo);
            a.this.gz = j2;
            a.this.a(jA, j2);
        }
    };
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener = new com.kwad.components.ad.reward.e.j() {
        @Override
        public final void onRewardVerify() {
            a.a(a.this, true);
            a.this.vc.setText(a.vg[2]);
        }
    };

    private void a(long j, long j2, long j3) {
        if (j < (j2 - 800) - j3) {
            int i = (int) (((j2 - j) / 1000.0f) + 0.5f);
            w(i);
            if (this.qx.pt != null) {
                this.qx.pt.U(i);
                return;
            }
            return;
        }
        this.qx.pp = true;
        if (!com.kwad.components.ad.reward.j.t(this.mAdTemplate)) {
            notifyRewardVerify();
            ir();
            if (this.qx.pt != null) {
                this.qx.pt.U(0);
                return;
            }
            return;
        }
        if (!com.kwad.components.ad.reward.j.r(this.mAdTemplate) || this.qx.pA == null) {
            if (com.kwad.components.ad.reward.j.s(this.mAdTemplate) && this.qx.pB != null && !this.qx.pB.jH()) {
                this.qx.pB.jG();
            }
        } else if (!this.qx.pA.jH()) {
            this.qx.pA.jG();
        }
        if (this.vh) {
            return;
        }
        this.vc.setText(vg[1]);
        is();
    }

    static boolean a(a aVar, boolean z) {
        aVar.vh = true;
        return true;
    }

    private void bU() {
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        long jA = com.kwad.components.ad.reward.j.a(com.kwad.sdk.core.response.b.a.H(this.mAdInfo), this.mAdInfo) / 1000;
        if (com.kwad.components.ad.reward.j.t(this.mAdTemplate)) {
            this.ve.setVisibility(0);
            this.ve.setOnClickListener(this);
            this.vc.setText(String.format(vg[0], Long.valueOf(jA)));
            this.gv.setVisibility(8);
        } else {
            this.ve.setVisibility(8);
            this.gv.setText(String.valueOf(jA));
            this.gv.setVisibility(0);
            this.gv.setAlpha(1.0f);
        }
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.qx.oV.a(this.mVideoPlayStateListener);
    }

    private void ir() {
        if (this.vf) {
            return;
        }
        this.vf = true;
        this.vd.setAlpha(0.0f);
        this.vd.setVisibility(0);
        this.vd.setOnClickListener(this);
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.addListener(new AnimatorListenerAdapter() {
            @Override
            public final void onAnimationEnd(Animator animator) {
                a.this.gv.setVisibility(8);
            }
        });
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                a.this.gv.setAlpha(1.0f - fFloatValue);
                a.this.vd.setAlpha(fFloatValue);
            }
        });
        valueAnimatorOfFloat.start();
    }

    private void is() {
        if (this.qx.mAdRewardStepListener != null) {
            this.qx.mAdRewardStepListener.fy();
        }
    }

    private void notifyAdClick() {
        com.kwad.components.ad.reward.i.b.a(this.mAdTemplate, "native_id", "playTopBar-style1", new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(41), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    private void notifyRewardVerify() {
        this.qx.mAdOpenInteractionListener.onRewardVerify();
    }

    private void w(int i) {
        this.qx.pC = i;
        if (!com.kwad.components.ad.reward.j.t(this.mAdTemplate)) {
            this.gv.setText(String.valueOf(i));
        } else {
            if (this.vh) {
                return;
            }
            this.vc.setText(String.format(vg[0], Integer.valueOf(i)));
        }
    }

    public final void a(long j, long j2) {
        long jAE = (com.kwad.sdk.core.response.b.a.aG(this.mAdInfo) && com.kwad.components.core.r.a.pS().pT() == 0 ? com.kwad.sdk.core.response.b.a.aE(this.mAdInfo) : com.kwad.sdk.core.response.b.a.aC(this.mAdInfo)) * (this.qx.pm ? 1000 : 0);
        n.a(this.qx, j2, j, jAE);
        a(j2, j, jAE);
    }

    @Override
    public final void a(Message message) {
        if (message.what == 1) {
            if (this.qx.gb() || this.qx.ga()) {
                this.gx.sendEmptyMessageDelayed(1, 500L);
                return;
            }
            this.gz += 500;
            a(com.kwad.sdk.core.response.b.a.Y(this.mAdInfo), this.gz);
            this.gx.sendEmptyMessageDelayed(1, 500L);
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.gx = new bn(this);
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            return;
        }
        bU();
        if (this.qx.oV.jR()) {
            w((int) (com.kwad.sdk.core.response.b.a.Y(this.mAdInfo) / 1000.0f));
        }
    }

    @Override
    public final void onClick(View view) {
        if (view == this.vd || view == this.ve) {
            com.kwad.components.core.e.d.a.a(new a.a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(2).s(this.qx.oV.getPlayDuration()).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    a.this.notifyAdClick();
                }
            }));
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.gv = (TextView) findViewById(R.id.ksad_video_count_down);
        this.vd = (ImageView) findViewById(R.id.ksad_detail_reward_icon);
        this.vc = (TextView) findViewById(R.id.ksad_reward_deep_task_count_down);
        this.ve = findViewById(R.id.ksad_detail_reward_deep_task_view);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        this.qx.oV.b(this.mVideoPlayStateListener);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.vd.setVisibility(8);
        this.ve.setVisibility(8);
        this.vf = false;
        this.vh = false;
        this.gy = false;
    }
}
