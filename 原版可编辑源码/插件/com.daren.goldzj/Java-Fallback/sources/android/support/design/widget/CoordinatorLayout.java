package android.support.design.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.support.annotation.AttrRes;
import android.support.annotation.ColorInt;
import android.support.annotation.DrawableRes;
import android.support.annotation.FloatRange;
import android.support.annotation.IdRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.support.annotation.VisibleForTesting;
import android.support.coordinatorlayout.R;
import android.support.v4.content.ContextCompat;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.util.ObjectsCompat;
import android.support.v4.util.Pools;
import android.support.v4.view.AbsSavedState;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.NestedScrollingParent2;
import android.support.v4.view.NestedScrollingParentHelper;
import android.support.v4.view.OnApplyWindowInsetsListener;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.WindowInsetsCompat;
import android.support.v4.widget.DirectedAcyclicGraph;
import android.support.v4.widget.ViewGroupUtils;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.ViewTreeObserver;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class CoordinatorLayout extends ViewGroup implements NestedScrollingParent2 {
    static final Class<?>[] CONSTRUCTOR_PARAMS = null;
    static final int EVENT_NESTED_SCROLL = 1;
    static final int EVENT_PRE_DRAW = 0;
    static final int EVENT_VIEW_REMOVED = 2;
    static final String TAG = "CoordinatorLayout";
    static final Comparator<View> TOP_SORTED_CHILDREN_COMPARATOR = null;
    private static final int TYPE_ON_INTERCEPT = 0;
    private static final int TYPE_ON_TOUCH = 1;
    static final String WIDGET_PACKAGE_NAME = null;
    static final ThreadLocal<Map<String, Constructor<Behavior>>> sConstructors = null;
    private static final Pools.Pool<Rect> sRectPool = null;
    private OnApplyWindowInsetsListener mApplyWindowInsetsListener;
    private View mBehaviorTouchView;
    private final DirectedAcyclicGraph<View> mChildDag;
    private final List<View> mDependencySortedChildren;
    private boolean mDisallowInterceptReset;
    private boolean mDrawStatusBarBackground;
    private boolean mIsAttachedToWindow;
    private int[] mKeylines;
    private WindowInsetsCompat mLastInsets;
    private boolean mNeedsPreDrawListener;
    private final NestedScrollingParentHelper mNestedScrollingParentHelper;
    private View mNestedScrollingTarget;
    ViewGroup.OnHierarchyChangeListener mOnHierarchyChangeListener;
    private OnPreDrawListener mOnPreDrawListener;
    private Paint mScrimPaint;
    private Drawable mStatusBarBackground;
    private final List<View> mTempDependenciesList;
    private final int[] mTempIntPair;
    private final List<View> mTempList1;

    public interface AttachedBehavior {
        @NonNull
        Behavior getBehavior();
    }

    public static abstract class Behavior<V extends View> {
        public boolean getInsetDodgeRect(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull Rect r3) {
            return false;
        }

        @ColorInt
        public int getScrimColor(@NonNull CoordinatorLayout r1, @NonNull V r2) {
            return ViewCompat.MEASURED_STATE_MASK;
        }

        @FloatRange(from = 0.0d, to = 1.0d)
        public float getScrimOpacity(@NonNull CoordinatorLayout r1, @NonNull V r2) {
            return 0.0f;
        }

        public boolean layoutDependsOn(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3) {
            return false;
        }

        @NonNull
        public WindowInsetsCompat onApplyWindowInsets(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull WindowInsetsCompat r3) {
            return r3;
        }

        public void onAttachedToLayoutParams(@NonNull LayoutParams r1) {
        }

        public boolean onDependentViewChanged(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3) {
            return false;
        }

        public void onDependentViewRemoved(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3) {
        }

        public void onDetachedFromLayoutParams() {
        }

        public boolean onInterceptTouchEvent(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull MotionEvent r3) {
            return false;
        }

        public boolean onLayoutChild(@NonNull CoordinatorLayout r1, @NonNull V r2, int r3) {
            return false;
        }

        public boolean onMeasureChild(@NonNull CoordinatorLayout r1, @NonNull V r2, int r3, int r4, int r5, int r6) {
            return false;
        }

        public boolean onNestedFling(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, float r4, float r5, boolean r6) {
            return false;
        }

        public boolean onNestedPreFling(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, float r4, float r5) {
            return false;
        }

        @Deprecated
        public void onNestedPreScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, int r4, int r5, @NonNull int[] r6) {
        }

        @Deprecated
        public void onNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, int r4, int r5, int r6, int r7) {
        }

        @Deprecated
        public void onNestedScrollAccepted(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, @NonNull View r4, int r5) {
        }

        public boolean onRequestChildRectangleOnScreen(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull Rect r3, boolean r4) {
            return false;
        }

        public void onRestoreInstanceState(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull Parcelable r3) {
        }

        @Deprecated
        public boolean onStartNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, @NonNull View r4, int r5) {
            return false;
        }

        @Deprecated
        public void onStopNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3) {
        }

        public boolean onTouchEvent(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull MotionEvent r3) {
            return false;
        }

        public Behavior() {
        }

        public Behavior(Context r1, AttributeSet r2) {
        }

        public boolean blocksInteractionBelow(@NonNull CoordinatorLayout r1, @NonNull V r2) {
            if (getScrimOpacity(r1, r2) <= 0.0f) goto L5;
            return true;
        L5:
            return false;
        }

        public static void setTag(@NonNull View r0, @Nullable Object r1) {
            ((LayoutParams) r0.getLayoutParams()).mBehaviorTag = r1;
        }

        @Nullable
        public static Object getTag(@NonNull View r0) {
            return ((LayoutParams) r0.getLayoutParams()).mBehaviorTag;
        }

        public boolean onStartNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, @NonNull View r4, int r5, int r6) {
            if (r6 == 0) goto L4;
            return false;
        L4:
            return onStartNestedScroll(r1, r2, r3, r4, r5);
        }

        public void onNestedScrollAccepted(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, @NonNull View r4, int r5, int r6) {
            if (r6 != 0) goto L5;
            onNestedScrollAccepted(r1, r2, r3, r4, r5);
            return;
        }

        public void onStopNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, int r4) {
            if (r4 != 0) goto L5;
            onStopNestedScroll(r1, r2, r3);
            return;
        }

        public void onNestedScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, int r4, int r5, int r6, int r7, int r8) {
            if (r8 != 0) goto L5;
            onNestedScroll(r1, r2, r3, r4, r5, r6, r7);
            return;
        }

        public void onNestedPreScroll(@NonNull CoordinatorLayout r1, @NonNull V r2, @NonNull View r3, int r4, int r5, @NonNull int[] r6, int r7) {
            if (r7 != 0) goto L5;
            onNestedPreScroll(r1, r2, r3, r4, r5, r6);
            return;
        }

        @Nullable
        public Parcelable onSaveInstanceState(@NonNull CoordinatorLayout r1, @NonNull V r2) {
            return View.BaseSavedState.EMPTY_STATE;
        }
    }

    @Retention(RetentionPolicy.RUNTIME)
    @Deprecated
    public @interface DefaultBehavior {
        Class<? extends Behavior> value();
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface DispatchChangeEvent {
    }

    private class HierarchyChangeListener implements ViewGroup.OnHierarchyChangeListener {
        final CoordinatorLayout this$0;

        HierarchyChangeListener(CoordinatorLayout r1) {
            this.this$0 = r1;
        }

        @Override
        public void onChildViewAdded(View r2, View r3) {
            if (this.this$0.mOnHierarchyChangeListener == null) goto L6;
            this.this$0.mOnHierarchyChangeListener.onChildViewAdded(r2, r3);
            return;
        }

        @Override
        public void onChildViewRemoved(View r3, View r4) {
            this.this$0.onChildViewsChanged(2);
            if (this.this$0.mOnHierarchyChangeListener == null) goto L6;
            this.this$0.mOnHierarchyChangeListener.onChildViewRemoved(r3, r4);
            return;
        }
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {
        public int anchorGravity;
        public int dodgeInsetEdges;
        public int gravity;
        public int insetEdge;
        public int keyline;
        View mAnchorDirectChild;
        int mAnchorId;
        View mAnchorView;
        Behavior mBehavior;
        boolean mBehaviorResolved;
        Object mBehaviorTag;
        private boolean mDidAcceptNestedScrollNonTouch;
        private boolean mDidAcceptNestedScrollTouch;
        private boolean mDidBlockInteraction;
        private boolean mDidChangeAfterNestedScroll;
        int mInsetOffsetX;
        int mInsetOffsetY;
        final Rect mLastChildRect;

        public LayoutParams(int r1, int r2) {
            super(r1, r2);
            this.mBehaviorResolved = false;
            this.gravity = 0;
            this.anchorGravity = 0;
            this.keyline = -1;
            this.mAnchorId = -1;
            this.insetEdge = 0;
            this.dodgeInsetEdges = 0;
            this.mLastChildRect = new Rect();
        }

        LayoutParams(@NonNull Context r5, @Nullable AttributeSet r6) {
            super(r5, r6);
            this.mBehaviorResolved = false;
            this.gravity = 0;
            this.anchorGravity = 0;
            this.keyline = -1;
            this.mAnchorId = -1;
            this.insetEdge = 0;
            this.dodgeInsetEdges = 0;
            this.mLastChildRect = new Rect();
            TypedArray r2 = r5.obtainStyledAttributes(r6, R.styleable.CoordinatorLayout_Layout);
            this.gravity = r2.getInteger(R.styleable.CoordinatorLayout_Layout_android_layout_gravity, 0);
            this.mAnchorId = r2.getResourceId(R.styleable.CoordinatorLayout_Layout_layout_anchor, -1);
            this.anchorGravity = r2.getInteger(R.styleable.CoordinatorLayout_Layout_layout_anchorGravity, 0);
            this.keyline = r2.getInteger(R.styleable.CoordinatorLayout_Layout_layout_keyline, -1);
            this.insetEdge = r2.getInt(R.styleable.CoordinatorLayout_Layout_layout_insetEdge, 0);
            this.dodgeInsetEdges = r2.getInt(R.styleable.CoordinatorLayout_Layout_layout_dodgeInsetEdges, 0);
            this.mBehaviorResolved = r2.hasValue(R.styleable.CoordinatorLayout_Layout_layout_behavior);
            if (this.mBehaviorResolved == false) goto L5;
            this.mBehavior = CoordinatorLayout.parseBehavior(r5, r6, r2.getString(R.styleable.CoordinatorLayout_Layout_layout_behavior));
        L5:
            r2.recycle();
            Behavior r52 = this.mBehavior;
            if (r52 == null) goto L9;
            r52.onAttachedToLayoutParams(this);
            return;
        }

        public LayoutParams(LayoutParams r2) {
            super(r2);
            this.mBehaviorResolved = false;
            this.gravity = 0;
            this.anchorGravity = 0;
            this.keyline = -1;
            this.mAnchorId = -1;
            this.insetEdge = 0;
            this.dodgeInsetEdges = 0;
            this.mLastChildRect = new Rect();
        }

        public LayoutParams(ViewGroup.MarginLayoutParams r2) {
            super(r2);
            this.mBehaviorResolved = false;
            this.gravity = 0;
            this.anchorGravity = 0;
            this.keyline = -1;
            this.mAnchorId = -1;
            this.insetEdge = 0;
            this.dodgeInsetEdges = 0;
            this.mLastChildRect = new Rect();
        }

        public LayoutParams(ViewGroup.LayoutParams r2) {
            super(r2);
            this.mBehaviorResolved = false;
            this.gravity = 0;
            this.anchorGravity = 0;
            this.keyline = -1;
            this.mAnchorId = -1;
            this.insetEdge = 0;
            this.dodgeInsetEdges = 0;
            this.mLastChildRect = new Rect();
        }

        @IdRes
        public int getAnchorId() {
            return this.mAnchorId;
        }

        public void setAnchorId(@IdRes int r1) {
            invalidateAnchor();
            this.mAnchorId = r1;
        }

        @Nullable
        public Behavior getBehavior() {
            return this.mBehavior;
        }

        public void setBehavior(@Nullable Behavior r2) {
            Behavior r0 = this.mBehavior;
            if (r0 == r2) goto L10;
            if (r0 == null) goto L6;
            r0.onDetachedFromLayoutParams();
        L6:
            this.mBehavior = r2;
            this.mBehaviorTag = null;
            this.mBehaviorResolved = true;
            if (r2 == null) goto L11;
            r2.onAttachedToLayoutParams(this);
            return;
        L11:
            return;
        }

        void setLastChildRect(Rect r2) {
            this.mLastChildRect.set(r2);
        }

        Rect getLastChildRect() {
            return this.mLastChildRect;
        }

        boolean checkAnchorChanged() {
            if (this.mAnchorView == null) goto L5;
        L7:
            return false;
        L5:
            if (this.mAnchorId == (-1)) goto L7;
            return true;
        }

        boolean didBlockInteraction() {
            if (this.mBehavior != null) goto L6;
            this.mDidBlockInteraction = false;
        L6:
            return this.mDidBlockInteraction;
        }

        boolean isBlockingInteractionBelow(CoordinatorLayout r3, View r4) {
            boolean r0 = this.mDidBlockInteraction;
            if (r0 == false) goto L6;
            return true;
        L6:
            Behavior r1 = this.mBehavior;
            if (r1 == null) goto L9;
            boolean r32 = r1.blocksInteractionBelow(r3, r4);
        L10:
            boolean r33 = r32 | r0;
            this.mDidBlockInteraction = r33;
            return r33;
        L9:
            r32 = false;
            goto L10
        }

        void resetTouchBehaviorTracking() {
            this.mDidBlockInteraction = false;
        }

        void resetNestedScroll(int r2) {
            setNestedScrollAccepted(r2, false);
        }

        void setNestedScrollAccepted(int r2, boolean r3) {
            if (r2 != 0) goto L4;
            this.mDidAcceptNestedScrollTouch = r3;
            return;
        L4:
            if (r2 != 1) goto L10;
            this.mDidAcceptNestedScrollNonTouch = r3;
            return;
        }

        boolean isNestedScrollAccepted(int r2) {
            if (r2 == 0) goto L10;
            if (r2 == 1) goto L8;
            return false;
        L8:
            return this.mDidAcceptNestedScrollNonTouch;
        L10:
            return this.mDidAcceptNestedScrollTouch;
        }

        boolean getChangedAfterNestedScroll() {
            return this.mDidChangeAfterNestedScroll;
        }

        void setChangedAfterNestedScroll(boolean r1) {
            this.mDidChangeAfterNestedScroll = r1;
        }

        void resetChangedAfterNestedScroll() {
            this.mDidChangeAfterNestedScroll = false;
        }

        boolean dependsOn(CoordinatorLayout r2, View r3, View r4) {
            if (r4 != this.mAnchorDirectChild) goto L5;
        L12:
            return true;
        L5:
            if (shouldDodge(r4, ViewCompat.getLayoutDirection(r2)) == true) goto L12;
            Behavior r0 = this.mBehavior;
            if (r0 != null) goto L9;
        L11:
            return false;
        L9:
            if (r0.layoutDependsOn(r2, r3, r4) == false) goto L11;
            goto L11
        }

        void invalidateAnchor() {
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
        }

        View findAnchorView(CoordinatorLayout r3, View r4) {
            if (this.mAnchorId != (-1)) goto L7;
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
            return null;
        L7:
            if (this.mAnchorView != null) goto L9;
        L10:
            resolveAnchorView(r4, r3);
        L12:
            return this.mAnchorView;
        L9:
            if (verifyAnchorView(r4, r3) == true) goto L12;
            goto L10
        }

        private void resolveAnchorView(View r5, CoordinatorLayout r6) {
            this.mAnchorView = r6.findViewById(this.mAnchorId);
            View r0 = this.mAnchorView;
            if (r0 == null) goto L28;
            if (r0 == r6) goto L6;
            ViewParent r2 = r0.getParent();
        L12:
            if (r2 == r6) goto L25;
            if (r2 == null) goto L25;
            if (r2 == r5) goto L16;
            if ((r2 instanceof View) == false) goto L24;
            r0 = r2;
        L24:
            r2 = r2.getParent();
            goto L12
        L16:
            if (r6.isInEditMode() == false) goto L20;
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
            return;
        L20:
            throw new IllegalStateException("Anchor must not be a descendant of the anchored view");
        L25:
            this.mAnchorDirectChild = r0;
            return;
        L6:
            if (r6.isInEditMode() == false) goto L10;
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
            return;
        L10:
            throw new IllegalStateException("View can not be anchored to the the parent CoordinatorLayout");
        L28:
            if (r6.isInEditMode() == false) goto L32;
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
            return;
        L32:
            throw new IllegalStateException("Could not find CoordinatorLayout descendant view with id " + r6.getResources().getResourceName(this.mAnchorId) + " to anchor view " + r5);
        }

        private boolean verifyAnchorView(View r5, CoordinatorLayout r6) {
            if (this.mAnchorView.getId() == this.mAnchorId) goto L5;
            return false;
        L5:
            View r0 = this.mAnchorView;
            ViewParent r1 = r0.getParent();
        L6:
            if (r1 == r6) goto L16;
            if (r1 == null) goto L14;
            if (r1 == r5) goto L14;
            if ((r1 instanceof View) == false) goto L13;
            r0 = r1;
        L13:
            r1 = r1.getParent();
        L14:
            this.mAnchorDirectChild = null;
            this.mAnchorView = null;
            return false;
        L16:
            this.mAnchorDirectChild = r0;
            return true;
        }

        private boolean shouldDodge(View r2, int r3) {
            int r22 = GravityCompat.getAbsoluteGravity(((LayoutParams) r2.getLayoutParams()).insetEdge, r3);
            if (r22 != 0) goto L5;
        L7:
            return false;
        L5:
            if ((GravityCompat.getAbsoluteGravity(this.dodgeInsetEdges, r3) & r22) != r22) goto L7;
            return true;
        }
    }

    class OnPreDrawListener implements ViewTreeObserver.OnPreDrawListener {
        final CoordinatorLayout this$0;

        OnPreDrawListener(CoordinatorLayout r1) {
            this.this$0 = r1;
        }

        @Override
        public boolean onPreDraw() {
            this.this$0.onChildViewsChanged(0);
            return true;
        }
    }

    protected static class SavedState extends AbsSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = null;
        SparseArray<Parcelable> behaviorStates;

        public SavedState(Parcel r6, ClassLoader r7) {
            super(r6, r7);
            int r0 = r6.readInt();
            int[] r1 = new int[r0];
            r6.readIntArray(r1);
            Parcelable[] r62 = r6.readParcelableArray(r7);
            this.behaviorStates = new SparseArray(r0);
            int r72 = 0;
        L3:
            if (r72 >= r0) goto L5;
            this.behaviorStates.append(r1[r72], r62[r72]);
            r72 = r72 + 1;
            goto L3
        }

        public SavedState(Parcelable r1) {
            super(r1);
        }

        @Override
        public void writeToParcel(Parcel r6, int r7) {
            super.writeToParcel(r6, r7);
            SparseArray<Parcelable> r0 = this.behaviorStates;
            int r1 = 0;
            if (r0 == null) goto L5;
            int r02 = r0.size();
        L6:
            r6.writeInt(r02);
            int[] r2 = new int[r02];
            Parcelable[] r3 = new Parcelable[r02];
        L7:
            if (r1 >= r02) goto L9;
            r2[r1] = this.behaviorStates.keyAt(r1);
            r3[r1] = this.behaviorStates.valueAt(r1);
            r1 = r1 + 1;
            goto L7
        L9:
            r6.writeIntArray(r2);
            r6.writeParcelableArray(r3, r7);
            return;
        L5:
            r02 = 0;
            goto L6
        }

        static {
            CREATOR = new 1();
        }
    }

    static class ViewElevationComparator implements Comparator<View> {
        ViewElevationComparator() {
        }

        @Override
        public int compare(View r1, View r2) {
            return compare(r1, r2);
        }

        public int compare(View r2, View r3) {
            float r22 = ViewCompat.getZ(r2);
            float r32 = ViewCompat.getZ(r3);
            if (r22 <= r32) goto L7;
            return -1;
        L7:
            if (r22 >= r32) goto L10;
            return 1;
        L10:
            return 0;
        }
    }

    private static int clamp(int r0, int r1, int r2) {
        if (r0 >= r1) goto L4;
        return r1;
    L4:
        if (r0 <= r2) goto L6;
        return r2;
    L6:
        return r0;
    }

    private static int resolveAnchoredChildGravity(int r0) {
        if (r0 != 0) goto L5;
        return 17;
    L5:
        return r0;
    }

    private static int resolveGravity(int r1) {
        if ((r1 & 7) != 0) goto L6;
        r1 = r1 | GravityCompat.START;
    L6:
        if ((r1 & 112) == 0) goto L8;
        return r1;
    L8:
        return r1 | 48;
    }

    private static int resolveKeylineGravity(int r0) {
        if (r0 != 0) goto L5;
        return 8388661;
    L5:
        return r0;
    }

    @Override
    protected ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return generateDefaultLayoutParams();
    }

    @Override
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet r1) {
        return generateLayoutParams(r1);
    }

    @Override
    protected ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams r1) {
        return generateLayoutParams(r1);
    }

    static {
        Package r0 = CoordinatorLayout.class.getPackage();
        if (r0 == null) goto L5;
        String r02 = r0.getName();
    L6:
        WIDGET_PACKAGE_NAME = r02;
        if (Build.VERSION.SDK_INT < 21) goto L9;
        TOP_SORTED_CHILDREN_COMPARATOR = new ViewElevationComparator();
    L10:
        CONSTRUCTOR_PARAMS = new Class[]{Context.class, AttributeSet.class};
        sConstructors = new ThreadLocal();
        sRectPool = new Pools.SynchronizedPool(12);
        return;
    L9:
        TOP_SORTED_CHILDREN_COMPARATOR = null;
        goto L10
    L5:
        r02 = null;
        goto L6
    }

    @NonNull
    private static Rect acquireTempRect() {
        Rect r0 = sRectPool.acquire();
        if (r0 == null) goto L5;
        return r0;
    L5:
        return new Rect();
    }

    private static void releaseTempRect(@NonNull Rect r1) {
        r1.setEmpty();
        sRectPool.release(r1);
    }

    public CoordinatorLayout(@NonNull Context r2) {
        this(r2, null);
    }

    public CoordinatorLayout(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, R.attr.coordinatorLayoutStyle);
    }

    public CoordinatorLayout(@NonNull Context r4, @Nullable AttributeSet r5, @AttrRes int r6) {
        super(r4, r5, r6);
        this.mDependencySortedChildren = new ArrayList();
        this.mChildDag = new DirectedAcyclicGraph();
        this.mTempList1 = new ArrayList();
        this.mTempDependenciesList = new ArrayList();
        this.mTempIntPair = new int[2];
        this.mNestedScrollingParentHelper = new NestedScrollingParentHelper(this);
        int r0 = 0;
        if (r6 != 0) goto L5;
        TypedArray r52 = r4.obtainStyledAttributes(r5, R.styleable.CoordinatorLayout, 0, R.style.Widget_Support_CoordinatorLayout);
    L6:
        int r62 = r52.getResourceId(R.styleable.CoordinatorLayout_keylines, 0);
        if (r62 == 0) goto L11;
        Resources r42 = r4.getResources();
        this.mKeylines = r42.getIntArray(r62);
        float r43 = r42.getDisplayMetrics().density;
        int r63 = this.mKeylines.length;
    L9:
        if (r0 >= r63) goto L11;
        this.mKeylines[r0] = (int) (r1[r0] * r43);
        r0 = r0 + 1;
    L11:
        this.mStatusBarBackground = r52.getDrawable(R.styleable.CoordinatorLayout_statusBarBackground);
        r52.recycle();
        setupForInsets();
        super.setOnHierarchyChangeListener(new HierarchyChangeListener(this));
        return;
    L5:
        r52 = r4.obtainStyledAttributes(r5, R.styleable.CoordinatorLayout, r6, 0);
        goto L6
    }

    @Override
    public void setOnHierarchyChangeListener(ViewGroup.OnHierarchyChangeListener r1) {
        this.mOnHierarchyChangeListener = r1;
    }

    @Override
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        resetTouchBehaviors(false);
        if (this.mNeedsPreDrawListener == false) goto L9;
        if (this.mOnPreDrawListener != null) goto L7;
        this.mOnPreDrawListener = new OnPreDrawListener(this);
    L7:
        getViewTreeObserver().addOnPreDrawListener(this.mOnPreDrawListener);
    L9:
        if (this.mLastInsets == null) goto L11;
    L13:
        this.mIsAttachedToWindow = true;
        return;
    L11:
        if (ViewCompat.getFitsSystemWindows(this) == false) goto L13;
        ViewCompat.requestApplyInsets(this);
        goto L13
    }

    @Override
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        resetTouchBehaviors(false);
        if (this.mNeedsPreDrawListener == true) goto L5;
    L7:
        View r1 = this.mNestedScrollingTarget;
        if (r1 == null) goto L10;
        onStopNestedScroll(r1);
    L10:
        this.mIsAttachedToWindow = false;
        return;
    L5:
        if (this.mOnPreDrawListener == null) goto L7;
        getViewTreeObserver().removeOnPreDrawListener(this.mOnPreDrawListener);
        goto L7
    }

    public void setStatusBarBackground(@Nullable Drawable r3) {
        Drawable r0 = this.mStatusBarBackground;
        if (r0 == r3) goto L21;
        Drawable r1 = null;
        if (r0 == null) goto L7;
        r0.setCallback(null);
    L7:
        if (r3 == null) goto L9;
        r1 = r3.mutate();
    L9:
        this.mStatusBarBackground = r1;
        Drawable r32 = this.mStatusBarBackground;
        if (r32 != null) goto L12;
    L19:
        ViewCompat.postInvalidateOnAnimation(this);
        return;
    L12:
        if (r32.isStateful() == false) goto L14;
        this.mStatusBarBackground.setState(getDrawableState());
    L14:
        DrawableCompat.setLayoutDirection(this.mStatusBarBackground, ViewCompat.getLayoutDirection(this));
        Drawable r33 = this.mStatusBarBackground;
        if (getVisibility() != 0) goto L17;
        boolean r02 = true;
    L18:
        r33.setVisible(r02, false);
        this.mStatusBarBackground.setCallback(this);
        goto L19
    L17:
        r02 = false;
        goto L18
    }

    @Nullable
    public Drawable getStatusBarBackground() {
        return this.mStatusBarBackground;
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        int[] r0 = getDrawableState();
        Drawable r1 = this.mStatusBarBackground;
        boolean r2 = false;
        if (r1 != null) goto L5;
    L7:
        if (r2 == false) goto L10;
        invalidate();
        return;
    L10:
        return;
    L5:
        if (r1.isStateful() == false) goto L7;
        r2 = false | r1.setState(r0);
        goto L7
    }

    @Override
    protected boolean verifyDrawable(Drawable r2) {
        if (super.verifyDrawable(r2) == false) goto L5;
    L8:
        return true;
    L5:
        if (r2 == this.mStatusBarBackground) goto L8;
        return false;
    }

    @Override
    public void setVisibility(int r3) {
        super.setVisibility(r3);
        if (r3 != 0) goto L5;
        boolean r32 = true;
    L6:
        Drawable r1 = this.mStatusBarBackground;
        if (r1 != null) goto L9;
        return;
    L9:
        if (r1.isVisible() == r32) goto L13;
        this.mStatusBarBackground.setVisible(r32, false);
        return;
    L13:
        return;
    L5:
        r32 = false;
        goto L6
    }

    public void setStatusBarBackgroundResource(@DrawableRes int r2) {
        if (r2 == 0) goto L4;
        Drawable r22 = ContextCompat.getDrawable(getContext(), r2);
    L5:
        setStatusBarBackground(r22);
        return;
    L4:
        r22 = null;
        goto L5
    }

    public void setStatusBarBackgroundColor(@ColorInt int r2) {
        setStatusBarBackground(new ColorDrawable(r2));
    }

    final WindowInsetsCompat setWindowInsets(WindowInsetsCompat r4) {
        if (ObjectsCompat.equals(this.mLastInsets, r4) == true) goto L18;
        this.mLastInsets = r4;
        boolean r0 = true;
        if (r4 != null) goto L7;
    L9:
        boolean r2 = false;
    L10:
        this.mDrawStatusBarBackground = r2;
        if (this.mDrawStatusBarBackground == false) goto L13;
    L15:
        r0 = false;
    L16:
        setWillNotDraw(r0);
        WindowInsetsCompat r42 = dispatchApplyWindowInsetsToBehaviors(r4);
        requestLayout();
        return r42;
    L13:
        if (getBackground() != null) goto L15;
    L7:
        if (r4.getSystemWindowInsetTop() <= 0) goto L9;
        r2 = true;
        goto L10
    L18:
        return r4;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public final WindowInsetsCompat getLastWindowInsets() {
        return this.mLastInsets;
    }

    private void resetTouchBehaviors(boolean r14) {
        int r0 = getChildCount();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L12;
        View r3 = getChildAt(r2);
        Behavior r4 = ((LayoutParams) r3.getLayoutParams()).getBehavior();
        if (r4 == null) goto L11;
        long r7 = SystemClock.uptimeMillis();
        MotionEvent r5 = MotionEvent.obtain(r7, r7, 3, 0.0f, 0.0f, 0);
        if (r14 == false) goto L9;
        r4.onInterceptTouchEvent(this, r3, r5);
    L10:
        r5.recycle();
        goto L11
    L9:
        r4.onTouchEvent(this, r3, r5);
    L11:
        r2 = r2 + 1;
        goto L3
    L12:
        int r142 = 0;
    L13:
        if (r142 >= r0) goto L15;
        ((LayoutParams) getChildAt(r142).getLayoutParams()).resetTouchBehaviorTracking();
        r142 = r142 + 1;
        goto L13
    L15:
        this.mBehaviorTouchView = null;
        this.mDisallowInterceptReset = false;
    }

    private void getTopSortedChildren(List<View> r5) {
        r5.clear();
        boolean r0 = isChildrenDrawingOrderEnabled();
        int r1 = getChildCount();
        int r2 = r1 - 1;
    L3:
        if (r2 < 0) goto L8;
        if (r0 == false) goto L6;
        int r3 = getChildDrawingOrder(r1, r2);
    L7:
        r5.add(getChildAt(r3));
        r2 = r2 - 1;
        goto L3
    L6:
        r3 = r2;
        goto L7
    L8:
        Comparator<View> r02 = TOP_SORTED_CHILDREN_COMPARATOR;
        if (r02 == null) goto L15;
        Collections.sort(r5, r02);
        return;
    }

    private boolean performIntercept(MotionEvent r24, int r25) {
        int r3 = r24.getActionMasked();
        List<View> r4 = this.mTempList1;
        getTopSortedChildren(r4);
        int r5 = r4.size();
        MotionEvent r10 = null;
        int r7 = 0;
        boolean r8 = false;
        boolean r9 = false;
    L3:
        if (r7 >= r5) goto L35;
        View r11 = r4.get(r7);
        LayoutParams r12 = (LayoutParams) r11.getLayoutParams();
        Behavior r13 = r12.getBehavior();
        boolean r14 = true;
        if (r8 == true) goto L7;
        if (r9 == true) goto L7;
    L16:
        if (r8 == true) goto L25;
        if (r13 == null) goto L25;
        if (r25 == 0) goto L22;
        if (r25 != 1) goto L23;
        r8 = r13.onTouchEvent(this, r11, r24);
    L23:
        if (r8 == false) goto L25;
        this.mBehaviorTouchView = r11;
        goto L25
    L22:
        r8 = r13.onInterceptTouchEvent(this, r11, r24);
    L25:
        boolean r92 = r12.didBlockInteraction();
        boolean r112 = r12.isBlockingInteractionBelow(this, r11);
        if (r112 == false) goto L29;
        if (r92 == true) goto L29;
    L30:
        if (r112 == false) goto L33;
        if (r14 == false) goto L35;
    L33:
        r9 = r14;
    L34:
        r7 = r7 + 1;
    L29:
        r14 = false;
    L7:
        if (r3 == 0) goto L16;
        if (r13 == null) goto L34;
        if (r10 != null) goto L11;
        long r17 = SystemClock.uptimeMillis();
        r10 = MotionEvent.obtain(r17, r17, 3, 0.0f, 0.0f, 0);
    L11:
        if (r25 == 0) goto L15;
        if (r25 != 1) goto L34;
        r13.onTouchEvent(this, r11, r10);
        goto L34
    L15:
        r13.onInterceptTouchEvent(this, r11, r10);
    L35:
        r4.clear();
        return r8;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent r4) {
        int r0 = r4.getActionMasked();
        if (r0 != 0) goto L5;
        resetTouchBehaviors(true);
    L5:
        boolean r42 = performIntercept(r4, 0);
        if (r0 != 1) goto L8;
    L9:
        resetTouchBehaviors(true);
    L10:
        return r42;
    L8:
        if (r0 != 3) goto L10;
        goto L9
    }

    @Override
    public boolean onTouchEvent(MotionEvent r18) {
        int r2 = r18.getActionMasked();
        if (this.mBehaviorTouchView != null) goto L7;
        boolean r3 = performIntercept(r18, 1);
        if (r3 == true) goto L8;
    L11:
        boolean r6 = false;
    L12:
        MotionEvent r8 = null;
        if (this.mBehaviorTouchView != null) goto L15;
        r6 = r6 | super.onTouchEvent(r18);
    L17:
        if (r8 == null) goto L19;
        r8.recycle();
    L19:
        if (r2 != 1) goto L21;
    L22:
        resetTouchBehaviors(false);
    L23:
        return r6;
    L21:
        if (r2 != 3) goto L23;
    L15:
        if (r3 == false) goto L17;
        long r11 = SystemClock.uptimeMillis();
        r8 = MotionEvent.obtain(r11, r11, 3, 0.0f, 0.0f, 0);
        super.onTouchEvent(r8);
    L8:
        Behavior r62 = ((LayoutParams) this.mBehaviorTouchView.getLayoutParams()).getBehavior();
        if (r62 == null) goto L11;
        r6 = r62.onTouchEvent(this, this.mBehaviorTouchView, r18);
        goto L12
    L7:
        r3 = false;
        goto L8
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r1) {
        super.requestDisallowInterceptTouchEvent(r1);
        if (r1 == true) goto L5;
        return;
    L5:
        if (this.mDisallowInterceptReset == true) goto L9;
        resetTouchBehaviors(false);
        this.mDisallowInterceptReset = true;
        return;
    }

    private int getKeyline(int r5) {
        int[] r0 = this.mKeylines;
        if (r0 != null) goto L6;
        Log.e(TAG, "No keylines defined for " + this + " - attempted index lookup " + r5);
        return 0;
    L6:
        if (r5 >= 0) goto L8;
    L12:
        Log.e(TAG, "Keyline index " + r5 + " out of range for " + this);
        return 0;
    L8:
        if (r5 >= r0.length) goto L12;
        return r0[r5];
    }

    static Behavior parseBehavior(Context r4, AttributeSet r5, String r6) {
        if (TextUtils.isEmpty(r6) == false) goto L7;
        return null;
    L7:
        if (r6.startsWith(".") == false) goto L10;
        r6 = r4.getPackageName() + r6;
    L26:
        Map r0 = sConstructors.get();     // Catch: Exception -> L23
        if (r0 != null) goto L18;
        r0 = new HashMap();     // Catch: Exception -> L23
        sConstructors.set((Map<String, Constructor<Behavior>>) r0);     // Catch: Exception -> L23
    L18:
        Constructor<?> r1 = (Constructor) r0.get(r6);     // Catch: Exception -> L23
        if (r1 != null) goto L21;
        r1 = r4.getClassLoader().loadClass(r6).getConstructor(CONSTRUCTOR_PARAMS);     // Catch: Exception -> L23
        r1.setAccessible(true);     // Catch: Exception -> L23
        r0.put(r6, r1);     // Catch: Exception -> L23
    L21:
        return (Behavior) r1.newInstance(new Object[]{r4, r5});
    L23:
        e = move-exception;
        throw new RuntimeException("Could not inflate Behavior subclass " + r6, e);
    L10:
        if (r6.indexOf(46) >= 0) goto L26;
        if (TextUtils.isEmpty(WIDGET_PACKAGE_NAME) == true) goto L26;
        r6 = WIDGET_PACKAGE_NAME + '.' + r6;
        goto L26
    }

    /* JADX WARN: Multi-variable type inference failed */
    LayoutParams getResolvedLayoutParams(View r7) {
        LayoutParams r0 = (LayoutParams) r7.getLayoutParams();
        if (r0.mBehaviorResolved == false) goto L5;
    L21:
        return r0;
    L5:
        if ((r7 instanceof AttachedBehavior) == false) goto L10;
        Behavior r72 = ((AttachedBehavior) r7).getBehavior();
        if (r72 != null) goto L9;
        Log.e(TAG, "Attached behavior class is null");
    L9:
        r0.setBehavior(r72);
        r0.mBehaviorResolved = true;
        goto L21
    L10:
        Class<?> r73 = r7.getClass();
        DefaultBehavior r1 = null;
    L11:
        if (r73 == null) goto L15;
        r1 = (DefaultBehavior) r73.getAnnotation(DefaultBehavior.class);
        if (r1 != null) goto L15;
        r73 = r73.getSuperclass();
    L15:
        if (r1 != null) goto L22;
    L20:
        r0.mBehaviorResolved = true;
        goto L21
    L22:
        r0.setBehavior(r1.value().getDeclaredConstructor(new Class[0]).newInstance(new Object[0]));     // Catch: Exception -> L18
    L18:
        e = move-exception;
        Log.e(TAG, "Default behavior class " + r1.value().getName() + " could not be instantiated. Did you forget a default constructor?", e);
        goto L20
    }

    private void prepareChildren() {
        this.mDependencySortedChildren.clear();
        this.mChildDag.clear();
        int r0 = getChildCount();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L16;
        View r3 = getChildAt(r2);
        LayoutParams r4 = getResolvedLayoutParams(r3);
        r4.findAnchorView(this, r3);
        this.mChildDag.addNode(r3);
        int r5 = 0;
    L5:
        if (r5 >= r0) goto L15;
        if (r5 == r2) goto L14;
        View r6 = getChildAt(r5);
        if (r4.dependsOn(this, r3, r6) == false) goto L14;
        if (this.mChildDag.contains(r6) == true) goto L13;
        this.mChildDag.addNode(r6);
    L13:
        this.mChildDag.addEdge(r6, r3);
    L14:
        r5 = r5 + 1;
        goto L5
    L15:
        r2 = r2 + 1;
        goto L3
    L16:
        this.mDependencySortedChildren.addAll(this.mChildDag.getSortedList());
        Collections.reverse(this.mDependencySortedChildren);
    }

    void getDescendantRect(View r1, Rect r2) {
        ViewGroupUtils.getDescendantRect(this, r1, r2);
    }

    @Override
    protected int getSuggestedMinimumWidth() {
        return Math.max(super.getSuggestedMinimumWidth(), getPaddingLeft() + getPaddingRight());
    }

    @Override
    protected int getSuggestedMinimumHeight() {
        return Math.max(super.getSuggestedMinimumHeight(), getPaddingTop() + getPaddingBottom());
    }

    public void onMeasureChild(View r1, int r2, int r3, int r4, int r5) {
        measureChildWithMargins(r1, r2, r3, r4, r5);
    }

    @Override
    protected void onMeasure(int r31, int r32) {
        prepareChildren();
        ensurePreDrawListener();
        int r8 = getPaddingLeft();
        int r0 = getPaddingTop();
        int r9 = getPaddingRight();
        int r1 = getPaddingBottom();
        int r10 = ViewCompat.getLayoutDirection(this);
        if (r10 != 1) goto L5;
        boolean r12 = true;
    L6:
        int r13 = View.MeasureSpec.getMode(r31);
        int r14 = View.MeasureSpec.getSize(r31);
        int r15 = View.MeasureSpec.getMode(r32);
        int r16 = View.MeasureSpec.getSize(r32);
        int r17 = r8 + r9;
        int r18 = r0 + r1;
        int r02 = getSuggestedMinimumWidth();
        int r19 = getSuggestedMinimumHeight();
        if (this.mLastInsets != null) goto L9;
    L11:
        boolean r192 = false;
    L12:
        int r6 = this.mDependencySortedChildren.size();
        int r4 = r02;
        int r2 = r19;
        int r3 = 0;
        int r5 = 0;
    L13:
        if (r5 >= r6) goto L49;
        View r20 = this.mDependencySortedChildren.get(r5);
        if (r20.getVisibility() != 8) goto L17;
        int r22 = r5;
        int r29 = r6;
    L48:
        r5 = r22 + 1;
        r6 = r29;
        goto L13
    L17:
        LayoutParams r110 = (LayoutParams) r20.getLayoutParams();
        if (r110.keyline < 0) goto L33;
        if (r13 == 0) goto L33;
        int r03 = getKeyline(r110.keyline);
        int r11 = GravityCompat.getAbsoluteGravity(resolveKeylineGravity(r110.gravity), r10) & 7;
        int r222 = r2;
        if (r11 != 3) goto L24;
        if (r12 == true) goto L24;
    L26:
        int r21 = Math.max(0, (r14 - r9) - r03);
    L35:
        if (r192 == true) goto L37;
    L39:
        int r112 = r31;
        int r23 = r32;
    L40:
        Behavior r04 = r110.getBehavior();
        if (r04 == null) goto L45;
        LayoutParams r26 = r110;
        int r25 = r222;
        int r27 = r3;
        int r28 = r4;
        r22 = r5;
        r29 = r6;
        if (r04.onMeasureChild(this, r20, r112, r21, r23, 0) == false) goto L46;
    L47:
        LayoutParams r111 = r26;
        int r05 = ((r17 + r20.getMeasuredWidth()) + r111.leftMargin) + r111.rightMargin;
        int r06 = Math.max(r28, r05);
        int r24 = ((r18 + r20.getMeasuredHeight()) + r111.topMargin) + r111.bottomMargin;
        int r113 = Math.max(r25, r24);
        int r114 = r27;
        r4 = r06;
        r3 = View.combineMeasuredStates(r114, r20.getMeasuredState());
        r2 = r113;
    L46:
        onMeasureChild(r20, r112, r21, r23, 0);
        goto L47
    L45:
        r26 = r110;
        r27 = r3;
        r28 = r4;
        r29 = r6;
        r25 = r222;
        r22 = r5;
        goto L46
    L37:
        if (ViewCompat.getFitsSystemWindows(r20) == true) goto L39;
        int r07 = this.mLastInsets.getSystemWindowInsetLeft() + this.mLastInsets.getSystemWindowInsetRight();
        int r210 = this.mLastInsets.getSystemWindowInsetTop() + this.mLastInsets.getSystemWindowInsetBottom();
        int r08 = View.MeasureSpec.makeMeasureSpec(r14 - r07, r13);
        r112 = r08;
        r23 = View.MeasureSpec.makeMeasureSpec(r16 - r210, r15);
    L24:
        if (r11 != 5) goto L27;
        if (r12 == true) goto L26;
    L27:
        if (r11 != 5) goto L30;
        if (r12 == true) goto L30;
    L32:
        r21 = Math.max(0, r03 - r8);
    L30:
        if (r11 != 3) goto L34;
        if (r12 == true) goto L32;
    L34:
        r21 = 0;
    L33:
        r222 = r2;
        goto L34
    L49:
        int r115 = r2;
        int r116 = r3;
        setMeasuredDimension(View.resolveSizeAndState(r4, r31, (-16777216) & r116), View.resolveSizeAndState(r115, r32, r116 << 16));
        return;
    L9:
        if (ViewCompat.getFitsSystemWindows(this) == false) goto L11;
        r192 = true;
        goto L12
    L5:
        r12 = false;
        goto L6
    }

    private WindowInsetsCompat dispatchApplyWindowInsetsToBehaviors(WindowInsetsCompat r5) {
        if (r5.isConsumed() == false) goto L5;
        return r5;
    L5:
        int r0 = 0;
        int r1 = getChildCount();
    L6:
        if (r0 >= r1) goto L15;
        View r2 = getChildAt(r0);
        if (ViewCompat.getFitsSystemWindows(r2) == false) goto L14;
        Behavior r3 = ((LayoutParams) r2.getLayoutParams()).getBehavior();
        if (r3 == null) goto L14;
        r5 = r3.onApplyWindowInsets(this, r2, r5);
        if (r5.isConsumed() == true) goto L15;
    L14:
        r0 = r0 + 1;
    L15:
        return r5;
    }

    public void onLayoutChild(@NonNull View r3, int r4) {
        LayoutParams r0 = (LayoutParams) r3.getLayoutParams();
        if (r0.checkAnchorChanged() == true) goto L13;
        if (r0.mAnchorView == null) goto L8;
        layoutChildWithAnchor(r3, r0.mAnchorView, r4);
        return;
    L8:
        if (r0.keyline < 0) goto L10;
        layoutChildWithKeyline(r3, r0.keyline, r4);
        return;
    L10:
        layoutChild(r3, r4);
        return;
    L13:
        throw new IllegalStateException("An anchor may not be changed after CoordinatorLayout measurement begins before layout is complete.");
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
        int r22 = ViewCompat.getLayoutDirection(this);
        int r32 = this.mDependencySortedChildren.size();
        int r42 = 0;
    L3:
        if (r42 >= r32) goto L13;
        View r52 = this.mDependencySortedChildren.get(r42);
        if (r52.getVisibility() == 8) goto L12;
        Behavior r62 = ((LayoutParams) r52.getLayoutParams()).getBehavior();
        if (r62 != null) goto L10;
    L11:
        onLayoutChild(r52, r22);
        goto L12
    L10:
        if (r62.onLayoutChild(this, r52, r22) == false) goto L11;
    L12:
        r42 = r42 + 1;
        goto L3
    }

    @Override
    public void onDraw(Canvas r5) {
        super.onDraw(r5);
        if (this.mDrawStatusBarBackground == true) goto L5;
        return;
    L5:
        if (this.mStatusBarBackground == null) goto L14;
        WindowInsetsCompat r0 = this.mLastInsets;
        if (r0 == null) goto L9;
        int r02 = r0.getSystemWindowInsetTop();
    L10:
        if (r02 <= 0) goto L15;
        this.mStatusBarBackground.setBounds(0, 0, getWidth(), r02);
        this.mStatusBarBackground.draw(r5);
        return;
    L15:
        return;
    L9:
        r02 = 0;
        goto L10
    }

    @Override
    public void setFitsSystemWindows(boolean r1) {
        super.setFitsSystemWindows(r1);
        setupForInsets();
    }

    void recordLastChildRect(View r1, Rect r2) {
        ((LayoutParams) r1.getLayoutParams()).setLastChildRect(r2);
    }

    void getLastChildRect(View r1, Rect r2) {
        r2.set(((LayoutParams) r1.getLayoutParams()).getLastChildRect());
    }

    void getChildRect(View r3, boolean r4, Rect r5) {
        if (r3.isLayoutRequested() == false) goto L5;
    L11:
        r5.setEmpty();
        return;
    L5:
        if (r3.getVisibility() == 8) goto L11;
        if (r4 == false) goto L9;
        getDescendantRect(r3, r5);
        return;
    L9:
        r5.set(r3.getLeft(), r3.getTop(), r3.getRight(), r3.getBottom());
    }

    private void getDesiredAnchoredChildRectWithoutConstraints(View r6, int r7, Rect r8, Rect r9, LayoutParams r10, int r11, int r12) {
        int r62 = GravityCompat.getAbsoluteGravity(resolveAnchoredChildGravity(r10.gravity), r7);
        int r72 = GravityCompat.getAbsoluteGravity(resolveGravity(r10.anchorGravity), r7);
        int r102 = r62 & 7;
        int r63 = r62 & 112;
        int r0 = r72 & 7;
        int r73 = r72 & 112;
        if (r0 == 1) goto L7;
        if (r0 == 5) goto L6;
        int r02 = r8.left;
    L9:
        if (r73 == 16) goto L13;
        if (r73 == 80) goto L12;
        int r74 = r8.top;
    L14:
        if (r102 == 1) goto L17;
        if (r102 == 5) goto L18;
        r02 = r02 - r11;
    L18:
        if (r63 == 16) goto L21;
        if (r63 == 80) goto L22;
        r74 = r74 - r12;
    L22:
        r9.set(r02, r74, r11 + r02, r12 + r74);
        return;
    L21:
        r74 = r74 - (r12 / 2);
        goto L22
    L17:
        r02 = r02 - (r11 / 2);
        goto L18
    L12:
        r74 = r8.bottom;
        goto L14
    L13:
        r74 = r8.top + (r8.height() / 2);
        goto L14
    L6:
        r02 = r8.right;
        goto L9
    L7:
        r02 = r8.left + (r8.width() / 2);
        goto L9
    }

    private void constrainChildRect(LayoutParams r6, Rect r7, int r8, int r9) {
        int r0 = getWidth();
        int r1 = getHeight();
        int r02 = Math.max(getPaddingLeft() + r6.leftMargin, Math.min(r7.left, ((r0 - getPaddingRight()) - r8) - r6.rightMargin));
        int r62 = Math.max(getPaddingTop() + r6.topMargin, Math.min(r7.top, ((r1 - getPaddingBottom()) - r9) - r6.bottomMargin));
        r7.set(r02, r62, r8 + r02, r9 + r62);
    }

    void getDesiredAnchoredChildRect(View r12, int r13, Rect r14, Rect r15) {
        LayoutParams r0 = (LayoutParams) r12.getLayoutParams();
        int r9 = r12.getMeasuredWidth();
        int r10 = r12.getMeasuredHeight();
        getDesiredAnchoredChildRectWithoutConstraints(r12, r13, r14, r15, r0, r9, r10);
        constrainChildRect(r0, r15, r9, r10);
    }

    private void layoutChildWithAnchor(View r5, View r6, int r7) {
        Rect r0 = acquireTempRect();
        Rect r1 = acquireTempRect();
        getDescendantRect(r6, r0);     // Catch: Throwable -> L6
        getDesiredAnchoredChildRect(r5, r7, r0, r1);     // Catch: Throwable -> L6
        r5.layout(r1.left, r1.top, r1.right, r1.bottom);     // Catch: Throwable -> L6
        releaseTempRect(r0);
        releaseTempRect(r1);
        return;
    L6:
        th = move-exception;
        releaseTempRect(r0);
        releaseTempRect(r1);
        throw th;
    }

    private void layoutChildWithKeyline(View r9, int r10, int r11) {
        LayoutParams r0 = (LayoutParams) r9.getLayoutParams();
        int r1 = GravityCompat.getAbsoluteGravity(resolveKeylineGravity(r0.gravity), r11);
        int r2 = r1 & 7;
        int r12 = r1 & 112;
        int r3 = getWidth();
        int r4 = getHeight();
        int r5 = r9.getMeasuredWidth();
        int r6 = r9.getMeasuredHeight();
        if (r11 != 1) goto L5;
        r10 = r3 - r10;
    L5:
        int r102 = getKeyline(r10) - r5;
        int r112 = 0;
        if (r2 != 1) goto L8;
        r102 = r102 + (r5 / 2);
    L13:
        if (r12 != 16) goto L15;
        r112 = 0 + (r6 / 2);
    L19:
        int r103 = Math.max(getPaddingLeft() + r0.leftMargin, Math.min(r102, ((r3 - getPaddingRight()) - r5) - r0.rightMargin));
        int r113 = Math.max(getPaddingTop() + r0.topMargin, Math.min(r112, ((r4 - getPaddingBottom()) - r6) - r0.bottomMargin));
        r9.layout(r103, r113, r5 + r103, r6 + r113);
        return;
    L15:
        if (r12 != 80) goto L19;
        r112 = r6 + 0;
        goto L19
    L8:
        if (r2 != 5) goto L13;
        r102 = r102 + r5;
        goto L13
    }

    private void layoutChild(View r10, int r11) {
        LayoutParams r0 = (LayoutParams) r10.getLayoutParams();
        Rect r7 = acquireTempRect();
        r7.set(getPaddingLeft() + r0.leftMargin, getPaddingTop() + r0.topMargin, (getWidth() - getPaddingRight()) - r0.rightMargin, (getHeight() - getPaddingBottom()) - r0.bottomMargin);
        if (this.mLastInsets != null) goto L5;
    L9:
        Rect r8 = acquireTempRect();
        GravityCompat.apply(resolveGravity(r0.gravity), r10.getMeasuredWidth(), r10.getMeasuredHeight(), r7, r8, r11);
        r10.layout(r8.left, r8.top, r8.right, r8.bottom);
        releaseTempRect(r7);
        releaseTempRect(r8);
        return;
    L5:
        if (ViewCompat.getFitsSystemWindows(this) == false) goto L9;
        if (ViewCompat.getFitsSystemWindows(r10) == true) goto L9;
        r7.left += this.mLastInsets.getSystemWindowInsetLeft();
        r7.top += this.mLastInsets.getSystemWindowInsetTop();
        r7.right -= this.mLastInsets.getSystemWindowInsetRight();
        r7.bottom -= this.mLastInsets.getSystemWindowInsetBottom();
        goto L9
    }

    @Override
    protected boolean drawChild(Canvas r9, View r10, long r11) {
        LayoutParams r0 = (LayoutParams) r10.getLayoutParams();
        if (r0.mBehavior == null) goto L14;
        float r1 = r0.mBehavior.getScrimOpacity(this, r10);
        if (r1 <= 0.0f) goto L14;
        if (this.mScrimPaint != null) goto L9;
        this.mScrimPaint = new Paint();
    L9:
        this.mScrimPaint.setColor(r0.mBehavior.getScrimColor(this, r10));
        this.mScrimPaint.setAlpha(clamp(Math.round(r1 * 255.0f), 0, 255));
        int r02 = r9.save();
        if (r10.isOpaque() == false) goto L12;
        r9.clipRect(r10.getLeft(), r10.getTop(), r10.getRight(), r10.getBottom(), Region.Op.DIFFERENCE);
    L12:
        r9.drawRect(getPaddingLeft(), getPaddingTop(), getWidth() - getPaddingRight(), getHeight() - getPaddingBottom(), this.mScrimPaint);
        r9.restoreToCount(r02);
    L14:
        return super.drawChild(r9, r10, r11);
    }

    final void onChildViewsChanged(int r18) {
        int r2 = ViewCompat.getLayoutDirection(this);
        int r3 = this.mDependencySortedChildren.size();
        Rect r4 = acquireTempRect();
        Rect r5 = acquireTempRect();
        Rect r6 = acquireTempRect();
        int r8 = 0;
    L3:
        if (r8 >= r3) goto L61;
        View r9 = this.mDependencySortedChildren.get(r8);
        LayoutParams r10 = (LayoutParams) r9.getLayoutParams();
        if (r18 == 0) goto L7;
    L9:
        int r11 = 0;
    L10:
        if (r11 >= r8) goto L15;
        View r12 = this.mDependencySortedChildren.get(r11);
        if (r10.mAnchorDirectChild != r12) goto L14;
        offsetChildToAnchor(r9, r2);
    L14:
        r11 = r11 + 1;
        goto L10
    L15:
        getChildRect(r9, true, r5);
        if (r10.insetEdge == 0) goto L34;
        if (r5.isEmpty() == true) goto L34;
        int r122 = GravityCompat.getAbsoluteGravity(r10.insetEdge, r2);
        int r13 = r122 & 112;
        if (r13 != 48) goto L22;
        r4.top = Math.max(r4.top, r5.bottom);
    L26:
        int r123 = r122 & 7;
        if (r123 != 3) goto L29;
        r4.left = Math.max(r4.left, r5.right);
        goto L34
    L29:
        if (r123 != 5) goto L34;
        r4.right = Math.max(r4.right, getWidth() - r5.left);
        goto L34
    L22:
        if (r13 != 80) goto L26;
        r4.bottom = Math.max(r4.bottom, getHeight() - r5.top);
    L34:
        if (r10.dodgeInsetEdges == 0) goto L39;
        if (r9.getVisibility() != 0) goto L39;
        offsetChildByInset(r9, r4, r2);
    L39:
        if (r18 == 2) goto L44;
        getLastChildRect(r9, r6);
        if (r6.equals(r5) == true) goto L60;
        recordLastChildRect(r9, r5);
    L60:
        r8 = r8 + 1;
    L44:
        int r124 = r8 + 1;
    L45:
        if (r124 >= r3) goto L60;
        View r132 = this.mDependencySortedChildren.get(r124);
        LayoutParams r14 = (LayoutParams) r132.getLayoutParams();
        Behavior r15 = r14.getBehavior();
        if (r15 == null) goto L59;
        if (r15.layoutDependsOn(this, r132, r9) == false) goto L59;
        if (r18 == 0) goto L52;
    L54:
        if (r18 == 2) goto L56;
        boolean r133 = r15.onDependentViewChanged(this, r132, r9);
    L57:
        if (r18 != 1) goto L59;
        r14.setChangedAfterNestedScroll(r133);
        goto L59
    L56:
        r15.onDependentViewRemoved(this, r132, r9);
        r133 = true;
        goto L57
    L52:
        if (r14.getChangedAfterNestedScroll() == false) goto L54;
        r14.resetChangedAfterNestedScroll();
    L59:
        r124 = r124 + 1;
        goto L45
    L7:
        if (r9.getVisibility() != 8) goto L9;
    L61:
        releaseTempRect(r4);
        releaseTempRect(r5);
        releaseTempRect(r6);
    }

    private void offsetChildByInset(View r9, Rect r10, int r11) {
        if (ViewCompat.isLaidOut(r9) == true) goto L6;
        return;
    L6:
        if (r9.getWidth() > 0) goto L8;
        return;
    L8:
        if (r9.getHeight() <= 0) goto L53;
        LayoutParams r0 = (LayoutParams) r9.getLayoutParams();
        Behavior r1 = r0.getBehavior();
        Rect r2 = acquireTempRect();
        Rect r3 = acquireTempRect();
        r3.set(r9.getLeft(), r9.getTop(), r9.getRight(), r9.getBottom());
        if (r1 != null) goto L13;
    L19:
        r2.set(r3);
    L20:
        releaseTempRect(r3);
        if (r2.isEmpty() == false) goto L24;
        releaseTempRect(r2);
        return;
    L24:
        int r112 = GravityCompat.getAbsoluteGravity(r0.dodgeInsetEdges, r11);
        if ((r112 & 48) != 48) goto L29;
        int r12 = (r2.top - r0.topMargin) - r0.mInsetOffsetY;
        if (r12 >= r10.top) goto L29;
        setInsetOffsetY(r9, r10.top - r12);
        boolean r13 = true;
    L31:
        if ((r112 & 80) != 80) goto L35;
        int r32 = ((getHeight() - r2.bottom) - r0.bottomMargin) + r0.mInsetOffsetY;
        if (r32 >= r10.bottom) goto L35;
        setInsetOffsetY(r9, r32 - r10.bottom);
        r13 = true;
    L35:
        if (r13 == true) goto L38;
        setInsetOffsetY(r9, 0);
    L38:
        if ((r112 & 3) != 3) goto L42;
        int r14 = (r2.left - r0.leftMargin) - r0.mInsetOffsetX;
        if (r14 >= r10.left) goto L42;
        setInsetOffsetX(r9, r10.left - r14);
        boolean r15 = true;
    L44:
        if ((r112 & 5) != 5) goto L48;
        int r113 = ((getWidth() - r2.right) - r0.rightMargin) + r0.mInsetOffsetX;
        if (r113 >= r10.right) goto L48;
        setInsetOffsetX(r9, r113 - r10.right);
        r15 = true;
    L48:
        if (r15 == true) goto L50;
        setInsetOffsetX(r9, 0);
    L50:
        releaseTempRect(r2);
        return;
    L42:
        r15 = false;
    L29:
        r13 = false;
        goto L31
    L13:
        if (r1.getInsetDodgeRect(this, r9, r2) == false) goto L19;
        if (r3.contains(r2) == true) goto L20;
        throw new IllegalArgumentException("Rect should be within the child's bounds. Rect:" + r2.toShortString() + " | Bounds:" + r3.toShortString());
    }

    private void setInsetOffsetX(View r3, int r4) {
        LayoutParams r0 = (LayoutParams) r3.getLayoutParams();
        if (r0.mInsetOffsetX == r4) goto L6;
        ViewCompat.offsetLeftAndRight(r3, r4 - r0.mInsetOffsetX);
        r0.mInsetOffsetX = r4;
        return;
    }

    private void setInsetOffsetY(View r3, int r4) {
        LayoutParams r0 = (LayoutParams) r3.getLayoutParams();
        if (r0.mInsetOffsetY == r4) goto L6;
        ViewCompat.offsetTopAndBottom(r3, r4 - r0.mInsetOffsetY);
        r0.mInsetOffsetY = r4;
        return;
    }

    public void dispatchDependentViewsChanged(@NonNull View r5) {
        List r0 = this.mChildDag.getIncomingEdges(r5);
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isEmpty() == true) goto L17;
        int r1 = 0;
    L8:
        if (r1 >= r0.size()) goto L18;
        View r2 = (View) r0.get(r1);
        Behavior r3 = ((LayoutParams) r2.getLayoutParams()).getBehavior();
        if (r3 == null) goto L12;
        r3.onDependentViewChanged(this, r2, r5);
    L12:
        r1 = r1 + 1;
        goto L8
    L18:
        return;
    }

    @NonNull
    public List<View> getDependencies(@NonNull View r2) {
        List<View> r22 = this.mChildDag.getOutgoingEdges(r2);
        this.mTempDependenciesList.clear();
        if (r22 == null) goto L6;
        this.mTempDependenciesList.addAll(r22);
    L6:
        return this.mTempDependenciesList;
    }

    @NonNull
    public List<View> getDependents(@NonNull View r2) {
        List r22 = this.mChildDag.getIncomingEdges(r2);
        this.mTempDependenciesList.clear();
        if (r22 == null) goto L6;
        this.mTempDependenciesList.addAll(r22);
    L6:
        return this.mTempDependenciesList;
    }

    @VisibleForTesting
    final List<View> getDependencySortedChildren() {
        prepareChildren();
        return Collections.unmodifiableList(this.mDependencySortedChildren);
    }

    void ensurePreDrawListener() {
        int r0 = getChildCount();
        boolean r1 = false;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L9;
        if (hasDependencies(getChildAt(r2)) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        r1 = true;
    L9:
        if (r1 == this.mNeedsPreDrawListener) goto L16;
        if (r1 == false) goto L12;
        addPreDrawListener();
        return;
    L12:
        removePreDrawListener();
        return;
    }

    private boolean hasDependencies(View r2) {
        return this.mChildDag.hasOutgoingEdges(r2);
    }

    void addPreDrawListener() {
        if (this.mIsAttachedToWindow == true) goto L5;
    L8:
        this.mNeedsPreDrawListener = true;
        return;
    L5:
        if (this.mOnPreDrawListener != null) goto L7;
        this.mOnPreDrawListener = new OnPreDrawListener(this);
    L7:
        getViewTreeObserver().addOnPreDrawListener(this.mOnPreDrawListener);
        goto L8
    }

    void removePreDrawListener() {
        if (this.mIsAttachedToWindow == true) goto L5;
    L7:
        this.mNeedsPreDrawListener = false;
        return;
    L5:
        if (this.mOnPreDrawListener == null) goto L7;
        getViewTreeObserver().removeOnPreDrawListener(this.mOnPreDrawListener);
        goto L7
    }

    void offsetChildToAnchor(View r17, int r18) {
        LayoutParams r10 = (LayoutParams) r17.getLayoutParams();
        if (r10.mAnchorView == null) goto L20;
        Rect r11 = acquireTempRect();
        Rect r12 = acquireTempRect();
        Rect r13 = acquireTempRect();
        getDescendantRect(r10.mAnchorView, r11);
        boolean r14 = false;
        getChildRect(r17, false, r12);
        int r15 = r17.getMeasuredWidth();
        int r7 = r17.getMeasuredHeight();
        getDesiredAnchoredChildRectWithoutConstraints(r17, r18, r11, r13, r10, r15, r7);
        if (r13.left == r12.left) goto L7;
    L8:
        r14 = true;
    L9:
        constrainChildRect(r10, r13, r15, r7);
        int r0 = r13.left - r12.left;
        int r1 = r13.top - r12.top;
        if (r0 == 0) goto L12;
        ViewCompat.offsetLeftAndRight(r17, r0);
    L12:
        if (r1 == 0) goto L14;
        ViewCompat.offsetTopAndBottom(r17, r1);
    L14:
        if (r14 == false) goto L18;
        Behavior r02 = r10.getBehavior();
        if (r02 == null) goto L18;
        r02.onDependentViewChanged(this, r17, r10.mAnchorView);
    L18:
        releaseTempRect(r11);
        releaseTempRect(r12);
        releaseTempRect(r13);
        return;
    L7:
        if (r13.top == r12.top) goto L9;
    }

    public boolean isPointInChildBounds(@NonNull View r2, int r3, int r4) {
        Rect r0 = acquireTempRect();
        getDescendantRect(r2, r0);
        boolean r22 = r0.contains(r3, r4);     // Catch: Throwable -> L6
        releaseTempRect(r0);
        return r22;
    L6:
        th = move-exception;
        releaseTempRect(r0);
        throw th;
    }

    public boolean doViewsOverlap(@NonNull View r5, @NonNull View r6) {
        boolean r1 = false;
        if (r5.getVisibility() == 0) goto L5;
    L29:
        return false;
    L5:
        if (r6.getVisibility() != 0) goto L29;
        Rect r0 = acquireTempRect();
        if (r5.getParent() == this) goto L9;
        boolean r2 = true;
    L10:
        getChildRect(r5, r2, r0);
        Rect r52 = acquireTempRect();
        if (r6.getParent() == this) goto L13;
        boolean r22 = true;
    L14:
        getChildRect(r6, r22, r52);
    L26:
        th = move-exception;
        releaseTempRect(r0);
        releaseTempRect(r52);
        throw th;
    L16:
        if (r0.left <= r52.right) goto L18;
    L24:
        releaseTempRect(r0);
        releaseTempRect(r52);
        return r1;
    L18:
        if (r0.top > r52.bottom) goto L24;
        if (r0.right < r52.left) goto L24;
        if (r0.bottom < r52.top) goto L24;
        r1 = true;
        goto L24
    L13:
        r22 = false;
        goto L14
    L9:
        r2 = false;
        goto L10
    }

    @Override
    public LayoutParams generateLayoutParams(AttributeSet r3) {
        return new LayoutParams(getContext(), r3);
    }

    @Override
    protected LayoutParams generateLayoutParams(ViewGroup.LayoutParams r2) {
        if ((r2 instanceof LayoutParams) == false) goto L7;
        return new LayoutParams((LayoutParams) r2);
    L7:
        if ((r2 instanceof ViewGroup.MarginLayoutParams) == false) goto L11;
        return new LayoutParams((ViewGroup.MarginLayoutParams) r2);
    L11:
        return new LayoutParams(r2);
    }

    @Override
    protected LayoutParams generateDefaultLayoutParams() {
        return new LayoutParams(-2, -2);
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
    public boolean onStartNestedScroll(View r2, View r3, int r4) {
        return onStartNestedScroll(r2, r3, r4, 0);
    }

    @Override
    public boolean onStartNestedScroll(View r15, View r16, int r17, int r18) {
        int r8 = getChildCount();
        int r10 = 0;
        boolean r11 = false;
    L3:
        if (r10 >= r8) goto L13;
        View r2 = getChildAt(r10);
        if (r2.getVisibility() == 8) goto L11;
        LayoutParams r13 = (LayoutParams) r2.getLayoutParams();
        Behavior r0 = r13.getBehavior();
        if (r0 == null) goto L10;
        boolean r02 = r0.onStartNestedScroll(this, r2, r15, r16, r17, r18);
        r13.setNestedScrollAccepted(r18, r02);
        r11 = r11 | r02;
        goto L11
    L10:
        r13.setNestedScrollAccepted(r18, false);
    L11:
        r10 = r10 + 1;
        goto L3
    L13:
        return r11;
    }

    @Override
    public void onNestedScrollAccepted(View r2, View r3, int r4) {
        onNestedScrollAccepted(r2, r3, r4, 0);
    }

    @Override
    public void onNestedScrollAccepted(View r10, View r11, int r12, int r13) {
        this.mNestedScrollingParentHelper.onNestedScrollAccepted(r10, r11, r12, r13);
        this.mNestedScrollingTarget = r11;
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L11;
        View r4 = getChildAt(r1);
        LayoutParams r2 = (LayoutParams) r4.getLayoutParams();
        if (r2.isNestedScrollAccepted(r13) == false) goto L10;
        Behavior r22 = r2.getBehavior();
        if (r22 == null) goto L10;
        r22.onNestedScrollAccepted(this, r4, r10, r11, r12, r13);
    L10:
        r1 = r1 + 1;
        goto L3
    }

    @Override
    public void onStopNestedScroll(View r2) {
        onStopNestedScroll(r2, 0);
    }

    @Override
    public void onStopNestedScroll(View r6, int r7) {
        this.mNestedScrollingParentHelper.onStopNestedScroll(r6, r7);
        int r0 = getChildCount();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L12;
        View r2 = getChildAt(r1);
        LayoutParams r3 = (LayoutParams) r2.getLayoutParams();
        if (r3.isNestedScrollAccepted(r7) == false) goto L11;
        Behavior r4 = r3.getBehavior();
        if (r4 == null) goto L10;
        r4.onStopNestedScroll(this, r2, r6, r7);
    L10:
        r3.resetNestedScroll(r7);
        r3.resetChangedAfterNestedScroll();
    L11:
        r1 = r1 + 1;
        goto L3
    L12:
        this.mNestedScrollingTarget = null;
    }

    @Override
    public void onNestedScroll(View r8, int r9, int r10, int r11, int r12) {
        onNestedScroll(r8, r9, r10, r11, r12, 0);
    }

    @Override
    public void onNestedScroll(View r15, int r16, int r17, int r18, int r19, int r20) {
        int r10 = getChildCount();
        boolean r0 = false;
        int r11 = 0;
    L4:
        if (r11 >= r10) goto L15;
        View r2 = getChildAt(r11);
        if (r2.getVisibility() == 8) goto L14;
        LayoutParams r1 = (LayoutParams) r2.getLayoutParams();
        if (r1.isNestedScrollAccepted(r20) == false) goto L14;
        Behavior r12 = r1.getBehavior();
        if (r12 == null) goto L14;
        r12.onNestedScroll(this, r2, r15, r16, r17, r18, r19, r20);
        r0 = true;
    L14:
        r11 = r11 + 1;
        goto L4
    L15:
        if (r0 == false) goto L23;
        onChildViewsChanged(1);
        return;
    }

    @Override
    public void onNestedPreScroll(View r7, int r8, int r9, int[] r10) {
        onNestedPreScroll(r7, r8, r9, r10, 0);
    }

    @Override
    public void onNestedPreScroll(View r17, int r18, int r19, int[] r20, int r21) {
        int r9 = getChildCount();
        boolean r0 = false;
        int r11 = 0;
        int r12 = 0;
        int r13 = 0;
    L4:
        if (r11 >= r9) goto L22;
        View r2 = getChildAt(r11);
        if (r2.getVisibility() == 8) goto L21;
        LayoutParams r1 = (LayoutParams) r2.getLayoutParams();
        if (r1.isNestedScrollAccepted(r21) == false) goto L21;
        Behavior r14 = r1.getBehavior();
        if (r14 == null) goto L21;
        int[] r6 = this.mTempIntPair;
        r6[1] = 0;
        r6[0] = 0;
        r14.onNestedPreScroll(this, r2, r17, r18, r19, r6, r21);
        if (r18 <= 0) goto L16;
        int r02 = Math.max(r12, this.mTempIntPair[0]);
    L17:
        if (r19 <= 0) goto L19;
        int r15 = Math.max(r13, this.mTempIntPair[1]);
    L20:
        r12 = r02;
        r13 = r15;
        r0 = true;
        goto L21
    L19:
        r15 = Math.min(r13, this.mTempIntPair[1]);
        goto L20
    L16:
        r02 = Math.min(r12, this.mTempIntPair[0]);
    L21:
        r11 = r11 + 1;
        goto L4
    L22:
        r20[0] = r12;
        r20[1] = r13;
        if (r0 == false) goto L31;
        onChildViewsChanged(1);
        return;
    }

    @Override
    public boolean onNestedFling(View r12, float r13, float r14, boolean r15) {
        int r0 = getChildCount();
        int r2 = 0;
        boolean r3 = false;
    L3:
        if (r2 >= r0) goto L14;
        View r6 = getChildAt(r2);
        if (r6.getVisibility() == 8) goto L13;
        LayoutParams r4 = (LayoutParams) r6.getLayoutParams();
        if (r4.isNestedScrollAccepted(0) == false) goto L13;
        Behavior r42 = r4.getBehavior();
        if (r42 == null) goto L13;
        r3 = r3 | r42.onNestedFling(this, r6, r12, r13, r14, r15);
    L13:
        r2 = r2 + 1;
        goto L3
    L14:
        if (r3 == false) goto L16;
        onChildViewsChanged(1);
    L16:
        return r3;
    }

    @Override
    public boolean onNestedPreFling(View r11, float r12, float r13) {
        int r0 = getChildCount();
        int r2 = 0;
        boolean r3 = false;
    L3:
        if (r2 >= r0) goto L14;
        View r6 = getChildAt(r2);
        if (r6.getVisibility() == 8) goto L13;
        LayoutParams r4 = (LayoutParams) r6.getLayoutParams();
        if (r4.isNestedScrollAccepted(0) == false) goto L13;
        Behavior r42 = r4.getBehavior();
        if (r42 == null) goto L13;
        r3 = r3 | r42.onNestedPreFling(this, r6, r11, r12, r13);
    L13:
        r2 = r2 + 1;
        goto L3
    L14:
        return r3;
    }

    @Override
    public int getNestedScrollAxes() {
        return this.mNestedScrollingParentHelper.getNestedScrollAxes();
    }

    @Override
    protected void onRestoreInstanceState(Parcelable r7) {
        if ((r7 instanceof SavedState) == true) goto L6;
        super.onRestoreInstanceState(r7);
        return;
    L6:
        SavedState r72 = (SavedState) r7;
        super.onRestoreInstanceState(r72.getSuperState());
        SparseArray<Parcelable> r73 = r72.behaviorStates;
        int r0 = 0;
        int r1 = getChildCount();
    L7:
        if (r0 >= r1) goto L15;
        View r2 = getChildAt(r0);
        int r3 = r2.getId();
        Behavior r4 = getResolvedLayoutParams(r2).getBehavior();
        if (r3 == (-1)) goto L14;
        if (r4 == null) goto L14;
        Parcelable r32 = r73.get(r3);
        if (r32 == null) goto L14;
        r4.onRestoreInstanceState(this, r2, r32);
    L14:
        r0 = r0 + 1;
        goto L7
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        SavedState r0 = new SavedState(super.onSaveInstanceState());
        SparseArray<Parcelable> r1 = new SparseArray();
        int r2 = getChildCount();
        int r3 = 0;
    L3:
        if (r3 >= r2) goto L11;
        View r4 = getChildAt(r3);
        int r5 = r4.getId();
        Behavior r6 = ((LayoutParams) r4.getLayoutParams()).getBehavior();
        if (r5 == (-1)) goto L10;
        if (r6 == null) goto L10;
        Parcelable r42 = r6.onSaveInstanceState(this, r4);
        if (r42 == null) goto L10;
        r1.append(r5, r42);
    L10:
        r3 = r3 + 1;
        goto L3
    L11:
        r0.behaviorStates = r1;
        return r0;
    }

    @Override
    public boolean requestChildRectangleOnScreen(View r2, Rect r3, boolean r4) {
        Behavior r0 = ((LayoutParams) r2.getLayoutParams()).getBehavior();
        if (r0 == null) goto L9;
        if (r0.onRequestChildRectangleOnScreen(this, r2, r3, r4) == false) goto L9;
        return true;
    L9:
        return super.requestChildRectangleOnScreen(r2, r3, r4);
    }

    private void setupForInsets() {
        if (Build.VERSION.SDK_INT >= 21) goto L6;
        return;
    L6:
        if (ViewCompat.getFitsSystemWindows(this) == true) goto L8;
        ViewCompat.setOnApplyWindowInsetsListener(this, null);
        return;
    L8:
        if (this.mApplyWindowInsetsListener != null) goto L10;
        this.mApplyWindowInsetsListener = new 1(this);
    L10:
        ViewCompat.setOnApplyWindowInsetsListener(this, this.mApplyWindowInsetsListener);
        setSystemUiVisibility(1280);
    }
}
