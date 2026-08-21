package com.kwad.components.ad.interstitial.aggregate;

import android.content.Context;
import android.support.v4.view.ViewPager;
import android.widget.Scroller;
import com.kwad.sdk.utils.s;

/* JADX INFO: loaded from: classes2.dex */
public final class d extends Scroller {
    private final int iK;

    public d(Context context) {
        super(context);
        this.iK = 1000;
    }

    public final void a(ViewPager viewPager) {
        try {
            s.a(viewPager, "mScroller", this);
        } catch (Throwable unused) {
        }
    }

    @Override // android.widget.Scroller
    public final void startScroll(int i, int i2, int i3, int i4) {
        super.startScroll(i, i2, i3, i4, 1000);
    }

    @Override // android.widget.Scroller
    public final void startScroll(int i, int i2, int i3, int i4, int i5) {
        super.startScroll(i, i2, i3, i4, 1000);
    }
}
