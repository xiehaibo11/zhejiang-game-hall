package android.support.graphics.drawable;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.graphics.PathParser;
import android.util.AttributeSet;
import android.view.InflateException;
import android.view.animation.Interpolator;
import org.xmlpull.v1.XmlPullParser;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class PathInterpolatorCompat implements Interpolator {
    public static final double EPSILON = 1.0E-5d;
    public static final int MAX_NUM_POINTS = 3000;
    private static final float PRECISION = 0.002f;
    private float[] mX;
    private float[] mY;

    public PathInterpolatorCompat(Context r2, AttributeSet r3, XmlPullParser r4) {
        this(r2.getResources(), r2.getTheme(), r3, r4);
    }

    public PathInterpolatorCompat(Resources r2, Resources.Theme r3, AttributeSet r4, XmlPullParser r5) {
        TypedArray r22 = TypedArrayUtils.obtainAttributes(r2, r3, r4, AndroidResources.STYLEABLE_PATH_INTERPOLATOR);
        parseInterpolatorFromTypeArray(r22, r5);
        r22.recycle();
    }

    private void parseInterpolatorFromTypeArray(TypedArray r8, XmlPullParser r9) {
        if (TypedArrayUtils.hasAttribute(r9, "pathData") == false) goto L10;
        String r82 = TypedArrayUtils.getNamedString(r8, r9, "pathData", 4);
        Path r92 = PathParser.createPathFromPathData(r82);
        if (r92 == null) goto L8;
        initPath(r92);
        return;
    L8:
        throw new InflateException("The path is null, which is created from " + r82);
    L10:
        if (TypedArrayUtils.hasAttribute(r9, "controlX1") == false) goto L24;
        if (TypedArrayUtils.hasAttribute(r9, "controlY1") == false) goto L22;
        float r0 = TypedArrayUtils.getNamedFloat(r8, r9, "controlX1", 0, 0.0f);
        float r1 = TypedArrayUtils.getNamedFloat(r8, r9, "controlY1", 1, 0.0f);
        boolean r4 = TypedArrayUtils.hasAttribute(r9, "controlX2");
        if (r4 != TypedArrayUtils.hasAttribute(r9, "controlY2")) goto L20;
        if (r4 == true) goto L17;
        initQuad(r0, r1);
        return;
    L17:
        initCubic(r0, r1, TypedArrayUtils.getNamedFloat(r8, r9, "controlX2", 2, 0.0f), TypedArrayUtils.getNamedFloat(r8, r9, "controlY2", 3, 0.0f));
        return;
    L20:
        throw new InflateException("pathInterpolator requires both controlX2 and controlY2 for cubic Beziers.");
    L22:
        throw new InflateException("pathInterpolator requires the controlY1 attribute");
    L24:
        throw new InflateException("pathInterpolator requires the controlX1 attribute");
    }

    private void initQuad(float r3, float r4) {
        Path r0 = new Path();
        r0.moveTo(0.0f, 0.0f);
        r0.quadTo(r3, r4, 1.0f, 1.0f);
        initPath(r0);
    }

    private void initCubic(float r9, float r10, float r11, float r12) {
        Path r7 = new Path();
        r7.moveTo(0.0f, 0.0f);
        r7.cubicTo(r9, r10, r11, r12, 1.0f, 1.0f);
        initPath(r7);
    }

    private void initPath(Path r11) {
        int r1 = 0;
        PathMeasure r0 = new PathMeasure(r11, false);
        float r112 = r0.getLength();
        int r2 = Math.min(MAX_NUM_POINTS, ((int) (r112 / PRECISION)) + 1);
        if (r2 <= 0) goto L30;
        this.mX = new float[r2];
        this.mY = new float[r2];
        float[] r4 = new float[2];
        int r5 = 0;
    L5:
        if (r5 >= r2) goto L8;
        r0.getPosTan((r5 * r112) / (r2 - 1), r4, null);
        this.mX[r5] = r4[0];
        this.mY[r5] = r4[1];
        r5 = r5 + 1;
        goto L5
    L8:
        if (Math.abs(this.mX[0]) <= 1.0E-5d) goto L10;
    L27:
        StringBuilder r02 = new StringBuilder();
        r02.append("The Path must start at (0,0) and end at (1,1) start: ");
        r02.append(this.mX[0]);
        r02.append(",");
        r02.append(this.mY[0]);
        r02.append(" end:");
        int r22 = r2 - 1;
        r02.append(this.mX[r22]);
        r02.append(",");
        r02.append(this.mY[r22]);
        throw new IllegalArgumentException(r02.toString());
    L10:
        if (Math.abs(this.mY[0]) > 1.0E-5d) goto L27;
        int r42 = r2 - 1;
        if (Math.abs(this.mX[r42] - 1.0f) > 1.0E-5d) goto L27;
        if (Math.abs(this.mY[r42] - 1.0f) > 1.0E-5d) goto L27;
        int r113 = 0;
        float r3 = 0.0f;
    L16:
        if (r1 >= r2) goto L23;
        float[] r43 = this.mX;
        int r52 = r113 + 1;
        float r114 = r43[r113];
        if (r114 < r3) goto L21;
        r43[r1] = r114;
        r1 = r1 + 1;
        r3 = r114;
        r113 = r52;
        goto L16
    L21:
        throw new IllegalArgumentException("The Path cannot loop back on itself, x :" + r114);
    L23:
        if (r0.nextContour() == true) goto L26;
        return;
    L26:
        throw new IllegalArgumentException("The Path should be continuous, can't have 2+ contours");
    L30:
        throw new IllegalArgumentException("The Path has a invalid length " + r112);
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
}
