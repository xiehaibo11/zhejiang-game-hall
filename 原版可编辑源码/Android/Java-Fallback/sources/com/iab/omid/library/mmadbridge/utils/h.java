package com.iab.omid.library.mmadbridge.utils;

public final class h {
    public static java.lang.String a(android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lf
            boolean r0 = r2.isAttachedToWindow()
            if (r0 != 0) goto Lf
            java.lang.String r2 = "notAttached"
            return r2
        Lf:
            int r0 = r2.getVisibility()
            r1 = 8
            if (r0 != r1) goto L1a
            java.lang.String r2 = "viewGone"
            return r2
        L1a:
            r1 = 4
            if (r0 != r1) goto L20
            java.lang.String r2 = "viewInvisible"
            return r2
        L20:
            if (r0 == 0) goto L25
            java.lang.String r2 = "viewNotVisible"
            return r2
        L25:
            float r2 = r2.getAlpha()
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 != 0) goto L31
            java.lang.String r2 = "viewAlphaZero"
            return r2
        L31:
            r2 = 0
            return r2
    }

    public static android.view.View b(android.view.View r1) {
            android.view.ViewParent r1 = r1.getParent()
            boolean r0 = r1 instanceof android.view.View
            if (r0 == 0) goto Lb
            android.view.View r1 = (android.view.View) r1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static float c(android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            float r2 = r2.getZ()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static boolean d(android.view.View r0) {
            java.lang.String r0 = a(r0)
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public static boolean e(android.view.View r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto Le
            boolean r0 = r3.isAttachedToWindow()
            if (r0 != 0) goto Le
            return r1
        Le:
            boolean r0 = r3.isShown()
            if (r0 != 0) goto L15
            return r1
        L15:
            if (r3 == 0) goto L26
            float r0 = r3.getAlpha()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L21
            return r1
        L21:
            android.view.View r3 = b(r3)
            goto L15
        L26:
            r3 = 1
            return r3
    }
}
