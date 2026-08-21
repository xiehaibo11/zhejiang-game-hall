package com.bianfeng.ymnsdk.util;

public class ViewHelper {


    public ViewHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void setLogoView(android.app.Activity r4, android.view.View r5, long r6, java.util.Observer r8) {
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r4 = r4.findViewById(r0)     // Catch: java.lang.Exception -> L28
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Exception -> L28
            r0 = 0
            android.view.View r1 = r4.getChildAt(r0)     // Catch: java.lang.Exception -> L28
            r4.removeView(r1)     // Catch: java.lang.Exception -> L28
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Exception -> L28
            r3 = -1
            r2.<init>(r3, r3)     // Catch: java.lang.Exception -> L28
            r4.addView(r5, r0, r2)     // Catch: java.lang.Exception -> L28
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Exception -> L28
            com.bianfeng.ymnsdk.util.ViewHelper$1 r3 = new com.bianfeng.ymnsdk.util.ViewHelper$1     // Catch: java.lang.Exception -> L28
            r3.<init>(r4, r5, r1, r8)     // Catch: java.lang.Exception -> L28
            r2.<init>(r3)     // Catch: java.lang.Exception -> L28
            r2.sendEmptyMessageDelayed(r0, r6)     // Catch: java.lang.Exception -> L28
            goto L2c
        L28:
            r4 = move-exception
            r4.printStackTrace()
        L2c:
            return
    }
}
