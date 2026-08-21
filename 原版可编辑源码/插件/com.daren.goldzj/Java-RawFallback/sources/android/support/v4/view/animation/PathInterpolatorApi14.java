package android.support.v4.view.animation;

class PathInterpolatorApi14 implements android.view.animation.Interpolator {
    private static final float PRECISION = 0.002f;
    private final float[] mX;
    private final float[] mY;

    PathInterpolatorApi14(float r1, float r2) {
            r0 = this;
            android.graphics.Path r1 = createQuad(r1, r2)
            r0.<init>(r1)
            return
    }

    PathInterpolatorApi14(float r1, float r2, float r3, float r4) {
            r0 = this;
            android.graphics.Path r1 = createCubic(r1, r2, r3, r4)
            r0.<init>(r1)
            return
    }

    PathInterpolatorApi14(android.graphics.Path r9) {
            r8 = this;
            r8.<init>()
            android.graphics.PathMeasure r0 = new android.graphics.PathMeasure
            r1 = 0
            r0.<init>(r9, r1)
            float r9 = r0.getLength()
            r2 = 990057071(0x3b03126f, float:0.002)
            float r2 = r9 / r2
            int r2 = (int) r2
            r3 = 1
            int r2 = r2 + r3
            float[] r4 = new float[r2]
            r8.mX = r4
            float[] r4 = new float[r2]
            r8.mY = r4
            r4 = 2
            float[] r4 = new float[r4]
            r5 = 0
        L21:
            if (r5 >= r2) goto L3d
            float r6 = (float) r5
            float r6 = r6 * r9
            int r7 = r2 + (-1)
            float r7 = (float) r7
            float r6 = r6 / r7
            r7 = 0
            r0.getPosTan(r6, r4, r7)
            float[] r6 = r8.mX
            r7 = r4[r1]
            r6[r5] = r7
            float[] r6 = r8.mY
            r7 = r4[r3]
            r6[r5] = r7
            int r5 = r5 + 1
            goto L21
        L3d:
            return
    }

    private static android.graphics.Path createCubic(float r8, float r9, float r10, float r11) {
            android.graphics.Path r7 = new android.graphics.Path
            r7.<init>()
            r0 = 0
            r7.moveTo(r0, r0)
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = 1065353216(0x3f800000, float:1.0)
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.cubicTo(r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static android.graphics.Path createQuad(float r2, float r3) {
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1 = 0
            r0.moveTo(r1, r1)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.quadTo(r2, r3, r1, r1)
            return r0
    }

    @Override
    public float getInterpolation(float r7) {
            r6 = this;
            r0 = 0
            int r1 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r1 > 0) goto L6
            return r0
        L6:
            r1 = 1065353216(0x3f800000, float:1.0)
            int r2 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r2 < 0) goto Ld
            return r1
        Ld:
            r1 = 0
            float[] r2 = r6.mX
            int r2 = r2.length
            r3 = 1
            int r2 = r2 - r3
        L13:
            int r4 = r2 - r1
            if (r4 <= r3) goto L27
            int r4 = r1 + r2
            int r4 = r4 / 2
            float[] r5 = r6.mX
            r5 = r5[r4]
            int r5 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r5 >= 0) goto L25
            r2 = r4
            goto L13
        L25:
            r1 = r4
            goto L13
        L27:
            float[] r3 = r6.mX
            r4 = r3[r2]
            r5 = r3[r1]
            float r4 = r4 - r5
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L37
            float[] r7 = r6.mY
            r7 = r7[r1]
            return r7
        L37:
            r0 = r3[r1]
            float r7 = r7 - r0
            float r7 = r7 / r4
            float[] r0 = r6.mY
            r1 = r0[r1]
            r0 = r0[r2]
            float r0 = r0 - r1
            float r7 = r7 * r0
            float r1 = r1 + r7
            return r1
    }
}
