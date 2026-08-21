package com.kwad.components.ad.reward.presenter.platdetail.a;

import android.text.TextUtils;
import android.view.View;
import android.widget.TextView;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class b extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private TextView gB;
    private long gD;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", b.this.qx.mAdTemplate).equals(str)) {
                b.this.bU();
            }
        }
    };
    private l mVideoPlayStateListener = new l() {
        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            b.this.f(j2);
        }
    };

    private void bU() {
        this.mAdTemplate = this.qx.mAdTemplate;
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        this.gD = com.kwad.sdk.core.response.b.c.bS(this.mAdTemplate);
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
        this.gB.post(new Runnable() {
            @Override
            public final void run() {
                b.this.bW();
            }
        });
    }

    private void bW() {
        this.qx.G("native_id");
    }

    private void f(long j) {
        if (j >= this.gD) {
            bV();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.b(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    @Override
    public final void onClick(View view) {
        if (view == this.gB) {
            this.qx.a(1, view.getContext(), 40, 1, this.qx.oV.getPlayDuration());
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        TextView textView = (TextView) findViewById(R.id.ksad_detail_call_btn);
        this.gB = textView;
        textView.setContentDescription("topBarCallLabel");
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.gB.setVisibility(8);
    }
}
