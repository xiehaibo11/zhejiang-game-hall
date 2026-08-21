package com.czhj.sdk.common.utils;

public class ViewUtil {
    public ViewUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.view.View a(android.content.Context r1) {
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 != 0) goto L6
            r1 = 0
            return r1
        L6:
            android.app.Activity r1 = (android.app.Activity) r1
            android.view.Window r1 = r1.getWindow()
            android.view.View r1 = r1.getDecorView()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r1 = r1.findViewById(r0)
            return r1
    }

    public static android.app.Activity getActivityFromView(android.view.View r1) {
            if (r1 == 0) goto L18
            android.content.Context r1 = r1.getContext()
        L6:
            boolean r0 = r1 instanceof android.content.ContextWrapper
            if (r0 == 0) goto L18
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 == 0) goto L11
            android.app.Activity r1 = (android.app.Activity) r1
            return r1
        L11:
            android.content.ContextWrapper r1 = (android.content.ContextWrapper) r1
            android.content.Context r1 = r1.getBaseContext()
            goto L6
        L18:
            r1 = 0
            return r1
    }

    public static android.app.Activity getActivityFromViewTop(android.view.View r0) {
            android.view.View r0 = getRootViewFromView(r0)
            if (r0 == 0) goto Lb
            android.app.Activity r0 = getActivityFromView(r0)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static android.view.View getRootViewFromView(android.view.View r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.view.View r1 = r1.getRootView()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r1.findViewById(r0)
            if (r0 == 0) goto L15
            r1 = r0
        L15:
            return r1
    }

    public static android.view.View getTopmostView(android.content.Context r0, android.view.View r1) {
            android.view.View r0 = a(r0)
            android.view.View r1 = getRootViewFromView(r1)
            if (r0 == 0) goto Lb
            goto Lc
        Lb:
            r0 = r1
        Lc:
            return r0
    }

    public static boolean isPointInView(android.view.View r6, android.view.MotionEvent r7) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            float r1 = r7.getRawX()
            int r1 = (int) r1
            float r7 = r7.getRawY()
            int r7 = (int) r7
            r2 = 2
            int[] r2 = new int[r2]
            r6.getLocationOnScreen(r2)
            r3 = r2[r0]
            r4 = 1
            r2 = r2[r4]
            int r5 = r6.getMeasuredWidth()
            int r5 = r5 + r3
            int r6 = r6.getMeasuredHeight()
            int r6 = r6 + r2
            if (r7 < r2) goto L2c
            if (r7 > r6) goto L2c
            if (r1 < r3) goto L2c
            if (r1 > r5) goto L2c
            return r4
        L2c:
            return r0
    }

    public static void removeFromParent(android.view.View r1) {
            if (r1 == 0) goto L1a
            android.view.ViewParent r0 = r1.getParent()
            if (r0 != 0) goto L9
            goto L1a
        L9:
            android.view.ViewParent r0 = r1.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L1a
            android.view.ViewParent r0 = r1.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r1)
        L1a:
            return
    }
}
