package android.support.v4.view;

import android.os.Build;
import android.view.ViewGroup;

public final class MarginLayoutParamsCompat {
    public static int getMarginStart(ViewGroup.MarginLayoutParams r2) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return r2.getMarginStart();
    L7:
        return r2.leftMargin;
    }

    public static int getMarginEnd(ViewGroup.MarginLayoutParams r2) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        return r2.getMarginEnd();
    L7:
        return r2.rightMargin;
    }

    public static void setMarginStart(ViewGroup.MarginLayoutParams r2, int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        r2.setMarginStart(r3);
        return;
    L5:
        r2.leftMargin = r3;
    }

    public static void setMarginEnd(ViewGroup.MarginLayoutParams r2, int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        r2.setMarginEnd(r3);
        return;
    L5:
        r2.rightMargin = r3;
    }

    public static boolean isMarginRelative(ViewGroup.MarginLayoutParams r2) {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return false;
    L5:
        return r2.isMarginRelative();
    }

    public static int getLayoutDirection(ViewGroup.MarginLayoutParams r3) {
        if (Build.VERSION.SDK_INT < 17) goto L5;
        int r32 = r3.getLayoutDirection();
    L6:
        if (r32 != 0) goto L8;
        return r32;
    L8:
        if (r32 == 1) goto L12;
        return 0;
    L12:
        return r32;
    L5:
        r32 = 0;
        goto L6
    }

    public static void setLayoutDirection(ViewGroup.MarginLayoutParams r2, int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        r2.setLayoutDirection(r3);
        return;
    }

    public static void resolveLayoutDirection(ViewGroup.MarginLayoutParams r2, int r3) {
        if (Build.VERSION.SDK_INT < 17) goto L6;
        r2.resolveLayoutDirection(r3);
        return;
    }

    private MarginLayoutParamsCompat() {
    }
}
