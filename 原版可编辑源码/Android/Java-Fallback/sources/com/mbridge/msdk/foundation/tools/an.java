package com.mbridge.msdk.foundation.tools;

public final class an {
    public static void a(android.view.View r2) {
            if (r2 == 0) goto Lf
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto Lf
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r2)
        Lf:
            return
    }
}
