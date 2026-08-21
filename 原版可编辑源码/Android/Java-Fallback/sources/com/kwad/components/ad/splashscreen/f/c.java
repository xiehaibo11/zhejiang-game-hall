package com.kwad.components.ad.splashscreen.f;

public final class c {
    public static void a(android.view.View r0, int r1, int r2, int r3, int r4) {
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            boolean r2 = r1 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r2 == 0) goto L20
            android.view.ViewGroup$MarginLayoutParams r1 = (android.view.ViewGroup.MarginLayoutParams) r1
            android.content.Context r2 = r0.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r1.bottomMargin = r2
            android.content.Context r0 = r0.getContext()
            int r0 = com.kwad.sdk.d.a.a.a(r0, r3)
            r1.leftMargin = r0
        L20:
            return
    }

    public static boolean a(android.content.Context r3, int r4, int r5) {
            android.content.res.Resources r0 = r3.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.widthPixels
            int r0 = r0.heightPixels
            r2 = 1092616192(0x41200000, float:10.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r2)
            int r4 = r4 - r1
            int r4 = java.lang.Math.abs(r4)
            if (r4 > r3) goto L23
            int r5 = r5 - r0
            int r4 = java.lang.Math.abs(r5)
            if (r4 <= r3) goto L21
            goto L23
        L21:
            r3 = 1
            return r3
        L23:
            r3 = 0
            return r3
    }

    public static boolean v(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            int r0 = r0.skipButtonPosition
            if (r0 != 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }
}
