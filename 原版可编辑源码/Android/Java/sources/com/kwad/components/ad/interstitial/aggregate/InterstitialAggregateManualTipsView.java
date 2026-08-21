package com.kwad.components.ad.interstitial.aggregate;

import android.content.Context;
import android.support.v4.view.ViewPager;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import org.json.JSONObject;

public class InterstitialAggregateManualTipsView extends LinearLayout implements View.OnClickListener {
    private TransViewPager hL;
    private ImageView ij;
    private ImageView ik;
    private ImageView il;
    private int im;
    private int io;
    private final ViewPager.OnPageChangeListener iq;
    private AdTemplate mAdTemplate;
    private final Context mContext;

    public InterstitialAggregateManualTipsView(Context context) {
        this(context, null);
    }

    public InterstitialAggregateManualTipsView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public InterstitialAggregateManualTipsView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.iq = new ViewPager.SimpleOnPageChangeListener() {
            @Override
            public final void onPageSelected(int i2) {
                ImageView imageView;
                float f;
                InterstitialAggregateManualTipsView.this.im = i2;
                if (InterstitialAggregateManualTipsView.this.im == InterstitialAggregateManualTipsView.this.io - 1) {
                    imageView = InterstitialAggregateManualTipsView.this.ij;
                    f = 0.5f;
                } else {
                    imageView = InterstitialAggregateManualTipsView.this.ij;
                    f = 1.0f;
                }
                imageView.setAlpha(f);
                InterstitialAggregateManualTipsView.this.ik.setAlpha(f);
            }
        };
        this.mContext = context;
        initView();
    }

    private void cv() {
        int i = this.im;
        if (i < this.io - 1) {
            this.hL.setCurrentItem(i + 1, true);
        }
    }

    private void initView() {
        l.inflate(this.mContext, R.layout.ksad_interstitial_aggregate_manual_tips, this);
        this.ij = (ImageView) findViewById(R.id.ksad_interstitial_aggregate_cut);
        this.ik = (ImageView) findViewById(R.id.ksad_interstitial_aggregate_refresh);
        ImageView imageView = (ImageView) findViewById(R.id.ksad_interstitial_aggregate_convert);
        this.il = imageView;
        com.kwad.sdk.d.a.a.a(this, this.ij, this.ik, imageView);
    }

    public final void a(AdTemplate adTemplate, TransViewPager transViewPager) {
        this.mAdTemplate = adTemplate;
        this.hL = transViewPager;
        this.im = transViewPager.getCurrentItem();
        a aVar = (a) transViewPager.getAdapter();
        if (aVar == null) {
            return;
        }
        this.io = aVar.getCount();
        new d(this.hL.getContext()).a(this.hL);
        this.hL.addOnPageChangeListener(this.iq);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        String strCY = com.kwad.sdk.core.response.b.b.cY(adInfoCg);
        String strCZ = com.kwad.sdk.core.response.b.b.cZ(adInfoCg);
        String strDa = com.kwad.sdk.core.response.b.b.da(adInfoCg);
        if (TextUtils.isEmpty(strCY) || TextUtils.isEmpty(strCZ) || TextUtils.isEmpty(strDa)) {
            setVisibility(8);
            return;
        }
        KSImageLoader.loadImage(this.ij, strCY);
        KSImageLoader.loadImage(this.ik, strCZ);
        KSImageLoader.loadImage(this.il, strDa);
        com.kwad.sdk.core.report.a.b(adTemplate, 162, (JSONObject) null);
    }

    @Override
    public void onClick(View view) {
        com.kwad.components.ad.interstitial.f.c cVarX;
        AdTemplate adTemplate;
        int i;
        if (view.equals(this.ij)) {
            cv();
            adTemplate = this.mAdTemplate;
            i = 162;
        } else {
            if (!view.equals(this.ik)) {
                if (!view.equals(this.il) || (cVarX = this.hL.x(this.im)) == null) {
                    return;
                }
                cVarX.eu();
                return;
            }
            cv();
            adTemplate = this.mAdTemplate;
            i = 36;
        }
        com.kwad.sdk.core.report.a.q(adTemplate, i);
    }
}
