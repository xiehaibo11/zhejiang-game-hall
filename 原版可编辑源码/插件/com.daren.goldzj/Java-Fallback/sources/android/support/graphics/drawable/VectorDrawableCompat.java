package android.support.graphics.drawable;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.Shader;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.VectorDrawable;
import android.os.Build;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.content.res.ComplexColorCompat;
import android.support.v4.content.res.ResourcesCompat;
import android.support.v4.content.res.TypedArrayUtils;
import android.support.v4.graphics.PathParser;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.util.ArrayMap;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Xml;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

public class VectorDrawableCompat extends VectorDrawableCommon {
    private static final boolean DBG_VECTOR_DRAWABLE = false;
    static final PorterDuff.Mode DEFAULT_TINT_MODE = null;
    private static final int LINECAP_BUTT = 0;
    private static final int LINECAP_ROUND = 1;
    private static final int LINECAP_SQUARE = 2;
    private static final int LINEJOIN_BEVEL = 2;
    private static final int LINEJOIN_MITER = 0;
    private static final int LINEJOIN_ROUND = 1;
    static final String LOGTAG = "VectorDrawableCompat";
    private static final int MAX_CACHED_BITMAP_SIZE = 2048;
    private static final String SHAPE_CLIP_PATH = "clip-path";
    private static final String SHAPE_GROUP = "group";
    private static final String SHAPE_PATH = "path";
    private static final String SHAPE_VECTOR = "vector";
    private boolean mAllowCaching;
    private Drawable.ConstantState mCachedConstantStateDelegate;
    private ColorFilter mColorFilter;
    private boolean mMutated;
    private PorterDuffColorFilter mTintFilter;
    private final Rect mTmpBounds;
    private final float[] mTmpFloats;
    private final Matrix mTmpMatrix;
    private VectorDrawableCompatState mVectorState;

    static class 1 {
    }

    private static class VClipPath extends VPath {
        @Override
        public boolean isClipPath() {
            return true;
        }

        public VClipPath() {
        }

        public VClipPath(VClipPath r1) {
            super(r1);
        }

        public void inflate(Resources r2, AttributeSet r3, Resources.Theme r4, XmlPullParser r5) {
            if (TypedArrayUtils.hasAttribute(r5, "pathData") == true) goto L5;
            return;
        L5:
            TypedArray r22 = TypedArrayUtils.obtainAttributes(r2, r4, r3, AndroidResources.STYLEABLE_VECTOR_DRAWABLE_CLIP_PATH);
            updateStateFromTypedArray(r22);
            r22.recycle();
        }

        private void updateStateFromTypedArray(TypedArray r2) {
            String r0 = r2.getString(0);
            if (r0 == null) goto L5;
            this.mPathName = r0;
        L5:
            String r22 = r2.getString(1);
            if (r22 == null) goto L9;
            this.mNodes = PathParser.createNodesFromPathData(r22);
            return;
        }
    }

    private static class VFullPath extends VPath {
        private static final int FILL_TYPE_WINDING = 0;
        float mFillAlpha;
        ComplexColorCompat mFillColor;
        int mFillRule;
        float mStrokeAlpha;
        ComplexColorCompat mStrokeColor;
        Paint.Cap mStrokeLineCap;
        Paint.Join mStrokeLineJoin;
        float mStrokeMiterlimit;
        float mStrokeWidth;
        private int[] mThemeAttrs;
        float mTrimPathEnd;
        float mTrimPathOffset;
        float mTrimPathStart;

        public VFullPath() {
            this.mStrokeWidth = 0.0f;
            this.mStrokeAlpha = 1.0f;
            this.mFillRule = 0;
            this.mFillAlpha = 1.0f;
            this.mTrimPathStart = 0.0f;
            this.mTrimPathEnd = 1.0f;
            this.mTrimPathOffset = 0.0f;
            this.mStrokeLineCap = Paint.Cap.BUTT;
            this.mStrokeLineJoin = Paint.Join.MITER;
            this.mStrokeMiterlimit = 4.0f;
        }

        public VFullPath(VFullPath r4) {
            super(r4);
            this.mStrokeWidth = 0.0f;
            this.mStrokeAlpha = 1.0f;
            this.mFillRule = 0;
            this.mFillAlpha = 1.0f;
            this.mTrimPathStart = 0.0f;
            this.mTrimPathEnd = 1.0f;
            this.mTrimPathOffset = 0.0f;
            this.mStrokeLineCap = Paint.Cap.BUTT;
            this.mStrokeLineJoin = Paint.Join.MITER;
            this.mStrokeMiterlimit = 4.0f;
            this.mThemeAttrs = r4.mThemeAttrs;
            this.mStrokeColor = r4.mStrokeColor;
            this.mStrokeWidth = r4.mStrokeWidth;
            this.mStrokeAlpha = r4.mStrokeAlpha;
            this.mFillColor = r4.mFillColor;
            this.mFillRule = r4.mFillRule;
            this.mFillAlpha = r4.mFillAlpha;
            this.mTrimPathStart = r4.mTrimPathStart;
            this.mTrimPathEnd = r4.mTrimPathEnd;
            this.mTrimPathOffset = r4.mTrimPathOffset;
            this.mStrokeLineCap = r4.mStrokeLineCap;
            this.mStrokeLineJoin = r4.mStrokeLineJoin;
            this.mStrokeMiterlimit = r4.mStrokeMiterlimit;
        }

        private Paint.Cap getStrokeLineCap(int r2, Paint.Cap r3) {
            if (r2 == 0) goto L13;
            if (r2 == 1) goto L11;
            if (r2 == 2) goto L9;
            return r3;
        L9:
            return Paint.Cap.SQUARE;
        L11:
            return Paint.Cap.ROUND;
        L13:
            return Paint.Cap.BUTT;
        }

        private Paint.Join getStrokeLineJoin(int r2, Paint.Join r3) {
            if (r2 == 0) goto L13;
            if (r2 == 1) goto L11;
            if (r2 == 2) goto L9;
            return r3;
        L9:
            return Paint.Join.BEVEL;
        L11:
            return Paint.Join.ROUND;
        L13:
            return Paint.Join.MITER;
        }

        @Override
        public boolean canApplyTheme() {
            if (this.mThemeAttrs == null) goto L5;
            return true;
        L5:
            return false;
        }

        public void inflate(Resources r2, AttributeSet r3, Resources.Theme r4, XmlPullParser r5) {
            TypedArray r22 = TypedArrayUtils.obtainAttributes(r2, r4, r3, AndroidResources.STYLEABLE_VECTOR_DRAWABLE_PATH);
            updateStateFromTypedArray(r22, r5, r4);
            r22.recycle();
        }

        private void updateStateFromTypedArray(TypedArray r8, XmlPullParser r9, Resources.Theme r10) {
            this.mThemeAttrs = null;
            if (TypedArrayUtils.hasAttribute(r9, "pathData") == true) goto L5;
            return;
        L5:
            String r0 = r8.getString(0);
            if (r0 == null) goto L8;
            this.mPathName = r0;
        L8:
            String r02 = r8.getString(2);
            if (r02 == null) goto L11;
            this.mNodes = PathParser.createNodesFromPathData(r02);
        L11:
            this.mFillColor = TypedArrayUtils.getNamedComplexColor(r8, r9, r10, "fillColor", 1, 0);
            this.mFillAlpha = TypedArrayUtils.getNamedFloat(r8, r9, "fillAlpha", 12, this.mFillAlpha);
            this.mStrokeLineCap = getStrokeLineCap(TypedArrayUtils.getNamedInt(r8, r9, "strokeLineCap", 8, -1), this.mStrokeLineCap);
            this.mStrokeLineJoin = getStrokeLineJoin(TypedArrayUtils.getNamedInt(r8, r9, "strokeLineJoin", 9, -1), this.mStrokeLineJoin);
            this.mStrokeMiterlimit = TypedArrayUtils.getNamedFloat(r8, r9, "strokeMiterLimit", 10, this.mStrokeMiterlimit);
            this.mStrokeColor = TypedArrayUtils.getNamedComplexColor(r8, r9, r10, "strokeColor", 3, 0);
            this.mStrokeAlpha = TypedArrayUtils.getNamedFloat(r8, r9, "strokeAlpha", 11, this.mStrokeAlpha);
            this.mStrokeWidth = TypedArrayUtils.getNamedFloat(r8, r9, "strokeWidth", 4, this.mStrokeWidth);
            this.mTrimPathEnd = TypedArrayUtils.getNamedFloat(r8, r9, "trimPathEnd", 6, this.mTrimPathEnd);
            this.mTrimPathOffset = TypedArrayUtils.getNamedFloat(r8, r9, "trimPathOffset", 7, this.mTrimPathOffset);
            this.mTrimPathStart = TypedArrayUtils.getNamedFloat(r8, r9, "trimPathStart", 5, this.mTrimPathStart);
            this.mFillRule = TypedArrayUtils.getNamedInt(r8, r9, "fillType", 13, this.mFillRule);
        }

        @Override
        public boolean isStateful() {
            if (this.mFillColor.isStateful() == false) goto L5;
        L8:
            return true;
        L5:
            if (this.mStrokeColor.isStateful() == true) goto L8;
            return false;
        }

        @Override
        public boolean onStateChanged(int[] r3) {
            boolean r0 = this.mFillColor.onStateChanged(r3);
            return this.mStrokeColor.onStateChanged(r3) | r0;
        }

        @Override
        public void applyTheme(Resources.Theme r1) {
            if (this.mThemeAttrs == null) goto L4;
        }

        @ColorInt
        int getStrokeColor() {
            return this.mStrokeColor.getColor();
        }

        void setStrokeColor(int r2) {
            this.mStrokeColor.setColor(r2);
        }

        float getStrokeWidth() {
            return this.mStrokeWidth;
        }

        void setStrokeWidth(float r1) {
            this.mStrokeWidth = r1;
        }

        float getStrokeAlpha() {
            return this.mStrokeAlpha;
        }

        void setStrokeAlpha(float r1) {
            this.mStrokeAlpha = r1;
        }

        @ColorInt
        int getFillColor() {
            return this.mFillColor.getColor();
        }

        void setFillColor(int r2) {
            this.mFillColor.setColor(r2);
        }

        float getFillAlpha() {
            return this.mFillAlpha;
        }

        void setFillAlpha(float r1) {
            this.mFillAlpha = r1;
        }

        float getTrimPathStart() {
            return this.mTrimPathStart;
        }

        void setTrimPathStart(float r1) {
            this.mTrimPathStart = r1;
        }

        float getTrimPathEnd() {
            return this.mTrimPathEnd;
        }

        void setTrimPathEnd(float r1) {
            this.mTrimPathEnd = r1;
        }

        float getTrimPathOffset() {
            return this.mTrimPathOffset;
        }

        void setTrimPathOffset(float r1) {
            this.mTrimPathOffset = r1;
        }
    }

    private static class VGroup extends VObject {
        int mChangingConfigurations;
        final ArrayList<VObject> mChildren;
        private String mGroupName;
        final Matrix mLocalMatrix;
        private float mPivotX;
        private float mPivotY;
        float mRotate;
        private float mScaleX;
        private float mScaleY;
        final Matrix mStackedMatrix;
        private int[] mThemeAttrs;
        private float mTranslateX;
        private float mTranslateY;

        public VGroup(VGroup r5, ArrayMap<String, Object> r6) {
            super(null);
            this.mStackedMatrix = new Matrix();
            this.mChildren = new ArrayList();
            this.mRotate = 0.0f;
            this.mPivotX = 0.0f;
            this.mPivotY = 0.0f;
            this.mScaleX = 1.0f;
            this.mScaleY = 1.0f;
            this.mTranslateX = 0.0f;
            this.mTranslateY = 0.0f;
            this.mLocalMatrix = new Matrix();
            this.mGroupName = null;
            this.mRotate = r5.mRotate;
            this.mPivotX = r5.mPivotX;
            this.mPivotY = r5.mPivotY;
            this.mScaleX = r5.mScaleX;
            this.mScaleY = r5.mScaleY;
            this.mTranslateX = r5.mTranslateX;
            this.mTranslateY = r5.mTranslateY;
            this.mThemeAttrs = r5.mThemeAttrs;
            this.mGroupName = r5.mGroupName;
            this.mChangingConfigurations = r5.mChangingConfigurations;
            String r0 = this.mGroupName;
            if (r0 == null) goto L5;
            r6.put(r0, this);
        L5:
            this.mLocalMatrix.set(r5.mLocalMatrix);
            ArrayList<VObject> r52 = r5.mChildren;
            int r02 = 0;
        L7:
            if (r02 >= r52.size()) goto L23;
            VObject r1 = r52.get(r02);
            if ((r1 instanceof VGroup) == false) goto L12;
            this.mChildren.add(new VGroup((VGroup) r1, r6));
        L20:
            r02 = r02 + 1;
            goto L7
        L12:
            if ((r1 instanceof VFullPath) == false) goto L15;
            VPath r2 = new VFullPath((VFullPath) r1);
        L17:
            this.mChildren.add(r2);
            if (r2.mPathName == null) goto L20;
            r6.put(r2.mPathName, r2);
            goto L20
        L15:
            if ((r1 instanceof VClipPath) == false) goto L22;
            r2 = new VClipPath((VClipPath) r1);
            goto L17
        L22:
            throw new IllegalStateException("Unknown object in the tree!");
        }

        public VGroup() {
            super(null);
            this.mStackedMatrix = new Matrix();
            this.mChildren = new ArrayList();
            this.mRotate = 0.0f;
            this.mPivotX = 0.0f;
            this.mPivotY = 0.0f;
            this.mScaleX = 1.0f;
            this.mScaleY = 1.0f;
            this.mTranslateX = 0.0f;
            this.mTranslateY = 0.0f;
            this.mLocalMatrix = new Matrix();
            this.mGroupName = null;
        }

        public String getGroupName() {
            return this.mGroupName;
        }

        public Matrix getLocalMatrix() {
            return this.mLocalMatrix;
        }

        public void inflate(Resources r2, AttributeSet r3, Resources.Theme r4, XmlPullParser r5) {
            TypedArray r22 = TypedArrayUtils.obtainAttributes(r2, r4, r3, AndroidResources.STYLEABLE_VECTOR_DRAWABLE_GROUP);
            updateStateFromTypedArray(r22, r5);
            r22.recycle();
        }

        private void updateStateFromTypedArray(TypedArray r4, XmlPullParser r5) {
            this.mThemeAttrs = null;
            this.mRotate = TypedArrayUtils.getNamedFloat(r4, r5, "rotation", 5, this.mRotate);
            this.mPivotX = r4.getFloat(1, this.mPivotX);
            this.mPivotY = r4.getFloat(2, this.mPivotY);
            this.mScaleX = TypedArrayUtils.getNamedFloat(r4, r5, "scaleX", 3, this.mScaleX);
            this.mScaleY = TypedArrayUtils.getNamedFloat(r4, r5, "scaleY", 4, this.mScaleY);
            this.mTranslateX = TypedArrayUtils.getNamedFloat(r4, r5, "translateX", 6, this.mTranslateX);
            this.mTranslateY = TypedArrayUtils.getNamedFloat(r4, r5, "translateY", 7, this.mTranslateY);
            String r42 = r4.getString(0);
            if (r42 == null) goto L5;
            this.mGroupName = r42;
        L5:
            updateLocalMatrix();
        }

        private void updateLocalMatrix() {
            this.mLocalMatrix.reset();
            this.mLocalMatrix.postTranslate(-this.mPivotX, -this.mPivotY);
            this.mLocalMatrix.postScale(this.mScaleX, this.mScaleY);
            this.mLocalMatrix.postRotate(this.mRotate, 0.0f, 0.0f);
            this.mLocalMatrix.postTranslate(this.mTranslateX + this.mPivotX, this.mTranslateY + this.mPivotY);
        }

        public float getRotation() {
            return this.mRotate;
        }

        public void setRotation(float r2) {
            if (r2 == this.mRotate) goto L6;
            this.mRotate = r2;
            updateLocalMatrix();
            return;
        }

        public float getPivotX() {
            return this.mPivotX;
        }

        public void setPivotX(float r2) {
            if (r2 == this.mPivotX) goto L6;
            this.mPivotX = r2;
            updateLocalMatrix();
            return;
        }

        public float getPivotY() {
            return this.mPivotY;
        }

        public void setPivotY(float r2) {
            if (r2 == this.mPivotY) goto L6;
            this.mPivotY = r2;
            updateLocalMatrix();
            return;
        }

        public float getScaleX() {
            return this.mScaleX;
        }

        public void setScaleX(float r2) {
            if (r2 == this.mScaleX) goto L6;
            this.mScaleX = r2;
            updateLocalMatrix();
            return;
        }

        public float getScaleY() {
            return this.mScaleY;
        }

        public void setScaleY(float r2) {
            if (r2 == this.mScaleY) goto L6;
            this.mScaleY = r2;
            updateLocalMatrix();
            return;
        }

        public float getTranslateX() {
            return this.mTranslateX;
        }

        public void setTranslateX(float r2) {
            if (r2 == this.mTranslateX) goto L6;
            this.mTranslateX = r2;
            updateLocalMatrix();
            return;
        }

        public float getTranslateY() {
            return this.mTranslateY;
        }

        public void setTranslateY(float r2) {
            if (r2 == this.mTranslateY) goto L6;
            this.mTranslateY = r2;
            updateLocalMatrix();
            return;
        }

        @Override
        public boolean isStateful() {
            int r1 = 0;
        L4:
            if (r1 >= this.mChildren.size()) goto L10;
            if (this.mChildren.get(r1).isStateful() == true) goto L7;
            r1 = r1 + 1;
            goto L4
        L7:
            return true;
        L10:
            return false;
        }

        @Override
        public boolean onStateChanged(int[] r4) {
            int r0 = 0;
            boolean r1 = false;
        L4:
            if (r0 >= this.mChildren.size()) goto L6;
            r1 = r1 | this.mChildren.get(r0).onStateChanged(r4);
            r0 = r0 + 1;
            goto L4
        L6:
            return r1;
        }
    }

    private static abstract class VObject {
        public boolean isStateful() {
            return false;
        }

        public boolean onStateChanged(int[] r1) {
            return false;
        }

        private VObject() {
        }

        VObject(1 r1) {
            this();
        }
    }

    private static abstract class VPath extends VObject {
        int mChangingConfigurations;
        protected PathParser.PathDataNode[] mNodes;
        String mPathName;

        public void applyTheme(Resources.Theme r1) {
        }

        public boolean canApplyTheme() {
            return false;
        }

        public boolean isClipPath() {
            return false;
        }

        public VPath() {
            super(null);
            this.mNodes = null;
        }

        public void printVPath(int r4) {
            String r0 = "";
            int r1 = 0;
        L3:
            if (r1 >= r4) goto L5;
            r0 = r0 + "    ";
            r1 = r1 + 1;
            goto L3
        L5:
            Log.v(VectorDrawableCompat.LOGTAG, r0 + "current path is :" + this.mPathName + " pathData is " + nodesToString(this.mNodes));
        }

        public String nodesToString(PathParser.PathDataNode[] r7) {
            String r2 = " ";
            int r1 = 0;
        L4:
            if (r1 >= r7.length) goto L10;
            String r22 = r2 + r7[r1].mType + ":";
            float[] r3 = r7[r1].mParams;
            String r4 = r22;
            int r23 = 0;
        L7:
            if (r23 >= r3.length) goto L9;
            r4 = r4 + r3[r23] + ",";
            r23 = r23 + 1;
            goto L7
        L9:
            r1 = r1 + 1;
            r2 = r4;
            goto L4
        L10:
            return r2;
        }

        public VPath(VPath r2) {
            super(null);
            this.mNodes = null;
            this.mPathName = r2.mPathName;
            this.mChangingConfigurations = r2.mChangingConfigurations;
            this.mNodes = PathParser.deepCopyNodes(r2.mNodes);
        }

        public void toPath(Path r2) {
            r2.reset();
            PathParser.PathDataNode[] r0 = this.mNodes;
            if (r0 == null) goto L6;
            PathParser.PathDataNode.nodesToPath(r0, r2);
            return;
        }

        public String getPathName() {
            return this.mPathName;
        }

        public PathParser.PathDataNode[] getPathData() {
            return this.mNodes;
        }

        public void setPathData(PathParser.PathDataNode[] r2) {
            if (PathParser.canMorph(this.mNodes, r2) == true) goto L5;
            this.mNodes = PathParser.deepCopyNodes(r2);
            return;
        L5:
            PathParser.updateNodes(this.mNodes, r2);
        }
    }

    private static class VPathRenderer {
        private static final Matrix IDENTITY_MATRIX = null;
        float mBaseHeight;
        float mBaseWidth;
        private int mChangingConfigurations;
        Paint mFillPaint;
        private final Matrix mFinalPathMatrix;
        Boolean mIsStateful;
        private final Path mPath;
        private PathMeasure mPathMeasure;
        private final Path mRenderPath;
        int mRootAlpha;
        final VGroup mRootGroup;
        String mRootName;
        Paint mStrokePaint;
        final ArrayMap<String, Object> mVGTargetsMap;
        float mViewportHeight;
        float mViewportWidth;

        private static float cross(float r0, float r1, float r2, float r3) {
            return (r0 * r3) - (r1 * r2);
        }

        static {
            IDENTITY_MATRIX = new Matrix();
        }

        public VPathRenderer() {
            this.mFinalPathMatrix = new Matrix();
            this.mBaseWidth = 0.0f;
            this.mBaseHeight = 0.0f;
            this.mViewportWidth = 0.0f;
            this.mViewportHeight = 0.0f;
            this.mRootAlpha = 255;
            this.mRootName = null;
            this.mIsStateful = null;
            this.mVGTargetsMap = new ArrayMap();
            this.mRootGroup = new VGroup();
            this.mPath = new Path();
            this.mRenderPath = new Path();
        }

        public void setRootAlpha(int r1) {
            this.mRootAlpha = r1;
        }

        public int getRootAlpha() {
            return this.mRootAlpha;
        }

        public void setAlpha(float r2) {
            setRootAlpha((int) (r2 * 255.0f));
        }

        public float getAlpha() {
            return getRootAlpha() / 255.0f;
        }

        public VPathRenderer(VPathRenderer r4) {
            this.mFinalPathMatrix = new Matrix();
            this.mBaseWidth = 0.0f;
            this.mBaseHeight = 0.0f;
            this.mViewportWidth = 0.0f;
            this.mViewportHeight = 0.0f;
            this.mRootAlpha = 255;
            this.mRootName = null;
            this.mIsStateful = null;
            this.mVGTargetsMap = new ArrayMap();
            this.mRootGroup = new VGroup(r4.mRootGroup, this.mVGTargetsMap);
            this.mPath = new Path(r4.mPath);
            this.mRenderPath = new Path(r4.mRenderPath);
            this.mBaseWidth = r4.mBaseWidth;
            this.mBaseHeight = r4.mBaseHeight;
            this.mViewportWidth = r4.mViewportWidth;
            this.mViewportHeight = r4.mViewportHeight;
            this.mChangingConfigurations = r4.mChangingConfigurations;
            this.mRootAlpha = r4.mRootAlpha;
            this.mRootName = r4.mRootName;
            String r0 = r4.mRootName;
            if (r0 == null) goto L5;
            this.mVGTargetsMap.put(r0, this);
        L5:
            this.mIsStateful = r4.mIsStateful;
        }

        private void drawGroupTree(VGroup r10, Matrix r11, Canvas r12, int r13, int r14, ColorFilter r15) {
            r10.mStackedMatrix.set(r11);
            r10.mStackedMatrix.preConcat(r10.mLocalMatrix);
            r12.save();
            int r112 = 0;
        L4:
            if (r112 >= r10.mChildren.size()) goto L12;
            VObject r0 = r10.mChildren.get(r112);
            if ((r0 instanceof VGroup) == false) goto L9;
            drawGroupTree((VGroup) r0, r10.mStackedMatrix, r12, r13, r14, r15);
        L11:
            r112 = r112 + 1;
            goto L4
        L9:
            if ((r0 instanceof VPath) == false) goto L11;
            drawPath(r10, (VPath) r0, r12, r13, r14, r15);
            goto L11
        L12:
            r12.restore();
        }

        public void draw(Canvas r8, int r9, int r10, ColorFilter r11) {
            drawGroupTree(this.mRootGroup, IDENTITY_MATRIX, r8, r9, r10, r11);
        }

        private void drawPath(VGroup r8, VPath r9, Canvas r10, int r11, int r12, ColorFilter r13) {
            float r112 = r11 / this.mViewportWidth;
            float r122 = r12 / this.mViewportHeight;
            float r0 = Math.min(r112, r122);
            Matrix r82 = r8.mStackedMatrix;
            this.mFinalPathMatrix.set(r82);
            this.mFinalPathMatrix.postScale(r112, r122);
            float r83 = getMatrixScale(r82);
            if (r83 != 0.0f) goto L5;
            return;
        L5:
            r9.toPath(this.mPath);
            Path r123 = this.mPath;
            this.mRenderPath.reset();
            if (r9.isClipPath() == false) goto L8;
            this.mRenderPath.addPath(r123, this.mFinalPathMatrix);
            r10.clipPath(this.mRenderPath);
            return;
        L8:
            VFullPath r92 = (VFullPath) r9;
            if (r92.mTrimPathStart == 0.0f) goto L11;
        L12:
            float r1 = (r92.mTrimPathStart + r92.mTrimPathOffset) % 1.0f;
            float r4 = (r92.mTrimPathEnd + r92.mTrimPathOffset) % 1.0f;
            if (this.mPathMeasure != null) goto L15;
            this.mPathMeasure = new PathMeasure();
        L15:
            this.mPathMeasure.setPath(this.mPath, false);
            float r2 = this.mPathMeasure.getLength();
            float r14 = r1 * r2;
            float r42 = r4 * r2;
            r123.reset();
            if (r14 <= r42) goto L18;
            this.mPathMeasure.getSegment(r14, r2, r123, true);
            this.mPathMeasure.getSegment(0.0f, r42, r123, true);
        L19:
            r123.rLineTo(0.0f, 0.0f);
        L20:
            this.mRenderPath.addPath(r123, this.mFinalPathMatrix);
            if (r92.mFillColor.willDraw() == false) goto L35;
            ComplexColorCompat r113 = r92.mFillColor;
            if (this.mFillPaint != null) goto L25;
            this.mFillPaint = new Paint(1);
            this.mFillPaint.setStyle(Paint.Style.FILL);
        L25:
            Paint r15 = this.mFillPaint;
            if (r113.isGradient() == false) goto L28;
            Shader r114 = r113.getShader();
            r114.setLocalMatrix(this.mFinalPathMatrix);
            r15.setShader(r114);
            r15.setAlpha(Math.round(r92.mFillAlpha * 255.0f));
        L29:
            r15.setColorFilter(r13);
            Path r115 = this.mRenderPath;
            if (r92.mFillRule != 0) goto L32;
            Path.FillType r22 = Path.FillType.WINDING;
        L33:
            r115.setFillType(r22);
            r10.drawPath(this.mRenderPath, r15);
            goto L35
        L32:
            r22 = Path.FillType.EVEN_ODD;
            goto L33
        L28:
            r15.setColor(VectorDrawableCompat.applyAlpha(r113.getColor(), r92.mFillAlpha));
        L35:
            if (r92.mStrokeColor.willDraw() == false) goto L52;
            ComplexColorCompat r116 = r92.mStrokeColor;
            if (this.mStrokePaint != null) goto L39;
            this.mStrokePaint = new Paint(1);
            this.mStrokePaint.setStyle(Paint.Style.STROKE);
        L39:
            Paint r16 = this.mStrokePaint;
            if (r92.mStrokeLineJoin == null) goto L43;
            r16.setStrokeJoin(r92.mStrokeLineJoin);
        L43:
            if (r92.mStrokeLineCap == null) goto L45;
            r16.setStrokeCap(r92.mStrokeLineCap);
        L45:
            r16.setStrokeMiter(r92.mStrokeMiterlimit);
            if (r116.isGradient() == false) goto L48;
            Shader r117 = r116.getShader();
            r117.setLocalMatrix(this.mFinalPathMatrix);
            r16.setShader(r117);
            r16.setAlpha(Math.round(r92.mStrokeAlpha * 255.0f));
        L49:
            r16.setColorFilter(r13);
            r16.setStrokeWidth(r92.mStrokeWidth * (r0 * r83));
            r10.drawPath(this.mRenderPath, r16);
            return;
        L48:
            r16.setColor(VectorDrawableCompat.applyAlpha(r116.getColor(), r92.mStrokeAlpha));
            goto L49
        L52:
            return;
        L18:
            this.mPathMeasure.getSegment(r14, r42, r123, true);
            goto L19
        L11:
            if (r92.mTrimPathEnd == 1.0f) goto L20;
            goto L12
        }

        private float getMatrixScale(Matrix r10) {
            float[] r0 = {0.0f, 1.0f, 1.0f, 0.0f};
            r10.mapVectors(r0);
            float r1 = (float) Math.hypot(r0[0], r0[1]);
            float r4 = (float) Math.hypot(r0[2], r0[3]);
            float r102 = cross(r0[0], r0[1], r0[2], r0[3]);
            float r02 = Math.max(r1, r4);
            if (r02 > 0.0f) goto L5;
            return 0.0f;
        L5:
            return Math.abs(r102) / r02;
        }

        public boolean isStateful() {
            if (this.mIsStateful != null) goto L6;
            this.mIsStateful = Boolean.valueOf(this.mRootGroup.isStateful());
        L6:
            return this.mIsStateful.booleanValue();
        }

        public boolean onStateChanged(int[] r2) {
            return this.mRootGroup.onStateChanged(r2);
        }
    }

    private static class VectorDrawableCompatState extends Drawable.ConstantState {
        boolean mAutoMirrored;
        boolean mCacheDirty;
        boolean mCachedAutoMirrored;
        Bitmap mCachedBitmap;
        int mCachedRootAlpha;
        int[] mCachedThemeAttrs;
        ColorStateList mCachedTint;
        PorterDuff.Mode mCachedTintMode;
        int mChangingConfigurations;
        Paint mTempPaint;
        ColorStateList mTint;
        PorterDuff.Mode mTintMode;
        VPathRenderer mVPathRenderer;

        public VectorDrawableCompatState(VectorDrawableCompatState r4) {
            this.mTint = null;
            this.mTintMode = VectorDrawableCompat.DEFAULT_TINT_MODE;
            if (r4 == null) goto L12;
            this.mChangingConfigurations = r4.mChangingConfigurations;
            this.mVPathRenderer = new VPathRenderer(r4.mVPathRenderer);
            if (r4.mVPathRenderer.mFillPaint == null) goto L8;
            VPathRenderer r0 = this.mVPathRenderer;
            r0.mFillPaint = new Paint(r4.mVPathRenderer.mFillPaint);
        L8:
            if (r4.mVPathRenderer.mStrokePaint == null) goto L10;
            VPathRenderer r02 = this.mVPathRenderer;
            r02.mStrokePaint = new Paint(r4.mVPathRenderer.mStrokePaint);
        L10:
            this.mTint = r4.mTint;
            this.mTintMode = r4.mTintMode;
            this.mAutoMirrored = r4.mAutoMirrored;
            return;
        }

        public void drawCachedBitmapWithRootAlpha(Canvas r3, ColorFilter r4, Rect r5) {
            Paint r42 = getPaint(r4);
            r3.drawBitmap(this.mCachedBitmap, null, r5, r42);
        }

        public boolean hasTranslucentRoot() {
            if (this.mVPathRenderer.getRootAlpha() >= 255) goto L5;
            return true;
        L5:
            return false;
        }

        public Paint getPaint(ColorFilter r3) {
            if (hasTranslucentRoot() == true) goto L8;
            if (r3 != null) goto L8;
            return null;
        L8:
            if (this.mTempPaint != null) goto L10;
            this.mTempPaint = new Paint();
            this.mTempPaint.setFilterBitmap(true);
        L10:
            this.mTempPaint.setAlpha(this.mVPathRenderer.getRootAlpha());
            this.mTempPaint.setColorFilter(r3);
            return this.mTempPaint;
        }

        public void updateCachedBitmap(int r4, int r5) {
            this.mCachedBitmap.eraseColor(0);
            Canvas r0 = new Canvas(this.mCachedBitmap);
            this.mVPathRenderer.draw(r0, r4, r5, null);
        }

        public void createCachedBitmapIfNeeded(int r2, int r3) {
            if (this.mCachedBitmap != null) goto L5;
        L6:
            this.mCachedBitmap = Bitmap.createBitmap(r2, r3, Bitmap.Config.ARGB_8888);
            this.mCacheDirty = true;
            return;
        L5:
            if (canReuseBitmap(r2, r3) == false) goto L6;
        }

        public boolean canReuseBitmap(int r2, int r3) {
            if (r2 == this.mCachedBitmap.getWidth()) goto L5;
            return false;
        L5:
            if (r3 != this.mCachedBitmap.getHeight()) goto L10;
            return true;
        L10:
            return false;
        }

        public boolean canReuseCache() {
            if (this.mCacheDirty == false) goto L5;
            return false;
        L5:
            if (this.mCachedTint == this.mTint) goto L7;
            return false;
        L7:
            if (this.mCachedTintMode == this.mTintMode) goto L9;
            return false;
        L9:
            if (this.mCachedAutoMirrored == this.mAutoMirrored) goto L11;
            return false;
        L11:
            if (this.mCachedRootAlpha != this.mVPathRenderer.getRootAlpha()) goto L19;
            return true;
        L19:
            return false;
        }

        public void updateCacheStates() {
            this.mCachedTint = this.mTint;
            this.mCachedTintMode = this.mTintMode;
            this.mCachedRootAlpha = this.mVPathRenderer.getRootAlpha();
            this.mCachedAutoMirrored = this.mAutoMirrored;
            this.mCacheDirty = false;
        }

        public VectorDrawableCompatState() {
            this.mTint = null;
            this.mTintMode = VectorDrawableCompat.DEFAULT_TINT_MODE;
            this.mVPathRenderer = new VPathRenderer();
        }

        @Override
        @NonNull
        public Drawable newDrawable() {
            return new VectorDrawableCompat(this);
        }

        @Override
        @NonNull
        public Drawable newDrawable(Resources r1) {
            return new VectorDrawableCompat(this);
        }

        @Override
        public int getChangingConfigurations() {
            return this.mChangingConfigurations;
        }

        public boolean isStateful() {
            return this.mVPathRenderer.isStateful();
        }

        public boolean onStateChanged(int[] r2) {
            boolean r22 = this.mVPathRenderer.onStateChanged(r2);
            this.mCacheDirty |= r22;
            return r22;
        }
    }

    @RequiresApi(24)
    private static class VectorDrawableDelegateState extends Drawable.ConstantState {
        private final Drawable.ConstantState mDelegateState;

        public VectorDrawableDelegateState(Drawable.ConstantState r1) {
            this.mDelegateState = r1;
        }

        @Override
        public Drawable newDrawable() {
            VectorDrawableCompat r0 = new VectorDrawableCompat();
            r0.mDelegateDrawable = (VectorDrawable) this.mDelegateState.newDrawable();
            return r0;
        }

        @Override
        public Drawable newDrawable(Resources r3) {
            VectorDrawableCompat r0 = new VectorDrawableCompat();
            r0.mDelegateDrawable = (VectorDrawable) this.mDelegateState.newDrawable(r3);
            return r0;
        }

        @Override
        public Drawable newDrawable(Resources r3, Resources.Theme r4) {
            VectorDrawableCompat r0 = new VectorDrawableCompat();
            r0.mDelegateDrawable = (VectorDrawable) this.mDelegateState.newDrawable(r3, r4);
            return r0;
        }

        @Override
        public boolean canApplyTheme() {
            return this.mDelegateState.canApplyTheme();
        }

        @Override
        public int getChangingConfigurations() {
            return this.mDelegateState.getChangingConfigurations();
        }
    }

    @Override
    public void applyTheme(Resources.Theme r1) {
        super.applyTheme(r1);
    }

    @Override
    public void clearColorFilter() {
        super.clearColorFilter();
    }

    @Override
    public ColorFilter getColorFilter() {
        return super.getColorFilter();
    }

    @Override
    public Drawable getCurrent() {
        return super.getCurrent();
    }

    @Override
    public int getMinimumHeight() {
        return super.getMinimumHeight();
    }

    @Override
    public int getMinimumWidth() {
        return super.getMinimumWidth();
    }

    @Override
    public boolean getPadding(Rect r1) {
        return super.getPadding(r1);
    }

    @Override
    public int[] getState() {
        return super.getState();
    }

    @Override
    public Region getTransparentRegion() {
        return super.getTransparentRegion();
    }

    @Override
    public void jumpToCurrentState() {
        super.jumpToCurrentState();
    }

    @Override
    public void setChangingConfigurations(int r1) {
        super.setChangingConfigurations(r1);
    }

    @Override
    public void setColorFilter(int r1, PorterDuff.Mode r2) {
        super.setColorFilter(r1, r2);
    }

    @Override
    public void setFilterBitmap(boolean r1) {
        super.setFilterBitmap(r1);
    }

    @Override
    public void setHotspot(float r1, float r2) {
        super.setHotspot(r1, r2);
    }

    @Override
    public void setHotspotBounds(int r1, int r2, int r3, int r4) {
        super.setHotspotBounds(r1, r2, r3, r4);
    }

    @Override
    public boolean setState(int[] r1) {
        return super.setState(r1);
    }

    static {
        DEFAULT_TINT_MODE = PorterDuff.Mode.SRC_IN;
    }

    VectorDrawableCompat() {
        this.mAllowCaching = true;
        this.mTmpFloats = new float[9];
        this.mTmpMatrix = new Matrix();
        this.mTmpBounds = new Rect();
        this.mVectorState = new VectorDrawableCompatState();
    }

    VectorDrawableCompat(@NonNull VectorDrawableCompatState r3) {
        this.mAllowCaching = true;
        this.mTmpFloats = new float[9];
        this.mTmpMatrix = new Matrix();
        this.mTmpBounds = new Rect();
        this.mVectorState = r3;
        this.mTintFilter = updateTintFilter(this.mTintFilter, r3.mTint, r3.mTintMode);
    }

    @Override
    public Drawable mutate() {
        if (this.mDelegateDrawable == null) goto L7;
        this.mDelegateDrawable.mutate();
        return this;
    L7:
        if (this.mMutated == false) goto L9;
    L11:
        return this;
    L9:
        if (super.mutate() != this) goto L11;
        this.mVectorState = new VectorDrawableCompatState(this.mVectorState);
        this.mMutated = true;
        goto L11
    }

    Object getTargetByName(String r2) {
        return this.mVectorState.mVPathRenderer.mVGTargetsMap.get(r2);
    }

    @Override
    public Drawable.ConstantState getConstantState() {
        if (this.mDelegateDrawable != null) goto L5;
    L8:
        VectorDrawableCompatState r0 = this.mVectorState;
        r0.mChangingConfigurations = getChangingConfigurations();
        return this.mVectorState;
    L5:
        if (Build.VERSION.SDK_INT < 24) goto L8;
        return new VectorDrawableDelegateState(this.mDelegateDrawable.getConstantState());
    }

    @Override
    public void draw(Canvas r10) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.draw(r10);
        return;
    L6:
        copyBounds(this.mTmpBounds);
        if (this.mTmpBounds.width() > 0) goto L9;
        return;
    L9:
        if (this.mTmpBounds.height() <= 0) goto L36;
        ColorFilter r0 = this.mColorFilter;
        if (r0 != null) goto L14;
        r0 = this.mTintFilter;
    L14:
        r10.getMatrix(this.mTmpMatrix);
        this.mTmpMatrix.getValues(this.mTmpFloats);
        float r1 = Math.abs(this.mTmpFloats[0]);
        float r3 = Math.abs(this.mTmpFloats[4]);
        float r4 = Math.abs(this.mTmpFloats[1]);
        float r5 = Math.abs(this.mTmpFloats[3]);
        if (r4 == 0.0f) goto L17;
    L18:
        r1 = 1.0f;
        r3 = 1.0f;
    L19:
        int r12 = Math.min(2048, (int) (this.mTmpBounds.width() * r1));
        int r32 = Math.min(2048, (int) (this.mTmpBounds.height() * r3));
        if (r12 <= 0) goto L35;
        if (r32 <= 0) goto L37;
        int r42 = r10.save();
        r10.translate(this.mTmpBounds.left, this.mTmpBounds.top);
        if (needMirroring() == false) goto L26;
        r10.translate(this.mTmpBounds.width(), 0.0f);
        r10.scale(-1.0f, 1.0f);
    L26:
        this.mTmpBounds.offsetTo(0, 0);
        this.mVectorState.createCachedBitmapIfNeeded(r12, r32);
        if (this.mAllowCaching == true) goto L30;
        this.mVectorState.updateCachedBitmap(r12, r32);
    L32:
        this.mVectorState.drawCachedBitmapWithRootAlpha(r10, r0, this.mTmpBounds);
        r10.restoreToCount(r42);
        return;
    L30:
        if (this.mVectorState.canReuseCache() == true) goto L32;
        this.mVectorState.updateCachedBitmap(r12, r32);
        this.mVectorState.updateCacheStates();
        goto L32
    L37:
        return;
    L35:
        return;
    L17:
        if (r5 == 0.0f) goto L19;
    }

    @Override
    public int getAlpha() {
        if (this.mDelegateDrawable == null) goto L7;
        return DrawableCompat.getAlpha(this.mDelegateDrawable);
    L7:
        return this.mVectorState.mVPathRenderer.getRootAlpha();
    }

    @Override
    public void setAlpha(int r2) {
        if (this.mDelegateDrawable == null) goto L7;
        this.mDelegateDrawable.setAlpha(r2);
        return;
    L7:
        if (this.mVectorState.mVPathRenderer.getRootAlpha() == r2) goto L10;
        this.mVectorState.mVPathRenderer.setRootAlpha(r2);
        invalidateSelf();
        return;
    }

    @Override
    public void setColorFilter(ColorFilter r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.setColorFilter(r2);
        return;
    L6:
        this.mColorFilter = r2;
        invalidateSelf();
    }

    PorterDuffColorFilter updateTintFilter(PorterDuffColorFilter r2, ColorStateList r3, PorterDuff.Mode r4) {
        if (r3 == null) goto L7;
        if (r4 != null) goto L6;
        return null;
    L6:
        return new PorterDuffColorFilter(r3.getColorForState(getState(), 0), r4);
    L7:
        return null;
    }

    @Override
    public void setTint(int r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTint(this.mDelegateDrawable, r2);
        return;
    L6:
        setTintList(ColorStateList.valueOf(r2));
    }

    @Override
    public void setTintList(ColorStateList r3) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTintList(this.mDelegateDrawable, r3);
        return;
    L6:
        VectorDrawableCompatState r0 = this.mVectorState;
        if (r0.mTint == r3) goto L10;
        r0.mTint = r3;
        this.mTintFilter = updateTintFilter(this.mTintFilter, r3, r0.mTintMode);
        invalidateSelf();
        return;
    }

    @Override
    public void setTintMode(PorterDuff.Mode r3) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setTintMode(this.mDelegateDrawable, r3);
        return;
    L6:
        VectorDrawableCompatState r0 = this.mVectorState;
        if (r0.mTintMode == r3) goto L10;
        r0.mTintMode = r3;
        this.mTintFilter = updateTintFilter(this.mTintFilter, r0.mTint, r3);
        invalidateSelf();
        return;
    }

    @Override
    public boolean isStateful() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.isStateful();
    L7:
        if (super.isStateful() == true) goto L18;
        VectorDrawableCompatState r0 = this.mVectorState;
        if (r0 != null) goto L11;
    L17:
        return false;
    L11:
        if (r0.isStateful() == true) goto L18;
        if (this.mVectorState.mTint == null) goto L17;
        if (this.mVectorState.mTint.isStateful() == false) goto L17;
    L18:
        return true;
    }

    @Override
    protected boolean onStateChange(int[] r6) {
        if (this.mDelegateDrawable != null) goto L5;
        boolean r0 = false;
        VectorDrawableCompatState r1 = this.mVectorState;
        if (r1.mTint == null) goto L12;
        if (r1.mTintMode == null) goto L12;
        this.mTintFilter = updateTintFilter(this.mTintFilter, r1.mTint, r1.mTintMode);
        invalidateSelf();
        r0 = true;
    L12:
        if (r1.isStateful() == true) goto L14;
        return r0;
    L14:
        if (r1.onStateChanged(r6) == false) goto L18;
        invalidateSelf();
        return true;
    L18:
        return r0;
    L5:
        return this.mDelegateDrawable.setState(r6);
    }

    @Override
    public int getOpacity() {
        if (this.mDelegateDrawable != null) goto L5;
        return -3;
    L5:
        return this.mDelegateDrawable.getOpacity();
    }

    @Override
    public int getIntrinsicWidth() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getIntrinsicWidth();
    L7:
        return (int) this.mVectorState.mVPathRenderer.mBaseWidth;
    }

    @Override
    public int getIntrinsicHeight() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getIntrinsicHeight();
    L7:
        return (int) this.mVectorState.mVPathRenderer.mBaseHeight;
    }

    @Override
    public boolean canApplyTheme() {
        if (this.mDelegateDrawable == null) goto L7;
        DrawableCompat.canApplyTheme(this.mDelegateDrawable);
        return false;
    L7:
        return false;
    }

    @Override
    public boolean isAutoMirrored() {
        if (this.mDelegateDrawable == null) goto L7;
        return DrawableCompat.isAutoMirrored(this.mDelegateDrawable);
    L7:
        return this.mVectorState.mAutoMirrored;
    }

    @Override
    public void setAutoMirrored(boolean r2) {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.setAutoMirrored(this.mDelegateDrawable, r2);
        return;
    L6:
        this.mVectorState.mAutoMirrored = r2;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public float getPixelSize() {
        VectorDrawableCompatState r0 = this.mVectorState;
        if (r0 != null) goto L5;
        return 1.0f;
    L5:
        if (r0.mVPathRenderer != null) goto L7;
        return 1.0f;
    L7:
        if (this.mVectorState.mVPathRenderer.mBaseWidth != 0.0f) goto L9;
        return 1.0f;
    L9:
        if (this.mVectorState.mVPathRenderer.mBaseHeight != 0.0f) goto L11;
        return 1.0f;
    L11:
        if (this.mVectorState.mVPathRenderer.mViewportHeight != 0.0f) goto L13;
        return 1.0f;
    L13:
        if (this.mVectorState.mVPathRenderer.mViewportWidth == 0.0f) goto L23;
        float r02 = this.mVectorState.mVPathRenderer.mBaseWidth;
        float r1 = this.mVectorState.mVPathRenderer.mBaseHeight;
        float r2 = this.mVectorState.mVPathRenderer.mViewportWidth;
        return Math.min(r2 / r02, this.mVectorState.mVPathRenderer.mViewportHeight / r1);
    L23:
        return 1.0f;
    }

    @Nullable
    public static VectorDrawableCompat create(@NonNull Resources r6, @DrawableRes int r7, @Nullable Resources.Theme r8) {
        if (Build.VERSION.SDK_INT < 24) goto L23;
        VectorDrawableCompat r0 = new VectorDrawableCompat();
        r0.mDelegateDrawable = ResourcesCompat.getDrawable(r6, r7, r8);
        r0.mCachedConstantStateDelegate = new VectorDrawableDelegateState(r0.mDelegateDrawable.getConstantState());
        return r0;
    L23:
        XmlResourceParser r72 = r6.getXml(r7);     // Catch: IOException -> L17 XmlPullParserException -> L19
        AttributeSet r2 = Xml.asAttributeSet(r72);     // Catch: IOException -> L17 XmlPullParserException -> L19
    L7:
        int r3 = r72.next();     // Catch: IOException -> L17 XmlPullParserException -> L19
        if (r3 == 2) goto L12;
        if (r3 != 1) goto L7;
    L12:
        if (r3 != 2) goto L16;
        return createFromXmlInner(r6, r72, r2, r8);
    L16:
        throw new XmlPullParserException("No start tag found");     // Catch: IOException -> L17 XmlPullParserException -> L19
    L17:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    L19:
        e = move-exception;
        Log.e(LOGTAG, "parser error", e);
        return null;
    }

    public static VectorDrawableCompat createFromXmlInner(Resources r1, XmlPullParser r2, AttributeSet r3, Resources.Theme r4) throws XmlPullParserException, IOException {
        VectorDrawableCompat r0 = new VectorDrawableCompat();
        r0.inflate(r1, r2, r3, r4);
        return r0;
    }

    static int applyAlpha(int r2, float r3) {
        return (r2 & ViewCompat.MEASURED_SIZE_MASK) | (((int) (Color.alpha(r2) * r3)) << 24);
    }

    @Override
    public void inflate(Resources r2, XmlPullParser r3, AttributeSet r4) throws XmlPullParserException, IOException {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.inflate(r2, r3, r4);
        return;
    L6:
        inflate(r2, r3, r4, null);
    }

    @Override
    public void inflate(Resources r3, XmlPullParser r4, AttributeSet r5, Resources.Theme r6) throws XmlPullParserException, IOException {
        if (this.mDelegateDrawable == null) goto L6;
        DrawableCompat.inflate(this.mDelegateDrawable, r3, r4, r5, r6);
        return;
    L6:
        VectorDrawableCompatState r0 = this.mVectorState;
        r0.mVPathRenderer = new VPathRenderer();
        TypedArray r1 = TypedArrayUtils.obtainAttributes(r3, r6, r5, AndroidResources.STYLEABLE_VECTOR_DRAWABLE_TYPE_ARRAY);
        updateStateFromTypedArray(r1, r4);
        r1.recycle();
        r0.mChangingConfigurations = getChangingConfigurations();
        r0.mCacheDirty = true;
        inflateInternal(r3, r4, r5, r6);
        this.mTintFilter = updateTintFilter(this.mTintFilter, r0.mTint, r0.mTintMode);
    }

    private static PorterDuff.Mode parseTintModeCompat(int r1, PorterDuff.Mode r2) {
        if (r1 == 3) goto L21;
        if (r1 == 5) goto L19;
        if (r1 == 9) goto L17;
        switch(r1) {
            case 14: goto L15;
            case 15: goto L13;
            case 16: goto L11;
            default: goto L9;
        };
    L9:
        return r2;
    L11:
        return PorterDuff.Mode.ADD;
    L13:
        return PorterDuff.Mode.SCREEN;
    L15:
        return PorterDuff.Mode.MULTIPLY;
    L17:
        return PorterDuff.Mode.SRC_ATOP;
    L19:
        return PorterDuff.Mode.SRC_IN;
    L21:
        return PorterDuff.Mode.SRC_OVER;
    }

    private void updateStateFromTypedArray(TypedArray r6, XmlPullParser r7) throws XmlPullParserException {
        VectorDrawableCompatState r0 = this.mVectorState;
        VPathRenderer r1 = r0.mVPathRenderer;
        r0.mTintMode = parseTintModeCompat(TypedArrayUtils.getNamedInt(r6, r7, "tintMode", 6, -1), PorterDuff.Mode.SRC_IN);
        ColorStateList r2 = r6.getColorStateList(1);
        if (r2 == null) goto L5;
        r0.mTint = r2;
    L5:
        r0.mAutoMirrored = TypedArrayUtils.getNamedBoolean(r6, r7, "autoMirrored", 5, r0.mAutoMirrored);
        r1.mViewportWidth = TypedArrayUtils.getNamedFloat(r6, r7, "viewportWidth", 7, r1.mViewportWidth);
        r1.mViewportHeight = TypedArrayUtils.getNamedFloat(r6, r7, "viewportHeight", 8, r1.mViewportHeight);
        if (r1.mViewportWidth <= 0.0f) goto L24;
        if (r1.mViewportHeight <= 0.0f) goto L22;
        r1.mBaseWidth = r6.getDimension(3, r1.mBaseWidth);
        r1.mBaseHeight = r6.getDimension(2, r1.mBaseHeight);
        if (r1.mBaseWidth <= 0.0f) goto L20;
        if (r1.mBaseHeight <= 0.0f) goto L18;
        r1.setAlpha(TypedArrayUtils.getNamedFloat(r6, r7, "alpha", 4, r1.getAlpha()));
        String r62 = r6.getString(0);
        if (r62 == null) goto L25;
        r1.mRootName = r62;
        r1.mVGTargetsMap.put(r62, r1);
        return;
    L25:
        return;
    L18:
        throw new XmlPullParserException(r6.getPositionDescription() + "<vector> tag requires height > 0");
    L20:
        throw new XmlPullParserException(r6.getPositionDescription() + "<vector> tag requires width > 0");
    L22:
        throw new XmlPullParserException(r6.getPositionDescription() + "<vector> tag requires viewportHeight > 0");
    L24:
        throw new XmlPullParserException(r6.getPositionDescription() + "<vector> tag requires viewportWidth > 0");
    }

    private void inflateInternal(Resources r11, XmlPullParser r12, AttributeSet r13, Resources.Theme r14) throws XmlPullParserException, IOException {
        VectorDrawableCompatState r0 = this.mVectorState;
        VPathRenderer r1 = r0.mVPathRenderer;
        ArrayDeque r2 = new ArrayDeque();
        r2.push(r1.mRootGroup);
        int r3 = r12.getEventType();
        int r4 = r12.getDepth() + 1;
        boolean r6 = true;
    L3:
        if (r3 == 1) goto L32;
        if (r12.getDepth() >= r4) goto L8;
        if (r3 == 3) goto L32;
    L8:
        if (r3 != 2) goto L27;
        String r32 = r12.getName();
        VGroup r7 = (VGroup) r2.peek();
        if (SHAPE_PATH.equals(r32) == false) goto L16;
        VFullPath r33 = new VFullPath();
        r33.inflate(r11, r13, r14, r12);
        r7.mChildren.add(r33);
        if (r33.getPathName() == null) goto L14;
        r1.mVGTargetsMap.put(r33.getPathName(), r33);
    L14:
        r6 = false;
        int r72 = r0.mChangingConfigurations;
        r0.mChangingConfigurations = r33.mChangingConfigurations | r72;
    L31:
        r3 = r12.next();
        goto L3
    L16:
        if (SHAPE_CLIP_PATH.equals(r32) == false) goto L22;
        VClipPath r34 = new VClipPath();
        r34.inflate(r11, r13, r14, r12);
        r7.mChildren.add(r34);
        if (r34.getPathName() == null) goto L20;
        r1.mVGTargetsMap.put(r34.getPathName(), r34);
    L20:
        int r73 = r0.mChangingConfigurations;
        r0.mChangingConfigurations = r34.mChangingConfigurations | r73;
        goto L31
    L22:
        if (SHAPE_GROUP.equals(r32) == false) goto L31;
        VGroup r35 = new VGroup();
        r35.inflate(r11, r13, r14, r12);
        r7.mChildren.add(r35);
        r2.push(r35);
        if (r35.getGroupName() == null) goto L26;
        r1.mVGTargetsMap.put(r35.getGroupName(), r35);
    L26:
        int r74 = r0.mChangingConfigurations;
        r0.mChangingConfigurations = r35.mChangingConfigurations | r74;
        goto L31
    L27:
        if (r3 != 3) goto L31;
        if (SHAPE_GROUP.equals(r12.getName()) == false) goto L31;
        r2.pop();
    L32:
        if (r6 == true) goto L35;
        return;
    L35:
        throw new XmlPullParserException("no path defined");
    }

    private void printGroupTree(VGroup r5, int r6) {
        int r0 = 0;
        String r2 = "";
        int r1 = 0;
    L3:
        if (r1 >= r6) goto L5;
        r2 = r2 + "    ";
        r1 = r1 + 1;
        goto L3
    L5:
        Log.v(LOGTAG, r2 + "current group is :" + r5.getGroupName() + " rotation is " + r5.mRotate);
        StringBuilder r12 = new StringBuilder();
        r12.append(r2);
        r12.append("matrix is :");
        r12.append(r5.getLocalMatrix().toString());
        Log.v(LOGTAG, r12.toString());
    L7:
        if (r0 >= r5.mChildren.size()) goto L13;
        VObject r13 = r5.mChildren.get(r0);
        if ((r13 instanceof VGroup) == false) goto L11;
        printGroupTree((VGroup) r13, r6 + 1);
    L12:
        r0 = r0 + 1;
        goto L7
    L11:
        ((VPath) r13).printVPath(r6 + 1);
        goto L12
    }

    void setAllowCaching(boolean r1) {
        this.mAllowCaching = r1;
    }

    private boolean needMirroring() {
        if (Build.VERSION.SDK_INT >= 17) goto L5;
        return false;
    L5:
        if (isAutoMirrored() == true) goto L7;
        return false;
    L7:
        if (DrawableCompat.getLayoutDirection(this) != 1) goto L12;
        return true;
    L12:
        return false;
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.setBounds(r2);
        return;
    }

    @Override
    public int getChangingConfigurations() {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.getChangingConfigurations();
    L7:
        return super.getChangingConfigurations() | this.mVectorState.getChangingConfigurations();
    }

    @Override
    public void invalidateSelf() {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.invalidateSelf();
        return;
    L6:
        super.invalidateSelf();
    }

    @Override
    public void scheduleSelf(Runnable r2, long r3) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.scheduleSelf(r2, r3);
        return;
    L6:
        super.scheduleSelf(r2, r3);
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
        if (this.mDelegateDrawable == null) goto L7;
        return this.mDelegateDrawable.setVisible(r2, r3);
    L7:
        return super.setVisible(r2, r3);
    }

    @Override
    public void unscheduleSelf(Runnable r2) {
        if (this.mDelegateDrawable == null) goto L6;
        this.mDelegateDrawable.unscheduleSelf(r2);
        return;
    L6:
        super.unscheduleSelf(r2);
    }
}
