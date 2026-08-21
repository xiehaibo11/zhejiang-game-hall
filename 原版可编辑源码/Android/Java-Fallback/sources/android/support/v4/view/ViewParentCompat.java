package android.support.v4.view;

public final class ViewParentCompat {
    private static final java.lang.String TAG = "ViewParentCompat";

    private ViewParentCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void notifySubtreeAccessibilityStateChanged(android.view.ViewParent r2, android.view.View r3, android.view.View r4, int r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.notifySubtreeAccessibilityStateChanged(r3, r4, r5)
        L9:
            return
    }

    public static boolean onNestedFling(android.view.ViewParent r2, android.view.View r3, float r4, float r5, boolean r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2d
            boolean r2 = r2.onNestedFling(r3, r4, r5, r6)     // Catch: java.lang.AbstractMethodError -> Lb
            return r2
        Lb:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "ViewParent "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = " does not implement interface "
            r4.append(r2)
            java.lang.String r2 = "method onNestedFling"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r4 = "ViewParentCompat"
            android.util.Log.e(r4, r2, r3)
            goto L38
        L2d:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingParent
            if (r0 == 0) goto L38
            android.support.v4.view.NestedScrollingParent r2 = (android.support.v4.view.NestedScrollingParent) r2
            boolean r2 = r2.onNestedFling(r3, r4, r5, r6)
            return r2
        L38:
            r2 = 0
            return r2
    }

    public static boolean onNestedPreFling(android.view.ViewParent r2, android.view.View r3, float r4, float r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2d
            boolean r2 = r2.onNestedPreFling(r3, r4, r5)     // Catch: java.lang.AbstractMethodError -> Lb
            return r2
        Lb:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "ViewParent "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = " does not implement interface "
            r4.append(r2)
            java.lang.String r2 = "method onNestedPreFling"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r4 = "ViewParentCompat"
            android.util.Log.e(r4, r2, r3)
            goto L38
        L2d:
            boolean r0 = r2 instanceof android.support.v4.view.NestedScrollingParent
            if (r0 == 0) goto L38
            android.support.v4.view.NestedScrollingParent r2 = (android.support.v4.view.NestedScrollingParent) r2
            boolean r2 = r2.onNestedPreFling(r3, r4, r5)
            return r2
        L38:
            r2 = 0
            return r2
    }

    public static void onNestedPreScroll(android.view.ViewParent r6, android.view.View r7, int r8, int r9, int[] r10) {
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            onNestedPreScroll(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void onNestedPreScroll(android.view.ViewParent r7, android.view.View r8, int r9, int r10, int[] r11, int r12) {
            boolean r0 = r7 instanceof android.support.v4.view.NestedScrollingParent2
            if (r0 == 0) goto L10
            r1 = r7
            android.support.v4.view.NestedScrollingParent2 r1 = (android.support.v4.view.NestedScrollingParent2) r1
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.onNestedPreScroll(r2, r3, r4, r5, r6)
            goto L47
        L10:
            if (r12 != 0) goto L47
            int r12 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r12 < r0) goto L3e
            r7.onNestedPreScroll(r8, r9, r10, r11)     // Catch: java.lang.AbstractMethodError -> L1c
            goto L47
        L1c:
            r8 = move-exception
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "ViewParent "
            r9.append(r10)
            r9.append(r7)
            java.lang.String r7 = " does not implement interface "
            r9.append(r7)
            java.lang.String r7 = "method onNestedPreScroll"
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            java.lang.String r9 = "ViewParentCompat"
            android.util.Log.e(r9, r7, r8)
            goto L47
        L3e:
            boolean r12 = r7 instanceof android.support.v4.view.NestedScrollingParent
            if (r12 == 0) goto L47
            android.support.v4.view.NestedScrollingParent r7 = (android.support.v4.view.NestedScrollingParent) r7
            r7.onNestedPreScroll(r8, r9, r10, r11)
        L47:
            return
    }

    public static void onNestedScroll(android.view.ViewParent r7, android.view.View r8, int r9, int r10, int r11, int r12) {
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            onNestedScroll(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void onNestedScroll(android.view.ViewParent r8, android.view.View r9, int r10, int r11, int r12, int r13, int r14) {
            boolean r0 = r8 instanceof android.support.v4.view.NestedScrollingParent2
            if (r0 == 0) goto L11
            r1 = r8
            android.support.v4.view.NestedScrollingParent2 r1 = (android.support.v4.view.NestedScrollingParent2) r1
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r1.onNestedScroll(r2, r3, r4, r5, r6, r7)
            goto L4e
        L11:
            if (r14 != 0) goto L4e
            int r14 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r14 < r0) goto L3f
            r8.onNestedScroll(r9, r10, r11, r12, r13)     // Catch: java.lang.AbstractMethodError -> L1d
            goto L4e
        L1d:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "ViewParent "
            r10.append(r11)
            r10.append(r8)
            java.lang.String r8 = " does not implement interface "
            r10.append(r8)
            java.lang.String r8 = "method onNestedScroll"
            r10.append(r8)
            java.lang.String r8 = r10.toString()
            java.lang.String r10 = "ViewParentCompat"
            android.util.Log.e(r10, r8, r9)
            goto L4e
        L3f:
            boolean r14 = r8 instanceof android.support.v4.view.NestedScrollingParent
            if (r14 == 0) goto L4e
            r0 = r8
            android.support.v4.view.NestedScrollingParent r0 = (android.support.v4.view.NestedScrollingParent) r0
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r0.onNestedScroll(r1, r2, r3, r4, r5)
        L4e:
            return
    }

    public static void onNestedScrollAccepted(android.view.ViewParent r1, android.view.View r2, android.view.View r3, int r4) {
            r0 = 0
            onNestedScrollAccepted(r1, r2, r3, r4, r0)
            return
    }

    public static void onNestedScrollAccepted(android.view.ViewParent r1, android.view.View r2, android.view.View r3, int r4, int r5) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingParent2
            if (r0 == 0) goto La
            android.support.v4.view.NestedScrollingParent2 r1 = (android.support.v4.view.NestedScrollingParent2) r1
            r1.onNestedScrollAccepted(r2, r3, r4, r5)
            goto L41
        La:
            if (r5 != 0) goto L41
            int r5 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r5 < r0) goto L38
            r1.onNestedScrollAccepted(r2, r3, r4)     // Catch: java.lang.AbstractMethodError -> L16
            goto L41
        L16:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "ViewParent "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = " does not implement interface "
            r3.append(r1)
            java.lang.String r1 = "method onNestedScrollAccepted"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r3 = "ViewParentCompat"
            android.util.Log.e(r3, r1, r2)
            goto L41
        L38:
            boolean r5 = r1 instanceof android.support.v4.view.NestedScrollingParent
            if (r5 == 0) goto L41
            android.support.v4.view.NestedScrollingParent r1 = (android.support.v4.view.NestedScrollingParent) r1
            r1.onNestedScrollAccepted(r2, r3, r4)
        L41:
            return
    }

    public static boolean onStartNestedScroll(android.view.ViewParent r1, android.view.View r2, android.view.View r3, int r4) {
            r0 = 0
            boolean r1 = onStartNestedScroll(r1, r2, r3, r4, r0)
            return r1
    }

    public static boolean onStartNestedScroll(android.view.ViewParent r1, android.view.View r2, android.view.View r3, int r4, int r5) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingParent2
            if (r0 == 0) goto Lb
            android.support.v4.view.NestedScrollingParent2 r1 = (android.support.v4.view.NestedScrollingParent2) r1
            boolean r1 = r1.onStartNestedScroll(r2, r3, r4, r5)
            return r1
        Lb:
            if (r5 != 0) goto L45
            int r5 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r5 < r0) goto L3a
            boolean r1 = r1.onStartNestedScroll(r2, r3, r4)     // Catch: java.lang.AbstractMethodError -> L18
            return r1
        L18:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "ViewParent "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = " does not implement interface "
            r3.append(r1)
            java.lang.String r1 = "method onStartNestedScroll"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r3 = "ViewParentCompat"
            android.util.Log.e(r3, r1, r2)
            goto L45
        L3a:
            boolean r5 = r1 instanceof android.support.v4.view.NestedScrollingParent
            if (r5 == 0) goto L45
            android.support.v4.view.NestedScrollingParent r1 = (android.support.v4.view.NestedScrollingParent) r1
            boolean r1 = r1.onStartNestedScroll(r2, r3, r4)
            return r1
        L45:
            r1 = 0
            return r1
    }

    public static void onStopNestedScroll(android.view.ViewParent r1, android.view.View r2) {
            r0 = 0
            onStopNestedScroll(r1, r2, r0)
            return
    }

    public static void onStopNestedScroll(android.view.ViewParent r1, android.view.View r2, int r3) {
            boolean r0 = r1 instanceof android.support.v4.view.NestedScrollingParent2
            if (r0 == 0) goto La
            android.support.v4.view.NestedScrollingParent2 r1 = (android.support.v4.view.NestedScrollingParent2) r1
            r1.onStopNestedScroll(r2, r3)
            goto L41
        La:
            if (r3 != 0) goto L41
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r3 < r0) goto L38
            r1.onStopNestedScroll(r2)     // Catch: java.lang.AbstractMethodError -> L16
            goto L41
        L16:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "ViewParent "
            r3.append(r0)
            r3.append(r1)
            java.lang.String r1 = " does not implement interface "
            r3.append(r1)
            java.lang.String r1 = "method onStopNestedScroll"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r3 = "ViewParentCompat"
            android.util.Log.e(r3, r1, r2)
            goto L41
        L38:
            boolean r3 = r1 instanceof android.support.v4.view.NestedScrollingParent
            if (r3 == 0) goto L41
            android.support.v4.view.NestedScrollingParent r1 = (android.support.v4.view.NestedScrollingParent) r1
            r1.onStopNestedScroll(r2)
        L41:
            return
    }

    @java.lang.Deprecated
    public static boolean requestSendAccessibilityEvent(android.view.ViewParent r0, android.view.View r1, android.view.accessibility.AccessibilityEvent r2) {
            boolean r0 = r0.requestSendAccessibilityEvent(r1, r2)
            return r0
    }
}
