package android.support.v4.view;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.compat.R;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;

public final class ViewGroupCompat {
    public static final int LAYOUT_MODE_CLIP_BOUNDS = 0;
    public static final int LAYOUT_MODE_OPTICAL_BOUNDS = 1;

    private ViewGroupCompat() {
    }

    @Deprecated
    public static boolean onRequestSendAccessibilityEvent(ViewGroup r0, View r1, AccessibilityEvent r2) {
        return r0.onRequestSendAccessibilityEvent(r1, r2);
    }

    @Deprecated
    public static void setMotionEventSplittingEnabled(ViewGroup r0, boolean r1) {
        r0.setMotionEventSplittingEnabled(r1);
    }

    public static int getLayoutMode(@NonNull ViewGroup r2) {
        if (Build.VERSION.SDK_INT >= 18) goto L5;
        return 0;
    L5:
        return r2.getLayoutMode();
    }

    public static void setLayoutMode(@NonNull ViewGroup r2, int r3) {
        if (Build.VERSION.SDK_INT < 18) goto L6;
        r2.setLayoutMode(r3);
        return;
    }

    public static void setTransitionGroup(@NonNull ViewGroup r2, boolean r3) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r2.setTransitionGroup(r3);
        return;
    L5:
        r2.setTag(R.id.tag_transition_group, Boolean.valueOf(r3));
    }

    public static boolean isTransitionGroup(@NonNull ViewGroup r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        Boolean r0 = (Boolean) r2.getTag(R.id.tag_transition_group);
        if (r0 == null) goto L11;
        if (r0.booleanValue() == false) goto L11;
    L16:
        return true;
    L11:
        if (r2.getBackground() != null) goto L16;
        if (ViewCompat.getTransitionName(r2) != null) goto L16;
        return false;
    L5:
        return r2.isTransitionGroup();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int getNestedScrollAxes(@NonNull ViewGroup r2) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return r2.getNestedScrollAxes();
    L7:
        if ((r2 instanceof NestedScrollingParent) == true) goto L9;
        return 0;
    L9:
        return ((NestedScrollingParent) r2).getNestedScrollAxes();
    }
}
