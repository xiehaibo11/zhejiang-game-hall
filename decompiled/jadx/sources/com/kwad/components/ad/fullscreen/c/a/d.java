package com.kwad.components.ad.fullscreen.c.a;

import android.animation.ValueAnimator;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private ImageView gK;
    private TextView gL;
    private AdTemplate mAdTemplate;
    private View gM = null;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.fullscreen.c.a.d.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", d.this.qx.mAdTemplate).equals(str)) {
                d.this.bU();
            }
        }
    };
    private com.kwad.components.ad.reward.e.e gN = new com.kwad.components.ad.reward.e.e() { // from class: com.kwad.components.ad.fullscreen.c.a.d.2
        @Override // com.kwad.components.ad.reward.e.e
        public final void bY() {
            d.this.bX();
        }
    };
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.fullscreen.c.a.d.3
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            d.this.f(j2);
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        this.mAdTemplate = this.qx.mAdTemplate;
        this.qx.oV.a(this.mVideoPlayStateListener);
        this.qx.pf.add(this.gN);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bX() {
        if (this.gM.getVisibility() == 0) {
            return;
        }
        this.gM.setAlpha(0.0f);
        this.gM.setVisibility(0);
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.fullscreen.c.a.d.4
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                d.this.gM.setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
            }
        });
        valueAnimatorOfFloat.start();
        this.gM.setOnClickListener(this);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        if (com.kwad.components.ad.reward.j.c(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
        } else {
            bU();
        }
    }

    public final void f(long j) {
        if (j >= com.kwad.sdk.core.response.b.a.ad(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))) {
            bX();
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        if (view == this.gM) {
            com.kwad.components.ad.reward.presenter.e.a(this.qx, false);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        ImageView imageView;
        int i;
        View view;
        super.onCreate();
        this.gK = (ImageView) findViewById(R.id.ksad_skip_icon);
        this.gL = (TextView) findViewById(R.id.ksad_top_toolbar_close_tip);
        if (TextUtils.isEmpty(com.kwad.components.ad.fullscreen.a.b.bG())) {
            if (com.kwad.components.ad.fullscreen.a.b.bF() == 0) {
                imageView = this.gK;
                i = R.drawable.ksad_page_close;
            } else {
                imageView = this.gK;
                i = R.drawable.ksad_video_skip_icon;
            }
            imageView.setImageResource(i);
            this.gL.setVisibility(8);
            view = this.gK;
        } else {
            this.gL.setText(com.kwad.components.ad.fullscreen.a.b.bG());
            this.gK.setVisibility(8);
            view = this.gL;
        }
        this.gM = view;
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.pf.remove(this.gN);
        this.qx.oV.b(this.mVideoPlayStateListener);
    }
}
