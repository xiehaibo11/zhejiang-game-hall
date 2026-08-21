package com.mbridge.msdk.widget.custom.b;

public final class a {
    public static int a(android.content.Context r0, float r1) {
            android.util.DisplayMetrics r0 = a(r0)
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public static int a(android.content.Context r1, int r2) {
            float r2 = (float) r2
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r0 = 1
            float r1 = android.util.TypedValue.applyDimension(r0, r2, r1)
            int r1 = (int) r1
            return r1
    }

    public static android.util.DisplayMetrics a(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.view.WindowManager r1 = (android.view.WindowManager) r1
            android.view.Display r1 = r1.getDefaultDisplay()
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            r1.getMetrics(r0)
            return r0
    }

    public static int b(android.content.Context r0, float r1) {
            android.util.DisplayMetrics r0 = a(r0)
            float r0 = r0.density
            float r1 = r1 / r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }
}
