package com.kwad.components.ad.fullscreen.c.a;

import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private TextView gB;
    private String gC;
    private long gD;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private boolean gE = false;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.fullscreen.c.a.b.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", b.this.qx.mAdTemplate).equals(str)) {
                b.this.bU();
            }
        }
    };
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.fullscreen.c.a.b.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            b.this.f(j2);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.gD = com.kwad.sdk.core.response.b.c.bS(adTemplate);
        String strBT = com.kwad.sdk.core.response.b.c.bT(this.mAdTemplate);
        this.gC = strBT;
        if (TextUtils.isEmpty(strBT)) {
            return;
        }
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        this.qx.oV.a(this.mVideoPlayStateListener);
    }

    private void bV() {
        if (this.gB.getVisibility() == 0) {
            return;
        }
        String strBT = com.kwad.sdk.core.response.b.c.bT(this.mAdTemplate);
        if (TextUtils.isEmpty(strBT)) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_element_pv").aK(this.mAdTemplate).W("ELEMENT_PLAY_DETAIL_CALL_IMPRESSION", null).report();
            return;
        }
        this.gB.setText(strBT);
        this.gB.setVisibility(0);
        this.gB.setOnClickListener(this);
        bW();
    }

    private void bW() {
        com.kwad.sdk.core.report.a.b(this.mAdTemplate, 18, this.qx.mReportExtData);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f(long j) {
        if (j >= this.gD) {
            bV();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyAdClick() {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(40), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        boolean zC = com.kwad.components.ad.reward.j.c(this.qx);
        this.gE = zC;
        if (zC) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.gB) {
            com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).an(40).am(1).am(false).al(this.qx.fP()).ao(1).a(new a.b() { // from class: com.kwad.components.ad.fullscreen.c.a.b.3
                @Override // com.kwad.components.core.e.d.a.b
                public final void onAdClicked() {
                    b.this.notifyAdClick();
                }
            }));
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.gB = (TextView) findViewById(R.id.ksad_detail_call_btn);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
        this.gB = null;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        if (!TextUtils.isEmpty(this.gC)) {
            this.qx.oV.b(this.mVideoPlayStateListener);
        }
        if (this.gE) {
            com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        }
    }
}
