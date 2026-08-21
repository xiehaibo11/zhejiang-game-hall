package com.tkay.core.common.l.a;

public final class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.view.View a(android.content.Context r1) {
            boolean r0 = r1 instanceof android.app.Activity
            if (r0 != 0) goto L6
            r1 = 0
            return r1
        L6:
            android.app.Activity r1 = (android.app.Activity) r1
            android.view.Window r1 = r1.getWindow()
            android.view.View r1 = r1.getDecorView()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r1 = r1.findViewById(r0)
            return r1
    }

    private static android.view.View a(android.content.Context r3, android.view.View r4) {
            boolean r0 = r3 instanceof android.app.Activity
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            r2 = 0
            if (r0 != 0) goto La
            r3 = r2
            goto L18
        La:
            android.app.Activity r3 = (android.app.Activity) r3
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            android.view.View r3 = r3.findViewById(r1)
        L18:
            if (r4 != 0) goto L1b
            goto L2a
        L1b:
            android.view.View r4 = r4.getRootView()
            if (r4 != 0) goto L22
            goto L2a
        L22:
            android.view.View r2 = r4.findViewById(r1)
            if (r2 == 0) goto L29
            goto L2a
        L29:
            r2 = r4
        L2a:
            if (r3 == 0) goto L2d
            return r3
        L2d:
            return r2
    }

    private static void a(android.view.View r1) {
            if (r1 == 0) goto L1a
            android.view.ViewParent r0 = r1.getParent()
            if (r0 != 0) goto L9
            goto L1a
        L9:
            android.view.ViewParent r0 = r1.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L1a
            android.view.ViewParent r0 = r1.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.removeView(r1)
        L1a:
            return
    }

    private static android.view.View b(android.view.View r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.view.View r1 = r1.getRootView()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r1.findViewById(r0)
            if (r0 == 0) goto L15
            return r0
        L15:
            return r1
    }
}
