package android.support.v4.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.AbsSavedState;
import android.support.v4.view.AccessibilityDelegateCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.support.v4.widget.ViewDragHelper;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.ArrayList;

public class SlidingPaneLayout extends ViewGroup {
    private static final int DEFAULT_FADE_COLOR = -858993460;
    private static final int DEFAULT_OVERHANG_SIZE = 32;
    private static final int MIN_FLING_VELOCITY = 400;
    private static final String TAG = "SlidingPaneLayout";
    private boolean mCanSlide;
    private int mCoveredFadeColor;
    private boolean mDisplayListReflectionLoaded;
    final ViewDragHelper mDragHelper;
    private boolean mFirstLayout;
    private Method mGetDisplayList;
    private float mInitialMotionX;
    private float mInitialMotionY;
    boolean mIsUnableToDrag;
    private final int mOverhangSize;
    private PanelSlideListener mPanelSlideListener;
    private int mParallaxBy;
    private float mParallaxOffset;
    final ArrayList<DisableLayerRunnable> mPostedRunnables;
    boolean mPreservedOpenState;
    private Field mRecreateDisplayList;
    private Drawable mShadowDrawableLeft;
    private Drawable mShadowDrawableRight;
    float mSlideOffset;
    int mSlideRange;
    View mSlideableView;
    private int mSliderFadeColor;
    private final Rect mTmpRect;

    class AccessibilityDelegate extends AccessibilityDelegateCompat {
        private final Rect mTmpRect;
        final SlidingPaneLayout this$0;

        AccessibilityDelegate(SlidingPaneLayout r1) {
            this.this$0 = r1;
            this.mTmpRect = new Rect();
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r4, AccessibilityNodeInfoCompat r5) {
            AccessibilityNodeInfoCompat r0 = AccessibilityNodeInfoCompat.obtain(r5);
            super.onInitializeAccessibilityNodeInfo(r4, r0);
            copyNodeInfoNoChildren(r5, r0);
            r0.recycle();
            r5.setClassName(SlidingPaneLayout.class.getName());
            r5.setSource(r4);
            Object r42 = ViewCompat.getParentForAccessibility(r4);
            if ((r42 instanceof View) == false) goto L5;
            r5.setParent((View) r42);
        L5:
            int r43 = this.this$0.getChildCount();
            int r02 = 0;
        L6:
            if (r02 >= r43) goto L13;
            View r1 = this.this$0.getChildAt(r02);
            if (filter(r1) == true) goto L12;
            if (r1.getVisibility() != 0) goto L12;
            ViewCompat.setImportantForAccessibility(r1, 1);
            r5.addChild(r1);
        L12:
            r02 = r02 + 1;
            goto L6
        }

        @Override
        public void onInitializeAccessibilityEvent(View r1, AccessibilityEvent r2) {
            super.onInitializeAccessibilityEvent(r1, r2);
            r2.setClassName(SlidingPaneLayout.class.getName());
        }

        @Override
        public boolean onRequestSendAccessibilityEvent(ViewGroup r2, View r3, AccessibilityEvent r4) {
            if (filter(r3) == false) goto L5;
            return false;
        L5:
            return super.onRequestSendAccessibilityEvent(r2, r3, r4);
        }

        public boolean filter(View r2) {
            return this.this$0.isDimmed(r2);
        }

        private void copyNodeInfoNoChildren(AccessibilityNodeInfoCompat r2, AccessibilityNodeInfoCompat r3) {
            Rect r0 = this.mTmpRect;
            r3.getBoundsInParent(r0);
            r2.setBoundsInParent(r0);
            r3.getBoundsInScreen(r0);
            r2.setBoundsInScreen(r0);
            r2.setVisibleToUser(r3.isVisibleToUser());
            r2.setPackageName(r3.getPackageName());
            r2.setClassName(r3.getClassName());
            r2.setContentDescription(r3.getContentDescription());
            r2.setEnabled(r3.isEnabled());
            r2.setClickable(r3.isClickable());
            r2.setFocusable(r3.isFocusable());
            r2.setFocused(r3.isFocused());
            r2.setAccessibilityFocused(r3.isAccessibilityFocused());
            r2.setSelected(r3.isSelected());
            r2.setLongClickable(r3.isLongClickable());
            r2.addAction(r3.getActions());
            r2.setMovementGranularities(r3.getMovementGranularities());
        }
    }

    private class DisableLayerRunnable implements Runnable {
        final View mChildView;
        final SlidingPaneLayout this$0;

        DisableLayerRunnable(SlidingPaneLayout r1, View r2) {
            this.this$0 = r1;
            this.mChildView = r2;
        }

        @Override
        public void run() {
            if (this.mChildView.getParent() != this.this$0) goto L5;
            this.mChildView.setLayerType(0, null);
            this.this$0.invalidateChildRegion(this.mChildView);
        L5:
            this.this$0.mPostedRunnables.remove(this);
        }
    }

    private class DragHelperCallback extends ViewDragHelper.Callback {
        final SlidingPaneLayout this$0;

        DragHelperCallback(SlidingPaneLayout r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean tryCaptureView(View r1, int r2) {
            if (this.this$0.mIsUnableToDrag == false) goto L7;
            return false;
        L7:
            return ((LayoutParams) r1.getLayoutParams()).slideable;
        }

        @Override
        public void onViewDragStateChanged(int r2) {
            if (this.this$0.mDragHelper.getViewDragState() == 0) goto L5;
            return;
        L5:
            if (this.this$0.mSlideOffset != 0.0f) goto L7;
            SlidingPaneLayout r22 = this.this$0;
            r22.updateObscuredViewsVisibility(r22.mSlideableView);
            SlidingPaneLayout r23 = this.this$0;
            r23.dispatchOnPanelClosed(r23.mSlideableView);
            this.this$0.mPreservedOpenState = false;
            return;
        L7:
            SlidingPaneLayout r24 = this.this$0;
            r24.dispatchOnPanelOpened(r24.mSlideableView);
            this.this$0.mPreservedOpenState = true;
        }

        @Override
        public void onViewCaptured(View r1, int r2) {
            this.this$0.setAllChildrenVisible();
        }

        @Override
        public void onViewPositionChanged(View r1, int r2, int r3, int r4, int r5) {
            this.this$0.onPanelDragged(r2);
            this.this$0.invalidate();
        }

        @Override
        public void onViewReleased(View r4, float r5, float r6) {
            LayoutParams r62 = (LayoutParams) r4.getLayoutParams();
            if (this.this$0.isLayoutRtlSupport() == false) goto L12;
            int r0 = this.this$0.getPaddingRight() + r62.rightMargin;
            if (r5 >= 0.0f) goto L7;
        L10:
            r0 = r0 + this.this$0.mSlideRange;
        L11:
            int r52 = this.this$0.mSlideableView.getWidth();
            int r63 = (this.this$0.getWidth() - r0) - r52;
        L18:
            this.this$0.mDragHelper.settleCapturedViewAt(r63, r4.getTop());
            this.this$0.invalidate();
            return;
        L7:
            if (r5 != 0.0f) goto L11;
            if (this.this$0.mSlideOffset <= 0.5f) goto L11;
        L12:
            int r02 = this.this$0.getPaddingLeft();
            r63 = r62.leftMargin + r02;
            if (r5 > 0.0f) goto L17;
            if (r5 != 0.0f) goto L18;
            if (this.this$0.mSlideOffset <= 0.5f) goto L18;
        L17:
            r63 = r63 + this.this$0.mSlideRange;
            goto L18
        }

        @Override
        public int getViewHorizontalDragRange(View r1) {
            return this.this$0.mSlideRange;
        }

        @Override
        public int clampViewPositionHorizontal(View r2, int r3, int r4) {
            LayoutParams r22 = (LayoutParams) this.this$0.mSlideableView.getLayoutParams();
            if (this.this$0.isLayoutRtlSupport() == false) goto L5;
            int r42 = this.this$0.getWidth() - ((this.this$0.getPaddingRight() + r22.rightMargin) + this.this$0.mSlideableView.getWidth());
            int r23 = r42 - this.this$0.mSlideRange;
            return Math.max(Math.min(r3, r42), r23);
        L5:
            int r43 = this.this$0.getPaddingLeft() + r22.leftMargin;
            int r24 = this.this$0.mSlideRange + r43;
            return Math.min(Math.max(r3, r43), r24);
        }

        @Override
        public int clampViewPositionVertical(View r1, int r2, int r3) {
            return r1.getTop();
        }

        @Override
        public void onEdgeDragStarted(int r2, int r3) {
            this.this$0.mDragHelper.captureChildView(this.this$0.mSlideableView, r3);
        }
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        private static final int[] ATTRS = null;
        Paint dimPaint;
        boolean dimWhenOffset;
        boolean slideable;
        public float weight;

        static {
            ATTRS = new int[]{R.attr.layout_weight};
        }

        public LayoutParams() {
            super(-1, -1);
            this.weight = 0.0f;
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.weight = 0.0f;
        }

        public LayoutParams(@NonNull ViewGroup.LayoutParams r1) {
            super(r1);
            this.weight = 0.0f;
        }

        public LayoutParams(@NonNull ViewGroup.MarginLayoutParams r1) {
            super(r1);
            this.weight = 0.0f;
        }

        public LayoutParams(@NonNull LayoutParams r2) {
            super(r2);
            this.weight = 0.0f;
            this.weight = r2.weight;
        }

        public LayoutParams(@NonNull Context r3, @Nullable AttributeSet r4) {
            super(r3, r4);
            this.weight = 0.0f;
            TypedArray r32 = r3.obtainStyledAttributes(r4, ATTRS);
            this.weight = r32.getFloat(0, 0.0f);
            r32.recycle();
        }
    }

    public interface PanelSlideListener {
        void onPanelClosed(@NonNull View r1);

        void onPanelOpened(@NonNull View r1);

        void onPanelSlide(@NonNull View r1, float r2);
    }

    static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        boolean isOpen;

        SavedState(Parcelable r1) {
            super(r1);
        }

        SavedState(Parcel r1, ClassLoader r2) {
            super(r1, r2);
            if (r1.readInt() == 0) goto L5;
            boolean r12 = true;
        L6:
            this.isOpen = r12;
            return;
        L5:
            r12 = false;
            goto L6
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            super.writeToParcel(r1, r2);
            r1.writeInt(this.isOpen ? 1 : 0);
        }

        static {
            CREATOR = new 1();
        }
    }

    public static class SimplePanelSlideListener implements PanelSlideListener {
        @Override
        public void onPanelClosed(View r1) {
        }

        @Override
        public void onPanelOpened(View r1) {
        }

        @Override
        public void onPanelSlide(View r1, float r2) {
        }

        public SimplePanelSlideListener() {
        }
    }

    public SlidingPaneLayout(@NonNull Context r2) {
        this(r2, null);
    }

    public SlidingPaneLayout(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, 0);
    }

    public SlidingPaneLayout(@NonNull Context r2, @Nullable AttributeSet r3, int r4) {
        super(r2, r3, r4);
        this.mSliderFadeColor = DEFAULT_FADE_COLOR;
        this.mFirstLayout = true;
        this.mTmpRect = new Rect();
        this.mPostedRunnables = new ArrayList();
        float r22 = r2.getResources().getDisplayMetrics().density;
        this.mOverhangSize = (int) ((32.0f * r22) + 0.5f);
        setWillNotDraw(false);
        ViewCompat.setAccessibilityDelegate(this, new AccessibilityDelegate(this));
        ViewCompat.setImportantForAccessibility(this, 1);
        this.mDragHelper = ViewDragHelper.create(this, 0.5f, new DragHelperCallback(this));
        this.mDragHelper.setMinVelocity(r22 * 400.0f);
    }

    public void setParallaxDistance(@Px int r1) {
        this.mParallaxBy = r1;
        requestLayout();
    }

    @Px
    public int getParallaxDistance() {
        return this.mParallaxBy;
    }

    public void setSliderFadeColor(@ColorInt int r1) {
        this.mSliderFadeColor = r1;
    }

    @ColorInt
    public int getSliderFadeColor() {
        return this.mSliderFadeColor;
    }

    public void setCoveredFadeColor(@ColorInt int r1) {
        this.mCoveredFadeColor = r1;
    }

    @ColorInt
    public int getCoveredFadeColor() {
        return this.mCoveredFadeColor;
    }

    public void setPanelSlideListener(@Nullable PanelSlideListener r1) {
        this.mPanelSlideListener = r1;
    }

    void dispatchOnPanelSlide(View r3) {
        PanelSlideListener r0 = this.mPanelSlideListener;
        if (r0 == null) goto L6;
        r0.onPanelSlide(r3, this.mSlideOffset);
        return;
    }

    void dispatchOnPanelOpened(View r2) {
        PanelSlideListener r0 = this.mPanelSlideListener;
        if (r0 == null) goto L5;
        r0.onPanelOpened(r2);
    L5:
        sendAccessibilityEvent(32);
    }

    void dispatchOnPanelClosed(View r2) {
        PanelSlideListener r0 = this.mPanelSlideListener;
        if (r0 == null) goto L5;
        r0.onPanelClosed(r2);
    L5:
        sendAccessibilityEvent(32);
    }

    void updateObscuredViewsVisibility(View r18) {
        View r0 = r18;
        boolean r1 = isLayoutRtlSupport();
        if (r1 == false) goto L5;
        int r2 = getWidth() - getPaddingRight();
    L6:
        if (r1 == false) goto L8;
        int r3 = getPaddingLeft();
    L9:
        int r4 = getPaddingTop();
        int r5 = getHeight() - getPaddingBottom();
        if (r0 != null) goto L12;
    L14:
        int r7 = 0;
        int r8 = 0;
        int r9 = 0;
        int r10 = 0;
    L15:
        int r11 = getChildCount();
        int r12 = 0;
    L16:
        if (r12 >= r11) goto L40;
        View r14 = getChildAt(r12);
        if (r14 == r0) goto L45;
        if (r14.getVisibility() != 8) goto L23;
        boolean r16 = r1;
    L38:
        r12 = r12 + 1;
        r0 = r18;
        r1 = r16;
        goto L16
    L23:
        if (r1 == false) goto L25;
        int r6 = r3;
    L26:
        int r62 = Math.max(r6, r14.getLeft());
        int r15 = Math.max(r4, r14.getTop());
        if (r1 == false) goto L29;
        r16 = r1;
        int r02 = r2;
    L30:
        int r03 = Math.min(r02, r14.getRight());
        int r13 = Math.min(r5, r14.getBottom());
        if (r62 < r7) goto L36;
        if (r15 < r9) goto L36;
        if (r03 > r8) goto L36;
        if (r13 > r10) goto L36;
        int r63 = 4;
    L37:
        r14.setVisibility(r63);
    L36:
        r63 = 0;
        goto L37
    L29:
        r16 = r1;
        r02 = r3;
        goto L30
    L25:
        r6 = r2;
        goto L26
    L45:
        return;
    L40:
        return;
    L12:
        if (viewIsOpaque(r18) == false) goto L14;
        r7 = r18.getLeft();
        r8 = r18.getRight();
        r9 = r18.getTop();
        r10 = r18.getBottom();
        goto L15
    L8:
        r3 = getWidth() - getPaddingRight();
        goto L9
    L5:
        r2 = getPaddingLeft();
        goto L6
    }

    void setAllChildrenVisible() {
        int r0 = getChildCount();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L8;
        View r3 = getChildAt(r2);
        if (r3.getVisibility() != 4) goto L7;
        r3.setVisibility(0);
    L7:
        r2 = r2 + 1;
        goto L3
    }

    private static boolean viewIsOpaque(View r4) {
        if (r4.isOpaque() == false) goto L6;
        return true;
    L6:
        if (Build.VERSION.SDK_INT < 18) goto L8;
        return false;
    L8:
        Drawable r42 = r4.getBackground();
        if (r42 != null) goto L11;
        return false;
    L11:
        if (r42.getOpacity() == (-1)) goto L16;
        return false;
    L16:
        return true;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = true;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mFirstLayout = true;
        int r0 = this.mPostedRunnables.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L5;
        this.mPostedRunnables.get(r1).run();
        r1 = r1 + 1;
        goto L3
    L5:
        this.mPostedRunnables.clear();
    }

    @Override
    protected void onMeasure(int r21, int r22) {
        int r1 = View.MeasureSpec.getMode(r21);
        int r2 = View.MeasureSpec.getSize(r21);
        int r3 = View.MeasureSpec.getMode(r22);
        int r4 = View.MeasureSpec.getSize(r22);
        if (r1 != 1073741824) goto L5;
        if (r3 == 0) goto L14;
    L19:
        boolean r12 = false;
        if (r3 == Integer.MIN_VALUE) goto L24;
        if (r3 == 1073741824) goto L23;
        int r42 = 0;
        int r5 = 0;
    L25:
        int r8 = (r2 - getPaddingLeft()) - getPaddingRight();
        int r9 = getChildCount();
        if (r9 <= 2) goto L28;
        Log.e(TAG, "onMeasure: More than two child views are not supported.");
    L28:
        this.mSlideableView = null;
        int r13 = r42;
        int r14 = r8;
        int r43 = 0;
        boolean r11 = false;
        float r122 = 0.0f;
    L29:
        int r15 = 8;
        if (r43 >= r9) goto L66;
        View r6 = getChildAt(r43);
        LayoutParams r7 = (LayoutParams) r6.getLayoutParams();
        if (r6.getVisibility() != 8) goto L35;
        r7.dimWhenOffset = r12;
    L65:
        r43 = r43 + 1;
        r12 = false;
        goto L29
    L35:
        if (r7.weight <= 0.0f) goto L39;
        r122 = r122 + r7.weight;
        if (r7.width == 0) goto L65;
    L39:
        int r10 = r7.leftMargin + r7.rightMargin;
        if (r7.width != (-2)) goto L43;
        int r16 = View.MeasureSpec.makeMeasureSpec(r8 - r10, Integer.MIN_VALUE);
    L47:
        if (r7.height != (-2)) goto L50;
        int r152 = View.MeasureSpec.makeMeasureSpec(r5, Integer.MIN_VALUE);
    L53:
        r6.measure(r16, r152);
        int r17 = r6.getMeasuredWidth();
        int r102 = r6.getMeasuredHeight();
        if (r3 != Integer.MIN_VALUE) goto L57;
        if (r102 <= r13) goto L57;
        r13 = Math.min(r102, r5);
    L57:
        r14 = r14 - r17;
        if (r14 >= 0) goto L60;
        boolean r18 = true;
    L61:
        r7.slideable = r18;
        boolean r19 = r18 | r11;
        if (r7.slideable == false) goto L64;
        this.mSlideableView = r6;
    L64:
        r11 = r19;
        goto L65
    L60:
        r18 = false;
        goto L61
    L50:
        if (r7.height != (-1)) goto L52;
        r152 = View.MeasureSpec.makeMeasureSpec(r5, 1073741824);
        goto L53
    L52:
        r152 = View.MeasureSpec.makeMeasureSpec(r7.height, 1073741824);
        goto L53
    L43:
        if (r7.width != (-1)) goto L45;
        r16 = View.MeasureSpec.makeMeasureSpec(r8 - r10, 1073741824);
        goto L47
    L45:
        r16 = View.MeasureSpec.makeMeasureSpec(r7.width, 1073741824);
        goto L47
    L66:
        if (r11 == false) goto L68;
    L69:
        int r110 = r8 - this.mOverhangSize;
        int r32 = 0;
    L70:
        if (r32 >= r9) goto L123;
        View r44 = getChildAt(r32);
        if (r44.getVisibility() != r15) goto L75;
    L73:
        int r192 = r110;
    L122:
        r32 = r32 + 1;
        r110 = r192;
        r15 = 8;
        goto L70
    L75:
        LayoutParams r62 = (LayoutParams) r44.getLayoutParams();
        if (r44.getVisibility() == r15) goto L73;
        if (r62.width == 0) goto L81;
    L83:
        boolean r72 = false;
    L84:
        if (r72 == false) goto L86;
        int r103 = 0;
    L87:
        if (r11 == false) goto L106;
        if (r44 == this.mSlideableView) goto L106;
        if (r62.width >= 0) goto L73;
        if (r103 <= r110) goto L94;
    L95:
        if (r72 == true) goto L97;
        int r73 = 1073741824;
        int r63 = View.MeasureSpec.makeMeasureSpec(r44.getMeasuredHeight(), 1073741824);
    L104:
        r44.measure(View.MeasureSpec.makeMeasureSpec(r110, r73), r63);
        goto L73
    L97:
        if (r62.height != (-2)) goto L100;
        r63 = View.MeasureSpec.makeMeasureSpec(r5, Integer.MIN_VALUE);
        r73 = 1073741824;
        goto L104
    L100:
        if (r62.height != (-1)) goto L102;
        r73 = 1073741824;
        r63 = View.MeasureSpec.makeMeasureSpec(r5, 1073741824);
        goto L104
    L102:
        r73 = 1073741824;
        r63 = View.MeasureSpec.makeMeasureSpec(r62.height, 1073741824);
        goto L104
    L94:
        if (r62.weight <= 0.0f) goto L73;
    L106:
        if (r62.weight <= 0.0f) goto L73;
        if (r62.width == 0) goto L110;
        int r153 = View.MeasureSpec.makeMeasureSpec(r44.getMeasuredHeight(), 1073741824);
    L117:
        if (r11 == false) goto L121;
        int r64 = r8 - (r62.leftMargin + r62.rightMargin);
        r192 = r110;
        int r111 = View.MeasureSpec.makeMeasureSpec(r64, 1073741824);
        if (r103 == r64) goto L122;
        r44.measure(r111, r153);
        goto L122
    L121:
        r192 = r110;
        r44.measure(View.MeasureSpec.makeMeasureSpec(r103 + ((int) ((r62.weight * Math.max(0, r14)) / r122)), 1073741824), r153);
        goto L122
    L110:
        if (r62.height != (-2)) goto L113;
        r153 = View.MeasureSpec.makeMeasureSpec(r5, Integer.MIN_VALUE);
        goto L117
    L113:
        if (r62.height != (-1)) goto L115;
        r153 = View.MeasureSpec.makeMeasureSpec(r5, 1073741824);
        goto L117
    L115:
        r153 = View.MeasureSpec.makeMeasureSpec(r62.height, 1073741824);
        goto L117
    L86:
        r103 = r44.getMeasuredWidth();
        goto L87
    L81:
        if (r62.weight <= 0.0f) goto L83;
        r72 = true;
    L123:
        setMeasuredDimension(r2, (r13 + getPaddingTop()) + getPaddingBottom());
        this.mCanSlide = r11;
        if (this.mDragHelper.getViewDragState() == 0) goto L135;
        if (r11 == true) goto L136;
        this.mDragHelper.abort();
        return;
    L136:
        return;
    L135:
        return;
    L68:
        if (r122 <= 0.0f) goto L123;
    L23:
        r42 = (r4 - getPaddingTop()) - getPaddingBottom();
        r5 = r42;
        goto L25
    L24:
        r5 = (r4 - getPaddingTop()) - getPaddingBottom();
        r42 = 0;
        goto L25
    L14:
        if (isInEditMode() == false) goto L18;
        if (r3 != 0) goto L19;
        r3 = Integer.MIN_VALUE;
        r4 = 300;
        goto L19
    L18:
        throw new IllegalStateException("Height must not be UNSPECIFIED");
    L5:
        if (isInEditMode() == false) goto L11;
        if (r1 == Integer.MIN_VALUE) goto L19;
        if (r1 != 0) goto L19;
        r2 = 300;
        goto L19
    L11:
        throw new IllegalStateException("Width must have an exact value or MATCH_PARENT");
    }

    @Override
    protected void onLayout(boolean r19, int r20, int r21, int r22, int r23) {
        boolean r1 = isLayoutRtlSupport();
        if (r1 == false) goto L5;
        this.mDragHelper.setEdgeTrackingEnabled(2);
    L6:
        int r3 = r22 - r20;
        if (r1 == false) goto L9;
        int r4 = getPaddingRight();
    L10:
        if (r1 == false) goto L12;
        int r5 = getPaddingLeft();
    L13:
        int r6 = getPaddingTop();
        int r7 = getChildCount();
        if (this.mFirstLayout == true) goto L16;
    L22:
        int r11 = r4;
        int r12 = r11;
        int r42 = 0;
    L23:
        if (r42 >= r7) goto L50;
        View r13 = getChildAt(r42);
        if (r13.getVisibility() == 8) goto L48;
        LayoutParams r14 = (LayoutParams) r13.getLayoutParams();
        int r15 = r13.getMeasuredWidth();
        if (r14.slideable == false) goto L39;
        int r8 = r3 - r5;
        int r10 = (Math.min(r11, r8 - this.mOverhangSize) - r12) - (r14.leftMargin + r14.rightMargin);
        this.mSlideRange = r10;
        if (r1 == false) goto L32;
        int r2 = r14.rightMargin;
    L34:
        if ((((r12 + r2) + r10) + (r15 / 2)) <= r8) goto L36;
        boolean r82 = true;
    L37:
        r14.dimWhenOffset = r82;
        int r83 = (int) (r10 * this.mSlideOffset);
        int r24 = (r2 + r83) + r12;
        this.mSlideOffset = r83 / this.mSlideRange;
        int r84 = 0;
    L44:
        if (r1 == false) goto L46;
        int r102 = (r3 - r24) + r84;
        int r85 = r102 - r15;
    L47:
        r13.layout(r85, r6, r102, r13.getMeasuredHeight() + r6);
        r11 = r11 + r13.getWidth();
        r12 = r24;
        goto L48
    L46:
        r85 = r24 - r84;
        r102 = r85 + r15;
        goto L47
    L36:
        r82 = false;
        goto L37
    L32:
        r2 = r14.leftMargin;
        goto L34
    L39:
        if (this.mCanSlide == false) goto L43;
        int r25 = this.mParallaxBy;
        if (r25 == 0) goto L43;
        r84 = (int) ((1.0f - this.mSlideOffset) * r25);
        r24 = r11;
    L43:
        r24 = r11;
        r84 = 0;
    L48:
        r42 = r42 + 1;
        goto L23
    L50:
        if (this.mFirstLayout == true) goto L52;
    L63:
        this.mFirstLayout = false;
        return;
    L52:
        if (this.mCanSlide == true) goto L54;
        int r16 = 0;
    L60:
        if (r16 >= r7) goto L62;
        dimChildView(getChildAt(r16), 0.0f, this.mSliderFadeColor);
        r16 = r16 + 1;
    L62:
        updateObscuredViewsVisibility(this.mSlideableView);
        goto L63
    L54:
        if (this.mParallaxBy == 0) goto L57;
        parallaxOtherViews(this.mSlideOffset);
    L57:
        if (((LayoutParams) this.mSlideableView.getLayoutParams()).dimWhenOffset == false) goto L62;
        dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
        goto L62
    L16:
        if (this.mCanSlide == true) goto L18;
    L20:
        float r86 = 0.0f;
    L21:
        this.mSlideOffset = r86;
        goto L22
    L18:
        if (this.mPreservedOpenState == false) goto L20;
        r86 = 1.0f;
        goto L21
    L12:
        r5 = getPaddingRight();
        goto L13
    L9:
        r4 = getPaddingLeft();
        goto L10
    L5:
        this.mDragHelper.setEdgeTrackingEnabled(1);
        goto L6
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
        super.onSizeChanged(r1, r2, r3, r4);
        if (r1 == r3) goto L6;
        this.mFirstLayout = true;
        return;
    }

    @Override
    public void requestChildFocus(View r1, View r2) {
        super.requestChildFocus(r1, r2);
        if (isInTouchMode() == false) goto L5;
        return;
    L5:
        if (this.mCanSlide == false) goto L7;
        return;
    L7:
        if (r1 != this.mSlideableView) goto L9;
        boolean r12 = true;
    L10:
        this.mPreservedOpenState = r12;
        return;
    L9:
        r12 = false;
        goto L10
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r7) {
        int r0 = r7.getActionMasked();
        if (this.mCanSlide == true) goto L11;
        if (r0 != 0) goto L11;
        if (getChildCount() <= 1) goto L11;
        if (getChildAt(1) == null) goto L11;
        this.mPreservedOpenState = !this.mDragHelper.isViewUnder(r1, (int) r7.getX(), (int) r7.getY());
    L11:
        if (this.mCanSlide == true) goto L13;
    L44:
        this.mDragHelper.cancel();
        return super.onInterceptTouchEvent(r7);
    L13:
        if (this.mIsUnableToDrag == false) goto L17;
        if (r0 != 0) goto L44;
    L17:
        if (r0 == 3) goto L42;
        if (r0 == 1) goto L42;
        if (r0 != 0) goto L22;
        this.mIsUnableToDrag = false;
        float r02 = r7.getX();
        float r1 = r7.getY();
        this.mInitialMotionX = r02;
        this.mInitialMotionY = r1;
        if (this.mDragHelper.isViewUnder(this.mSlideableView, (int) r02, (int) r1) == true) goto L33;
    L35:
        boolean r03 = false;
    L37:
        if (this.mDragHelper.shouldInterceptTouchEvent(r7) == true) goto L46;
        if (r03 == true) goto L47;
        return false;
    L47:
        return true;
    L46:
        return true;
    L33:
        if (isDimmed(this.mSlideableView) == false) goto L35;
        r03 = true;
        goto L37
    L22:
        if (r0 != 2) goto L35;
        float r04 = r7.getX();
        float r12 = r7.getY();
        float r05 = Math.abs(r04 - this.mInitialMotionX);
        float r13 = Math.abs(r12 - this.mInitialMotionY);
        if (r05 <= this.mDragHelper.getTouchSlop()) goto L35;
        if (r13 <= r05) goto L35;
        this.mDragHelper.cancel();
        this.mIsUnableToDrag = true;
        return false;
    L42:
        this.mDragHelper.cancel();
        return false;
    }

    @Override
    public boolean onTouchEvent(MotionEvent r6) {
        if (this.mCanSlide == false) goto L5;
        this.mDragHelper.processTouchEvent(r6);
        int r0 = r6.getActionMasked();
        if (r0 == 0) goto L17;
        if (r0 == 1) goto L11;
    L18:
        return true;
    L11:
        if (isDimmed(this.mSlideableView) == false) goto L18;
        float r02 = r6.getX();
        float r62 = r6.getY();
        float r2 = r02 - this.mInitialMotionX;
        float r3 = r62 - this.mInitialMotionY;
        int r4 = this.mDragHelper.getTouchSlop();
        if (((r2 * r2) + (r3 * r3)) >= (r4 * r4)) goto L18;
        if (this.mDragHelper.isViewUnder(this.mSlideableView, (int) r02, (int) r62) == false) goto L18;
        closePane(this.mSlideableView, 0);
        goto L18
    L17:
        float r03 = r6.getX();
        float r63 = r6.getY();
        this.mInitialMotionX = r03;
        this.mInitialMotionY = r63;
        goto L18
    L5:
        return super.onTouchEvent(r6);
    }

    private boolean closePane(View r2, int r3) {
        if (this.mFirstLayout == false) goto L5;
    L8:
        this.mPreservedOpenState = false;
        return true;
    L5:
        if (smoothSlideTo(0.0f, r3) == true) goto L8;
        return false;
    }

    private boolean openPane(View r1, int r2) {
        if (this.mFirstLayout == false) goto L5;
    L9:
        this.mPreservedOpenState = true;
        return true;
    L5:
        if (smoothSlideTo(1.0f, r2) == true) goto L9;
        return false;
    }

    @Deprecated
    public void smoothSlideOpen() {
        openPane();
    }

    public boolean openPane() {
        return openPane(this.mSlideableView, 0);
    }

    @Deprecated
    public void smoothSlideClosed() {
        closePane();
    }

    public boolean closePane() {
        return closePane(this.mSlideableView, 0);
    }

    public boolean isOpen() {
        if (this.mCanSlide == true) goto L5;
    L8:
        return true;
    L5:
        if (this.mSlideOffset == 1.0f) goto L8;
        return false;
    }

    @Deprecated
    public boolean canSlide() {
        return this.mCanSlide;
    }

    public boolean isSlideable() {
        return this.mCanSlide;
    }

    void onPanelDragged(int r5) {
        if (this.mSlideableView != null) goto L6;
        this.mSlideOffset = 0.0f;
        return;
    L6:
        boolean r0 = isLayoutRtlSupport();
        LayoutParams r1 = (LayoutParams) this.mSlideableView.getLayoutParams();
        int r2 = this.mSlideableView.getWidth();
        if (r0 == false) goto L9;
        r5 = (getWidth() - r5) - r2;
    L9:
        if (r0 == false) goto L11;
        int r22 = getPaddingRight();
    L12:
        if (r0 == false) goto L14;
        int r02 = r1.rightMargin;
    L15:
        this.mSlideOffset = (r5 - (r22 + r02)) / this.mSlideRange;
        if (this.mParallaxBy == 0) goto L19;
        parallaxOtherViews(this.mSlideOffset);
    L19:
        if (r1.dimWhenOffset == false) goto L21;
        dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
    L21:
        dispatchOnPanelSlide(this.mSlideableView);
        return;
    L14:
        r02 = r1.leftMargin;
        goto L15
    L11:
        r22 = getPaddingLeft();
        goto L12
    }

    private void dimChildView(View r4, float r5, int r6) {
        LayoutParams r0 = (LayoutParams) r4.getLayoutParams();
        if (r5 <= 0.0f) goto L13;
        if (r6 == 0) goto L13;
        int r52 = (((int) ((((-16777216) & r6) >>> 24) * r5)) << 24) | (r6 & ViewCompat.MEASURED_SIZE_MASK);
        if (r0.dimPaint != null) goto L8;
        r0.dimPaint = new Paint();
    L8:
        r0.dimPaint.setColorFilter(new PorterDuffColorFilter(r52, PorterDuff.Mode.SRC_OVER));
        if (r4.getLayerType() == 2) goto L11;
        r4.setLayerType(2, r0.dimPaint);
    L11:
        invalidateChildRegion(r4);
        return;
    L13:
        if (r4.getLayerType() != 0) goto L15;
        return;
    L15:
        if (r0.dimPaint == null) goto L17;
        r0.dimPaint.setColorFilter(null);
    L17:
        DisableLayerRunnable r53 = new DisableLayerRunnable(this, r4);
        this.mPostedRunnables.add(r53);
        ViewCompat.postOnAnimation(this, r53);
    }

    @Override
    protected boolean drawChild(Canvas r5, View r6, long r7) {
        LayoutParams r0 = (LayoutParams) r6.getLayoutParams();
        int r1 = r5.save();
        if (this.mCanSlide == true) goto L5;
    L13:
        boolean r62 = super.drawChild(r5, r6, r7);
        r5.restoreToCount(r1);
        return r62;
    L5:
        if (r0.slideable == true) goto L13;
        if (this.mSlideableView == null) goto L13;
        r5.getClipBounds(this.mTmpRect);
        if (isLayoutRtlSupport() == false) goto L11;
        Rect r02 = this.mTmpRect;
        r02.left = Math.max(r02.left, this.mSlideableView.getRight());
    L12:
        r5.clipRect(this.mTmpRect);
        goto L13
    L11:
        Rect r03 = this.mTmpRect;
        r03.right = Math.min(r03.right, this.mSlideableView.getLeft());
        goto L12
    }

    void invalidateChildRegion(View r7) {
        if (Build.VERSION.SDK_INT < 17) goto L7;
        ViewCompat.setLayerPaint(r7, ((LayoutParams) r7.getLayoutParams()).dimPaint);
        return;
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
    L30:
        ViewCompat.postInvalidateOnAnimation(this, r7.getLeft(), r7.getTop(), r7.getRight(), r7.getBottom());
        return;
    L9:
        if (this.mDisplayListReflectionLoaded == true) goto L20;
        this.mGetDisplayList = View.class.getDeclaredMethod("getDisplayList", (Class[]) null);     // Catch: NoSuchMethodException -> L12
    L36:
        this.mRecreateDisplayList = View.class.getDeclaredField("mRecreateDisplayList");     // Catch: NoSuchFieldException -> L16
        this.mRecreateDisplayList.setAccessible(true);     // Catch: NoSuchFieldException -> L16
    L18:
        this.mDisplayListReflectionLoaded = true;
    L16:
        e = move-exception;
        Log.e(TAG, "Couldn't fetch mRecreateDisplayList field; dimming will be slow.", e);
    L12:
        e = move-exception;
        Log.e(TAG, "Couldn't fetch getDisplayList method; dimming won't work right.", e);
    L20:
        if (this.mGetDisplayList == null) goto L28;
        Field r0 = this.mRecreateDisplayList;
        if (r0 == null) goto L28;
        r0.setBoolean(r7, true);     // Catch: Exception -> L26
        this.mGetDisplayList.invoke(r7, (Object[]) null);     // Catch: Exception -> L26
    L26:
        e = move-exception;
        Log.e(TAG, "Error refreshing display list state", e);
    L28:
        r7.invalidate();
    }

    boolean smoothSlideTo(float r5, int r6) {
        if (this.mCanSlide == true) goto L5;
        return false;
    L5:
        boolean r62 = isLayoutRtlSupport();
        LayoutParams r1 = (LayoutParams) this.mSlideableView.getLayoutParams();
        if (r62 == false) goto L8;
        int r63 = getPaddingRight() + r1.rightMargin;
        int r52 = (int) (getWidth() - ((r63 + (r5 * this.mSlideRange)) + this.mSlideableView.getWidth()));
    L9:
        ViewDragHelper r64 = this.mDragHelper;
        View r12 = this.mSlideableView;
        if (r64.smoothSlideViewTo(r12, r52, r12.getTop()) == false) goto L13;
        setAllChildrenVisible();
        ViewCompat.postInvalidateOnAnimation(this);
        return true;
    L13:
        return false;
    L8:
        r52 = (int) ((getPaddingLeft() + r1.leftMargin) + (r5 * this.mSlideRange));
        goto L9
    }

    @Override
    public void computeScroll() {
        if (this.mDragHelper.continueSettling(true) == true) goto L5;
        return;
    L5:
        if (this.mCanSlide == true) goto L8;
        this.mDragHelper.abort();
        return;
    L8:
        ViewCompat.postInvalidateOnAnimation(this);
    }

    @Deprecated
    public void setShadowDrawable(Drawable r1) {
        setShadowDrawableLeft(r1);
    }

    public void setShadowDrawableLeft(@Nullable Drawable r1) {
        this.mShadowDrawableLeft = r1;
    }

    public void setShadowDrawableRight(@Nullable Drawable r1) {
        this.mShadowDrawableRight = r1;
    }

    @Deprecated
    public void setShadowResource(@DrawableRes int r2) {
        setShadowDrawable(getResources().getDrawable(r2));
    }

    public void setShadowResourceLeft(int r2) {
        setShadowDrawableLeft(ContextCompat.getDrawable(getContext(), r2));
    }

    public void setShadowResourceRight(int r2) {
        setShadowDrawableRight(ContextCompat.getDrawable(getContext(), r2));
    }

    @Override
    public void draw(Canvas r8) {
        super.draw(r8);
        if (isLayoutRtlSupport() == false) goto L5;
        Drawable r0 = this.mShadowDrawableRight;
    L7:
        if (getChildCount() <= 1) goto L9;
        View r1 = getChildAt(1);
    L10:
        if (r1 == null) goto L19;
        if (r0 == null) goto L20;
        int r2 = r1.getTop();
        int r3 = r1.getBottom();
        int r4 = r0.getIntrinsicWidth();
        if (isLayoutRtlSupport() == false) goto L16;
        int r12 = r1.getRight();
        int r42 = r4 + r12;
    L17:
        r0.setBounds(r12, r2, r42, r3);
        r0.draw(r8);
        return;
    L16:
        int r13 = r1.getLeft();
        int r43 = r13 - r4;
        r42 = r13;
        r12 = r43;
        goto L17
    L20:
        return;
    L19:
        return;
    L9:
        r1 = null;
        goto L10
    L5:
        r0 = this.mShadowDrawableLeft;
        goto L7
    }

    private void parallaxOtherViews(float r10) {
        boolean r0 = isLayoutRtlSupport();
        LayoutParams r1 = (LayoutParams) this.mSlideableView.getLayoutParams();
        int r3 = 0;
        if (r1.dimWhenOffset == false) goto L9;
        if (r0 == false) goto L6;
        int r12 = r1.rightMargin;
    L7:
        if (r12 > 0) goto L9;
        boolean r13 = true;
    L10:
        int r2 = getChildCount();
    L11:
        if (r3 >= r2) goto L25;
        View r4 = getChildAt(r3);
        if (r4 == this.mSlideableView) goto L24;
        float r5 = 1.0f - this.mParallaxOffset;
        int r7 = this.mParallaxBy;
        this.mParallaxOffset = r10;
        int r52 = ((int) (r5 * r7)) - ((int) ((1.0f - r10) * r7));
        if (r0 == false) goto L18;
        r52 = -r52;
    L18:
        r4.offsetLeftAndRight(r52);
        if (r13 == false) goto L24;
        if (r0 == false) goto L22;
        float r53 = this.mParallaxOffset - 1.0f;
    L23:
        dimChildView(r4, r53, this.mCoveredFadeColor);
        goto L24
    L22:
        r53 = 1.0f - this.mParallaxOffset;
    L24:
        r3 = r3 + 1;
        goto L11
    L25:
        return;
    L6:
        r12 = r1.leftMargin;
    L9:
        r13 = false;
        goto L10
    }

    protected boolean canScroll(View r13, boolean r14, int r15, int r16, int r17) {
        if ((r13 instanceof ViewGroup) == false) goto L18;
        ViewGroup r1 = (ViewGroup) r13;
        int r3 = r13.getScrollX();
        int r4 = r13.getScrollY();
        int r5 = r1.getChildCount() - 1;
    L5:
        if (r5 < 0) goto L18;
        View r7 = r1.getChildAt(r5);
        int r6 = r16 + r3;
        if (r6 < r7.getLeft()) goto L17;
        if (r6 >= r7.getRight()) goto L17;
        int r8 = r17 + r4;
        if (r8 < r7.getTop()) goto L17;
        if (r8 >= r7.getBottom()) goto L17;
        if (canScroll(r7, true, r15, r6 - r7.getLeft(), r8 - r7.getTop()) == false) goto L17;
        return true;
    L17:
        r5 = r5 - 1;
    L18:
        if (r14 == true) goto L20;
    L26:
        return false;
    L20:
        if (isLayoutRtlSupport() == false) goto L22;
        int r12 = r15;
    L24:
        if (r13.canScrollHorizontally(r12) == false) goto L26;
        return true;
    L22:
        r12 = -r15;
        goto L24
    }

    boolean isDimmed(View r3) {
        if (r3 != null) goto L5;
        return false;
    L5:
        LayoutParams r32 = (LayoutParams) r3.getLayoutParams();
        if (this.mCanSlide == true) goto L8;
        return false;
    L8:
        if (r32.dimWhenOffset == true) goto L10;
        return false;
    L10:
        if (this.mSlideOffset <= 0.0f) goto L15;
        return true;
    L15:
        return false;
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams();
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof ViewGroup.MarginLayoutParams) == false) goto L6;
        return new LayoutParams((ViewGroup.MarginLayoutParams) r2);
    L6:
        return new LayoutParams(r2);
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof LayoutParams) == true) goto L5;
    L7:
        return false;
    L5:
        if (super.checkLayoutParams(r2) == false) goto L7;
        return true;
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        if (isSlideable() == false) goto L5;
        boolean r0 = isOpen();
    L6:
        r1.isOpen = r0;
        return r1;
    L5:
        r0 = this.mPreservedOpenState;
        goto L6
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r2) {
        if ((r2 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r2);
        return;
    L6:
        SavedState r22 = (SavedState) r2;
        super.onRestoreInstanceState(r22.getSuperState());
        if (r22.isOpen == false) goto L9;
        openPane();
    L10:
        this.mPreservedOpenState = r22.isOpen;
        return;
    L9:
        closePane();
        goto L10
    }

    boolean isLayoutRtlSupport() {
        if (ViewCompat.getLayoutDirection(this) == 1) goto L7;
        return false;
    L7:
        return true;
    }
}
