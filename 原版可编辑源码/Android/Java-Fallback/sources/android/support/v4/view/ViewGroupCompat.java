package android.support.v4.view;

public final class ViewGroupCompat {
    public static final int LAYOUT_MODE_CLIP_BOUNDS = 0;
    public static final int LAYOUT_MODE_OPTICAL_BOUNDS = 1;

    private ViewGroupCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getLayoutMode(android.view.ViewGroup r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lb
            int r2 = r2.getLayoutMode()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getNestedScrollAxes(android.view.ViewGroup r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            int r2 = r2.getNestedScrollAxes()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingParent
            if (r0 == 0) goto L16
            android.support.v4.view.NestedScrollingParent r2 = (android.support.v4.view.NestedScrollingParent) r2
            int r2 = r2.getNestedScrollAxes()
            return r2
        L16:
            r2 = 0
            return r2
    }

    public static boolean isTransitionGroup(android.view.ViewGroup r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            boolean r2 = r2.isTransitionGroup()
            return r2
        Lb:
            int r0 = android.support.compat.R.id.tag_transition_group
            java.lang.Object r0 = r2.getTag(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto L1b
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L2a
        L1b:
            android.graphics.drawable.Drawable r0 = r2.getBackground()
            if (r0 != 0) goto L2a
            java.lang.String r2 = android.support.v4.view.ViewCompat.getTransitionName(r2)
            if (r2 == 0) goto L28
            goto L2a
        L28:
            r2 = 0
            goto L2b
        L2a:
            r2 = 1
        L2b:
            return r2
    }

    @java.lang.Deprecated
    public static boolean onRequestSendAccessibilityEvent(android.view.ViewGroup r0, android.view.View r1, android.view.accessibility.AccessibilityEvent r2) {
            boolean r0 = r0.onRequestSendAccessibilityEvent(r1, r2)
            return r0
    }

    public static void setLayoutMode(android.view.ViewGroup r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto L9
            r2.setLayoutMode(r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void setMotionEventSplittingEnabled(android.view.ViewGroup r0, boolean r1) {
            r0.setMotionEventSplittingEnabled(r1)
            return
    }

    public static void setTransitionGroup(android.view.ViewGroup r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.setTransitionGroup(r3)
            goto L13
        La:
            int r0 = android.support.compat.R.id.tag_transition_group
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.setTag(r0, r3)
        L13:
            return
    }
}
