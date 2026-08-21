package com.kwad.components.ad.reward.i;

public final class a {
    public static int a(android.app.Activity r2) {
            r0 = -1
            if (r2 == 0) goto L2a
            boolean r1 = r2.isFinishing()
            if (r1 == 0) goto La
            goto L2a
        La:
            android.view.Window r2 = r2.getWindow()
            android.view.View r2 = r2.getDecorView()
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r2 = r2.findViewById(r1)
            boolean r1 = r2 instanceof android.view.ViewGroup
            if (r1 == 0) goto L2a
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            android.widget.TextView r2 = e(r2)
            if (r2 == 0) goto L2a
            int r2 = b(r2)
            return r2
        L2a:
            return r0
    }

    private static boolean a(android.widget.TextView r1) {
            if (r1 == 0) goto L10
            java.lang.CharSequence r1 = r1.getContentDescription()
            java.lang.String r0 = "topBarCallLabel"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L10
            r1 = 1
            return r1
        L10:
            r1 = 0
            return r1
    }

    private static int b(android.widget.TextView r1) {
            if (r1 != 0) goto L4
            r1 = -1
            return r1
        L4:
            r0 = 2
            int[] r0 = new int[r0]
            r1.getLocationOnScreen(r0)
            r1 = 1
            r1 = r0[r1]
            return r1
    }

    private static android.widget.TextView e(android.view.ViewGroup r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = r5.getChildCount()
            r2 = 0
        L9:
            if (r2 >= r1) goto L2c
            android.view.View r3 = r5.getChildAt(r2)
            boolean r4 = r3 instanceof android.view.ViewGroup
            if (r4 == 0) goto L1c
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            android.widget.TextView r3 = e(r3)
            if (r3 == 0) goto L29
            return r3
        L1c:
            boolean r4 = r3 instanceof android.widget.TextView
            if (r4 == 0) goto L29
            android.widget.TextView r3 = (android.widget.TextView) r3
            boolean r4 = a(r3)
            if (r4 == 0) goto L29
            return r3
        L29:
            int r2 = r2 + 1
            goto L9
        L2c:
            return r0
    }
}
