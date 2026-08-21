package android.support.graphics.drawable;

import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.animation.AnimatorSet;
import android.animation.Keyframe;
import android.animation.ObjectAnimator;
import android.animation.PropertyValuesHolder;
import android.animation.TypeEvaluator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.os.Build;
import android.support.annotation.AnimatorRes;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.graphics.PathParser;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.util.Xml;
import android.view.InflateException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class AnimatorInflaterCompat {
    private static final boolean DBG_ANIMATOR_INFLATER = false;
    private static final int MAX_NUM_POINTS = 100;
    private static final String TAG = "AnimatorInflater";
    private static final int TOGETHER = 0;
    private static final int VALUE_TYPE_COLOR = 3;
    private static final int VALUE_TYPE_FLOAT = 0;
    private static final int VALUE_TYPE_INT = 1;
    private static final int VALUE_TYPE_PATH = 2;
    private static final int VALUE_TYPE_UNDEFINED = 4;

    private static class PathDataEvaluator implements TypeEvaluator<PathParser.PathDataNode[]> {
        private PathParser.PathDataNode[] mNodeArray;

        @Override
        public PathParser.PathDataNode[] evaluate(float r1, PathParser.PathDataNode[] r2, PathParser.PathDataNode[] r3) {
            return evaluate(r1, r2, r3);
        }

        PathDataEvaluator() {
        }

        PathDataEvaluator(PathParser.PathDataNode[] r1) {
            this.mNodeArray = r1;
        }

        public PathParser.PathDataNode[] evaluate(float r5, PathParser.PathDataNode[] r6, PathParser.PathDataNode[] r7) {
            if (PathParser.canMorph(r6, r7) == false) goto L16;
            PathParser.PathDataNode[] r0 = this.mNodeArray;
            if (r0 != null) goto L7;
        L8:
            this.mNodeArray = PathParser.deepCopyNodes(r6);
        L9:
            int r02 = 0;
        L11:
            if (r02 >= r6.length) goto L14;
            this.mNodeArray[r02].interpolatePathDataNode(r6[r02], r7[r02], r5);
            r02 = r02 + 1;
            goto L11
        L14:
            return this.mNodeArray;
        L7:
            if (PathParser.canMorph(r0, r6) == true) goto L9;
        L16:
            throw new IllegalArgumentException("Can't interpolate between two incompatible pathData");
        }
    }

    private static boolean isColorType(int r1) {
        if (r1 >= 28) goto L5;
    L7:
        return false;
    L5:
        if (r1 > 31) goto L7;
        return true;
    }

    public static Animator loadAnimator(Context r2, @AnimatorRes int r3) throws Resources.NotFoundException {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        return AnimatorInflater.loadAnimator(r2, r3);
    L6:
        return loadAnimator(r2, r2.getResources(), r2.getTheme(), r3);
    }

    public static Animator loadAnimator(Context r1, Resources r2, Resources.Theme r3, @AnimatorRes int r4) throws Resources.NotFoundException {
        return loadAnimator(r1, r2, r3, r4, 1.0f);
    }

    public static Animator loadAnimator(Context r2, Resources r3, Resources.Theme r4, @AnimatorRes int r5, float r6) throws Resources.NotFoundException {
        XmlResourceParser r1 = null;
        r1 = r3.getAnimation(r5);     // Catch: Throwable -> L7 IOException -> L9 XmlPullParserException -> L12
        Animator r22 = createAnimatorFromXml(r2, r3, r4, r1, r6);     // Catch: Throwable -> L7 IOException -> L9 XmlPullParserException -> L12
        if (r1 == null) goto L6;
        r1.close();
    L6:
        return r22;
    L7:
        th = move-exception;
        if (r1 == null) goto L17;
        r1.close();
    L17:
        throw th;
    L12:
        e = move-exception;
        Resources.NotFoundException r32 = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(r5));     // Catch: Throwable -> L7
        r32.initCause(e);     // Catch: Throwable -> L7
        throw r32;     // Catch: Throwable -> L7
    L9:
        e = move-exception;
        Resources.NotFoundException r33 = new Resources.NotFoundException("Can't load animation resource ID #0x" + Integer.toHexString(r5));     // Catch: Throwable -> L7
        r33.initCause(e);     // Catch: Throwable -> L7
        throw r33;     // Catch: Throwable -> L7
    }

    private static PropertyValuesHolder getPVH(TypedArray r11, int r12, int r13, int r14, String r15) {
        TypedValue r0 = r11.peekValue(r13);
        if (r0 == null) goto L5;
        boolean r3 = true;
    L6:
        if (r3 == false) goto L8;
        int r02 = r0.type;
    L9:
        TypedValue r4 = r11.peekValue(r14);
        if (r4 == null) goto L12;
        boolean r5 = true;
    L13:
        if (r5 == false) goto L15;
        int r42 = r4.type;
    L17:
        if (r12 != 4) goto L26;
        if (r3 == true) goto L20;
    L21:
        if (r5 == true) goto L23;
    L25:
        r12 = 0;
        goto L26
    L23:
        if (isColorType(r42) == false) goto L25;
    L24:
        r12 = 3;
        goto L26
    L20:
        if (isColorType(r02) == true) goto L24;
    L26:
        if (r12 != 0) goto L28;
        boolean r6 = true;
    L29:
        PropertyValuesHolder r8 = null;
        if (r12 != 2) goto L46;
        String r122 = r11.getString(r13);
        String r112 = r11.getString(r14);
        PathParser.PathDataNode[] r132 = PathParser.createNodesFromPathData(r122);
        PathParser.PathDataNode[] r142 = PathParser.createNodesFromPathData(r112);
        if (r132 != null) goto L34;
        if (r142 != null) goto L34;
        return null;
    L34:
        if (r132 == null) goto L44;
        PathDataEvaluator r03 = new PathDataEvaluator();
        if (r142 != null) goto L38;
        PropertyValuesHolder r113 = PropertyValuesHolder.ofObject(r15, r03, new Object[]{r132});
    L95:
        return r113;
    L38:
        if (PathParser.canMorph(r132, r142) == false) goto L41;
        r113 = PropertyValuesHolder.ofObject(r15, r03, new Object[]{r132, r142});
        goto L95
    L41:
        throw new InflateException(" Can't morph from " + r122 + " to " + r112);
    L44:
        if (r142 != null) goto L97;
        return null;
    L97:
        return PropertyValuesHolder.ofObject(r15, new PathDataEvaluator(), new Object[]{r142});
    L46:
        if (r12 != 3) goto L48;
        ArgbEvaluator r123 = ArgbEvaluator.getInstance();
    L50:
        if (r6 == false) goto L66;
        if (r3 == false) goto L61;
        if (r02 != 5) goto L54;
        float r133 = r11.getDimension(r13, 0.0f);
    L55:
        if (r5 == false) goto L60;
        if (r42 != 5) goto L58;
        float r114 = r11.getDimension(r14, 0.0f);
    L59:
        PropertyValuesHolder r115 = PropertyValuesHolder.ofFloat(r15, new float[]{r133, r114});
    L65:
        r8 = r115;
    L90:
        if (r8 == null) goto L98;
        if (r123 == null) goto L99;
        r8.setEvaluator(r123);
        return r8;
    L99:
        return r8;
    L98:
        return r8;
    L58:
        r114 = r11.getFloat(r14, 0.0f);
        goto L59
    L60:
        r115 = PropertyValuesHolder.ofFloat(r15, new float[]{r133});
        goto L65
    L54:
        r133 = r11.getFloat(r13, 0.0f);
        goto L55
    L61:
        if (r42 != 5) goto L63;
        float r116 = r11.getDimension(r14, 0.0f);
    L64:
        r115 = PropertyValuesHolder.ofFloat(r15, new float[]{r116});
        goto L65
    L63:
        r116 = r11.getFloat(r14, 0.0f);
        goto L64
    L66:
        if (r3 == false) goto L82;
        if (r02 != 5) goto L70;
        int r134 = (int) r11.getDimension(r13, 0.0f);
    L73:
        if (r5 == false) goto L81;
        if (r42 != 5) goto L77;
        int r117 = (int) r11.getDimension(r14, 0.0f);
    L80:
        r8 = PropertyValuesHolder.ofInt(r15, new int[]{r134, r117});
        goto L90
    L77:
        if (isColorType(r42) == false) goto L79;
        r117 = r11.getColor(r14, 0);
        goto L80
    L79:
        r117 = r11.getInt(r14, 0);
        goto L80
    L81:
        r8 = PropertyValuesHolder.ofInt(r15, new int[]{r134});
        goto L90
    L70:
        if (isColorType(r02) == false) goto L72;
        r134 = r11.getColor(r13, 0);
        goto L73
    L72:
        r134 = r11.getInt(r13, 0);
        goto L73
    L82:
        if (r5 == false) goto L90;
        if (r42 != 5) goto L86;
        int r118 = (int) r11.getDimension(r14, 0.0f);
    L89:
        r8 = PropertyValuesHolder.ofInt(r15, new int[]{r118});
        goto L90
    L86:
        if (isColorType(r42) == false) goto L88;
        r118 = r11.getColor(r14, 0);
        goto L89
    L88:
        r118 = r11.getInt(r14, 0);
        goto L89
    L48:
        r123 = null;
        goto L50
    L28:
        r6 = false;
        goto L29
    L15:
        r42 = 0;
        goto L17
    L12:
        r5 = false;
        goto L13
    L8:
        r02 = 0;
        goto L9
    L5:
        r3 = false;
        goto L6
    }

    private static void parseAnimatorFromTypeArray(ValueAnimator r11, TypedArray r12, TypedArray r13, float r14, XmlPullParser r15) {
        long r1 = TypedArrayUtils.getNamedInt(r12, r15, "duration", 1, 300);
        long r4 = TypedArrayUtils.getNamedInt(r12, r15, "startOffset", 2, 0);
        int r7 = TypedArrayUtils.getNamedInt(r12, r15, "valueType", 7, 4);
        if (TypedArrayUtils.hasAttribute(r15, "valueFrom") == true) goto L5;
    L12:
        r11.setDuration(r1);
        r11.setStartDelay(r4);
        r11.setRepeatCount(TypedArrayUtils.getNamedInt(r12, r15, "repeatCount", 3, 0));
        r11.setRepeatMode(TypedArrayUtils.getNamedInt(r12, r15, "repeatMode", 4, 1));
        if (r13 == null) goto L16;
        setupObjectAnimator(r11, r13, r7, r14, r15);
        return;
    L16:
        return;
    L5:
        if (TypedArrayUtils.hasAttribute(r15, "valueTo") == false) goto L12;
        if (r7 != 4) goto L9;
        r7 = inferValueTypeFromValues(r12, 5, 6);
    L9:
        PropertyValuesHolder r8 = getPVH(r12, r7, 5, 6, "");
        if (r8 == null) goto L12;
        r11.setValues(new PropertyValuesHolder[]{r8});
        goto L12
    }

    private static void setupObjectAnimator(ValueAnimator r5, TypedArray r6, int r7, float r8, XmlPullParser r9) {
        ObjectAnimator r52 = (ObjectAnimator) r5;
        String r0 = TypedArrayUtils.getNamedString(r6, r9, "pathData", 1);
        if (r0 == null) goto L13;
        String r2 = TypedArrayUtils.getNamedString(r6, r9, "propertyXName", 2);
        String r92 = TypedArrayUtils.getNamedString(r6, r9, "propertyYName", 3);
        if (r7 != 2) goto L7;
    L7:
        if (r2 != null) goto L12;
        if (r92 != null) goto L12;
        throw new InflateException(r6.getPositionDescription() + " propertyXName or propertyYName is needed for PathData");
    L12:
        setupPathMotion(PathParser.createPathFromPathData(r0), r52, r8 * 0.5f, r2, r92);
        return;
    L13:
        r52.setPropertyName(TypedArrayUtils.getNamedString(r6, r9, "propertyName", 0));
    }

    private static void setupPathMotion(Path r17, ObjectAnimator r18, float r19, String r20, String r21) {
        PathMeasure r4 = new PathMeasure(r17, false);
        ArrayList r6 = new ArrayList();
        r6.add(Float.valueOf(0.0f));
        float r8 = 0.0f;
    L3:
        r8 = r8 + r4.getLength();
        r6.add(Float.valueOf(r8));
        if (r4.nextContour() == true) goto L3;
        PathMeasure r42 = new PathMeasure(r17, false);
        int r0 = Math.min(100, ((int) (r8 / r19)) + 1);
        float[] r9 = new float[r0];
        float[] r11 = new float[r0];
        float[] r13 = new float[2];
        float r82 = r8 / (r0 - 1);
        int r7 = 0;
        float r14 = 0.0f;
        int r15 = 0;
    L6:
        PropertyValuesHolder r12 = null;
        if (r7 >= r0) goto L14;
        r42.getPosTan(r14 - ((Float) r6.get(r15)).floatValue(), r13, null);
        r9[r7] = r13[0];
        r11[r7] = r13[1];
        r14 = r14 + r82;
        int r10 = r15 + 1;
        if (r10 >= r6.size()) goto L13;
        if (r14 <= ((Float) r6.get(r10)).floatValue()) goto L13;
        r42.nextContour();
        r15 = r10;
    L13:
        r7 = r7 + 1;
        goto L6
    L14:
        if (r20 == null) goto L16;
        PropertyValuesHolder r02 = PropertyValuesHolder.ofFloat(r20, r9);
    L17:
        if (r21 == null) goto L19;
        r12 = PropertyValuesHolder.ofFloat(r21, r11);
    L19:
        if (r02 != null) goto L22;
        r18.setValues(new PropertyValuesHolder[]{r12});
        return;
    L22:
        if (r12 != null) goto L24;
        r18.setValues(new PropertyValuesHolder[]{r02});
        return;
    L24:
        r18.setValues(new PropertyValuesHolder[]{r02, r12});
        return;
    L16:
        r02 = null;
        goto L17
    }

    private static Animator createAnimatorFromXml(Context r8, Resources r9, Resources.Theme r10, XmlPullParser r11, float r12) throws XmlPullParserException, IOException {
        return createAnimatorFromXml(r8, r9, r10, r11, Xml.asAttributeSet(r11), null, 0, r12);
    }

    private static Animator createAnimatorFromXml(Context r18, Resources r19, Resources.Theme r20, XmlPullParser r21, AttributeSet r22, AnimatorSet r23, int r24, float r25) throws XmlPullParserException, IOException {
        int r12 = r21.getDepth();
        Animator r0 = null;
        ArrayList r13 = null;
    L3:
        int r1 = r21.next();
        int r14 = 0;
        if (r1 != 3) goto L8;
        if (r21.getDepth() > r12) goto L8;
    L38:
        if (r23 == null) goto L47;
        if (r13 == null) goto L47;
        Animator[] r15 = new Animator[r13.size()];
        Iterator r2 = r13.iterator();
    L42:
        if (r2.hasNext() == false) goto L44;
        r15[r14] = (Animator) r2.next();
        r14 = r14 + 1;
        goto L42
    L44:
        if (r24 != 0) goto L46;
        r23.playTogether(r15);
        goto L47
    L46:
        r23.playSequentially(r15);
    L47:
        return r0;
    L8:
        if (r1 == 1) goto L38;
        if (r1 != 2) goto L3;
        String r16 = r21.getName();
        if (r16.equals("objectAnimator") == false) goto L17;
        r0 = loadObjectAnimator(r18, r19, r20, r22, r25, r21);
    L31:
        if (r23 == null) goto L3;
        if (r14 != 0) goto L3;
        if (r13 != null) goto L35;
        r13 = new ArrayList();
    L35:
        r13.add(r0);
        goto L3
    L17:
        if (r16.equals("animator") == false) goto L20;
        r0 = loadAnimator(r18, r19, r20, r22, null, r25, r21);
        goto L31
    L20:
        if (r16.equals("set") == false) goto L23;
        AnimatorSet r152 = new AnimatorSet();
        TypedArray r6 = TypedArrayUtils.obtainAttributes(r19, r20, r22, AndroidResources.STYLEABLE_ANIMATOR_SET);
        createAnimatorFromXml(r18, r19, r20, r21, r22, r152, TypedArrayUtils.getNamedInt(r6, r21, "ordering", 0, 0), r25);
        r6.recycle();
        r0 = r152;
        goto L31
    L23:
        if (r16.equals("propertyValuesHolder") == false) goto L37;
        PropertyValuesHolder[] r17 = loadValues(r18, r19, r20, r21, Xml.asAttributeSet(r21));
        if (r17 == null) goto L30;
        if (r0 == null) goto L30;
        if ((r0 instanceof ValueAnimator) == false) goto L30;
        ((ValueAnimator) r0).setValues(r17);
    L30:
        r14 = 1;
        goto L31
    L37:
        throw new RuntimeException("Unknown animator name: " + r21.getName());
    }

    private static PropertyValuesHolder[] loadValues(Context r17, Resources r18, Resources.Theme r19, XmlPullParser r20, AttributeSet r21) throws XmlPullParserException, IOException {
        PropertyValuesHolder[] r7 = null;
        ArrayList r8 = null;
    L3:
        int r0 = r20.getEventType();
        int r9 = 0;
        if (r0 == 3) goto L22;
        if (r0 == 1) goto L22;
        if (r0 != 2) goto L9;
        if (r20.getName().equals("propertyValuesHolder") == false) goto L21;
        TypedArray r14 = TypedArrayUtils.obtainAttributes(r18, r19, r21, AndroidResources.STYLEABLE_PROPERTY_VALUES_HOLDER);
        String r15 = TypedArrayUtils.getNamedString(r14, r20, "propertyName", 3);
        int r5 = TypedArrayUtils.getNamedInt(r14, r20, "valueType", 2, 4);
        PropertyValuesHolder r02 = loadPvh(r17, r18, r19, r20, r15, r5);
        if (r02 != null) goto L15;
        r02 = getPVH(r14, r5, 0, 1, r15);
    L15:
        if (r02 == null) goto L19;
        if (r8 != null) goto L18;
        r8 = new ArrayList();
    L18:
        r8.add(r02);
    L19:
        r14.recycle();
    L21:
        r20.next();
        goto L3
    L9:
        r20.next();
    L22:
        if (r8 == null) goto L26;
        int r03 = r8.size();
        r7 = new PropertyValuesHolder[r03];
    L24:
        if (r9 >= r03) goto L26;
        r7[r9] = (PropertyValuesHolder) r8.get(r9);
        r9 = r9 + 1;
    L26:
        return r7;
    }

    private static int inferValueTypeOfKeyframe(Resources r1, Resources.Theme r2, AttributeSet r3, XmlPullParser r4) {
        TypedArray r12 = TypedArrayUtils.obtainAttributes(r1, r2, r3, AndroidResources.STYLEABLE_KEYFRAME);
        int r22 = 0;
        TypedValue r32 = TypedArrayUtils.peekNamedValue(r12, r4, "value", 0);
        if (r32 == null) goto L5;
        boolean r42 = true;
    L6:
        if (r42 == true) goto L8;
    L10:
        r12.recycle();
        return r22;
    L8:
        if (isColorType(r32.type) == false) goto L10;
        r22 = 3;
        goto L10
    L5:
        r42 = false;
        goto L6
    }

    private static int inferValueTypeFromValues(TypedArray r3, int r4, int r5) {
        TypedValue r42 = r3.peekValue(r4);
        boolean r0 = true;
        if (r42 == null) goto L5;
        boolean r2 = true;
    L6:
        if (r2 == false) goto L8;
        int r43 = r42.type;
    L9:
        TypedValue r32 = r3.peekValue(r5);
        if (r32 != null) goto L13;
        r0 = false;
    L13:
        if (r0 == false) goto L15;
        int r33 = r32.type;
    L16:
        if (r2 == true) goto L18;
    L19:
        if (r0 == true) goto L21;
        return 0;
    L21:
        if (isColorType(r33) == false) goto L25;
    L22:
        return 3;
    L25:
        return 0;
    L18:
        if (isColorType(r43) == true) goto L22;
    L15:
        r33 = 0;
        goto L16
    L8:
        r43 = 0;
        goto L9
    L5:
        r2 = false;
        goto L6
    }

    private static void dumpKeyframes(Object[] r7, String r8) {
        if (r7 != null) goto L4;
        return;
    L4:
        if (r7.length == 0) goto L20;
        Log.d(TAG, r8);
        int r82 = r7.length;
        int r1 = 0;
    L7:
        if (r1 >= r82) goto L21;
        Keyframe r2 = (Keyframe) r7[r1];
        StringBuilder r3 = new StringBuilder();
        r3.append("Keyframe ");
        r3.append(r1);
        r3.append(": fraction ");
        Object r6 = "null";
        if (r2.getFraction() >= 0.0f) goto L11;
        Object r4 = "null";
    L12:
        r3.append(r4);
        r3.append(", ");
        r3.append(", value : ");
        if (r2.hasValue() == false) goto L15;
        r6 = r2.getValue();
    L15:
        r3.append(r6);
        Log.d(TAG, r3.toString());
        r1 = r1 + 1;
        goto L7
    L11:
        r4 = Float.valueOf(r2.getFraction());
        goto L12
    L21:
        return;
    }

    private static PropertyValuesHolder loadPvh(Context r9, Resources r10, Resources.Theme r11, XmlPullParser r12, String r13, int r14) throws XmlPullParserException, IOException {
        PropertyValuesHolder r0 = null;
        int r1 = r14;
        ArrayList r142 = null;
    L3:
        int r2 = r12.next();
        if (r2 == 3) goto L18;
        if (r2 == 1) goto L18;
        if (r12.getName().equals("keyframe") == false) goto L3;
        if (r1 != 4) goto L12;
        r1 = inferValueTypeOfKeyframe(r10, r11, Xml.asAttributeSet(r12), r12);
    L12:
        Keyframe r22 = loadKeyframe(r9, r10, r11, Xml.asAttributeSet(r12), r1, r12);
        if (r22 == null) goto L17;
        if (r142 != null) goto L16;
        r142 = new ArrayList();
    L16:
        r142.add(r22);
    L17:
        r12.next();
    L18:
        if (r142 == null) goto L53;
        int r92 = r142.size();
        if (r92 <= 0) goto L53;
        int r102 = 0;
        Keyframe r112 = (Keyframe) r142.get(0);
        Keyframe r122 = (Keyframe) r142.get(r92 - 1);
        float r02 = r122.getFraction();
        if (r02 < 1.0f) goto L24;
    L27:
        float r123 = r112.getFraction();
        if (r123 != 0.0f) goto L30;
    L33:
        Keyframe[] r113 = new Keyframe[r92];
        r142.toArray(r113);
    L34:
        if (r102 >= r92) goto L50;
        Keyframe r124 = r113[r102];
        if (r124.getFraction() >= 0.0f) goto L49;
        if (r102 != 0) goto L39;
        r124.setFraction(0.0f);
        goto L49
    L39:
        int r143 = r92 - 1;
        if (r102 != r143) goto L42;
        r124.setFraction(1.0f);
        goto L49
    L42:
        int r125 = r102 + 1;
        int r03 = r102;
    L43:
        if (r125 >= r143) goto L48;
        if (r113[r125].getFraction() >= 0.0f) goto L48;
        r03 = r125;
        r125 = r125 + 1;
    L48:
        distributeKeyframes(r113, r113[r03 + 1].getFraction() - r113[r102 - 1].getFraction(), r102, r03);
    L49:
        r102 = r102 + 1;
        goto L34
    L50:
        r0 = PropertyValuesHolder.ofKeyframe(r13, r113);
        if (r1 != 3) goto L53;
        r0.setEvaluator(ArgbEvaluator.getInstance());
        goto L53
    L30:
        if (r123 >= 0.0f) goto L32;
        r112.setFraction(0.0f);
        goto L33
    L32:
        r142.add(0, createNewKeyframe(r112, 0.0f));
        r92 = r92 + 1;
        goto L33
    L24:
        if (r02 >= 0.0f) goto L26;
        r122.setFraction(1.0f);
        goto L27
    L26:
        r142.add(r142.size(), createNewKeyframe(r122, 1.0f));
        r92 = r92 + 1;
    L53:
        return r0;
    }

    private static Keyframe createNewKeyframe(Keyframe r2, float r3) {
        if (r2.getType() != Float.TYPE) goto L6;
        return Keyframe.ofFloat(r3);
    L6:
        if (r2.getType() != Integer.TYPE) goto L9;
        return Keyframe.ofInt(r3);
    L9:
        return Keyframe.ofObject(r3);
    }

    private static void distributeKeyframes(Keyframe[] r2, float r3, int r4, int r5) {
        float r32 = r3 / ((r5 - r4) + 2);
    L3:
        if (r4 > r5) goto L5;
        r2[r4].setFraction(r2[r4 - 1].getFraction() + r32);
        r4 = r4 + 1;
        goto L3
    }

    private static Keyframe loadKeyframe(Context r6, Resources r7, Resources.Theme r8, AttributeSet r9, int r10, XmlPullParser r11) throws XmlPullParserException, IOException {
        TypedArray r72 = TypedArrayUtils.obtainAttributes(r7, r8, r9, AndroidResources.STYLEABLE_KEYFRAME);
        float r92 = TypedArrayUtils.getNamedFloat(r72, r11, "fraction", 3, -1.0f);
        TypedValue r2 = TypedArrayUtils.peekNamedValue(r72, r11, "value", 0);
        if (r2 == null) goto L5;
        boolean r4 = true;
    L7:
        if (r10 != 4) goto L13;
        if (r4 == true) goto L10;
    L12:
        r10 = 0;
        goto L13
    L10:
        if (isColorType(r2.type) == false) goto L12;
        r10 = 3;
    L13:
        if (r4 == false) goto L20;
        if (r10 == 0) goto L19;
        if (r10 == 1) goto L18;
        if (r10 == 3) goto L18;
        Keyframe r82 = null;
    L23:
        int r93 = TypedArrayUtils.getNamedResourceId(r72, r11, "interpolator", 1, 0);
        if (r93 <= 0) goto L26;
        r82.setInterpolator(AnimationUtilsCompat.loadInterpolator(r6, r93));
    L26:
        r72.recycle();
        return r82;
    L18:
        r82 = Keyframe.ofInt(r92, TypedArrayUtils.getNamedInt(r72, r11, "value", 0, 0));
        goto L23
    L19:
        r82 = Keyframe.ofFloat(r92, TypedArrayUtils.getNamedFloat(r72, r11, "value", 0, 0.0f));
        goto L23
    L20:
        if (r10 != 0) goto L22;
        r82 = Keyframe.ofFloat(r92);
        goto L23
    L22:
        r82 = Keyframe.ofInt(r92);
        goto L23
    L5:
        r4 = false;
        goto L7
    }

    private static ObjectAnimator loadObjectAnimator(Context r8, Resources r9, Resources.Theme r10, AttributeSet r11, float r12, XmlPullParser r13) throws Resources.NotFoundException {
        ObjectAnimator r7 = new ObjectAnimator();
        loadAnimator(r8, r9, r10, r11, r7, r12, r13);
        return r7;
    }

    private static ValueAnimator loadAnimator(Context r2, Resources r3, Resources.Theme r4, AttributeSet r5, ValueAnimator r6, float r7, XmlPullParser r8) throws Resources.NotFoundException {
        TypedArray r0 = TypedArrayUtils.obtainAttributes(r3, r4, r5, AndroidResources.STYLEABLE_ANIMATOR);
        TypedArray r32 = TypedArrayUtils.obtainAttributes(r3, r4, r5, AndroidResources.STYLEABLE_PROPERTY_ANIMATOR);
        if (r6 != null) goto L5;
        r6 = new ValueAnimator();
    L5:
        parseAnimatorFromTypeArray(r6, r0, r32, r7, r8);
        int r42 = TypedArrayUtils.getNamedResourceId(r0, r8, "interpolator", 0, 0);
        if (r42 <= 0) goto L8;
        r6.setInterpolator(AnimationUtilsCompat.loadInterpolator(r2, r42));
    L8:
        r0.recycle();
        if (r32 == null) goto L11;
        r32.recycle();
    L11:
        return r6;
    }

    private AnimatorInflaterCompat() {
    }
}
