package com.kwad.components.ad.draw.view.playcard;

import android.animation.ValueAnimator;
import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.DecelerateInterpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.draw.view.DrawDownloadProgressBar;
import com.kwad.components.ad.widget.AppScoreView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.e.d.c;
import com.kwad.components.core.t.m;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;

public class DrawCardApp extends FrameLayout implements View.OnClickListener {
    private KsAppDownloadListener cn;
    private a da;
    private ImageView db;
    private ImageView dc;
    private TextView dd;
    private ViewGroup de;
    private AppScoreView df;
    private TextView dg;
    private TextView dh;
    private KsLogoView di;
    private DrawDownloadProgressBar dj;
    private ValueAnimator dk;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private c mApkDownloadHelper;
    private int mHeight;

    public interface a {
        void at();

        void au();
    }

    public DrawCardApp(Context context) {
        super(context);
        D(context);
    }

    public DrawCardApp(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        D(context);
    }

    public DrawCardApp(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        D(context);
    }

    private void D(Context context) {
        l.inflate(context, R.layout.ksad_draw_card_app, this);
        this.db = (ImageView) findViewById(R.id.ksad_card_app_close);
        this.dc = (ImageView) findViewById(R.id.ksad_card_app_icon);
        this.dd = (TextView) findViewById(R.id.ksad_card_app_name);
        this.de = (ViewGroup) findViewById(R.id.ksad_card_app_score_container);
        this.df = (AppScoreView) findViewById(R.id.ksad_card_app_score);
        this.dg = (TextView) findViewById(R.id.ksad_card_app_download_count);
        this.dh = (TextView) findViewById(R.id.ksad_card_app_desc);
        this.di = (KsLogoView) findViewById(R.id.ksad_card_logo);
        DrawDownloadProgressBar drawDownloadProgressBar = (DrawDownloadProgressBar) findViewById(R.id.ksad_card_app_download_btn);
        this.dj = drawDownloadProgressBar;
        drawDownloadProgressBar.setTextSize(16);
        this.mHeight = com.kwad.sdk.d.a.a.a(context, 156.0f);
    }

    private void aE() {
        ValueAnimator valueAnimator = this.dk;
        if (valueAnimator != null) {
            valueAnimator.removeAllListeners();
            this.dk.cancel();
        }
    }

    private void aN() {
        d(this.mHeight, 0);
    }

    private void d(int i, int i2) {
        aE();
        ValueAnimator valueAnimatorB = m.b(this, i, i2);
        this.dk = valueAnimatorB;
        valueAnimatorB.setInterpolator(new DecelerateInterpolator(2.0f));
        this.dk.setDuration(300L);
        this.dk.start();
    }

    private KsAppDownloadListener getAppDownloadListener() {
        if (this.cn == null) {
            this.cn = new com.kwad.sdk.core.download.a.a() {
                @Override
                public final void onDownloadFailed() {
                    DrawCardApp.this.dj.e(com.kwad.sdk.core.response.b.a.aw(DrawCardApp.this.mAdInfo), DrawCardApp.this.dj.getMax());
                }

                @Override
                public final void onDownloadFinished() {
                    DrawCardApp.this.dj.e(com.kwad.sdk.core.response.b.a.aM(DrawCardApp.this.mAdTemplate), DrawCardApp.this.dj.getMax());
                }

                @Override
                public final void onIdle() {
                    DrawCardApp.this.dj.e(com.kwad.sdk.core.response.b.a.aw(DrawCardApp.this.mAdInfo), DrawCardApp.this.dj.getMax());
                }

                @Override
                public final void onInstalled() {
                    DrawCardApp.this.dj.e(com.kwad.sdk.core.response.b.a.U(DrawCardApp.this.mAdInfo), DrawCardApp.this.dj.getMax());
                }

                @Override
                public final void onPaused(int i) {
                    super.onPaused(i);
                    DrawCardApp.this.dj.e(com.kwad.sdk.core.response.b.a.Cz(), i);
                }

                @Override
                public final void onProgressUpdate(int i) {
                    DrawCardApp.this.dj.e(i + "%", i);
                }
            };
        }
        return this.cn;
    }

    public final void a(AdTemplate adTemplate, a aVar) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = d.cg(adTemplate);
        this.da = aVar;
        this.mApkDownloadHelper = new c(this.mAdTemplate, getAppDownloadListener());
        KSImageLoader.loadAppIcon(this.dc, com.kwad.sdk.core.response.b.a.bQ(this.mAdInfo), adTemplate, 11);
        this.dd.setText(com.kwad.sdk.core.response.b.a.ao(this.mAdInfo));
        String strAr = com.kwad.sdk.core.response.b.a.ar(this.mAdInfo);
        float fAs = com.kwad.sdk.core.response.b.a.as(this.mAdInfo);
        boolean z = fAs >= 3.0f;
        if (z) {
            this.df.setScore(fAs);
            this.df.setVisibility(0);
        }
        boolean z2 = !TextUtils.isEmpty(strAr);
        if (z2) {
            this.dg.setText(strAr);
            this.dg.setVisibility(0);
        }
        if (z || z2) {
            this.de.setVisibility(0);
        } else {
            this.de.setVisibility(8);
        }
        this.di.aa(this.mAdTemplate);
        this.dh.setText(com.kwad.sdk.core.response.b.a.an(this.mAdInfo));
        this.db.setOnClickListener(this);
        this.dj.setOnClickListener(this);
        setOnClickListener(this);
    }

    public final void aM() {
        d(0, this.mHeight);
    }

    @Override
    public void onClick(View view) {
        if (view != this.db) {
            com.kwad.components.core.e.d.a.a(new a.a(getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(view == this.dj).ao(view == this.dj ? 1 : 2).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    if (DrawCardApp.this.da != null) {
                        DrawCardApp.this.da.au();
                    }
                }
            }));
            return;
        }
        aN();
        a aVar = this.da;
        if (aVar != null) {
            aVar.at();
        }
    }

    public final void release() {
        aE();
        this.mApkDownloadHelper = null;
    }
}
