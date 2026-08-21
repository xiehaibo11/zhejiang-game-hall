package com.bianfeng.ymnsdk.util;

public class ViewHelper {


    public ViewHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void setLogoView(android.app.Activity r5, android.view.View r6, long r7, java.util.Observer r9) {
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r5.findViewById(r0)     // Catch: java.lang.Exception -> L29
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L29
            r1 = 0
            android.view.View r2 = r0.getChildAt(r1)     // Catch: java.lang.Exception -> L29
            r0.removeView(r2)     // Catch: java.lang.Exception -> L29
            android.view.ViewGroup$LayoutParams r3 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Exception -> L29
            r4 = -1
            r3.<init>(r4, r4)     // Catch: java.lang.Exception -> L29
            r0.addView(r6, r1, r3)     // Catch: java.lang.Exception -> L29
            android.os.Handler r3 = new android.os.Handler     // Catch: java.lang.Exception -> L29
            com.bianfeng.ymnsdk.util.ViewHelper$1 r4 = new com.bianfeng.ymnsdk.util.ViewHelper$1     // Catch: java.lang.Exception -> L29
            r4.<init>(r0, r6, r2, r9)     // Catch: java.lang.Exception -> L29
            r3.<init>(r4)     // Catch: java.lang.Exception -> L29
            r3.sendEmptyMessageDelayed(r1, r7)     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r0 = move-exception
            r0.printStackTrace()
        L2d:
            return
    }
}
