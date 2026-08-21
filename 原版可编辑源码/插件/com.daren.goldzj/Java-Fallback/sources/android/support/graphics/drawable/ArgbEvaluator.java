package android.support.graphics.drawable;

import android.animation.TypeEvaluator;
import android.support.annotation.RestrictTo;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class ArgbEvaluator implements TypeEvaluator {
    private static final ArgbEvaluator sInstance = null;

    public ArgbEvaluator() {
    }

    static {
        sInstance = new ArgbEvaluator();
    }

    public static ArgbEvaluator getInstance() {
        return sInstance;
    }

    @Override
    public Object evaluate(float r12, Object r13, Object r14) {
        int r132 = ((Integer) r13).intValue();
        float r0 = ((r132 >> 24) & 255) / 255.0f;
        int r142 = ((Integer) r14).intValue();
        float r2 = (float) Math.pow(((r132 >> 16) & 255) / 255.0f, 2.2d);
        float r3 = (float) Math.pow(((r132 >> 8) & 255) / 255.0f, 2.2d);
        float r133 = (float) Math.pow((r132 & 255) / 255.0f, 2.2d);
        float r5 = (float) Math.pow(((r142 >> 16) & 255) / 255.0f, 2.2d);
        float r02 = r0 + (((((r142 >> 24) & 255) / 255.0f) - r0) * r12);
        float r32 = r3 + ((((float) Math.pow(((r142 >> 8) & 255) / 255.0f, 2.2d)) - r3) * r12);
        float r134 = r133 + (r12 * (((float) Math.pow((r142 & 255) / 255.0f, 2.2d)) - r133));
        float r122 = ((float) Math.pow(r2 + ((r5 - r2) * r12), 0.45454545454545453d)) * 255.0f;
        float r143 = ((float) Math.pow(r32, 0.45454545454545453d)) * 255.0f;
        float r135 = ((float) Math.pow(r134, 0.45454545454545453d)) * 255.0f;
        return Integer.valueOf((((Math.round(r122) << 16) | (Math.round(r02 * 255.0f) << 24)) | (Math.round(r143) << 8)) | Math.round(r135));
    }
}
