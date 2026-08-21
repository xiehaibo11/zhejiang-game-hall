package com.mbridge.msdk.foundation.tools;

public final class am {
    private static boolean a;

    static {
            return
    }

    private static int a(android.view.View r2, android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L11
            android.view.View r1 = r3.getChildAt(r0)
            if (r1 != r2) goto Le
            goto L11
        Le:
            int r0 = r0 + 1
            goto L1
        L11:
            return r0
    }

    public static boolean a(android.view.View r8) {
            int r0 = r8.getVisibility()
            java.lang.String r1 = "ViewUtils"
            r2 = 1
            if (r0 == 0) goto Lf
            java.lang.String r8 = "Banner Judge : Banner's not visible."
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            return r2
        Lf:
            float r0 = r8.getAlpha()
            r3 = 1056964608(0x3f000000, float:0.5)
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 >= 0) goto L1f
            java.lang.String r8 = "Banner Judge : Banner's alpha must set up 50%."
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            return r2
        L1f:
            android.view.ViewParent r0 = r8.getParent()
            if (r0 == 0) goto L3f
            android.view.ViewParent r0 = r8.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L3f
            android.view.ViewParent r0 = r8.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L3f
            java.lang.String r8 = "View Judge : View's container is not visible."
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            return r2
        L3f:
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            boolean r3 = r8.getGlobalVisibleRect(r0)
            int r4 = r0.bottom
            int r5 = r0.top
            int r4 = r4 - r5
            int r5 = r0.right
            int r0 = r0.left
            int r5 = r5 - r0
            int r4 = r4 * r5
            int r0 = r8.getMeasuredHeight()
            int r5 = r8.getMeasuredWidth()
            int r0 = r0 * r5
            int r0 = r0 / 2
            r5 = 0
            if (r4 < r0) goto L63
            r0 = r2
            goto L64
        L63:
            r0 = r5
        L64:
            if (r3 == 0) goto L6a
            if (r0 == 0) goto L6a
            r4 = r2
            goto L6b
        L6a:
            r4 = r5
        L6b:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "View Judge : partVisible is "
            r6.append(r7)
            r6.append(r3)
            java.lang.String r3 = " halfPercentVisible is "
            r6.append(r3)
            r6.append(r0)
            java.lang.String r0 = r6.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "View Judge : totalViewVisible is "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            if (r4 != 0) goto L9e
            return r2
        L9e:
            r0 = r8
        L9f:
            android.view.ViewParent r3 = r0.getParent()
            boolean r3 = r3 instanceof android.view.ViewGroup
            if (r3 == 0) goto Lf5
            android.view.ViewParent r3 = r0.getParent()
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            int r0 = a(r0, r3)
            int r0 = r0 + r2
        Lb2:
            int r4 = r3.getChildCount()
            if (r0 >= r4) goto Lf3
            android.view.View r4 = r3.getChildAt(r0)
            int r6 = r4.getVisibility()
            if (r6 == 0) goto Lc3
            goto Lf0
        Lc3:
            boolean r6 = a(r8, r4)
            if (r6 == 0) goto Lf0
            boolean r6 = r4 instanceof android.view.ViewGroup
            if (r6 == 0) goto Le4
            r6 = r4
            android.view.ViewGroup r6 = (android.view.ViewGroup) r6
            int r7 = r6.getChildCount()
            if (r7 <= 0) goto Le4
            java.lang.String r4 = "View Judge : Covered by ViewGroup."
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
            boolean r4 = b(r8, r6)
            com.mbridge.msdk.foundation.tools.am.a = r5
            if (r4 == 0) goto Lf0
            return r2
        Le4:
            boolean r4 = b(r4)
            if (r4 == 0) goto Lf0
            java.lang.String r8 = "View Judge : View Covered and Cover View is not transparent."
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            return r2
        Lf0:
            int r0 = r0 + 1
            goto Lb2
        Lf3:
            r0 = r3
            goto L9f
        Lf5:
            java.lang.String r8 = "View Judge : Well done, View is not covered."
            com.mbridge.msdk.foundation.tools.z.d(r1, r8)
            return r5
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

    private static boolean b(android.view.View r5, android.view.ViewGroup r6) {
            r0 = 0
        L1:
            int r1 = r6.getChildCount()
            if (r0 >= r1) goto L4f
            java.lang.String r1 = "ViewUtils"
            java.lang.String r2 = "View Judge : Start Loop"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            android.view.View r2 = r6.getChildAt(r0)
            int r3 = r2.getVisibility()
            if (r3 == 0) goto L19
            goto L4c
        L19:
            boolean r3 = a(r5, r2)
            if (r3 == 0) goto L4c
            boolean r3 = r2 instanceof android.webkit.WebView
            r4 = 1
            if (r3 == 0) goto L31
            int r3 = r2.getVisibility()
            if (r3 != 0) goto L31
            java.lang.String r3 = "View Judge : View Covered by WebView."
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)
            com.mbridge.msdk.foundation.tools.am.a = r4
        L31:
            boolean r3 = b(r2)
            if (r3 == 0) goto L3e
            java.lang.String r3 = "View Judge : View Covered and Cover ViewGroup is not transparent."
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)
            com.mbridge.msdk.foundation.tools.am.a = r4
        L3e:
            boolean r1 = com.mbridge.msdk.foundation.tools.am.a
            if (r1 == 0) goto L43
            goto L4f
        L43:
            boolean r1 = r2 instanceof android.view.ViewGroup
            if (r1 == 0) goto L4c
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            b(r5, r2)
        L4c:
            int r0 = r0 + 1
            goto L1
        L4f:
            boolean r5 = com.mbridge.msdk.foundation.tools.am.a
            return r5
    }
}
