package android.support.v4.view.animation;

import android.graphics.Path;
import android.graphics.PathMeasure;
import android.view.animation.Interpolator;

class PathInterpolatorApi14 implements Interpolator {
    private static final float PRECISION = 0.002f;
    private final float[] mX;
    private final float[] mY;

    PathInterpolatorApi14(Path r9) {
        PathMeasure r0 = new PathMeasure(r9, false);
        float r92 = r0.getLength();
        int r2 = ((int) (r92 / PRECISION)) + 1;
        this.mX = new float[r2];
        this.mY = new float[r2];
        float[] r4 = new float[2];
        int r5 = 0;
    L3:
        if (r5 >= r2) goto L5;
        r0.getPosTan((r5 * r92) / (r2 - 1), r4, null);
        this.mX[r5] = r4[0];
        this.mY[r5] = r4[1];
        r5 = r5 + 1;
        goto L3
    }

    PathInterpolatorApi14(float r1, float r2) {
        this(createQuad(r1, r2));
    }

    PathInterpolatorApi14(float r1, float r2, float r3, float r4) {
        this(createCubic(r1, r2, r3, r4));
    }

    @Override
    public float getInterpolation(float r7) {
        if (r7 > 0.0f) goto L6;
        return 0.0f;
    L6:
        if (r7 < 1.0f) goto L8;
        return 1.0f;
    L8:
        int r1 = 0;
        int r2 = this.mX.length - 1;
    L10:
        if ((r2 - r1) <= 1) goto L15;
        int r4 = (r1 + r2) / 2;
        if (r7 < this.mX[r4]) goto L13;
        r1 = r4;
        goto L10
    L13:
        r2 = r4;
        goto L10
    L15:
        float[] r3 = this.mX;
        float r42 = r3[r2] - r3[r1];
        if (r42 == 0.0f) goto L18;
        float r72 = (r7 - r3[r1]) / r42;
        float[] r0 = this.mY;
        float r12 = r0[r1];
        return r12 + (r72 * (r0[r2] - r12));
    L18:
        return this.mY[r1];
    }

    private static Path createQuad(float r2, float r3) {
        Path r0 = new Path();
        r0.moveTo(0.0f, 0.0f);
        r0.quadTo(r2, r3, 1.0f, 1.0f);
        return r0;
    }

    private static Path createCubic(float r8, float r9, float r10, float r11) {
        Path r7 = new Path();
        r7.moveTo(0.0f, 0.0f);
        r7.cubicTo(r8, r9, r10, r11, 1.0f, 1.0f);
        return r7;
    }
}
