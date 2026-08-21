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

/* JADX INFO: loaded from: classes2.dex */
public class ActionBarAppPortrait extends LinearLayout implements c {
    private AppScoreView Bd;
    private TextProgressBar Be;
    private View Bf;
    private a Bi;

    /* JADX INFO: renamed from: cn, reason: collision with root package name */
    private KsAppDownloadListener f2818cn;
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

    public ActionBarAppPortrait(Context context) {
        this(context, null);
    }

    public ActionBarAppPortrait(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ActionBarAppPortrait(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        initView();
    }

    private void b(View view, final boolean z) {
        int i = view == this.Bf ? 1 : 2;
        com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).am(1).an(i).am(view == this.Be).ao(i).a(new a.b() { // from class: com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.2
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                if (ActionBarAppPortrait.this.Bi != null) {
                    ActionBarAppPortrait.this.Bi.P(z);
                }
            }
        }));
    }

    private KsAppDownloadListener getAppDownloadListener() {
        if (this.f2818cn == null) {
            this.f2818cn = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.1
                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onDownloadFailed() {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.aw(ActionBarAppPortrait.this.mAdInfo), 0);
                    ActionBarAppPortrait.this.Bf.setVisibility(0);
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onDownloadFinished() {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.aM(ActionBarAppPortrait.this.mAdTemplate), 0);
                    ActionBarAppPortrait.this.Bf.setVisibility(0);
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onIdle() {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.aw(ActionBarAppPortrait.this.mAdInfo), 0);
                    ActionBarAppPortrait.this.Bf.setVisibility(0);
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onInstalled() {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.U(ActionBarAppPortrait.this.mAdInfo), 0);
                    ActionBarAppPortrait.this.Bf.setVisibility(0);
                }

                @Override // com.kwad.sdk.core.download.a.a
                public final void onPaused(int i) {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.cw(i), i);
                    ActionBarAppPortrait.this.Bf.setVisibility(8);
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onProgressUpdate(int i) {
                    ActionBarAppPortrait.this.Be.e(com.kwad.sdk.core.response.b.a.cv(i), i);
                    ActionBarAppPortrait.this.Bf.setVisibility(8);
                }
            };
        }
        return this.f2818cn;
    }

    private void initView() {
        l.inflate(getContext(), R.layout.ksad_video_actionbar_app_portrait, this);
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
        String strAr = com.kwad.sdk.core.response.b.a.ar(this.mAdInfo);
        boolean z = !TextUtils.isEmpty(strAr);
        float fAs = com.kwad.sdk.core.response.b.a.as(this.mAdInfo);
        boolean z2 = fAs >= 3.0f;
        if (z && z2) {
            ((LinearLayout.LayoutParams) this.dv.getLayoutParams()).bottomMargin = com.kwad.sdk.d.a.a.a(getContext(), 1.0f);
            ((LinearLayout.LayoutParams) this.Bd.getLayoutParams()).bottomMargin = com.kwad.sdk.d.a.a.a(getContext(), 1.0f);
            this.dx.setText(strAr);
            this.dx.setVisibility(0);
            this.Bd.setVisibility(0);
            this.Bd.setScore(fAs);
            this.eo.setVisibility(8);
            return;
        }
        if (z) {
            this.dx.setText(strAr);
            this.dx.setVisibility(0);
            this.Bd.setVisibility(8);
            this.eo.setVisibility(8);
            return;
        }
        if (z2) {
            this.dx.setVisibility(8);
            this.Bd.setScore(fAs);
            this.Bd.setVisibility(0);
            this.eo.setVisibility(8);
            return;
        }
        this.eo.setText(com.kwad.sdk.core.response.b.a.an(this.mAdInfo));
        this.dx.setVisibility(8);
        this.Bd.setVisibility(8);
        this.eo.setVisibility(0);
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        b(view, true);
    }

    public final void a(AdTemplate adTemplate, com.kwad.components.core.e.d.c cVar, a aVar) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.Bi = aVar;
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

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }
}
