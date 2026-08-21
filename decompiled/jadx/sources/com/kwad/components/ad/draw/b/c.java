package com.kwad.components.ad.draw.b;

import android.animation.ValueAnimator;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.DecelerateInterpolator;
import android.widget.TextView;
import com.kwad.components.ad.draw.view.DrawDownloadProgressBar;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.t.m;
import com.kwad.components.core.video.k;
import com.kwad.components.core.video.l;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends com.kwad.components.ad.draw.a.a implements View.OnClickListener {
    private ViewGroup ce;
    private TextView cf;
    private TextView cg;
    private TextView ch;
    private DrawDownloadProgressBar ci;
    private ValueAnimator cj;
    private int ck;
    private int cl;

    /* JADX INFO: renamed from: cm, reason: collision with root package name */
    private int f2813cm;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private KsLogoView mLogoView;
    private k mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.draw.b.c.1
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            if (j2 >= c.this.f2813cm * 1000) {
                c.this.bE.bX.an();
            } else if (j2 >= c.this.cl * 1000) {
                c.this.al();
            } else if (j2 >= c.this.ck * 1000) {
                c.this.aj();
            }
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
        }
    };

    /* JADX INFO: renamed from: cn, reason: collision with root package name */
    private KsAppDownloadListener f2814cn = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.ad.draw.b.c.2
        @Override // com.kwad.sdk.api.KsAppDownloadListener
        public final void onDownloadFailed() {
            c.this.ch.setText(com.kwad.sdk.core.response.b.a.aw(c.this.mAdInfo));
            c.this.ci.e(com.kwad.sdk.core.response.b.a.aw(c.this.mAdInfo), c.this.ci.getMax());
        }

        @Override // com.kwad.sdk.api.KsAppDownloadListener
        public final void onDownloadFinished() {
            c.this.ch.setText(com.kwad.sdk.core.response.b.a.aM(c.this.mAdTemplate));
            c.this.ci.e(com.kwad.sdk.core.response.b.a.aM(c.this.mAdTemplate), c.this.ci.getMax());
        }

        @Override // com.kwad.sdk.api.KsAppDownloadListener
        public final void onIdle() {
            c.this.ch.setText(com.kwad.sdk.core.response.b.a.aw(c.this.mAdInfo));
            c.this.ci.e(com.kwad.sdk.core.response.b.a.aw(c.this.mAdInfo), c.this.ci.getMax());
        }

        @Override // com.kwad.sdk.api.KsAppDownloadListener
        public final void onInstalled() {
            c.this.ch.setText(com.kwad.sdk.core.response.b.a.U(c.this.mAdInfo));
            c.this.ci.e(com.kwad.sdk.core.response.b.a.U(c.this.mAdInfo), c.this.ci.getMax());
        }

        @Override // com.kwad.sdk.core.download.a.a
        public final void onPaused(int i) {
            super.onPaused(i);
            c.this.ch.setText(com.kwad.sdk.core.response.b.a.Cz());
            c.this.ci.e(com.kwad.sdk.core.response.b.a.Cz(), i);
        }

        @Override // com.kwad.sdk.api.KsAppDownloadListener
        public final void onProgressUpdate(int i) {
            c.this.ch.setText(i + "%");
            c.this.ci.e(i + "%", i);
        }
    };

    private void a(boolean z, int i) {
        com.kwad.components.core.e.d.a.a(new a.C0150a(this.ce.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(i).am(z).a(new a.b() { // from class: com.kwad.components.ad.draw.b.c.3
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(c.this.mAdTemplate, 1, c.this.bE.mRootContainer.getTouchCoords());
                if (c.this.bE.bD != null) {
                    c.this.bE.bD.onAdClicked();
                }
            }
        }));
    }

    private void ai() {
        this.ck = com.kwad.sdk.core.response.b.a.bf(this.mAdInfo);
        this.cl = com.kwad.sdk.core.response.b.a.bg(this.mAdInfo);
        this.f2813cm = com.kwad.sdk.core.response.b.a.bh(this.mAdInfo);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void aj() {
        if (this.ch.getVisibility() == 0 || this.ci.getVisibility() == 0) {
            return;
        }
        this.ch.setOnClickListener(this);
        this.ch.setVisibility(0);
        TextView textView = this.ch;
        ValueAnimator valueAnimatorB = m.b(textView, 0, com.kwad.sdk.d.a.a.a(textView.getContext(), 44.0f));
        this.cj = valueAnimatorB;
        valueAnimatorB.setInterpolator(new DecelerateInterpolator(2.0f));
        this.cj.setDuration(300L);
        this.cj.start();
    }

    private void ak() {
        ValueAnimator valueAnimator = this.cj;
        if (valueAnimator != null) {
            valueAnimator.removeAllListeners();
            this.cj.cancel();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void al() {
        if (this.ci.getVisibility() == 0) {
            return;
        }
        this.ci.setOnClickListener(this);
        this.ci.setVisibility(0);
        this.ch.setVisibility(8);
    }

    @Override // com.kwad.components.ad.draw.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.bE.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mApkDownloadHelper = this.bE.mApkDownloadHelper;
        ai();
        this.mLogoView.aa(this.mAdTemplate);
        this.ch.setText(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo));
        this.ch.setVisibility(8);
        this.ci.e(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo), this.ci.getMax());
        this.ci.setVisibility(8);
        this.ce.setVisibility(0);
        this.ce.setOnClickListener(this);
        if (com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
            this.cf.setText(com.kwad.sdk.core.response.b.a.ao(this.mAdInfo));
            this.cf.setVisibility(0);
            com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
            if (cVar != null) {
                cVar.b(this.f2814cn);
            }
        } else {
            this.cf.setVisibility(8);
        }
        this.cg.setText(com.kwad.sdk.core.response.b.a.an(this.mAdInfo));
        this.bE.bF.b(this.mVideoPlayStateListener);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.ce) {
            al();
            a(false, 2);
        } else if (view == this.ch) {
            al();
            a(true, 1);
        } else if (view == this.ci) {
            a(true, 1);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.ce = (ViewGroup) findViewById(R.id.ksad_ad_normal_container);
        this.cf = (TextView) findViewById(R.id.ksad_ad_normal_title);
        this.cg = (TextView) findViewById(R.id.ksad_ad_normal_des);
        this.mLogoView = (KsLogoView) findViewById(R.id.ksad_ad_normal_logo);
        this.ch = (TextView) findViewById(R.id.ksad_ad_normal_convert_btn);
        DrawDownloadProgressBar drawDownloadProgressBar = (DrawDownloadProgressBar) findViewById(R.id.ksad_ad_light_convert_btn);
        this.ci = drawDownloadProgressBar;
        drawDownloadProgressBar.setTextSize(16);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        KsAppDownloadListener ksAppDownloadListener;
        super.onUnbind();
        ak();
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null && (ksAppDownloadListener = this.f2814cn) != null) {
            cVar.c(ksAppDownloadListener);
        }
        this.bE.bF.a(this.mVideoPlayStateListener);
    }
}
