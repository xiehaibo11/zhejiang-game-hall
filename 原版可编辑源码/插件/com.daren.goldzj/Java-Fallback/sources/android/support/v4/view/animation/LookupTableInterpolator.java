package android.support.v4.view.animation;

import android.view.animation.Interpolator;

abstract class LookupTableInterpolator implements Interpolator {
    private final float mStepSize;
    private final float[] mValues;

    protected LookupTableInterpolator(float[] r2) {
        this.mValues = r2;
        this.mStepSize = 1.0f / (this.mValues.length - 1);
    }

    @Override
    public float getInterpolation(float r5) {
        if (r5 < 1.0f) goto L6;
        return 1.0f;
    L6:
        if (r5 > 0.0f) goto L8;
        return 0.0f;
    L8:
        float[] r0 = this.mValues;
        int r02 = Math.min((int) ((r0.length - 1) * r5), r0.length - 2);
        float r2 = this.mStepSize;
        float r52 = (r5 - (r02 * r2)) / r2;
        float[] r1 = this.mValues;
        return r1[r02] + (r52 * (r1[r02 + 1] - r1[r02]));
    }
}
