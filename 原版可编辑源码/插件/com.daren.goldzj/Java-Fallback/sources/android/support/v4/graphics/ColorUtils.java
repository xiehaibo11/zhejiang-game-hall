package android.support.v4.graphics;

import android.graphics.Color;
import android.support.annotation.ColorInt;
import android.support.annotation.FloatRange;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;
import android.support.annotation.VisibleForTesting;
import android.support.v4.view.ViewCompat;
import java.util.Objects;

public final class ColorUtils {
    private static final int MIN_ALPHA_SEARCH_MAX_ITERATIONS = 10;
    private static final int MIN_ALPHA_SEARCH_PRECISION = 1;
    private static final ThreadLocal<double[]> TEMP_ARRAY = null;
    private static final double XYZ_EPSILON = 0.008856d;
    private static final double XYZ_KAPPA = 903.3d;
    private static final double XYZ_WHITE_REFERENCE_X = 95.047d;
    private static final double XYZ_WHITE_REFERENCE_Y = 100.0d;
    private static final double XYZ_WHITE_REFERENCE_Z = 108.883d;

    private static float constrain(float r1, float r2, float r3) {
        if (r1 >= r2) goto L6;
        return r2;
    L6:
        if (r1 > r3) goto L8;
        return r1;
    L8:
        return r3;
    }

    private static int constrain(int r0, int r1, int r2) {
        if (r0 < r1) goto L7;
        if (r0 > r2) goto L6;
        return r0;
    L6:
        return r2;
    L7:
        return r1;
    }

    static {
        TEMP_ARRAY = new ThreadLocal();
    }

    private ColorUtils() {
    }

    public static int compositeColors(@ColorInt int r6, @ColorInt int r7) {
        int r0 = Color.alpha(r7);
        int r1 = Color.alpha(r6);
        int r2 = compositeAlpha(r1, r0);
        return Color.argb(r2, compositeComponent(Color.red(r6), r1, Color.red(r7), r0, r2), compositeComponent(Color.green(r6), r1, Color.green(r7), r0, r2), compositeComponent(Color.blue(r6), r1, Color.blue(r7), r0, r2));
    }

    @NonNull
    @RequiresApi(26)
    public static Color compositeColors(@NonNull Color r7, @NonNull Color r8) {
        if (Objects.equals(r7.getModel(), r8.getModel()) == false) goto L17;
        if (Objects.equals(r8.getColorSpace(), r7.getColorSpace()) == true) goto L8;
        r7 = r7.convert(r8.getColorSpace());
    L8:
        float[] r0 = r7.getComponents();
        float[] r1 = r8.getComponents();
        float r72 = r7.alpha();
        float r2 = r8.alpha() * (1.0f - r72);
        int r3 = r8.getComponentCount() - 1;
        r1[r3] = r72 + r2;
        if (r1[r3] <= 0.0f) goto L11;
        r72 = r72 / r1[r3];
        r2 = r2 / r1[r3];
    L11:
        int r4 = 0;
    L12:
        if (r4 >= r3) goto L15;
        r1[r4] = (r0[r4] * r72) + (r1[r4] * r2);
        r4 = r4 + 1;
        goto L12
    L15:
        return Color.valueOf(r1, r8.getColorSpace());
    L17:
        throw new IllegalArgumentException("Color models must match (" + r7.getModel() + " vs. " + r8.getModel() + ")");
    }

    private static int compositeAlpha(int r0, int r1) {
        return 255 - (((255 - r1) * (255 - r0)) / 255);
    }

    private static int compositeComponent(int r0, int r1, int r2, int r3, int r4) {
        if (r4 != 0) goto L6;
        return 0;
    L6:
        return (((r0 * 255) * r1) + ((r2 * r3) * (255 - r1))) / (r4 * 255);
    }

    @FloatRange(from = 0.0d, to = 1.0d)
    public static double calculateLuminance(@ColorInt int r5) {
        double[] r0 = getTempDouble3Array();
        colorToXYZ(r5, r0);
        return r0[1] / XYZ_WHITE_REFERENCE_Y;
    }

    public static double calculateContrast(@ColorInt int r4, @ColorInt int r5) {
        if (Color.alpha(r5) != 255) goto L10;
        if (Color.alpha(r4) >= 255) goto L7;
        r4 = compositeColors(r4, r5);
    L7:
        double r0 = calculateLuminance(r4) + 0.05d;
        double r42 = calculateLuminance(r5) + 0.05d;
        return Math.max(r0, r42) / Math.min(r0, r42);
    L10:
        throw new IllegalArgumentException("background can not be translucent: #" + Integer.toHexString(r5));
    }

    public static int calculateMinimumAlpha(@ColorInt int r8, @ColorInt int r9, float r10) {
        int r1 = 255;
        if (Color.alpha(r9) != 255) goto L20;
        double r4 = r10;
        if (calculateContrast(setAlphaComponent(r8, 255), r9) >= r4) goto L8;
        return -1;
    L8:
        int r102 = 0;
        int r0 = 0;
    L10:
        if (r102 > 10) goto L18;
        if ((r1 - r0) <= 1) goto L18;
        int r2 = (r0 + r1) / 2;
        if (calculateContrast(setAlphaComponent(r8, r2), r9) >= r4) goto L16;
        r0 = r2;
    L17:
        r102 = r102 + 1;
        goto L10
    L16:
        r1 = r2;
    L18:
        return r1;
    L20:
        throw new IllegalArgumentException("background can not be translucent: #" + Integer.toHexString(r9));
    }

    public static void RGBToHSL(@IntRange(from = 0, to = 255) int r7, @IntRange(from = 0, to = 255) int r8, @IntRange(from = 0, to = 255) int r9, @NonNull float[] r10) {
        float r72 = r7 / 255.0f;
        float r82 = r8 / 255.0f;
        float r92 = r9 / 255.0f;
        float r0 = Math.max(r72, Math.max(r82, r92));
        float r1 = Math.min(r72, Math.min(r82, r92));
        float r2 = r0 - r1;
        float r3 = (r0 + r1) / 2.0f;
        if (r0 != r1) goto L6;
        float r73 = 0.0f;
        float r83 = 0.0f;
    L13:
        float r74 = (r73 * 60.0f) % 360.0f;
        if (r74 >= 0.0f) goto L16;
        r74 = r74 + 360.0f;
    L16:
        r10[0] = constrain(r74, 0.0f, 360.0f);
        r10[1] = constrain(r83, 0.0f, 1.0f);
        r10[2] = constrain(r3, 0.0f, 1.0f);
        return;
    L6:
        if (r0 != r72) goto L9;
        r73 = ((r82 - r92) / r2) % 6.0f;
    L12:
        r83 = r2 / (1.0f - Math.abs((2.0f * r3) - 1.0f));
        goto L13
    L9:
        if (r0 != r82) goto L11;
        r73 = ((r92 - r72) / r2) + 2.0f;
        goto L12
    L11:
        r73 = ((r72 - r82) / r2) + 4.0f;
        goto L12
    }

    public static void colorToHSL(@ColorInt int r2, @NonNull float[] r3) {
        RGBToHSL(Color.red(r2), Color.green(r2), Color.blue(r2), r3);
    }

    @ColorInt
    public static int HSLToColor(@NonNull float[] r6) {
        float r1 = r6[0];
        float r2 = r6[1];
        float r62 = r6[2];
        float r4 = (1.0f - Math.abs((r62 * 2.0f) - 1.0f)) * r2;
        float r63 = r62 - (0.5f * r4);
        float r5 = (1.0f - Math.abs(((r1 / 60.0f) % 2.0f) - 1.0f)) * r4;
        switch((((int) r1) / 60)) {
            case 0: goto L10;
            case 1: goto L9;
            case 2: goto L8;
            case 3: goto L7;
            case 4: goto L6;
            case 5: goto L5;
            case 6: goto L5;
            default: goto L4;
        };
    L4:
        int r64 = 0;
        int r12 = 0;
        int r3 = 0;
    L12:
        return Color.rgb(constrain(r12, 0, 255), constrain(r3, 0, 255), constrain(r64, 0, 255));
    L5:
        r12 = Math.round((r4 + r63) * 255.0f);
        r3 = Math.round(r63 * 255.0f);
        r64 = Math.round((r5 + r63) * 255.0f);
        goto L12
    L6:
        r12 = Math.round((r5 + r63) * 255.0f);
        r3 = Math.round(r63 * 255.0f);
        r64 = Math.round((r4 + r63) * 255.0f);
        goto L12
    L7:
        r12 = Math.round(r63 * 255.0f);
        r3 = Math.round((r5 + r63) * 255.0f);
        r64 = Math.round((r4 + r63) * 255.0f);
        goto L12
    L8:
        r12 = Math.round(r63 * 255.0f);
        r3 = Math.round((r4 + r63) * 255.0f);
        r64 = Math.round((r5 + r63) * 255.0f);
        goto L12
    L9:
        r12 = Math.round((r5 + r63) * 255.0f);
        r3 = Math.round((r4 + r63) * 255.0f);
        r64 = Math.round(r63 * 255.0f);
        goto L12
    L10:
        r12 = Math.round((r4 + r63) * 255.0f);
        r3 = Math.round((r5 + r63) * 255.0f);
        r64 = Math.round(r63 * 255.0f);
        goto L12
    }

    @ColorInt
    public static int setAlphaComponent(@ColorInt int r1, @IntRange(from = 0, to = 255) int r2) {
        if (r2 < 0) goto L8;
        if (r2 > 255) goto L8;
        return (r1 & ViewCompat.MEASURED_SIZE_MASK) | (r2 << 24);
    L8:
        throw new IllegalArgumentException("alpha must be between 0 and 255.");
    }

    public static void colorToLAB(@ColorInt int r2, @NonNull double[] r3) {
        RGBToLAB(Color.red(r2), Color.green(r2), Color.blue(r2), r3);
    }

    public static void RGBToLAB(@IntRange(from = 0, to = 255) int r7, @IntRange(from = 0, to = 255) int r8, @IntRange(from = 0, to = 255) int r9, @NonNull double[] r10) {
        RGBToXYZ(r7, r8, r9, r10);
        XYZToLAB(r10[0], r10[1], r10[2], r10);
    }

    public static void colorToXYZ(@ColorInt int r2, @NonNull double[] r3) {
        RGBToXYZ(Color.red(r2), Color.green(r2), Color.blue(r2), r3);
    }

    public static void RGBToXYZ(@IntRange(from = 0, to = 255) int r19, @IntRange(from = 0, to = 255) int r20, @IntRange(from = 0, to = 255) int r21, @NonNull double[] r22) {
        if (r22.length != 3) goto L19;
        double r1 = ((double) r19) / 255.0d;
        if (r1 >= 0.04045d) goto L7;
        double r12 = r1 / 12.92d;
    L8:
        double r15 = r12;
        double r13 = ((double) r20) / 255.0d;
        if (r13 >= 0.04045d) goto L11;
        double r14 = r13 / 12.92d;
    L12:
        double r17 = r14;
        double r16 = ((double) r21) / 255.0d;
        if (r16 >= 0.04045d) goto L15;
        double r18 = r16 / 12.92d;
    L16:
        r22[0] = (((0.4124d * r15) + (0.3576d * r17)) + (0.1805d * r18)) * XYZ_WHITE_REFERENCE_Y;
        r22[1] = (((0.2126d * r15) + (0.7152d * r17)) + (0.0722d * r18)) * XYZ_WHITE_REFERENCE_Y;
        r22[2] = (((r15 * 0.0193d) + (r17 * 0.1192d)) + (r18 * 0.9505d)) * XYZ_WHITE_REFERENCE_Y;
        return;
    L15:
        r18 = Math.pow((r16 + 0.055d) / 1.055d, 2.4d);
        goto L16
    L11:
        r14 = Math.pow((r13 + 0.055d) / 1.055d, 2.4d);
        goto L12
    L7:
        r12 = Math.pow((r1 + 0.055d) / 1.055d, 2.4d);
        goto L8
    L19:
        throw new IllegalArgumentException("outXyz must have a length of 3.");
    }

    public static void XYZToLAB(@FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_X) double r7, @FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Y) double r9, @FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Z) double r11, @NonNull double[] r13) {
        if (r13.length != 3) goto L7;
        double r72 = pivotXyzComponent(r7 / XYZ_WHITE_REFERENCE_X);
        double r92 = pivotXyzComponent(r9 / XYZ_WHITE_REFERENCE_Y);
        double r112 = pivotXyzComponent(r11 / XYZ_WHITE_REFERENCE_Z);
        r13[0] = Math.max(0.0d, (116.0d * r92) - 16.0d);
        r13[1] = (r72 - r92) * 500.0d;
        r13[2] = (r92 - r112) * 200.0d;
        return;
    L7:
        throw new IllegalArgumentException("outLab must have a length of 3.");
    }

    public static void LABToXYZ(@FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Y) double r19, @FloatRange(from = -128.0d, to = 127.0d) double r21, @FloatRange(from = -128.0d, to = 127.0d) double r23, @NonNull double[] r25) {
        double r2 = (r19 + 16.0d) / 116.0d;
        double r6 = (r21 / 500.0d) + r2;
        double r8 = r2 - (r23 / 200.0d);
        double r12 = Math.pow(r6, 3.0d);
        if (r12 > XYZ_EPSILON) goto L7;
        r12 = ((r6 * 116.0d) - 16.0d) / XYZ_KAPPA;
    L7:
        if (r19 <= 7.9996247999999985d) goto L9;
        double r22 = Math.pow(r2, 3.0d);
    L10:
        double r62 = Math.pow(r8, 3.0d);
        if (r62 > XYZ_EPSILON) goto L14;
        r62 = ((r8 * 116.0d) - 16.0d) / XYZ_KAPPA;
    L14:
        r25[0] = r12 * XYZ_WHITE_REFERENCE_X;
        r25[1] = r22 * XYZ_WHITE_REFERENCE_Y;
        r25[2] = r62 * XYZ_WHITE_REFERENCE_Z;
        return;
    L9:
        r22 = r19 / XYZ_KAPPA;
        goto L10
    }

    @ColorInt
    public static int XYZToColor(@FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_X) double r17, @FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Y) double r19, @FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Z) double r21) {
        double r0 = (((3.2406d * r17) + ((-1.5372d) * r19)) + ((-0.4986d) * r21)) / XYZ_WHITE_REFERENCE_Y;
        double r4 = ((((-0.9689d) * r17) + (1.8758d * r19)) + (0.0415d * r21)) / XYZ_WHITE_REFERENCE_Y;
        double r6 = (((0.0557d * r17) + ((-0.204d) * r19)) + (1.057d * r21)) / XYZ_WHITE_REFERENCE_Y;
        if (r0 <= 0.0031308d) goto L5;
        double r02 = (Math.pow(r0, 0.4166666666666667d) * 1.055d) - 0.055d;
    L7:
        if (r4 <= 0.0031308d) goto L9;
        double r42 = (Math.pow(r4, 0.4166666666666667d) * 1.055d) - 0.055d;
    L11:
        if (r6 <= 0.0031308d) goto L13;
        double r62 = (Math.pow(r6, 0.4166666666666667d) * 1.055d) - 0.055d;
    L15:
        return Color.rgb(constrain((int) Math.round(r02 * 255.0d), 0, 255), constrain((int) Math.round(r42 * 255.0d), 0, 255), constrain((int) Math.round(r62 * 255.0d), 0, 255));
    L13:
        r62 = r6 * 12.92d;
        goto L15
    L9:
        r42 = r4 * 12.92d;
        goto L11
    L5:
        r02 = r0 * 12.92d;
        goto L7
    }

    @ColorInt
    public static int LABToColor(@FloatRange(from = 0.0d, to = XYZ_WHITE_REFERENCE_Y) double r8, @FloatRange(from = -128.0d, to = 127.0d) double r10, @FloatRange(from = -128.0d, to = 127.0d) double r12) {
        double[] r7 = getTempDouble3Array();
        LABToXYZ(r8, r10, r12, r7);
        return XYZToColor(r7[0], r7[1], r7[2]);
    }

    public static double distanceEuclidean(@NonNull double[] r9, @NonNull double[] r10) {
        return Math.sqrt((Math.pow(r9[0] - r10[0], 2.0d) + Math.pow(r9[1] - r10[1], 2.0d)) + Math.pow(r9[2] - r10[2], 2.0d));
    }

    private static double pivotXyzComponent(double r3) {
        if (r3 <= XYZ_EPSILON) goto L6;
        return Math.pow(r3, 0.3333333333333333d);
    L6:
        return ((r3 * XYZ_KAPPA) + 16.0d) / 116.0d;
    }

    @ColorInt
    public static int blendARGB(@ColorInt int r5, @ColorInt int r6, @FloatRange(from = 0.0d, to = 1.0d) float r7) {
        float r0 = 1.0f - r7;
        return Color.argb((int) ((Color.alpha(r5) * r0) + (Color.alpha(r6) * r7)), (int) ((Color.red(r5) * r0) + (Color.red(r6) * r7)), (int) ((Color.green(r5) * r0) + (Color.green(r6) * r7)), (int) ((Color.blue(r5) * r0) + (Color.blue(r6) * r7)));
    }

    public static void blendHSL(@NonNull float[] r4, @NonNull float[] r5, @FloatRange(from = 0.0d, to = 1.0d) float r6, @NonNull float[] r7) {
        if (r7.length != 3) goto L7;
        float r0 = 1.0f - r6;
        r7[0] = circularInterpolate(r4[0], r5[0], r6);
        r7[1] = (r4[1] * r0) + (r5[1] * r6);
        r7[2] = (r4[2] * r0) + (r5[2] * r6);
        return;
    L7:
        throw new IllegalArgumentException("result must have a length of 3.");
    }

    public static void blendLAB(@NonNull double[] r7, @NonNull double[] r8, @FloatRange(from = 0.0d, to = 1.0d) double r9, @NonNull double[] r11) {
        if (r11.length != 3) goto L7;
        double r0 = 1.0d - r9;
        r11[0] = (r7[0] * r0) + (r8[0] * r9);
        r11[1] = (r7[1] * r0) + (r8[1] * r9);
        r11[2] = (r7[2] * r0) + (r8[2] * r9);
        return;
    L7:
        throw new IllegalArgumentException("outResult must have a length of 3.");
    }

    @VisibleForTesting
    static float circularInterpolate(float r3, float r4, float r5) {
        if (Math.abs(r4 - r3) <= 180.0f) goto L9;
        if (r4 <= r3) goto L7;
        r3 = r3 + 360.0f;
        goto L9
    L7:
        r4 = r4 + 360.0f;
    L9:
        return (r3 + ((r4 - r3) * r5)) % 360.0f;
    }

    private static double[] getTempDouble3Array() {
        double[] r0 = TEMP_ARRAY.get();
        if (r0 != null) goto L6;
        double[] r02 = new double[3];
        TEMP_ARRAY.set(r02);
        return r02;
    L6:
        return r0;
    }
}
