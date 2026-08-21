package com.tkay.expressad.foundation.h;

public final class y {
    private static final java.lang.String a = "ViewUtils";
    private static boolean b;

    static {
            return
    }

    public y() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(android.view.View r2, android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L10
            android.view.View r1 = r3.getChildAt(r0)
            if (r1 == r2) goto L10
            int r0 = r0 + 1
            goto L1
        L10:
            return r0
    }

    public static boolean a(android.view.View r7) {
            int r0 = r7.getVisibility()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            float r0 = r7.getAlpha()
            r2 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L13
            return r1
        L13:
            android.view.ViewParent r0 = r7.getParent()
            if (r0 == 0) goto L2e
            android.view.ViewParent r0 = r7.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L2e
            android.view.ViewParent r0 = r7.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L2e
            return r1
        L2e:
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            boolean r2 = r7.getGlobalVisibleRect(r0)
            int r3 = r0.bottom
            int r4 = r0.top
            int r3 = r3 - r4
            int r4 = r0.right
            int r0 = r0.left
            int r4 = r4 - r0
            int r3 = r3 * r4
            int r0 = r7.getMeasuredHeight()
            int r4 = r7.getMeasuredWidth()
            int r0 = r0 * r4
            int r0 = r0 / 2
            r4 = 0
            if (r3 < r0) goto L52
            r0 = r1
            goto L53
        L52:
            r0 = r4
        L53:
            if (r2 == 0) goto L59
            if (r0 == 0) goto L59
            r3 = r1
            goto L5a
        L59:
            r3 = r4
        L5a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "View Judge : partVisible is "
            r5.<init>(r6)
            r5.append(r2)
            java.lang.String r2 = " halfPercentVisible is "
            r5.append(r2)
            r5.append(r0)
            if (r3 != 0) goto L6f
            return r1
        L6f:
            r0 = r7
        L70:
            android.view.ViewParent r2 = r0.getParent()
            boolean r2 = r2 instanceof android.view.ViewGroup
            if (r2 == 0) goto Lbb
            android.view.ViewParent r2 = r0.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            int r0 = a(r0, r2)
            int r0 = r0 + r1
        L83:
            int r3 = r2.getChildCount()
            if (r0 >= r3) goto Lb9
            android.view.View r3 = r2.getChildAt(r0)
            int r5 = r3.getVisibility()
            if (r5 != 0) goto Lb6
            boolean r5 = a(r7, r3)
            if (r5 == 0) goto Lb6
            boolean r5 = r3 instanceof android.view.ViewGroup
            if (r5 == 0) goto Laf
            r5 = r3
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5
            int r6 = r5.getChildCount()
            if (r6 <= 0) goto Laf
            boolean r3 = b(r7, r5)
            com.tkay.expressad.foundation.h.y.b = r4
            if (r3 == 0) goto Lb6
            return r1
        Laf:
            boolean r3 = b(r3)
            if (r3 == 0) goto Lb6
            return r1
        Lb6:
            int r0 = r0 + 1
            goto L83
        Lb9:
            r0 = r2
            goto L70
        Lbb:
            return r4
    }

    private static boolean a(android.view.View r4, android.view.View r5) {
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r4.getGlobalVisibleRect(r0)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r5.getGlobalVisibleRect(r1)
            boolean r5 = android.graphics.Rect.intersects(r0, r1)
            if (r5 == 0) goto L48
            int r5 = r0.right
            int r2 = r1.right
            int r5 = java.lang.Math.min(r5, r2)
            int r2 = r0.left
            int r3 = r1.left
            int r2 = java.lang.Math.max(r2, r3)
            int r5 = r5 - r2
            int r2 = r0.bottom
            int r3 = r1.bottom
            int r2 = java.lang.Math.min(r2, r3)
            int r0 = r0.top
            int r1 = r1.top
            int r0 = java.lang.Math.max(r0, r1)
            int r2 = r2 - r0
            int r5 = r5 * r2
            int r5 = r5 * 2
            int r0 = r4.getMeasuredHeight()
            int r4 = r4.getMeasuredWidth()
            int r0 = r0 * r4
            if (r5 < r0) goto L48
            r4 = 1
            return r4
        L48:
            r4 = 0
            return r4
    }

    private static boolean b(android.view.View r3) {
            float r0 = r3.getAlpha()
            r1 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Lc
            return r1
        Lc:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r0 < r2) goto L25
            android.graphics.drawable.Drawable r0 = r3.getBackground()
            if (r0 == 0) goto L24
            android.graphics.drawable.Drawable r3 = r3.getBackground()
            int r3 = r3.getAlpha()
            r0 = 127(0x7f, float:1.78E-43)
            if (r3 > r0) goto L25
        L24:
            return r1
        L25:
            r3 = 1
            return r3
    }

    private static boolean b(android.view.View r4, android.view.ViewGroup r5) {
            r0 = 0
        L1:
            int r1 = r5.getChildCount()
            if (r0 >= r1) goto L3c
            android.view.View r1 = r5.getChildAt(r0)
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L39
            boolean r2 = a(r4, r1)
            if (r2 == 0) goto L39
            boolean r2 = r1 instanceof android.webkit.WebView
            r3 = 1
            if (r2 == 0) goto L24
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L24
            com.tkay.expressad.foundation.h.y.b = r3
        L24:
            boolean r2 = b(r1)
            if (r2 == 0) goto L2c
            com.tkay.expressad.foundation.h.y.b = r3
        L2c:
            boolean r2 = com.tkay.expressad.foundation.h.y.b
            if (r2 != 0) goto L3c
            boolean r2 = r1 instanceof android.view.ViewGroup
            if (r2 == 0) goto L39
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            b(r4, r1)
        L39:
            int r0 = r0 + 1
            goto L1
        L3c:
            boolean r4 = com.tkay.expressad.foundation.h.y.b
            return r4
    }
}
