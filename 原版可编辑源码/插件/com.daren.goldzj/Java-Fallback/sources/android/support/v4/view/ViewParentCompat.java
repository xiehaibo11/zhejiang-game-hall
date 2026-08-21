package android.support.v4.view;

import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;

public final class ViewParentCompat {
    private static final String TAG = "ViewParentCompat";

    private ViewParentCompat() {
    }

    @Deprecated
    public static boolean requestSendAccessibilityEvent(ViewParent r0, View r1, AccessibilityEvent r2) {
        return r0.requestSendAccessibilityEvent(r1, r2);
    }

    public static boolean onStartNestedScroll(ViewParent r1, View r2, View r3, int r4) {
        return onStartNestedScroll(r1, r2, r3, r4, 0);
    }

    public static void onNestedScrollAccepted(ViewParent r1, View r2, View r3, int r4) {
        onNestedScrollAccepted(r1, r2, r3, r4, 0);
    }

    public static void onStopNestedScroll(ViewParent r1, View r2) {
        onStopNestedScroll(r1, r2, 0);
    }

    public static void onNestedScroll(ViewParent r7, View r8, int r9, int r10, int r11, int r12) {
        onNestedScroll(r7, r8, r9, r10, r11, r12, 0);
    }

    public static void onNestedPreScroll(ViewParent r6, View r7, int r8, int r9, int[] r10) {
        onNestedPreScroll(r6, r7, r8, r9, r10, 0);
    }

    public static boolean onStartNestedScroll(ViewParent r1, View r2, View r3, int r4, int r5) {
        if ((r1 instanceof NestedScrollingParent2) == true) goto L5;
        if (r5 == 0) goto L8;
        return false;
    L8:
        if (Build.VERSION.SDK_INT < 21) goto L14;
        return r1.onStartNestedScroll(r2, r3, r4);
    L11:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r1 + " does not implement interface method onStartNestedScroll", e);
        return false;
    L14:
        if ((r1 instanceof NestedScrollingParent) == true) goto L16;
        return false;
    L16:
        return ((NestedScrollingParent) r1).onStartNestedScroll(r2, r3, r4);
    L5:
        return ((NestedScrollingParent2) r1).onStartNestedScroll(r2, r3, r4, r5);
    }

    public static void onNestedScrollAccepted(ViewParent r1, View r2, View r3, int r4, int r5) {
        if ((r1 instanceof NestedScrollingParent2) == false) goto L5;
        ((NestedScrollingParent2) r1).onNestedScrollAccepted(r2, r3, r4, r5);
        return;
    L5:
        if (r5 == 0) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 21) goto L13;
        r1.onNestedScrollAccepted(r2, r3, r4);     // Catch: AbstractMethodError -> L10
        return;
    L10:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r1 + " does not implement interface method onNestedScrollAccepted", e);
        return;
    L13:
        if ((r1 instanceof NestedScrollingParent) == false) goto L21;
        ((NestedScrollingParent) r1).onNestedScrollAccepted(r2, r3, r4);
        return;
    }

    public static void onStopNestedScroll(ViewParent r1, View r2, int r3) {
        if ((r1 instanceof NestedScrollingParent2) == false) goto L5;
        ((NestedScrollingParent2) r1).onStopNestedScroll(r2, r3);
        return;
    L5:
        if (r3 == 0) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 21) goto L13;
        r1.onStopNestedScroll(r2);     // Catch: AbstractMethodError -> L10
        return;
    L10:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r1 + " does not implement interface method onStopNestedScroll", e);
        return;
    L13:
        if ((r1 instanceof NestedScrollingParent) == false) goto L21;
        ((NestedScrollingParent) r1).onStopNestedScroll(r2);
        return;
    }

    public static void onNestedScroll(ViewParent r8, View r9, int r10, int r11, int r12, int r13, int r14) {
        if ((r8 instanceof NestedScrollingParent2) == false) goto L5;
        ((NestedScrollingParent2) r8).onNestedScroll(r9, r10, r11, r12, r13, r14);
        return;
    L5:
        if (r14 == 0) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 21) goto L13;
        r8.onNestedScroll(r9, r10, r11, r12, r13);     // Catch: AbstractMethodError -> L10
        return;
    L10:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r8 + " does not implement interface method onNestedScroll", e);
        return;
    L13:
        if ((r8 instanceof NestedScrollingParent) == false) goto L21;
        ((NestedScrollingParent) r8).onNestedScroll(r9, r10, r11, r12, r13);
        return;
    }

    public static void onNestedPreScroll(ViewParent r7, View r8, int r9, int r10, int[] r11, int r12) {
        if ((r7 instanceof NestedScrollingParent2) == false) goto L5;
        ((NestedScrollingParent2) r7).onNestedPreScroll(r8, r9, r10, r11, r12);
        return;
    L5:
        if (r12 == 0) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 21) goto L13;
        r7.onNestedPreScroll(r8, r9, r10, r11);     // Catch: AbstractMethodError -> L10
        return;
    L10:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r7 + " does not implement interface method onNestedPreScroll", e);
        return;
    L13:
        if ((r7 instanceof NestedScrollingParent) == false) goto L21;
        ((NestedScrollingParent) r7).onNestedPreScroll(r8, r9, r10, r11);
        return;
    }

    public static boolean onNestedFling(ViewParent r2, View r3, float r4, float r5, boolean r6) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        return r2.onNestedFling(r3, r4, r5, r6);
    L6:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r2 + " does not implement interface method onNestedFling", e);
        return false;
    L9:
        if ((r2 instanceof NestedScrollingParent) == true) goto L11;
        return false;
    L11:
        return ((NestedScrollingParent) r2).onNestedFling(r3, r4, r5, r6);
    }

    public static boolean onNestedPreFling(ViewParent r2, View r3, float r4, float r5) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        return r2.onNestedPreFling(r3, r4, r5);
    L6:
        e = move-exception;
        Log.e(TAG, "ViewParent " + r2 + " does not implement interface method onNestedPreFling", e);
        return false;
    L9:
        if ((r2 instanceof NestedScrollingParent) == true) goto L11;
        return false;
    L11:
        return ((NestedScrollingParent) r2).onNestedPreFling(r3, r4, r5);
    }

    public static void notifySubtreeAccessibilityStateChanged(ViewParent r2, View r3, View r4, int r5) {
        if (Build.VERSION.SDK_INT < 19) goto L6;
        r2.notifySubtreeAccessibilityStateChanged(r3, r4, r5);
        return;
    }
}
