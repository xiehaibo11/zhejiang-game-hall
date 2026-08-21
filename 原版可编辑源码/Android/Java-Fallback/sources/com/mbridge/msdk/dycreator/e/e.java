package com.mbridge.msdk.dycreator.e;

public final class e {
    public static int a(android.content.Context r0, float r1) {
            android.util.DisplayMetrics r0 = a(r0)
            float r0 = r0.density
            float r1 = r1 / r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
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
}
