package com.kwad.components.ad.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public class AppScoreView extends LinearLayout {
    private ImageView Hk;
    private ImageView Hl;

    public AppScoreView(Context context) {
        this(context, null);
    }

    public AppScoreView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public AppScoreView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        initView();
    }

    private void initView() {
        inflate(getContext(), R.layout.ksad_app_score, this);
        this.Hk = (ImageView) findViewById(R.id.ksad_score_fourth);
        this.Hl = (ImageView) findViewById(R.id.ksad_score_fifth);
    }

    public void setScore(float f) {
        ImageView imageView;
        int i;
        ImageView imageView2;
        int i2;
        double d = f;
        if (d > 4.5d) {
            this.Hk.setImageResource(R.drawable.ksad_star_checked);
            imageView2 = this.Hl;
            i2 = R.drawable.ksad_star_checked;
        } else if (d > 4.0d) {
            this.Hk.setImageResource(R.drawable.ksad_star_checked);
            imageView2 = this.Hl;
            i2 = R.drawable.ksad_star_half;
        } else {
            if (d > 3.5d) {
                imageView = this.Hk;
                i = R.drawable.ksad_star_checked;
            } else {
                if (d <= 3.0d) {
                    if (d == 3.0d) {
                        this.Hk.setImageResource(R.drawable.ksad_star_unchecked);
                        this.Hl.setImageResource(R.drawable.ksad_star_unchecked);
                        return;
                    }
                    return;
                }
                imageView = this.Hk;
                i = R.drawable.ksad_star_half;
            }
            imageView.setImageResource(i);
            imageView2 = this.Hl;
            i2 = R.drawable.ksad_star_unchecked;
        }
        imageView2.setImageResource(i2);
    }
}
