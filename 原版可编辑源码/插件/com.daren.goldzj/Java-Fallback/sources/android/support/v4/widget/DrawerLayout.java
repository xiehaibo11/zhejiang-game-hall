package android.support.v4.widget;

import android.R;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.v4.content.ContextCompat;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.view.AbsSavedState;
import android.support.v4.view.AccessibilityDelegateCompat;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.support.v4.widget.ViewDragHelper;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.view.accessibility.AccessibilityEvent;
import java.util.ArrayList;
import java.util.List;

public class DrawerLayout extends ViewGroup {
    private static final boolean ALLOW_EDGE_LOCK = false;
    static final boolean CAN_HIDE_DESCENDANTS = false;
    private static final boolean CHILDREN_DISALLOW_INTERCEPT = true;
    private static final int DEFAULT_SCRIM_COLOR = -1728053248;
    private static final int DRAWER_ELEVATION = 10;
    static final int[] LAYOUT_ATTRS = null;
    public static final int LOCK_MODE_LOCKED_CLOSED = 1;
    public static final int LOCK_MODE_LOCKED_OPEN = 2;
    public static final int LOCK_MODE_UNDEFINED = 3;
    public static final int LOCK_MODE_UNLOCKED = 0;
    private static final int MIN_DRAWER_MARGIN = 64;
    private static final int MIN_FLING_VELOCITY = 400;
    private static final int PEEK_DELAY = 160;
    private static final boolean SET_DRAWER_SHADOW_FROM_ELEVATION = false;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_IDLE = 0;
    public static final int STATE_SETTLING = 2;
    private static final String TAG = "DrawerLayout";
    private static final int[] THEME_ATTRS = null;
    private static final float TOUCH_SLOP_SENSITIVITY = 1.0f;
    private final ChildAccessibilityDelegate mChildAccessibilityDelegate;
    private Rect mChildHitRect;
    private Matrix mChildInvertedMatrix;
    private boolean mChildrenCanceledTouch;
    private boolean mDisallowInterceptRequested;
    private boolean mDrawStatusBarBackground;
    private float mDrawerElevation;
    private int mDrawerState;
    private boolean mFirstLayout;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private Object mLastInsets;
    private final ViewDragCallback mLeftCallback;
    private final ViewDragHelper mLeftDragger;

    @Nullable
    private DrawerListener mListener;
    private List<DrawerListener> mListeners;
    private int mLockModeEnd;
    private int mLockModeLeft;
    private int mLockModeRight;
    private int mLockModeStart;
    private int mMinDrawerMargin;
    private final ArrayList<View> mNonDrawerViews;
    private final ViewDragCallback mRightCallback;
    private final ViewDragHelper mRightDragger;
    private int mScrimColor;
    private float mScrimOpacity;
    private Paint mScrimPaint;
    private Drawable mShadowEnd;
    private Drawable mShadowLeft;
    private Drawable mShadowLeftResolved;
    private Drawable mShadowRight;
    private Drawable mShadowRightResolved;
    private Drawable mShadowStart;
    private Drawable mStatusBarBackground;
    private CharSequence mTitleLeft;
    private CharSequence mTitleRight;

    class AccessibilityDelegate extends AccessibilityDelegateCompat {
        private final Rect mTmpRect;
        final DrawerLayout this$0;

        AccessibilityDelegate(DrawerLayout r1) {
            this.this$0 = r1;
            this.mTmpRect = new Rect();
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r4, AccessibilityNodeInfoCompat r5) {
            if (DrawerLayout.CAN_HIDE_DESCENDANTS == false) goto L5;
            super.onInitializeAccessibilityNodeInfo(r4, r5);
        L9:
            r5.setClassName(DrawerLayout.class.getName());
            r5.setFocusable(false);
            r5.setFocused(false);
            r5.removeAction(AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_FOCUS);
            r5.removeAction(AccessibilityNodeInfoCompat.AccessibilityActionCompat.ACTION_CLEAR_FOCUS);
            return;
        L5:
            AccessibilityNodeInfoCompat r0 = AccessibilityNodeInfoCompat.obtain(r5);
            super.onInitializeAccessibilityNodeInfo(r4, r0);
            r5.setSource(r4);
            Object r1 = ViewCompat.getParentForAccessibility(r4);
            if ((r1 instanceof View) == false) goto L8;
            r5.setParent((View) r1);
        L8:
            copyNodeInfoNoChildren(r5, r0);
            r0.recycle();
            addChildrenForAccessibility(r5, (ViewGroup) r4);
            goto L9
        }

        @Override
        public void onInitializeAccessibilityEvent(View r1, AccessibilityEvent r2) {
            super.onInitializeAccessibilityEvent(r1, r2);
            r2.setClassName(DrawerLayout.class.getName());
        }

        @Override
        public boolean dispatchPopulateAccessibilityEvent(View r3, AccessibilityEvent r4) {
            if (r4.getEventType() != 32) goto L12;
            List<CharSequence> r32 = r4.getText();
            View r42 = this.this$0.findVisibleDrawer();
            if (r42 == null) goto L13;
            int r43 = this.this$0.getDrawerViewAbsoluteGravity(r42);
            CharSequence r44 = this.this$0.getDrawerTitle(r43);
            if (r44 == null) goto L14;
            r32.add(r44);
            return DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
        L14:
            return DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
        L13:
            return DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
        L12:
            return super.dispatchPopulateAccessibilityEvent(r3, r4);
        }

        @Override
        public boolean onRequestSendAccessibilityEvent(ViewGroup r2, View r3, AccessibilityEvent r4) {
            if (DrawerLayout.CAN_HIDE_DESCENDANTS == true) goto L10;
            if (DrawerLayout.includeChildForAccessibility(r3) == true) goto L10;
            return false;
        L10:
            return super.onRequestSendAccessibilityEvent(r2, r3, r4);
        }

        private void addChildrenForAccessibility(AccessibilityNodeInfoCompat r5, ViewGroup r6) {
            int r0 = r6.getChildCount();
            int r1 = 0;
        L3:
            if (r1 >= r0) goto L8;
            View r2 = r6.getChildAt(r1);
            if (DrawerLayout.includeChildForAccessibility(r2) == false) goto L7;
            r5.addChild(r2);
        L7:
            r1 = r1 + 1;
            goto L3
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
        }
    }

    static final class ChildAccessibilityDelegate extends AccessibilityDelegateCompat {
        ChildAccessibilityDelegate() {
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r1, AccessibilityNodeInfoCompat r2) {
            super.onInitializeAccessibilityNodeInfo(r1, r2);
            if (DrawerLayout.includeChildForAccessibility(r1) == true) goto L6;
            r2.setParent(null);
            return;
        }
    }

    public interface DrawerListener {
        void onDrawerClosed(@NonNull View r1);

        void onDrawerOpened(@NonNull View r1);

        void onDrawerSlide(@NonNull View r1, float r2);

        void onDrawerStateChanged(int r1);
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        private static final int FLAG_IS_CLOSING = 4;
        private static final int FLAG_IS_OPENED = 1;
        private static final int FLAG_IS_OPENING = 2;
        public int gravity;
        boolean isPeeking;
        float onScreen;
        int openState;

        public LayoutParams(@NonNull Context r3, @Nullable AttributeSet r4) {
            super(r3, r4);
            this.gravity = 0;
            TypedArray r32 = r3.obtainStyledAttributes(r4, DrawerLayout.LAYOUT_ATTRS);
            this.gravity = r32.getInt(0, 0);
            r32.recycle();
        }

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.gravity = 0;
        }

        public LayoutParams(int r1, int r2, int r3) {
            this(r1, r2);
            this.gravity = r3;
        }

        public LayoutParams(@NonNull LayoutParams r2) {
            super(r2);
            this.gravity = 0;
            this.gravity = r2.gravity;
        }

        public LayoutParams(@NonNull ViewGroup.LayoutParams r1) {
            super(r1);
            this.gravity = 0;
        }

        public LayoutParams(@NonNull ViewGroup.MarginLayoutParams r1) {
            super(r1);
            this.gravity = 0;
        }
    }

    protected static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        int lockModeEnd;
        int lockModeLeft;
        int lockModeRight;
        int lockModeStart;
        int openDrawerGravity;

        public SavedState(@NonNull Parcel r1, @Nullable ClassLoader r2) {
            super(r1, r2);
            this.openDrawerGravity = 0;
            this.openDrawerGravity = r1.readInt();
            this.lockModeLeft = r1.readInt();
            this.lockModeRight = r1.readInt();
            this.lockModeStart = r1.readInt();
            this.lockModeEnd = r1.readInt();
        }

        public SavedState(@NonNull Parcelable r1) {
            super(r1);
            this.openDrawerGravity = 0;
        }

        @Override
        public void writeToParcel(Parcel r1, int r2) {
            super.writeToParcel(r1, r2);
            r1.writeInt(this.openDrawerGravity);
            r1.writeInt(this.lockModeLeft);
            r1.writeInt(this.lockModeRight);
            r1.writeInt(this.lockModeStart);
            r1.writeInt(this.lockModeEnd);
        }

        static {
            CREATOR = new 1();
        }
    }

    public static abstract class SimpleDrawerListener implements DrawerListener {
        @Override
        public void onDrawerClosed(View r1) {
        }

        @Override
        public void onDrawerOpened(View r1) {
        }

        @Override
        public void onDrawerSlide(View r1, float r2) {
        }

        @Override
        public void onDrawerStateChanged(int r1) {
        }

        public SimpleDrawerListener() {
        }
    }

    private class ViewDragCallback extends ViewDragHelper.Callback {
        private final int mAbsGravity;
        private ViewDragHelper mDragger;
        private final Runnable mPeekRunnable;
        final DrawerLayout this$0;

        @Override
        public boolean onEdgeLock(int r1) {
            return false;
        }

        ViewDragCallback(DrawerLayout r1, int r2) {
            this.this$0 = r1;
            this.mPeekRunnable = new 1(this);
            this.mAbsGravity = r2;
        }

        public void setDragger(ViewDragHelper r1) {
            this.mDragger = r1;
        }

        public void removeCallbacks() {
            this.this$0.removeCallbacks(this.mPeekRunnable);
        }

        @Override
        public boolean tryCaptureView(View r2, int r3) {
            if (this.this$0.isDrawerView(r2) == true) goto L5;
        L9:
            return false;
        L5:
            if (this.this$0.checkDrawerViewAbsoluteGravity(r2, this.mAbsGravity) == false) goto L9;
            if (this.this$0.getDrawerLockMode(r2) != 0) goto L9;
            return DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
        }

        @Override
        public void onViewDragStateChanged(int r4) {
            this.this$0.updateDrawerState(this.mAbsGravity, r4, this.mDragger.getCapturedView());
        }

        @Override
        public void onViewPositionChanged(View r1, int r2, int r3, int r4, int r5) {
            int r32 = r1.getWidth();
            if (this.this$0.checkDrawerViewAbsoluteGravity(r1, 3) == false) goto L5;
            float r22 = r2 + r32;
        L6:
            float r23 = r22 / r32;
            this.this$0.setDrawerViewOffset(r1, r23);
            if (r23 != 0.0f) goto L9;
            int r24 = 4;
        L10:
            r1.setVisibility(r24);
            this.this$0.invalidate();
            return;
        L9:
            r24 = 0;
            goto L10
        L5:
            r22 = this.this$0.getWidth() - r2;
            goto L6
        }

        @Override
        public void onViewCaptured(View r1, int r2) {
            ((LayoutParams) r1.getLayoutParams()).isPeeking = false;
            closeOtherDrawer();
        }

        private void closeOtherDrawer() {
            int r1 = 3;
            if (this.mAbsGravity != 3) goto L5;
            r1 = 5;
        L5:
            View r0 = this.this$0.findDrawerWithGravity(r1);
            if (r0 == null) goto L9;
            this.this$0.closeDrawer(r0);
            return;
        }

        @Override
        public void onViewReleased(View r6, float r7, float r8) {
            float r82 = this.this$0.getDrawerViewOffset(r6);
            int r0 = r6.getWidth();
            if (this.this$0.checkDrawerViewAbsoluteGravity(r6, 3) == true) goto L5;
            int r1 = this.this$0.getWidth();
            if (r7 >= 0.0f) goto L15;
        L18:
            r1 = r1 - r0;
        L19:
            int r72 = r1;
        L20:
            this.mDragger.settleCapturedViewAt(r72, r6.getTop());
            this.this$0.invalidate();
            return;
        L15:
            if (r7 != 0.0f) goto L19;
            if (r82 <= 0.5f) goto L19;
        L5:
            if (r7 > 0.0f) goto L11;
            if (r7 == 0.0f) goto L8;
        L10:
            r72 = -r0;
            goto L20
        L8:
            if (r82 <= 0.5f) goto L10;
        L11:
            r72 = 0;
            goto L20
        }

        @Override
        public void onEdgeTouched(int r3, int r4) {
            this.this$0.postDelayed(this.mPeekRunnable, 160);
        }

        void peekDrawer() {
            int r0 = this.mDragger.getEdgeSize();
            int r3 = 0;
            if (this.mAbsGravity != 3) goto L5;
            boolean r1 = DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
        L6:
            if (r1 == false) goto L11;
            View r4 = this.this$0.findDrawerWithGravity(3);
            if (r4 == null) goto L10;
            r3 = -r4.getWidth();
        L10:
            int r32 = r3 + r0;
        L12:
            if (r4 == null) goto L23;
            if (r1 == true) goto L15;
        L16:
            if (r1 == false) goto L18;
            return;
        L18:
            if (r4.getLeft() > r32) goto L20;
            return;
        L20:
            if (this.this$0.getDrawerLockMode(r4) != 0) goto L26;
            LayoutParams r02 = (LayoutParams) r4.getLayoutParams();
            this.mDragger.smoothSlideViewTo(r4, r32, r4.getTop());
            r02.isPeeking = DrawerLayout.CHILDREN_DISALLOW_INTERCEPT;
            this.this$0.invalidate();
            closeOtherDrawer();
            this.this$0.cancelChildViewTouch();
            return;
        L26:
            return;
        L15:
            if (r4.getLeft() < r32) goto L20;
        L23:
            return;
        L11:
            r4 = this.this$0.findDrawerWithGravity(5);
            r32 = this.this$0.getWidth() - r0;
            goto L12
        L5:
            r1 = false;
            goto L6
        }

        @Override
        public void onEdgeDragStarted(int r2, int r3) {
            if ((r2 & 1) != 1) goto L5;
            View r22 = this.this$0.findDrawerWithGravity(3);
        L6:
            if (r22 != null) goto L8;
            return;
        L8:
            if (this.this$0.getDrawerLockMode(r22) != 0) goto L12;
            this.mDragger.captureChildView(r22, r3);
            return;
        L12:
            return;
        L5:
            r22 = this.this$0.findDrawerWithGravity(5);
            goto L6
        }

        @Override
        public int getViewHorizontalDragRange(View r2) {
            if (this.this$0.isDrawerView(r2) == true) goto L7;
            return 0;
        L7:
            return r2.getWidth();
        }

        @Override
        public int clampViewPositionHorizontal(View r2, int r3, int r4) {
            if (this.this$0.checkDrawerViewAbsoluteGravity(r2, 3) == true) goto L5;
            int r42 = this.this$0.getWidth();
            return Math.max(r42 - r2.getWidth(), Math.min(r3, r42));
        L5:
            return Math.max(-r2.getWidth(), Math.min(r3, 0));
        }

        @Override
        public int clampViewPositionVertical(View r1, int r2, int r3) {
            return r1.getTop();
        }
    }

    static {
        boolean r0 = CHILDREN_DISALLOW_INTERCEPT;
        THEME_ATTRS = new int[]{R.attr.colorPrimaryDark};
        LAYOUT_ATTRS = new int[]{R.attr.layout_gravity};
        if (Build.VERSION.SDK_INT < 19) goto L5;
        boolean r1 = CHILDREN_DISALLOW_INTERCEPT;
    L6:
        CAN_HIDE_DESCENDANTS = r1;
        if (Build.VERSION.SDK_INT >= 21) goto L10;
        r0 = false;
    L10:
        SET_DRAWER_SHADOW_FROM_ELEVATION = r0;
        return;
    L5:
        r1 = false;
        goto L6
    }

    public DrawerLayout(@NonNull Context r2) {
        this(r2, null);
    }

    public DrawerLayout(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, 0);
    }

    public DrawerLayout(@NonNull Context r6, @Nullable AttributeSet r7, int r8) {
        super(r6, r7, r8);
        this.mChildAccessibilityDelegate = new ChildAccessibilityDelegate();
        this.mScrimColor = DEFAULT_SCRIM_COLOR;
        this.mScrimPaint = new Paint();
        this.mFirstLayout = CHILDREN_DISALLOW_INTERCEPT;
        this.mLockModeLeft = 3;
        this.mLockModeRight = 3;
        this.mLockModeStart = 3;
        this.mLockModeEnd = 3;
        this.mShadowStart = null;
        this.mShadowEnd = null;
        this.mShadowLeft = null;
        this.mShadowRight = null;
        setDescendantFocusability(262144);
        float r1 = getResources().getDisplayMetrics().density;
        this.mMinDrawerMargin = (int) ((64.0f * r1) + 0.5f);
        float r2 = 400.0f * r1;
        this.mLeftCallback = new ViewDragCallback(this, 3);
        this.mRightCallback = new ViewDragCallback(this, 5);
        this.mLeftDragger = ViewDragHelper.create(this, TOUCH_SLOP_SENSITIVITY, this.mLeftCallback);
        this.mLeftDragger.setEdgeTrackingEnabled(1);
        this.mLeftDragger.setMinVelocity(r2);
        this.mLeftCallback.setDragger(this.mLeftDragger);
        this.mRightDragger = ViewDragHelper.create(this, TOUCH_SLOP_SENSITIVITY, this.mRightCallback);
        this.mRightDragger.setEdgeTrackingEnabled(2);
        this.mRightDragger.setMinVelocity(r2);
        this.mRightCallback.setDragger(this.mRightDragger);
        setFocusableInTouchMode(CHILDREN_DISALLOW_INTERCEPT);
        ViewCompat.setImportantForAccessibility(this, 1);
        ViewCompat.setAccessibilityDelegate(this, new AccessibilityDelegate(this));
        setMotionEventSplittingEnabled(false);
        if (ViewCompat.getFitsSystemWindows(this) == true) goto L5;
    L13:
        this.mDrawerElevation = r1 * 10.0f;
        this.mNonDrawerViews = new ArrayList();
        return;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L12;
        setOnApplyWindowInsetsListener(new 1(this));
        setSystemUiVisibility(1280);
        TypedArray r62 = r6.obtainStyledAttributes(THEME_ATTRS);
        this.mStatusBarBackground = r62.getDrawable(0);     // Catch: Throwable -> L9
        r62.recycle();
    L9:
        th = move-exception;
        r62.recycle();
        throw th;
    L12:
        this.mStatusBarBackground = null;
        goto L13
    }

    public void setDrawerElevation(float r3) {
        this.mDrawerElevation = r3;
        int r32 = 0;
    L4:
        if (r32 >= getChildCount()) goto L9;
        View r0 = getChildAt(r32);
        if (isDrawerView(r0) == false) goto L8;
        ViewCompat.setElevation(r0, this.mDrawerElevation);
    L8:
        r32 = r32 + 1;
        goto L4
    }

    public float getDrawerElevation() {
        if (SET_DRAWER_SHADOW_FROM_ELEVATION == true) goto L5;
        return 0.0f;
    L5:
        return this.mDrawerElevation;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void setChildInsets(Object r1, boolean r2) {
        this.mLastInsets = r1;
        this.mDrawStatusBarBackground = r2;
        if (r2 == false) goto L5;
    L7:
        boolean r12 = false;
    L8:
        setWillNotDraw(r12);
        requestLayout();
        return;
    L5:
        if (getBackground() != null) goto L7;
        r12 = CHILDREN_DISALLOW_INTERCEPT;
        goto L8
    }

    public void setDrawerShadow(Drawable r3, int r4) {
        if (SET_DRAWER_SHADOW_FROM_ELEVATION == false) goto L6;
        return;
    L6:
        if ((r4 & GravityCompat.START) != 8388611) goto L9;
        this.mShadowStart = r3;
    L17:
        resolveShadowDrawables();
        invalidate();
        return;
    L9:
        if ((r4 & GravityCompat.END) != 8388613) goto L12;
        this.mShadowEnd = r3;
        goto L17
    L12:
        if ((r4 & 3) != 3) goto L15;
        this.mShadowLeft = r3;
        goto L17
    L15:
        if ((r4 & 5) != 5) goto L19;
        this.mShadowRight = r3;
        goto L17
    }

    public void setDrawerShadow(@DrawableRes int r2, int r3) {
        setDrawerShadow(ContextCompat.getDrawable(getContext(), r2), r3);
    }

    public void setScrimColor(@ColorInt int r1) {
        this.mScrimColor = r1;
        invalidate();
    }

    @Deprecated
    public void setDrawerListener(DrawerListener r2) {
        DrawerListener r0 = this.mListener;
        if (r0 == null) goto L5;
        removeDrawerListener(r0);
    L5:
        if (r2 == null) goto L7;
        addDrawerListener(r2);
    L7:
        this.mListener = r2;
    }

    public void addDrawerListener(@NonNull DrawerListener r2) {
        if (r2 != null) goto L5;
        return;
    L5:
        if (this.mListeners != null) goto L7;
        this.mListeners = new ArrayList();
    L7:
        this.mListeners.add(r2);
    }

    public void removeDrawerListener(@NonNull DrawerListener r2) {
        if (r2 != null) goto L4;
        return;
    L4:
        List<DrawerListener> r0 = this.mListeners;
        if (r0 != null) goto L7;
        return;
    L7:
        r0.remove(r2);
    }

    public void setDrawerLockMode(int r2) {
        setDrawerLockMode(r2, 3);
        setDrawerLockMode(r2, 5);
    }

    public void setDrawerLockMode(int r4, int r5) {
        int r0 = GravityCompat.getAbsoluteGravity(r5, ViewCompat.getLayoutDirection(this));
        if (r5 != 3) goto L5;
        this.mLockModeLeft = r4;
    L15:
        if (r4 == 0) goto L21;
        if (r0 != 3) goto L18;
        ViewDragHelper r52 = this.mLeftDragger;
    L19:
        r52.cancel();
        goto L21
    L18:
        r52 = this.mRightDragger;
    L21:
        if (r4 != 1) goto L23;
        View r42 = findDrawerWithGravity(r0);
        if (r42 == null) goto L34;
        closeDrawer(r42);
        return;
    L34:
        return;
    L23:
        if (r4 != 2) goto L35;
        View r43 = findDrawerWithGravity(r0);
        if (r43 == null) goto L32;
        openDrawer(r43);
        return;
    L32:
        return;
    L35:
        return;
    L5:
        if (r5 != 5) goto L7;
        this.mLockModeRight = r4;
        goto L15
    L7:
        if (r5 != 8388611) goto L9;
        this.mLockModeStart = r4;
        goto L15
    L9:
        if (r5 != 8388613) goto L15;
        this.mLockModeEnd = r4;
        goto L15
    }

    public void setDrawerLockMode(int r3, @NonNull View r4) {
        if (isDrawerView(r4) == false) goto L7;
        setDrawerLockMode(r3, ((LayoutParams) r4.getLayoutParams()).gravity);
        return;
    L7:
        throw new IllegalArgumentException("View " + r4 + " is not a drawer with appropriate layout_gravity");
    }

    public int getDrawerLockMode(int r4) {
        int r0 = ViewCompat.getLayoutDirection(this);
        if (r4 != 3) goto L5;
        int r42 = this.mLockModeLeft;
        if (r42 == 3) goto L38;
        return r42;
    L38:
        if (r0 != 0) goto L40;
        int r43 = this.mLockModeStart;
    L41:
        if (r43 == 3) goto L47;
        return r43;
    L47:
        return 0;
    L40:
        r43 = this.mLockModeEnd;
        goto L41
    L5:
        if (r4 != 5) goto L7;
        int r44 = this.mLockModeRight;
        if (r44 == 3) goto L30;
        return r44;
    L30:
        if (r0 != 0) goto L32;
        int r45 = this.mLockModeEnd;
    L33:
        if (r45 == 3) goto L46;
        return r45;
    L46:
        return 0;
    L32:
        r45 = this.mLockModeStart;
        goto L33
    L7:
        if (r4 != 8388611) goto L9;
        int r46 = this.mLockModeStart;
        if (r46 == 3) goto L22;
        return r46;
    L22:
        if (r0 != 0) goto L24;
        int r47 = this.mLockModeLeft;
    L25:
        if (r47 == 3) goto L45;
        return r47;
    L45:
        return 0;
    L24:
        r47 = this.mLockModeRight;
        goto L25
    L9:
        if (r4 != 8388613) goto L48;
        int r48 = this.mLockModeEnd;
        if (r48 == 3) goto L14;
        return r48;
    L14:
        if (r0 != 0) goto L16;
        int r49 = this.mLockModeRight;
    L17:
        if (r49 == 3) goto L43;
        return r49;
    L43:
        return 0;
    L16:
        r49 = this.mLockModeLeft;
        goto L17
    L48:
        return 0;
    }

    public int getDrawerLockMode(@NonNull View r4) {
        if (isDrawerView(r4) == false) goto L7;
        return getDrawerLockMode(((LayoutParams) r4.getLayoutParams()).gravity);
    L7:
        throw new IllegalArgumentException("View " + r4 + " is not a drawer");
    }

    public void setDrawerTitle(int r2, @Nullable CharSequence r3) {
        int r22 = GravityCompat.getAbsoluteGravity(r2, ViewCompat.getLayoutDirection(this));
        if (r22 != 3) goto L6;
        this.mTitleLeft = r3;
        return;
    L6:
        if (r22 != 5) goto L10;
        this.mTitleRight = r3;
        return;
    }

    @Nullable
    public CharSequence getDrawerTitle(int r2) {
        int r22 = GravityCompat.getAbsoluteGravity(r2, ViewCompat.getLayoutDirection(this));
        if (r22 != 3) goto L7;
        return this.mTitleLeft;
    L7:
        if (r22 == 5) goto L9;
        return null;
    L9:
        return this.mTitleRight;
    }

    private boolean isInBoundsOfChild(float r2, float r3, View r4) {
        if (this.mChildHitRect != null) goto L5;
        this.mChildHitRect = new Rect();
    L5:
        r4.getHitRect(this.mChildHitRect);
        return this.mChildHitRect.contains((int) r2, (int) r3);
    }

    private boolean dispatchTransformedGenericPointerEvent(MotionEvent r4, View r5) {
        if (r5.getMatrix().isIdentity() == true) goto L5;
        MotionEvent r42 = getTransformedMotionEvent(r4, r5);
        boolean r52 = r5.dispatchGenericMotionEvent(r42);
        r42.recycle();
        return r52;
    L5:
        float r0 = getScrollX() - r5.getLeft();
        float r1 = getScrollY() - r5.getTop();
        r4.offsetLocation(r0, r1);
        boolean r53 = r5.dispatchGenericMotionEvent(r4);
        r4.offsetLocation(-r0, -r1);
        return r53;
    }

    private MotionEvent getTransformedMotionEvent(MotionEvent r4, View r5) {
        float r0 = getScrollX() - r5.getLeft();
        float r1 = getScrollY() - r5.getTop();
        MotionEvent r42 = MotionEvent.obtain(r4);
        r42.offsetLocation(r0, r1);
        Matrix r52 = r5.getMatrix();
        if (r52.isIdentity() == false) goto L5;
    L8:
        return r42;
    L5:
        if (this.mChildInvertedMatrix != null) goto L7;
        this.mChildInvertedMatrix = new Matrix();
    L7:
        r52.invert(this.mChildInvertedMatrix);
        r42.transform(this.mChildInvertedMatrix);
        goto L8
    }

    void updateDrawerState(int r4, int r5, View r6) {
        int r42 = this.mLeftDragger.getViewDragState();
        int r0 = this.mRightDragger.getViewDragState();
        int r1 = 2;
        if (r42 == 1) goto L10;
        if (r0 == 1) goto L10;
        if (r42 == 2) goto L11;
        if (r0 == 2) goto L11;
        r1 = 0;
    L11:
        if (r6 == null) goto L20;
        if (r5 != 0) goto L20;
        LayoutParams r43 = (LayoutParams) r6.getLayoutParams();
        if (r43.onScreen != 0.0f) goto L17;
        dispatchOnDrawerClosed(r6);
        goto L20
    L17:
        if (r43.onScreen != TOUCH_SLOP_SENSITIVITY) goto L20;
        dispatchOnDrawerOpened(r6);
    L20:
        if (r1 == this.mDrawerState) goto L26;
        this.mDrawerState = r1;
        List<DrawerListener> r44 = this.mListeners;
        if (r44 == null) goto L28;
        int r45 = r44.size() - 1;
    L24:
        if (r45 < 0) goto L29;
        this.mListeners.get(r45).onDrawerStateChanged(r1);
        r45 = r45 - 1;
        goto L24
    L29:
        return;
    L28:
        return;
    L26:
        return;
    L10:
        r1 = 1;
        goto L11
    }

    void dispatchOnDrawerClosed(View r4) {
        LayoutParams r0 = (LayoutParams) r4.getLayoutParams();
        if ((r0.openState & 1) != 1) goto L16;
        r0.openState = 0;
        List<DrawerListener> r02 = this.mListeners;
        if (r02 == null) goto L9;
        int r03 = r02.size() - 1;
    L7:
        if (r03 < 0) goto L9;
        this.mListeners.get(r03).onDrawerClosed(r4);
        r03 = r03 - 1;
    L9:
        updateChildrenImportantForAccessibility(r4, false);
        if (hasWindowFocus() == false) goto L17;
        View r42 = getRootView();
        if (r42 == null) goto L18;
        r42.sendAccessibilityEvent(32);
        return;
    L18:
        return;
    L17:
        return;
    }

    void dispatchOnDrawerOpened(View r4) {
        LayoutParams r0 = (LayoutParams) r4.getLayoutParams();
        if ((r0.openState & 1) != 0) goto L14;
        r0.openState = 1;
        List<DrawerListener> r02 = this.mListeners;
        if (r02 == null) goto L9;
        int r03 = r02.size() - 1;
    L7:
        if (r03 < 0) goto L9;
        this.mListeners.get(r03).onDrawerOpened(r4);
        r03 = r03 - 1;
    L9:
        updateChildrenImportantForAccessibility(r4, CHILDREN_DISALLOW_INTERCEPT);
        if (hasWindowFocus() == false) goto L15;
        sendAccessibilityEvent(32);
        return;
    L15:
        return;
    }

    private void updateChildrenImportantForAccessibility(View r5, boolean r6) {
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L13;
        View r2 = getChildAt(r1);
        if (r6 == false) goto L7;
    L8:
        if (r6 == false) goto L11;
        if (r2 != r5) goto L11;
    L10:
        ViewCompat.setImportantForAccessibility(r2, 1);
    L12:
        r1 = r1 + 1;
    L11:
        ViewCompat.setImportantForAccessibility(r2, 4);
        goto L12
    L7:
        if (isDrawerView(r2) == false) goto L10;
    }

    void dispatchOnDrawerSlide(View r3, float r4) {
        List<DrawerListener> r0 = this.mListeners;
        if (r0 == null) goto L7;
        int r02 = r0.size() - 1;
    L5:
        if (r02 < 0) goto L9;
        this.mListeners.get(r02).onDrawerSlide(r3, r4);
        r02 = r02 - 1;
        goto L5
    L9:
        return;
    }

    void setDrawerViewOffset(View r3, float r4) {
        LayoutParams r0 = (LayoutParams) r3.getLayoutParams();
        if (r4 != r0.onScreen) goto L5;
        return;
    L5:
        r0.onScreen = r4;
        dispatchOnDrawerSlide(r3, r4);
    }

    float getDrawerViewOffset(View r1) {
        return ((LayoutParams) r1.getLayoutParams()).onScreen;
    }

    int getDrawerViewAbsoluteGravity(View r2) {
        return GravityCompat.getAbsoluteGravity(((LayoutParams) r2.getLayoutParams()).gravity, ViewCompat.getLayoutDirection(this));
    }

    boolean checkDrawerViewAbsoluteGravity(View r1, int r2) {
        if ((getDrawerViewAbsoluteGravity(r1) & r2) != r2) goto L5;
        return CHILDREN_DISALLOW_INTERCEPT;
    L5:
        return false;
    }

    View findOpenDrawer() {
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        View r2 = getChildAt(r1);
        if ((((LayoutParams) r2.getLayoutParams()).openState & 1) == 1) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return r2;
    L8:
        return null;
    }

    void moveDrawerToOffset(View r3, float r4) {
        float r0 = getDrawerViewOffset(r3);
        float r1 = r3.getWidth();
        int r12 = ((int) (r1 * r4)) - ((int) (r0 * r1));
        if (checkDrawerViewAbsoluteGravity(r3, 3) == true) goto L6;
        r12 = -r12;
    L6:
        r3.offsetLeftAndRight(r12);
        setDrawerViewOffset(r3, r4);
    }

    View findDrawerWithGravity(int r5) {
        int r52 = GravityCompat.getAbsoluteGravity(r5, ViewCompat.getLayoutDirection(this)) & 7;
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L8;
        View r2 = getChildAt(r1);
        if ((getDrawerViewAbsoluteGravity(r2) & 7) == r52) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return r2;
    L8:
        return null;
    }

    static String gravityToString(int r2) {
        if ((r2 & 3) != 3) goto L7;
        return "LEFT";
    L7:
        if ((r2 & 5) != 5) goto L11;
        return "RIGHT";
    L11:
        return Integer.toHexString(r2);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mFirstLayout = CHILDREN_DISALLOW_INTERCEPT;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = CHILDREN_DISALLOW_INTERCEPT;
    }

    @Override
    @SuppressLint({"WrongConstant"})
    protected void onMeasure(int r18, int r19) {
        int r1 = View.MeasureSpec.getMode(r18);
        int r2 = View.MeasureSpec.getMode(r19);
        int r3 = View.MeasureSpec.getSize(r18);
        int r4 = View.MeasureSpec.getSize(r19);
        if (r1 != 1073741824) goto L6;
        if (r2 != 1073741824) goto L6;
    L16:
        setMeasuredDimension(r3, r4);
        int r5 = 0;
        if (this.mLastInsets != null) goto L19;
    L21:
        boolean r12 = false;
    L22:
        int r7 = ViewCompat.getLayoutDirection(this);
        int r8 = getChildCount();
        int r9 = 0;
        boolean r10 = false;
        boolean r11 = false;
    L23:
        if (r9 >= r8) goto L78;
        View r122 = getChildAt(r9);
        if (r122.getVisibility() == 8) goto L75;
        LayoutParams r13 = (LayoutParams) r122.getLayoutParams();
        if (r12 == false) goto L50;
        int r15 = GravityCompat.getAbsoluteGravity(r13.gravity, r7);
        if (ViewCompat.getFitsSystemWindows(r122) == false) goto L41;
        if (Build.VERSION.SDK_INT < 21) goto L50;
        WindowInsets r22 = (WindowInsets) this.mLastInsets;
        if (r15 != 3) goto L37;
        r22 = r22.replaceSystemWindowInsets(r22.getSystemWindowInsetLeft(), r22.getSystemWindowInsetTop(), r5, r22.getSystemWindowInsetBottom());
    L39:
        r122.dispatchApplyWindowInsets(r22);
        goto L50
    L37:
        if (r15 != 5) goto L39;
        r22 = r22.replaceSystemWindowInsets(r5, r22.getSystemWindowInsetTop(), r22.getSystemWindowInsetRight(), r22.getSystemWindowInsetBottom());
        goto L39
    L41:
        if (Build.VERSION.SDK_INT < 21) goto L50;
        WindowInsets r23 = (WindowInsets) this.mLastInsets;
        if (r15 != 3) goto L46;
        r23 = r23.replaceSystemWindowInsets(r23.getSystemWindowInsetLeft(), r23.getSystemWindowInsetTop(), r5, r23.getSystemWindowInsetBottom());
    L48:
        r13.leftMargin = r23.getSystemWindowInsetLeft();
        r13.topMargin = r23.getSystemWindowInsetTop();
        r13.rightMargin = r23.getSystemWindowInsetRight();
        r13.bottomMargin = r23.getSystemWindowInsetBottom();
        goto L50
    L46:
        if (r15 != 5) goto L48;
        r23 = r23.replaceSystemWindowInsets(r5, r23.getSystemWindowInsetTop(), r23.getSystemWindowInsetRight(), r23.getSystemWindowInsetBottom());
    L50:
        if (isContentView(r122) == false) goto L54;
        r122.measure(View.MeasureSpec.makeMeasureSpec((r3 - r13.leftMargin) - r13.rightMargin, 1073741824), View.MeasureSpec.makeMeasureSpec((r4 - r13.topMargin) - r13.bottomMargin, 1073741824));
        goto L75
    L54:
        if (isDrawerView(r122) == false) goto L77;
        if (SET_DRAWER_SHADOW_FROM_ELEVATION == false) goto L60;
        float r24 = ViewCompat.getElevation(r122);
        float r14 = this.mDrawerElevation;
        if (r24 == r14) goto L60;
        ViewCompat.setElevation(r122, r14);
    L60:
        int r25 = getDrawerViewAbsoluteGravity(r122) & 7;
        if (r25 != 3) goto L63;
        boolean r142 = CHILDREN_DISALLOW_INTERCEPT;
    L64:
        if (r142 == false) goto L66;
        if (r10 == false) goto L66;
    L70:
        throw new IllegalStateException("Child drawer has absolute gravity " + gravityToString(r25) + " but this " + TAG + " already has a drawer view along that edge");
    L66:
        if (r142 == true) goto L71;
        if (r11 == true) goto L70;
    L71:
        if (r142 == false) goto L73;
        r10 = CHILDREN_DISALLOW_INTERCEPT;
    L74:
        r122.measure(getChildMeasureSpec(r18, (this.mMinDrawerMargin + r13.leftMargin) + r13.rightMargin, r13.width), getChildMeasureSpec(r19, r13.topMargin + r13.bottomMargin, r13.height));
        goto L75
    L73:
        r11 = CHILDREN_DISALLOW_INTERCEPT;
        goto L74
    L63:
        r142 = false;
        goto L64
    L77:
        throw new IllegalStateException("Child " + r122 + " at index " + r9 + " does not have a valid layout_gravity - must be Gravity.LEFT, Gravity.RIGHT or Gravity.NO_GRAVITY");
    L75:
        r9 = r9 + 1;
        r5 = 0;
        goto L23
    L78:
        return;
    L19:
        if (ViewCompat.getFitsSystemWindows(this) == false) goto L21;
        r12 = CHILDREN_DISALLOW_INTERCEPT;
    L6:
        if (isInEditMode() == false) goto L80;
        if (r1 == Integer.MIN_VALUE) goto L12;
        if (r1 != 0) goto L12;
        r3 = 300;
    L12:
        if (r2 == Integer.MIN_VALUE) goto L16;
        if (r2 != 0) goto L16;
        r4 = 300;
        goto L16
    L80:
        throw new IllegalArgumentException("DrawerLayout must be measured with MeasureSpec.EXACTLY.");
    }

    private void resolveShadowDrawables() {
        if (SET_DRAWER_SHADOW_FROM_ELEVATION == false) goto L5;
        return;
    L5:
        this.mShadowLeftResolved = resolveLeftShadow();
        this.mShadowRightResolved = resolveRightShadow();
    }

    private Drawable resolveLeftShadow() {
        int r0 = ViewCompat.getLayoutDirection(this);
        if (r0 != 0) goto L8;
        Drawable r1 = this.mShadowStart;
        if (r1 == null) goto L13;
        mirror(r1, r0);
        return this.mShadowStart;
    L13:
        return this.mShadowLeft;
    L8:
        Drawable r12 = this.mShadowEnd;
        if (r12 == null) goto L13;
        mirror(r12, r0);
        return this.mShadowEnd;
    }

    private Drawable resolveRightShadow() {
        int r0 = ViewCompat.getLayoutDirection(this);
        if (r0 != 0) goto L8;
        Drawable r1 = this.mShadowEnd;
        if (r1 == null) goto L13;
        mirror(r1, r0);
        return this.mShadowEnd;
    L13:
        return this.mShadowRight;
    L8:
        Drawable r12 = this.mShadowStart;
        if (r12 == null) goto L13;
        mirror(r12, r0);
        return this.mShadowStart;
    }

    private boolean mirror(Drawable r2, int r3) {
        if (r2 != null) goto L4;
        return false;
    L4:
        if (DrawableCompat.isAutoMirrored(r2) == false) goto L10;
        DrawableCompat.setLayoutDirection(r2, r3);
        return CHILDREN_DISALLOW_INTERCEPT;
    L10:
        return false;
    }

    @Override
    protected void onLayout(boolean r17, int r18, int r19, int r20, int r21) {
        this.mInLayout = CHILDREN_DISALLOW_INTERCEPT;
        int r2 = r20 - r18;
        int r3 = getChildCount();
        int r5 = 0;
    L3:
        if (r5 >= r3) goto L41;
        View r6 = getChildAt(r5);
        if (r6.getVisibility() == 8) goto L40;
        LayoutParams r7 = (LayoutParams) r6.getLayoutParams();
        if (isContentView(r6) == false) goto L10;
        r6.layout(r7.leftMargin, r7.topMargin, r7.leftMargin + r6.getMeasuredWidth(), r7.topMargin + r6.getMeasuredHeight());
        goto L40
    L10:
        int r8 = r6.getMeasuredWidth();
        int r9 = r6.getMeasuredHeight();
        if (checkDrawerViewAbsoluteGravity(r6, 3) == false) goto L13;
        float r11 = r8;
        int r10 = (-r8) + ((int) (r7.onScreen * r11));
        float r12 = (r8 + r10) / r11;
    L15:
        if (r12 == r7.onScreen) goto L17;
        boolean r112 = CHILDREN_DISALLOW_INTERCEPT;
    L18:
        int r13 = r7.gravity & 112;
        if (r13 != 16) goto L21;
        int r132 = r21 - r19;
        int r14 = (r132 - r9) / 2;
        if (r14 >= r7.topMargin) goto L28;
        r14 = r7.topMargin;
    L30:
        r6.layout(r10, r14, r8 + r10, r9 + r14);
    L31:
        if (r112 == false) goto L34;
        setDrawerViewOffset(r6, r12);
    L34:
        if (r7.onScreen <= 0.0f) goto L36;
        int r1 = 0;
    L38:
        if (r6.getVisibility() == r1) goto L40;
        r6.setVisibility(r1);
        goto L40
    L36:
        r1 = 4;
        goto L38
    L28:
        if ((r14 + r9) <= (r132 - r7.bottomMargin)) goto L30;
        r14 = (r132 - r7.bottomMargin) - r9;
        goto L30
    L21:
        if (r13 == 80) goto L23;
        r6.layout(r10, r7.topMargin, r8 + r10, r7.topMargin + r9);
        goto L31
    L23:
        int r92 = r21 - r19;
        r6.layout(r10, (r92 - r7.bottomMargin) - r6.getMeasuredHeight(), r8 + r10, r92 - r7.bottomMargin);
        goto L31
    L17:
        r112 = false;
        goto L18
    L13:
        float r102 = r8;
        r12 = (r2 - r11) / r102;
        r10 = r2 - ((int) (r7.onScreen * r102));
    L40:
        r5 = r5 + 1;
        goto L3
    L41:
        this.mInLayout = false;
        this.mFirstLayout = false;
    }

    @Override
    public void requestLayout() {
        if (this.mInLayout == true) goto L6;
        super.requestLayout();
        return;
    }

    @Override
    public void computeScroll() {
        int r0 = getChildCount();
        float r1 = 0.0f;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L5;
        r1 = Math.max(r1, ((LayoutParams) getChildAt(r2).getLayoutParams()).onScreen);
        r2 = r2 + 1;
        goto L3
    L5:
        this.mScrimOpacity = r1;
        boolean r02 = this.mLeftDragger.continueSettling(CHILDREN_DISALLOW_INTERCEPT);
        boolean r12 = this.mRightDragger.continueSettling(CHILDREN_DISALLOW_INTERCEPT);
        if (r02 == true) goto L8;
        if (r12 == true) goto L8;
        return;
    L8:
        ViewCompat.postInvalidateOnAnimation(this);
    }

    private static boolean hasOpaqueBackground(View r2) {
        Drawable r22 = r2.getBackground();
        if (r22 != null) goto L5;
        return false;
    L5:
        if (r22.getOpacity() != (-1)) goto L9;
        return CHILDREN_DISALLOW_INTERCEPT;
    L9:
        return false;
    }

    public void setStatusBarBackground(@Nullable Drawable r1) {
        this.mStatusBarBackground = r1;
        invalidate();
    }

    @Nullable
    public Drawable getStatusBarBackgroundDrawable() {
        return this.mStatusBarBackground;
    }

    public void setStatusBarBackground(int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = ContextCompat.getDrawable(getContext(), r2);
    L5:
        this.mStatusBarBackground = r22;
        invalidate();
        return;
    L4:
        r22 = null;
        goto L5
    }

    public void setStatusBarBackgroundColor(@ColorInt int r2) {
        this.mStatusBarBackground = new ColorDrawable(r2);
        invalidate();
    }

    @Override
    public void onRtlPropertiesChanged(int r1) {
        resolveShadowDrawables();
    }

    @Override
    public void onDraw(Canvas r5) {
        super.onDraw(r5);
        if (this.mDrawStatusBarBackground == true) goto L5;
        return;
    L5:
        if (this.mStatusBarBackground != null) goto L7;
        return;
    L7:
        if (Build.VERSION.SDK_INT < 21) goto L11;
        Object r0 = this.mLastInsets;
        if (r0 == null) goto L11;
        int r02 = ((WindowInsets) r0).getSystemWindowInsetTop();
    L12:
        if (r02 <= 0) goto L17;
        this.mStatusBarBackground.setBounds(0, 0, getWidth(), r02);
        this.mStatusBarBackground.draw(r5);
        return;
    L17:
        return;
    L11:
        r02 = 0;
        goto L12
    }

    @Override
    protected boolean drawChild(Canvas r15, View r16, long r17) {
        int r3 = getHeight();
        boolean r4 = isContentView(r16);
        int r5 = getWidth();
        int r6 = r15.save();
        int r8 = 0;
        if (r4 == false) goto L27;
        int r9 = getChildCount();
        int r11 = r5;
        int r52 = 0;
        int r10 = 0;
    L5:
        if (r52 >= r9) goto L26;
        View r12 = getChildAt(r52);
        if (r12 == r16) goto L25;
        if (r12.getVisibility() != 0) goto L25;
        if (hasOpaqueBackground(r12) == false) goto L25;
        if (isDrawerView(r12) == false) goto L25;
        if (r12.getHeight() < r3) goto L25;
        if (checkDrawerViewAbsoluteGravity(r12, 3) == false) goto L22;
        int r122 = r12.getRight();
        if (r122 <= r10) goto L25;
        r10 = r122;
        goto L25
    L22:
        int r123 = r12.getLeft();
        if (r123 >= r11) goto L25;
        r11 = r123;
    L25:
        r52 = r52 + 1;
        goto L5
    L26:
        r15.clipRect(r10, 0, r11, getHeight());
        r8 = r10;
    L28:
        boolean r92 = super.drawChild(r15, r16, r17);
        r15.restoreToCount(r6);
        float r32 = this.mScrimOpacity;
        if (r32 <= 0.0f) goto L33;
        if (r4 == false) goto L33;
        int r33 = ((int) ((((-16777216) & r2) >>> 24) * r32)) << 24;
        this.mScrimPaint.setColor((this.mScrimColor & ViewCompat.MEASURED_SIZE_MASK) | r33);
        r15.drawRect(r8, 0.0f, r11, getHeight(), this.mScrimPaint);
    L42:
        return r92;
    L33:
        if (this.mShadowLeftResolved == null) goto L38;
        if (checkDrawerViewAbsoluteGravity(r16, 3) == false) goto L38;
        int r34 = this.mShadowLeftResolved.getIntrinsicWidth();
        int r7 = r16.getRight();
        float r53 = Math.max(0.0f, Math.min(r7 / this.mLeftDragger.getEdgeSize(), TOUCH_SLOP_SENSITIVITY));
        this.mShadowLeftResolved.setBounds(r7, r16.getTop(), r34 + r7, r16.getBottom());
        this.mShadowLeftResolved.setAlpha((int) (r53 * 255.0f));
        this.mShadowLeftResolved.draw(r15);
    L38:
        if (this.mShadowRightResolved == null) goto L42;
        if (checkDrawerViewAbsoluteGravity(r16, 5) == false) goto L42;
        int r35 = this.mShadowRightResolved.getIntrinsicWidth();
        int r72 = r16.getLeft();
        float r54 = Math.max(0.0f, Math.min((getWidth() - r72) / this.mRightDragger.getEdgeSize(), TOUCH_SLOP_SENSITIVITY));
        this.mShadowRightResolved.setBounds(r72 - r35, r16.getTop(), r72, r16.getBottom());
        this.mShadowRightResolved.setAlpha((int) (r54 * 255.0f));
        this.mShadowRightResolved.draw(r15);
        goto L42
    L27:
        r11 = r5;
        goto L28
    }

    boolean isContentView(View r1) {
        if (((LayoutParams) r1.getLayoutParams()).gravity != 0) goto L5;
        return CHILDREN_DISALLOW_INTERCEPT;
    L5:
        return false;
    }

    boolean isDrawerView(View r3) {
        int r32 = GravityCompat.getAbsoluteGravity(((LayoutParams) r3.getLayoutParams()).gravity, ViewCompat.getLayoutDirection(r3));
        if ((r32 & 3) == 0) goto L6;
        return CHILDREN_DISALLOW_INTERCEPT;
    L6:
        if ((r32 & 5) == 0) goto L8;
        return CHILDREN_DISALLOW_INTERCEPT;
    L8:
        return false;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r7) {
        int r0 = r7.getActionMasked();
        boolean r1 = this.mLeftDragger.shouldInterceptTouchEvent(r7) | this.mRightDragger.shouldInterceptTouchEvent(r7);
        if (r0 == 0) goto L14;
        if (r0 != 1) goto L6;
    L12:
        closeDrawers(CHILDREN_DISALLOW_INTERCEPT);
        this.mDisallowInterceptRequested = false;
        this.mChildrenCanceledTouch = false;
    L13:
        boolean r72 = false;
    L23:
        if (r1 == true) goto L32;
        if (r72 == false) goto L26;
        return CHILDREN_DISALLOW_INTERCEPT;
    L26:
        if (hasPeekingDrawer() == false) goto L28;
        return CHILDREN_DISALLOW_INTERCEPT;
    L28:
        if (this.mChildrenCanceledTouch == true) goto L35;
        return false;
    L35:
        return CHILDREN_DISALLOW_INTERCEPT;
    L32:
        return CHILDREN_DISALLOW_INTERCEPT;
    L6:
        if (r0 == 2) goto L10;
        if (r0 == 3) goto L12;
    L10:
        if (this.mLeftDragger.checkTouchSlop(3) == false) goto L13;
        this.mLeftCallback.removeCallbacks();
        this.mRightCallback.removeCallbacks();
        goto L13
    L14:
        float r02 = r7.getX();
        float r73 = r7.getY();
        this.mInitialMotionX = r02;
        this.mInitialMotionY = r73;
        if (this.mScrimOpacity <= 0.0f) goto L21;
        View r74 = this.mLeftDragger.findTopChildUnder((int) r02, (int) r73);
        if (r74 == null) goto L21;
        if (isContentView(r74) == false) goto L21;
        r72 = CHILDREN_DISALLOW_INTERCEPT;
    L22:
        this.mDisallowInterceptRequested = false;
        this.mChildrenCanceledTouch = false;
    L21:
        r72 = false;
        goto L22
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent r7) {
        if ((r7.getSource() & 2) == 0) goto L25;
        if (r7.getAction() == 10) goto L25;
        if (this.mScrimOpacity <= 0.0f) goto L25;
        int r0 = getChildCount();
        if (r0 == 0) goto L22;
        float r1 = r7.getX();
        float r2 = r7.getY();
        int r02 = r0 - 1;
    L12:
        if (r02 < 0) goto L31;
        View r4 = getChildAt(r02);
        if (isInBoundsOfChild(r1, r2, r4) == false) goto L21;
        if (isContentView(r4) == true) goto L21;
        if (dispatchTransformedGenericPointerEvent(r7, r4) == false) goto L21;
        return CHILDREN_DISALLOW_INTERCEPT;
    L21:
        r02 = r02 - 1;
        goto L12
    L31:
        return false;
    L22:
        return false;
    L25:
        return super.dispatchGenericMotionEvent(r7);
    }

    @Override
    public boolean onTouchEvent(MotionEvent r7) {
        this.mLeftDragger.processTouchEvent(r7);
        this.mRightDragger.processTouchEvent(r7);
        int r0 = r7.getAction() & 255;
        if (r0 == 0) goto L23;
        if (r0 != 1) goto L6;
        float r02 = r7.getX();
        float r72 = r7.getY();
        View r3 = this.mLeftDragger.findTopChildUnder((int) r02, (int) r72);
        if (r3 != null) goto L12;
    L21:
        boolean r73 = CHILDREN_DISALLOW_INTERCEPT;
    L22:
        closeDrawers(r73);
        this.mDisallowInterceptRequested = false;
    L24:
        return CHILDREN_DISALLOW_INTERCEPT;
    L12:
        if (isContentView(r3) == false) goto L21;
        float r03 = r02 - this.mInitialMotionX;
        float r74 = r72 - this.mInitialMotionY;
        int r32 = this.mLeftDragger.getTouchSlop();
        if (((r03 * r03) + (r74 * r74)) >= (r32 * r32)) goto L21;
        View r75 = findOpenDrawer();
        if (r75 == null) goto L21;
        if (getDrawerLockMode(r75) == 2) goto L21;
        r73 = false;
        goto L22
    L6:
        if (r0 != 3) goto L24;
        closeDrawers(CHILDREN_DISALLOW_INTERCEPT);
        this.mDisallowInterceptRequested = false;
        this.mChildrenCanceledTouch = false;
        goto L24
    L23:
        float r04 = r7.getX();
        float r76 = r7.getY();
        this.mInitialMotionX = r04;
        this.mInitialMotionY = r76;
        this.mDisallowInterceptRequested = false;
        this.mChildrenCanceledTouch = false;
        goto L24
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r1) {
        super.requestDisallowInterceptTouchEvent(r1);
        this.mDisallowInterceptRequested = r1;
        if (r1 == false) goto L6;
        closeDrawers(CHILDREN_DISALLOW_INTERCEPT);
        return;
    }

    public void closeDrawers() {
        closeDrawers(false);
    }

    void closeDrawers(boolean r10) {
        int r0 = getChildCount();
        int r2 = 0;
        boolean r3 = false;
    L3:
        if (r2 >= r0) goto L16;
        View r4 = getChildAt(r2);
        LayoutParams r5 = (LayoutParams) r4.getLayoutParams();
        if (isDrawerView(r4) == false) goto L15;
        if (r10 == true) goto L8;
    L10:
        int r6 = r4.getWidth();
        if (checkDrawerViewAbsoluteGravity(r4, 3) == false) goto L13;
        boolean r42 = this.mLeftDragger.smoothSlideViewTo(r4, -r6, r4.getTop());
    L14:
        r3 = r3 | r42;
        r5.isPeeking = false;
        goto L15
    L13:
        r42 = this.mRightDragger.smoothSlideViewTo(r4, getWidth(), r4.getTop());
        goto L14
    L8:
        if (r5.isPeeking == true) goto L10;
    L15:
        r2 = r2 + 1;
        goto L3
    L16:
        this.mLeftCallback.removeCallbacks();
        this.mRightCallback.removeCallbacks();
        if (r3 == false) goto L24;
        invalidate();
        return;
    }

    public void openDrawer(@NonNull View r2) {
        openDrawer(r2, CHILDREN_DISALLOW_INTERCEPT);
    }

    public void openDrawer(@NonNull View r4, boolean r5) {
        if (isDrawerView(r4) == false) goto L17;
        LayoutParams r0 = (LayoutParams) r4.getLayoutParams();
        if (this.mFirstLayout == false) goto L8;
        r0.onScreen = TOUCH_SLOP_SENSITIVITY;
        r0.openState = 1;
        updateChildrenImportantForAccessibility(r4, CHILDREN_DISALLOW_INTERCEPT);
    L14:
        invalidate();
        return;
    L8:
        if (r5 == false) goto L13;
        r0.openState |= 2;
        if (checkDrawerViewAbsoluteGravity(r4, 3) == false) goto L12;
        this.mLeftDragger.smoothSlideViewTo(r4, 0, r4.getTop());
        goto L14
    L12:
        this.mRightDragger.smoothSlideViewTo(r4, getWidth() - r4.getWidth(), r4.getTop());
        goto L14
    L13:
        moveDrawerToOffset(r4, TOUCH_SLOP_SENSITIVITY);
        updateDrawerState(r0.gravity, 0, r4);
        r4.setVisibility(0);
        goto L14
    L17:
        throw new IllegalArgumentException("View " + r4 + " is not a sliding drawer");
    }

    public void openDrawer(int r2) {
        openDrawer(r2, CHILDREN_DISALLOW_INTERCEPT);
    }

    public void openDrawer(int r3, boolean r4) {
        View r0 = findDrawerWithGravity(r3);
        if (r0 == null) goto L7;
        openDrawer(r0, r4);
        return;
    L7:
        throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(r3));
    }

    public void closeDrawer(@NonNull View r2) {
        closeDrawer(r2, CHILDREN_DISALLOW_INTERCEPT);
    }

    public void closeDrawer(@NonNull View r5, boolean r6) {
        if (isDrawerView(r5) == false) goto L17;
        LayoutParams r0 = (LayoutParams) r5.getLayoutParams();
        if (this.mFirstLayout == false) goto L8;
        r0.onScreen = 0.0f;
        r0.openState = 0;
    L14:
        invalidate();
        return;
    L8:
        if (r6 == false) goto L13;
        r0.openState |= 4;
        if (checkDrawerViewAbsoluteGravity(r5, 3) == false) goto L12;
        this.mLeftDragger.smoothSlideViewTo(r5, -r5.getWidth(), r5.getTop());
        goto L14
    L12:
        this.mRightDragger.smoothSlideViewTo(r5, getWidth(), r5.getTop());
        goto L14
    L13:
        moveDrawerToOffset(r5, 0.0f);
        updateDrawerState(r0.gravity, 0, r5);
        r5.setVisibility(4);
        goto L14
    L17:
        throw new IllegalArgumentException("View " + r5 + " is not a sliding drawer");
    }

    public void closeDrawer(int r2) {
        closeDrawer(r2, CHILDREN_DISALLOW_INTERCEPT);
    }

    public void closeDrawer(int r3, boolean r4) {
        View r0 = findDrawerWithGravity(r3);
        if (r0 == null) goto L7;
        closeDrawer(r0, r4);
        return;
    L7:
        throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(r3));
    }

    public boolean isDrawerOpen(@NonNull View r4) {
        if (isDrawerView(r4) == false) goto L10;
        if ((((LayoutParams) r4.getLayoutParams()).openState & 1) == 1) goto L11;
        return false;
    L11:
        return CHILDREN_DISALLOW_INTERCEPT;
    L10:
        throw new IllegalArgumentException("View " + r4 + " is not a drawer");
    }

    public boolean isDrawerOpen(int r1) {
        View r12 = findDrawerWithGravity(r1);
        if (r12 != null) goto L5;
        return false;
    L5:
        return isDrawerOpen(r12);
    }

    public boolean isDrawerVisible(@NonNull View r4) {
        if (isDrawerView(r4) == false) goto L10;
        if (((LayoutParams) r4.getLayoutParams()).onScreen <= 0.0f) goto L7;
        return CHILDREN_DISALLOW_INTERCEPT;
    L7:
        return false;
    L10:
        throw new IllegalArgumentException("View " + r4 + " is not a drawer");
    }

    public boolean isDrawerVisible(int r1) {
        View r12 = findDrawerWithGravity(r1);
        if (r12 != null) goto L5;
        return false;
    L5:
        return isDrawerVisible(r12);
    }

    private boolean hasPeekingDrawer() {
        int r0 = getChildCount();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (((LayoutParams) getChildAt(r2).getLayoutParams()).isPeeking == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return CHILDREN_DISALLOW_INTERCEPT;
    L9:
        return false;
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-1, -1);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof LayoutParams) == false) goto L6;
        return new LayoutParams((LayoutParams) r2);
    L6:
        if ((r2 instanceof ViewGroup.MarginLayoutParams) == false) goto L9;
        return new LayoutParams((ViewGroup.MarginLayoutParams) r2);
    L9:
        return new LayoutParams(r2);
    }

    @Override
    protected boolean checkLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof LayoutParams) == true) goto L5;
    L7:
        return false;
    L5:
        if (super.checkLayoutParams(r2) == false) goto L7;
        return CHILDREN_DISALLOW_INTERCEPT;
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    public void addFocusables(ArrayList<View> r7, int r8, int r9) {
        if (getDescendantFocusability() != 393216) goto L5;
        return;
    L5:
        int r0 = getChildCount();
        int r1 = 0;
        int r2 = 0;
        boolean r3 = false;
    L6:
        if (r2 >= r0) goto L14;
        View r4 = getChildAt(r2);
        if (isDrawerView(r4) == true) goto L10;
        this.mNonDrawerViews.add(r4);
    L13:
        r2 = r2 + 1;
        goto L6
    L10:
        if (isDrawerOpen(r4) == false) goto L13;
        r4.addFocusables(r7, r8, r9);
        r3 = CHILDREN_DISALLOW_INTERCEPT;
        goto L13
    L14:
        if (r3 == true) goto L21;
        int r02 = this.mNonDrawerViews.size();
    L16:
        if (r1 >= r02) goto L21;
        View r22 = this.mNonDrawerViews.get(r1);
        if (r22.getVisibility() != 0) goto L20;
        r22.addFocusables(r7, r8, r9);
    L20:
        r1 = r1 + 1;
    L21:
        this.mNonDrawerViews.clear();
    }

    private boolean hasVisibleDrawer() {
        if (findVisibleDrawer() == null) goto L5;
        return CHILDREN_DISALLOW_INTERCEPT;
    L5:
        return false;
    }

    View findVisibleDrawer() {
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L10;
        View r2 = getChildAt(r1);
        if (isDrawerView(r2) == false) goto L9;
        if (isDrawerVisible(r2) == false) goto L9;
        return r2;
    L9:
        r1 = r1 + 1;
        goto L3
    L10:
        return null;
    }

    void cancelChildViewTouch() {
        if (this.mChildrenCanceledTouch == true) goto L10;
        long r3 = SystemClock.uptimeMillis();
        MotionEvent r0 = MotionEvent.obtain(r3, r3, 3, 0.0f, 0.0f, 0);
        int r1 = getChildCount();
        int r2 = 0;
    L5:
        if (r2 >= r1) goto L7;
        getChildAt(r2).dispatchTouchEvent(r0);
        r2 = r2 + 1;
        goto L5
    L7:
        r0.recycle();
        this.mChildrenCanceledTouch = CHILDREN_DISALLOW_INTERCEPT;
        return;
    }

    @Override
    public boolean onKeyDown(int r2, KeyEvent r3) {
        if (r2 != 4) goto L9;
        if (hasVisibleDrawer() == false) goto L9;
        r3.startTracking();
        return CHILDREN_DISALLOW_INTERCEPT;
    L9:
        return super.onKeyDown(r2, r3);
    }

    @Override
    public boolean onKeyUp(int r2, KeyEvent r3) {
        if (r2 != 4) goto L14;
        View r22 = findVisibleDrawer();
        if (r22 != null) goto L7;
    L9:
        if (r22 == null) goto L11;
        return CHILDREN_DISALLOW_INTERCEPT;
    L11:
        return false;
    L7:
        if (getDrawerLockMode(r22) != 0) goto L9;
        closeDrawers();
        goto L9
    L14:
        return super.onKeyUp(r2, r3);
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r4) {
        if ((r4 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r4);
        return;
    L6:
        SavedState r42 = (SavedState) r4;
        super.onRestoreInstanceState(r42.getSuperState());
        if (r42.openDrawerGravity == 0) goto L12;
        View r0 = findDrawerWithGravity(r42.openDrawerGravity);
        if (r0 == null) goto L12;
        openDrawer(r0);
    L12:
        if (r42.lockModeLeft == 3) goto L15;
        setDrawerLockMode(r42.lockModeLeft, 3);
    L15:
        if (r42.lockModeRight == 3) goto L18;
        setDrawerLockMode(r42.lockModeRight, 5);
    L18:
        if (r42.lockModeStart == 3) goto L21;
        setDrawerLockMode(r42.lockModeStart, GravityCompat.START);
    L21:
        if (r42.lockModeEnd == 3) goto L24;
        setDrawerLockMode(r42.lockModeEnd, GravityCompat.END);
        return;
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        int r0 = getChildCount();
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L17;
        LayoutParams r4 = (LayoutParams) getChildAt(r3).getLayoutParams();
        int r5 = r4.openState;
        boolean r6 = CHILDREN_DISALLOW_INTERCEPT;
        if (r5 != 1) goto L7;
        boolean r52 = CHILDREN_DISALLOW_INTERCEPT;
    L9:
        if (r4.openState == 2) goto L12;
        r6 = false;
    L12:
        if (r52 == true) goto L16;
        if (r6 == true) goto L16;
        r3 = r3 + 1;
    L16:
        r1.openDrawerGravity = r4.gravity;
        goto L17
    L7:
        r52 = false;
    L17:
        r1.lockModeLeft = this.mLockModeLeft;
        r1.lockModeRight = this.mLockModeRight;
        r1.lockModeStart = this.mLockModeStart;
        r1.lockModeEnd = this.mLockModeEnd;
        return r1;
    }

    @Override
    public void addView(View r1, int r2, ViewGroup.LayoutParams r3) {
        super.addView(r1, r2, r3);
        if (findOpenDrawer() == null) goto L5;
    L8:
        ViewCompat.setImportantForAccessibility(r1, 4);
    L10:
        if (CAN_HIDE_DESCENDANTS == true) goto L13;
        ViewCompat.setAccessibilityDelegate(r1, this.mChildAccessibilityDelegate);
        return;
    L13:
        return;
    L5:
        if (isDrawerView(r1) == true) goto L8;
        ViewCompat.setImportantForAccessibility(r1, 1);
        goto L10
    }

    static boolean includeChildForAccessibility(View r2) {
        if (ViewCompat.getImportantForAccessibility(r2) != 4) goto L5;
    L7:
        return false;
    L5:
        if (ViewCompat.getImportantForAccessibility(r2) == 2) goto L7;
        return CHILDREN_DISALLOW_INTERCEPT;
    }
}
