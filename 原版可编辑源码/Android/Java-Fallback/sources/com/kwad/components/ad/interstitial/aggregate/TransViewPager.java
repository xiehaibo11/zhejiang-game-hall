package com.kwad.components.ad.interstitial.aggregate;

public class TransViewPager extends com.kwad.sdk.widget.d {
    private float is;
    private int it;
    private java.util.Map<java.lang.Integer, com.kwad.components.ad.interstitial.f.c> map;

    public TransViewPager(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TransViewPager(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.map = r1
            r1 = 0
            r0.it = r1
            return
    }

    private void a(android.view.View r10, android.view.View r11, float r12) {
            r9 = this;
            int r0 = r9.it
            r1 = 2
            r2 = 1
            r3 = 0
            if (r0 != 0) goto L1a
            int r0 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r0 == 0) goto L1a
            float r0 = r9.is
            int r4 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r4 == 0) goto L1a
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 <= 0) goto L18
            r9.it = r2
            goto L1a
        L18:
            r9.it = r1
        L1a:
            int r0 = r9.it
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            if (r0 != r2) goto L3a
            if (r11 == 0) goto L3a
            double r7 = (double) r12
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            r2 = 1131413504(0x43700000, float:240.0)
            if (r0 > 0) goto L34
            int r0 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r0 <= 0) goto L34
            float r2 = r2 * r12
            r11.setTranslationX(r2)
            goto L3a
        L34:
            float r0 = r4 - r12
            float r0 = r0 * r2
            r11.setTranslationX(r0)
        L3a:
            int r11 = r9.it
            if (r11 != r1) goto L55
            if (r10 == 0) goto L55
            double r0 = (double) r12
            int r11 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            r0 = -1016070144(0xffffffffc3700000, float:-240.0)
            if (r11 > 0) goto L50
            int r11 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r11 < 0) goto L50
            float r0 = r0 * r12
            r10.setTranslationX(r0)
            goto L55
        L50:
            float r4 = r4 - r12
            float r4 = r4 * r0
            r10.setTranslationX(r4)
        L55:
            r9.is = r12
            int r10 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
            if (r10 != 0) goto L5e
            r10 = 0
            r9.it = r10
        L5e:
            return
    }

    public final void a(int r2, com.kwad.components.ad.interstitial.f.c r3) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.components.ad.interstitial.f.c> r0 = r1.map
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r2, r3)
            return
    }

    @Override
    protected void onPageScrolled(int r3, float r4, int r5) {
            r2 = this;
            com.kwad.components.ad.interstitial.f.c r0 = r2.x(r3)
            int r1 = r3 + 1
            com.kwad.components.ad.interstitial.f.c r1 = r2.x(r1)
            r2.a(r0, r1, r4)
            super.onPageScrolled(r3, r4, r5)
            return
    }

    public final com.kwad.components.ad.interstitial.f.c x(int r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.components.ad.interstitial.f.c> r0 = r1.map
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.components.ad.interstitial.f.c r2 = (com.kwad.components.ad.interstitial.f.c) r2
            return r2
    }
}
