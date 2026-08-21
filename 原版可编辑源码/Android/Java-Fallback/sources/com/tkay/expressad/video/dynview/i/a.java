package com.tkay.expressad.video.dynview.i;

public final class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.PointF a(float r5, android.graphics.PointF r6, android.graphics.PointF r7, android.graphics.PointF r8) {
            android.graphics.PointF r0 = new android.graphics.PointF
            r0.<init>()
            r1 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 - r5
            float r2 = r1 * r1
            float r3 = r6.x
            float r3 = r3 * r2
            r4 = 1073741824(0x40000000, float:2.0)
            float r4 = r4 * r5
            float r4 = r4 * r1
            float r1 = r7.x
            float r1 = r1 * r4
            float r3 = r3 + r1
            float r5 = r5 * r5
            float r1 = r8.x
            float r1 = r1 * r5
            float r3 = r3 + r1
            r0.x = r3
            float r6 = r6.y
            float r2 = r2 * r6
            float r6 = r7.y
            float r4 = r4 * r6
            float r2 = r2 + r4
            float r6 = r8.y
            float r5 = r5 * r6
            float r2 = r2 + r5
            r0.y = r2
            return r0
    }

    private static android.graphics.PointF a(float r5, android.graphics.PointF r6, android.graphics.PointF r7, android.graphics.PointF r8, android.graphics.PointF r9) {
            android.graphics.PointF r0 = new android.graphics.PointF
            r0.<init>()
            r1 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 - r5
            float r2 = r6.x
            float r2 = r2 * r1
            float r2 = r2 * r1
            float r2 = r2 * r1
            float r3 = r7.x
            r4 = 1077936128(0x40400000, float:3.0)
            float r3 = r3 * r4
            float r3 = r3 * r5
            float r3 = r3 * r1
            float r3 = r3 * r1
            float r2 = r2 + r3
            float r3 = r8.x
            float r3 = r3 * r4
            float r3 = r3 * r5
            float r3 = r3 * r5
            float r3 = r3 * r1
            float r2 = r2 + r3
            float r3 = r9.x
            float r3 = r3 * r5
            float r3 = r3 * r5
            float r3 = r3 * r5
            float r2 = r2 + r3
            r0.x = r2
            float r6 = r6.y
            float r6 = r6 * r1
            float r6 = r6 * r1
            float r6 = r6 * r1
            float r7 = r7.y
            float r7 = r7 * r4
            float r7 = r7 * r5
            float r7 = r7 * r1
            float r7 = r7 * r1
            float r6 = r6 + r7
            float r7 = r8.y
            float r7 = r7 * r4
            float r7 = r7 * r5
            float r7 = r7 * r5
            float r7 = r7 * r1
            float r6 = r6 + r7
            float r7 = r9.y
            float r7 = r7 * r5
            float r7 = r7 * r5
            float r7 = r7 * r5
            float r6 = r6 + r7
            r0.y = r6
            return r0
    }
}
