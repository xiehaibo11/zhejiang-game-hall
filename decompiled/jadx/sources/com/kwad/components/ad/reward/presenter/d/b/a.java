package com.kwad.components.ad.reward.presenter.d.b;

import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.webview.b.e.e;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.KSLoggerReporter;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener, c {
    private e gt = new e() { // from class: com.kwad.components.ad.reward.presenter.d.b.a.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", a.this.qx.mAdTemplate).equals(str)) {
                a.b(a.this);
            }
        }
    };
    private TextView vK;
    private TextView vL;

    static /* synthetic */ void b(a aVar) {
    }

    private void bW() {
        com.kwad.sdk.core.report.a.b(this.qx.mAdTemplate, 17, this.qx.mReportExtData);
    }

    private void iH() {
        TextView textView;
        String strBU = com.kwad.sdk.core.response.b.c.bU(this.qx.mAdTemplate);
        if (TextUtils.isEmpty(strBU)) {
            KSLoggerReporter.ReportClient.RESPONE_MONITOR.buildNormalApmReporter().dx("response_biz_error_element_pv").aK(this.qx.mAdTemplate).W("ELEMENT_PLAY_END_CALL_IMPRESSION", null).report();
            return;
        }
        if (this.qx.mScreenOrientation == 1) {
            this.vL.setVisibility(8);
            this.vK.setText(strBU);
            this.vK.setVisibility(0);
            textView = this.vK;
        } else {
            this.vK.setVisibility(8);
            this.vL.setText(strBU);
            this.vL.setVisibility(0);
            textView = this.vL;
        }
        textView.setOnClickListener(this);
        bW();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void iI() {
        com.kwad.components.ad.reward.i.b.a(this.qx.mAdTemplate, "native_id", "endTopBar", new com.kwad.sdk.core.report.j().c(this.qx.mRootContainer.getTouchCoords()).cg(39), this.qx.mReportExtData);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyAdClick() {
        this.qx.mAdOpenInteractionListener.bE();
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.d.b.c
    public final void iJ() {
        if (this.qx.pu) {
            return;
        }
        iH();
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.vK || view == this.vL) {
            com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.qx.mAdTemplate).b(this.qx.mApkDownloadHelper).am(false).ao(1).a(new a.b() { // from class: com.kwad.components.ad.reward.presenter.d.b.a.2
                @Override // com.kwad.components.core.e.d.a.b
                public final void onAdClicked() {
                    a.this.iI();
                    a.this.notifyAdClick();
                }
            }));
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.vK = (TextView) findViewById(R.id.ksad_end_left_call_btn);
        this.vL = (TextView) findViewById(R.id.ksad_end_right_call_btn);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.vK.setVisibility(8);
        this.vL.setVisibility(8);
    }
}
