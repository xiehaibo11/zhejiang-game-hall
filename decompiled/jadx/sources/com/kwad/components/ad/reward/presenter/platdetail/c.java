package com.kwad.components.ad.reward.presenter.platdetail;

import android.graphics.Color;
import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.f;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.reward.presenter.a implements com.kwad.sdk.widget.c {
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private DetailVideoView mDetailVideoView;

    /* JADX INFO: Access modifiers changed from: private */
    public void M(boolean z) {
        com.kwad.components.ad.reward.i.b.a(this.mAdTemplate, "native_id", "videoPlayer", new j().cg(z ? 85 : 153).c(this.qx.mRootContainer.getTouchCoords()), this.qx.mReportExtData);
        this.qx.mAdOpenInteractionListener.bE();
    }

    private void b(View view, final boolean z) {
        com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.mAdTemplate).a(new a.b() { // from class: com.kwad.components.ad.reward.presenter.platdetail.c.1
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                c.this.M(z);
            }
        }).b(this.mApkDownloadHelper).am(false).ao(3));
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        b(view, true);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdTemplate = this.qx.mAdTemplate;
        this.mApkDownloadHelper = this.qx.mApkDownloadHelper;
        new f(this.mDetailVideoView, this);
        this.mDetailVideoView.setBackgroundColor(Color.parseColor(com.kwad.sdk.core.response.b.a.aR(d.cg(this.mAdTemplate)) ? "#B3000000" : "#4D000000"));
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.mDetailVideoView = (DetailVideoView) findViewById(R.id.ksad_video_player);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.mDetailVideoView.setClickListener(null);
    }
}
