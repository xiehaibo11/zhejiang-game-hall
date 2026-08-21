package com.kwad.components.ad.draw.view.playcard;

import android.animation.ValueAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.DecelerateInterpolator;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.t.m;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.k;

public class DrawCardH5 extends FrameLayout implements View.OnClickListener {
    private ValueAnimator dk;
    private a dm;
    private ImageView dn;
    private TextView do;
    private TextView dp;
    private AdTemplate mAdTemplate;
    private Context mContext;
    private int mHeight;
    private KsLogoView mLogoView;

    public interface a {
        void at();

        void au();
    }

    public DrawCardH5(Context context) {
        super(context);
        D(context);
    }

    public DrawCardH5(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        D(context);
    }

    public DrawCardH5(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        D(context);
    }

    private void D(Context context) {
        this.mContext = context;
        l.inflate(context, R.layout.ksad_draw_card_h5, this);
        this.dn = (ImageView) findViewById(R.id.ksad_card_close);
        this.do = (TextView) findViewById(R.id.ksad_card_ad_desc);
        this.dp = (TextView) findViewById(R.id.ksad_card_h5_open_btn);
        this.mLogoView = (KsLogoView) findViewById(R.id.ksad_draw_h5_logo);
    }

    private void aE() {
        ValueAnimator valueAnimator = this.dk;
        if (valueAnimator != null) {
            valueAnimator.removeAllListeners();
            this.dk.cancel();
        }
    }

    private void aO() {
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

    public final void a(AdTemplate adTemplate, a aVar) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.dm = aVar;
        this.do.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        this.dp.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        this.dn.setOnClickListener(this);
        this.dp.setOnClickListener(this);
        this.mLogoView.aa(adTemplate);
        setOnClickListener(this);
        this.do.measure(View.MeasureSpec.makeMeasureSpec((k.getScreenWidth(this.mContext) - (com.kwad.sdk.d.a.a.a(this.mContext, 16.0f) * 2)) - (com.kwad.sdk.d.a.a.a(this.mContext, 10.0f) * 2), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(0, 0));
        this.mHeight = com.kwad.sdk.d.a.a.a(this.mContext, 100.0f) + this.do.getMeasuredHeight();
    }

    public final void aM() {
        d(0, this.mHeight);
    }

    @Override
    public void onClick(View view) {
        if (view != this.dn) {
            com.kwad.components.core.e.d.a.a(new a.a(getContext()).P(this.mAdTemplate).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    if (DrawCardH5.this.dm != null) {
                        DrawCardH5.this.dm.au();
                    }
                }
            }));
            return;
        }
        aO();
        a aVar = this.dm;
        if (aVar != null) {
            aVar.at();
        }
    }

    public final void release() {
        aE();
    }
}
