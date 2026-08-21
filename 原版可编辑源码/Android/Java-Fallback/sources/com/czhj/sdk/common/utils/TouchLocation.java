package com.czhj.sdk.common.utils;

public class TouchLocation implements java.io.Serializable {
    private final int a;
    private final int b;

    public TouchLocation(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.czhj.sdk.common.utils.TouchLocation getTouchLocation(android.view.View r3, android.view.MotionEvent r4) {
            if (r3 == 0) goto L20
            float r0 = r4.getRawX()
            int r0 = (int) r0
            float r4 = r4.getRawY()
            int r4 = (int) r4
            r1 = 2
            int[] r1 = new int[r1]
            r3.getLocationOnScreen(r1)
            r3 = 0
            r3 = r1[r3]
            r2 = 1
            r1 = r1[r2]
            com.czhj.sdk.common.utils.TouchLocation r2 = new com.czhj.sdk.common.utils.TouchLocation
            int r0 = r0 - r3
            int r4 = r4 - r1
            r2.<init>(r0, r4)
            return r2
        L20:
            r3 = 0
            return r3
    }

    public int getX() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int getY() {
            r1 = this;
            int r0 = r1.b
            return r0
    }
}
