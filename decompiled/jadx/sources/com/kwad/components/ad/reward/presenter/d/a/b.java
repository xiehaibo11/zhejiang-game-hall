package com.kwad.components.ad.reward.presenter.d.a;

import android.graphics.drawable.Drawable;
import android.view.ViewGroup;
import android.view.ViewStub;
import com.kwad.components.ad.reward.e.f;
import com.kwad.components.ad.reward.e.j;
import com.kwad.components.ad.reward.m.k;
import com.kwad.components.ad.reward.widget.tailframe.TailFrameView;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a implements ah.b {
    private com.kwad.components.ad.k.b bY;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private DetailVideoView mDetailVideoView;
    private TailFrameView vB;
    private volatile boolean vC;
    private boolean vD;
    private k vE;
    private Drawable vH;
    private boolean sO = false;
    private int vF = Integer.MIN_VALUE;
    private int vG = Integer.MIN_VALUE;
    private final j mRewardVerifyListener = new j() { // from class: com.kwad.components.ad.reward.presenter.d.a.b.1
        @Override // com.kwad.components.ad.reward.e.j
        public final void onRewardVerify() {
            b.this.iB();
            if (b.this.vB == null || !com.kwad.components.ad.reward.j.t(b.this.mAdTemplate)) {
                return;
            }
            b.this.vB.jV();
        }
    };
    private f mPlayEndPageListener = new com.kwad.components.ad.reward.e.a() { // from class: com.kwad.components.ad.reward.presenter.d.a.b.2
        @Override // com.kwad.components.ad.reward.e.f
        public final void bD() {
            if ((!d.cu(b.this.mAdTemplate) && b.this.sO && !b.this.qx.fX()) || b.this.qx.pu || b.this.qx.pz) {
                return;
            }
            b.this.vD = true;
            if (b.this.bY != null && b.this.bY.ap()) {
                b.this.vD = false;
            }
            b.this.qx.pL = true ^ b.this.vD;
            if (b.this.vD) {
                if (b.this.qx.oZ != null) {
                    com.kwad.components.ad.reward.monitor.a.a(b.this.qx.pj, "end_card", com.kwad.sdk.core.response.b.b.bj(b.this.mAdTemplate), System.currentTimeMillis() - b.this.qx.oZ.getLoadTime(), 1);
                }
                b.this.aG();
            }
        }

        @Override // com.kwad.components.ad.reward.e.a, com.kwad.components.ad.reward.e.f
        public final int getPriority() {
            return -1;
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void M(boolean z) {
        com.kwad.components.ad.reward.i.b.a(this.mAdTemplate, "native_id", (String) null, new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(z ? 2 : 153), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    private void O(int i) {
        ViewGroup.LayoutParams layoutParams = this.mDetailVideoView.getLayoutParams();
        if (layoutParams != null) {
            layoutParams.width = i;
            this.mDetailVideoView.setLayoutParams(layoutParams);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aG() {
        iB();
        this.vB.a(new com.kwad.components.ad.reward.widget.tailframe.b() { // from class: com.kwad.components.ad.reward.presenter.d.a.b.3
            @Override // com.kwad.components.ad.reward.widget.tailframe.b
            public final void P(boolean z) {
                b.this.M(z);
            }
        });
        this.vB.setVisibility(0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iB() {
        if (this.vC) {
            return;
        }
        iC();
    }

    private void iC() {
        com.kwad.sdk.core.e.c.d("RewardPlayEndNativeCardPresenter", "initTailView");
        this.vB.a(getContext(), this.qx.mScreenOrientation == 0, iF());
        this.vC = true;
    }

    private void iE() {
        if (this.vD) {
            iB();
            this.vB.destroy();
            this.vB.setVisibility(8);
            this.vE.hide();
        }
    }

    private boolean iF() {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = com.kwad.sdk.core.response.b.a.aN(this.mAdInfo);
        return materialFeatureAN.height > materialFeatureAN.width;
    }

    @Override // com.kwad.components.core.webview.jshandler.ah.b
    public final void a(ah.a aVar) {
        this.sO = aVar.isSuccess();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        k kVar;
        super.ah();
        if (this.qx.oX != null) {
            this.qx.oX.a(this);
        }
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = d.cg(adTemplate);
        this.bY = this.qx.oZ;
        this.qx.b(this.mPlayEndPageListener);
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.vB.setCallerContext(this.qx);
        ViewStub viewStub = (ViewStub) findViewById(R.id.ksad_playend_native_jinniu);
        if (viewStub != null) {
            kVar = new k(this.qx, viewStub);
        } else {
            kVar = new k(this.qx, (ViewGroup) findViewById(R.id.ksad_reward_jinniu_end_card_root));
        }
        this.vE = kVar;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.vB = (TailFrameView) findViewById(R.id.ksad_video_tail_frame);
        DetailVideoView detailVideoView = (DetailVideoView) findViewById(R.id.ksad_video_player);
        this.mDetailVideoView = detailVideoView;
        if (detailVideoView.getLayoutTransition() != null) {
            this.mDetailVideoView.getLayoutTransition().enableTransitionType(4);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        if (this.qx.oX != null) {
            this.qx.oX.b(this);
        }
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        iE();
        this.qx.c(this.mPlayEndPageListener);
        DetailVideoView detailVideoView = this.mDetailVideoView;
        if (detailVideoView != null) {
            int i = this.vG;
            if (i != Integer.MIN_VALUE) {
                detailVideoView.updateTextureViewGravity(i);
            }
            com.kwad.sdk.core.e.c.d("RewardPlayEndNativeCardPresenter", "onUnbind:  videoOriginalWidth :" + this.vF);
            int i2 = this.vF;
            if (i2 != Integer.MIN_VALUE) {
                O(i2);
            }
            Drawable drawable = this.vH;
            if (drawable != null) {
                this.mDetailVideoView.setBackground(drawable);
            }
        }
    }
}
