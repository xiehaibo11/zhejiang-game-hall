package com.mbridge.msdk.mbnative.controller;

public final class d {
    public static android.view.View a(android.content.Context r2, android.view.View r3) {
            r0 = 0
            if (r2 != 0) goto L4
            goto L1a
        L4:
            boolean r1 = r2 instanceof android.app.Activity
            if (r1 != 0) goto L9
            goto L1a
        L9:
            android.app.Activity r2 = (android.app.Activity) r2
            android.view.Window r2 = r2.getWindow()
            android.view.View r2 = r2.getDecorView()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r2.findViewById(r0)
        L1a:
            android.view.View r2 = a(r3)
            if (r0 == 0) goto L21
            goto L22
        L21:
            r0 = r2
        L22:
            return r0
    }

    private static android.view.View a(android.view.View r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.support.v4.view.ViewCompat.isAttachedToWindow(r2)     // Catch: java.lang.Throwable -> L7
        L7:
            android.view.View r2 = r2.getRootView()     // Catch: java.lang.Throwable -> L19
            if (r2 != 0) goto Le
            return r0
        Le:
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r2.findViewById(r1)     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L18
            r2 = r0
        L18:
            return r2
        L19:
            return r0
    }
}
