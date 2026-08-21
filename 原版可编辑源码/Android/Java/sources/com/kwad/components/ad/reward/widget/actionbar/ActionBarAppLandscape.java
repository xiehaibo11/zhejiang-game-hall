package com.kwad.components.ad.reward.widget.actionbar;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.widget.AppScoreView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.widget.c;
import com.kwad.sdk.widget.f;

public class ActionBarAppLandscape extends LinearLayout implements c {
    private AppScoreView Bd;
    private TextProgressBar Be;
    private View Bf;
    private a Bg;
    private KsAppDownloadListener cn;
    private ImageView du;
    private TextView dv;
    private TextView dx;
    private TextView eo;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public interface a {
        void P(boolean z);
    }

    public ActionBarAppLandscape(Context context) {
        this(context, null);
    }

    public ActionBarAppLandscape(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ActionBarAppLandscape(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        initView();
    }

    private void b(View view, final boolean z) {
        com.kwad.components.core.e.d.a.a(new a.a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(view == this.Be).ao(view == this.Bf ? 1 : 2).a(new a.b() {
            @Override
            public final void onAdClicked() {
                if (ActionBarAppLandscape.this.Bg != null) {
                    ActionBarAppLandscape.this.Bg.P(z);
                }
            }
        }));
    }

    private KsAppDownloadListener getAppDownloadListener() {
        if (this.cn == null) {
            this.cn = new com.kwad.sdk.core.download.a.a() {
                @Override
                public final void onDownloadFailed() {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.aw(ActionBarAppLandscape.this.mAdInfo), 0);
                    ActionBarAppLandscape.this.Bf.setVisibility(0);
                }

                @Override
                public final void onDownloadFinished() {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.aM(ActionBarAppLandscape.this.mAdTemplate), 0);
                    ActionBarAppLandscape.this.Bf.setVisibility(0);
                }

                @Override
                public final void onIdle() {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.aw(ActionBarAppLandscape.this.mAdInfo), 0);
                    ActionBarAppLandscape.this.Bf.setVisibility(0);
                }

                @Override
                public final void onInstalled() {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.U(ActionBarAppLandscape.this.mAdInfo), 0);
                    ActionBarAppLandscape.this.Bf.setVisibility(0);
                }

                @Override
                public final void onPaused(int i) {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.cw(i), i);
                    ActionBarAppLandscape.this.Bf.setVisibility(8);
                }

                @Override
                public final void onProgressUpdate(int i) {
                    ActionBarAppLandscape.this.Be.e(com.kwad.sdk.core.response.b.a.cv(i), i);
                    ActionBarAppLandscape.this.Bf.setVisibility(8);
                }
            };
        }
        return this.cn;
    }

    private void initView() {
        l.inflate(getContext(), R.layout.ksad_video_actionbar_app_landscape, this);
        this.du = (ImageView) findViewById(R.id.ksad_app_icon);
        this.dv = (TextView) findViewById(R.id.ksad_app_title);
        this.eo = (TextView) findViewById(R.id.ksad_app_desc);
        this.Bd = (AppScoreView) findViewById(R.id.ksad_app_score);
        this.dx = (TextView) findViewById(R.id.ksad_app_download_count);
        TextProgressBar textProgressBar = (TextProgressBar) findViewById(R.id.ksad_app_download_btn);
        this.Be = textProgressBar;
        textProgressBar.setTextDimen(com.kwad.sdk.d.a.a.a(getContext(), 16.0f));
        this.Be.setTextColor(-1);
        this.Bf = findViewById(R.id.ksad_download_bar_cover);
    }

    private void kl() {
        float fAs = com.kwad.sdk.core.response.b.a.as(this.mAdInfo);
        boolean z = fAs >= 3.0f;
        if (z) {
            this.Bd.setScore(fAs);
            this.Bd.setVisibility(0);
        }
        String strAr = com.kwad.sdk.core.response.b.a.ar(this.mAdInfo);
        boolean zIsEmpty = true ^ TextUtils.isEmpty(strAr);
        if (zIsEmpty) {
            this.dx.setText(strAr);
            this.dx.setVisibility(0);
        }
        if (zIsEmpty || z) {
            this.eo.setVisibility(8);
            return;
        }
        this.eo.setText(com.kwad.sdk.core.response.b.a.an(this.mAdInfo));
        this.Bd.setVisibility(8);
        this.dx.setVisibility(8);
        this.eo.setVisibility(0);
    }

    @Override
    public final void a(View view) {
        b(view, true);
    }

    public final void a(AdTemplate adTemplate, com.kwad.components.core.e.d.c cVar, a aVar) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.Bg = aVar;
        this.mApkDownloadHelper = cVar;
        KSImageLoader.loadAppIcon(this.du, com.kwad.sdk.core.response.b.a.bQ(adInfoCg), adTemplate, 12);
        this.dv.setText(com.kwad.sdk.core.response.b.a.bO(this.mAdInfo));
        kl();
        this.Be.e(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo), 0);
        com.kwad.components.core.e.d.c cVar2 = this.mApkDownloadHelper;
        if (cVar2 != null) {
            cVar2.b(getAppDownloadListener());
        }
        setClickable(true);
        new f(this, this);
        new f(this.Bf, this);
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }
}
