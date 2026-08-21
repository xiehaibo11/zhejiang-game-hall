package com.kwad.components.ad.reward.presenter.platdetail.a;

import android.animation.ValueAnimator;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class c extends com.kwad.components.ad.reward.presenter.a implements View.OnClickListener {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private ImageView vk;
    private TextView vl;
    private boolean vm = false;
    private View vn = null;
    private long vo = -1;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", c.this.qx.mAdTemplate).equals(str)) {
                c.this.bU();
            }
        }
    };
    private final l mVideoPlayStateListener = new l() {
        @Override
        public final void onMediaPlayProgress(long j, long j2) {
            if (c.this.vo >= 0) {
                if (j2 > Math.min(Math.min(c.this.vo, com.kwad.sdk.core.response.b.a.Y(c.this.mAdInfo)), j)) {
                    c.this.iu();
                }
            }
        }
    };
    private final com.kwad.components.ad.reward.e.e gN = new com.kwad.components.ad.reward.e.e() {
        @Override
        public final void bY() {
            c.a(c.this, true);
            c.this.iu();
        }
    };

    static boolean a(c cVar, boolean z) {
        cVar.vm = true;
        return true;
    }

    private void bU() {
        View view;
        int i;
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.qx.oV.a(this.mVideoPlayStateListener);
        this.qx.pf.add(this.gN);
        long jX = com.kwad.sdk.core.response.b.a.X(this.mAdInfo);
        this.vo = jX;
        if (jX == 0) {
            view = this.vn;
            i = 0;
        } else {
            view = this.vn;
            i = 8;
        }
        view.setVisibility(i);
    }

    private void iu() {
        if (this.vn.getVisibility() == 0) {
            return;
        }
        this.vn.setAlpha(0.0f);
        this.vn.setVisibility(0);
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                c.this.vn.setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
            }
        });
        valueAnimatorOfFloat.start();
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
        if (view == this.vn) {
            com.kwad.components.ad.reward.presenter.e.a(this.qx, this.vm);
        }
    }

    @Override
    public final void onCreate() {
        ImageView imageView;
        int i;
        View view;
        super.onCreate();
        this.vk = (ImageView) findViewById(R.id.ksad_detail_close_btn);
        this.vl = (TextView) findViewById(R.id.ksad_top_toolbar_close_tip);
        if (TextUtils.isEmpty(com.kwad.components.ad.reward.a.b.gD())) {
            if (com.kwad.components.ad.reward.a.b.gC() == 0) {
                imageView = this.vk;
                i = R.drawable.ksad_page_close;
            } else {
                imageView = this.vk;
                i = R.drawable.ksad_video_skip_icon;
            }
            imageView.setImageResource(i);
            view = this.vk;
        } else {
            this.vl.setText(com.kwad.components.ad.reward.a.b.gD());
            view = this.vl;
        }
        this.vn = view;
        this.vn.setOnClickListener(this);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.qx.pf.remove(this.gN);
        this.vn.setVisibility(8);
    }
}
