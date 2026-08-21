package com.czhj.sdk.common.utils;

public class Dips {
    public Dips() {
            r0 = this;
            r0.<init>()
            return
    }

    private static float a(float r0, android.content.Context r1) {
            float r1 = getDensity(r1)
            float r0 = r0 / r1
            return r0
    }

    public static int asIntPixels(float r0, android.content.Context r1) {
            float r0 = c(r0, r1)
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            return r0
    }

    private static float b(float r0, android.content.Context r1) {
            float r1 = getDensity(r1)
            float r0 = r0 * r1
            return r0
    }

    private static float c(float r1, android.content.Context r2) {
            android.content.res.Resources r2 = r2.getResources()
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            r0 = 1
            float r1 = android.util.TypedValue.applyDimension(r0, r1, r2)
            return r1
    }

    public static int dipsToIntPixels(float r0, android.content.Context r1) {
            float r0 = b(r0, r1)
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            return r0
    }

    public static float getDensity(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            return r0
    }

    public static int pixelsToIntDips(float r0, android.content.Context r1) {
            float r0 = a(r0, r1)
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 + r1
            int r0 = (int) r0
            return r0
    }

    public static int screenHeightAsIntDips(android.content.Context r1) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            android.content.res.Resources r0 = r1.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.heightPixels
            float r0 = (float) r0
            int r1 = pixelsToIntDips(r0, r1)
            return r1
    }

    public static int screenWidthAsIntDips(android.content.Context r1) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            android.content.res.Resources r0 = r1.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            float r0 = (float) r0
            int r1 = pixelsToIntDips(r0, r1)
            return r1
    }
}
