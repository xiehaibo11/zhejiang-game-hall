package com.kwad.components.ad.interstitial.aggregate;

public final class d extends android.widget.Scroller {
    private final int iK;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.iK = r1
            return
    }

    public final void a(android.support.v4.view.ViewPager r2) {
            r1 = this;
            java.lang.String r0 = "mScroller"
            com.kwad.sdk.utils.s.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    @Override
    public final void startScroll(int r7, int r8, int r9, int r10) {
            r6 = this;
            r5 = 1000(0x3e8, float:1.401E-42)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            super.startScroll(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void startScroll(int r7, int r8, int r9, int r10, int r11) {
            r6 = this;
            r5 = 1000(0x3e8, float:1.401E-42)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            super.startScroll(r1, r2, r3, r4, r5)
            return
    }
}
