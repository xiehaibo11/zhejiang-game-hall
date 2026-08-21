package com.czhj.sdk.common.utils;

import android.content.Context;
import android.util.TypedValue;
import com.czhj.sdk.common.utils.Preconditions;

/* JADX INFO: loaded from: classes.dex */
public class Dips {
    private static float a(float f, Context context) {
        return f / getDensity(context);
    }

    public static int asIntPixels(float f, Context context) {
        return (int) (c(f, context) + 0.5f);
    }

    private static float b(float f, Context context) {
        return f * getDensity(context);
    }

    private static float c(float f, Context context) {
        return TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    public static int dipsToIntPixels(float f, Context context) {
        return (int) (b(f, context) + 0.5f);
    }

    public static float getDensity(Context context) {
        return context.getResources().getDisplayMetrics().density;
    }

    public static int pixelsToIntDips(float f, Context context) {
        return (int) (a(f, context) + 0.5f);
    }

    public static int screenHeightAsIntDips(Context context) {
        Preconditions.NoThrow.checkNotNull(context);
        return pixelsToIntDips(context.getResources().getDisplayMetrics().heightPixels, context);
    }

    public static int screenWidthAsIntDips(Context context) {
        Preconditions.NoThrow.checkNotNull(context);
        return pixelsToIntDips(context.getResources().getDisplayMetrics().widthPixels, context);
    }
}
