package com.kwad.sdk.utils;

public final class bm {
    public static boolean a(android.view.View r1, int r2, boolean r3) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            boolean r2 = b(r1, r2, r3)
            if (r2 == 0) goto L16
            android.content.Context r1 = r1.getContext()
            boolean r1 = cr(r1)
            if (r1 == 0) goto L16
            r1 = 1
            return r1
        L16:
            return r0
    }

    private static boolean b(android.view.View r7, int r8, boolean r9) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            android.view.ViewParent r1 = r7.getParent()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            android.content.Context r1 = r7.getContext()
            android.app.Activity r1 = com.kwad.sdk.m.l.dr(r1)
            if (r1 == 0) goto L1c
            boolean r1 = r1.isFinishing()
            if (r1 == 0) goto L1c
            return r0
        L1c:
            boolean r1 = r7.isShown()
            if (r1 == 0) goto L64
            int r1 = r7.getVisibility()
            if (r1 == 0) goto L29
            goto L64
        L29:
            if (r9 == 0) goto L32
            boolean r9 = r7.hasWindowFocus()
            if (r9 != 0) goto L32
            return r0
        L32:
            android.graphics.Rect r9 = new android.graphics.Rect
            r9.<init>()
            boolean r1 = r7.getGlobalVisibleRect(r9)
            if (r1 == 0) goto L64
            int r1 = r9.height()
            long r1 = (long) r1
            int r9 = r9.width()
            long r3 = (long) r9
            long r1 = r1 * r3
            int r9 = r7.getHeight()
            long r3 = (long) r9
            int r7 = r7.getWidth()
            long r5 = (long) r7
            long r3 = r3 * r5
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L64
            r5 = 100
            long r1 = r1 * r5
            long r7 = (long) r8
            long r7 = r7 * r3
            int r7 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r7 < 0) goto L64
            r7 = 1
            return r7
        L64:
            return r0
    }

    private static boolean cr(android.content.Context r1) {
            com.kwad.sdk.utils.an r0 = com.kwad.sdk.utils.an.IP()
            boolean r1 = r0.cr(r1)
            return r1
    }

    public static boolean o(android.view.View r2, int r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            r1 = 1
            boolean r3 = b(r2, r3, r1)
            if (r3 == 0) goto L1c
            boolean r3 = r2.hasWindowFocus()
            if (r3 == 0) goto L1c
            android.content.Context r2 = r2.getContext()
            boolean r2 = cr(r2)
            if (r2 == 0) goto L1c
            return r1
        L1c:
            return r0
    }
}
