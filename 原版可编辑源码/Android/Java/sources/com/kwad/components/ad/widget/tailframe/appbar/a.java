package com.kwad.components.ad.widget.tailframe.appbar;

import android.animation.ValueAnimator;
import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.widget.AppScoreView;
import com.kwad.components.ad.widget.KsAppTagsView;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.b.c;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import java.util.List;

public abstract class a extends LinearLayout {
    protected AppScoreView Bd;
    protected TextProgressBar Bt;
    protected View GA;
    protected TextView HJ;
    protected TextView dx;
    protected ValueAnimator iI;
    protected ImageView lh;
    protected TextView li;
    protected com.kwad.components.ad.i.a yA;
    private Runnable yB;
    protected View yp;
    protected Button yq;
    protected Button yr;
    protected KsAppTagsView yx;

    public a(Context context) {
        this(context, null);
    }

    public a(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public a(Context context, AttributeSet attributeSet, int i) {
        super(l.wrapContextIfNeed(context), attributeSet, i);
        initView();
    }

    private void initView() {
        this.GA = l.inflate(getContext(), getLayoutId(), this);
        this.lh = (ImageView) findViewById(R.id.ksad_app_icon);
        this.li = (TextView) findViewById(R.id.ksad_app_name);
        this.Bd = (AppScoreView) findViewById(R.id.ksad_app_score);
        this.dx = (TextView) findViewById(R.id.ksad_app_download_count);
        this.HJ = (TextView) findViewById(R.id.ksad_app_introduce);
        TextProgressBar textProgressBar = (TextProgressBar) findViewById(R.id.ksad_download_bar);
        this.Bt = textProgressBar;
        textProgressBar.setTextDimen(com.kwad.sdk.d.a.a.a(getContext(), 16.0f));
        this.Bt.setTextColor(-1);
        this.yx = (KsAppTagsView) findViewById(R.id.ksad_reward_apk_info_tags);
        this.yq = (Button) findViewById(R.id.ksad_reward_apk_info_install_action);
        this.yr = (Button) findViewById(R.id.ksad_reward_apk_info_install_start);
        this.yp = findViewById(R.id.ksad_reward_apk_info_install_container);
        this.yA = new com.kwad.components.ad.i.a(this.GA);
    }

    private void mc() {
        ValueAnimator valueAnimator = this.iI;
        if (valueAnimator == null || !valueAnimator.isRunning()) {
            ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 1.2f, 1.0f);
            this.iI = valueAnimatorOfFloat;
            valueAnimatorOfFloat.setDuration(1200L);
            this.iI.setRepeatCount(-1);
            this.iI.setRepeatMode(1);
            this.iI.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator2) {
                    float fFloatValue = ((Float) valueAnimator2.getAnimatedValue()).floatValue();
                    a.this.Bt.setScaleY(fFloatValue);
                    a.this.Bt.setScaleX(fFloatValue);
                }
            });
            this.iI.start();
        }
    }

    public void b(AdTemplate adTemplate) {
        ImageView imageView;
        String strBQ;
        AdInfo adInfoCg = d.cg(adTemplate);
        if (d.s(adTemplate)) {
            imageView = this.lh;
            strBQ = com.kwad.sdk.core.response.b.a.ct(adInfoCg);
        } else {
            imageView = this.lh;
            strBQ = com.kwad.sdk.core.response.b.a.bQ(adInfoCg);
        }
        KSImageLoader.loadAppIcon(imageView, strBQ, adTemplate, 12);
        this.li.setText(com.kwad.sdk.core.response.b.a.bO(adInfoCg));
        if (!d.s(adTemplate)) {
            float fAs = com.kwad.sdk.core.response.b.a.as(adInfoCg);
            if (fAs >= 3.0f) {
                this.Bd.setScore(fAs);
                this.Bd.setVisibility(0);
            } else {
                this.Bd.setVisibility(8);
            }
            String strAr = com.kwad.sdk.core.response.b.a.ar(adInfoCg);
            if (TextUtils.isEmpty(strAr)) {
                this.dx.setVisibility(8);
            } else {
                this.dx.setText(strAr);
                this.dx.setVisibility(0);
            }
        }
        this.HJ.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        if (d.s(adTemplate)) {
            this.Bt.setVisibility(8);
            this.yp.setVisibility(0);
            this.yr.setText("查看详情");
            Button button = this.yq;
            StringBuilder sb = new StringBuilder();
            sb.append(com.kwad.sdk.core.config.d.zC());
            button.setText(String.format("浏览详情页%s秒，领取奖励", sb.toString()));
            if (!adTemplate.mRewardVerifyCalled) {
                if (this.yB == null) {
                    this.yB = new Runnable() {
                        @Override
                        public final void run() {
                            a.this.yA.ia();
                        }
                    };
                }
                this.yp.postDelayed(this.yB, 1600L);
            }
        } else {
            this.Bt.setVisibility(0);
            this.yp.setVisibility(8);
            Runnable runnable = this.yB;
            if (runnable != null) {
                this.yp.removeCallbacks(runnable);
                this.yB = null;
            }
            z(d.cg(adTemplate));
        }
        if (d.s(adTemplate)) {
            List<String> listBX = c.bX(adTemplate);
            if (listBX.size() > 0) {
                this.yx.setVisibility(0);
            } else {
                this.yx.setVisibility(8);
            }
            this.yx.setAppTags(listBX);
        }
    }

    public View getBtnInstallContainer() {
        return this.yp;
    }

    public abstract int getLayoutId();

    public TextProgressBar getTextProgressBar() {
        return this.Bt;
    }

    public final void kq() {
        ValueAnimator valueAnimator = this.iI;
        if (valueAnimator != null && valueAnimator.isRunning()) {
            this.iI.cancel();
            this.iI.end();
        }
        Runnable runnable = this.yB;
        if (runnable != null) {
            this.yp.removeCallbacks(runnable);
            this.yB = null;
        }
        this.yA.lN();
    }

    public final void z(AdInfo adInfo) {
        int i = adInfo.status;
        if (i == 1 || i == 2 || i == 3) {
            kq();
        } else {
            mc();
        }
    }
}
