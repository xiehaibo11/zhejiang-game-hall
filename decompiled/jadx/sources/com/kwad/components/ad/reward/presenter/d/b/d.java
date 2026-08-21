package com.kwad.components.ad.reward.presenter.d.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener, c {
    private static final String[] vV = {"未获得奖励", "已获得奖励1/2", "已获得全部奖励"};
    private e gt = new e() { // from class: com.kwad.components.ad.reward.presenter.d.b.d.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", d.this.qx.mAdTemplate).equals(str)) {
                d.this.bU();
            }
        }
    };
    private final com.kwad.components.ad.reward.e.j mRewardVerifyListener = new com.kwad.components.ad.reward.e.j() { // from class: com.kwad.components.ad.reward.presenter.d.b.d.2
        @Override // com.kwad.components.ad.reward.e.j
        public final void onRewardVerify() {
            if (com.kwad.components.ad.reward.j.t(d.this.qx.mAdTemplate)) {
                d.this.iM();
            }
        }
    };
    private ViewGroup vR;
    private ImageView vS;
    private ViewGroup vT;
    private TextView vU;

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        com.kwad.components.ad.reward.c.ft().a(this.mRewardVerifyListener);
        this.vR.setVisibility(0);
        this.vT.setVisibility(com.kwad.components.ad.reward.j.t(this.qx.mAdTemplate) ? 0 : 8);
    }

    private void iL() {
        ImageView imageView = this.vS;
        if (imageView != null) {
            imageView.setVisibility(0);
            this.vS.setOnClickListener(this);
        }
        ViewGroup viewGroup = this.vR;
        if (viewGroup != null) {
            viewGroup.setOnClickListener(this);
            this.vR.setVisibility(0);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iM() {
        this.vU.setText(vV[2]);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyAdClick() {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, (String) null, (String) null, new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(41), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.d.b.c
    public final void iJ() {
        if (this.qx.pu) {
            if (com.kwad.sdk.core.response.b.a.ak(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate))) {
                this.vT.setVisibility(8);
            }
        } else if (com.kwad.components.ad.reward.j.r(this.qx.mAdTemplate) || com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate)) {
            if (this.qx.gc()) {
                return;
            }
            this.vU.setText(this.qx.pp ? vV[1] : vV[0]);
        } else if (this.qx.gc()) {
            iL();
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.vS || view == this.vR) {
            com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.qx.mAdTemplate).b(this.qx.mApkDownloadHelper).am(false).ao(2).a(new a.b() { // from class: com.kwad.components.ad.reward.presenter.d.b.d.3
                @Override // com.kwad.components.core.e.d.a.b
                public final void onAdClicked() {
                    d.this.notifyAdClick();
                }
            }));
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.vR = (ViewGroup) findViewById(R.id.ksad_end_reward_icon_layout);
        this.vS = (ImageView) findViewById(R.id.ksad_end_reward_icon);
        this.vT = (ViewGroup) findViewById(R.id.ksad_detail_reward_deep_task_view_playend);
        this.vU = (TextView) findViewById(R.id.ksad_reward_deep_task_count_down_playend);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.ad.reward.c.ft().b(this.mRewardVerifyListener);
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.vR.setVisibility(8);
        this.vS.setVisibility(8);
        this.vT.setVisibility(8);
    }
}
