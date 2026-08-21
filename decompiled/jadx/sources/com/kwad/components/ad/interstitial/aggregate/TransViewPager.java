package com.kwad.components.ad.interstitial.aggregate;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class TransViewPager extends com.kwad.sdk.widget.d {
    private float is;
    private int it;
    private Map<Integer, com.kwad.components.ad.interstitial.f.c> map;

    public TransViewPager(Context context) {
        this(context, null);
    }

    public TransViewPager(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.map = new HashMap();
        this.it = 0;
    }

    private void a(View view, View view2, float f) {
        if (this.it == 0 && f != 0.0f) {
            float f2 = this.is;
            if (f2 != 0.0f) {
                if (f > f2) {
                    this.it = 1;
                } else {
                    this.it = 2;
                }
            }
        }
        if (this.it == 1 && view2 != null) {
            if (f > 0.5d || f <= 0.0f) {
                view2.setTranslationX((1.0f - f) * 240.0f);
            } else {
                view2.setTranslationX(240.0f * f);
            }
        }
        if (this.it == 2 && view != null) {
            if (f > 0.5d || f < 0.0f) {
                view.setTranslationX((1.0f - f) * (-240.0f));
            } else {
                view.setTranslationX((-240.0f) * f);
            }
        }
        this.is = f;
        if (f == 0.0f) {
            this.it = 0;
        }
    }

    public final void a(int i, com.kwad.components.ad.interstitial.f.c cVar) {
        this.map.put(Integer.valueOf(i), cVar);
    }

    @Override // android.support.v4.view.ViewPager
    protected void onPageScrolled(int i, float f, int i2) {
        a(x(i), x(i + 1), f);
        super.onPageScrolled(i, f, i2);
    }

    public final com.kwad.components.ad.interstitial.f.c x(int i) {
        return this.map.get(Integer.valueOf(i));
    }
}
