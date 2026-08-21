package android.support.v7.widget;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Color;
import android.support.v4.graphics.ColorUtils;
import android.util.TypedValue;

class ThemeUtils {
    static final int[] ACTIVATED_STATE_SET = null;
    static final int[] CHECKED_STATE_SET = null;
    static final int[] DISABLED_STATE_SET = null;
    static final int[] EMPTY_STATE_SET = null;
    static final int[] FOCUSED_STATE_SET = null;
    static final int[] NOT_PRESSED_OR_FOCUSED_STATE_SET = null;
    static final int[] PRESSED_STATE_SET = null;
    static final int[] SELECTED_STATE_SET = null;
    private static final int[] TEMP_ARRAY = null;
    private static final ThreadLocal<TypedValue> TL_TYPED_VALUE = null;

    static {
        TL_TYPED_VALUE = new ThreadLocal();
        DISABLED_STATE_SET = new int[]{-16842910};
        FOCUSED_STATE_SET = new int[]{R.attr.state_focused};
        ACTIVATED_STATE_SET = new int[]{R.attr.state_activated};
        PRESSED_STATE_SET = new int[]{R.attr.state_pressed};
        CHECKED_STATE_SET = new int[]{R.attr.state_checked};
        SELECTED_STATE_SET = new int[]{R.attr.state_selected};
        NOT_PRESSED_OR_FOCUSED_STATE_SET = new int[]{-16842919, -16842908};
        EMPTY_STATE_SET = new int[0];
        TEMP_ARRAY = new int[1];
    }

    public static ColorStateList createDisabledStateList(int r4, int r5) {
        return new ColorStateList(new int[][]{DISABLED_STATE_SET, EMPTY_STATE_SET}, new int[]{r5, r4});
    }

    public static int getThemeAttrColor(Context r2, int r3) {
        int[] r0 = TEMP_ARRAY;
        r0[0] = r3;
        TintTypedArray r22 = TintTypedArray.obtainStyledAttributes(r2, null, r0);
        int r32 = r22.getColor(0, 0);     // Catch: Throwable -> L6
        r22.recycle();
        return r32;
    L6:
        th = move-exception;
        r22.recycle();
        throw th;
    }

    public static ColorStateList getThemeAttrColorStateList(Context r2, int r3) {
        int[] r0 = TEMP_ARRAY;
        r0[0] = r3;
        TintTypedArray r22 = TintTypedArray.obtainStyledAttributes(r2, null, r0);
        ColorStateList r32 = r22.getColorStateList(0);     // Catch: Throwable -> L6
        r22.recycle();
        return r32;
    L6:
        th = move-exception;
        r22.recycle();
        throw th;
    }

    public static int getDisabledThemeAttrColor(Context r4, int r5) {
        ColorStateList r0 = getThemeAttrColorStateList(r4, r5);
        if (r0 != null) goto L5;
    L8:
        TypedValue r02 = getTypedValue();
        r4.getTheme().resolveAttribute(R.attr.disabledAlpha, r02, true);
        return getThemeAttrColor(r4, r5, r02.getFloat());
    L5:
        if (r0.isStateful() == false) goto L8;
        return r0.getColorForState(DISABLED_STATE_SET, r0.getDefaultColor());
    }

    private static TypedValue getTypedValue() {
        TypedValue r0 = TL_TYPED_VALUE.get();
        if (r0 != null) goto L6;
        TypedValue r02 = new TypedValue();
        TL_TYPED_VALUE.set(r02);
        return r02;
    L6:
        return r0;
    }

    static int getThemeAttrColor(Context r0, int r1, float r2) {
        return ColorUtils.setAlphaComponent(getThemeAttrColor(r0, r1), Math.round(Color.alpha(r0) * r2));
    }

    private ThemeUtils() {
    }
}
