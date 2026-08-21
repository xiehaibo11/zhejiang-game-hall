package com.kwad.components.ad.interstitial.aggregate;

public class SlideTipsView extends android.widget.FrameLayout {
    public SlideTipsView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public SlideTipsView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public SlideTipsView(android.content.Context r3, android.util.AttributeSet r4, int r5) {
            r2 = this;
            r2.<init>(r3, r4, r5)
            int[] r0 = com.kwad.sdk.R.styleable.ksad_SlideTipsView
            r1 = 0
            android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0, r5, r1)
            int r5 = com.kwad.sdk.R.styleable.ksad_SlideTipsView_ksad_is_left_slide
            r0 = 1
            boolean r5 = r4.getBoolean(r5, r0)
            r4.recycle()
            if (r5 == 0) goto L19
            int r4 = com.kwad.sdk.R.layout.ksad_interstitial_left_slide_to_next
            goto L1b
        L19:
            int r4 = com.kwad.sdk.R.layout.ksad_interstitial_right_slide_to_return
        L1b:
            com.kwad.sdk.m.l.inflate(r3, r4, r2)
            return
    }
}
