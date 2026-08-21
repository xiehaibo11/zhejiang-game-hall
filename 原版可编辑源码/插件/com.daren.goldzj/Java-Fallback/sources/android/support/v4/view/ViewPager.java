package android.support.v4.view;

import android.R;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.DataSetObserver;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.support.annotation.CallSuper;
import android.support.annotation.DrawableRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.Px;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.accessibility.AccessibilityNodeInfoCompat;
import android.util.AttributeSet;
import android.util.Log;
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.SoundEffectConstants;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.animation.Interpolator;
import android.widget.EdgeEffect;
import android.widget.Scroller;
import java.lang.annotation.ElementType;
import java.lang.annotation.Inherited;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class ViewPager extends ViewGroup {
    private static final int CLOSE_ENOUGH = 2;
    private static final Comparator<ItemInfo> COMPARATOR = null;
    private static final boolean DEBUG = false;
    private static final int DEFAULT_GUTTER_SIZE = 16;
    private static final int DEFAULT_OFFSCREEN_PAGES = 1;
    private static final int DRAW_ORDER_DEFAULT = 0;
    private static final int DRAW_ORDER_FORWARD = 1;
    private static final int DRAW_ORDER_REVERSE = 2;
    private static final int INVALID_POINTER = -1;
    static final int[] LAYOUT_ATTRS = null;
    private static final int MAX_SETTLE_DURATION = 600;
    private static final int MIN_DISTANCE_FOR_FLING = 25;
    private static final int MIN_FLING_VELOCITY = 400;
    public static final int SCROLL_STATE_DRAGGING = 1;
    public static final int SCROLL_STATE_IDLE = 0;
    public static final int SCROLL_STATE_SETTLING = 2;
    private static final String TAG = "ViewPager";
    private static final boolean USE_CACHE = false;
    private static final Interpolator sInterpolator = null;
    private static final ViewPositionComparator sPositionComparator = null;
    private int mActivePointerId;
    PagerAdapter mAdapter;
    private List<OnAdapterChangeListener> mAdapterChangeListeners;
    private int mBottomPageBounds;
    private boolean mCalledSuper;
    private int mChildHeightMeasureSpec;
    private int mChildWidthMeasureSpec;
    private int mCloseEnough;
    int mCurItem;
    private int mDecorChildCount;
    private int mDefaultGutterSize;
    private int mDrawingOrder;
    private ArrayList<View> mDrawingOrderedChildren;
    private final Runnable mEndScrollRunnable;
    private int mExpectedAdapterCount;
    private long mFakeDragBeginTime;
    private boolean mFakeDragging;
    private boolean mFirstLayout;
    private float mFirstOffset;
    private int mFlingDistance;
    private int mGutterSize;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private OnPageChangeListener mInternalPageChangeListener;
    private boolean mIsBeingDragged;
    private boolean mIsScrollStarted;
    private boolean mIsUnableToDrag;
    private final ArrayList<ItemInfo> mItems;
    private float mLastMotionX;
    private float mLastMotionY;
    private float mLastOffset;
    private EdgeEffect mLeftEdge;
    private Drawable mMarginDrawable;
    private int mMaximumVelocity;
    private int mMinimumVelocity;
    private boolean mNeedCalculatePageOffsets;
    private PagerObserver mObserver;
    private int mOffscreenPageLimit;
    private OnPageChangeListener mOnPageChangeListener;
    private List<OnPageChangeListener> mOnPageChangeListeners;
    private int mPageMargin;
    private PageTransformer mPageTransformer;
    private int mPageTransformerLayerType;
    private boolean mPopulatePending;
    private Parcelable mRestoredAdapterState;
    private ClassLoader mRestoredClassLoader;
    private int mRestoredCurItem;
    private EdgeEffect mRightEdge;
    private int mScrollState;
    private Scroller mScroller;
    private boolean mScrollingCacheEnabled;
    private final ItemInfo mTempItem;
    private final Rect mTempRect;
    private int mTopPageBounds;
    private int mTouchSlop;
    private VelocityTracker mVelocityTracker;

    @Target({ElementType.TYPE})
    @Inherited
    @Retention(RetentionPolicy.RUNTIME)
    public @interface DecorView {
    }

    static class ItemInfo {
        Object object;
        float offset;
        int position;
        boolean scrolling;
        float widthFactor;

        ItemInfo() {
        }
    }

    public static class LayoutParams extends ViewGroup.LayoutParams {
        int childIndex;
        public int gravity;
        public boolean isDecor;
        boolean needsMeasure;
        int position;
        float widthFactor;

        public LayoutParams() {
            super(-1, -1);
            this.widthFactor = 0.0f;
        }

        public LayoutParams(Context r2, AttributeSet r3) {
            super(r2, r3);
            this.widthFactor = 0.0f;
            TypedArray r22 = r2.obtainStyledAttributes(r3, ViewPager.LAYOUT_ATTRS);
            this.gravity = r22.getInteger(0, 48);
            r22.recycle();
        }
    }

    class MyAccessibilityDelegate extends AccessibilityDelegateCompat {
        final ViewPager this$0;

        MyAccessibilityDelegate(ViewPager r1) {
            this.this$0 = r1;
        }

        @Override
        public void onInitializeAccessibilityEvent(View r2, AccessibilityEvent r3) {
            super.onInitializeAccessibilityEvent(r2, r3);
            r3.setClassName(ViewPager.class.getName());
            r3.setScrollable(canScroll());
            if (r3.getEventType() == 4096) goto L5;
            return;
        L5:
            if (this.this$0.mAdapter == null) goto L9;
            r3.setItemCount(this.this$0.mAdapter.getCount());
            r3.setFromIndex(this.this$0.mCurItem);
            r3.setToIndex(this.this$0.mCurItem);
            return;
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(View r2, AccessibilityNodeInfoCompat r3) {
            super.onInitializeAccessibilityNodeInfo(r2, r3);
            r3.setClassName(ViewPager.class.getName());
            r3.setScrollable(canScroll());
            if (this.this$0.canScrollHorizontally(1) == false) goto L6;
            r3.addAction(4096);
        L6:
            if (this.this$0.canScrollHorizontally(-1) == false) goto L9;
            r3.addAction(8192);
            return;
        }

        @Override
        public boolean performAccessibilityAction(View r2, int r3, Bundle r4) {
            if (super.performAccessibilityAction(r2, r3, r4) == false) goto L6;
            return true;
        L6:
            if (r3 == 4096) goto L16;
            if (r3 == 8192) goto L11;
            return false;
        L11:
            if (this.this$0.canScrollHorizontally(-1) == false) goto L14;
            ViewPager r22 = this.this$0;
            r22.setCurrentItem(r22.mCurItem - 1);
            return true;
        L14:
            return false;
        L16:
            if (this.this$0.canScrollHorizontally(1) == false) goto L19;
            ViewPager r23 = this.this$0;
            r23.setCurrentItem(r23.mCurItem + 1);
            return true;
        L19:
            return false;
        }

        private boolean canScroll() {
            if (this.this$0.mAdapter != null) goto L5;
        L7:
            return false;
        L5:
            if (this.this$0.mAdapter.getCount() <= 1) goto L7;
            return true;
        }
    }

    public interface OnAdapterChangeListener {
        void onAdapterChanged(@NonNull ViewPager r1, @Nullable PagerAdapter r2, @Nullable PagerAdapter r3);
    }

    public interface OnPageChangeListener {
        void onPageScrollStateChanged(int r1);

        void onPageScrolled(int r1, float r2, @Px int r3);

        void onPageSelected(int r1);
    }

    public interface PageTransformer {
        void transformPage(@NonNull View r1, float r2);
    }

    private class PagerObserver extends DataSetObserver {
        final ViewPager this$0;

        PagerObserver(ViewPager r1) {
            this.this$0 = r1;
        }

        @Override
        public void onChanged() {
            this.this$0.dataSetChanged();
        }

        @Override
        public void onInvalidated() {
            this.this$0.dataSetChanged();
        }
    }

    public static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        Parcelable adapterState;
        ClassLoader loader;
        int position;

        public SavedState(@NonNull Parcelable r1) {
            super(r1);
        }

        @Override
        public void writeToParcel(Parcel r2, int r3) {
            super.writeToParcel(r2, r3);
            r2.writeInt(this.position);
            r2.writeParcelable(this.adapterState, r3);
        }

        public String toString() {
            return "FragmentPager.SavedState{" + Integer.toHexString(System.identityHashCode(this)) + " position=" + this.position + "}";
        }

        static {
            CREATOR = new 1();
        }

        SavedState(Parcel r2, ClassLoader r3) {
            super(r2, r3);
            if (r3 != null) goto L5;
            r3 = getClass().getClassLoader();
        L5:
            this.position = r2.readInt();
            this.adapterState = r2.readParcelable(r3);
            this.loader = r3;
        }
    }

    public static class SimpleOnPageChangeListener implements OnPageChangeListener {
        @Override
        public void onPageScrollStateChanged(int r1) {
        }

        @Override
        public void onPageScrolled(int r1, float r2, int r3) {
        }

        @Override
        public void onPageSelected(int r1) {
        }

        public SimpleOnPageChangeListener() {
        }
    }

    static class ViewPositionComparator implements Comparator<View> {
        ViewPositionComparator() {
        }

        @Override
        public int compare(View r1, View r2) {
            return compare(r1, r2);
        }

        public int compare(View r3, View r4) {
            LayoutParams r32 = (LayoutParams) r3.getLayoutParams();
            LayoutParams r42 = (LayoutParams) r4.getLayoutParams();
            if (r32.isDecor == r42.isDecor) goto L10;
            if (r32.isDecor == false) goto L7;
            return 1;
        L7:
            return -1;
        L10:
            return r32.position - r42.position;
        }
    }

    static {
        LAYOUT_ATTRS = new int[]{R.attr.layout_gravity};
        COMPARATOR = new 1();
        sInterpolator = new 2();
        sPositionComparator = new ViewPositionComparator();
    }

    public ViewPager(@NonNull Context r2) {
        super(r2);
        this.mItems = new ArrayList();
        this.mTempItem = new ItemInfo();
        this.mTempRect = new Rect();
        this.mRestoredCurItem = -1;
        this.mRestoredAdapterState = null;
        this.mRestoredClassLoader = null;
        this.mFirstOffset = -3.4028235E38f;
        this.mLastOffset = Float.MAX_VALUE;
        this.mOffscreenPageLimit = 1;
        this.mActivePointerId = -1;
        this.mFirstLayout = true;
        this.mNeedCalculatePageOffsets = false;
        this.mEndScrollRunnable = new 3(this);
        this.mScrollState = 0;
        initViewPager();
    }

    public ViewPager(@NonNull Context r1, @Nullable AttributeSet r2) {
        super(r1, r2);
        this.mItems = new ArrayList();
        this.mTempItem = new ItemInfo();
        this.mTempRect = new Rect();
        this.mRestoredCurItem = -1;
        this.mRestoredAdapterState = null;
        this.mRestoredClassLoader = null;
        this.mFirstOffset = -3.4028235E38f;
        this.mLastOffset = Float.MAX_VALUE;
        this.mOffscreenPageLimit = 1;
        this.mActivePointerId = -1;
        this.mFirstLayout = true;
        this.mNeedCalculatePageOffsets = false;
        this.mEndScrollRunnable = new 3(this);
        this.mScrollState = 0;
        initViewPager();
    }

    void initViewPager() {
        setWillNotDraw(false);
        setDescendantFocusability(262144);
        setFocusable(true);
        Context r1 = getContext();
        this.mScroller = new Scroller(r1, sInterpolator);
        ViewConfiguration r2 = ViewConfiguration.get(r1);
        float r3 = r1.getResources().getDisplayMetrics().density;
        this.mTouchSlop = r2.getScaledPagingTouchSlop();
        this.mMinimumVelocity = (int) (400.0f * r3);
        this.mMaximumVelocity = r2.getScaledMaximumFlingVelocity();
        this.mLeftEdge = new EdgeEffect(r1);
        this.mRightEdge = new EdgeEffect(r1);
        this.mFlingDistance = (int) (25.0f * r3);
        this.mCloseEnough = (int) (2.0f * r3);
        this.mDefaultGutterSize = (int) (r3 * 16.0f);
        ViewCompat.setAccessibilityDelegate(this, new MyAccessibilityDelegate(this));
        if (ViewCompat.getImportantForAccessibility(this) != 0) goto L5;
        ViewCompat.setImportantForAccessibility(this, 1);
    L5:
        ViewCompat.setOnApplyWindowInsetsListener(this, new 4(this));
    }

    @Override
    protected void onDetachedFromWindow() {
        removeCallbacks(this.mEndScrollRunnable);
        Scroller r0 = this.mScroller;
        if (r0 != null) goto L5;
    L7:
        super.onDetachedFromWindow();
        return;
    L5:
        if (r0.isFinished() == true) goto L7;
        this.mScroller.abortAnimation();
        goto L7
    }

    void setScrollState(int r2) {
        if (this.mScrollState != r2) goto L5;
        return;
    L5:
        this.mScrollState = r2;
        if (this.mPageTransformer == null) goto L11;
        if (r2 == 0) goto L9;
        boolean r0 = true;
    L10:
        enableLayers(r0);
        goto L11
    L9:
        r0 = false;
    L11:
        dispatchOnScrollStateChanged(r2);
    }

    public void setAdapter(@Nullable PagerAdapter r8) {
        PagerAdapter r0 = this.mAdapter;
        int r2 = 0;
        if (r0 == null) goto L9;
        r0.setViewPagerObserver(null);
        this.mAdapter.startUpdate(this);
        int r02 = 0;
    L6:
        if (r02 >= this.mItems.size()) goto L8;
        ItemInfo r3 = this.mItems.get(r02);
        this.mAdapter.destroyItem(this, r3.position, r3.object);
        r02 = r02 + 1;
        goto L6
    L8:
        this.mAdapter.finishUpdate(this);
        this.mItems.clear();
        removeNonDecorViews();
        this.mCurItem = 0;
        scrollTo(0, 0);
    L9:
        PagerAdapter r03 = this.mAdapter;
        this.mAdapter = r8;
        this.mExpectedAdapterCount = 0;
        if (this.mAdapter != null) goto L12;
    L20:
        List<OnAdapterChangeListener> r1 = this.mAdapterChangeListeners;
        if (r1 != null) goto L23;
        return;
    L23:
        if (r1.isEmpty() == true) goto L30;
        int r12 = this.mAdapterChangeListeners.size();
    L25:
        if (r2 >= r12) goto L31;
        this.mAdapterChangeListeners.get(r2).onAdapterChanged(this, r03, r8);
        r2 = r2 + 1;
        goto L25
    L31:
        return;
    L30:
        return;
    L12:
        if (this.mObserver != null) goto L14;
        this.mObserver = new PagerObserver(this);
    L14:
        this.mAdapter.setViewPagerObserver(this.mObserver);
        this.mPopulatePending = false;
        boolean r32 = this.mFirstLayout;
        this.mFirstLayout = true;
        this.mExpectedAdapterCount = this.mAdapter.getCount();
        if (this.mRestoredCurItem < 0) goto L17;
        this.mAdapter.restoreState(this.mRestoredAdapterState, this.mRestoredClassLoader);
        setCurrentItemInternal(this.mRestoredCurItem, false, true);
        this.mRestoredCurItem = -1;
        this.mRestoredAdapterState = null;
        this.mRestoredClassLoader = null;
        goto L20
    L17:
        if (r32 == true) goto L19;
        populate();
        goto L20
    L19:
        requestLayout();
        goto L20
    }

    private void removeNonDecorViews() {
        int r0 = 0;
    L4:
        if (r0 >= getChildCount()) goto L9;
        if (((LayoutParams) getChildAt(r0).getLayoutParams()).isDecor == true) goto L8;
        removeViewAt(r0);
        r0 = r0 - 1;
    L8:
        r0 = r0 + 1;
        goto L4
    }

    @Nullable
    public PagerAdapter getAdapter() {
        return this.mAdapter;
    }

    public void addOnAdapterChangeListener(@NonNull OnAdapterChangeListener r2) {
        if (this.mAdapterChangeListeners != null) goto L5;
        this.mAdapterChangeListeners = new ArrayList();
    L5:
        this.mAdapterChangeListeners.add(r2);
    }

    public void removeOnAdapterChangeListener(@NonNull OnAdapterChangeListener r2) {
        List<OnAdapterChangeListener> r0 = this.mAdapterChangeListeners;
        if (r0 == null) goto L6;
        r0.remove(r2);
        return;
    }

    private int getClientWidth() {
        return (getMeasuredWidth() - getPaddingLeft()) - getPaddingRight();
    }

    public void setCurrentItem(int r3) {
        this.mPopulatePending = false;
        setCurrentItemInternal(r3, !this.mFirstLayout, false);
    }

    public void setCurrentItem(int r2, boolean r3) {
        this.mPopulatePending = false;
        setCurrentItemInternal(r2, r3, false);
    }

    public int getCurrentItem() {
        return this.mCurItem;
    }

    void setCurrentItemInternal(int r2, boolean r3, boolean r4) {
        setCurrentItemInternal(r2, r3, r4, 0);
    }

    void setCurrentItemInternal(int r5, boolean r6, boolean r7, int r8) {
        PagerAdapter r0 = this.mAdapter;
        if (r0 != null) goto L5;
    L40:
        setScrollingCacheEnabled(false);
        return;
    L5:
        if (r0.getCount() <= 0) goto L40;
        if (r7 == false) goto L9;
    L14:
        boolean r72 = true;
        if (r5 >= 0) goto L18;
        r5 = 0;
    L20:
        int r02 = this.mOffscreenPageLimit;
        int r2 = this.mCurItem;
        if (r5 <= (r2 + r02)) goto L23;
    L24:
        int r03 = 0;
    L26:
        if (r03 >= this.mItems.size()) goto L29;
        this.mItems.get(r03).scrolling = true;
        r03 = r03 + 1;
    L29:
        if (this.mCurItem != r5) goto L33;
        r72 = false;
    L33:
        if (this.mFirstLayout == false) goto L38;
        this.mCurItem = r5;
        if (r72 == false) goto L37;
        dispatchOnPageSelected(r5);
    L37:
        requestLayout();
        return;
    L38:
        populate(r5);
        scrollToItem(r5, r6, r8, r72);
        return;
    L23:
        if (r5 >= (r2 - r02)) goto L29;
    L18:
        if (r5 < this.mAdapter.getCount()) goto L20;
        r5 = this.mAdapter.getCount() - 1;
        goto L20
    L9:
        if (this.mCurItem != r5) goto L14;
        if (this.mItems.size() == 0) goto L14;
        setScrollingCacheEnabled(false);
    }

    private void scrollToItem(int r6, boolean r7, int r8, boolean r9) {
        ItemInfo r0 = infoForPosition(r6);
        if (r0 == null) goto L5;
        int r02 = (int) (getClientWidth() * Math.max(this.mFirstOffset, Math.min(r0.offset, this.mLastOffset)));
    L6:
        if (r7 == false) goto L10;
        smoothScrollTo(r02, 0, r8);
        if (r9 == false) goto L14;
        dispatchOnPageSelected(r6);
        return;
    L14:
        return;
    L10:
        if (r9 == false) goto L12;
        dispatchOnPageSelected(r6);
    L12:
        completeScroll(false);
        scrollTo(r02, 0);
        pageScrolled(r02);
        return;
    L5:
        r02 = 0;
        goto L6
    }

    @Deprecated
    public void setOnPageChangeListener(OnPageChangeListener r1) {
        this.mOnPageChangeListener = r1;
    }

    public void addOnPageChangeListener(@NonNull OnPageChangeListener r2) {
        if (this.mOnPageChangeListeners != null) goto L5;
        this.mOnPageChangeListeners = new ArrayList();
    L5:
        this.mOnPageChangeListeners.add(r2);
    }

    public void removeOnPageChangeListener(@NonNull OnPageChangeListener r2) {
        List<OnPageChangeListener> r0 = this.mOnPageChangeListeners;
        if (r0 == null) goto L6;
        r0.remove(r2);
        return;
    }

    public void clearOnPageChangeListeners() {
        List<OnPageChangeListener> r0 = this.mOnPageChangeListeners;
        if (r0 == null) goto L6;
        r0.clear();
        return;
    }

    public void setPageTransformer(boolean r2, @Nullable PageTransformer r3) {
        setPageTransformer(r2, r3, 2);
    }

    public void setPageTransformer(boolean r5, @Nullable PageTransformer r6, int r7) {
        int r0 = 1;
        if (r6 == null) goto L5;
        boolean r2 = true;
    L7:
        if (this.mPageTransformer == null) goto L9;
        boolean r3 = true;
    L10:
        if (r2 == r3) goto L12;
        boolean r32 = true;
    L13:
        this.mPageTransformer = r6;
        setChildrenDrawingOrderEnabled(r2);
        if (r2 == false) goto L18;
        if (r5 == false) goto L17;
        r0 = 2;
    L17:
        this.mDrawingOrder = r0;
        this.mPageTransformerLayerType = r7;
    L19:
        if (r32 == false) goto L22;
        populate();
        return;
    L22:
        return;
    L18:
        this.mDrawingOrder = 0;
        goto L19
    L12:
        r32 = false;
        goto L13
    L9:
        r3 = false;
        goto L10
    L5:
        r2 = false;
        goto L7
    }

    @Override
    protected int getChildDrawingOrder(int r3, int r4) {
        if (this.mDrawingOrder != 2) goto L6;
        r4 = (r3 - 1) - r4;
    L6:
        return ((LayoutParams) this.mDrawingOrderedChildren.get(r4).getLayoutParams()).childIndex;
    }

    OnPageChangeListener setInternalPageChangeListener(OnPageChangeListener r2) {
        OnPageChangeListener r0 = this.mInternalPageChangeListener;
        this.mInternalPageChangeListener = r2;
        return r0;
    }

    public int getOffscreenPageLimit() {
        return this.mOffscreenPageLimit;
    }

    public void setOffscreenPageLimit(int r4) {
        if (r4 >= 1) goto L6;
        Log.w(TAG, "Requested offscreen page limit " + r4 + " too small; defaulting to 1");
        r4 = 1;
    L6:
        if (r4 == this.mOffscreenPageLimit) goto L9;
        this.mOffscreenPageLimit = r4;
        populate();
        return;
    }

    public void setPageMargin(int r3) {
        int r0 = this.mPageMargin;
        this.mPageMargin = r3;
        int r1 = getWidth();
        recomputeScrollPosition(r1, r1, r3, r0);
        requestLayout();
    }

    public int getPageMargin() {
        return this.mPageMargin;
    }

    public void setPageMarginDrawable(@Nullable Drawable r1) {
        this.mMarginDrawable = r1;
        if (r1 == null) goto L5;
        refreshDrawableState();
    L5:
        if (r1 != null) goto L7;
        boolean r12 = true;
    L8:
        setWillNotDraw(r12);
        invalidate();
        return;
    L7:
        r12 = false;
        goto L8
    }

    public void setPageMarginDrawable(@DrawableRes int r2) {
        setPageMarginDrawable(ContextCompat.getDrawable(getContext(), r2));
    }

    @Override
    protected boolean verifyDrawable(Drawable r2) {
        if (super.verifyDrawable(r2) == false) goto L5;
    L8:
        return true;
    L5:
        if (r2 == this.mMarginDrawable) goto L8;
        return false;
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        Drawable r0 = this.mMarginDrawable;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isStateful() == false) goto L9;
        r0.setState(getDrawableState());
        return;
    }

    float distanceInfluenceForSnapDuration(float r3) {
        return (float) Math.sin((r3 - 0.5f) * 0.47123894f);
    }

    void smoothScrollTo(int r2, int r3) {
        smoothScrollTo(r2, r3, 0);
    }

    void smoothScrollTo(int r10, int r11, int r12) {
        if (getChildCount() != 0) goto L6;
        setScrollingCacheEnabled(false);
        return;
    L6:
        Scroller r0 = this.mScroller;
        if (r0 != null) goto L9;
    L11:
        boolean r02 = false;
    L12:
        if (r02 == true) goto L14;
        int r03 = getScrollX();
    L19:
        int r4 = r03;
        int r5 = getScrollY();
        int r6 = r10 - r4;
        int r7 = r11 - r5;
        if (r6 != 0) goto L24;
        if (r7 != 0) goto L24;
        completeScroll(false);
        populate();
        setScrollState(0);
        return;
    L24:
        setScrollingCacheEnabled(true);
        setScrollState(2);
        int r102 = getClientWidth();
        int r112 = r102 / 2;
        float r103 = r102;
        float r113 = r112;
        float r114 = r113 + (distanceInfluenceForSnapDuration(Math.min(1.0f, (Math.abs(r6) * 1.0f) / r103)) * r113);
        int r122 = Math.abs(r12);
        if (r122 <= 0) goto L27;
        int r104 = Math.round(Math.abs(r114 / r122) * 1000.0f) * 4;
    L28:
        int r8 = Math.min(r104, 600);
        this.mIsScrollStarted = false;
        this.mScroller.startScroll(r4, r5, r6, r7, r8);
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    L27:
        r104 = (int) (((Math.abs(r6) / ((r103 * this.mAdapter.getPageWidth(this.mCurItem)) + this.mPageMargin)) + 1.0f) * 100.0f);
        goto L28
    L14:
        if (this.mIsScrollStarted == false) goto L16;
        r03 = this.mScroller.getCurrX();
    L17:
        this.mScroller.abortAnimation();
        setScrollingCacheEnabled(false);
        goto L19
    L16:
        r03 = this.mScroller.getStartX();
        goto L17
    L9:
        if (r0.isFinished() == true) goto L11;
        r02 = true;
        goto L12
    }

    ItemInfo addNewItem(int r3, int r4) {
        ItemInfo r0 = new ItemInfo();
        r0.position = r3;
        r0.object = this.mAdapter.instantiateItem(this, r3);
        r0.widthFactor = this.mAdapter.getPageWidth(r3);
        if (r4 >= 0) goto L5;
    L8:
        this.mItems.add(r0);
    L9:
        return r0;
    L5:
        if (r4 >= this.mItems.size()) goto L8;
        this.mItems.add(r4, r0);
        goto L9
    }

    void dataSetChanged() {
        int r0 = this.mAdapter.getCount();
        this.mExpectedAdapterCount = r0;
        if (this.mItems.size() < ((this.mOffscreenPageLimit * 2) + 1)) goto L5;
    L7:
        boolean r1 = false;
    L8:
        boolean r5 = r1;
        int r6 = this.mCurItem;
        int r12 = 0;
        boolean r2 = false;
    L10:
        if (r12 >= this.mItems.size()) goto L30;
        ItemInfo r7 = this.mItems.get(r12);
        int r8 = this.mAdapter.getItemPosition(r7.object);
        if (r8 == (-1)) goto L29;
        if (r8 != (-2)) goto L24;
        this.mItems.remove(r12);
        r12 = r12 - 1;
        if (r2 == true) goto L19;
        this.mAdapter.startUpdate(this);
        r2 = true;
    L19:
        this.mAdapter.destroyItem(this, r7.position, r7.object);
        if (this.mCurItem != r7.position) goto L22;
        r6 = Math.max(0, Math.min(this.mCurItem, r0 - 1));
    L22:
        r5 = true;
        goto L29
    L24:
        if (r7.position == r8) goto L29;
        if (r7.position != this.mCurItem) goto L28;
        r6 = r8;
    L28:
        r7.position = r8;
    L29:
        r12 = r12 + 1;
        goto L10
    L30:
        if (r2 == false) goto L32;
        this.mAdapter.finishUpdate(this);
    L32:
        Collections.sort(this.mItems, COMPARATOR);
        if (r5 == false) goto L49;
        int r02 = getChildCount();
        int r13 = 0;
    L35:
        if (r13 >= r02) goto L40;
        LayoutParams r22 = (LayoutParams) getChildAt(r13).getLayoutParams();
        if (r22.isDecor == true) goto L39;
        r22.widthFactor = 0.0f;
    L39:
        r13 = r13 + 1;
        goto L35
    L40:
        setCurrentItemInternal(r6, false, true);
        requestLayout();
        return;
    L49:
        return;
    L5:
        if (this.mItems.size() >= r0) goto L7;
        r1 = true;
        goto L8
    }

    void populate() {
        populate(this.mCurItem);
    }

    void populate(int r18) {
        int r2 = this.mCurItem;
        if (r2 == r18) goto L5;
        ItemInfo r22 = infoForPosition(r2);
        this.mCurItem = r18;
    L7:
        if (this.mAdapter != null) goto L11;
        sortChildDrawingOrder();
        return;
    L11:
        if (this.mPopulatePending == false) goto L15;
        sortChildDrawingOrder();
        return;
    L15:
        if (getWindowToken() != null) goto L17;
        return;
    L17:
        this.mAdapter.startUpdate(this);
        int r1 = this.mOffscreenPageLimit;
        int r4 = Math.max(0, this.mCurItem - r1);
        int r6 = this.mAdapter.getCount();
        int r12 = Math.min(r6 - 1, this.mCurItem + r1);
        if (r6 != this.mExpectedAdapterCount) goto L140;
        int r7 = 0;
    L21:
        if (r7 >= this.mItems.size()) goto L28;
        ItemInfo r8 = this.mItems.get(r7);
        if (r8.position >= this.mCurItem) goto L25;
        r7 = r7 + 1;
        goto L21
    L25:
        if (r8.position != this.mCurItem) goto L28;
    L29:
        if (r8 != null) goto L33;
        if (r6 <= 0) goto L33;
        r8 = addNewItem(this.mCurItem, r7);
    L33:
        if (r8 == null) goto L104;
        int r10 = r7 - 1;
        if (r10 < 0) goto L37;
        ItemInfo r11 = this.mItems.get(r10);
    L38:
        int r122 = getClientWidth();
        if (r122 > 0) goto L41;
        float r3 = 0.0f;
    L42:
        int r14 = this.mCurItem - 1;
        int r15 = r10;
        int r102 = r7;
        float r72 = 0.0f;
    L43:
        if (r14 < 0) goto L68;
        if (r72 < r3) goto L56;
        if (r14 >= r4) goto L56;
        if (r11 == null) goto L68;
        if (r14 != r11.position) goto L67;
        if (r11.scrolling == true) goto L67;
        this.mItems.remove(r15);
        this.mAdapter.destroyItem(this, r14, r11.object);
        r15 = r15 - 1;
        r102 = r102 - 1;
        if (r15 < 0) goto L65;
        ItemInfo r5 = this.mItems.get(r15);
    L66:
        r11 = r5;
    L65:
        r5 = null;
    L67:
        r14 = r14 - 1;
    L56:
        if (r11 != null) goto L58;
    L62:
        r72 = r72 + addNewItem(r14, r15 + 1).widthFactor;
        r102 = r102 + 1;
        if (r15 < 0) goto L65;
        r5 = this.mItems.get(r15);
        goto L66
    L58:
        if (r14 != r11.position) goto L62;
        r72 = r72 + r11.widthFactor;
        r15 = r15 - 1;
        if (r15 < 0) goto L65;
        r5 = this.mItems.get(r15);
    L68:
        float r32 = r8.widthFactor;
        int r42 = r102 + 1;
        if (r32 < 2.0f) goto L71;
    L103:
        calculatePageOffsets(r8, r102, r22);
        this.mAdapter.setPrimaryItem(this, this.mCurItem, r8.object);
        goto L104
    L71:
        if (r42 >= this.mItems.size()) goto L73;
        ItemInfo r52 = this.mItems.get(r42);
    L74:
        if (r122 > 0) goto L76;
        float r73 = 0.0f;
    L77:
        int r112 = this.mCurItem;
    L78:
        r112 = r112 + 1;
        if (r112 >= r6) goto L103;
        if (r32 < r73) goto L93;
        if (r112 <= r12) goto L93;
        if (r52 == null) goto L103;
        if (r112 != r52.position) goto L78;
        if (r52.scrolling == true) goto L78;
        this.mItems.remove(r42);
        this.mAdapter.destroyItem(this, r112, r52.object);
        if (r42 < this.mItems.size()) goto L91;
    L92:
        r52 = null;
        goto L78
    L91:
        r52 = this.mItems.get(r42);
    L93:
        if (r52 == null) goto L99;
        if (r112 != r52.position) goto L99;
        r32 = r32 + r52.widthFactor;
        r42 = r42 + 1;
        if (r42 >= this.mItems.size()) goto L92;
        r52 = this.mItems.get(r42);
    L99:
        ItemInfo r53 = addNewItem(r112, r42);
        r42 = r42 + 1;
        r32 = r32 + r53.widthFactor;
        if (r42 >= this.mItems.size()) goto L92;
        r52 = this.mItems.get(r42);
        goto L78
    L76:
        r73 = (getPaddingRight() / r122) + 2.0f;
        goto L77
    L73:
        r52 = null;
        goto L74
    L41:
        r3 = (2.0f - r8.widthFactor) + (getPaddingLeft() / r122);
        goto L42
    L37:
        r11 = null;
    L104:
        this.mAdapter.finishUpdate(this);
        int r13 = getChildCount();
        int r23 = 0;
    L105:
        if (r23 >= r13) goto L114;
        View r33 = getChildAt(r23);
        LayoutParams r43 = (LayoutParams) r33.getLayoutParams();
        r43.childIndex = r23;
        if (r43.isDecor == true) goto L113;
        if (r43.widthFactor != 0.0f) goto L113;
        ItemInfo r34 = infoForChild(r33);
        if (r34 == null) goto L113;
        r43.widthFactor = r34.widthFactor;
        r43.position = r34.position;
    L113:
        r23 = r23 + 1;
        goto L105
    L114:
        sortChildDrawingOrder();
        if (hasFocus() == false) goto L134;
        View r16 = findFocus();
        if (r16 == null) goto L119;
        ItemInfo r35 = infoForAnyChild(r16);
    L120:
        if (r35 != null) goto L122;
    L123:
        int r17 = 0;
    L125:
        if (r17 >= getChildCount()) goto L184;
        View r24 = getChildAt(r17);
        ItemInfo r36 = infoForChild(r24);
        if (r36 == null) goto L133;
        if (r36.position != this.mCurItem) goto L133;
        if (r24.requestFocus(2) == false) goto L133;
        return;
    L133:
        r17 = r17 + 1;
        goto L125
    L184:
        return;
    L122:
        if (r35.position != this.mCurItem) goto L123;
        return;
    L119:
        r35 = null;
        goto L120
    L134:
        return;
    L28:
        r8 = null;
        goto L29
    L140:
        String r19 = getResources().getResourceName(getId());     // Catch: Resources.NotFoundException -> L137
    L139:
        throw new IllegalStateException("The application's PagerAdapter changed the adapter's contents without calling PagerAdapter#notifyDataSetChanged! Expected adapter item count: " + this.mExpectedAdapterCount + ", found: " + r6 + " Pager id: " + r19 + " Pager class: " + getClass() + " Problematic adapter: " + this.mAdapter.getClass());
    L137:
        r19 = Integer.toHexString(getId());
        goto L139
    L5:
        r22 = null;
        goto L7
    }

    private void sortChildDrawingOrder() {
        if (this.mDrawingOrder == 0) goto L14;
        ArrayList<View> r0 = this.mDrawingOrderedChildren;
        if (r0 != null) goto L7;
        this.mDrawingOrderedChildren = new ArrayList();
    L8:
        int r02 = getChildCount();
        int r1 = 0;
    L9:
        if (r1 >= r02) goto L11;
        View r2 = getChildAt(r1);
        this.mDrawingOrderedChildren.add(r2);
        r1 = r1 + 1;
        goto L9
    L11:
        Collections.sort(this.mDrawingOrderedChildren, sPositionComparator);
        return;
    L7:
        r0.clear();
        goto L8
    }

    private void calculatePageOffsets(ItemInfo r11, int r12, ItemInfo r13) {
        int r0 = this.mAdapter.getCount();
        int r1 = getClientWidth();
        if (r1 <= 0) goto L5;
        float r2 = this.mPageMargin / r1;
    L7:
        if (r13 == null) goto L40;
        int r3 = r13.position;
        if (r3 >= r11.position) goto L26;
        float r4 = (r13.offset + r13.widthFactor) + r2;
        int r32 = r3 + 1;
        int r132 = 0;
    L12:
        if (r32 > r11.position) goto L40;
        if (r132 >= this.mItems.size()) goto L40;
        ItemInfo r5 = this.mItems.get(r132);
    L16:
        ItemInfo r52 = r5;
        if (r32 <= r52.position) goto L22;
        if (r132 >= (this.mItems.size() - 1)) goto L22;
        r132 = r132 + 1;
        r5 = this.mItems.get(r132);
    L22:
        if (r32 >= r52.position) goto L24;
        r4 = r4 + (this.mAdapter.getPageWidth(r32) + r2);
        r32 = r32 + 1;
        goto L22
    L24:
        r52.offset = r4;
        r4 = r4 + (r52.widthFactor + r2);
        r32 = r32 + 1;
        goto L12
    L26:
        if (r3 <= r11.position) goto L40;
        int r42 = this.mItems.size() - 1;
        float r133 = r13.offset;
    L28:
        r3 = r3 - 1;
        if (r3 < r11.position) goto L40;
        if (r42 < 0) goto L40;
        ItemInfo r53 = this.mItems.get(r42);
    L32:
        ItemInfo r54 = r53;
        if (r3 >= r54.position) goto L37;
        if (r42 <= 0) goto L37;
        r42 = r42 - 1;
        r53 = this.mItems.get(r42);
    L37:
        if (r3 <= r54.position) goto L39;
        r133 = r133 - (this.mAdapter.getPageWidth(r3) + r2);
        r3 = r3 - 1;
        goto L37
    L39:
        r133 = r133 - (r54.widthFactor + r2);
        r54.offset = r133;
    L40:
        int r134 = this.mItems.size();
        float r33 = r11.offset;
        int r43 = r11.position - 1;
        if (r11.position != 0) goto L43;
        float r55 = r11.offset;
    L44:
        this.mFirstOffset = r55;
        int r02 = r0 - 1;
        if (r11.position != r02) goto L47;
        float r56 = (r11.offset + r11.widthFactor) - 1.0f;
    L48:
        this.mLastOffset = r56;
        int r57 = r12 - 1;
    L49:
        if (r57 < 0) goto L58;
        ItemInfo r7 = this.mItems.get(r57);
    L52:
        if (r43 <= r7.position) goto L54;
        r33 = r33 - (this.mAdapter.getPageWidth(r43) + r2);
        r43 = r43 - 1;
        goto L52
    L54:
        r33 = r33 - (r7.widthFactor + r2);
        r7.offset = r33;
        if (r7.position != 0) goto L57;
        this.mFirstOffset = r33;
    L57:
        r57 = r57 - 1;
        r43 = r43 - 1;
        goto L49
    L58:
        float r34 = (r11.offset + r11.widthFactor) + r2;
        int r112 = r11.position + 1;
        int r122 = r12 + 1;
    L59:
        if (r122 >= r134) goto L68;
        ItemInfo r44 = this.mItems.get(r122);
    L62:
        if (r112 >= r44.position) goto L65;
        r34 = r34 + (this.mAdapter.getPageWidth(r112) + r2);
        r112 = r112 + 1;
        goto L62
    L65:
        if (r44.position != r02) goto L67;
        this.mLastOffset = (r44.widthFactor + r34) - 1.0f;
    L67:
        r44.offset = r34;
        r34 = r34 + (r44.widthFactor + r2);
        r122 = r122 + 1;
        r112 = r112 + 1;
        goto L59
    L68:
        this.mNeedCalculatePageOffsets = false;
        return;
    L47:
        r56 = Float.MAX_VALUE;
        goto L48
    L43:
        r55 = -3.4028235E38f;
        goto L44
    L5:
        r2 = 0.0f;
        goto L7
    }

    @Override
    public Parcelable onSaveInstanceState() {
        SavedState r1 = new SavedState(super.onSaveInstanceState());
        r1.position = this.mCurItem;
        PagerAdapter r0 = this.mAdapter;
        if (r0 == null) goto L5;
        r1.adapterState = r0.saveState();
    L5:
        return r1;
    }

    @Override
    public void onRestoreInstanceState(Parcelable r4) {
        if ((r4 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r4);
        return;
    L6:
        SavedState r42 = (SavedState) r4;
        super.onRestoreInstanceState(r42.getSuperState());
        PagerAdapter r0 = this.mAdapter;
        if (r0 == null) goto L9;
        r0.restoreState(r42.adapterState, r42.loader);
        setCurrentItemInternal(r42.position, false, true);
        return;
    L9:
        this.mRestoredCurItem = r42.position;
        this.mRestoredAdapterState = r42.adapterState;
        this.mRestoredClassLoader = r42.loader;
    }

    @Override
    public void addView(View r4, int r5, ViewGroup.LayoutParams r6) {
        if (checkLayoutParams(r6) == true) goto L5;
        r6 = generateLayoutParams(r6);
    L5:
        LayoutParams r0 = (LayoutParams) r6;
        r0.isDecor |= isDecorView(r4);
        if (this.mInLayout == false) goto L14;
        if (r0 != null) goto L9;
    L13:
        r0.needsMeasure = true;
        addViewInLayout(r4, r5, r6);
        return;
    L9:
        if (r0.isDecor == false) goto L13;
        throw new IllegalStateException("Cannot add pager decor view during layout");
    L14:
        super.addView(r4, r5, r6);
    }

    private static boolean isDecorView(@NonNull View r1) {
        if (r1.getClass().getAnnotation(DecorView.class) == null) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public void removeView(View r2) {
        if (this.mInLayout == false) goto L5;
        removeViewInLayout(r2);
        return;
    L5:
        super.removeView(r2);
    }

    ItemInfo infoForChild(View r5) {
        int r0 = 0;
    L4:
        if (r0 >= this.mItems.size()) goto L9;
        ItemInfo r1 = this.mItems.get(r0);
        if (this.mAdapter.isViewFromObject(r5, r1.object) == true) goto L7;
        r0 = r0 + 1;
        goto L4
    L7:
        return r1;
    L9:
        return null;
    }

    ItemInfo infoForAnyChild(View r2) {
    L2:
        Object r0 = r2.getParent();
        if (r0 == this) goto L12;
        if (r0 == null) goto L9;
        if ((r0 instanceof View) == false) goto L16;
        r2 = (View) r0;
        goto L2
    L16:
        return null;
    L9:
        return null;
    L12:
        return infoForChild(r2);
    }

    ItemInfo infoForPosition(int r4) {
        int r0 = 0;
    L4:
        if (r0 >= this.mItems.size()) goto L9;
        ItemInfo r1 = this.mItems.get(r0);
        if (r1.position == r4) goto L7;
        r0 = r0 + 1;
        goto L4
    L7:
        return r1;
    L9:
        return null;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = true;
    }

    @Override
    protected void onMeasure(int r17, int r18) {
        setMeasuredDimension(getDefaultSize(0, r17), getDefaultSize(0, r18));
        int r2 = getMeasuredWidth();
        this.mGutterSize = Math.min(r2 / 10, this.mDefaultGutterSize);
        int r22 = (r2 - getPaddingLeft()) - getPaddingRight();
        int r3 = (getMeasuredHeight() - getPaddingTop()) - getPaddingBottom();
        int r4 = getChildCount();
        int r5 = r3;
        int r32 = r22;
        int r23 = 0;
    L3:
        boolean r7 = true;
        int r8 = 1073741824;
        if (r23 >= r4) goto L51;
        View r9 = getChildAt(r23);
        if (r9.getVisibility() == 8) goto L50;
        LayoutParams r6 = (LayoutParams) r9.getLayoutParams();
        if (r6 == null) goto L50;
        if (r6.isDecor == false) goto L50;
        int r10 = r6.gravity & 7;
        int r11 = r6.gravity & 112;
        if (r11 != 48) goto L14;
    L17:
        boolean r112 = true;
    L19:
        if (r10 != 3) goto L21;
    L24:
        int r102 = Integer.MIN_VALUE;
        if (r112 == false) goto L27;
        r102 = 1073741824;
    L29:
        int r12 = Integer.MIN_VALUE;
    L31:
        if (r6.width != (-2)) goto L33;
        int r13 = r32;
    L39:
        if (r6.height != (-2)) goto L41;
        int r1 = r5;
        r8 = r12;
    L45:
        r9.measure(View.MeasureSpec.makeMeasureSpec(r13, r102), View.MeasureSpec.makeMeasureSpec(r1, r8));
        if (r112 == false) goto L48;
        r5 = r5 - r9.getMeasuredHeight();
        goto L50
    L48:
        if (r7 == false) goto L50;
        r32 = r32 - r9.getMeasuredWidth();
        goto L50
    L41:
        if (r6.height == (-1)) goto L43;
        r1 = r6.height;
        goto L45
    L43:
        r1 = r5;
        goto L45
    L33:
        if (r6.width == (-1)) goto L35;
        r13 = r6.width;
    L36:
        r102 = 1073741824;
        goto L39
    L35:
        r13 = r32;
        goto L36
    L27:
        if (r7 == false) goto L29;
        r12 = 1073741824;
        goto L31
    L21:
        if (r10 == 5) goto L24;
        r7 = false;
        goto L24
    L14:
        if (r11 == 80) goto L17;
        r112 = false;
    L50:
        r23 = r23 + 1;
        goto L3
    L51:
        this.mChildWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(r32, 1073741824);
        this.mChildHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(r5, 1073741824);
        this.mInLayout = true;
        populate();
        int r14 = 0;
        this.mInLayout = false;
        int r24 = getChildCount();
    L52:
        if (r14 >= r24) goto L61;
        View r42 = getChildAt(r14);
        if (r42.getVisibility() == 8) goto L60;
        LayoutParams r52 = (LayoutParams) r42.getLayoutParams();
        if (r52 != null) goto L58;
    L59:
        r42.measure(View.MeasureSpec.makeMeasureSpec((int) (r32 * r52.widthFactor), 1073741824), this.mChildHeightMeasureSpec);
        goto L60
    L58:
        if (r52.isDecor == false) goto L59;
    L60:
        r14 = r14 + 1;
        goto L52
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
        super.onSizeChanged(r1, r2, r3, r4);
        if (r1 == r3) goto L6;
        int r22 = this.mPageMargin;
        recomputeScrollPosition(r1, r3, r22, r22);
        return;
    }

    private void recomputeScrollPosition(int r2, int r3, int r4, int r5) {
        if (r3 > 0) goto L4;
    L9:
        ItemInfo r32 = infoForPosition(this.mCurItem);
        if (r32 == null) goto L12;
        float r33 = Math.min(r32.offset, this.mLastOffset);
    L13:
        int r22 = (int) (r33 * ((r2 - getPaddingLeft()) - getPaddingRight()));
        if (r22 == getScrollX()) goto L19;
        completeScroll(false);
        scrollTo(r22, getScrollY());
        return;
    L19:
        return;
    L12:
        r33 = 0.0f;
        goto L13
    L4:
        if (this.mItems.isEmpty() == true) goto L9;
        if (this.mScroller.isFinished() == true) goto L8;
        this.mScroller.setFinalX(getCurrentItem() * getClientWidth());
        return;
    L8:
        scrollTo((int) ((getScrollX() / (((r3 - getPaddingLeft()) - getPaddingRight()) + r5)) * (((r2 - getPaddingLeft()) - getPaddingRight()) + r4)), getScrollY());
    }

    @Override
    protected void onLayout(boolean r19, int r20, int r21, int r22, int r23) {
        int r1 = getChildCount();
        int r2 = r22 - r20;
        int r3 = r23 - r21;
        int r4 = getPaddingLeft();
        int r5 = getPaddingTop();
        int r6 = getPaddingRight();
        int r7 = getPaddingBottom();
        int r8 = getScrollX();
        int r10 = r7;
        int r11 = 0;
        int r72 = r5;
        int r52 = r4;
        int r42 = 0;
    L4:
        if (r42 >= r1) goto L31;
        View r13 = getChildAt(r42);
        if (r13.getVisibility() == 8) goto L30;
        LayoutParams r12 = (LayoutParams) r13.getLayoutParams();
        if (r12.isDecor == false) goto L30;
        int r14 = r12.gravity & 7;
        int r122 = r12.gravity & 112;
        if (r14 != 1) goto L12;
        int r142 = Math.max((r2 - r13.getMeasuredWidth()) / 2, r52);
    L20:
        if (r122 != 16) goto L22;
        int r123 = Math.max((r3 - r13.getMeasuredHeight()) / 2, r72);
    L29:
        int r143 = r142 + r8;
        r13.layout(r143, r123, r13.getMeasuredWidth() + r143, r123 + r13.getMeasuredHeight());
        r11 = r11 + 1;
        goto L30
    L22:
        if (r122 != 48) goto L24;
        r123 = r72;
        r72 = r13.getMeasuredHeight() + r72;
        goto L29
    L24:
        if (r122 == 80) goto L26;
        r123 = r72;
        goto L29
    L26:
        r123 = (r3 - r10) - r13.getMeasuredHeight();
        r10 = r10 + r13.getMeasuredHeight();
        goto L29
    L12:
        if (r14 != 3) goto L14;
        r142 = r52;
        r52 = r13.getMeasuredWidth() + r52;
        goto L20
    L14:
        if (r14 == 5) goto L16;
        r142 = r52;
        goto L20
    L16:
        r142 = (r2 - r6) - r13.getMeasuredWidth();
        r6 = r6 + r13.getMeasuredWidth();
    L30:
        r42 = r42 + 1;
        goto L4
    L31:
        int r24 = (r2 - r52) - r6;
        int r43 = 0;
    L32:
        if (r43 >= r1) goto L44;
        View r62 = getChildAt(r43);
        if (r62.getVisibility() == 8) goto L43;
        LayoutParams r82 = (LayoutParams) r62.getLayoutParams();
        if (r82.isDecor == true) goto L43;
        ItemInfo r9 = infoForChild(r62);
        if (r9 == null) goto L43;
        float r132 = r24;
        int r92 = ((int) (r9.offset * r132)) + r52;
        if (r82.needsMeasure == false) goto L42;
        r82.needsMeasure = false;
        r62.measure(View.MeasureSpec.makeMeasureSpec((int) (r132 * r82.widthFactor), 1073741824), View.MeasureSpec.makeMeasureSpec((r3 - r72) - r10, 1073741824));
    L42:
        r62.layout(r92, r72, r62.getMeasuredWidth() + r92, r62.getMeasuredHeight() + r72);
    L43:
        r43 = r43 + 1;
        goto L32
    L44:
        this.mTopPageBounds = r72;
        this.mBottomPageBounds = r3 - r10;
        this.mDecorChildCount = r11;
        if (this.mFirstLayout == false) goto L47;
        boolean r25 = false;
        scrollToItem(this.mCurItem, false, 0, false);
    L48:
        this.mFirstLayout = r25;
        return;
    L47:
        r25 = false;
        goto L48
    }

    @Override
    public void computeScroll() {
        this.mIsScrollStarted = true;
        if (this.mScroller.isFinished() == false) goto L5;
    L14:
        completeScroll(true);
        return;
    L5:
        if (this.mScroller.computeScrollOffset() == false) goto L14;
        int r0 = getScrollX();
        int r1 = getScrollY();
        int r2 = this.mScroller.getCurrX();
        int r3 = this.mScroller.getCurrY();
        if (r0 != r2) goto L9;
        if (r1 != r3) goto L9;
    L12:
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    L9:
        scrollTo(r2, r3);
        if (pageScrolled(r2) == true) goto L12;
        this.mScroller.abortAnimation();
        scrollTo(0, r3);
        goto L12
    }

    private boolean pageScrolled(int r8) {
        if (this.mItems.size() == 0) goto L5;
        ItemInfo r0 = infoForCurrentScrollPosition();
        int r3 = getClientWidth();
        int r4 = this.mPageMargin;
        int r5 = r3 + r4;
        float r32 = r3;
        int r6 = r0.position;
        float r82 = ((r8 / r32) - r0.offset) / (r0.widthFactor + (r4 / r32));
        this.mCalledSuper = false;
        onPageScrolled(r6, r82, (int) (r5 * r82));
        if (this.mCalledSuper == false) goto L17;
        return true;
    L17:
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    L5:
        if (this.mFirstLayout == false) goto L7;
        return false;
    L7:
        this.mCalledSuper = false;
        onPageScrolled(0, 0.0f, 0);
        if (this.mCalledSuper == false) goto L11;
        return false;
    L11:
        throw new IllegalStateException("onPageScrolled did not call superclass implementation");
    }

    @CallSuper
    protected void onPageScrolled(int r13, float r14, int r15) {
        int r1 = 0;
        if (this.mDecorChildCount <= 0) goto L25;
        int r0 = getScrollX();
        int r3 = getPaddingLeft();
        int r4 = getPaddingRight();
        int r5 = getWidth();
        int r6 = getChildCount();
        int r7 = r4;
        int r42 = r3;
        int r32 = 0;
    L5:
        if (r32 >= r6) goto L25;
        View r8 = getChildAt(r32);
        LayoutParams r9 = (LayoutParams) r8.getLayoutParams();
        if (r9.isDecor == false) goto L24;
        int r92 = r9.gravity & 7;
        if (r92 != 1) goto L12;
        int r93 = Math.max((r5 - r8.getMeasuredWidth()) / 2, r42);
    L19:
        int r11 = r93;
        int r94 = r42;
        r42 = r11;
    L20:
        int r43 = (r42 + r0) - r8.getLeft();
        if (r43 == 0) goto L23;
        r8.offsetLeftAndRight(r43);
    L23:
        r42 = r94;
        goto L24
    L12:
        if (r92 != 3) goto L14;
        r94 = r8.getWidth() + r42;
        goto L20
    L14:
        if (r92 == 5) goto L16;
        r94 = r42;
        goto L20
    L16:
        r93 = (r5 - r7) - r8.getMeasuredWidth();
        r7 = r7 + r8.getMeasuredWidth();
    L24:
        r32 = r32 + 1;
    L25:
        dispatchOnPageScrolled(r13, r14, r15);
        if (this.mPageTransformer == null) goto L34;
        int r132 = getScrollX();
        int r142 = getChildCount();
    L28:
        if (r1 >= r142) goto L34;
        View r152 = getChildAt(r1);
        if (((LayoutParams) r152.getLayoutParams()).isDecor == true) goto L33;
        this.mPageTransformer.transformPage(r152, (r152.getLeft() - r132) / getClientWidth());
    L33:
        r1 = r1 + 1;
    L34:
        this.mCalledSuper = true;
    }

    private void dispatchOnPageScrolled(int r4, float r5, int r6) {
        OnPageChangeListener r0 = this.mOnPageChangeListener;
        if (r0 == null) goto L5;
        r0.onPageScrolled(r4, r5, r6);
    L5:
        List<OnPageChangeListener> r02 = this.mOnPageChangeListeners;
        if (r02 == null) goto L13;
        int r1 = 0;
        int r03 = r02.size();
    L8:
        if (r1 >= r03) goto L13;
        OnPageChangeListener r2 = this.mOnPageChangeListeners.get(r1);
        if (r2 == null) goto L12;
        r2.onPageScrolled(r4, r5, r6);
    L12:
        r1 = r1 + 1;
    L13:
        OnPageChangeListener r04 = this.mInternalPageChangeListener;
        if (r04 == null) goto L20;
        r04.onPageScrolled(r4, r5, r6);
        return;
    }

    private void dispatchOnPageSelected(int r4) {
        OnPageChangeListener r0 = this.mOnPageChangeListener;
        if (r0 == null) goto L5;
        r0.onPageSelected(r4);
    L5:
        List<OnPageChangeListener> r02 = this.mOnPageChangeListeners;
        if (r02 == null) goto L13;
        int r1 = 0;
        int r03 = r02.size();
    L8:
        if (r1 >= r03) goto L13;
        OnPageChangeListener r2 = this.mOnPageChangeListeners.get(r1);
        if (r2 == null) goto L12;
        r2.onPageSelected(r4);
    L12:
        r1 = r1 + 1;
    L13:
        OnPageChangeListener r04 = this.mInternalPageChangeListener;
        if (r04 == null) goto L20;
        r04.onPageSelected(r4);
        return;
    }

    private void dispatchOnScrollStateChanged(int r4) {
        OnPageChangeListener r0 = this.mOnPageChangeListener;
        if (r0 == null) goto L5;
        r0.onPageScrollStateChanged(r4);
    L5:
        List<OnPageChangeListener> r02 = this.mOnPageChangeListeners;
        if (r02 == null) goto L13;
        int r1 = 0;
        int r03 = r02.size();
    L8:
        if (r1 >= r03) goto L13;
        OnPageChangeListener r2 = this.mOnPageChangeListeners.get(r1);
        if (r2 == null) goto L12;
        r2.onPageScrollStateChanged(r4);
    L12:
        r1 = r1 + 1;
    L13:
        OnPageChangeListener r04 = this.mInternalPageChangeListener;
        if (r04 == null) goto L20;
        r04.onPageScrollStateChanged(r4);
        return;
    }

    private void completeScroll(boolean r8) {
        if (this.mScrollState != 2) goto L5;
        boolean r0 = true;
    L6:
        if (r0 == false) goto L15;
        setScrollingCacheEnabled(false);
        if ((!this.mScroller.isFinished()) == false) goto L15;
        this.mScroller.abortAnimation();
        int r3 = getScrollX();
        int r4 = getScrollY();
        int r5 = this.mScroller.getCurrX();
        int r6 = this.mScroller.getCurrY();
        if (r3 != r5) goto L12;
        if (r4 == r6) goto L15;
    L12:
        scrollTo(r5, r6);
        if (r5 == r3) goto L15;
        pageScrolled(r5);
    L15:
        this.mPopulatePending = false;
        boolean r32 = r0;
        int r02 = 0;
    L17:
        if (r02 >= this.mItems.size()) goto L22;
        ItemInfo r42 = this.mItems.get(r02);
        if (r42.scrolling == false) goto L21;
        r42.scrolling = false;
        r32 = true;
    L21:
        r02 = r02 + 1;
        goto L17
    L22:
        if (r32 == false) goto L30;
        if (r8 == false) goto L25;
        ViewCompat.postOnAnimation(this, this.mEndScrollRunnable);
        return;
    L25:
        this.mEndScrollRunnable.run();
        return;
    L30:
        return;
    L5:
        r0 = false;
        goto L6
    }

    private boolean isGutterDrag(float r4, float r5) {
        if (r4 >= this.mGutterSize) goto L7;
        if (r5 <= 0.0f) goto L7;
    L10:
        return true;
    L7:
        if (r4 > (getWidth() - this.mGutterSize)) goto L9;
    L11:
        return false;
    L9:
        if (r5 >= 0.0f) goto L11;
        goto L10
    }

    private void enableLayers(boolean r7) {
        int r0 = getChildCount();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L8;
        if (r7 == false) goto L6;
        int r3 = this.mPageTransformerLayerType;
    L7:
        getChildAt(r2).setLayerType(r3, null);
        r2 = r2 + 1;
        goto L3
    L6:
        r3 = 0;
        goto L7
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r16) {
        int r0 = r16.getAction() & 255;
        if (r0 != 3) goto L5;
    L60:
        resetTouch();
        return false;
    L5:
        if (r0 == 1) goto L60;
        if (r0 == 0) goto L15;
        if (this.mIsBeingDragged == false) goto L12;
        return true;
    L12:
        if (this.mIsUnableToDrag == false) goto L15;
        return false;
    L15:
        if (r0 == 0) goto L49;
        if (r0 != 2) goto L18;
        int r02 = this.mActivePointerId;
        if (r02 == (-1)) goto L56;
        int r03 = r16.findPointerIndex(r02);
        float r10 = r16.getX(r03);
        float r1 = r10 - this.mLastMotionX;
        float r11 = Math.abs(r1);
        float r12 = r16.getY(r03);
        float r13 = Math.abs(r12 - this.mInitialMotionY);
        if (r1 == 0.0f) goto L33;
        if (isGutterDrag(this.mLastMotionX, r1) == true) goto L33;
        if (canScroll(this, false, (int) r1, (int) r10, (int) r12) == false) goto L33;
        this.mLastMotionX = r10;
        this.mLastMotionY = r12;
        this.mIsUnableToDrag = true;
        return false;
    L33:
        if (r11 <= this.mTouchSlop) goto L42;
        if ((r11 * 0.5f) <= r13) goto L42;
        this.mIsBeingDragged = true;
        requestParentDisallowInterceptTouchEvent(true);
        setScrollState(1);
        if (r1 <= 0.0f) goto L39;
        float r04 = this.mInitialMotionX + this.mTouchSlop;
    L40:
        this.mLastMotionX = r04;
        this.mLastMotionY = r12;
        setScrollingCacheEnabled(true);
    L45:
        if (this.mIsBeingDragged == false) goto L56;
        if (performDrag(r10) == false) goto L56;
        ViewCompat.postInvalidateOnAnimation(this);
        goto L56
    L39:
        r04 = this.mInitialMotionX - this.mTouchSlop;
    L42:
        if (r13 <= this.mTouchSlop) goto L45;
        this.mIsUnableToDrag = true;
    L56:
        if (this.mVelocityTracker != null) goto L58;
        this.mVelocityTracker = VelocityTracker.obtain();
    L58:
        this.mVelocityTracker.addMovement(r16);
        return this.mIsBeingDragged;
    L18:
        if (r0 != 6) goto L56;
        onSecondaryPointerUp(r16);
        goto L56
    L49:
        float r05 = r16.getX();
        this.mInitialMotionX = r05;
        this.mLastMotionX = r05;
        float r06 = r16.getY();
        this.mInitialMotionY = r06;
        this.mLastMotionY = r06;
        this.mActivePointerId = r16.getPointerId(0);
        this.mIsUnableToDrag = false;
        this.mIsScrollStarted = true;
        this.mScroller.computeScrollOffset();
        if (this.mScrollState == 2) goto L52;
    L54:
        completeScroll(false);
        this.mIsBeingDragged = false;
        goto L56
    L52:
        if (Math.abs(this.mScroller.getFinalX() - this.mScroller.getCurrX()) <= this.mCloseEnough) goto L54;
        this.mScroller.abortAnimation();
        this.mPopulatePending = false;
        populate();
        this.mIsBeingDragged = true;
        requestParentDisallowInterceptTouchEvent(true);
        setScrollState(1);
        goto L56
    }

    @Override
    public boolean onTouchEvent(MotionEvent r8) {
        if (this.mFakeDragging == false) goto L5;
        return true;
    L5:
        boolean r2 = false;
        if (r8.getAction() == 0) goto L8;
    L10:
        PagerAdapter r0 = this.mAdapter;
        if (r0 != null) goto L13;
    L61:
        return false;
    L13:
        if (r0.getCount() == 0) goto L61;
        if (this.mVelocityTracker != null) goto L18;
        this.mVelocityTracker = VelocityTracker.obtain();
    L18:
        this.mVelocityTracker.addMovement(r8);
        int r02 = r8.getAction() & 255;
        if (r02 == 0) goto L57;
        if (r02 == 1) goto L55;
        if (r02 == 2) goto L36;
        if (r02 == 3) goto L33;
        if (r02 != 5) goto L28;
        int r03 = r8.getActionIndex();
        this.mLastMotionX = r8.getX(r03);
        this.mActivePointerId = r8.getPointerId(r03);
    L58:
        if (r2 == false) goto L60;
        ViewCompat.postInvalidateOnAnimation(this);
    L60:
        return true;
    L28:
        if (r02 != 6) goto L58;
        onSecondaryPointerUp(r8);
        this.mLastMotionX = r8.getX(r8.findPointerIndex(this.mActivePointerId));
        goto L58
    L33:
        if (this.mIsBeingDragged == false) goto L58;
        scrollToItem(this.mCurItem, true, 0, false);
        r2 = resetTouch();
        goto L58
    L36:
        if (this.mIsBeingDragged == true) goto L52;
        int r04 = r8.findPointerIndex(this.mActivePointerId);
        if (r04 != (-1)) goto L40;
        r2 = resetTouch();
        goto L58
    L40:
        float r3 = r8.getX(r04);
        float r4 = Math.abs(r3 - this.mLastMotionX);
        float r05 = r8.getY(r04);
        float r5 = Math.abs(r05 - this.mLastMotionY);
        if (r4 <= this.mTouchSlop) goto L52;
        if (r4 <= r5) goto L52;
        this.mIsBeingDragged = true;
        requestParentDisallowInterceptTouchEvent(true);
        float r42 = this.mInitialMotionX;
        if ((r3 - r42) <= 0.0f) goto L47;
        float r43 = r42 + this.mTouchSlop;
    L48:
        this.mLastMotionX = r43;
        this.mLastMotionY = r05;
        setScrollState(1);
        setScrollingCacheEnabled(true);
        ViewParent r06 = getParent();
        if (r06 == null) goto L52;
        r06.requestDisallowInterceptTouchEvent(true);
        goto L52
    L47:
        r43 = r42 - this.mTouchSlop;
    L52:
        if (this.mIsBeingDragged == false) goto L58;
        r2 = false | performDrag(r8.getX(r8.findPointerIndex(this.mActivePointerId)));
        goto L58
    L55:
        if (this.mIsBeingDragged == false) goto L58;
        VelocityTracker r07 = this.mVelocityTracker;
        r07.computeCurrentVelocity(1000, this.mMaximumVelocity);
        int r08 = (int) r07.getXVelocity(this.mActivePointerId);
        this.mPopulatePending = true;
        int r22 = getClientWidth();
        int r32 = getScrollX();
        ItemInfo r44 = infoForCurrentScrollPosition();
        float r23 = r22;
        setCurrentItemInternal(determineTargetPage(r44.position, ((r32 / r23) - r44.offset) / (r44.widthFactor + (this.mPageMargin / r23)), r08, (int) (r8.getX(r8.findPointerIndex(this.mActivePointerId)) - this.mInitialMotionX)), true, true, r08);
        r2 = resetTouch();
        goto L58
    L57:
        this.mScroller.abortAnimation();
        this.mPopulatePending = false;
        populate();
        float r09 = r8.getX();
        this.mInitialMotionX = r09;
        this.mLastMotionX = r09;
        float r010 = r8.getY();
        this.mInitialMotionY = r010;
        this.mLastMotionY = r010;
        this.mActivePointerId = r8.getPointerId(0);
        goto L58
    L8:
        if (r8.getEdgeFlags() == 0) goto L10;
        return false;
    }

    private boolean resetTouch() {
        this.mActivePointerId = -1;
        endDrag();
        this.mLeftEdge.onRelease();
        this.mRightEdge.onRelease();
        if (this.mLeftEdge.isFinished() == false) goto L5;
    L8:
        return true;
    L5:
        if (this.mRightEdge.isFinished() == true) goto L8;
        return false;
    }

    private void requestParentDisallowInterceptTouchEvent(boolean r2) {
        ViewParent r0 = getParent();
        if (r0 == null) goto L6;
        r0.requestDisallowInterceptTouchEvent(r2);
        return;
    }

    private boolean performDrag(float r10) {
        float r0 = this.mLastMotionX - r10;
        this.mLastMotionX = r10;
        float r102 = getScrollX() + r0;
        float r02 = getClientWidth();
        float r1 = this.mFirstOffset * r02;
        float r2 = this.mLastOffset * r02;
        boolean r4 = false;
        ItemInfo r3 = this.mItems.get(0);
        ArrayList<ItemInfo> r5 = this.mItems;
        ItemInfo r52 = r5.get(r5.size() - 1);
        if (r3.position == 0) goto L5;
        r1 = r3.offset * r02;
        boolean r32 = false;
    L7:
        if (r52.position == (this.mAdapter.getCount() - 1)) goto L9;
        r2 = r52.offset * r02;
        boolean r53 = false;
    L11:
        if (r102 >= r1) goto L16;
        if (r32 == false) goto L14;
        this.mLeftEdge.onPull(Math.abs(r1 - r102) / r02);
        r4 = true;
    L14:
        r102 = r1;
    L20:
        int r12 = (int) r102;
        this.mLastMotionX += r102 - r12;
        scrollTo(r12, getScrollY());
        pageScrolled(r12);
        return r4;
    L16:
        if (r102 <= r2) goto L20;
        if (r53 == false) goto L19;
        this.mRightEdge.onPull(Math.abs(r102 - r2) / r02);
        r4 = true;
    L19:
        r102 = r2;
        goto L20
    L9:
        r53 = true;
        goto L11
    L5:
        r32 = true;
        goto L7
    }

    private ItemInfo infoForCurrentScrollPosition() {
        int r0 = getClientWidth();
        if (r0 <= 0) goto L5;
        float r2 = getScrollX() / r0;
    L6:
        if (r0 <= 0) goto L8;
        float r02 = this.mPageMargin / r0;
    L9:
        ItemInfo r3 = null;
        int r1 = 0;
        boolean r5 = true;
        int r7 = -1;
        float r8 = 0.0f;
        float r9 = 0.0f;
    L11:
        if (r1 >= this.mItems.size()) goto L30;
        ItemInfo r10 = this.mItems.get(r1);
        if (r5 == true) goto L17;
        int r72 = r7 + 1;
        if (r10.position == r72) goto L17;
        r10 = this.mTempItem;
        r10.offset = (r8 + r9) + r02;
        r10.position = r72;
        r10.widthFactor = this.mAdapter.getPageWidth(r10.position);
        r1 = r1 - 1;
    L17:
        r8 = r10.offset;
        float r73 = (r10.widthFactor + r8) + r02;
        if (r5 == true) goto L24;
        if (r2 >= r8) goto L24;
        return r3;
    L24:
        if (r2 < r73) goto L29;
        if (r1 == (this.mItems.size() - 1)) goto L29;
        r7 = r10.position;
        r9 = r10.widthFactor;
        r1 = r1 + 1;
        r3 = r10;
        r5 = false;
    L29:
        return r10;
    L30:
        return r3;
    L8:
        r02 = 0.0f;
        goto L9
    L5:
        r2 = 0.0f;
        goto L6
    }

    private int determineTargetPage(int r2, float r3, int r4, int r5) {
        if (Math.abs(r5) <= this.mFlingDistance) goto L10;
        if (Math.abs(r4) <= this.mMinimumVelocity) goto L10;
        if (r4 > 0) goto L15;
        r2 = r2 + 1;
    L15:
        if (this.mItems.size() > 0) goto L17;
        return r2;
    L17:
        return Math.max(this.mItems.get(0).position, Math.min(r2, this.mItems.get(r4.size() - 1).position));
    L10:
        if (r2 < this.mCurItem) goto L12;
        float r42 = 0.4f;
    L13:
        r2 = r2 + ((int) (r3 + r42));
        goto L15
    L12:
        r42 = 0.6f;
        goto L13
    }

    @Override
    public void draw(Canvas r8) {
        super.draw(r8);
        int r0 = getOverScrollMode();
        boolean r1 = false;
        if (r0 == 0) goto L13;
        if (r0 != 1) goto L11;
        PagerAdapter r02 = this.mAdapter;
        if (r02 == null) goto L11;
        if (r02.getCount() > 1) goto L13;
    L11:
        this.mLeftEdge.finish();
        this.mRightEdge.finish();
    L18:
        if (r1 == false) goto L21;
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    L21:
        return;
    L13:
        if (this.mLeftEdge.isFinished() == true) goto L16;
        int r03 = r8.save();
        int r2 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        int r3 = getWidth();
        r8.rotate(270.0f);
        r8.translate((-r2) + getPaddingTop(), this.mFirstOffset * r3);
        this.mLeftEdge.setSize(r2, r3);
        r1 = false | this.mLeftEdge.draw(r8);
        r8.restoreToCount(r03);
    L16:
        if (this.mRightEdge.isFinished() == true) goto L18;
        int r04 = r8.save();
        int r22 = getWidth();
        int r32 = (getHeight() - getPaddingTop()) - getPaddingBottom();
        r8.rotate(90.0f);
        r8.translate(-getPaddingTop(), (-(this.mLastOffset + 1.0f)) * r22);
        this.mRightEdge.setSize(r32, r22);
        r1 = r1 | this.mRightEdge.draw(r8);
        r8.restoreToCount(r04);
        goto L18
    }

    @Override
    protected void onDraw(Canvas r18) {
        super.onDraw(r18);
        if (this.mPageMargin > 0) goto L5;
        return;
    L5:
        if (this.mMarginDrawable != null) goto L7;
        return;
    L7:
        if (this.mItems.size() > 0) goto L9;
        return;
    L9:
        if (this.mAdapter == null) goto L35;
        int r1 = getScrollX();
        float r4 = getWidth();
        float r3 = this.mPageMargin / r4;
        int r6 = 0;
        ItemInfo r5 = this.mItems.get(0);
        float r7 = r5.offset;
        int r8 = this.mItems.size();
        int r9 = r5.position;
        int r10 = this.mItems.get(r8 - 1).position;
    L11:
        if (r9 >= r10) goto L36;
    L13:
        if (r9 <= r5.position) goto L17;
        if (r6 >= r8) goto L17;
        r6 = r6 + 1;
        r5 = this.mItems.get(r6);
    L17:
        if (r9 != r5.position) goto L19;
        float r72 = (r5.offset + r5.widthFactor) * r4;
        float r11 = (r5.offset + r5.widthFactor) + r3;
    L21:
        if ((this.mPageMargin + r72) <= r1) goto L23;
        float r16 = r3;
        this.mMarginDrawable.setBounds(Math.round(r72), this.mTopPageBounds, Math.round(this.mPageMargin + r72), this.mBottomPageBounds);
        this.mMarginDrawable.draw(r18);
    L25:
        if (r72 > (r1 + r2)) goto L37;
        r9 = r9 + 1;
        r7 = r11;
        r3 = r16;
        goto L11
    L37:
        return;
    L23:
        r16 = r3;
        goto L25
    L19:
        float r112 = this.mAdapter.getPageWidth(r9);
        float r12 = (r7 + r112) * r4;
        r11 = r7 + (r112 + r3);
        r72 = r12;
        goto L21
    L36:
        return;
    }

    public boolean beginFakeDrag() {
        if (this.mIsBeingDragged == false) goto L6;
        return false;
    L6:
        this.mFakeDragging = true;
        setScrollState(1);
        this.mLastMotionX = 0.0f;
        this.mInitialMotionX = 0.0f;
        VelocityTracker r1 = this.mVelocityTracker;
        if (r1 != null) goto L9;
        this.mVelocityTracker = VelocityTracker.obtain();
    L10:
        long r10 = SystemClock.uptimeMillis();
        MotionEvent r12 = MotionEvent.obtain(r10, r10, 0, 0.0f, 0.0f, 0);
        this.mVelocityTracker.addMovement(r12);
        r12.recycle();
        this.mFakeDragBeginTime = r10;
        return true;
    L9:
        r1.clear();
        goto L10
    }

    public void endFakeDrag() {
        if (this.mFakeDragging == false) goto L10;
        if (this.mAdapter == null) goto L7;
        VelocityTracker r0 = this.mVelocityTracker;
        r0.computeCurrentVelocity(1000, this.mMaximumVelocity);
        int r02 = (int) r0.getXVelocity(this.mActivePointerId);
        this.mPopulatePending = true;
        int r2 = getClientWidth();
        int r3 = getScrollX();
        ItemInfo r4 = infoForCurrentScrollPosition();
        setCurrentItemInternal(determineTargetPage(r4.position, ((r3 / r2) - r4.offset) / r4.widthFactor, r02, (int) (this.mLastMotionX - this.mInitialMotionX)), true, true, r02);
    L7:
        endDrag();
        this.mFakeDragging = false;
        return;
    L10:
        throw new IllegalStateException("No fake drag in progress. Call beginFakeDrag first.");
    }

    public void fakeDragBy(float r11) {
        if (this.mFakeDragging == false) goto L22;
        if (this.mAdapter != null) goto L7;
        return;
    L7:
        this.mLastMotionX += r11;
        float r0 = getScrollX() - r11;
        float r112 = getClientWidth();
        float r1 = this.mFirstOffset * r112;
        float r2 = this.mLastOffset * r112;
        ItemInfo r3 = this.mItems.get(0);
        ItemInfo r4 = this.mItems.get(r4.size() - 1);
        if (r3.position == 0) goto L11;
        r1 = r3.offset * r112;
    L11:
        if (r4.position == (this.mAdapter.getCount() - 1)) goto L14;
        r2 = r4.offset * r112;
    L14:
        if (r0 >= r1) goto L17;
        r0 = r1;
    L19:
        int r12 = (int) r0;
        this.mLastMotionX += r0 - r12;
        scrollTo(r12, getScrollY());
        pageScrolled(r12);
        MotionEvent r113 = MotionEvent.obtain(this.mFakeDragBeginTime, SystemClock.uptimeMillis(), 2, this.mLastMotionX, 0.0f, 0);
        this.mVelocityTracker.addMovement(r113);
        r113.recycle();
        return;
    L17:
        if (r0 <= r2) goto L19;
        r0 = r2;
        goto L19
    L22:
        throw new IllegalStateException("No fake drag in progress. Call beginFakeDrag first.");
    }

    public boolean isFakeDragging() {
        return this.mFakeDragging;
    }

    private void onSecondaryPointerUp(MotionEvent r4) {
        int r0 = r4.getActionIndex();
        if (r4.getPointerId(r0) != this.mActivePointerId) goto L11;
        if (r0 != 0) goto L6;
        int r02 = 1;
    L7:
        this.mLastMotionX = r4.getX(r02);
        this.mActivePointerId = r4.getPointerId(r02);
        VelocityTracker r42 = this.mVelocityTracker;
        if (r42 == null) goto L12;
        r42.clear();
        return;
    L12:
        return;
    L6:
        r02 = 0;
        goto L7
    }

    private void endDrag() {
        this.mIsBeingDragged = false;
        this.mIsUnableToDrag = false;
        VelocityTracker r0 = this.mVelocityTracker;
        if (r0 == null) goto L6;
        r0.recycle();
        this.mVelocityTracker = null;
        return;
    }

    private void setScrollingCacheEnabled(boolean r2) {
        if (this.mScrollingCacheEnabled == r2) goto L6;
        this.mScrollingCacheEnabled = r2;
        return;
    }

    @Override
    public boolean canScrollHorizontally(int r5) {
        if (this.mAdapter != null) goto L5;
        return false;
    L5:
        int r0 = getClientWidth();
        int r2 = getScrollX();
        if (r5 < 0) goto L8;
        if (r5 > 0) goto L13;
        return false;
    L13:
        if (r2 >= ((int) (r0 * this.mLastOffset))) goto L18;
        return true;
    L18:
        return false;
    L8:
        if (r2 <= ((int) (r0 * this.mFirstOffset))) goto L16;
        return true;
    L16:
        return false;
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
    L22:
        return false;
    L20:
        if (r13.canScrollHorizontally(-r15) == false) goto L22;
        return true;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent r2) {
        if (super.dispatchKeyEvent(r2) == false) goto L5;
    L8:
        return true;
    L5:
        if (executeKeyEvent(r2) == true) goto L8;
        return false;
    }

    public boolean executeKeyEvent(@NonNull KeyEvent r4) {
        if (r4.getAction() != 0) goto L25;
        int r0 = r4.getKeyCode();
        if (r0 == 21) goto L22;
        if (r0 == 22) goto L18;
        if (r0 != 61) goto L25;
        if (r4.hasNoModifiers() == false) goto L15;
        return arrowScroll(2);
    L15:
        if (r4.hasModifiers(1) == false) goto L25;
        return arrowScroll(1);
    L18:
        if (r4.hasModifiers(2) == false) goto L30;
        return pageRight();
    L30:
        return arrowScroll(66);
    L22:
        if (r4.hasModifiers(2) == false) goto L32;
        return pageLeft();
    L32:
        return arrowScroll(17);
    L25:
        return false;
    }

    public boolean arrowScroll(int r7) {
        View r0 = findFocus();
        boolean r2 = false;
        View r3 = null;
        if (r0 == this) goto L20;
        if (r0 == null) goto L19;
        ViewParent r4 = r0.getParent();
    L8:
        if ((r4 instanceof ViewGroup) == false) goto L12;
        if (r4 == this) goto L10;
        r4 = r4.getParent();
        goto L8
    L10:
        boolean r42 = true;
    L13:
        if (r42 == true) goto L19;
        StringBuilder r43 = new StringBuilder();
        r43.append(r0.getClass().getSimpleName());
        ViewParent r02 = r0.getParent();
    L16:
        if ((r02 instanceof ViewGroup) == false) goto L18;
        r43.append(" => ");
        r43.append(r02.getClass().getSimpleName());
        r02 = r02.getParent();
        goto L16
    L18:
        Log.e(TAG, "arrowScroll tried to find focus based on non-child current focused view " + r43.toString());
        goto L20
    L12:
        r42 = false;
    L19:
        r3 = r0;
    L20:
        View r03 = FocusFinder.getInstance().findNextFocus(this, r3, r7);
        if (r03 == null) goto L36;
        if (r03 == r3) goto L36;
        if (r7 != 17) goto L30;
        int r1 = getChildRectInPagerCoordinates(this.mTempRect, r03).left;
        int r22 = getChildRectInPagerCoordinates(this.mTempRect, r3).left;
        if (r3 == null) goto L28;
        if (r1 < r22) goto L28;
        boolean r04 = pageLeft();
    L29:
        r2 = r04;
    L44:
        if (r2 == false) goto L46;
        playSoundEffect(SoundEffectConstants.getContantForFocusDirection(r7));
    L46:
        return r2;
    L28:
        r04 = r03.requestFocus();
        goto L29
    L30:
        if (r7 != 66) goto L44;
        int r12 = getChildRectInPagerCoordinates(this.mTempRect, r03).left;
        int r23 = getChildRectInPagerCoordinates(this.mTempRect, r3).left;
        if (r3 == null) goto L35;
        if (r12 > r23) goto L35;
        r04 = pageRight();
    L35:
        r04 = r03.requestFocus();
    L36:
        if (r7 == 17) goto L43;
        if (r7 == 1) goto L43;
        if (r7 != 66) goto L41;
    L42:
        r2 = pageRight();
        goto L44
    L41:
        if (r7 != 2) goto L44;
    L43:
        r2 = pageLeft();
        goto L44
    }

    private Rect getChildRectInPagerCoordinates(Rect r3, View r4) {
        if (r3 != null) goto L4;
        r3 = new Rect();
    L4:
        if (r4 != null) goto L7;
        r3.set(0, 0, 0, 0);
        return r3;
    L7:
        r3.left = r4.getLeft();
        r3.right = r4.getRight();
        r3.top = r4.getTop();
        r3.bottom = r4.getBottom();
        ViewParent r42 = r4.getParent();
    L9:
        if ((r42 instanceof ViewGroup) == false) goto L12;
        if (r42 == this) goto L12;
        ViewGroup r43 = (ViewGroup) r42;
        r3.left += r43.getLeft();
        r3.right += r43.getRight();
        r3.top += r43.getTop();
        r3.bottom += r43.getBottom();
        r42 = r43.getParent();
    L12:
        return r3;
    }

    boolean pageLeft() {
        int r0 = this.mCurItem;
        if (r0 <= 0) goto L6;
        setCurrentItem(r0 - 1, true);
        return true;
    L6:
        return false;
    }

    boolean pageRight() {
        PagerAdapter r0 = this.mAdapter;
        if (r0 != null) goto L5;
        return false;
    L5:
        if (this.mCurItem >= (r0.getCount() - 1)) goto L10;
        setCurrentItem(this.mCurItem + 1, true);
        return true;
    L10:
        return false;
    }

    @Override
    public void addFocusables(ArrayList<View> r7, int r8, int r9) {
        int r0 = r7.size();
        int r1 = getDescendantFocusability();
        if (r1 == 393216) goto L16;
        int r2 = 0;
    L6:
        if (r2 >= getChildCount()) goto L16;
        View r3 = getChildAt(r2);
        if (r3.getVisibility() != 0) goto L14;
        ItemInfo r4 = infoForChild(r3);
        if (r4 == null) goto L14;
        if (r4.position != this.mCurItem) goto L14;
        r3.addFocusables(r7, r8, r9);
    L14:
        r2 = r2 + 1;
    L16:
        if (r1 != 262144) goto L20;
        if (r0 == r7.size()) goto L20;
        return;
    L20:
        if (isFocusable() == true) goto L23;
        return;
    L23:
        if ((r9 & 1) == 1) goto L25;
    L29:
        if (r7 == null) goto L38;
        r7.add(this);
        return;
    L38:
        return;
    L25:
        if (isInTouchMode() == false) goto L29;
        if (isFocusableInTouchMode() == true) goto L29;
    }

    @Override
    public void addTouchables(ArrayList<View> r5) {
        int r0 = 0;
    L4:
        if (r0 >= getChildCount()) goto L13;
        View r1 = getChildAt(r0);
        if (r1.getVisibility() != 0) goto L12;
        ItemInfo r2 = infoForChild(r1);
        if (r2 == null) goto L12;
        if (r2.position != this.mCurItem) goto L12;
        r1.addTouchables(r5);
    L12:
        r0 = r0 + 1;
        goto L4
    }

    @Override
    protected boolean onRequestFocusInDescendants(int r9, Rect r10) {
        int r0 = getChildCount();
        int r3 = -1;
        if ((r9 & 2) == 0) goto L5;
        r3 = r0;
        int r02 = 0;
        int r1 = 1;
    L6:
        if (r02 == r3) goto L17;
        View r5 = getChildAt(r02);
        if (r5.getVisibility() != 0) goto L16;
        ItemInfo r6 = infoForChild(r5);
        if (r6 == null) goto L16;
        if (r6.position != this.mCurItem) goto L16;
        if (r5.requestFocus(r9, r10) == false) goto L16;
        return true;
    L16:
        r02 = r02 + r1;
        goto L6
    L17:
        return false;
    L5:
        r02 = r0 - 1;
        r1 = -1;
        goto L6
    }

    @Override
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent r7) {
        if (r7.getEventType() == 4096) goto L5;
        int r0 = getChildCount();
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L19;
        View r3 = getChildAt(r2);
        if (r3.getVisibility() != 0) goto L18;
        ItemInfo r4 = infoForChild(r3);
        if (r4 == null) goto L18;
        if (r4.position != this.mCurItem) goto L18;
        if (r3.dispatchPopulateAccessibilityEvent(r7) == false) goto L18;
        return true;
    L18:
        r2 = r2 + 1;
        goto L7
    L19:
        return false;
    L5:
        return super.dispatchPopulateAccessibilityEvent(r7);
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams();
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateDefaultLayoutParams();
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
}
