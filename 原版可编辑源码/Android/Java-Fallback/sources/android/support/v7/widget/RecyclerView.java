package android.support.v7.widget;

public class RecyclerView extends android.view.ViewGroup implements android.support.v4.view.ScrollingView, android.support.v4.view.NestedScrollingChild2 {
    static final boolean ALLOW_SIZE_IN_UNSPECIFIED_SPEC = false;
    static final boolean ALLOW_THREAD_GAP_WORK = false;
    private static final int[] CLIP_TO_PADDING_ATTR = null;
    static final boolean DEBUG = false;
    static final int DEFAULT_ORIENTATION = 1;
    static final boolean DISPATCH_TEMP_DETACH = false;
    private static final boolean FORCE_ABS_FOCUS_SEARCH_DIRECTION = false;
    static final boolean FORCE_INVALIDATE_DISPLAY_LIST = false;
    static final long FOREVER_NS = Long.MAX_VALUE;
    public static final int HORIZONTAL = 0;
    private static final boolean IGNORE_DETACHED_FOCUSED_CHILD = false;
    private static final int INVALID_POINTER = -1;
    public static final int INVALID_TYPE = -1;
    private static final java.lang.Class<?>[] LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE = null;
    static final int MAX_SCROLL_DURATION = 2000;
    private static final int[] NESTED_SCROLLING_ATTRS = null;
    public static final long NO_ID = -1;
    public static final int NO_POSITION = -1;
    static final boolean POST_UPDATES_ON_ANIMATION = false;
    public static final int SCROLL_STATE_DRAGGING = 1;
    public static final int SCROLL_STATE_IDLE = 0;
    public static final int SCROLL_STATE_SETTLING = 2;
    static final java.lang.String TAG = "RecyclerView";
    public static final int TOUCH_SLOP_DEFAULT = 0;
    public static final int TOUCH_SLOP_PAGING = 1;
    static final java.lang.String TRACE_BIND_VIEW_TAG = "RV OnBindView";
    static final java.lang.String TRACE_CREATE_VIEW_TAG = "RV CreateView";
    private static final java.lang.String TRACE_HANDLE_ADAPTER_UPDATES_TAG = "RV PartialInvalidate";
    static final java.lang.String TRACE_NESTED_PREFETCH_TAG = "RV Nested Prefetch";
    private static final java.lang.String TRACE_ON_DATA_SET_CHANGE_LAYOUT_TAG = "RV FullInvalidate";
    private static final java.lang.String TRACE_ON_LAYOUT_TAG = "RV OnLayout";
    static final java.lang.String TRACE_PREFETCH_TAG = "RV Prefetch";
    static final java.lang.String TRACE_SCROLL_TAG = "RV Scroll";
    static final boolean VERBOSE_TRACING = false;
    public static final int VERTICAL = 1;
    static final android.view.animation.Interpolator sQuinticInterpolator = null;
    android.support.v7.widget.RecyclerViewAccessibilityDelegate mAccessibilityDelegate;
    private final android.view.accessibility.AccessibilityManager mAccessibilityManager;
    private android.support.v7.widget.RecyclerView.OnItemTouchListener mActiveOnItemTouchListener;
    android.support.v7.widget.RecyclerView.Adapter mAdapter;
    android.support.v7.widget.AdapterHelper mAdapterHelper;
    boolean mAdapterUpdateDuringMeasure;
    private android.widget.EdgeEffect mBottomGlow;
    private android.support.v7.widget.RecyclerView.ChildDrawingOrderCallback mChildDrawingOrderCallback;
    android.support.v7.widget.ChildHelper mChildHelper;
    boolean mClipToPadding;
    boolean mDataSetHasChangedAfterLayout;
    boolean mDispatchItemsChangedEvent;
    private int mDispatchScrollCounter;
    private int mEatenAccessibilityChangeFlags;
    private android.support.v7.widget.RecyclerView.EdgeEffectFactory mEdgeEffectFactory;
    boolean mEnableFastScroller;
    boolean mFirstLayoutComplete;
    android.support.v7.widget.GapWorker mGapWorker;
    boolean mHasFixedSize;
    private boolean mIgnoreMotionEventTillDown;
    private int mInitialTouchX;
    private int mInitialTouchY;
    private int mInterceptRequestLayoutDepth;
    boolean mIsAttached;
    android.support.v7.widget.RecyclerView.ItemAnimator mItemAnimator;
    private android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorListener mItemAnimatorListener;
    private java.lang.Runnable mItemAnimatorRunner;
    final java.util.ArrayList<android.support.v7.widget.RecyclerView.ItemDecoration> mItemDecorations;
    boolean mItemsAddedOrRemoved;
    boolean mItemsChanged;
    private int mLastTouchX;
    private int mLastTouchY;
    android.support.v7.widget.RecyclerView.LayoutManager mLayout;
    boolean mLayoutFrozen;
    private int mLayoutOrScrollCounter;
    boolean mLayoutWasDefered;
    private android.widget.EdgeEffect mLeftGlow;
    private final int mMaxFlingVelocity;
    private final int mMinFlingVelocity;
    private final int[] mMinMaxLayoutPositions;
    private final int[] mNestedOffsets;
    private final android.support.v7.widget.RecyclerView.RecyclerViewDataObserver mObserver;
    private java.util.List<android.support.v7.widget.RecyclerView.OnChildAttachStateChangeListener> mOnChildAttachStateListeners;
    private android.support.v7.widget.RecyclerView.OnFlingListener mOnFlingListener;
    private final java.util.ArrayList<android.support.v7.widget.RecyclerView.OnItemTouchListener> mOnItemTouchListeners;
    final java.util.List<android.support.v7.widget.RecyclerView.ViewHolder> mPendingAccessibilityImportanceChange;
    private android.support.v7.widget.RecyclerView.SavedState mPendingSavedState;
    boolean mPostedAnimatorRunner;
    android.support.v7.widget.GapWorker.LayoutPrefetchRegistryImpl mPrefetchRegistry;
    private boolean mPreserveFocusAfterLayout;
    final android.support.v7.widget.RecyclerView.Recycler mRecycler;
    android.support.v7.widget.RecyclerView.RecyclerListener mRecyclerListener;
    private android.widget.EdgeEffect mRightGlow;
    private float mScaledHorizontalScrollFactor;
    private float mScaledVerticalScrollFactor;
    final int[] mScrollConsumed;
    private android.support.v7.widget.RecyclerView.OnScrollListener mScrollListener;
    private java.util.List<android.support.v7.widget.RecyclerView.OnScrollListener> mScrollListeners;
    private final int[] mScrollOffset;
    private int mScrollPointerId;
    private int mScrollState;
    final int[] mScrollStepConsumed;
    private android.support.v4.view.NestedScrollingChildHelper mScrollingChildHelper;
    final android.support.v7.widget.RecyclerView.State mState;
    final android.graphics.Rect mTempRect;
    private final android.graphics.Rect mTempRect2;
    final android.graphics.RectF mTempRectF;
    private android.widget.EdgeEffect mTopGlow;
    private int mTouchSlop;
    final java.lang.Runnable mUpdateChildViewsRunnable;
    private android.view.VelocityTracker mVelocityTracker;
    final android.support.v7.widget.RecyclerView.ViewFlinger mViewFlinger;
    private final android.support.v7.widget.ViewInfoStore.ProcessCallback mViewInfoProcessCallback;
    final android.support.v7.widget.ViewInfoStore mViewInfoStore;







    public static abstract class Adapter<VH extends android.support.v7.widget.RecyclerView.ViewHolder> {
        private boolean mHasStableIds;
        private final android.support.v7.widget.RecyclerView.AdapterDataObservable mObservable;

        public Adapter() {
                r1 = this;
                r1.<init>()
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = new android.support.v7.widget.RecyclerView$AdapterDataObservable
                r0.<init>()
                r1.mObservable = r0
                r0 = 0
                r1.mHasStableIds = r0
                return
        }

        public final void bindViewHolder(VH r3, int r4) {
                r2 = this;
                r3.mPosition = r4
                boolean r0 = r2.hasStableIds()
                if (r0 == 0) goto Le
                long r0 = r2.getItemId(r4)
                r3.mItemId = r0
            Le:
                r0 = 519(0x207, float:7.27E-43)
                r1 = 1
                r3.setFlags(r1, r0)
                java.lang.String r0 = "RV OnBindView"
                android.support.v4.os.TraceCompat.beginSection(r0)
                java.util.List r0 = r3.getUnmodifiedPayloads()
                r2.onBindViewHolder(r3, r4, r0)
                r3.clearPayload()
                android.view.View r3 = r3.itemView
                android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
                boolean r4 = r3 instanceof android.support.v7.widget.RecyclerView.LayoutParams
                if (r4 == 0) goto L31
                android.support.v7.widget.RecyclerView$LayoutParams r3 = (android.support.v7.widget.RecyclerView.LayoutParams) r3
                r3.mInsetsDirty = r1
            L31:
                android.support.v4.os.TraceCompat.endSection()
                return
        }

        public final VH createViewHolder(android.view.ViewGroup r2, int r3) {
                r1 = this;
                java.lang.String r0 = "RV CreateView"
                android.support.v4.os.TraceCompat.beginSection(r0)     // Catch: java.lang.Throwable -> L1f
                android.support.v7.widget.RecyclerView$ViewHolder r2 = r1.onCreateViewHolder(r2, r3)     // Catch: java.lang.Throwable -> L1f
                android.view.View r0 = r2.itemView     // Catch: java.lang.Throwable -> L1f
                android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Throwable -> L1f
                if (r0 != 0) goto L17
                r2.mItemViewType = r3     // Catch: java.lang.Throwable -> L1f
                android.support.v4.os.TraceCompat.endSection()
                return r2
            L17:
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L1f
                java.lang.String r3 = "ViewHolder views must not be attached when created. Ensure that you are not passing 'true' to the attachToRoot parameter of LayoutInflater.inflate(..., boolean attachToRoot)"
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L1f
                throw r2     // Catch: java.lang.Throwable -> L1f
            L1f:
                r2 = move-exception
                android.support.v4.os.TraceCompat.endSection()
                throw r2
        }

        public abstract int getItemCount();

        public long getItemId(int r3) {
                r2 = this;
                r0 = -1
                return r0
        }

        public int getItemViewType(int r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public final boolean hasObservers() {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                boolean r0 = r0.hasObservers()
                return r0
        }

        public final boolean hasStableIds() {
                r1 = this;
                boolean r0 = r1.mHasStableIds
                return r0
        }

        public final void notifyDataSetChanged() {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyChanged()
                return
        }

        public final void notifyItemChanged(int r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r2.mObservable
                r1 = 1
                r0.notifyItemRangeChanged(r3, r1)
                return
        }

        public final void notifyItemChanged(int r3, java.lang.Object r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r2.mObservable
                r1 = 1
                r0.notifyItemRangeChanged(r3, r1, r4)
                return
        }

        public final void notifyItemInserted(int r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r2.mObservable
                r1 = 1
                r0.notifyItemRangeInserted(r3, r1)
                return
        }

        public final void notifyItemMoved(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyItemMoved(r2, r3)
                return
        }

        public final void notifyItemRangeChanged(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyItemRangeChanged(r2, r3)
                return
        }

        public final void notifyItemRangeChanged(int r2, int r3, java.lang.Object r4) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyItemRangeChanged(r2, r3, r4)
                return
        }

        public final void notifyItemRangeInserted(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyItemRangeInserted(r2, r3)
                return
        }

        public final void notifyItemRangeRemoved(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.notifyItemRangeRemoved(r2, r3)
                return
        }

        public final void notifyItemRemoved(int r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r2.mObservable
                r1 = 1
                r0.notifyItemRangeRemoved(r3, r1)
                return
        }

        public void onAttachedToRecyclerView(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                return
        }

        public abstract void onBindViewHolder(VH r1, int r2);

        public void onBindViewHolder(VH r1, int r2, java.util.List<java.lang.Object> r3) {
                r0 = this;
                r0.onBindViewHolder(r1, r2)
                return
        }

        public abstract VH onCreateViewHolder(android.view.ViewGroup r1, int r2);

        public void onDetachedFromRecyclerView(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                return
        }

        public boolean onFailedToRecycleView(VH r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void onViewAttachedToWindow(VH r1) {
                r0 = this;
                return
        }

        public void onViewDetachedFromWindow(VH r1) {
                r0 = this;
                return
        }

        public void onViewRecycled(VH r1) {
                r0 = this;
                return
        }

        public void registerAdapterDataObserver(android.support.v7.widget.RecyclerView.AdapterDataObserver r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.registerObserver(r2)
                return
        }

        public void setHasStableIds(boolean r2) {
                r1 = this;
                boolean r0 = r1.hasObservers()
                if (r0 != 0) goto L9
                r1.mHasStableIds = r2
                return
            L9:
                java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
                java.lang.String r0 = "Cannot change whether this adapter has stable IDs while the adapter has registered observers."
                r2.<init>(r0)
                throw r2
        }

        public void unregisterAdapterDataObserver(android.support.v7.widget.RecyclerView.AdapterDataObserver r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$AdapterDataObservable r0 = r1.mObservable
                r0.unregisterObserver(r2)
                return
        }
    }

    static class AdapterDataObservable extends android.database.Observable<android.support.v7.widget.RecyclerView.AdapterDataObserver> {
        AdapterDataObservable() {
                r0 = this;
                r0.<init>()
                return
        }

        public boolean hasObservers() {
                r1 = this;
                java.util.ArrayList r0 = r1.mObservers
                boolean r0 = r0.isEmpty()
                r0 = r0 ^ 1
                return r0
        }

        public void notifyChanged() {
                r2 = this;
                java.util.ArrayList r0 = r2.mObservers
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L18
                java.util.ArrayList r1 = r2.mObservers
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$AdapterDataObserver r1 = (android.support.v7.widget.RecyclerView.AdapterDataObserver) r1
                r1.onChanged()
                int r0 = r0 + (-1)
                goto L8
            L18:
                return
        }

        public void notifyItemMoved(int r4, int r5) {
                r3 = this;
                java.util.ArrayList r0 = r3.mObservers
                int r0 = r0.size()
                r1 = 1
                int r0 = r0 - r1
            L8:
                if (r0 < 0) goto L18
                java.util.ArrayList r2 = r3.mObservers
                java.lang.Object r2 = r2.get(r0)
                android.support.v7.widget.RecyclerView$AdapterDataObserver r2 = (android.support.v7.widget.RecyclerView.AdapterDataObserver) r2
                r2.onItemRangeMoved(r4, r5, r1)
                int r0 = r0 + (-1)
                goto L8
            L18:
                return
        }

        public void notifyItemRangeChanged(int r2, int r3) {
                r1 = this;
                r0 = 0
                r1.notifyItemRangeChanged(r2, r3, r0)
                return
        }

        public void notifyItemRangeChanged(int r3, int r4, java.lang.Object r5) {
                r2 = this;
                java.util.ArrayList r0 = r2.mObservers
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L18
                java.util.ArrayList r1 = r2.mObservers
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$AdapterDataObserver r1 = (android.support.v7.widget.RecyclerView.AdapterDataObserver) r1
                r1.onItemRangeChanged(r3, r4, r5)
                int r0 = r0 + (-1)
                goto L8
            L18:
                return
        }

        public void notifyItemRangeInserted(int r3, int r4) {
                r2 = this;
                java.util.ArrayList r0 = r2.mObservers
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L18
                java.util.ArrayList r1 = r2.mObservers
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$AdapterDataObserver r1 = (android.support.v7.widget.RecyclerView.AdapterDataObserver) r1
                r1.onItemRangeInserted(r3, r4)
                int r0 = r0 + (-1)
                goto L8
            L18:
                return
        }

        public void notifyItemRangeRemoved(int r3, int r4) {
                r2 = this;
                java.util.ArrayList r0 = r2.mObservers
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L18
                java.util.ArrayList r1 = r2.mObservers
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$AdapterDataObserver r1 = (android.support.v7.widget.RecyclerView.AdapterDataObserver) r1
                r1.onItemRangeRemoved(r3, r4)
                int r0 = r0 + (-1)
                goto L8
            L18:
                return
        }
    }

    public static abstract class AdapterDataObserver {
        public AdapterDataObserver() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onChanged() {
                r0 = this;
                return
        }

        public void onItemRangeChanged(int r1, int r2) {
                r0 = this;
                return
        }

        public void onItemRangeChanged(int r1, int r2, java.lang.Object r3) {
                r0 = this;
                r0.onItemRangeChanged(r1, r2)
                return
        }

        public void onItemRangeInserted(int r1, int r2) {
                r0 = this;
                return
        }

        public void onItemRangeMoved(int r1, int r2, int r3) {
                r0 = this;
                return
        }

        public void onItemRangeRemoved(int r1, int r2) {
                r0 = this;
                return
        }
    }

    public interface ChildDrawingOrderCallback {
        int onGetChildDrawingOrder(int r1, int r2);
    }

    public static class EdgeEffectFactory {
        public static final int DIRECTION_BOTTOM = 3;
        public static final int DIRECTION_LEFT = 0;
        public static final int DIRECTION_RIGHT = 2;
        public static final int DIRECTION_TOP = 1;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface EdgeDirection {
        }

        public EdgeEffectFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        protected android.widget.EdgeEffect createEdgeEffect(android.support.v7.widget.RecyclerView r1, int r2) {
                r0 = this;
                android.widget.EdgeEffect r2 = new android.widget.EdgeEffect
                android.content.Context r1 = r1.getContext()
                r2.<init>(r1)
                return r2
        }
    }

    public static abstract class ItemAnimator {
        public static final int FLAG_APPEARED_IN_PRE_LAYOUT = 4096;
        public static final int FLAG_CHANGED = 2;
        public static final int FLAG_INVALIDATED = 4;
        public static final int FLAG_MOVED = 2048;
        public static final int FLAG_REMOVED = 8;
        private long mAddDuration;
        private long mChangeDuration;
        private java.util.ArrayList<android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorFinishedListener> mFinishedListeners;
        private android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorListener mListener;
        private long mMoveDuration;
        private long mRemoveDuration;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface AdapterChanges {
        }

        public interface ItemAnimatorFinishedListener {
            void onAnimationsFinished();
        }

        interface ItemAnimatorListener {
            void onAnimationFinished(android.support.v7.widget.RecyclerView.ViewHolder r1);
        }

        public static class ItemHolderInfo {
            public int bottom;
            public int changeFlags;
            public int left;
            public int right;
            public int top;

            public ItemHolderInfo() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo setFrom(android.support.v7.widget.RecyclerView.ViewHolder r2) {
                    r1 = this;
                    r0 = 0
                    android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r2 = r1.setFrom(r2, r0)
                    return r2
            }

            public android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo setFrom(android.support.v7.widget.RecyclerView.ViewHolder r1, int r2) {
                    r0 = this;
                    android.view.View r1 = r1.itemView
                    int r2 = r1.getLeft()
                    r0.left = r2
                    int r2 = r1.getTop()
                    r0.top = r2
                    int r2 = r1.getRight()
                    r0.right = r2
                    int r1 = r1.getBottom()
                    r0.bottom = r1
                    return r0
            }
        }

        public ItemAnimator() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.mListener = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.mFinishedListeners = r0
                r0 = 120(0x78, double:5.93E-322)
                r2.mAddDuration = r0
                r2.mRemoveDuration = r0
                r0 = 250(0xfa, double:1.235E-321)
                r2.mMoveDuration = r0
                r2.mChangeDuration = r0
                return
        }

        static int buildAdapterChangeFlagsForAnimations(android.support.v7.widget.RecyclerView.ViewHolder r3) {
                int r0 = r3.mFlags
                r0 = r0 & 14
                boolean r1 = r3.isInvalid()
                if (r1 == 0) goto Lc
                r3 = 4
                return r3
            Lc:
                r1 = r0 & 4
                if (r1 != 0) goto L21
                int r1 = r3.getOldPosition()
                int r3 = r3.getAdapterPosition()
                r2 = -1
                if (r1 == r2) goto L21
                if (r3 == r2) goto L21
                if (r1 == r3) goto L21
                r0 = r0 | 2048(0x800, float:2.87E-42)
            L21:
                return r0
        }

        public abstract boolean animateAppearance(android.support.v7.widget.RecyclerView.ViewHolder r1, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3);

        public abstract boolean animateChange(android.support.v7.widget.RecyclerView.ViewHolder r1, android.support.v7.widget.RecyclerView.ViewHolder r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r4);

        public abstract boolean animateDisappearance(android.support.v7.widget.RecyclerView.ViewHolder r1, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3);

        public abstract boolean animatePersistence(android.support.v7.widget.RecyclerView.ViewHolder r1, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3);

        public boolean canReuseUpdatedViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1) {
                r0 = this;
                r1 = 1
                return r1
        }

        public boolean canReuseUpdatedViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1, java.util.List<java.lang.Object> r2) {
                r0 = this;
                boolean r1 = r0.canReuseUpdatedViewHolder(r1)
                return r1
        }

        public final void dispatchAnimationFinished(android.support.v7.widget.RecyclerView.ViewHolder r2) {
                r1 = this;
                r1.onAnimationFinished(r2)
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorListener r0 = r1.mListener
                if (r0 == 0) goto La
                r0.onAnimationFinished(r2)
            La:
                return
        }

        public final void dispatchAnimationStarted(android.support.v7.widget.RecyclerView.ViewHolder r1) {
                r0 = this;
                r0.onAnimationStarted(r1)
                return
        }

        public final void dispatchAnimationsFinished() {
                r3 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorFinishedListener> r0 = r3.mFinishedListeners
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L17
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorFinishedListener> r2 = r3.mFinishedListeners
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorFinishedListener r2 = (android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorFinishedListener) r2
                r2.onAnimationsFinished()
                int r1 = r1 + 1
                goto L7
            L17:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorFinishedListener> r0 = r3.mFinishedListeners
                r0.clear()
                return
        }

        public abstract void endAnimation(android.support.v7.widget.RecyclerView.ViewHolder r1);

        public abstract void endAnimations();

        public long getAddDuration() {
                r2 = this;
                long r0 = r2.mAddDuration
                return r0
        }

        public long getChangeDuration() {
                r2 = this;
                long r0 = r2.mChangeDuration
                return r0
        }

        public long getMoveDuration() {
                r2 = this;
                long r0 = r2.mMoveDuration
                return r0
        }

        public long getRemoveDuration() {
                r2 = this;
                long r0 = r2.mRemoveDuration
                return r0
        }

        public abstract boolean isRunning();

        public final boolean isRunning(android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorFinishedListener r3) {
                r2 = this;
                boolean r0 = r2.isRunning()
                if (r3 == 0) goto L11
                if (r0 != 0) goto Lc
                r3.onAnimationsFinished()
                goto L11
            Lc:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorFinishedListener> r1 = r2.mFinishedListeners
                r1.add(r3)
            L11:
                return r0
        }

        public android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo obtainHolderInfo() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r0 = new android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo
                r0.<init>()
                return r0
        }

        public void onAnimationFinished(android.support.v7.widget.RecyclerView.ViewHolder r1) {
                r0 = this;
                return
        }

        public void onAnimationStarted(android.support.v7.widget.RecyclerView.ViewHolder r1) {
                r0 = this;
                return
        }

        public android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo recordPostLayoutInformation(android.support.v7.widget.RecyclerView.State r1, android.support.v7.widget.RecyclerView.ViewHolder r2) {
                r0 = this;
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r1 = r0.obtainHolderInfo()
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r1 = r1.setFrom(r2)
                return r1
        }

        public android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo recordPreLayoutInformation(android.support.v7.widget.RecyclerView.State r1, android.support.v7.widget.RecyclerView.ViewHolder r2, int r3, java.util.List<java.lang.Object> r4) {
                r0 = this;
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r1 = r0.obtainHolderInfo()
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r1 = r1.setFrom(r2)
                return r1
        }

        public abstract void runPendingAnimations();

        public void setAddDuration(long r1) {
                r0 = this;
                r0.mAddDuration = r1
                return
        }

        public void setChangeDuration(long r1) {
                r0 = this;
                r0.mChangeDuration = r1
                return
        }

        void setListener(android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorListener r1) {
                r0 = this;
                r0.mListener = r1
                return
        }

        public void setMoveDuration(long r1) {
                r0 = this;
                r0.mMoveDuration = r1
                return
        }

        public void setRemoveDuration(long r1) {
                r0 = this;
                r0.mRemoveDuration = r1
                return
        }
    }

    private class ItemAnimatorRestoreListener implements android.support.v7.widget.RecyclerView.ItemAnimator.ItemAnimatorListener {
        final android.support.v7.widget.RecyclerView this$0;

        ItemAnimatorRestoreListener(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onAnimationFinished(android.support.v7.widget.RecyclerView.ViewHolder r3) {
                r2 = this;
                r0 = 1
                r3.setIsRecyclable(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r3.mShadowedHolder
                r1 = 0
                if (r0 == 0) goto Lf
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r3.mShadowingHolder
                if (r0 != 0) goto Lf
                r3.mShadowedHolder = r1
            Lf:
                r3.mShadowingHolder = r1
                boolean r0 = r3.shouldBeKeptAsChild()
                if (r0 != 0) goto L2f
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.view.View r1 = r3.itemView
                boolean r0 = r0.removeAnimatingView(r1)
                if (r0 != 0) goto L2f
                boolean r0 = r3.isTmpDetached()
                if (r0 == 0) goto L2f
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.view.View r3 = r3.itemView
                r1 = 0
                r0.removeDetachedView(r3, r1)
            L2f:
                return
        }
    }

    public static abstract class ItemDecoration {
        public ItemDecoration() {
                r0 = this;
                r0.<init>()
                return
        }

        @java.lang.Deprecated
        public void getItemOffsets(android.graphics.Rect r1, int r2, android.support.v7.widget.RecyclerView r3) {
                r0 = this;
                r2 = 0
                r1.set(r2, r2, r2, r2)
                return
        }

        public void getItemOffsets(android.graphics.Rect r1, android.view.View r2, android.support.v7.widget.RecyclerView r3, android.support.v7.widget.RecyclerView.State r4) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
                int r2 = r2.getViewLayoutPosition()
                r0.getItemOffsets(r1, r2, r3)
                return
        }

        @java.lang.Deprecated
        public void onDraw(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2) {
                r0 = this;
                return
        }

        public void onDraw(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2, android.support.v7.widget.RecyclerView.State r3) {
                r0 = this;
                r0.onDraw(r1, r2)
                return
        }

        @java.lang.Deprecated
        public void onDrawOver(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2) {
                r0 = this;
                return
        }

        public void onDrawOver(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2, android.support.v7.widget.RecyclerView.State r3) {
                r0 = this;
                r0.onDrawOver(r1, r2)
                return
        }
    }

    public static abstract class LayoutManager {
        boolean mAutoMeasure;
        android.support.v7.widget.ChildHelper mChildHelper;
        private int mHeight;
        private int mHeightMode;
        android.support.v7.widget.ViewBoundsCheck mHorizontalBoundCheck;
        private final android.support.v7.widget.ViewBoundsCheck.Callback mHorizontalBoundCheckCallback;
        boolean mIsAttachedToWindow;
        private boolean mItemPrefetchEnabled;
        private boolean mMeasurementCacheEnabled;
        int mPrefetchMaxCountObserved;
        boolean mPrefetchMaxObservedInInitialPrefetch;
        android.support.v7.widget.RecyclerView mRecyclerView;
        boolean mRequestedSimpleAnimations;
        android.support.v7.widget.RecyclerView.SmoothScroller mSmoothScroller;
        android.support.v7.widget.ViewBoundsCheck mVerticalBoundCheck;
        private final android.support.v7.widget.ViewBoundsCheck.Callback mVerticalBoundCheckCallback;
        private int mWidth;
        private int mWidthMode;



        public interface LayoutPrefetchRegistry {
            void addPosition(int r1, int r2);
        }

        public static class Properties {
            public int orientation;
            public boolean reverseLayout;
            public int spanCount;
            public boolean stackFromEnd;

            public Properties() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public LayoutManager() {
                r2 = this;
                r2.<init>()
                android.support.v7.widget.RecyclerView$LayoutManager$1 r0 = new android.support.v7.widget.RecyclerView$LayoutManager$1
                r0.<init>(r2)
                r2.mHorizontalBoundCheckCallback = r0
                android.support.v7.widget.RecyclerView$LayoutManager$2 r0 = new android.support.v7.widget.RecyclerView$LayoutManager$2
                r0.<init>(r2)
                r2.mVerticalBoundCheckCallback = r0
                android.support.v7.widget.ViewBoundsCheck r0 = new android.support.v7.widget.ViewBoundsCheck
                android.support.v7.widget.ViewBoundsCheck$Callback r1 = r2.mHorizontalBoundCheckCallback
                r0.<init>(r1)
                r2.mHorizontalBoundCheck = r0
                android.support.v7.widget.ViewBoundsCheck r0 = new android.support.v7.widget.ViewBoundsCheck
                android.support.v7.widget.ViewBoundsCheck$Callback r1 = r2.mVerticalBoundCheckCallback
                r0.<init>(r1)
                r2.mVerticalBoundCheck = r0
                r0 = 0
                r2.mRequestedSimpleAnimations = r0
                r2.mIsAttachedToWindow = r0
                r2.mAutoMeasure = r0
                r0 = 1
                r2.mMeasurementCacheEnabled = r0
                r2.mItemPrefetchEnabled = r0
                return
        }

        private void addViewInt(android.view.View r5, int r6, boolean r7) {
                r4 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r5)
                if (r7 != 0) goto L15
                boolean r7 = r0.isRemoved()
                if (r7 == 0) goto Ld
                goto L15
            Ld:
                android.support.v7.widget.RecyclerView r7 = r4.mRecyclerView
                android.support.v7.widget.ViewInfoStore r7 = r7.mViewInfoStore
                r7.removeFromDisappearedInLayout(r0)
                goto L1c
            L15:
                android.support.v7.widget.RecyclerView r7 = r4.mRecyclerView
                android.support.v7.widget.ViewInfoStore r7 = r7.mViewInfoStore
                r7.addToDisappearedInLayout(r0)
            L1c:
                android.view.ViewGroup$LayoutParams r7 = r5.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r7 = (android.support.v7.widget.RecyclerView.LayoutParams) r7
                boolean r1 = r0.wasReturnedFromScrap()
                r2 = 0
                if (r1 != 0) goto L91
                boolean r1 = r0.isScrap()
                if (r1 == 0) goto L30
                goto L91
            L30:
                android.view.ViewParent r1 = r5.getParent()
                android.support.v7.widget.RecyclerView r3 = r4.mRecyclerView
                if (r1 != r3) goto L79
                android.support.v7.widget.ChildHelper r1 = r4.mChildHelper
                int r1 = r1.indexOfChild(r5)
                r3 = -1
                if (r6 != r3) goto L47
                android.support.v7.widget.ChildHelper r6 = r4.mChildHelper
                int r6 = r6.getChildCount()
            L47:
                if (r1 == r3) goto L53
                if (r1 == r6) goto La7
                android.support.v7.widget.RecyclerView r5 = r4.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r5 = r5.mLayout
                r5.moveView(r1, r6)
                goto La7
            L53:
                java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                java.lang.String r0 = "Added View has RecyclerView as parent but view is not a real child. Unfiltered index:"
                r7.append(r0)
                android.support.v7.widget.RecyclerView r0 = r4.mRecyclerView
                int r5 = r0.indexOfChild(r5)
                r7.append(r5)
                android.support.v7.widget.RecyclerView r5 = r4.mRecyclerView
                java.lang.String r5 = r5.exceptionLabel()
                r7.append(r5)
                java.lang.String r5 = r7.toString()
                r6.<init>(r5)
                throw r6
            L79:
                android.support.v7.widget.ChildHelper r1 = r4.mChildHelper
                r1.addView(r5, r6, r2)
                r6 = 1
                r7.mInsetsDirty = r6
                android.support.v7.widget.RecyclerView$SmoothScroller r6 = r4.mSmoothScroller
                if (r6 == 0) goto La7
                boolean r6 = r6.isRunning()
                if (r6 == 0) goto La7
                android.support.v7.widget.RecyclerView$SmoothScroller r6 = r4.mSmoothScroller
                r6.onChildAttachedToWindow(r5)
                goto La7
            L91:
                boolean r1 = r0.isScrap()
                if (r1 == 0) goto L9b
                r0.unScrap()
                goto L9e
            L9b:
                r0.clearReturnedFromScrapFlag()
            L9e:
                android.support.v7.widget.ChildHelper r1 = r4.mChildHelper
                android.view.ViewGroup$LayoutParams r3 = r5.getLayoutParams()
                r1.attachViewToParent(r5, r6, r3, r2)
            La7:
                boolean r5 = r7.mPendingInvalidate
                if (r5 == 0) goto Lb2
                android.view.View r5 = r0.itemView
                r5.invalidate()
                r7.mPendingInvalidate = r2
            Lb2:
                return
        }

        public static int chooseSize(int r2, int r3, int r4) {
                int r0 = android.view.View.MeasureSpec.getMode(r2)
                int r2 = android.view.View.MeasureSpec.getSize(r2)
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r0 == r1) goto L15
                r1 = 1073741824(0x40000000, float:2.0)
                if (r0 == r1) goto L14
                int r2 = java.lang.Math.max(r3, r4)
            L14:
                return r2
            L15:
                int r3 = java.lang.Math.max(r3, r4)
                int r2 = java.lang.Math.min(r2, r3)
                return r2
        }

        private void detachViewInternal(int r1, android.view.View r2) {
                r0 = this;
                android.support.v7.widget.ChildHelper r2 = r0.mChildHelper
                r2.detachViewFromParent(r1)
                return
        }

        public static int getChildMeasureSpec(int r4, int r5, int r6, int r7, boolean r8) {
                int r4 = r4 - r6
                r6 = 0
                int r4 = java.lang.Math.max(r6, r4)
                r0 = -2
                r1 = -1
                r2 = -2147483648(0xffffffff80000000, float:-0.0)
                r3 = 1073741824(0x40000000, float:2.0)
                if (r8 == 0) goto L1a
                if (r7 < 0) goto L11
                goto L1c
            L11:
                if (r7 != r1) goto L2f
                if (r5 == r2) goto L20
                if (r5 == 0) goto L2f
                if (r5 == r3) goto L20
                goto L2f
            L1a:
                if (r7 < 0) goto L1e
            L1c:
                r5 = r3
                goto L31
            L1e:
                if (r7 != r1) goto L22
            L20:
                r7 = r4
                goto L31
            L22:
                if (r7 != r0) goto L2f
                if (r5 == r2) goto L2c
                if (r5 != r3) goto L29
                goto L2c
            L29:
                r7 = r4
                r5 = r6
                goto L31
            L2c:
                r7 = r4
                r5 = r2
                goto L31
            L2f:
                r5 = r6
                r7 = r5
            L31:
                int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r5)
                return r4
        }

        @java.lang.Deprecated
        public static int getChildMeasureSpec(int r1, int r2, int r3, boolean r4) {
                int r1 = r1 - r2
                r2 = 0
                int r1 = java.lang.Math.max(r2, r1)
                r0 = 1073741824(0x40000000, float:2.0)
                if (r4 == 0) goto Lf
                if (r3 < 0) goto Ld
                goto L11
            Ld:
                r3 = r2
                goto L1e
            Lf:
                if (r3 < 0) goto L13
            L11:
                r2 = r0
                goto L1e
            L13:
                r4 = -1
                if (r3 != r4) goto L18
                r3 = r1
                goto L11
            L18:
                r4 = -2
                if (r3 != r4) goto Ld
                r2 = -2147483648(0xffffffff80000000, float:-0.0)
                r3 = r1
            L1e:
                int r1 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r2)
                return r1
        }

        private int[] getChildRectangleOnScreenScrollAmount(android.support.v7.widget.RecyclerView r8, android.view.View r9, android.graphics.Rect r10, boolean r11) {
                r7 = this;
                r8 = 2
                int[] r8 = new int[r8]
                int r11 = r7.getPaddingLeft()
                int r0 = r7.getPaddingTop()
                int r1 = r7.getWidth()
                int r2 = r7.getPaddingRight()
                int r1 = r1 - r2
                int r2 = r7.getHeight()
                int r3 = r7.getPaddingBottom()
                int r2 = r2 - r3
                int r3 = r9.getLeft()
                int r4 = r10.left
                int r3 = r3 + r4
                int r4 = r9.getScrollX()
                int r3 = r3 - r4
                int r4 = r9.getTop()
                int r5 = r10.top
                int r4 = r4 + r5
                int r9 = r9.getScrollY()
                int r4 = r4 - r9
                int r9 = r10.width()
                int r9 = r9 + r3
                int r10 = r10.height()
                int r10 = r10 + r4
                int r3 = r3 - r11
                r11 = 0
                int r5 = java.lang.Math.min(r11, r3)
                int r4 = r4 - r0
                int r0 = java.lang.Math.min(r11, r4)
                int r9 = r9 - r1
                int r1 = java.lang.Math.max(r11, r9)
                int r10 = r10 - r2
                int r10 = java.lang.Math.max(r11, r10)
                int r2 = r7.getLayoutDirection()
                r6 = 1
                if (r2 != r6) goto L63
                if (r1 == 0) goto L5e
                goto L6b
            L5e:
                int r1 = java.lang.Math.max(r5, r9)
                goto L6b
            L63:
                if (r5 == 0) goto L66
                goto L6a
            L66:
                int r5 = java.lang.Math.min(r3, r1)
            L6a:
                r1 = r5
            L6b:
                if (r0 == 0) goto L6e
                goto L72
            L6e:
                int r0 = java.lang.Math.min(r4, r10)
            L72:
                r8[r11] = r1
                r8[r6] = r0
                return r8
        }

        public static android.support.v7.widget.RecyclerView.LayoutManager.Properties getProperties(android.content.Context r2, android.util.AttributeSet r3, int r4, int r5) {
                android.support.v7.widget.RecyclerView$LayoutManager$Properties r0 = new android.support.v7.widget.RecyclerView$LayoutManager$Properties
                r0.<init>()
                int[] r1 = android.support.v7.recyclerview.R.styleable.RecyclerView
                android.content.res.TypedArray r2 = r2.obtainStyledAttributes(r3, r1, r4, r5)
                int r3 = android.support.v7.recyclerview.R.styleable.RecyclerView_android_orientation
                r4 = 1
                int r3 = r2.getInt(r3, r4)
                r0.orientation = r3
                int r3 = android.support.v7.recyclerview.R.styleable.RecyclerView_spanCount
                int r3 = r2.getInt(r3, r4)
                r0.spanCount = r3
                int r3 = android.support.v7.recyclerview.R.styleable.RecyclerView_reverseLayout
                r4 = 0
                boolean r3 = r2.getBoolean(r3, r4)
                r0.reverseLayout = r3
                int r3 = android.support.v7.recyclerview.R.styleable.RecyclerView_stackFromEnd
                boolean r3 = r2.getBoolean(r3, r4)
                r0.stackFromEnd = r3
                r2.recycle()
                return r0
        }

        private boolean isFocusedChildVisibleAfterScrolling(android.support.v7.widget.RecyclerView r7, int r8, int r9) {
                r6 = this;
                android.view.View r7 = r7.getFocusedChild()
                r0 = 0
                if (r7 != 0) goto L8
                return r0
            L8:
                int r1 = r6.getPaddingLeft()
                int r2 = r6.getPaddingTop()
                int r3 = r6.getWidth()
                int r4 = r6.getPaddingRight()
                int r3 = r3 - r4
                int r4 = r6.getHeight()
                int r5 = r6.getPaddingBottom()
                int r4 = r4 - r5
                android.support.v7.widget.RecyclerView r5 = r6.mRecyclerView
                android.graphics.Rect r5 = r5.mTempRect
                r6.getDecoratedBoundsWithMargins(r7, r5)
                int r7 = r5.left
                int r7 = r7 - r8
                if (r7 >= r3) goto L40
                int r7 = r5.right
                int r7 = r7 - r8
                if (r7 <= r1) goto L40
                int r7 = r5.top
                int r7 = r7 - r9
                if (r7 >= r4) goto L40
                int r7 = r5.bottom
                int r7 = r7 - r9
                if (r7 > r2) goto L3e
                goto L40
            L3e:
                r7 = 1
                return r7
            L40:
                return r0
        }

        private static boolean isMeasurementUpToDate(int r3, int r4, int r5) {
                int r0 = android.view.View.MeasureSpec.getMode(r4)
                int r4 = android.view.View.MeasureSpec.getSize(r4)
                r1 = 0
                if (r5 <= 0) goto Le
                if (r3 == r5) goto Le
                return r1
            Le:
                r5 = -2147483648(0xffffffff80000000, float:-0.0)
                r2 = 1
                if (r0 == r5) goto L1f
                if (r0 == 0) goto L1e
                r5 = 1073741824(0x40000000, float:2.0)
                if (r0 == r5) goto L1a
                return r1
            L1a:
                if (r4 != r3) goto L1d
                r1 = r2
            L1d:
                return r1
            L1e:
                return r2
            L1f:
                if (r4 < r3) goto L22
                r1 = r2
            L22:
                return r1
        }

        private void scrapOrRecycleView(android.support.v7.widget.RecyclerView.Recycler r3, int r4, android.view.View r5) {
                r2 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r5)
                boolean r1 = r0.shouldIgnore()
                if (r1 == 0) goto Lb
                return
            Lb:
                boolean r1 = r0.isInvalid()
                if (r1 == 0) goto L28
                boolean r1 = r0.isRemoved()
                if (r1 != 0) goto L28
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                boolean r1 = r1.hasStableIds()
                if (r1 != 0) goto L28
                r2.removeViewAt(r4)
                r3.recycleViewHolderInternal(r0)
                goto L35
            L28:
                r2.detachViewAt(r4)
                r3.scrapView(r5)
                android.support.v7.widget.RecyclerView r3 = r2.mRecyclerView
                android.support.v7.widget.ViewInfoStore r3 = r3.mViewInfoStore
                r3.onViewDetached(r0)
            L35:
                return
        }

        public void addDisappearingView(android.view.View r2) {
                r1 = this;
                r0 = -1
                r1.addDisappearingView(r2, r0)
                return
        }

        public void addDisappearingView(android.view.View r2, int r3) {
                r1 = this;
                r0 = 1
                r1.addViewInt(r2, r3, r0)
                return
        }

        public void addView(android.view.View r2) {
                r1 = this;
                r0 = -1
                r1.addView(r2, r0)
                return
        }

        public void addView(android.view.View r2, int r3) {
                r1 = this;
                r0 = 0
                r1.addViewInt(r2, r3, r0)
                return
        }

        public void assertInLayoutOrScroll(java.lang.String r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                r0.assertInLayoutOrScroll(r2)
            L7:
                return
        }

        public void assertNotInLayoutOrScroll(java.lang.String r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                r0.assertNotInLayoutOrScroll(r2)
            L7:
                return
        }

        public void attachView(android.view.View r2) {
                r1 = this;
                r0 = -1
                r1.attachView(r2, r0)
                return
        }

        public void attachView(android.view.View r2, int r3) {
                r1 = this;
                android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                r1.attachView(r2, r3, r0)
                return
        }

        public void attachView(android.view.View r3, int r4, android.support.v7.widget.RecyclerView.LayoutParams r5) {
                r2 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r3)
                boolean r1 = r0.isRemoved()
                if (r1 == 0) goto L12
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.ViewInfoStore r1 = r1.mViewInfoStore
                r1.addToDisappearedInLayout(r0)
                goto L19
            L12:
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.ViewInfoStore r1 = r1.mViewInfoStore
                r1.removeFromDisappearedInLayout(r0)
            L19:
                android.support.v7.widget.ChildHelper r1 = r2.mChildHelper
                boolean r0 = r0.isRemoved()
                r1.attachViewToParent(r3, r4, r5, r0)
                return
        }

        public void calculateItemDecorationsForChild(android.view.View r2, android.graphics.Rect r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 != 0) goto L9
                r2 = 0
                r3.set(r2, r2, r2, r2)
                return
            L9:
                android.graphics.Rect r2 = r0.getItemDecorInsetsForChild(r2)
                r3.set(r2)
                return
        }

        public boolean canScrollHorizontally() {
                r1 = this;
                r0 = 0
                return r0
        }

        public boolean canScrollVertically() {
                r1 = this;
                r0 = 0
                return r0
        }

        public boolean checkLayoutParams(android.support.v7.widget.RecyclerView.LayoutParams r1) {
                r0 = this;
                if (r1 == 0) goto L4
                r1 = 1
                goto L5
            L4:
                r1 = 0
            L5:
                return r1
        }

        public void collectAdjacentPrefetchPositions(int r1, int r2, android.support.v7.widget.RecyclerView.State r3, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r4) {
                r0 = this;
                return
        }

        public void collectInitialPrefetchPositions(int r1, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r2) {
                r0 = this;
                return
        }

        public int computeHorizontalScrollExtent(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int computeHorizontalScrollOffset(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int computeHorizontalScrollRange(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int computeVerticalScrollExtent(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int computeVerticalScrollOffset(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int computeVerticalScrollRange(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void detachAndScrapAttachedViews(android.support.v7.widget.RecyclerView.Recycler r3) {
                r2 = this;
                int r0 = r2.getChildCount()
                int r0 = r0 + (-1)
            L6:
                if (r0 < 0) goto L12
                android.view.View r1 = r2.getChildAt(r0)
                r2.scrapOrRecycleView(r3, r0, r1)
                int r0 = r0 + (-1)
                goto L6
            L12:
                return
        }

        public void detachAndScrapView(android.view.View r2, android.support.v7.widget.RecyclerView.Recycler r3) {
                r1 = this;
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                int r0 = r0.indexOfChild(r2)
                r1.scrapOrRecycleView(r3, r0, r2)
                return
        }

        public void detachAndScrapViewAt(int r2, android.support.v7.widget.RecyclerView.Recycler r3) {
                r1 = this;
                android.view.View r0 = r1.getChildAt(r2)
                r1.scrapOrRecycleView(r3, r2, r0)
                return
        }

        public void detachView(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                int r0 = r0.indexOfChild(r2)
                if (r0 < 0) goto Lb
                r1.detachViewInternal(r0, r2)
            Lb:
                return
        }

        public void detachViewAt(int r2) {
                r1 = this;
                android.view.View r0 = r1.getChildAt(r2)
                r1.detachViewInternal(r2, r0)
                return
        }

        void dispatchAttachedToWindow(android.support.v7.widget.RecyclerView r2) {
                r1 = this;
                r0 = 1
                r1.mIsAttachedToWindow = r0
                r1.onAttachedToWindow(r2)
                return
        }

        void dispatchDetachedFromWindow(android.support.v7.widget.RecyclerView r2, android.support.v7.widget.RecyclerView.Recycler r3) {
                r1 = this;
                r0 = 0
                r1.mIsAttachedToWindow = r0
                r1.onDetachedFromWindow(r2, r3)
                return
        }

        public void endAnimation(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$ItemAnimator r0 = r0.mItemAnimator
                if (r0 == 0) goto L11
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$ItemAnimator r0 = r0.mItemAnimator
                android.support.v7.widget.RecyclerView$ViewHolder r2 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r2)
                r0.endAnimation(r2)
            L11:
                return
        }

        public android.view.View findContainingItemView(android.view.View r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.view.View r3 = r0.findContainingItemView(r3)
                if (r3 != 0) goto Ld
                return r1
            Ld:
                android.support.v7.widget.ChildHelper r0 = r2.mChildHelper
                boolean r0 = r0.isHidden(r3)
                if (r0 == 0) goto L16
                return r1
            L16:
                return r3
        }

        public android.view.View findViewByPosition(int r6) {
                r5 = this;
                int r0 = r5.getChildCount()
                r1 = 0
            L5:
                if (r1 >= r0) goto L32
                android.view.View r2 = r5.getChildAt(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r2)
                if (r3 != 0) goto L12
                goto L2f
            L12:
                int r4 = r3.getLayoutPosition()
                if (r4 != r6) goto L2f
                boolean r4 = r3.shouldIgnore()
                if (r4 != 0) goto L2f
                android.support.v7.widget.RecyclerView r4 = r5.mRecyclerView
                android.support.v7.widget.RecyclerView$State r4 = r4.mState
                boolean r4 = r4.isPreLayout()
                if (r4 != 0) goto L2e
                boolean r3 = r3.isRemoved()
                if (r3 != 0) goto L2f
            L2e:
                return r2
            L2f:
                int r1 = r1 + 1
                goto L5
            L32:
                r6 = 0
                return r6
        }

        public abstract android.support.v7.widget.RecyclerView.LayoutParams generateDefaultLayoutParams();

        public android.support.v7.widget.RecyclerView.LayoutParams generateLayoutParams(android.content.Context r2, android.util.AttributeSet r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$LayoutParams r0 = new android.support.v7.widget.RecyclerView$LayoutParams
                r0.<init>(r2, r3)
                return r0
        }

        public android.support.v7.widget.RecyclerView.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
                r1 = this;
                boolean r0 = r2 instanceof android.support.v7.widget.RecyclerView.LayoutParams
                if (r0 == 0) goto Lc
                android.support.v7.widget.RecyclerView$LayoutParams r0 = new android.support.v7.widget.RecyclerView$LayoutParams
                android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
                r0.<init>(r2)
                return r0
            Lc:
                boolean r0 = r2 instanceof android.view.ViewGroup.MarginLayoutParams
                if (r0 == 0) goto L18
                android.support.v7.widget.RecyclerView$LayoutParams r0 = new android.support.v7.widget.RecyclerView$LayoutParams
                android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
                r0.<init>(r2)
                return r0
            L18:
                android.support.v7.widget.RecyclerView$LayoutParams r0 = new android.support.v7.widget.RecyclerView$LayoutParams
                r0.<init>(r2)
                return r0
        }

        public int getBaseline() {
                r1 = this;
                r0 = -1
                return r0
        }

        public int getBottomDecorationHeight(android.view.View r1) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.graphics.Rect r1 = r1.mDecorInsets
                int r1 = r1.bottom
                return r1
        }

        public android.view.View getChildAt(int r2) {
                r1 = this;
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                if (r0 == 0) goto L9
                android.view.View r2 = r0.getChildAt(r2)
                goto La
            L9:
                r2 = 0
            La:
                return r2
        }

        public int getChildCount() {
                r1 = this;
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                if (r0 == 0) goto L9
                int r0 = r0.getChildCount()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public boolean getClipToPadding() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto La
                boolean r0 = r0.mClipToPadding
                if (r0 == 0) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }

        public int getColumnCountForAccessibility(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
                r0 = this;
                android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
                r2 = 1
                if (r1 == 0) goto L18
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                if (r1 != 0) goto La
                goto L18
            La:
                boolean r1 = r0.canScrollHorizontally()
                if (r1 == 0) goto L18
                android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                int r2 = r1.getItemCount()
            L18:
                return r2
        }

        public int getDecoratedBottom(android.view.View r2) {
                r1 = this;
                int r0 = r2.getBottom()
                int r2 = r1.getBottomDecorationHeight(r2)
                int r0 = r0 + r2
                return r0
        }

        public void getDecoratedBoundsWithMargins(android.view.View r1, android.graphics.Rect r2) {
                r0 = this;
                android.support.v7.widget.RecyclerView.getDecoratedBoundsWithMarginsInt(r1, r2)
                return
        }

        public int getDecoratedLeft(android.view.View r2) {
                r1 = this;
                int r0 = r2.getLeft()
                int r2 = r1.getLeftDecorationWidth(r2)
                int r0 = r0 - r2
                return r0
        }

        public int getDecoratedMeasuredHeight(android.view.View r3) {
                r2 = this;
                android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.graphics.Rect r0 = r0.mDecorInsets
                int r3 = r3.getMeasuredHeight()
                int r1 = r0.top
                int r3 = r3 + r1
                int r0 = r0.bottom
                int r3 = r3 + r0
                return r3
        }

        public int getDecoratedMeasuredWidth(android.view.View r3) {
                r2 = this;
                android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.graphics.Rect r0 = r0.mDecorInsets
                int r3 = r3.getMeasuredWidth()
                int r1 = r0.left
                int r3 = r3 + r1
                int r0 = r0.right
                int r3 = r3 + r0
                return r3
        }

        public int getDecoratedRight(android.view.View r2) {
                r1 = this;
                int r0 = r2.getRight()
                int r2 = r1.getRightDecorationWidth(r2)
                int r0 = r0 + r2
                return r0
        }

        public int getDecoratedTop(android.view.View r2) {
                r1 = this;
                int r0 = r2.getTop()
                int r2 = r1.getTopDecorationHeight(r2)
                int r0 = r0 - r2
                return r0
        }

        public android.view.View getFocusedChild() {
                r3 = this;
                android.support.v7.widget.RecyclerView r0 = r3.mRecyclerView
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                android.view.View r0 = r0.getFocusedChild()
                if (r0 == 0) goto L16
                android.support.v7.widget.ChildHelper r2 = r3.mChildHelper
                boolean r2 = r2.isHidden(r0)
                if (r2 == 0) goto L15
                goto L16
            L15:
                return r0
            L16:
                return r1
        }

        public int getHeight() {
                r1 = this;
                int r0 = r1.mHeight
                return r0
        }

        public int getHeightMode() {
                r1 = this;
                int r0 = r1.mHeightMode
                return r0
        }

        public int getItemCount() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.getAdapter()
                goto La
            L9:
                r0 = 0
            La:
                if (r0 == 0) goto L11
                int r0 = r0.getItemCount()
                goto L12
            L11:
                r0 = 0
            L12:
                return r0
        }

        public int getItemViewType(android.view.View r1) {
                r0 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r1 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r1)
                int r1 = r1.getItemViewType()
                return r1
        }

        public int getLayoutDirection() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r0)
                return r0
        }

        public int getLeftDecorationWidth(android.view.View r1) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.graphics.Rect r1 = r1.mDecorInsets
                int r1 = r1.left
                return r1
        }

        public int getMinimumHeight() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                int r0 = android.support.v4.view.ViewCompat.getMinimumHeight(r0)
                return r0
        }

        public int getMinimumWidth() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                int r0 = android.support.v4.view.ViewCompat.getMinimumWidth(r0)
                return r0
        }

        public int getPaddingBottom() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = r0.getPaddingBottom()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPaddingEnd() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = android.support.v4.view.ViewCompat.getPaddingEnd(r0)
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPaddingLeft() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = r0.getPaddingLeft()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPaddingRight() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = r0.getPaddingRight()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPaddingStart() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = android.support.v4.view.ViewCompat.getPaddingStart(r0)
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPaddingTop() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                int r0 = r0.getPaddingTop()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public int getPosition(android.view.View r1) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                int r1 = r1.getViewLayoutPosition()
                return r1
        }

        public int getRightDecorationWidth(android.view.View r1) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.graphics.Rect r1 = r1.mDecorInsets
                int r1 = r1.right
                return r1
        }

        public int getRowCountForAccessibility(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
                r0 = this;
                android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
                r2 = 1
                if (r1 == 0) goto L18
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                if (r1 != 0) goto La
                goto L18
            La:
                boolean r1 = r0.canScrollVertically()
                if (r1 == 0) goto L18
                android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                int r2 = r1.getItemCount()
            L18:
                return r2
        }

        public int getSelectionModeForAccessibility(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        public int getTopDecorationHeight(android.view.View r1) {
                r0 = this;
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.graphics.Rect r1 = r1.mDecorInsets
                int r1 = r1.top
                return r1
        }

        public void getTransformedBoundingBox(android.view.View r6, boolean r7, android.graphics.Rect r8) {
                r5 = this;
                if (r7 == 0) goto L22
                android.view.ViewGroup$LayoutParams r7 = r6.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r7 = (android.support.v7.widget.RecyclerView.LayoutParams) r7
                android.graphics.Rect r7 = r7.mDecorInsets
                int r0 = r7.left
                int r0 = -r0
                int r1 = r7.top
                int r1 = -r1
                int r2 = r6.getWidth()
                int r3 = r7.right
                int r2 = r2 + r3
                int r3 = r6.getHeight()
                int r7 = r7.bottom
                int r3 = r3 + r7
                r8.set(r0, r1, r2, r3)
                goto L2e
            L22:
                int r7 = r6.getWidth()
                int r0 = r6.getHeight()
                r1 = 0
                r8.set(r1, r1, r7, r0)
            L2e:
                android.support.v7.widget.RecyclerView r7 = r5.mRecyclerView
                if (r7 == 0) goto L6b
                android.graphics.Matrix r7 = r6.getMatrix()
                if (r7 == 0) goto L6b
                boolean r0 = r7.isIdentity()
                if (r0 != 0) goto L6b
                android.support.v7.widget.RecyclerView r0 = r5.mRecyclerView
                android.graphics.RectF r0 = r0.mTempRectF
                r0.set(r8)
                r7.mapRect(r0)
                float r7 = r0.left
                double r1 = (double) r7
                double r1 = java.lang.Math.floor(r1)
                int r7 = (int) r1
                float r1 = r0.top
                double r1 = (double) r1
                double r1 = java.lang.Math.floor(r1)
                int r1 = (int) r1
                float r2 = r0.right
                double r2 = (double) r2
                double r2 = java.lang.Math.ceil(r2)
                int r2 = (int) r2
                float r0 = r0.bottom
                double r3 = (double) r0
                double r3 = java.lang.Math.ceil(r3)
                int r0 = (int) r3
                r8.set(r7, r1, r2, r0)
            L6b:
                int r7 = r6.getLeft()
                int r6 = r6.getTop()
                r8.offset(r7, r6)
                return
        }

        public int getWidth() {
                r1 = this;
                int r0 = r1.mWidth
                return r0
        }

        public int getWidthMode() {
                r1 = this;
                int r0 = r1.mWidthMode
                return r0
        }

        boolean hasFlexibleChildInBothOrientations() {
                r5 = this;
                int r0 = r5.getChildCount()
                r1 = 0
                r2 = r1
            L6:
                if (r2 >= r0) goto L1d
                android.view.View r3 = r5.getChildAt(r2)
                android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
                int r4 = r3.width
                if (r4 >= 0) goto L1a
                int r3 = r3.height
                if (r3 >= 0) goto L1a
                r0 = 1
                return r0
            L1a:
                int r2 = r2 + 1
                goto L6
            L1d:
                return r1
        }

        public boolean hasFocus() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto Lc
                boolean r0 = r0.hasFocus()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        public void ignoreView(android.view.View r3) {
                r2 = this;
                android.view.ViewParent r0 = r3.getParent()
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                if (r0 != r1) goto L20
                int r0 = r1.indexOfChild(r3)
                r1 = -1
                if (r0 == r1) goto L20
                android.support.v7.widget.RecyclerView$ViewHolder r3 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r3)
                r0 = 128(0x80, float:1.8E-43)
                r3.addFlags(r0)
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                android.support.v7.widget.ViewInfoStore r0 = r0.mViewInfoStore
                r0.removeViewHolder(r3)
                return
            L20:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "View should be fully attached to be ignored"
                r0.append(r1)
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                java.lang.String r1 = r1.exceptionLabel()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r3.<init>(r0)
                throw r3
        }

        public boolean isAttachedToWindow() {
                r1 = this;
                boolean r0 = r1.mIsAttachedToWindow
                return r0
        }

        public boolean isAutoMeasureEnabled() {
                r1 = this;
                boolean r0 = r1.mAutoMeasure
                return r0
        }

        public boolean isFocused() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto Lc
                boolean r0 = r0.isFocused()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        public final boolean isItemPrefetchEnabled() {
                r1 = this;
                boolean r0 = r1.mItemPrefetchEnabled
                return r0
        }

        public boolean isLayoutHierarchical(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        public boolean isMeasurementCacheEnabled() {
                r1 = this;
                boolean r0 = r1.mMeasurementCacheEnabled
                return r0
        }

        public boolean isSmoothScrolling() {
                r1 = this;
                android.support.v7.widget.RecyclerView$SmoothScroller r0 = r1.mSmoothScroller
                if (r0 == 0) goto Lc
                boolean r0 = r0.isRunning()
                if (r0 == 0) goto Lc
                r0 = 1
                goto Ld
            Lc:
                r0 = 0
            Ld:
                return r0
        }

        public boolean isViewPartiallyVisible(android.view.View r3, boolean r4, boolean r5) {
                r2 = this;
                android.support.v7.widget.ViewBoundsCheck r5 = r2.mHorizontalBoundCheck
                r0 = 24579(0x6003, float:3.4443E-41)
                boolean r5 = r5.isViewWithinBoundFlags(r3, r0)
                r1 = 1
                if (r5 == 0) goto L15
                android.support.v7.widget.ViewBoundsCheck r5 = r2.mVerticalBoundCheck
                boolean r3 = r5.isViewWithinBoundFlags(r3, r0)
                if (r3 == 0) goto L15
                r3 = r1
                goto L16
            L15:
                r3 = 0
            L16:
                if (r4 == 0) goto L19
                return r3
            L19:
                r3 = r3 ^ r1
                return r3
        }

        public void layoutDecorated(android.view.View r3, int r4, int r5, int r6, int r7) {
                r2 = this;
                android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.graphics.Rect r0 = r0.mDecorInsets
                int r1 = r0.left
                int r4 = r4 + r1
                int r1 = r0.top
                int r5 = r5 + r1
                int r1 = r0.right
                int r6 = r6 - r1
                int r0 = r0.bottom
                int r7 = r7 - r0
                r3.layout(r4, r5, r6, r7)
                return
        }

        public void layoutDecoratedWithMargins(android.view.View r4, int r5, int r6, int r7, int r8) {
                r3 = this;
                android.view.ViewGroup$LayoutParams r0 = r4.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.graphics.Rect r1 = r0.mDecorInsets
                int r2 = r1.left
                int r5 = r5 + r2
                int r2 = r0.leftMargin
                int r5 = r5 + r2
                int r2 = r1.top
                int r6 = r6 + r2
                int r2 = r0.topMargin
                int r6 = r6 + r2
                int r2 = r1.right
                int r7 = r7 - r2
                int r2 = r0.rightMargin
                int r7 = r7 - r2
                int r1 = r1.bottom
                int r8 = r8 - r1
                int r0 = r0.bottomMargin
                int r8 = r8 - r0
                r4.layout(r5, r6, r7, r8)
                return
        }

        public void measureChild(android.view.View r6, int r7, int r8) {
                r5 = this;
                android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.support.v7.widget.RecyclerView r1 = r5.mRecyclerView
                android.graphics.Rect r1 = r1.getItemDecorInsetsForChild(r6)
                int r2 = r1.left
                int r3 = r1.right
                int r2 = r2 + r3
                int r7 = r7 + r2
                int r2 = r1.top
                int r1 = r1.bottom
                int r2 = r2 + r1
                int r8 = r8 + r2
                int r1 = r5.getWidth()
                int r2 = r5.getWidthMode()
                int r3 = r5.getPaddingLeft()
                int r4 = r5.getPaddingRight()
                int r3 = r3 + r4
                int r3 = r3 + r7
                int r7 = r0.width
                boolean r4 = r5.canScrollHorizontally()
                int r7 = getChildMeasureSpec(r1, r2, r3, r7, r4)
                int r1 = r5.getHeight()
                int r2 = r5.getHeightMode()
                int r3 = r5.getPaddingTop()
                int r4 = r5.getPaddingBottom()
                int r3 = r3 + r4
                int r3 = r3 + r8
                int r8 = r0.height
                boolean r4 = r5.canScrollVertically()
                int r8 = getChildMeasureSpec(r1, r2, r3, r8, r4)
                boolean r0 = r5.shouldMeasureChild(r6, r7, r8, r0)
                if (r0 == 0) goto L59
                r6.measure(r7, r8)
            L59:
                return
        }

        public void measureChildWithMargins(android.view.View r6, int r7, int r8) {
                r5 = this;
                android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
                android.support.v7.widget.RecyclerView r1 = r5.mRecyclerView
                android.graphics.Rect r1 = r1.getItemDecorInsetsForChild(r6)
                int r2 = r1.left
                int r3 = r1.right
                int r2 = r2 + r3
                int r7 = r7 + r2
                int r2 = r1.top
                int r1 = r1.bottom
                int r2 = r2 + r1
                int r8 = r8 + r2
                int r1 = r5.getWidth()
                int r2 = r5.getWidthMode()
                int r3 = r5.getPaddingLeft()
                int r4 = r5.getPaddingRight()
                int r3 = r3 + r4
                int r4 = r0.leftMargin
                int r3 = r3 + r4
                int r4 = r0.rightMargin
                int r3 = r3 + r4
                int r3 = r3 + r7
                int r7 = r0.width
                boolean r4 = r5.canScrollHorizontally()
                int r7 = getChildMeasureSpec(r1, r2, r3, r7, r4)
                int r1 = r5.getHeight()
                int r2 = r5.getHeightMode()
                int r3 = r5.getPaddingTop()
                int r4 = r5.getPaddingBottom()
                int r3 = r3 + r4
                int r4 = r0.topMargin
                int r3 = r3 + r4
                int r4 = r0.bottomMargin
                int r3 = r3 + r4
                int r3 = r3 + r8
                int r8 = r0.height
                boolean r4 = r5.canScrollVertically()
                int r8 = getChildMeasureSpec(r1, r2, r3, r8, r4)
                boolean r0 = r5.shouldMeasureChild(r6, r7, r8, r0)
                if (r0 == 0) goto L65
                r6.measure(r7, r8)
            L65:
                return
        }

        public void moveView(int r3, int r4) {
                r2 = this;
                android.view.View r0 = r2.getChildAt(r3)
                if (r0 == 0) goto Ld
                r2.detachViewAt(r3)
                r2.attachView(r0, r4)
                return
            Ld:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Cannot move a child from non-existing index:"
                r0.append(r1)
                r0.append(r3)
                android.support.v7.widget.RecyclerView r3 = r2.mRecyclerView
                java.lang.String r3 = r3.toString()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r4.<init>(r3)
                throw r4
        }

        public void offsetChildrenHorizontal(int r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                r0.offsetChildrenHorizontal(r2)
            L7:
                return
        }

        public void offsetChildrenVertical(int r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                r0.offsetChildrenVertical(r2)
            L7:
                return
        }

        public void onAdapterChanged(android.support.v7.widget.RecyclerView.Adapter r1, android.support.v7.widget.RecyclerView.Adapter r2) {
                r0 = this;
                return
        }

        public boolean onAddFocusables(android.support.v7.widget.RecyclerView r1, java.util.ArrayList<android.view.View> r2, int r3, int r4) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void onAttachedToWindow(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                return
        }

        @java.lang.Deprecated
        public void onDetachedFromWindow(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                return
        }

        public void onDetachedFromWindow(android.support.v7.widget.RecyclerView r1, android.support.v7.widget.RecyclerView.Recycler r2) {
                r0 = this;
                r0.onDetachedFromWindow(r1)
                return
        }

        public android.view.View onFocusSearchFailed(android.view.View r1, int r2, android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void onInitializeAccessibilityEvent(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, android.view.accessibility.AccessibilityEvent r4) {
                r1 = this;
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                if (r2 == 0) goto L3d
                if (r4 != 0) goto L7
                goto L3d
            L7:
                r3 = 1
                boolean r2 = r2.canScrollVertically(r3)
                if (r2 != 0) goto L29
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                r0 = -1
                boolean r2 = r2.canScrollVertically(r0)
                if (r2 != 0) goto L29
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                boolean r2 = r2.canScrollHorizontally(r0)
                if (r2 != 0) goto L29
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                boolean r2 = r2.canScrollHorizontally(r3)
                if (r2 == 0) goto L28
                goto L29
            L28:
                r3 = 0
            L29:
                r4.setScrollable(r3)
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$Adapter r2 = r2.mAdapter
                if (r2 == 0) goto L3d
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$Adapter r2 = r2.mAdapter
                int r2 = r2.getItemCount()
                r4.setItemCount(r2)
            L3d:
                return
        }

        public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$Recycler r0 = r0.mRecycler
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                r2.onInitializeAccessibilityEvent(r0, r1, r3)
                return
        }

        void onInitializeAccessibilityNodeInfo(android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$Recycler r0 = r0.mRecycler
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                r2.onInitializeAccessibilityNodeInfo(r0, r1, r3)
                return
        }

        public void onInitializeAccessibilityNodeInfo(android.support.v7.widget.RecyclerView.Recycler r4, android.support.v7.widget.RecyclerView.State r5, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r6) {
                r3 = this;
                android.support.v7.widget.RecyclerView r0 = r3.mRecyclerView
                r1 = -1
                boolean r0 = r0.canScrollVertically(r1)
                r2 = 1
                if (r0 != 0) goto L12
                android.support.v7.widget.RecyclerView r0 = r3.mRecyclerView
                boolean r0 = r0.canScrollHorizontally(r1)
                if (r0 == 0) goto L1a
            L12:
                r0 = 8192(0x2000, float:1.148E-41)
                r6.addAction(r0)
                r6.setScrollable(r2)
            L1a:
                android.support.v7.widget.RecyclerView r0 = r3.mRecyclerView
                boolean r0 = r0.canScrollVertically(r2)
                if (r0 != 0) goto L2a
                android.support.v7.widget.RecyclerView r0 = r3.mRecyclerView
                boolean r0 = r0.canScrollHorizontally(r2)
                if (r0 == 0) goto L32
            L2a:
                r0 = 4096(0x1000, float:5.74E-42)
                r6.addAction(r0)
                r6.setScrollable(r2)
            L32:
                int r0 = r3.getRowCountForAccessibility(r4, r5)
                int r1 = r3.getColumnCountForAccessibility(r4, r5)
                boolean r2 = r3.isLayoutHierarchical(r4, r5)
                int r4 = r3.getSelectionModeForAccessibility(r4, r5)
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionInfoCompat r4 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionInfoCompat.obtain(r0, r1, r2, r4)
                r6.setCollectionInfo(r4)
                return
        }

        public void onInitializeAccessibilityNodeInfoForItem(android.support.v7.widget.RecyclerView.Recycler r7, android.support.v7.widget.RecyclerView.State r8, android.view.View r9, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r10) {
                r6 = this;
                boolean r7 = r6.canScrollVertically()
                r8 = 0
                if (r7 == 0) goto Ld
                int r7 = r6.getPosition(r9)
                r0 = r7
                goto Le
            Ld:
                r0 = r8
            Le:
                boolean r7 = r6.canScrollHorizontally()
                if (r7 == 0) goto L18
                int r8 = r6.getPosition(r9)
            L18:
                r2 = r8
                r1 = 1
                r3 = 1
                r4 = 0
                r5 = 0
                android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r7 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat.obtain(r0, r1, r2, r3, r4, r5)
                r10.setCollectionItemInfo(r7)
                return
        }

        void onInitializeAccessibilityNodeInfoForItem(android.view.View r3, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r3)
                if (r0 == 0) goto L21
                boolean r1 = r0.isRemoved()
                if (r1 != 0) goto L21
                android.support.v7.widget.ChildHelper r1 = r2.mChildHelper
                android.view.View r0 = r0.itemView
                boolean r0 = r1.isHidden(r0)
                if (r0 != 0) goto L21
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$Recycler r0 = r0.mRecycler
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                r2.onInitializeAccessibilityNodeInfoForItem(r0, r1, r3, r4)
            L21:
                return
        }

        public android.view.View onInterceptFocusSearch(android.view.View r1, int r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void onItemsAdded(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
                r0 = this;
                return
        }

        public void onItemsChanged(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                return
        }

        public void onItemsMoved(android.support.v7.widget.RecyclerView r1, int r2, int r3, int r4) {
                r0 = this;
                return
        }

        public void onItemsRemoved(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
                r0 = this;
                return
        }

        public void onItemsUpdated(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
                r0 = this;
                return
        }

        public void onItemsUpdated(android.support.v7.widget.RecyclerView r1, int r2, int r3, java.lang.Object r4) {
                r0 = this;
                r0.onItemsUpdated(r1, r2, r3)
                return
        }

        public void onLayoutChildren(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
                r0 = this;
                java.lang.String r1 = "RecyclerView"
                java.lang.String r2 = "You must override onLayoutChildren(Recycler recycler, State state) "
                android.util.Log.e(r1, r2)
                return
        }

        public void onLayoutCompleted(android.support.v7.widget.RecyclerView.State r1) {
                r0 = this;
                return
        }

        public void onMeasure(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2, int r3, int r4) {
                r0 = this;
                android.support.v7.widget.RecyclerView r1 = r0.mRecyclerView
                r1.defaultOnMeasure(r3, r4)
                return
        }

        public boolean onRequestChildFocus(android.support.v7.widget.RecyclerView r1, android.support.v7.widget.RecyclerView.State r2, android.view.View r3, android.view.View r4) {
                r0 = this;
                boolean r1 = r0.onRequestChildFocus(r1, r3, r4)
                return r1
        }

        @java.lang.Deprecated
        public boolean onRequestChildFocus(android.support.v7.widget.RecyclerView r1, android.view.View r2, android.view.View r3) {
                r0 = this;
                boolean r2 = r0.isSmoothScrolling()
                if (r2 != 0) goto Lf
                boolean r1 = r1.isComputingLayout()
                if (r1 == 0) goto Ld
                goto Lf
            Ld:
                r1 = 0
                goto L10
            Lf:
                r1 = 1
            L10:
                return r1
        }

        public void onRestoreInstanceState(android.os.Parcelable r1) {
                r0 = this;
                return
        }

        public android.os.Parcelable onSaveInstanceState() {
                r1 = this;
                r0 = 0
                return r0
        }

        public void onScrollStateChanged(int r1) {
                r0 = this;
                return
        }

        void onSmoothScrollerStopped(android.support.v7.widget.RecyclerView.SmoothScroller r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$SmoothScroller r0 = r1.mSmoothScroller
                if (r0 != r2) goto L7
                r2 = 0
                r1.mSmoothScroller = r2
            L7:
                return
        }

        boolean performAccessibilityAction(int r3, android.os.Bundle r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$Recycler r0 = r0.mRecycler
                android.support.v7.widget.RecyclerView r1 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                boolean r3 = r2.performAccessibilityAction(r0, r1, r3, r4)
                return r3
        }

        public boolean performAccessibilityAction(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, int r4, android.os.Bundle r5) {
                r1 = this;
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                r3 = 0
                if (r2 != 0) goto L6
                return r3
            L6:
                r5 = 4096(0x1000, float:5.74E-42)
                r0 = 1
                if (r4 == r5) goto L42
                r5 = 8192(0x2000, float:1.148E-41)
                if (r4 == r5) goto L12
                r2 = r3
                r4 = r2
                goto L70
            L12:
                r4 = -1
                boolean r2 = r2.canScrollVertically(r4)
                if (r2 == 0) goto L29
                int r2 = r1.getHeight()
                int r5 = r1.getPaddingTop()
                int r2 = r2 - r5
                int r5 = r1.getPaddingBottom()
                int r2 = r2 - r5
                int r2 = -r2
                goto L2a
            L29:
                r2 = r3
            L2a:
                android.support.v7.widget.RecyclerView r5 = r1.mRecyclerView
                boolean r4 = r5.canScrollHorizontally(r4)
                if (r4 == 0) goto L6f
                int r4 = r1.getWidth()
                int r5 = r1.getPaddingLeft()
                int r4 = r4 - r5
                int r5 = r1.getPaddingRight()
                int r4 = r4 - r5
                int r4 = -r4
                goto L70
            L42:
                boolean r2 = r2.canScrollVertically(r0)
                if (r2 == 0) goto L57
                int r2 = r1.getHeight()
                int r4 = r1.getPaddingTop()
                int r2 = r2 - r4
                int r4 = r1.getPaddingBottom()
                int r2 = r2 - r4
                goto L58
            L57:
                r2 = r3
            L58:
                android.support.v7.widget.RecyclerView r4 = r1.mRecyclerView
                boolean r4 = r4.canScrollHorizontally(r0)
                if (r4 == 0) goto L6f
                int r4 = r1.getWidth()
                int r5 = r1.getPaddingLeft()
                int r4 = r4 - r5
                int r5 = r1.getPaddingRight()
                int r4 = r4 - r5
                goto L70
            L6f:
                r4 = r3
            L70:
                if (r2 != 0) goto L75
                if (r4 != 0) goto L75
                return r3
            L75:
                android.support.v7.widget.RecyclerView r3 = r1.mRecyclerView
                r3.smoothScrollBy(r4, r2)
                return r0
        }

        public boolean performAccessibilityActionForItem(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2, android.view.View r3, int r4, android.os.Bundle r5) {
                r0 = this;
                r1 = 0
                return r1
        }

        boolean performAccessibilityActionForItem(android.view.View r8, int r9, android.os.Bundle r10) {
                r7 = this;
                android.support.v7.widget.RecyclerView r0 = r7.mRecyclerView
                android.support.v7.widget.RecyclerView$Recycler r2 = r0.mRecycler
                android.support.v7.widget.RecyclerView r0 = r7.mRecyclerView
                android.support.v7.widget.RecyclerView$State r3 = r0.mState
                r1 = r7
                r4 = r8
                r5 = r9
                r6 = r10
                boolean r8 = r1.performAccessibilityActionForItem(r2, r3, r4, r5, r6)
                return r8
        }

        public void postOnAnimation(java.lang.Runnable r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r2)
            L7:
                return
        }

        public void removeAllViews() {
                r2 = this;
                int r0 = r2.getChildCount()
                int r0 = r0 + (-1)
            L6:
                if (r0 < 0) goto L10
                android.support.v7.widget.ChildHelper r1 = r2.mChildHelper
                r1.removeViewAt(r0)
                int r0 = r0 + (-1)
                goto L6
            L10:
                return
        }

        public void removeAndRecycleAllViews(android.support.v7.widget.RecyclerView.Recycler r3) {
                r2 = this;
                int r0 = r2.getChildCount()
                int r0 = r0 + (-1)
            L6:
                if (r0 < 0) goto L1c
                android.view.View r1 = r2.getChildAt(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r1 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r1)
                boolean r1 = r1.shouldIgnore()
                if (r1 != 0) goto L19
                r2.removeAndRecycleViewAt(r0, r3)
            L19:
                int r0 = r0 + (-1)
                goto L6
            L1c:
                return
        }

        void removeAndRecycleScrapInt(android.support.v7.widget.RecyclerView.Recycler r7) {
                r6 = this;
                int r0 = r7.getScrapCount()
                int r1 = r0 + (-1)
            L6:
                if (r1 < 0) goto L3d
                android.view.View r2 = r7.getScrapViewAt(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r2)
                boolean r4 = r3.shouldIgnore()
                if (r4 == 0) goto L17
                goto L3a
            L17:
                r4 = 0
                r3.setIsRecyclable(r4)
                boolean r5 = r3.isTmpDetached()
                if (r5 == 0) goto L26
                android.support.v7.widget.RecyclerView r5 = r6.mRecyclerView
                r5.removeDetachedView(r2, r4)
            L26:
                android.support.v7.widget.RecyclerView r4 = r6.mRecyclerView
                android.support.v7.widget.RecyclerView$ItemAnimator r4 = r4.mItemAnimator
                if (r4 == 0) goto L33
                android.support.v7.widget.RecyclerView r4 = r6.mRecyclerView
                android.support.v7.widget.RecyclerView$ItemAnimator r4 = r4.mItemAnimator
                r4.endAnimation(r3)
            L33:
                r4 = 1
                r3.setIsRecyclable(r4)
                r7.quickRecycleScrapView(r2)
            L3a:
                int r1 = r1 + (-1)
                goto L6
            L3d:
                r7.clearScrap()
                if (r0 <= 0) goto L47
                android.support.v7.widget.RecyclerView r7 = r6.mRecyclerView
                r7.invalidate()
            L47:
                return
        }

        public void removeAndRecycleView(android.view.View r1, android.support.v7.widget.RecyclerView.Recycler r2) {
                r0 = this;
                r0.removeView(r1)
                r2.recycleView(r1)
                return
        }

        public void removeAndRecycleViewAt(int r2, android.support.v7.widget.RecyclerView.Recycler r3) {
                r1 = this;
                android.view.View r0 = r1.getChildAt(r2)
                r1.removeViewAt(r2)
                r3.recycleView(r0)
                return
        }

        public boolean removeCallbacks(java.lang.Runnable r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L9
                boolean r2 = r0.removeCallbacks(r2)
                return r2
            L9:
                r2 = 0
                return r2
        }

        public void removeDetachedView(android.view.View r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
                r1 = 0
                r0.removeDetachedView(r3, r1)
                return
        }

        public void removeView(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                r0.removeView(r2)
                return
        }

        public void removeViewAt(int r2) {
                r1 = this;
                android.view.View r0 = r1.getChildAt(r2)
                if (r0 == 0) goto Lb
                android.support.v7.widget.ChildHelper r0 = r1.mChildHelper
                r0.removeViewAt(r2)
            Lb:
                return
        }

        public boolean requestChildRectangleOnScreen(android.support.v7.widget.RecyclerView r7, android.view.View r8, android.graphics.Rect r9, boolean r10) {
                r6 = this;
                r5 = 0
                r0 = r6
                r1 = r7
                r2 = r8
                r3 = r9
                r4 = r10
                boolean r7 = r0.requestChildRectangleOnScreen(r1, r2, r3, r4, r5)
                return r7
        }

        public boolean requestChildRectangleOnScreen(android.support.v7.widget.RecyclerView r3, android.view.View r4, android.graphics.Rect r5, boolean r6, boolean r7) {
                r2 = this;
                int[] r4 = r2.getChildRectangleOnScreenScrollAmount(r3, r4, r5, r6)
                r5 = 0
                r0 = r4[r5]
                r1 = 1
                r4 = r4[r1]
                if (r7 == 0) goto L12
                boolean r7 = r2.isFocusedChildVisibleAfterScrolling(r3, r0, r4)
                if (r7 == 0) goto L17
            L12:
                if (r0 != 0) goto L18
                if (r4 == 0) goto L17
                goto L18
            L17:
                return r5
            L18:
                if (r6 == 0) goto L1e
                r3.scrollBy(r0, r4)
                goto L21
            L1e:
                r3.smoothScrollBy(r0, r4)
            L21:
                return r1
        }

        public void requestLayout() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                if (r0 == 0) goto L7
                r0.requestLayout()
            L7:
                return
        }

        public void requestSimpleAnimationsInNextLayout() {
                r1 = this;
                r0 = 1
                r1.mRequestedSimpleAnimations = r0
                return
        }

        public int scrollHorizontallyBy(int r1, android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void scrollToPosition(int r1) {
                r0 = this;
                return
        }

        public int scrollVerticallyBy(int r1, android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
                r0 = this;
                r1 = 0
                return r1
        }

        @java.lang.Deprecated
        public void setAutoMeasureEnabled(boolean r1) {
                r0 = this;
                r0.mAutoMeasure = r1
                return
        }

        void setExactMeasureSpecsFrom(android.support.v7.widget.RecyclerView r3) {
                r2 = this;
                int r0 = r3.getWidth()
                r1 = 1073741824(0x40000000, float:2.0)
                int r0 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r1)
                int r3 = r3.getHeight()
                int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r1)
                r2.setMeasureSpecs(r0, r3)
                return
        }

        public final void setItemPrefetchEnabled(boolean r2) {
                r1 = this;
                boolean r0 = r1.mItemPrefetchEnabled
                if (r2 == r0) goto L12
                r1.mItemPrefetchEnabled = r2
                r2 = 0
                r1.mPrefetchMaxCountObserved = r2
                android.support.v7.widget.RecyclerView r2 = r1.mRecyclerView
                if (r2 == 0) goto L12
                android.support.v7.widget.RecyclerView$Recycler r2 = r2.mRecycler
                r2.updateViewCacheSize()
            L12:
                return
        }

        void setMeasureSpecs(int r2, int r3) {
                r1 = this;
                int r0 = android.view.View.MeasureSpec.getSize(r2)
                r1.mWidth = r0
                int r2 = android.view.View.MeasureSpec.getMode(r2)
                r1.mWidthMode = r2
                r0 = 0
                if (r2 != 0) goto L15
                boolean r2 = android.support.v7.widget.RecyclerView.ALLOW_SIZE_IN_UNSPECIFIED_SPEC
                if (r2 != 0) goto L15
                r1.mWidth = r0
            L15:
                int r2 = android.view.View.MeasureSpec.getSize(r3)
                r1.mHeight = r2
                int r2 = android.view.View.MeasureSpec.getMode(r3)
                r1.mHeightMode = r2
                if (r2 != 0) goto L29
                boolean r2 = android.support.v7.widget.RecyclerView.ALLOW_SIZE_IN_UNSPECIFIED_SPEC
                if (r2 != 0) goto L29
                r1.mHeight = r0
            L29:
                return
        }

        public void setMeasuredDimension(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView.access$300(r0, r2, r3)
                return
        }

        public void setMeasuredDimension(android.graphics.Rect r3, int r4, int r5) {
                r2 = this;
                int r0 = r3.width()
                int r1 = r2.getPaddingLeft()
                int r0 = r0 + r1
                int r1 = r2.getPaddingRight()
                int r0 = r0 + r1
                int r3 = r3.height()
                int r1 = r2.getPaddingTop()
                int r3 = r3 + r1
                int r1 = r2.getPaddingBottom()
                int r3 = r3 + r1
                int r1 = r2.getMinimumWidth()
                int r4 = chooseSize(r4, r0, r1)
                int r0 = r2.getMinimumHeight()
                int r3 = chooseSize(r5, r3, r0)
                r2.setMeasuredDimension(r4, r3)
                return
        }

        void setMeasuredDimensionFromChildren(int r9, int r10) {
                r8 = this;
                int r0 = r8.getChildCount()
                if (r0 != 0) goto Lc
                android.support.v7.widget.RecyclerView r0 = r8.mRecyclerView
                r0.defaultOnMeasure(r9, r10)
                return
            Lc:
                r1 = 0
                r2 = -2147483648(0xffffffff80000000, float:-0.0)
                r3 = 2147483647(0x7fffffff, float:NaN)
                r4 = r3
                r5 = r4
                r3 = r2
            L15:
                if (r1 >= r0) goto L3d
                android.view.View r6 = r8.getChildAt(r1)
                android.support.v7.widget.RecyclerView r7 = r8.mRecyclerView
                android.graphics.Rect r7 = r7.mTempRect
                r8.getDecoratedBoundsWithMargins(r6, r7)
                int r6 = r7.left
                if (r6 >= r4) goto L28
                int r4 = r7.left
            L28:
                int r6 = r7.right
                if (r6 <= r2) goto L2e
                int r2 = r7.right
            L2e:
                int r6 = r7.top
                if (r6 >= r5) goto L34
                int r5 = r7.top
            L34:
                int r6 = r7.bottom
                if (r6 <= r3) goto L3a
                int r3 = r7.bottom
            L3a:
                int r1 = r1 + 1
                goto L15
            L3d:
                android.support.v7.widget.RecyclerView r0 = r8.mRecyclerView
                android.graphics.Rect r0 = r0.mTempRect
                r0.set(r4, r5, r2, r3)
                android.support.v7.widget.RecyclerView r0 = r8.mRecyclerView
                android.graphics.Rect r0 = r0.mTempRect
                r8.setMeasuredDimension(r0, r9, r10)
                return
        }

        public void setMeasurementCacheEnabled(boolean r1) {
                r0 = this;
                r0.mMeasurementCacheEnabled = r1
                return
        }

        void setRecyclerView(android.support.v7.widget.RecyclerView r2) {
                r1 = this;
                if (r2 != 0) goto Ld
                r2 = 0
                r1.mRecyclerView = r2
                r1.mChildHelper = r2
                r2 = 0
                r1.mWidth = r2
                r1.mHeight = r2
                goto L1f
            Ld:
                r1.mRecyclerView = r2
                android.support.v7.widget.ChildHelper r0 = r2.mChildHelper
                r1.mChildHelper = r0
                int r0 = r2.getWidth()
                r1.mWidth = r0
                int r2 = r2.getHeight()
                r1.mHeight = r2
            L1f:
                r2 = 1073741824(0x40000000, float:2.0)
                r1.mWidthMode = r2
                r1.mHeightMode = r2
                return
        }

        boolean shouldMeasureChild(android.view.View r3, int r4, int r5, android.support.v7.widget.RecyclerView.LayoutParams r6) {
                r2 = this;
                boolean r0 = r3.isLayoutRequested()
                if (r0 != 0) goto L25
                boolean r0 = r2.mMeasurementCacheEnabled
                if (r0 == 0) goto L25
                int r0 = r3.getWidth()
                int r1 = r6.width
                boolean r4 = isMeasurementUpToDate(r0, r4, r1)
                if (r4 == 0) goto L25
                int r3 = r3.getHeight()
                int r4 = r6.height
                boolean r3 = isMeasurementUpToDate(r3, r5, r4)
                if (r3 != 0) goto L23
                goto L25
            L23:
                r3 = 0
                goto L26
            L25:
                r3 = 1
            L26:
                return r3
        }

        boolean shouldMeasureTwice() {
                r1 = this;
                r0 = 0
                return r0
        }

        boolean shouldReMeasureChild(android.view.View r3, int r4, int r5, android.support.v7.widget.RecyclerView.LayoutParams r6) {
                r2 = this;
                boolean r0 = r2.mMeasurementCacheEnabled
                if (r0 == 0) goto L1f
                int r0 = r3.getMeasuredWidth()
                int r1 = r6.width
                boolean r4 = isMeasurementUpToDate(r0, r4, r1)
                if (r4 == 0) goto L1f
                int r3 = r3.getMeasuredHeight()
                int r4 = r6.height
                boolean r3 = isMeasurementUpToDate(r3, r5, r4)
                if (r3 != 0) goto L1d
                goto L1f
            L1d:
                r3 = 0
                goto L20
            L1f:
                r3 = 1
            L20:
                return r3
        }

        public void smoothScrollToPosition(android.support.v7.widget.RecyclerView r1, android.support.v7.widget.RecyclerView.State r2, int r3) {
                r0 = this;
                java.lang.String r1 = "RecyclerView"
                java.lang.String r2 = "You must override smoothScrollToPosition to support smooth scrolling"
                android.util.Log.e(r1, r2)
                return
        }

        public void startSmoothScroll(android.support.v7.widget.RecyclerView.SmoothScroller r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$SmoothScroller r0 = r1.mSmoothScroller
                if (r0 == 0) goto L11
                if (r2 == r0) goto L11
                boolean r0 = r0.isRunning()
                if (r0 == 0) goto L11
                android.support.v7.widget.RecyclerView$SmoothScroller r0 = r1.mSmoothScroller
                r0.stop()
            L11:
                r1.mSmoothScroller = r2
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                r2.start(r0, r1)
                return
        }

        public void stopIgnoringView(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r2 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r2)
                r2.stopIgnoring()
                r2.resetInternal()
                r0 = 4
                r2.addFlags(r0)
                return
        }

        void stopSmoothScroller() {
                r1 = this;
                android.support.v7.widget.RecyclerView$SmoothScroller r0 = r1.mSmoothScroller
                if (r0 == 0) goto L7
                r0.stop()
            L7:
                return
        }

        public boolean supportsPredictiveItemAnimations() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    public static class LayoutParams extends android.view.ViewGroup.MarginLayoutParams {
        final android.graphics.Rect mDecorInsets;
        boolean mInsetsDirty;
        boolean mPendingInvalidate;
        android.support.v7.widget.RecyclerView.ViewHolder mViewHolder;

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.mDecorInsets = r1
                r1 = 1
                r0.mInsetsDirty = r1
                r1 = 0
                r0.mPendingInvalidate = r1
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.mDecorInsets = r1
                r1 = 1
                r0.mInsetsDirty = r1
                r1 = 0
                r0.mPendingInvalidate = r1
                return
        }

        public LayoutParams(android.support.v7.widget.RecyclerView.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.mDecorInsets = r1
                r1 = 1
                r0.mInsetsDirty = r1
                r1 = 0
                r0.mPendingInvalidate = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.mDecorInsets = r1
                r1 = 1
                r0.mInsetsDirty = r1
                r1 = 0
                r0.mPendingInvalidate = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.mDecorInsets = r1
                r1 = 1
                r0.mInsetsDirty = r1
                r1 = 0
                r0.mPendingInvalidate = r1
                return
        }

        public int getViewAdapterPosition() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                int r0 = r0.getAdapterPosition()
                return r0
        }

        public int getViewLayoutPosition() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                int r0 = r0.getLayoutPosition()
                return r0
        }

        @java.lang.Deprecated
        public int getViewPosition() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                int r0 = r0.getPosition()
                return r0
        }

        public boolean isItemChanged() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                boolean r0 = r0.isUpdated()
                return r0
        }

        public boolean isItemRemoved() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                boolean r0 = r0.isRemoved()
                return r0
        }

        public boolean isViewInvalid() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                boolean r0 = r0.isInvalid()
                return r0
        }

        public boolean viewNeedsUpdate() {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r1.mViewHolder
                boolean r0 = r0.needsUpdate()
                return r0
        }
    }

    public interface OnChildAttachStateChangeListener {
        void onChildViewAttachedToWindow(android.view.View r1);

        void onChildViewDetachedFromWindow(android.view.View r1);
    }

    public static abstract class OnFlingListener {
        public OnFlingListener() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract boolean onFling(int r1, int r2);
    }

    public interface OnItemTouchListener {
        boolean onInterceptTouchEvent(android.support.v7.widget.RecyclerView r1, android.view.MotionEvent r2);

        void onRequestDisallowInterceptTouchEvent(boolean r1);

        void onTouchEvent(android.support.v7.widget.RecyclerView r1, android.view.MotionEvent r2);
    }

    public static abstract class OnScrollListener {
        public OnScrollListener() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onScrollStateChanged(android.support.v7.widget.RecyclerView r1, int r2) {
                r0 = this;
                return
        }

        public void onScrolled(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
                r0 = this;
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Orientation {
    }

    public static class RecycledViewPool {
        private static final int DEFAULT_MAX_SCRAP = 5;
        private int mAttachCount;
        android.util.SparseArray<android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData> mScrap;

        static class ScrapData {
            long mBindRunningAverageNs;
            long mCreateRunningAverageNs;
            int mMaxScrap;
            final java.util.ArrayList<android.support.v7.widget.RecyclerView.ViewHolder> mScrapHeap;

            ScrapData() {
                    r2 = this;
                    r2.<init>()
                    java.util.ArrayList r0 = new java.util.ArrayList
                    r0.<init>()
                    r2.mScrapHeap = r0
                    r0 = 5
                    r2.mMaxScrap = r0
                    r0 = 0
                    r2.mCreateRunningAverageNs = r0
                    r2.mBindRunningAverageNs = r0
                    return
            }
        }

        public RecycledViewPool() {
                r1 = this;
                r1.<init>()
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.mScrap = r0
                r0 = 0
                r1.mAttachCount = r0
                return
        }

        private android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData getScrapDataForType(int r3) {
                r2 = this;
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r0 = r2.mScrap
                java.lang.Object r0 = r0.get(r3)
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r0 = (android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData) r0
                if (r0 != 0) goto L14
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r0 = new android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData
                r0.<init>()
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r1 = r2.mScrap
                r1.put(r3, r0)
            L14:
                return r0
        }

        void attach() {
                r1 = this;
                int r0 = r1.mAttachCount
                int r0 = r0 + 1
                r1.mAttachCount = r0
                return
        }

        public void clear() {
                r2 = this;
                r0 = 0
            L1:
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r1 = r2.mScrap
                int r1 = r1.size()
                if (r0 >= r1) goto L19
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r1 = r2.mScrap
                java.lang.Object r1 = r1.valueAt(r0)
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r1 = (android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData) r1
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r1.mScrapHeap
                r1.clear()
                int r0 = r0 + 1
                goto L1
            L19:
                return
        }

        void detach() {
                r1 = this;
                int r0 = r1.mAttachCount
                int r0 = r0 + (-1)
                r1.mAttachCount = r0
                return
        }

        void factorInBindTime(int r3, long r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r3 = r2.getScrapDataForType(r3)
                long r0 = r3.mBindRunningAverageNs
                long r4 = r2.runningAverage(r0, r4)
                r3.mBindRunningAverageNs = r4
                return
        }

        void factorInCreateTime(int r3, long r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r3 = r2.getScrapDataForType(r3)
                long r0 = r3.mCreateRunningAverageNs
                long r4 = r2.runningAverage(r0, r4)
                r3.mCreateRunningAverageNs = r4
                return
        }

        public android.support.v7.widget.RecyclerView.ViewHolder getRecycledView(int r2) {
                r1 = this;
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r0 = r1.mScrap
                java.lang.Object r2 = r0.get(r2)
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r2 = (android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData) r2
                if (r2 == 0) goto L21
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mScrapHeap
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L21
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r2.mScrapHeap
                int r0 = r2.size()
                int r0 = r0 + (-1)
                java.lang.Object r2 = r2.remove(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                return r2
            L21:
                r2 = 0
                return r2
        }

        public int getRecycledViewCount(int r1) {
                r0 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r1 = r0.getScrapDataForType(r1)
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r1.mScrapHeap
                int r1 = r1.size()
                return r1
        }

        void onAdapterChanged(android.support.v7.widget.RecyclerView.Adapter r1, android.support.v7.widget.RecyclerView.Adapter r2, boolean r3) {
                r0 = this;
                if (r1 == 0) goto L5
                r0.detach()
            L5:
                if (r3 != 0) goto Le
                int r1 = r0.mAttachCount
                if (r1 != 0) goto Le
                r0.clear()
            Le:
                if (r2 == 0) goto L13
                r0.attach()
            L13:
                return
        }

        public void putRecycledView(android.support.v7.widget.RecyclerView.ViewHolder r4) {
                r3 = this;
                int r0 = r4.getItemViewType()
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r1 = r3.getScrapDataForType(r0)
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r1.mScrapHeap
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r2 = r3.mScrap
                java.lang.Object r0 = r2.get(r0)
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r0 = (android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData) r0
                int r0 = r0.mMaxScrap
                int r2 = r1.size()
                if (r0 > r2) goto L1b
                return
            L1b:
                r4.resetInternal()
                r1.add(r4)
                return
        }

        long runningAverage(long r5, long r7) {
                r4 = this;
                r0 = 0
                int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r0 != 0) goto L7
                return r7
            L7:
                r0 = 4
                long r5 = r5 / r0
                r2 = 3
                long r5 = r5 * r2
                long r7 = r7 / r0
                long r5 = r5 + r7
                return r5
        }

        public void setMaxRecycledViews(int r2, int r3) {
                r1 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r2 = r1.getScrapDataForType(r2)
                r2.mMaxScrap = r3
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r2.mScrapHeap
            L8:
                int r0 = r2.size()
                if (r0 <= r3) goto L18
                int r0 = r2.size()
                int r0 = r0 + (-1)
                r2.remove(r0)
                goto L8
            L18:
                return
        }

        int size() {
                r3 = this;
                r0 = 0
                r1 = r0
            L2:
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r2 = r3.mScrap
                int r2 = r2.size()
                if (r0 >= r2) goto L1e
                android.util.SparseArray<android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData> r2 = r3.mScrap
                java.lang.Object r2 = r2.valueAt(r0)
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r2 = (android.support.v7.widget.RecyclerView.RecycledViewPool.ScrapData) r2
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r2.mScrapHeap
                if (r2 == 0) goto L1b
                int r2 = r2.size()
                int r1 = r1 + r2
            L1b:
                int r0 = r0 + 1
                goto L2
            L1e:
                return r1
        }

        boolean willBindInTime(int r5, long r6, long r8) {
                r4 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r5 = r4.getScrapDataForType(r5)
                long r0 = r5.mBindRunningAverageNs
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 == 0) goto L14
                long r6 = r6 + r0
                int r5 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r5 >= 0) goto L12
                goto L14
            L12:
                r5 = 0
                goto L15
            L14:
                r5 = 1
            L15:
                return r5
        }

        boolean willCreateInTime(int r5, long r6, long r8) {
                r4 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool$ScrapData r5 = r4.getScrapDataForType(r5)
                long r0 = r5.mCreateRunningAverageNs
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 == 0) goto L14
                long r6 = r6 + r0
                int r5 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r5 >= 0) goto L12
                goto L14
            L12:
                r5 = 0
                goto L15
            L14:
                r5 = 1
            L15:
                return r5
        }
    }

    public final class Recycler {
        static final int DEFAULT_CACHE_SIZE = 2;
        final java.util.ArrayList<android.support.v7.widget.RecyclerView.ViewHolder> mAttachedScrap;
        final java.util.ArrayList<android.support.v7.widget.RecyclerView.ViewHolder> mCachedViews;
        java.util.ArrayList<android.support.v7.widget.RecyclerView.ViewHolder> mChangedScrap;
        android.support.v7.widget.RecyclerView.RecycledViewPool mRecyclerPool;
        private int mRequestedCacheMax;
        private final java.util.List<android.support.v7.widget.RecyclerView.ViewHolder> mUnmodifiableAttachedScrap;
        private android.support.v7.widget.RecyclerView.ViewCacheExtension mViewCacheExtension;
        int mViewCacheMax;
        final android.support.v7.widget.RecyclerView this$0;

        public Recycler(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.mAttachedScrap = r1
                r1 = 0
                r0.mChangedScrap = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.mCachedViews = r1
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r0.mAttachedScrap
                java.util.List r1 = java.util.Collections.unmodifiableList(r1)
                r0.mUnmodifiableAttachedScrap = r1
                r1 = 2
                r0.mRequestedCacheMax = r1
                r0.mViewCacheMax = r1
                return
        }

        private void attachAccessibilityDelegateOnBind(android.support.v7.widget.RecyclerView.ViewHolder r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                boolean r0 = r0.isAccessibilityEnabled()
                if (r0 == 0) goto L2a
                android.view.View r0 = r3.itemView
                int r1 = android.support.v4.view.ViewCompat.getImportantForAccessibility(r0)
                if (r1 != 0) goto L14
                r1 = 1
                android.support.v4.view.ViewCompat.setImportantForAccessibility(r0, r1)
            L14:
                boolean r1 = android.support.v4.view.ViewCompat.hasAccessibilityDelegate(r0)
                if (r1 != 0) goto L2a
                r1 = 16384(0x4000, float:2.2959E-41)
                r3.addFlags(r1)
                android.support.v7.widget.RecyclerView r3 = r2.this$0
                android.support.v7.widget.RecyclerViewAccessibilityDelegate r3 = r3.mAccessibilityDelegate
                android.support.v4.view.AccessibilityDelegateCompat r3 = r3.getItemDelegate()
                android.support.v4.view.ViewCompat.setAccessibilityDelegate(r0, r3)
            L2a:
                return
        }

        private void invalidateDisplayListInt(android.support.v7.widget.RecyclerView.ViewHolder r2) {
                r1 = this;
                android.view.View r0 = r2.itemView
                boolean r0 = r0 instanceof android.view.ViewGroup
                if (r0 == 0) goto Le
                android.view.View r2 = r2.itemView
                android.view.ViewGroup r2 = (android.view.ViewGroup) r2
                r0 = 0
                r1.invalidateDisplayListInt(r2, r0)
            Le:
                return
        }

        private void invalidateDisplayListInt(android.view.ViewGroup r5, boolean r6) {
                r4 = this;
                int r0 = r5.getChildCount()
                r1 = 1
                int r0 = r0 - r1
            L6:
                if (r0 < 0) goto L18
                android.view.View r2 = r5.getChildAt(r0)
                boolean r3 = r2 instanceof android.view.ViewGroup
                if (r3 == 0) goto L15
                android.view.ViewGroup r2 = (android.view.ViewGroup) r2
                r4.invalidateDisplayListInt(r2, r1)
            L15:
                int r0 = r0 + (-1)
                goto L6
            L18:
                if (r6 != 0) goto L1b
                return
            L1b:
                int r6 = r5.getVisibility()
                r0 = 4
                if (r6 != r0) goto L2a
                r6 = 0
                r5.setVisibility(r6)
                r5.setVisibility(r0)
                goto L34
            L2a:
                int r6 = r5.getVisibility()
                r5.setVisibility(r0)
                r5.setVisibility(r6)
            L34:
                return
        }

        private boolean tryBindViewHolderByDeadline(android.support.v7.widget.RecyclerView.ViewHolder r10, int r11, int r12, long r13) {
                r9 = this;
                android.support.v7.widget.RecyclerView r0 = r9.this$0
                r10.mOwnerRecyclerView = r0
                int r2 = r10.getItemViewType()
                android.support.v7.widget.RecyclerView r0 = r9.this$0
                long r7 = r0.getNanoTime()
                r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                int r0 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
                if (r0 == 0) goto L23
                android.support.v7.widget.RecyclerView$RecycledViewPool r1 = r9.mRecyclerPool
                r3 = r7
                r5 = r13
                boolean r13 = r1.willBindInTime(r2, r3, r5)
                if (r13 != 0) goto L23
                r10 = 0
                return r10
            L23:
                android.support.v7.widget.RecyclerView r13 = r9.this$0
                android.support.v7.widget.RecyclerView$Adapter r13 = r13.mAdapter
                r13.bindViewHolder(r10, r11)
                android.support.v7.widget.RecyclerView r11 = r9.this$0
                long r13 = r11.getNanoTime()
                android.support.v7.widget.RecyclerView$RecycledViewPool r11 = r9.mRecyclerPool
                int r0 = r10.getItemViewType()
                long r13 = r13 - r7
                r11.factorInBindTime(r0, r13)
                r9.attachAccessibilityDelegateOnBind(r10)
                android.support.v7.widget.RecyclerView r11 = r9.this$0
                android.support.v7.widget.RecyclerView$State r11 = r11.mState
                boolean r11 = r11.isPreLayout()
                if (r11 == 0) goto L49
                r10.mPreLayoutPosition = r12
            L49:
                r10 = 1
                return r10
        }

        void addViewHolderToRecycledViewPool(android.support.v7.widget.RecyclerView.ViewHolder r4, boolean r5) {
                r3 = this;
                android.support.v7.widget.RecyclerView.clearNestedRecyclerViewIfNotNested(r4)
                r0 = 16384(0x4000, float:2.2959E-41)
                boolean r1 = r4.hasAnyOfTheFlags(r0)
                r2 = 0
                if (r1 == 0) goto L15
                r1 = 0
                r4.setFlags(r1, r0)
                android.view.View r0 = r4.itemView
                android.support.v4.view.ViewCompat.setAccessibilityDelegate(r0, r2)
            L15:
                if (r5 == 0) goto L1a
                r3.dispatchViewRecycled(r4)
            L1a:
                r4.mOwnerRecyclerView = r2
                android.support.v7.widget.RecyclerView$RecycledViewPool r5 = r3.getRecycledViewPool()
                r5.putRecycledView(r4)
                return
        }

        public void bindViewToPosition(android.view.View r7, int r8) {
                r6 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r7 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r7)
                if (r7 == 0) goto La2
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                int r2 = r0.findPositionOffset(r8)
                if (r2 < 0) goto L65
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                int r0 = r0.getItemCount()
                if (r2 >= r0) goto L65
                r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                r0 = r6
                r1 = r7
                r3 = r8
                r0.tryBindViewHolderByDeadline(r1, r2, r3, r4)
                android.view.View r8 = r7.itemView
                android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
                if (r8 != 0) goto L3b
                android.support.v7.widget.RecyclerView r8 = r6.this$0
                android.view.ViewGroup$LayoutParams r8 = r8.generateDefaultLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r8 = (android.support.v7.widget.RecyclerView.LayoutParams) r8
                android.view.View r0 = r7.itemView
                r0.setLayoutParams(r8)
                goto L53
            L3b:
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                boolean r0 = r0.checkLayoutParams(r8)
                if (r0 != 0) goto L51
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.view.ViewGroup$LayoutParams r8 = r0.generateLayoutParams(r8)
                android.support.v7.widget.RecyclerView$LayoutParams r8 = (android.support.v7.widget.RecyclerView.LayoutParams) r8
                android.view.View r0 = r7.itemView
                r0.setLayoutParams(r8)
                goto L53
            L51:
                android.support.v7.widget.RecyclerView$LayoutParams r8 = (android.support.v7.widget.RecyclerView.LayoutParams) r8
            L53:
                r0 = 1
                r8.mInsetsDirty = r0
                r8.mViewHolder = r7
                android.view.View r7 = r7.itemView
                android.view.ViewParent r7 = r7.getParent()
                if (r7 != 0) goto L61
                goto L62
            L61:
                r0 = 0
            L62:
                r8.mPendingInvalidate = r0
                return
            L65:
                java.lang.IndexOutOfBoundsException r7 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Inconsistency detected. Invalid item position "
                r0.append(r1)
                r0.append(r8)
                java.lang.String r8 = "(offset:"
                r0.append(r8)
                r0.append(r2)
                java.lang.String r8 = ")."
                r0.append(r8)
                java.lang.String r8 = "state:"
                r0.append(r8)
                android.support.v7.widget.RecyclerView r8 = r6.this$0
                android.support.v7.widget.RecyclerView$State r8 = r8.mState
                int r8 = r8.getItemCount()
                r0.append(r8)
                android.support.v7.widget.RecyclerView r8 = r6.this$0
                java.lang.String r8 = r8.exceptionLabel()
                r0.append(r8)
                java.lang.String r8 = r0.toString()
                r7.<init>(r8)
                throw r7
            La2:
                java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r0 = "The view does not have a ViewHolder. You cannot pass arbitrary views to this method, they should be created by the Adapter"
                r8.append(r0)
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                java.lang.String r0 = r0.exceptionLabel()
                r8.append(r0)
                java.lang.String r8 = r8.toString()
                r7.<init>(r8)
                throw r7
        }

        public void clear() {
                r1 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mAttachedScrap
                r0.clear()
                r1.recycleAndClearCachedViews()
                return
        }

        void clearOldPositions() {
                r4 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mCachedViews
                int r0 = r0.size()
                r1 = 0
                r2 = r1
            L8:
                if (r2 >= r0) goto L18
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r4.mCachedViews
                java.lang.Object r3 = r3.get(r2)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = (android.support.v7.widget.RecyclerView.ViewHolder) r3
                r3.clearOldPosition()
                int r2 = r2 + 1
                goto L8
            L18:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mAttachedScrap
                int r0 = r0.size()
                r2 = r1
            L1f:
                if (r2 >= r0) goto L2f
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r4.mAttachedScrap
                java.lang.Object r3 = r3.get(r2)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = (android.support.v7.widget.RecyclerView.ViewHolder) r3
                r3.clearOldPosition()
                int r2 = r2 + 1
                goto L1f
            L2f:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mChangedScrap
                if (r0 == 0) goto L47
                int r0 = r0.size()
            L37:
                if (r1 >= r0) goto L47
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r4.mChangedScrap
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                r2.clearOldPosition()
                int r1 = r1 + 1
                goto L37
            L47:
                return
        }

        void clearScrap() {
                r1 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mAttachedScrap
                r0.clear()
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mChangedScrap
                if (r0 == 0) goto Lc
                r0.clear()
            Lc:
                return
        }

        public int convertPreLayoutPositionToPostLayout(int r4) {
                r3 = this;
                if (r4 < 0) goto L20
                android.support.v7.widget.RecyclerView r0 = r3.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                int r0 = r0.getItemCount()
                if (r4 >= r0) goto L20
                android.support.v7.widget.RecyclerView r0 = r3.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                boolean r0 = r0.isPreLayout()
                if (r0 != 0) goto L17
                return r4
            L17:
                android.support.v7.widget.RecyclerView r0 = r3.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                int r4 = r0.findPositionOffset(r4)
                return r4
            L20:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "invalid position "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = ". State "
                r1.append(r4)
                java.lang.String r4 = "item count is "
                r1.append(r4)
                android.support.v7.widget.RecyclerView r4 = r3.this$0
                android.support.v7.widget.RecyclerView$State r4 = r4.mState
                int r4 = r4.getItemCount()
                r1.append(r4)
                android.support.v7.widget.RecyclerView r4 = r3.this$0
                java.lang.String r4 = r4.exceptionLabel()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        void dispatchViewRecycled(android.support.v7.widget.RecyclerView.ViewHolder r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.RecyclerView$RecyclerListener r0 = r0.mRecyclerListener
                if (r0 == 0) goto Ld
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.RecyclerView$RecyclerListener r0 = r0.mRecyclerListener
                r0.onViewRecycled(r2)
            Ld:
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                if (r0 == 0) goto L1a
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                r0.onViewRecycled(r2)
            L1a:
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                if (r0 == 0) goto L27
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.ViewInfoStore r0 = r0.mViewInfoStore
                r0.removeViewHolder(r2)
            L27:
                return
        }

        android.support.v7.widget.RecyclerView.ViewHolder getChangedScrapViewForPosition(int r10) {
                r9 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r9.mChangedScrap
                r1 = 0
                if (r0 == 0) goto L72
                int r0 = r0.size()
                if (r0 != 0) goto Lc
                goto L72
            Lc:
                r2 = 0
                r3 = r2
            Le:
                r4 = 32
                if (r3 >= r0) goto L2d
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r5 = r9.mChangedScrap
                java.lang.Object r5 = r5.get(r3)
                android.support.v7.widget.RecyclerView$ViewHolder r5 = (android.support.v7.widget.RecyclerView.ViewHolder) r5
                boolean r6 = r5.wasReturnedFromScrap()
                if (r6 != 0) goto L2a
                int r6 = r5.getLayoutPosition()
                if (r6 != r10) goto L2a
                r5.addFlags(r4)
                return r5
            L2a:
                int r3 = r3 + 1
                goto Le
            L2d:
                android.support.v7.widget.RecyclerView r3 = r9.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                boolean r3 = r3.hasStableIds()
                if (r3 == 0) goto L72
                android.support.v7.widget.RecyclerView r3 = r9.this$0
                android.support.v7.widget.AdapterHelper r3 = r3.mAdapterHelper
                int r10 = r3.findPositionOffset(r10)
                if (r10 <= 0) goto L72
                android.support.v7.widget.RecyclerView r3 = r9.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                int r3 = r3.getItemCount()
                if (r10 >= r3) goto L72
                android.support.v7.widget.RecyclerView r3 = r9.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                long r5 = r3.getItemId(r10)
            L53:
                if (r2 >= r0) goto L72
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r10 = r9.mChangedScrap
                java.lang.Object r10 = r10.get(r2)
                android.support.v7.widget.RecyclerView$ViewHolder r10 = (android.support.v7.widget.RecyclerView.ViewHolder) r10
                boolean r3 = r10.wasReturnedFromScrap()
                if (r3 != 0) goto L6f
                long r7 = r10.getItemId()
                int r3 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
                if (r3 != 0) goto L6f
                r10.addFlags(r4)
                return r10
            L6f:
                int r2 = r2 + 1
                goto L53
            L72:
                return r1
        }

        android.support.v7.widget.RecyclerView.RecycledViewPool getRecycledViewPool() {
                r1 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r1.mRecyclerPool
                if (r0 != 0) goto Lb
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = new android.support.v7.widget.RecyclerView$RecycledViewPool
                r0.<init>()
                r1.mRecyclerPool = r0
            Lb:
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r1.mRecyclerPool
                return r0
        }

        int getScrapCount() {
                r1 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mAttachedScrap
                int r0 = r0.size()
                return r0
        }

        public java.util.List<android.support.v7.widget.RecyclerView.ViewHolder> getScrapList() {
                r1 = this;
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mUnmodifiableAttachedScrap
                return r0
        }

        android.support.v7.widget.RecyclerView.ViewHolder getScrapOrCachedViewForId(long r6, int r8, boolean r9) {
                r5 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mAttachedScrap
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L59
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r5.mAttachedScrap
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r1 = (android.support.v7.widget.RecyclerView.ViewHolder) r1
                long r2 = r1.getItemId()
                int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
                if (r2 != 0) goto L56
                boolean r2 = r1.wasReturnedFromScrap()
                if (r2 != 0) goto L56
                int r2 = r1.getItemViewType()
                if (r8 != r2) goto L42
                r6 = 32
                r1.addFlags(r6)
                boolean r6 = r1.isRemoved()
                if (r6 == 0) goto L41
                android.support.v7.widget.RecyclerView r6 = r5.this$0
                android.support.v7.widget.RecyclerView$State r6 = r6.mState
                boolean r6 = r6.isPreLayout()
                if (r6 != 0) goto L41
                r6 = 2
                r7 = 14
                r1.setFlags(r6, r7)
            L41:
                return r1
            L42:
                if (r9 != 0) goto L56
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r5.mAttachedScrap
                r2.remove(r0)
                android.support.v7.widget.RecyclerView r2 = r5.this$0
                android.view.View r3 = r1.itemView
                r4 = 0
                r2.removeDetachedView(r3, r4)
                android.view.View r1 = r1.itemView
                r5.quickRecycleScrapView(r1)
            L56:
                int r0 = r0 + (-1)
                goto L8
            L59:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mCachedViews
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L61:
                r1 = 0
                if (r0 < 0) goto L8b
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r5.mCachedViews
                java.lang.Object r2 = r2.get(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                long r3 = r2.getItemId()
                int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
                if (r3 != 0) goto L88
                int r3 = r2.getItemViewType()
                if (r8 != r3) goto L82
                if (r9 != 0) goto L81
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r6 = r5.mCachedViews
                r6.remove(r0)
            L81:
                return r2
            L82:
                if (r9 != 0) goto L88
                r5.recycleCachedViewAt(r0)
                return r1
            L88:
                int r0 = r0 + (-1)
                goto L61
            L8b:
                return r1
        }

        android.support.v7.widget.RecyclerView.ViewHolder getScrapOrHiddenOrCachedHolderForPosition(int r6, boolean r7) {
                r5 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mAttachedScrap
                int r0 = r0.size()
                r1 = 0
                r2 = r1
            L8:
                if (r2 >= r0) goto L3b
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r5.mAttachedScrap
                java.lang.Object r3 = r3.get(r2)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = (android.support.v7.widget.RecyclerView.ViewHolder) r3
                boolean r4 = r3.wasReturnedFromScrap()
                if (r4 != 0) goto L38
                int r4 = r3.getLayoutPosition()
                if (r4 != r6) goto L38
                boolean r4 = r3.isInvalid()
                if (r4 != 0) goto L38
                android.support.v7.widget.RecyclerView r4 = r5.this$0
                android.support.v7.widget.RecyclerView$State r4 = r4.mState
                boolean r4 = r4.mInPreLayout
                if (r4 != 0) goto L32
                boolean r4 = r3.isRemoved()
                if (r4 != 0) goto L38
            L32:
                r6 = 32
                r3.addFlags(r6)
                return r3
            L38:
                int r2 = r2 + 1
                goto L8
            L3b:
                if (r7 != 0) goto L8d
                android.support.v7.widget.RecyclerView r0 = r5.this$0
                android.support.v7.widget.ChildHelper r0 = r0.mChildHelper
                android.view.View r0 = r0.findHiddenNonRemovedView(r6)
                if (r0 == 0) goto L8d
                android.support.v7.widget.RecyclerView$ViewHolder r6 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r0)
                android.support.v7.widget.RecyclerView r7 = r5.this$0
                android.support.v7.widget.ChildHelper r7 = r7.mChildHelper
                r7.unhide(r0)
                android.support.v7.widget.RecyclerView r7 = r5.this$0
                android.support.v7.widget.ChildHelper r7 = r7.mChildHelper
                int r7 = r7.indexOfChild(r0)
                r1 = -1
                if (r7 == r1) goto L6d
                android.support.v7.widget.RecyclerView r1 = r5.this$0
                android.support.v7.widget.ChildHelper r1 = r1.mChildHelper
                r1.detachViewFromParent(r7)
                r5.scrapView(r0)
                r7 = 8224(0x2020, float:1.1524E-41)
                r6.addFlags(r7)
                return r6
            L6d:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "layout index should not be -1 after unhiding a view:"
                r0.append(r1)
                r0.append(r6)
                android.support.v7.widget.RecyclerView r6 = r5.this$0
                java.lang.String r6 = r6.exceptionLabel()
                r0.append(r6)
                java.lang.String r6 = r0.toString()
                r7.<init>(r6)
                throw r7
            L8d:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mCachedViews
                int r0 = r0.size()
            L93:
                if (r1 >= r0) goto Lb4
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r5.mCachedViews
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                boolean r3 = r2.isInvalid()
                if (r3 != 0) goto Lb1
                int r3 = r2.getLayoutPosition()
                if (r3 != r6) goto Lb1
                if (r7 != 0) goto Lb0
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r6 = r5.mCachedViews
                r6.remove(r1)
            Lb0:
                return r2
            Lb1:
                int r1 = r1 + 1
                goto L93
            Lb4:
                r6 = 0
                return r6
        }

        android.view.View getScrapViewAt(int r2) {
                r1 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mAttachedScrap
                java.lang.Object r2 = r0.get(r2)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                android.view.View r2 = r2.itemView
                return r2
        }

        public android.view.View getViewForPosition(int r2) {
                r1 = this;
                r0 = 0
                android.view.View r2 = r1.getViewForPosition(r2, r0)
                return r2
        }

        android.view.View getViewForPosition(int r3, boolean r4) {
                r2 = this;
                r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                android.support.v7.widget.RecyclerView$ViewHolder r3 = r2.tryGetViewHolderForPositionByDeadline(r3, r4, r0)
                android.view.View r3 = r3.itemView
                return r3
        }

        void markItemDecorInsetsDirty() {
                r4 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mCachedViews
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L21
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r4.mCachedViews
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                android.view.View r2 = r2.itemView
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
                if (r2 == 0) goto L1e
                r3 = 1
                r2.mInsetsDirty = r3
            L1e:
                int r1 = r1 + 1
                goto L7
            L21:
                return
        }

        void markKnownViewsInvalid() {
                r4 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mCachedViews
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L1e
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r4.mCachedViews
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                if (r2 == 0) goto L1b
                r3 = 6
                r2.addFlags(r3)
                r3 = 0
                r2.addChangePayload(r3)
            L1b:
                int r1 = r1 + 1
                goto L7
            L1e:
                android.support.v7.widget.RecyclerView r0 = r4.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                if (r0 == 0) goto L2e
                android.support.v7.widget.RecyclerView r0 = r4.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                boolean r0 = r0.hasStableIds()
                if (r0 != 0) goto L31
            L2e:
                r4.recycleAndClearCachedViews()
            L31:
                return
        }

        void offsetPositionRecordsForInsert(int r5, int r6) {
                r4 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r4.mCachedViews
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L1e
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r4.mCachedViews
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                if (r2 == 0) goto L1b
                int r3 = r2.mPosition
                if (r3 < r5) goto L1b
                r3 = 1
                r2.offsetPosition(r6, r3)
            L1b:
                int r1 = r1 + 1
                goto L7
            L1e:
                return
        }

        void offsetPositionRecordsForMove(int r9, int r10) {
                r8 = this;
                if (r9 >= r10) goto L6
                r0 = -1
                r1 = r9
                r2 = r10
                goto L9
            L6:
                r0 = 1
                r2 = r9
                r1 = r10
            L9:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r8.mCachedViews
                int r3 = r3.size()
                r4 = 0
                r5 = r4
            L11:
                if (r5 >= r3) goto L36
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r6 = r8.mCachedViews
                java.lang.Object r6 = r6.get(r5)
                android.support.v7.widget.RecyclerView$ViewHolder r6 = (android.support.v7.widget.RecyclerView.ViewHolder) r6
                if (r6 == 0) goto L33
                int r7 = r6.mPosition
                if (r7 < r1) goto L33
                int r7 = r6.mPosition
                if (r7 <= r2) goto L26
                goto L33
            L26:
                int r7 = r6.mPosition
                if (r7 != r9) goto L30
                int r7 = r10 - r9
                r6.offsetPosition(r7, r4)
                goto L33
            L30:
                r6.offsetPosition(r0, r4)
            L33:
                int r5 = r5 + 1
                goto L11
            L36:
                return
        }

        void offsetPositionRecordsForRemove(int r5, int r6, boolean r7) {
                r4 = this;
                int r0 = r5 + r6
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r4.mCachedViews
                int r1 = r1.size()
                int r1 = r1 + (-1)
            La:
                if (r1 < 0) goto L2e
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r4.mCachedViews
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                if (r2 == 0) goto L2b
                int r3 = r2.mPosition
                if (r3 < r0) goto L1f
                int r3 = -r6
                r2.offsetPosition(r3, r7)
                goto L2b
            L1f:
                int r3 = r2.mPosition
                if (r3 < r5) goto L2b
                r3 = 8
                r2.addFlags(r3)
                r4.recycleCachedViewAt(r1)
            L2b:
                int r1 = r1 + (-1)
                goto La
            L2e:
                return
        }

        void onAdapterChanged(android.support.v7.widget.RecyclerView.Adapter r2, android.support.v7.widget.RecyclerView.Adapter r3, boolean r4) {
                r1 = this;
                r1.clear()
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r1.getRecycledViewPool()
                r0.onAdapterChanged(r2, r3, r4)
                return
        }

        void quickRecycleScrapView(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r2 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r2)
                r0 = 0
                r2.mScrapContainer = r0
                r0 = 0
                r2.mInChangeScrap = r0
                r2.clearReturnedFromScrapFlag()
                r1.recycleViewHolderInternal(r2)
                return
        }

        void recycleAndClearCachedViews() {
                r1 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mCachedViews
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L10
                r1.recycleCachedViewAt(r0)
                int r0 = r0 + (-1)
                goto L8
            L10:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mCachedViews
                r0.clear()
                boolean r0 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
                if (r0 == 0) goto L20
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl r0 = r0.mPrefetchRegistry
                r0.clearPrefetchPositions()
            L20:
                return
        }

        void recycleCachedViewAt(int r3) {
                r2 = this;
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mCachedViews
                java.lang.Object r0 = r0.get(r3)
                android.support.v7.widget.RecyclerView$ViewHolder r0 = (android.support.v7.widget.RecyclerView.ViewHolder) r0
                r1 = 1
                r2.addViewHolderToRecycledViewPool(r0, r1)
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mCachedViews
                r0.remove(r3)
                return
        }

        public void recycleView(android.view.View r4) {
                r3 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r0 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r4)
                boolean r1 = r0.isTmpDetached()
                if (r1 == 0) goto L10
                android.support.v7.widget.RecyclerView r1 = r3.this$0
                r2 = 0
                r1.removeDetachedView(r4, r2)
            L10:
                boolean r4 = r0.isScrap()
                if (r4 == 0) goto L1a
                r0.unScrap()
                goto L23
            L1a:
                boolean r4 = r0.wasReturnedFromScrap()
                if (r4 == 0) goto L23
                r0.clearReturnedFromScrapFlag()
            L23:
                r3.recycleViewHolderInternal(r0)
                return
        }

        void recycleViewHolderInternal(android.support.v7.widget.RecyclerView.ViewHolder r7) {
                r6 = this;
                boolean r0 = r7.isScrap()
                r1 = 0
                r2 = 1
                if (r0 != 0) goto Lec
                android.view.View r0 = r7.itemView
                android.view.ViewParent r0 = r0.getParent()
                if (r0 == 0) goto L12
                goto Lec
            L12:
                boolean r0 = r7.isTmpDetached()
                if (r0 != 0) goto Lcc
                boolean r0 = r7.shouldIgnore()
                if (r0 != 0) goto Laf
                boolean r0 = r7.doesTransientStatePreventRecycling()
                android.support.v7.widget.RecyclerView r3 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                if (r3 == 0) goto L36
                if (r0 == 0) goto L36
                android.support.v7.widget.RecyclerView r3 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                boolean r3 = r3.onFailedToRecycleView(r7)
                if (r3 == 0) goto L36
                r3 = r2
                goto L37
            L36:
                r3 = r1
            L37:
                if (r3 != 0) goto L42
                boolean r3 = r7.isRecyclable()
                if (r3 == 0) goto L40
                goto L42
            L40:
                r2 = r1
                goto L9e
            L42:
                int r3 = r6.mViewCacheMax
                if (r3 <= 0) goto L95
                r3 = 526(0x20e, float:7.37E-43)
                boolean r3 = r7.hasAnyOfTheFlags(r3)
                if (r3 != 0) goto L95
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r6.mCachedViews
                int r3 = r3.size()
                int r4 = r6.mViewCacheMax
                if (r3 < r4) goto L5f
                if (r3 <= 0) goto L5f
                r6.recycleCachedViewAt(r1)
                int r3 = r3 + (-1)
            L5f:
                boolean r4 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
                if (r4 == 0) goto L8e
                if (r3 <= 0) goto L8e
                android.support.v7.widget.RecyclerView r4 = r6.this$0
                android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl r4 = r4.mPrefetchRegistry
                int r5 = r7.mPosition
                boolean r4 = r4.lastPrefetchIncludedPosition(r5)
                if (r4 != 0) goto L8e
                int r3 = r3 + (-1)
            L73:
                if (r3 < 0) goto L8d
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r4 = r6.mCachedViews
                java.lang.Object r4 = r4.get(r3)
                android.support.v7.widget.RecyclerView$ViewHolder r4 = (android.support.v7.widget.RecyclerView.ViewHolder) r4
                int r4 = r4.mPosition
                android.support.v7.widget.RecyclerView r5 = r6.this$0
                android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl r5 = r5.mPrefetchRegistry
                boolean r4 = r5.lastPrefetchIncludedPosition(r4)
                if (r4 != 0) goto L8a
                goto L8d
            L8a:
                int r3 = r3 + (-1)
                goto L73
            L8d:
                int r3 = r3 + r2
            L8e:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r4 = r6.mCachedViews
                r4.add(r3, r7)
                r3 = r2
                goto L96
            L95:
                r3 = r1
            L96:
                if (r3 != 0) goto L9c
                r6.addViewHolderToRecycledViewPool(r7, r2)
                goto L9d
            L9c:
                r2 = r1
            L9d:
                r1 = r3
            L9e:
                android.support.v7.widget.RecyclerView r3 = r6.this$0
                android.support.v7.widget.ViewInfoStore r3 = r3.mViewInfoStore
                r3.removeViewHolder(r7)
                if (r1 != 0) goto Lae
                if (r2 != 0) goto Lae
                if (r0 == 0) goto Lae
                r0 = 0
                r7.mOwnerRecyclerView = r0
            Lae:
                return
            Laf:
                java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Trying to recycle an ignored view holder. You should first call stopIgnoringView(view) before calling recycle."
                r0.append(r1)
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                java.lang.String r1 = r1.exceptionLabel()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r7.<init>(r0)
                throw r7
            Lcc:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Tmp detached view should be removed from RecyclerView before it can be recycled: "
                r1.append(r2)
                r1.append(r7)
                android.support.v7.widget.RecyclerView r7 = r6.this$0
                java.lang.String r7 = r7.exceptionLabel()
                r1.append(r7)
                java.lang.String r7 = r1.toString()
                r0.<init>(r7)
                throw r0
            Lec:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "Scrapped or attached views may not be recycled. isScrap:"
                r3.append(r4)
                boolean r4 = r7.isScrap()
                r3.append(r4)
                java.lang.String r4 = " isAttached:"
                r3.append(r4)
                android.view.View r7 = r7.itemView
                android.view.ViewParent r7 = r7.getParent()
                if (r7 == 0) goto L10d
                r1 = r2
            L10d:
                r3.append(r1)
                android.support.v7.widget.RecyclerView r7 = r6.this$0
                java.lang.String r7 = r7.exceptionLabel()
                r3.append(r7)
                java.lang.String r7 = r3.toString()
                r0.<init>(r7)
                throw r0
        }

        void recycleViewInternal(android.view.View r1) {
                r0 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r1 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r1)
                r0.recycleViewHolderInternal(r1)
                return
        }

        void scrapView(android.view.View r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView$ViewHolder r3 = android.support.v7.widget.RecyclerView.getChildViewHolderInt(r3)
                r0 = 12
                boolean r0 = r3.hasAnyOfTheFlags(r0)
                if (r0 != 0) goto L30
                boolean r0 = r3.isUpdated()
                if (r0 == 0) goto L30
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                boolean r0 = r0.canReuseUpdatedViewHolder(r3)
                if (r0 == 0) goto L1b
                goto L30
            L1b:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mChangedScrap
                if (r0 != 0) goto L26
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.mChangedScrap = r0
            L26:
                r0 = 1
                r3.setScrapContainer(r2, r0)
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mChangedScrap
                r0.add(r3)
                goto L6d
            L30:
                boolean r0 = r3.isInvalid()
                if (r0 == 0) goto L64
                boolean r0 = r3.isRemoved()
                if (r0 != 0) goto L64
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                boolean r0 = r0.hasStableIds()
                if (r0 == 0) goto L47
                goto L64
            L47:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Called scrap view with an invalid view. Invalid views cannot be reused from scrap, they should rebound from recycler pool."
                r0.append(r1)
                android.support.v7.widget.RecyclerView r1 = r2.this$0
                java.lang.String r1 = r1.exceptionLabel()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r3.<init>(r0)
                throw r3
            L64:
                r0 = 0
                r3.setScrapContainer(r2, r0)
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mAttachedScrap
                r0.add(r3)
            L6d:
                return
        }

        void setRecycledViewPool(android.support.v7.widget.RecyclerView.RecycledViewPool r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r1.mRecyclerPool
                if (r0 == 0) goto L7
                r0.detach()
            L7:
                r1.mRecyclerPool = r2
                if (r2 == 0) goto L18
                android.support.v7.widget.RecyclerView r2 = r1.this$0
                android.support.v7.widget.RecyclerView$Adapter r2 = r2.getAdapter()
                if (r2 == 0) goto L18
                android.support.v7.widget.RecyclerView$RecycledViewPool r2 = r1.mRecyclerPool
                r2.attach()
            L18:
                return
        }

        void setViewCacheExtension(android.support.v7.widget.RecyclerView.ViewCacheExtension r1) {
                r0 = this;
                r0.mViewCacheExtension = r1
                return
        }

        public void setViewCacheSize(int r1) {
                r0 = this;
                r0.mRequestedCacheMax = r1
                r0.updateViewCacheSize()
                return
        }

        android.support.v7.widget.RecyclerView.ViewHolder tryGetViewHolderForPositionByDeadline(int r17, boolean r18, long r19) {
                r16 = this;
                r6 = r16
                r3 = r17
                r0 = r18
                if (r3 < 0) goto L238
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                int r1 = r1.getItemCount()
                if (r3 >= r1) goto L238
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                boolean r1 = r1.isPreLayout()
                r2 = 0
                r7 = 1
                r8 = 0
                if (r1 == 0) goto L27
                android.support.v7.widget.RecyclerView$ViewHolder r1 = r16.getChangedScrapViewForPosition(r17)
                if (r1 == 0) goto L28
                r4 = r7
                goto L29
            L27:
                r1 = r2
            L28:
                r4 = r8
            L29:
                if (r1 != 0) goto L5d
                android.support.v7.widget.RecyclerView$ViewHolder r1 = r16.getScrapOrHiddenOrCachedHolderForPosition(r17, r18)
                if (r1 == 0) goto L5d
                boolean r5 = r6.validateViewHolderForOffsetPosition(r1)
                if (r5 != 0) goto L5c
                if (r0 != 0) goto L5a
                r5 = 4
                r1.addFlags(r5)
                boolean r5 = r1.isScrap()
                if (r5 == 0) goto L4e
                android.support.v7.widget.RecyclerView r5 = r6.this$0
                android.view.View r9 = r1.itemView
                r5.removeDetachedView(r9, r8)
                r1.unScrap()
                goto L57
            L4e:
                boolean r5 = r1.wasReturnedFromScrap()
                if (r5 == 0) goto L57
                r1.clearReturnedFromScrapFlag()
            L57:
                r6.recycleViewHolderInternal(r1)
            L5a:
                r1 = r2
                goto L5d
            L5c:
                r4 = r7
            L5d:
                if (r1 != 0) goto L188
                android.support.v7.widget.RecyclerView r5 = r6.this$0
                android.support.v7.widget.AdapterHelper r5 = r5.mAdapterHelper
                int r5 = r5.findPositionOffset(r3)
                if (r5 < 0) goto L14b
                android.support.v7.widget.RecyclerView r9 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r9 = r9.mAdapter
                int r9 = r9.getItemCount()
                if (r5 >= r9) goto L14b
                android.support.v7.widget.RecyclerView r9 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r9 = r9.mAdapter
                int r9 = r9.getItemViewType(r5)
                android.support.v7.widget.RecyclerView r10 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r10 = r10.mAdapter
                boolean r10 = r10.hasStableIds()
                if (r10 == 0) goto L96
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                long r10 = r1.getItemId(r5)
                android.support.v7.widget.RecyclerView$ViewHolder r1 = r6.getScrapOrCachedViewForId(r10, r9, r0)
                if (r1 == 0) goto L96
                r1.mPosition = r5
                r4 = r7
            L96:
                if (r1 != 0) goto Leb
                android.support.v7.widget.RecyclerView$ViewCacheExtension r0 = r6.mViewCacheExtension
                if (r0 == 0) goto Leb
                android.view.View r0 = r0.getViewForPositionAndType(r6, r3, r9)
                if (r0 == 0) goto Leb
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.support.v7.widget.RecyclerView$ViewHolder r1 = r1.getChildViewHolder(r0)
                if (r1 == 0) goto Lce
                boolean r0 = r1.shouldIgnore()
                if (r0 != 0) goto Lb1
                goto Leb
            Lb1:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "getViewForPositionAndType returned a view that is ignored. You must call stopIgnoring before returning this view."
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                java.lang.String r2 = r2.exceptionLabel()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            Lce:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "getViewForPositionAndType returned a view which does not have a ViewHolder"
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                java.lang.String r2 = r2.exceptionLabel()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            Leb:
                if (r1 != 0) goto L102
                android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r16.getRecycledViewPool()
                android.support.v7.widget.RecyclerView$ViewHolder r0 = r0.getRecycledView(r9)
                if (r0 == 0) goto L101
                r0.resetInternal()
                boolean r1 = android.support.v7.widget.RecyclerView.FORCE_INVALIDATE_DISPLAY_LIST
                if (r1 == 0) goto L101
                r6.invalidateDisplayListInt(r0)
            L101:
                r1 = r0
            L102:
                if (r1 != 0) goto L188
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                long r0 = r0.getNanoTime()
                r10 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                int r5 = (r19 > r10 ? 1 : (r19 == r10 ? 0 : -1))
                if (r5 == 0) goto L120
                android.support.v7.widget.RecyclerView$RecycledViewPool r10 = r6.mRecyclerPool
                r11 = r9
                r12 = r0
                r14 = r19
                boolean r5 = r10.willCreateInTime(r11, r12, r14)
                if (r5 != 0) goto L120
                return r2
            L120:
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                android.support.v7.widget.RecyclerView$Adapter r2 = r2.mAdapter
                android.support.v7.widget.RecyclerView r5 = r6.this$0
                android.support.v7.widget.RecyclerView$ViewHolder r2 = r2.createViewHolder(r5, r9)
                boolean r5 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
                if (r5 == 0) goto L13d
                android.view.View r5 = r2.itemView
                android.support.v7.widget.RecyclerView r5 = android.support.v7.widget.RecyclerView.findNestedRecyclerView(r5)
                if (r5 == 0) goto L13d
                java.lang.ref.WeakReference r10 = new java.lang.ref.WeakReference
                r10.<init>(r5)
                r2.mNestedRecyclerView = r10
            L13d:
                android.support.v7.widget.RecyclerView r5 = r6.this$0
                long r10 = r5.getNanoTime()
                android.support.v7.widget.RecyclerView$RecycledViewPool r5 = r6.mRecyclerPool
                long r10 = r10 - r0
                r5.factorInCreateTime(r9, r10)
                r9 = r2
                goto L189
            L14b:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Inconsistency detected. Invalid item position "
                r1.append(r2)
                r1.append(r3)
                java.lang.String r2 = "(offset:"
                r1.append(r2)
                r1.append(r5)
                java.lang.String r2 = ")."
                r1.append(r2)
                java.lang.String r2 = "state:"
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                android.support.v7.widget.RecyclerView$State r2 = r2.mState
                int r2 = r2.getItemCount()
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                java.lang.String r2 = r2.exceptionLabel()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            L188:
                r9 = r1
            L189:
                r10 = r4
                if (r10 == 0) goto L1c4
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                boolean r0 = r0.isPreLayout()
                if (r0 != 0) goto L1c4
                r0 = 8192(0x2000, float:1.148E-41)
                boolean r1 = r9.hasAnyOfTheFlags(r0)
                if (r1 == 0) goto L1c4
                r9.setFlags(r8, r0)
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                boolean r0 = r0.mRunSimpleAnimations
                if (r0 == 0) goto L1c4
                int r0 = android.support.v7.widget.RecyclerView.ItemAnimator.buildAdapterChangeFlagsForAnimations(r9)
                r0 = r0 | 4096(0x1000, float:5.74E-42)
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.support.v7.widget.RecyclerView$ItemAnimator r1 = r1.mItemAnimator
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                android.support.v7.widget.RecyclerView$State r2 = r2.mState
                java.util.List r4 = r9.getUnmodifiedPayloads()
                android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r0 = r1.recordPreLayoutInformation(r2, r9, r0, r4)
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                r1.recordAnimationInfoIfBouncedHiddenView(r9, r0)
            L1c4:
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                boolean r0 = r0.isPreLayout()
                if (r0 == 0) goto L1d7
                boolean r0 = r9.isBound()
                if (r0 == 0) goto L1d7
                r9.mPreLayoutPosition = r3
                goto L1ea
            L1d7:
                boolean r0 = r9.isBound()
                if (r0 == 0) goto L1ec
                boolean r0 = r9.needsUpdate()
                if (r0 != 0) goto L1ec
                boolean r0 = r9.isInvalid()
                if (r0 == 0) goto L1ea
                goto L1ec
            L1ea:
                r0 = r8
                goto L1ff
            L1ec:
                android.support.v7.widget.RecyclerView r0 = r6.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                int r2 = r0.findPositionOffset(r3)
                r0 = r16
                r1 = r9
                r3 = r17
                r4 = r19
                boolean r0 = r0.tryBindViewHolderByDeadline(r1, r2, r3, r4)
            L1ff:
                android.view.View r1 = r9.itemView
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                if (r1 != 0) goto L215
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.view.ViewGroup$LayoutParams r1 = r1.generateDefaultLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.view.View r2 = r9.itemView
                r2.setLayoutParams(r1)
                goto L22d
            L215:
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                boolean r2 = r2.checkLayoutParams(r1)
                if (r2 != 0) goto L22b
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                android.view.ViewGroup$LayoutParams r1 = r2.generateLayoutParams(r1)
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                android.view.View r2 = r9.itemView
                r2.setLayoutParams(r1)
                goto L22d
            L22b:
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
            L22d:
                r1.mViewHolder = r9
                if (r10 == 0) goto L234
                if (r0 == 0) goto L234
                goto L235
            L234:
                r7 = r8
            L235:
                r1.mPendingInvalidate = r7
                return r9
            L238:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Invalid item position "
                r1.append(r2)
                r1.append(r3)
                java.lang.String r2 = "("
                r1.append(r2)
                r1.append(r3)
                java.lang.String r2 = "). Item count:"
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                android.support.v7.widget.RecyclerView$State r2 = r2.mState
                int r2 = r2.getItemCount()
                r1.append(r2)
                android.support.v7.widget.RecyclerView r2 = r6.this$0
                java.lang.String r2 = r2.exceptionLabel()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
        }

        void unscrapView(android.support.v7.widget.RecyclerView.ViewHolder r2) {
                r1 = this;
                boolean r0 = r2.mInChangeScrap
                if (r0 == 0) goto La
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mChangedScrap
                r0.remove(r2)
                goto Lf
            La:
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r1.mAttachedScrap
                r0.remove(r2)
            Lf:
                r0 = 0
                r2.mScrapContainer = r0
                r0 = 0
                r2.mInChangeScrap = r0
                r2.clearReturnedFromScrapFlag()
                return
        }

        void updateViewCacheSize() {
                r3 = this;
                android.support.v7.widget.RecyclerView r0 = r3.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayout
                if (r0 == 0) goto Ld
                android.support.v7.widget.RecyclerView r0 = r3.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayout
                int r0 = r0.mPrefetchMaxCountObserved
                goto Le
            Ld:
                r0 = 0
            Le:
                int r1 = r3.mRequestedCacheMax
                int r1 = r1 + r0
                r3.mViewCacheMax = r1
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r3.mCachedViews
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L1b:
                if (r0 < 0) goto L2d
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r3.mCachedViews
                int r1 = r1.size()
                int r2 = r3.mViewCacheMax
                if (r1 <= r2) goto L2d
                r3.recycleCachedViewAt(r0)
                int r0 = r0 + (-1)
                goto L1b
            L2d:
                return
        }

        boolean validateViewHolderForOffsetPosition(android.support.v7.widget.RecyclerView.ViewHolder r8) {
                r7 = this;
                boolean r0 = r8.isRemoved()
                if (r0 == 0) goto Lf
                android.support.v7.widget.RecyclerView r8 = r7.this$0
                android.support.v7.widget.RecyclerView$State r8 = r8.mState
                boolean r8 = r8.isPreLayout()
                return r8
            Lf:
                int r0 = r8.mPosition
                if (r0 < 0) goto L5b
                int r0 = r8.mPosition
                android.support.v7.widget.RecyclerView r1 = r7.this$0
                android.support.v7.widget.RecyclerView$Adapter r1 = r1.mAdapter
                int r1 = r1.getItemCount()
                if (r0 >= r1) goto L5b
                android.support.v7.widget.RecyclerView r0 = r7.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                boolean r0 = r0.isPreLayout()
                r1 = 0
                if (r0 != 0) goto L3b
                android.support.v7.widget.RecyclerView r0 = r7.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                int r2 = r8.mPosition
                int r0 = r0.getItemViewType(r2)
                int r2 = r8.getItemViewType()
                if (r0 == r2) goto L3b
                return r1
            L3b:
                android.support.v7.widget.RecyclerView r0 = r7.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                boolean r0 = r0.hasStableIds()
                r2 = 1
                if (r0 == 0) goto L5a
                long r3 = r8.getItemId()
                android.support.v7.widget.RecyclerView r0 = r7.this$0
                android.support.v7.widget.RecyclerView$Adapter r0 = r0.mAdapter
                int r8 = r8.mPosition
                long r5 = r0.getItemId(r8)
                int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r8 != 0) goto L59
                r1 = r2
            L59:
                return r1
            L5a:
                return r2
            L5b:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Inconsistency detected. Invalid view holder adapter position"
                r1.append(r2)
                r1.append(r8)
                android.support.v7.widget.RecyclerView r8 = r7.this$0
                java.lang.String r8 = r8.exceptionLabel()
                r1.append(r8)
                java.lang.String r8 = r1.toString()
                r0.<init>(r8)
                throw r0
        }

        void viewRangeUpdate(int r4, int r5) {
                r3 = this;
                int r5 = r5 + r4
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r3.mCachedViews
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L9:
                if (r0 < 0) goto L26
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r3.mCachedViews
                java.lang.Object r1 = r1.get(r0)
                android.support.v7.widget.RecyclerView$ViewHolder r1 = (android.support.v7.widget.RecyclerView.ViewHolder) r1
                if (r1 != 0) goto L16
                goto L23
            L16:
                int r2 = r1.mPosition
                if (r2 < r4) goto L23
                if (r2 >= r5) goto L23
                r2 = 2
                r1.addFlags(r2)
                r3.recycleCachedViewAt(r0)
            L23:
                int r0 = r0 + (-1)
                goto L9
            L26:
                return
        }
    }

    public interface RecyclerListener {
        void onViewRecycled(android.support.v7.widget.RecyclerView.ViewHolder r1);
    }

    private class RecyclerViewDataObserver extends android.support.v7.widget.RecyclerView.AdapterDataObserver {
        final android.support.v7.widget.RecyclerView this$0;

        RecyclerViewDataObserver(android.support.v7.widget.RecyclerView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onChanged() {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 0
                r0.assertNotInLayoutOrScroll(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.RecyclerView$State r0 = r0.mState
                r1 = 1
                r0.mStructureChanged = r1
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r0.processDataSetCompletelyChanged(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                boolean r0 = r0.hasPendingUpdates()
                if (r0 != 0) goto L21
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r0.requestLayout()
            L21:
                return
        }

        @Override
        public void onItemRangeChanged(int r3, int r4, java.lang.Object r5) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 0
                r0.assertNotInLayoutOrScroll(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                boolean r3 = r0.onItemRangeChanged(r3, r4, r5)
                if (r3 == 0) goto L13
                r2.triggerUpdateProcessor()
            L13:
                return
        }

        @Override
        public void onItemRangeInserted(int r3, int r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 0
                r0.assertNotInLayoutOrScroll(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                boolean r3 = r0.onItemRangeInserted(r3, r4)
                if (r3 == 0) goto L13
                r2.triggerUpdateProcessor()
            L13:
                return
        }

        @Override
        public void onItemRangeMoved(int r3, int r4, int r5) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 0
                r0.assertNotInLayoutOrScroll(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                boolean r3 = r0.onItemRangeMoved(r3, r4, r5)
                if (r3 == 0) goto L13
                r2.triggerUpdateProcessor()
            L13:
                return
        }

        @Override
        public void onItemRangeRemoved(int r3, int r4) {
                r2 = this;
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 0
                r0.assertNotInLayoutOrScroll(r1)
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                android.support.v7.widget.AdapterHelper r0 = r0.mAdapterHelper
                boolean r3 = r0.onItemRangeRemoved(r3, r4)
                if (r3 == 0) goto L13
                r2.triggerUpdateProcessor()
            L13:
                return
        }

        void triggerUpdateProcessor() {
                r2 = this;
                boolean r0 = android.support.v7.widget.RecyclerView.POST_UPDATES_ON_ANIMATION
                if (r0 == 0) goto L18
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                boolean r0 = r0.mHasFixedSize
                if (r0 == 0) goto L18
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                boolean r0 = r0.mIsAttached
                if (r0 == 0) goto L18
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                java.lang.Runnable r1 = r0.mUpdateChildViewsRunnable
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r1)
                goto L22
            L18:
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r1 = 1
                r0.mAdapterUpdateDuringMeasure = r1
                android.support.v7.widget.RecyclerView r0 = r2.this$0
                r0.requestLayout()
            L22:
                return
        }
    }

    public static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.v7.widget.RecyclerView.SavedState> CREATOR = null;
        android.os.Parcelable mLayoutState;


        static {
                android.support.v7.widget.RecyclerView$SavedState$1 r0 = new android.support.v7.widget.RecyclerView$SavedState$1
                r0.<init>()
                android.support.v7.widget.RecyclerView.SavedState.CREATOR = r0
                return
        }

        SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                if (r2 == 0) goto L6
                goto Lc
            L6:
                java.lang.Class<android.support.v7.widget.RecyclerView$LayoutManager> r2 = android.support.v7.widget.RecyclerView.LayoutManager.class
                java.lang.ClassLoader r2 = r2.getClassLoader()
            Lc:
                android.os.Parcelable r1 = r1.readParcelable(r2)
                r0.mLayoutState = r1
                return
        }

        SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        void copyFrom(android.support.v7.widget.RecyclerView.SavedState r1) {
                r0 = this;
                android.os.Parcelable r1 = r1.mLayoutState
                r0.mLayoutState = r1
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r2, int r3) {
                r1 = this;
                super.writeToParcel(r2, r3)
                android.os.Parcelable r3 = r1.mLayoutState
                r0 = 0
                r2.writeParcelable(r3, r0)
                return
        }
    }

    public static class SimpleOnItemTouchListener implements android.support.v7.widget.RecyclerView.OnItemTouchListener {
        public SimpleOnItemTouchListener() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean onInterceptTouchEvent(android.support.v7.widget.RecyclerView r1, android.view.MotionEvent r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void onRequestDisallowInterceptTouchEvent(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public void onTouchEvent(android.support.v7.widget.RecyclerView r1, android.view.MotionEvent r2) {
                r0 = this;
                return
        }
    }

    public static abstract class SmoothScroller {
        private android.support.v7.widget.RecyclerView.LayoutManager mLayoutManager;
        private boolean mPendingInitialRun;
        private android.support.v7.widget.RecyclerView mRecyclerView;
        private final android.support.v7.widget.RecyclerView.SmoothScroller.Action mRecyclingAction;
        private boolean mRunning;
        private boolean mStarted;
        private int mTargetPosition;
        private android.view.View mTargetView;

        public static class Action {
            public static final int UNDEFINED_DURATION = Integer.MIN_VALUE;
            private boolean mChanged;
            private int mConsecutiveUpdates;
            private int mDuration;
            private int mDx;
            private int mDy;
            private android.view.animation.Interpolator mInterpolator;
            private int mJumpToPosition;

            public Action(int r3, int r4) {
                    r2 = this;
                    r0 = -2147483648(0xffffffff80000000, float:-0.0)
                    r1 = 0
                    r2.<init>(r3, r4, r0, r1)
                    return
            }

            public Action(int r2, int r3, int r4) {
                    r1 = this;
                    r0 = 0
                    r1.<init>(r2, r3, r4, r0)
                    return
            }

            public Action(int r2, int r3, int r4, android.view.animation.Interpolator r5) {
                    r1 = this;
                    r1.<init>()
                    r0 = -1
                    r1.mJumpToPosition = r0
                    r0 = 0
                    r1.mChanged = r0
                    r1.mConsecutiveUpdates = r0
                    r1.mDx = r2
                    r1.mDy = r3
                    r1.mDuration = r4
                    r1.mInterpolator = r5
                    return
            }

            private void validate() {
                    r2 = this;
                    android.view.animation.Interpolator r0 = r2.mInterpolator
                    r1 = 1
                    if (r0 == 0) goto L12
                    int r0 = r2.mDuration
                    if (r0 < r1) goto La
                    goto L12
                La:
                    java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                    java.lang.String r1 = "If you provide an interpolator, you must set a positive duration"
                    r0.<init>(r1)
                    throw r0
                L12:
                    int r0 = r2.mDuration
                    if (r0 < r1) goto L17
                    return
                L17:
                    java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                    java.lang.String r1 = "Scroll duration must be a positive number"
                    r0.<init>(r1)
                    throw r0
            }

            public int getDuration() {
                    r1 = this;
                    int r0 = r1.mDuration
                    return r0
            }

            public int getDx() {
                    r1 = this;
                    int r0 = r1.mDx
                    return r0
            }

            public int getDy() {
                    r1 = this;
                    int r0 = r1.mDy
                    return r0
            }

            public android.view.animation.Interpolator getInterpolator() {
                    r1 = this;
                    android.view.animation.Interpolator r0 = r1.mInterpolator
                    return r0
            }

            boolean hasJumpTarget() {
                    r1 = this;
                    int r0 = r1.mJumpToPosition
                    if (r0 < 0) goto L6
                    r0 = 1
                    goto L7
                L6:
                    r0 = 0
                L7:
                    return r0
            }

            public void jumpTo(int r1) {
                    r0 = this;
                    r0.mJumpToPosition = r1
                    return
            }

            void runIfNecessary(android.support.v7.widget.RecyclerView r6) {
                    r5 = this;
                    int r0 = r5.mJumpToPosition
                    r1 = 0
                    if (r0 < 0) goto Le
                    r2 = -1
                    r5.mJumpToPosition = r2
                    r6.jumpToPositionForSmoothScroller(r0)
                    r5.mChanged = r1
                    return
                Le:
                    boolean r0 = r5.mChanged
                    if (r0 == 0) goto L56
                    r5.validate()
                    android.view.animation.Interpolator r0 = r5.mInterpolator
                    if (r0 != 0) goto L35
                    int r0 = r5.mDuration
                    r2 = -2147483648(0xffffffff80000000, float:-0.0)
                    if (r0 != r2) goto L29
                    android.support.v7.widget.RecyclerView$ViewFlinger r6 = r6.mViewFlinger
                    int r0 = r5.mDx
                    int r2 = r5.mDy
                    r6.smoothScrollBy(r0, r2)
                    goto L42
                L29:
                    android.support.v7.widget.RecyclerView$ViewFlinger r6 = r6.mViewFlinger
                    int r0 = r5.mDx
                    int r2 = r5.mDy
                    int r3 = r5.mDuration
                    r6.smoothScrollBy(r0, r2, r3)
                    goto L42
                L35:
                    android.support.v7.widget.RecyclerView$ViewFlinger r6 = r6.mViewFlinger
                    int r0 = r5.mDx
                    int r2 = r5.mDy
                    int r3 = r5.mDuration
                    android.view.animation.Interpolator r4 = r5.mInterpolator
                    r6.smoothScrollBy(r0, r2, r3, r4)
                L42:
                    int r6 = r5.mConsecutiveUpdates
                    int r6 = r6 + 1
                    r5.mConsecutiveUpdates = r6
                    r0 = 10
                    if (r6 <= r0) goto L53
                    java.lang.String r6 = "RecyclerView"
                    java.lang.String r0 = "Smooth Scroll action is being updated too frequently. Make sure you are not changing it unless necessary"
                    android.util.Log.e(r6, r0)
                L53:
                    r5.mChanged = r1
                    goto L58
                L56:
                    r5.mConsecutiveUpdates = r1
                L58:
                    return
            }

            public void setDuration(int r2) {
                    r1 = this;
                    r0 = 1
                    r1.mChanged = r0
                    r1.mDuration = r2
                    return
            }

            public void setDx(int r2) {
                    r1 = this;
                    r0 = 1
                    r1.mChanged = r0
                    r1.mDx = r2
                    return
            }

            public void setDy(int r2) {
                    r1 = this;
                    r0 = 1
                    r1.mChanged = r0
                    r1.mDy = r2
                    return
            }

            public void setInterpolator(android.view.animation.Interpolator r2) {
                    r1 = this;
                    r0 = 1
                    r1.mChanged = r0
                    r1.mInterpolator = r2
                    return
            }

            public void update(int r1, int r2, int r3, android.view.animation.Interpolator r4) {
                    r0 = this;
                    r0.mDx = r1
                    r0.mDy = r2
                    r0.mDuration = r3
                    r0.mInterpolator = r4
                    r1 = 1
                    r0.mChanged = r1
                    return
            }
        }

        public interface ScrollVectorProvider {
            android.graphics.PointF computeScrollVectorForPosition(int r1);
        }

        public SmoothScroller() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.mTargetPosition = r0
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r0 = new android.support.v7.widget.RecyclerView$SmoothScroller$Action
                r1 = 0
                r0.<init>(r1, r1)
                r2.mRecyclingAction = r0
                return
        }

        public android.graphics.PointF computeScrollVectorForPosition(int r3) {
                r2 = this;
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.getLayoutManager()
                boolean r1 = r0 instanceof android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider
                if (r1 == 0) goto Lf
                android.support.v7.widget.RecyclerView$SmoothScroller$ScrollVectorProvider r0 = (android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider) r0
                android.graphics.PointF r3 = r0.computeScrollVectorForPosition(r3)
                return r3
            Lf:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r0 = "You should override computeScrollVectorForPosition when the LayoutManager does not implement "
                r3.append(r0)
                java.lang.Class<android.support.v7.widget.RecyclerView$SmoothScroller$ScrollVectorProvider> r0 = android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider.class
                java.lang.String r0 = r0.getCanonicalName()
                r3.append(r0)
                java.lang.String r3 = r3.toString()
                java.lang.String r0 = "RecyclerView"
                android.util.Log.w(r0, r3)
                r3 = 0
                return r3
        }

        public android.view.View findViewByPosition(int r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayout
                android.view.View r2 = r0.findViewByPosition(r2)
                return r2
        }

        public int getChildCount() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayout
                int r0 = r0.getChildCount()
                return r0
        }

        public int getChildPosition(android.view.View r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                int r2 = r0.getChildLayoutPosition(r2)
                return r2
        }

        public android.support.v7.widget.RecyclerView.LayoutManager getLayoutManager() {
                r1 = this;
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayoutManager
                return r0
        }

        public int getTargetPosition() {
                r1 = this;
                int r0 = r1.mTargetPosition
                return r0
        }

        @java.lang.Deprecated
        public void instantScrollToPosition(int r2) {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
                r0.scrollToPosition(r2)
                return
        }

        public boolean isPendingInitialRun() {
                r1 = this;
                boolean r0 = r1.mPendingInitialRun
                return r0
        }

        public boolean isRunning() {
                r1 = this;
                boolean r0 = r1.mRunning
                return r0
        }

        protected void normalize(android.graphics.PointF r4) {
                r3 = this;
                float r0 = r4.x
                float r1 = r4.x
                float r0 = r0 * r1
                float r1 = r4.y
                float r2 = r4.y
                float r1 = r1 * r2
                float r0 = r0 + r1
                double r0 = (double) r0
                double r0 = java.lang.Math.sqrt(r0)
                float r0 = (float) r0
                float r1 = r4.x
                float r1 = r1 / r0
                r4.x = r1
                float r1 = r4.y
                float r1 = r1 / r0
                r4.y = r1
                return
        }

        void onAnimation(int r6, int r7) {
                r5 = this;
                android.support.v7.widget.RecyclerView r0 = r5.mRecyclerView
                boolean r1 = r5.mRunning
                if (r1 == 0) goto Ld
                int r1 = r5.mTargetPosition
                r2 = -1
                if (r1 == r2) goto Ld
                if (r0 != 0) goto L10
            Ld:
                r5.stop()
            L10:
                boolean r1 = r5.mPendingInitialRun
                r2 = 0
                if (r1 == 0) goto L43
                android.view.View r1 = r5.mTargetView
                if (r1 != 0) goto L43
                android.support.v7.widget.RecyclerView$LayoutManager r1 = r5.mLayoutManager
                if (r1 == 0) goto L43
                int r1 = r5.mTargetPosition
                android.graphics.PointF r1 = r5.computeScrollVectorForPosition(r1)
                if (r1 == 0) goto L43
                float r3 = r1.x
                r4 = 0
                int r3 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
                if (r3 != 0) goto L32
                float r3 = r1.y
                int r3 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
                if (r3 == 0) goto L43
            L32:
                float r3 = r1.x
                float r3 = java.lang.Math.signum(r3)
                int r3 = (int) r3
                float r1 = r1.y
                float r1 = java.lang.Math.signum(r1)
                int r1 = (int) r1
                r0.scrollStep(r3, r1, r2)
            L43:
                r1 = 0
                r5.mPendingInitialRun = r1
                android.view.View r1 = r5.mTargetView
                if (r1 == 0) goto L6d
                int r1 = r5.getChildPosition(r1)
                int r3 = r5.mTargetPosition
                if (r1 != r3) goto L64
                android.view.View r1 = r5.mTargetView
                android.support.v7.widget.RecyclerView$State r2 = r0.mState
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r3 = r5.mRecyclingAction
                r5.onTargetFound(r1, r2, r3)
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r1 = r5.mRecyclingAction
                r1.runIfNecessary(r0)
                r5.stop()
                goto L6d
            L64:
                java.lang.String r1 = "RecyclerView"
                java.lang.String r3 = "Passed over target position while smooth scrolling."
                android.util.Log.e(r1, r3)
                r5.mTargetView = r2
            L6d:
                boolean r1 = r5.mRunning
                if (r1 == 0) goto L95
                android.support.v7.widget.RecyclerView$State r1 = r0.mState
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r2 = r5.mRecyclingAction
                r5.onSeekTargetStep(r6, r7, r1, r2)
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r6 = r5.mRecyclingAction
                boolean r6 = r6.hasJumpTarget()
                android.support.v7.widget.RecyclerView$SmoothScroller$Action r7 = r5.mRecyclingAction
                r7.runIfNecessary(r0)
                if (r6 == 0) goto L95
                boolean r6 = r5.mRunning
                if (r6 == 0) goto L92
                r6 = 1
                r5.mPendingInitialRun = r6
                android.support.v7.widget.RecyclerView$ViewFlinger r6 = r0.mViewFlinger
                r6.postOnAnimation()
                goto L95
            L92:
                r5.stop()
            L95:
                return
        }

        protected void onChildAttachedToWindow(android.view.View r3) {
                r2 = this;
                int r0 = r2.getChildPosition(r3)
                int r1 = r2.getTargetPosition()
                if (r0 != r1) goto Lc
                r2.mTargetView = r3
            Lc:
                return
        }

        protected abstract void onSeekTargetStep(int r1, int r2, android.support.v7.widget.RecyclerView.State r3, android.support.v7.widget.RecyclerView.SmoothScroller.Action r4);

        protected abstract void onStart();

        protected abstract void onStop();

        protected abstract void onTargetFound(android.view.View r1, android.support.v7.widget.RecyclerView.State r2, android.support.v7.widget.RecyclerView.SmoothScroller.Action r3);

        public void setTargetPosition(int r1) {
                r0 = this;
                r0.mTargetPosition = r1
                return
        }

        void start(android.support.v7.widget.RecyclerView r3, android.support.v7.widget.RecyclerView.LayoutManager r4) {
                r2 = this;
                boolean r0 = r2.mStarted
                if (r0 == 0) goto L46
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "An instance of "
                r0.append(r1)
                java.lang.Class r1 = r2.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r0.append(r1)
                java.lang.String r1 = " was started "
                r0.append(r1)
                java.lang.String r1 = "more than once. Each instance of"
                r0.append(r1)
                java.lang.Class r1 = r2.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r0.append(r1)
                java.lang.String r1 = " "
                r0.append(r1)
                java.lang.String r1 = "is intended to only be used once. You should create a new instance for "
                r0.append(r1)
                java.lang.String r1 = "each use."
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "RecyclerView"
                android.util.Log.w(r1, r0)
            L46:
                r2.mRecyclerView = r3
                r2.mLayoutManager = r4
                int r4 = r2.mTargetPosition
                r0 = -1
                if (r4 == r0) goto L71
                android.support.v7.widget.RecyclerView$State r3 = r3.mState
                int r4 = r2.mTargetPosition
                r3.mTargetPosition = r4
                r3 = 1
                r2.mRunning = r3
                r2.mPendingInitialRun = r3
                int r4 = r2.getTargetPosition()
                android.view.View r4 = r2.findViewByPosition(r4)
                r2.mTargetView = r4
                r2.onStart()
                android.support.v7.widget.RecyclerView r4 = r2.mRecyclerView
                android.support.v7.widget.RecyclerView$ViewFlinger r4 = r4.mViewFlinger
                r4.postOnAnimation()
                r2.mStarted = r3
                return
            L71:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "Invalid target position"
                r3.<init>(r4)
                throw r3
        }

        protected final void stop() {
                r3 = this;
                boolean r0 = r3.mRunning
                if (r0 != 0) goto L5
                return
            L5:
                r0 = 0
                r3.mRunning = r0
                r3.onStop()
                android.support.v7.widget.RecyclerView r1 = r3.mRecyclerView
                android.support.v7.widget.RecyclerView$State r1 = r1.mState
                r2 = -1
                r1.mTargetPosition = r2
                r1 = 0
                r3.mTargetView = r1
                r3.mTargetPosition = r2
                r3.mPendingInitialRun = r0
                android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayoutManager
                r0.onSmoothScrollerStopped(r3)
                r3.mLayoutManager = r1
                r3.mRecyclerView = r1
                return
        }
    }

    public static class State {
        static final int STEP_ANIMATIONS = 4;
        static final int STEP_LAYOUT = 2;
        static final int STEP_START = 1;
        private android.util.SparseArray<java.lang.Object> mData;
        int mDeletedInvisibleItemCountSincePreviousLayout;
        long mFocusedItemId;
        int mFocusedItemPosition;
        int mFocusedSubChildId;
        boolean mInPreLayout;
        boolean mIsMeasuring;
        int mItemCount;
        int mLayoutStep;
        int mPreviousLayoutItemCount;
        int mRemainingScrollHorizontal;
        int mRemainingScrollVertical;
        boolean mRunPredictiveAnimations;
        boolean mRunSimpleAnimations;
        boolean mStructureChanged;
        int mTargetPosition;
        boolean mTrackOldChangeHolders;

        public State() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.mTargetPosition = r0
                r0 = 0
                r2.mPreviousLayoutItemCount = r0
                r2.mDeletedInvisibleItemCountSincePreviousLayout = r0
                r1 = 1
                r2.mLayoutStep = r1
                r2.mItemCount = r0
                r2.mStructureChanged = r0
                r2.mInPreLayout = r0
                r2.mTrackOldChangeHolders = r0
                r2.mIsMeasuring = r0
                r2.mRunSimpleAnimations = r0
                r2.mRunPredictiveAnimations = r0
                return
        }

        void assertLayoutStep(int r4) {
                r3 = this;
                int r0 = r3.mLayoutStep
                r0 = r0 & r4
                if (r0 == 0) goto L6
                return
            L6:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Layout state should be one of "
                r1.append(r2)
                java.lang.String r4 = java.lang.Integer.toBinaryString(r4)
                r1.append(r4)
                java.lang.String r4 = " but it is "
                r1.append(r4)
                int r4 = r3.mLayoutStep
                java.lang.String r4 = java.lang.Integer.toBinaryString(r4)
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        public boolean didStructureChange() {
                r1 = this;
                boolean r0 = r1.mStructureChanged
                return r0
        }

        public <T> T get(int r2) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.mData
                if (r0 != 0) goto L6
                r2 = 0
                return r2
            L6:
                java.lang.Object r2 = r0.get(r2)
                return r2
        }

        public int getItemCount() {
                r2 = this;
                boolean r0 = r2.mInPreLayout
                if (r0 == 0) goto La
                int r0 = r2.mPreviousLayoutItemCount
                int r1 = r2.mDeletedInvisibleItemCountSincePreviousLayout
                int r0 = r0 - r1
                goto Lc
            La:
                int r0 = r2.mItemCount
            Lc:
                return r0
        }

        public int getRemainingScrollHorizontal() {
                r1 = this;
                int r0 = r1.mRemainingScrollHorizontal
                return r0
        }

        public int getRemainingScrollVertical() {
                r1 = this;
                int r0 = r1.mRemainingScrollVertical
                return r0
        }

        public int getTargetScrollPosition() {
                r1 = this;
                int r0 = r1.mTargetPosition
                return r0
        }

        public boolean hasTargetScrollPosition() {
                r2 = this;
                int r0 = r2.mTargetPosition
                r1 = -1
                if (r0 == r1) goto L7
                r0 = 1
                goto L8
            L7:
                r0 = 0
            L8:
                return r0
        }

        public boolean isMeasuring() {
                r1 = this;
                boolean r0 = r1.mIsMeasuring
                return r0
        }

        public boolean isPreLayout() {
                r1 = this;
                boolean r0 = r1.mInPreLayout
                return r0
        }

        void prepareForNestedPrefetch(android.support.v7.widget.RecyclerView.Adapter r2) {
                r1 = this;
                r0 = 1
                r1.mLayoutStep = r0
                int r2 = r2.getItemCount()
                r1.mItemCount = r2
                r2 = 0
                r1.mInPreLayout = r2
                r1.mTrackOldChangeHolders = r2
                r1.mIsMeasuring = r2
                return
        }

        public void put(int r2, java.lang.Object r3) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.mData
                if (r0 != 0) goto Lb
                android.util.SparseArray r0 = new android.util.SparseArray
                r0.<init>()
                r1.mData = r0
            Lb:
                android.util.SparseArray<java.lang.Object> r0 = r1.mData
                r0.put(r2, r3)
                return
        }

        public void remove(int r2) {
                r1 = this;
                android.util.SparseArray<java.lang.Object> r0 = r1.mData
                if (r0 != 0) goto L5
                return
            L5:
                r0.remove(r2)
                return
        }

        android.support.v7.widget.RecyclerView.State reset() {
                r1 = this;
                r0 = -1
                r1.mTargetPosition = r0
                android.util.SparseArray<java.lang.Object> r0 = r1.mData
                if (r0 == 0) goto La
                r0.clear()
            La:
                r0 = 0
                r1.mItemCount = r0
                r1.mStructureChanged = r0
                r1.mIsMeasuring = r0
                return r1
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "State{mTargetPosition="
                r0.append(r1)
                int r1 = r2.mTargetPosition
                r0.append(r1)
                java.lang.String r1 = ", mData="
                r0.append(r1)
                android.util.SparseArray<java.lang.Object> r1 = r2.mData
                r0.append(r1)
                java.lang.String r1 = ", mItemCount="
                r0.append(r1)
                int r1 = r2.mItemCount
                r0.append(r1)
                java.lang.String r1 = ", mIsMeasuring="
                r0.append(r1)
                boolean r1 = r2.mIsMeasuring
                r0.append(r1)
                java.lang.String r1 = ", mPreviousLayoutItemCount="
                r0.append(r1)
                int r1 = r2.mPreviousLayoutItemCount
                r0.append(r1)
                java.lang.String r1 = ", mDeletedInvisibleItemCountSincePreviousLayout="
                r0.append(r1)
                int r1 = r2.mDeletedInvisibleItemCountSincePreviousLayout
                r0.append(r1)
                java.lang.String r1 = ", mStructureChanged="
                r0.append(r1)
                boolean r1 = r2.mStructureChanged
                r0.append(r1)
                java.lang.String r1 = ", mInPreLayout="
                r0.append(r1)
                boolean r1 = r2.mInPreLayout
                r0.append(r1)
                java.lang.String r1 = ", mRunSimpleAnimations="
                r0.append(r1)
                boolean r1 = r2.mRunSimpleAnimations
                r0.append(r1)
                java.lang.String r1 = ", mRunPredictiveAnimations="
                r0.append(r1)
                boolean r1 = r2.mRunPredictiveAnimations
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public boolean willRunPredictiveAnimations() {
                r1 = this;
                boolean r0 = r1.mRunPredictiveAnimations
                return r0
        }

        public boolean willRunSimpleAnimations() {
                r1 = this;
                boolean r0 = r1.mRunSimpleAnimations
                return r0
        }
    }

    public static abstract class ViewCacheExtension {
        public ViewCacheExtension() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract android.view.View getViewForPositionAndType(android.support.v7.widget.RecyclerView.Recycler r1, int r2, int r3);
    }

    class ViewFlinger implements java.lang.Runnable {
        private boolean mEatRunOnAnimationRequest;
        android.view.animation.Interpolator mInterpolator;
        private int mLastFlingX;
        private int mLastFlingY;
        private boolean mReSchedulePostAnimationCallback;
        android.widget.OverScroller mScroller;
        final android.support.v7.widget.RecyclerView this$0;

        ViewFlinger(android.support.v7.widget.RecyclerView r3) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                android.view.animation.Interpolator r0 = android.support.v7.widget.RecyclerView.sQuinticInterpolator
                r2.mInterpolator = r0
                r0 = 0
                r2.mEatRunOnAnimationRequest = r0
                r2.mReSchedulePostAnimationCallback = r0
                android.widget.OverScroller r0 = new android.widget.OverScroller
                android.content.Context r3 = r3.getContext()
                android.view.animation.Interpolator r1 = android.support.v7.widget.RecyclerView.sQuinticInterpolator
                r0.<init>(r3, r1)
                r2.mScroller = r0
                return
        }

        private int computeScrollDuration(int r5, int r6, int r7, int r8) {
                r4 = this;
                int r0 = java.lang.Math.abs(r5)
                int r1 = java.lang.Math.abs(r6)
                if (r0 <= r1) goto Lc
                r2 = 1
                goto Ld
            Lc:
                r2 = 0
            Ld:
                int r7 = r7 * r7
                int r8 = r8 * r8
                int r7 = r7 + r8
                double r7 = (double) r7
                double r7 = java.lang.Math.sqrt(r7)
                int r7 = (int) r7
                int r5 = r5 * r5
                int r6 = r6 * r6
                int r5 = r5 + r6
                double r5 = (double) r5
                double r5 = java.lang.Math.sqrt(r5)
                int r5 = (int) r5
                android.support.v7.widget.RecyclerView r6 = r4.this$0
                if (r2 == 0) goto L28
                int r6 = r6.getWidth()
                goto L2c
            L28:
                int r6 = r6.getHeight()
            L2c:
                int r8 = r6 / 2
                float r5 = (float) r5
                r3 = 1065353216(0x3f800000, float:1.0)
                float r5 = r5 * r3
                float r6 = (float) r6
                float r5 = r5 / r6
                float r5 = java.lang.Math.min(r3, r5)
                float r8 = (float) r8
                float r5 = r4.distanceInfluenceForSnapDuration(r5)
                float r5 = r5 * r8
                float r8 = r8 + r5
                if (r7 <= 0) goto L51
                r5 = 1148846080(0x447a0000, float:1000.0)
                float r6 = (float) r7
                float r8 = r8 / r6
                float r6 = java.lang.Math.abs(r8)
                float r6 = r6 * r5
                int r5 = java.lang.Math.round(r6)
                int r5 = r5 * 4
                goto L5c
            L51:
                if (r2 == 0) goto L54
                goto L55
            L54:
                r0 = r1
            L55:
                float r5 = (float) r0
                float r5 = r5 / r6
                float r5 = r5 + r3
                r6 = 1133903872(0x43960000, float:300.0)
                float r5 = r5 * r6
                int r5 = (int) r5
            L5c:
                r6 = 2000(0x7d0, float:2.803E-42)
                int r5 = java.lang.Math.min(r5, r6)
                return r5
        }

        private void disableRunOnAnimationRequests() {
                r1 = this;
                r0 = 0
                r1.mReSchedulePostAnimationCallback = r0
                r0 = 1
                r1.mEatRunOnAnimationRequest = r0
                return
        }

        private float distanceInfluenceForSnapDuration(float r3) {
                r2 = this;
                r0 = 1056964608(0x3f000000, float:0.5)
                float r3 = r3 - r0
                r0 = 1055999547(0x3ef1463b, float:0.47123894)
                float r3 = r3 * r0
                double r0 = (double) r3
                double r0 = java.lang.Math.sin(r0)
                float r3 = (float) r0
                return r3
        }

        private void enableRunOnAnimationRequests() {
                r1 = this;
                r0 = 0
                r1.mEatRunOnAnimationRequest = r0
                boolean r0 = r1.mReSchedulePostAnimationCallback
                if (r0 == 0) goto La
                r1.postOnAnimation()
            La:
                return
        }

        public void fling(int r11, int r12) {
                r10 = this;
                android.support.v7.widget.RecyclerView r0 = r10.this$0
                r1 = 2
                r0.setScrollState(r1)
                r0 = 0
                r10.mLastFlingY = r0
                r10.mLastFlingX = r0
                android.widget.OverScroller r1 = r10.mScroller
                r2 = 0
                r3 = 0
                r6 = -2147483648(0xffffffff80000000, float:-0.0)
                r7 = 2147483647(0x7fffffff, float:NaN)
                r8 = -2147483648(0xffffffff80000000, float:-0.0)
                r9 = 2147483647(0x7fffffff, float:NaN)
                r4 = r11
                r5 = r12
                r1.fling(r2, r3, r4, r5, r6, r7, r8, r9)
                r10.postOnAnimation()
                return
        }

        void postOnAnimation() {
                r1 = this;
                boolean r0 = r1.mEatRunOnAnimationRequest
                if (r0 == 0) goto L8
                r0 = 1
                r1.mReSchedulePostAnimationCallback = r0
                goto L12
            L8:
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                r0.removeCallbacks(r1)
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r1)
            L12:
                return
        }

        @Override
        public void run() {
                r22 = this;
                r0 = r22
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r1 = r1.mLayout
                if (r1 != 0) goto Lc
                r22.stop()
                return
            Lc:
                r22.disableRunOnAnimationRequests()
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                r1.consumePendingUpdateOperations()
                android.widget.OverScroller r1 = r0.mScroller
                android.support.v7.widget.RecyclerView r2 = r0.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r2 = r2.mLayout
                android.support.v7.widget.RecyclerView$SmoothScroller r2 = r2.mSmoothScroller
                boolean r3 = r1.computeScrollOffset()
                r4 = 0
                if (r3 == 0) goto L197
                android.support.v7.widget.RecyclerView r3 = r0.this$0
                int[] r3 = r3.mScrollConsumed
                int r11 = r1.getCurrX()
                int r12 = r1.getCurrY()
                int r5 = r0.mLastFlingX
                int r13 = r11 - r5
                int r5 = r0.mLastFlingY
                int r14 = r12 - r5
                r0.mLastFlingX = r11
                r0.mLastFlingY = r12
                android.support.v7.widget.RecyclerView r5 = r0.this$0
                r9 = 0
                r10 = 1
                r6 = r13
                r7 = r14
                r8 = r3
                boolean r5 = r5.dispatchNestedPreScroll(r6, r7, r8, r9, r10)
                r6 = 1
                if (r5 == 0) goto L4f
                r5 = r3[r4]
                int r13 = r13 - r5
                r3 = r3[r6]
                int r14 = r14 - r3
            L4f:
                android.support.v7.widget.RecyclerView r3 = r0.this$0
                android.support.v7.widget.RecyclerView$Adapter r3 = r3.mAdapter
                if (r3 == 0) goto La2
                android.support.v7.widget.RecyclerView r3 = r0.this$0
                int[] r5 = r3.mScrollStepConsumed
                r3.scrollStep(r13, r14, r5)
                android.support.v7.widget.RecyclerView r3 = r0.this$0
                int[] r3 = r3.mScrollStepConsumed
                r3 = r3[r4]
                android.support.v7.widget.RecyclerView r5 = r0.this$0
                int[] r5 = r5.mScrollStepConsumed
                r5 = r5[r6]
                int r7 = r13 - r3
                int r8 = r14 - r5
                if (r2 == 0) goto La6
                boolean r9 = r2.isPendingInitialRun()
                if (r9 != 0) goto La6
                boolean r9 = r2.isRunning()
                if (r9 == 0) goto La6
                android.support.v7.widget.RecyclerView r9 = r0.this$0
                android.support.v7.widget.RecyclerView$State r9 = r9.mState
                int r9 = r9.getItemCount()
                if (r9 != 0) goto L88
                r2.stop()
                goto La6
            L88:
                int r10 = r2.getTargetPosition()
                if (r10 < r9) goto L9a
                int r9 = r9 - r6
                r2.setTargetPosition(r9)
                int r9 = r13 - r7
                int r10 = r14 - r8
                r2.onAnimation(r9, r10)
                goto La6
            L9a:
                int r9 = r13 - r7
                int r10 = r14 - r8
                r2.onAnimation(r9, r10)
                goto La6
            La2:
                r3 = r4
                r5 = r3
                r7 = r5
                r8 = r7
            La6:
                android.support.v7.widget.RecyclerView r9 = r0.this$0
                java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r9 = r9.mItemDecorations
                boolean r9 = r9.isEmpty()
                if (r9 != 0) goto Lb5
                android.support.v7.widget.RecyclerView r9 = r0.this$0
                r9.invalidate()
            Lb5:
                android.support.v7.widget.RecyclerView r9 = r0.this$0
                int r9 = r9.getOverScrollMode()
                r10 = 2
                if (r9 == r10) goto Lc3
                android.support.v7.widget.RecyclerView r9 = r0.this$0
                r9.considerReleasingGlowsOnScroll(r13, r14)
            Lc3:
                android.support.v7.widget.RecyclerView r15 = r0.this$0
                r20 = 0
                r21 = 1
                r16 = r3
                r17 = r5
                r18 = r7
                r19 = r8
                boolean r9 = r15.dispatchNestedScroll(r16, r17, r18, r19, r20, r21)
                if (r9 != 0) goto L119
                if (r7 != 0) goto Ldb
                if (r8 == 0) goto L119
            Ldb:
                float r9 = r1.getCurrVelocity()
                int r9 = (int) r9
                if (r7 == r11) goto Lea
                if (r7 >= 0) goto Le6
                int r15 = -r9
                goto Leb
            Le6:
                if (r7 <= 0) goto Lea
                r15 = r9
                goto Leb
            Lea:
                r15 = r4
            Leb:
                if (r8 == r12) goto Lf4
                if (r8 >= 0) goto Lf1
                int r9 = -r9
                goto Lf5
            Lf1:
                if (r8 <= 0) goto Lf4
                goto Lf5
            Lf4:
                r9 = r4
            Lf5:
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                int r4 = r4.getOverScrollMode()
                if (r4 == r10) goto L102
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                r4.absorbGlows(r15, r9)
            L102:
                if (r15 != 0) goto L10c
                if (r7 == r11) goto L10c
                int r4 = r1.getFinalX()
                if (r4 != 0) goto L119
            L10c:
                if (r9 != 0) goto L116
                if (r8 == r12) goto L116
                int r4 = r1.getFinalY()
                if (r4 != 0) goto L119
            L116:
                r1.abortAnimation()
            L119:
                if (r3 != 0) goto L11d
                if (r5 == 0) goto L122
            L11d:
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                r4.dispatchOnScrolled(r3, r5)
            L122:
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                boolean r4 = android.support.v7.widget.RecyclerView.access$200(r4)
                if (r4 != 0) goto L12f
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                r4.invalidate()
            L12f:
                if (r14 == 0) goto L13f
                android.support.v7.widget.RecyclerView r4 = r0.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r4 = r4.mLayout
                boolean r4 = r4.canScrollVertically()
                if (r4 == 0) goto L13f
                if (r5 != r14) goto L13f
                r4 = r6
                goto L140
            L13f:
                r4 = 0
            L140:
                if (r13 == 0) goto L150
                android.support.v7.widget.RecyclerView r5 = r0.this$0
                android.support.v7.widget.RecyclerView$LayoutManager r5 = r5.mLayout
                boolean r5 = r5.canScrollHorizontally()
                if (r5 == 0) goto L150
                if (r3 != r13) goto L150
                r3 = r6
                goto L151
            L150:
                r3 = 0
            L151:
                if (r13 != 0) goto L155
                if (r14 == 0) goto L15c
            L155:
                if (r3 != 0) goto L15c
                if (r4 == 0) goto L15a
                goto L15c
            L15a:
                r3 = 0
                goto L15d
            L15c:
                r3 = r6
            L15d:
                boolean r1 = r1.isFinished()
                if (r1 != 0) goto L181
                if (r3 != 0) goto L16e
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                boolean r1 = r1.hasNestedScrollingParent(r6)
                if (r1 != 0) goto L16e
                goto L181
            L16e:
                r22.postOnAnimation()
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                android.support.v7.widget.GapWorker r1 = r1.mGapWorker
                if (r1 == 0) goto L197
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                android.support.v7.widget.GapWorker r1 = r1.mGapWorker
                android.support.v7.widget.RecyclerView r3 = r0.this$0
                r1.postFromTraversal(r3, r13, r14)
                goto L197
            L181:
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                r3 = 0
                r1.setScrollState(r3)
                boolean r1 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
                if (r1 == 0) goto L192
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl r1 = r1.mPrefetchRegistry
                r1.clearPrefetchPositions()
            L192:
                android.support.v7.widget.RecyclerView r1 = r0.this$0
                r1.stopNestedScroll(r6)
            L197:
                if (r2 == 0) goto L1aa
                boolean r1 = r2.isPendingInitialRun()
                if (r1 == 0) goto L1a3
                r1 = 0
                r2.onAnimation(r1, r1)
            L1a3:
                boolean r1 = r0.mReSchedulePostAnimationCallback
                if (r1 != 0) goto L1aa
                r2.stop()
            L1aa:
                r22.enableRunOnAnimationRequests()
                return
        }

        public void smoothScrollBy(int r2, int r3) {
                r1 = this;
                r0 = 0
                r1.smoothScrollBy(r2, r3, r0, r0)
                return
        }

        public void smoothScrollBy(int r2, int r3, int r4) {
                r1 = this;
                android.view.animation.Interpolator r0 = android.support.v7.widget.RecyclerView.sQuinticInterpolator
                r1.smoothScrollBy(r2, r3, r4, r0)
                return
        }

        public void smoothScrollBy(int r1, int r2, int r3, int r4) {
                r0 = this;
                int r3 = r0.computeScrollDuration(r1, r2, r3, r4)
                r0.smoothScrollBy(r1, r2, r3)
                return
        }

        public void smoothScrollBy(int r7, int r8, int r9, android.view.animation.Interpolator r10) {
                r6 = this;
                android.view.animation.Interpolator r0 = r6.mInterpolator
                if (r0 == r10) goto L13
                r6.mInterpolator = r10
                android.widget.OverScroller r0 = new android.widget.OverScroller
                android.support.v7.widget.RecyclerView r1 = r6.this$0
                android.content.Context r1 = r1.getContext()
                r0.<init>(r1, r10)
                r6.mScroller = r0
            L13:
                android.support.v7.widget.RecyclerView r10 = r6.this$0
                r0 = 2
                r10.setScrollState(r0)
                r10 = 0
                r6.mLastFlingY = r10
                r6.mLastFlingX = r10
                android.widget.OverScroller r0 = r6.mScroller
                r1 = 0
                r2 = 0
                r3 = r7
                r4 = r8
                r5 = r9
                r0.startScroll(r1, r2, r3, r4, r5)
                int r7 = android.os.Build.VERSION.SDK_INT
                r8 = 23
                if (r7 >= r8) goto L33
                android.widget.OverScroller r7 = r6.mScroller
                r7.computeScrollOffset()
            L33:
                r6.postOnAnimation()
                return
        }

        public void smoothScrollBy(int r2, int r3, android.view.animation.Interpolator r4) {
                r1 = this;
                r0 = 0
                int r0 = r1.computeScrollDuration(r2, r3, r0, r0)
                if (r4 != 0) goto L9
                android.view.animation.Interpolator r4 = android.support.v7.widget.RecyclerView.sQuinticInterpolator
            L9:
                r1.smoothScrollBy(r2, r3, r0, r4)
                return
        }

        public void stop() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.this$0
                r0.removeCallbacks(r1)
                android.widget.OverScroller r0 = r1.mScroller
                r0.abortAnimation()
                return
        }
    }

    public static abstract class ViewHolder {
        static final int FLAG_ADAPTER_FULLUPDATE = 1024;
        static final int FLAG_ADAPTER_POSITION_UNKNOWN = 512;
        static final int FLAG_APPEARED_IN_PRE_LAYOUT = 4096;
        static final int FLAG_BOUNCED_FROM_HIDDEN_LIST = 8192;
        static final int FLAG_BOUND = 1;
        static final int FLAG_IGNORE = 128;
        static final int FLAG_INVALID = 4;
        static final int FLAG_MOVED = 2048;
        static final int FLAG_NOT_RECYCLABLE = 16;
        static final int FLAG_REMOVED = 8;
        static final int FLAG_RETURNED_FROM_SCRAP = 32;
        static final int FLAG_SET_A11Y_ITEM_DELEGATE = 16384;
        static final int FLAG_TMP_DETACHED = 256;
        static final int FLAG_UPDATE = 2;
        private static final java.util.List<java.lang.Object> FULLUPDATE_PAYLOADS = null;
        static final int PENDING_ACCESSIBILITY_STATE_NOT_SET = -1;
        public final android.view.View itemView;
        int mFlags;
        boolean mInChangeScrap;
        private int mIsRecyclableCount;
        long mItemId;
        int mItemViewType;
        java.lang.ref.WeakReference<android.support.v7.widget.RecyclerView> mNestedRecyclerView;
        int mOldPosition;
        android.support.v7.widget.RecyclerView mOwnerRecyclerView;
        java.util.List<java.lang.Object> mPayloads;
        int mPendingAccessibilityState;
        int mPosition;
        int mPreLayoutPosition;
        android.support.v7.widget.RecyclerView.Recycler mScrapContainer;
        android.support.v7.widget.RecyclerView.ViewHolder mShadowedHolder;
        android.support.v7.widget.RecyclerView.ViewHolder mShadowingHolder;
        java.util.List<java.lang.Object> mUnmodifiedPayloads;
        private int mWasImportantForAccessibilityBeforeHidden;

        static {
                java.util.List r0 = java.util.Collections.emptyList()
                android.support.v7.widget.RecyclerView.ViewHolder.FULLUPDATE_PAYLOADS = r0
                return
        }

        public ViewHolder(android.view.View r4) {
                r3 = this;
                r3.<init>()
                r0 = -1
                r3.mPosition = r0
                r3.mOldPosition = r0
                r1 = -1
                r3.mItemId = r1
                r3.mItemViewType = r0
                r3.mPreLayoutPosition = r0
                r1 = 0
                r3.mShadowedHolder = r1
                r3.mShadowingHolder = r1
                r3.mPayloads = r1
                r3.mUnmodifiedPayloads = r1
                r2 = 0
                r3.mIsRecyclableCount = r2
                r3.mScrapContainer = r1
                r3.mInChangeScrap = r2
                r3.mWasImportantForAccessibilityBeforeHidden = r2
                r3.mPendingAccessibilityState = r0
                if (r4 == 0) goto L29
                r3.itemView = r4
                return
            L29:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "itemView may not be null"
                r4.<init>(r0)
                throw r4
        }

        private void createPayloadsIfNeeded() {
                r1 = this;
                java.util.List<java.lang.Object> r0 = r1.mPayloads
                if (r0 != 0) goto L11
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mPayloads = r0
                java.util.List r0 = java.util.Collections.unmodifiableList(r0)
                r1.mUnmodifiedPayloads = r0
            L11:
                return
        }

        void addChangePayload(java.lang.Object r3) {
                r2 = this;
                r0 = 1024(0x400, float:1.435E-42)
                if (r3 != 0) goto L8
                r2.addFlags(r0)
                goto L15
            L8:
                int r1 = r2.mFlags
                r0 = r0 & r1
                if (r0 != 0) goto L15
                r2.createPayloadsIfNeeded()
                java.util.List<java.lang.Object> r0 = r2.mPayloads
                r0.add(r3)
            L15:
                return
        }

        void addFlags(int r2) {
                r1 = this;
                int r0 = r1.mFlags
                r2 = r2 | r0
                r1.mFlags = r2
                return
        }

        void clearOldPosition() {
                r1 = this;
                r0 = -1
                r1.mOldPosition = r0
                r1.mPreLayoutPosition = r0
                return
        }

        void clearPayload() {
                r1 = this;
                java.util.List<java.lang.Object> r0 = r1.mPayloads
                if (r0 == 0) goto L7
                r0.clear()
            L7:
                int r0 = r1.mFlags
                r0 = r0 & (-1025(0xfffffffffffffbff, float:NaN))
                r1.mFlags = r0
                return
        }

        void clearReturnedFromScrapFlag() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & (-33)
                r1.mFlags = r0
                return
        }

        void clearTmpDetachFlag() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & (-257(0xfffffffffffffeff, float:NaN))
                r1.mFlags = r0
                return
        }

        boolean doesTransientStatePreventRecycling() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 16
                if (r0 != 0) goto L10
                android.view.View r0 = r1.itemView
                boolean r0 = android.support.v4.view.ViewCompat.hasTransientState(r0)
                if (r0 == 0) goto L10
                r0 = 1
                goto L11
            L10:
                r0 = 0
            L11:
                return r0
        }

        void flagRemovedAndOffsetPosition(int r2, int r3, boolean r4) {
                r1 = this;
                r0 = 8
                r1.addFlags(r0)
                r1.offsetPosition(r3, r4)
                r1.mPosition = r2
                return
        }

        public final int getAdapterPosition() {
                r1 = this;
                android.support.v7.widget.RecyclerView r0 = r1.mOwnerRecyclerView
                if (r0 != 0) goto L6
                r0 = -1
                return r0
            L6:
                int r0 = r0.getAdapterPositionFor(r1)
                return r0
        }

        public final long getItemId() {
                r2 = this;
                long r0 = r2.mItemId
                return r0
        }

        public final int getItemViewType() {
                r1 = this;
                int r0 = r1.mItemViewType
                return r0
        }

        public final int getLayoutPosition() {
                r2 = this;
                int r0 = r2.mPreLayoutPosition
                r1 = -1
                if (r0 != r1) goto L7
                int r0 = r2.mPosition
            L7:
                return r0
        }

        public final int getOldPosition() {
                r1 = this;
                int r0 = r1.mOldPosition
                return r0
        }

        @java.lang.Deprecated
        public final int getPosition() {
                r2 = this;
                int r0 = r2.mPreLayoutPosition
                r1 = -1
                if (r0 != r1) goto L7
                int r0 = r2.mPosition
            L7:
                return r0
        }

        java.util.List<java.lang.Object> getUnmodifiedPayloads() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 1024(0x400, float:1.435E-42)
                if (r0 != 0) goto L17
                java.util.List<java.lang.Object> r0 = r1.mPayloads
                if (r0 == 0) goto L14
                int r0 = r0.size()
                if (r0 != 0) goto L11
                goto L14
            L11:
                java.util.List<java.lang.Object> r0 = r1.mUnmodifiedPayloads
                return r0
            L14:
                java.util.List<java.lang.Object> r0 = android.support.v7.widget.RecyclerView.ViewHolder.FULLUPDATE_PAYLOADS
                return r0
            L17:
                java.util.List<java.lang.Object> r0 = android.support.v7.widget.RecyclerView.ViewHolder.FULLUPDATE_PAYLOADS
                return r0
        }

        boolean hasAnyOfTheFlags(int r2) {
                r1 = this;
                int r0 = r1.mFlags
                r2 = r2 & r0
                if (r2 == 0) goto L7
                r2 = 1
                goto L8
            L7:
                r2 = 0
            L8:
                return r2
        }

        boolean isAdapterPositionUnknown() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 512(0x200, float:7.17E-43)
                if (r0 != 0) goto Lf
                boolean r0 = r1.isInvalid()
                if (r0 == 0) goto Ld
                goto Lf
            Ld:
                r0 = 0
                goto L10
            Lf:
                r0 = 1
            L10:
                return r0
        }

        boolean isBound() {
                r2 = this;
                int r0 = r2.mFlags
                r1 = 1
                r0 = r0 & r1
                if (r0 == 0) goto L7
                goto L8
            L7:
                r1 = 0
            L8:
                return r1
        }

        boolean isInvalid() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 4
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        public final boolean isRecyclable() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 16
                if (r0 != 0) goto L10
                android.view.View r0 = r1.itemView
                boolean r0 = android.support.v4.view.ViewCompat.hasTransientState(r0)
                if (r0 != 0) goto L10
                r0 = 1
                goto L11
            L10:
                r0 = 0
            L11:
                return r0
        }

        boolean isRemoved() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 8
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        boolean isScrap() {
                r1 = this;
                android.support.v7.widget.RecyclerView$Recycler r0 = r1.mScrapContainer
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        boolean isTmpDetached() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 256(0x100, float:3.59E-43)
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        boolean isUpdated() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 2
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        boolean needsUpdate() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 2
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        void offsetPosition(int r3, boolean r4) {
                r2 = this;
                int r0 = r2.mOldPosition
                r1 = -1
                if (r0 != r1) goto L9
                int r0 = r2.mPosition
                r2.mOldPosition = r0
            L9:
                int r0 = r2.mPreLayoutPosition
                if (r0 != r1) goto L11
                int r0 = r2.mPosition
                r2.mPreLayoutPosition = r0
            L11:
                if (r4 == 0) goto L18
                int r4 = r2.mPreLayoutPosition
                int r4 = r4 + r3
                r2.mPreLayoutPosition = r4
            L18:
                int r4 = r2.mPosition
                int r4 = r4 + r3
                r2.mPosition = r4
                android.view.View r3 = r2.itemView
                android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
                if (r3 == 0) goto L30
                android.view.View r3 = r2.itemView
                android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r3 = (android.support.v7.widget.RecyclerView.LayoutParams) r3
                r4 = 1
                r3.mInsetsDirty = r4
            L30:
                return
        }

        void onEnteredHiddenState(android.support.v7.widget.RecyclerView r3) {
                r2 = this;
                int r0 = r2.mPendingAccessibilityState
                r1 = -1
                if (r0 == r1) goto L8
                r2.mWasImportantForAccessibilityBeforeHidden = r0
                goto L10
            L8:
                android.view.View r0 = r2.itemView
                int r0 = android.support.v4.view.ViewCompat.getImportantForAccessibility(r0)
                r2.mWasImportantForAccessibilityBeforeHidden = r0
            L10:
                r0 = 4
                r3.setChildImportantForAccessibilityInternal(r2, r0)
                return
        }

        void onLeftHiddenState(android.support.v7.widget.RecyclerView r2) {
                r1 = this;
                int r0 = r1.mWasImportantForAccessibilityBeforeHidden
                r2.setChildImportantForAccessibilityInternal(r1, r0)
                r2 = 0
                r1.mWasImportantForAccessibilityBeforeHidden = r2
                return
        }

        void resetInternal() {
                r4 = this;
                r0 = 0
                r4.mFlags = r0
                r1 = -1
                r4.mPosition = r1
                r4.mOldPosition = r1
                r2 = -1
                r4.mItemId = r2
                r4.mPreLayoutPosition = r1
                r4.mIsRecyclableCount = r0
                r2 = 0
                r4.mShadowedHolder = r2
                r4.mShadowingHolder = r2
                r4.clearPayload()
                r4.mWasImportantForAccessibilityBeforeHidden = r0
                r4.mPendingAccessibilityState = r1
                android.support.v7.widget.RecyclerView.clearNestedRecyclerViewIfNotNested(r4)
                return
        }

        void saveOldPosition() {
                r2 = this;
                int r0 = r2.mOldPosition
                r1 = -1
                if (r0 != r1) goto L9
                int r0 = r2.mPosition
                r2.mOldPosition = r0
            L9:
                return
        }

        void setFlags(int r3, int r4) {
                r2 = this;
                int r0 = r2.mFlags
                int r1 = ~r4
                r0 = r0 & r1
                r3 = r3 & r4
                r3 = r3 | r0
                r2.mFlags = r3
                return
        }

        public final void setIsRecyclable(boolean r3) {
                r2 = this;
                r0 = 1
                int r1 = r2.mIsRecyclableCount
                if (r3 == 0) goto L7
                int r1 = r1 - r0
                goto L8
            L7:
                int r1 = r1 + r0
            L8:
                r2.mIsRecyclableCount = r1
                if (r1 >= 0) goto L26
                r3 = 0
                r2.mIsRecyclableCount = r3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r0 = "isRecyclable decremented below 0: unmatched pair of setIsRecyable() calls for "
                r3.append(r0)
                r3.append(r2)
                java.lang.String r3 = r3.toString()
                java.lang.String r0 = "View"
                android.util.Log.e(r0, r3)
                goto L3d
            L26:
                if (r3 != 0) goto L31
                if (r1 != r0) goto L31
                int r3 = r2.mFlags
                r3 = r3 | 16
                r2.mFlags = r3
                goto L3d
            L31:
                if (r3 == 0) goto L3d
                int r3 = r2.mIsRecyclableCount
                if (r3 != 0) goto L3d
                int r3 = r2.mFlags
                r3 = r3 & (-17)
                r2.mFlags = r3
            L3d:
                return
        }

        void setScrapContainer(android.support.v7.widget.RecyclerView.Recycler r1, boolean r2) {
                r0 = this;
                r0.mScrapContainer = r1
                r0.mInChangeScrap = r2
                return
        }

        boolean shouldBeKeptAsChild() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 16
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        boolean shouldIgnore() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 128(0x80, float:1.8E-43)
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        void stopIgnoring() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & (-129(0xffffffffffffff7f, float:NaN))
                r1.mFlags = r0
                return
        }

        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "ViewHolder{"
                r1.append(r2)
                int r2 = r4.hashCode()
                java.lang.String r2 = java.lang.Integer.toHexString(r2)
                r1.append(r2)
                java.lang.String r2 = " position="
                r1.append(r2)
                int r2 = r4.mPosition
                r1.append(r2)
                java.lang.String r2 = " id="
                r1.append(r2)
                long r2 = r4.mItemId
                r1.append(r2)
                java.lang.String r2 = ", oldPos="
                r1.append(r2)
                int r2 = r4.mOldPosition
                r1.append(r2)
                java.lang.String r2 = ", pLpos:"
                r1.append(r2)
                int r2 = r4.mPreLayoutPosition
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                boolean r1 = r4.isScrap()
                if (r1 == 0) goto L5d
                java.lang.String r1 = " scrap "
                r0.append(r1)
                boolean r1 = r4.mInChangeScrap
                if (r1 == 0) goto L58
                java.lang.String r1 = "[changeScrap]"
                goto L5a
            L58:
                java.lang.String r1 = "[attachedScrap]"
            L5a:
                r0.append(r1)
            L5d:
                boolean r1 = r4.isInvalid()
                if (r1 == 0) goto L68
                java.lang.String r1 = " invalid"
                r0.append(r1)
            L68:
                boolean r1 = r4.isBound()
                if (r1 != 0) goto L73
                java.lang.String r1 = " unbound"
                r0.append(r1)
            L73:
                boolean r1 = r4.needsUpdate()
                if (r1 == 0) goto L7e
                java.lang.String r1 = " update"
                r0.append(r1)
            L7e:
                boolean r1 = r4.isRemoved()
                if (r1 == 0) goto L89
                java.lang.String r1 = " removed"
                r0.append(r1)
            L89:
                boolean r1 = r4.shouldIgnore()
                if (r1 == 0) goto L94
                java.lang.String r1 = " ignored"
                r0.append(r1)
            L94:
                boolean r1 = r4.isTmpDetached()
                if (r1 == 0) goto L9f
                java.lang.String r1 = " tmpDetached"
                r0.append(r1)
            L9f:
                boolean r1 = r4.isRecyclable()
                if (r1 != 0) goto Lc0
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = " not recyclable("
                r1.append(r2)
                int r2 = r4.mIsRecyclableCount
                r1.append(r2)
                java.lang.String r2 = ")"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.append(r1)
            Lc0:
                boolean r1 = r4.isAdapterPositionUnknown()
                if (r1 == 0) goto Lcb
                java.lang.String r1 = " undefined adapter position"
                r0.append(r1)
            Lcb:
                android.view.View r1 = r4.itemView
                android.view.ViewParent r1 = r1.getParent()
                if (r1 != 0) goto Ld8
                java.lang.String r1 = " no parent"
                r0.append(r1)
            Ld8:
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        void unScrap() {
                r1 = this;
                android.support.v7.widget.RecyclerView$Recycler r0 = r1.mScrapContainer
                r0.unscrapView(r1)
                return
        }

        boolean wasReturnedFromScrap() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 32
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }
    }

    static {
            r0 = 1
            int[] r1 = new int[r0]
            r2 = 16843830(0x1010436, float:2.369658E-38)
            r3 = 0
            r1[r3] = r2
            android.support.v7.widget.RecyclerView.NESTED_SCROLLING_ATTRS = r1
            int[] r1 = new int[r0]
            r2 = 16842987(0x10100eb, float:2.3694217E-38)
            r1[r3] = r2
            android.support.v7.widget.RecyclerView.CLIP_TO_PADDING_ATTR = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 == r2) goto L29
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 == r2) goto L29
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 20
            if (r1 != r2) goto L27
            goto L29
        L27:
            r1 = r3
            goto L2a
        L29:
            r1 = r0
        L2a:
            android.support.v7.widget.RecyclerView.FORCE_INVALIDATE_DISPLAY_LIST = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L34
            r1 = r0
            goto L35
        L34:
            r1 = r3
        L35:
            android.support.v7.widget.RecyclerView.ALLOW_SIZE_IN_UNSPECIFIED_SPEC = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L3f
            r1 = r0
            goto L40
        L3f:
            r1 = r3
        L40:
            android.support.v7.widget.RecyclerView.POST_UPDATES_ON_ANIMATION = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L4a
            r1 = r0
            goto L4b
        L4a:
            r1 = r3
        L4b:
            android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 15
            if (r1 > r2) goto L55
            r1 = r0
            goto L56
        L55:
            r1 = r3
        L56:
            android.support.v7.widget.RecyclerView.FORCE_ABS_FOCUS_SEARCH_DIRECTION = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 > r2) goto L5e
            r1 = r0
            goto L5f
        L5e:
            r1 = r3
        L5f:
            android.support.v7.widget.RecyclerView.IGNORE_DETACHED_FOCUSED_CHILD = r1
            r1 = 4
            java.lang.Class[] r1 = new java.lang.Class[r1]
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r1[r3] = r2
            java.lang.Class<android.util.AttributeSet> r2 = android.util.AttributeSet.class
            r1[r0] = r2
            r0 = 2
            java.lang.Class r2 = java.lang.Integer.TYPE
            r1[r0] = r2
            r0 = 3
            java.lang.Class r2 = java.lang.Integer.TYPE
            r1[r0] = r2
            android.support.v7.widget.RecyclerView.LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE = r1
            android.support.v7.widget.RecyclerView$3 r0 = new android.support.v7.widget.RecyclerView$3
            r0.<init>()
            android.support.v7.widget.RecyclerView.sQuinticInterpolator = r0
            return
    }

    public RecyclerView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RecyclerView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public RecyclerView(android.content.Context r13, android.util.AttributeSet r14, int r15) {
            r12 = this;
            r12.<init>(r13, r14, r15)
            android.support.v7.widget.RecyclerView$RecyclerViewDataObserver r0 = new android.support.v7.widget.RecyclerView$RecyclerViewDataObserver
            r0.<init>(r12)
            r12.mObserver = r0
            android.support.v7.widget.RecyclerView$Recycler r0 = new android.support.v7.widget.RecyclerView$Recycler
            r0.<init>(r12)
            r12.mRecycler = r0
            android.support.v7.widget.ViewInfoStore r0 = new android.support.v7.widget.ViewInfoStore
            r0.<init>()
            r12.mViewInfoStore = r0
            android.support.v7.widget.RecyclerView$1 r0 = new android.support.v7.widget.RecyclerView$1
            r0.<init>(r12)
            r12.mUpdateChildViewsRunnable = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r12.mTempRect = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r12.mTempRect2 = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r12.mTempRectF = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r12.mItemDecorations = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r12.mOnItemTouchListeners = r0
            r0 = 0
            r12.mInterceptRequestLayoutDepth = r0
            r12.mDataSetHasChangedAfterLayout = r0
            r12.mDispatchItemsChangedEvent = r0
            r12.mLayoutOrScrollCounter = r0
            r12.mDispatchScrollCounter = r0
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r1 = new android.support.v7.widget.RecyclerView$EdgeEffectFactory
            r1.<init>()
            r12.mEdgeEffectFactory = r1
            android.support.v7.widget.DefaultItemAnimator r1 = new android.support.v7.widget.DefaultItemAnimator
            r1.<init>()
            r12.mItemAnimator = r1
            r12.mScrollState = r0
            r1 = -1
            r12.mScrollPointerId = r1
            r2 = 1
            r12.mScaledHorizontalScrollFactor = r2
            r12.mScaledVerticalScrollFactor = r2
            r2 = 1
            r12.mPreserveFocusAfterLayout = r2
            android.support.v7.widget.RecyclerView$ViewFlinger r3 = new android.support.v7.widget.RecyclerView$ViewFlinger
            r3.<init>(r12)
            r12.mViewFlinger = r3
            boolean r3 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
            if (r3 == 0) goto L79
            android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl r3 = new android.support.v7.widget.GapWorker$LayoutPrefetchRegistryImpl
            r3.<init>()
            goto L7a
        L79:
            r3 = 0
        L7a:
            r12.mPrefetchRegistry = r3
            android.support.v7.widget.RecyclerView$State r3 = new android.support.v7.widget.RecyclerView$State
            r3.<init>()
            r12.mState = r3
            r12.mItemsAddedOrRemoved = r0
            r12.mItemsChanged = r0
            android.support.v7.widget.RecyclerView$ItemAnimatorRestoreListener r3 = new android.support.v7.widget.RecyclerView$ItemAnimatorRestoreListener
            r3.<init>(r12)
            r12.mItemAnimatorListener = r3
            r12.mPostedAnimatorRunner = r0
            r3 = 2
            int[] r4 = new int[r3]
            r12.mMinMaxLayoutPositions = r4
            int[] r4 = new int[r3]
            r12.mScrollOffset = r4
            int[] r4 = new int[r3]
            r12.mScrollConsumed = r4
            int[] r4 = new int[r3]
            r12.mNestedOffsets = r4
            int[] r4 = new int[r3]
            r12.mScrollStepConsumed = r4
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r12.mPendingAccessibilityImportanceChange = r4
            android.support.v7.widget.RecyclerView$2 r4 = new android.support.v7.widget.RecyclerView$2
            r4.<init>(r12)
            r12.mItemAnimatorRunner = r4
            android.support.v7.widget.RecyclerView$4 r4 = new android.support.v7.widget.RecyclerView$4
            r4.<init>(r12)
            r12.mViewInfoProcessCallback = r4
            if (r14 == 0) goto Lcc
            int[] r4 = android.support.v7.widget.RecyclerView.CLIP_TO_PADDING_ATTR
            android.content.res.TypedArray r4 = r13.obtainStyledAttributes(r14, r4, r15, r0)
            boolean r5 = r4.getBoolean(r0, r2)
            r12.mClipToPadding = r5
            r4.recycle()
            goto Lce
        Lcc:
            r12.mClipToPadding = r2
        Lce:
            r12.setScrollContainer(r2)
            r12.setFocusableInTouchMode(r2)
            android.view.ViewConfiguration r4 = android.view.ViewConfiguration.get(r13)
            int r5 = r4.getScaledTouchSlop()
            r12.mTouchSlop = r5
            float r5 = android.support.v4.view.ViewConfigurationCompat.getScaledHorizontalScrollFactor(r4, r13)
            r12.mScaledHorizontalScrollFactor = r5
            float r5 = android.support.v4.view.ViewConfigurationCompat.getScaledVerticalScrollFactor(r4, r13)
            r12.mScaledVerticalScrollFactor = r5
            int r5 = r4.getScaledMinimumFlingVelocity()
            r12.mMinFlingVelocity = r5
            int r4 = r4.getScaledMaximumFlingVelocity()
            r12.mMaxFlingVelocity = r4
            int r4 = r12.getOverScrollMode()
            if (r4 != r3) goto Lfe
            r3 = r2
            goto Lff
        Lfe:
            r3 = r0
        Lff:
            r12.setWillNotDraw(r3)
            android.support.v7.widget.RecyclerView$ItemAnimator r3 = r12.mItemAnimator
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorListener r4 = r12.mItemAnimatorListener
            r3.setListener(r4)
            r12.initAdapterManager()
            r12.initChildrenHelper()
            r12.initAutofill()
            int r3 = android.support.v4.view.ViewCompat.getImportantForAccessibility(r12)
            if (r3 != 0) goto L11b
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r12, r2)
        L11b:
            android.content.Context r3 = r12.getContext()
            java.lang.String r4 = "accessibility"
            java.lang.Object r3 = r3.getSystemService(r4)
            android.view.accessibility.AccessibilityManager r3 = (android.view.accessibility.AccessibilityManager) r3
            r12.mAccessibilityManager = r3
            android.support.v7.widget.RecyclerViewAccessibilityDelegate r3 = new android.support.v7.widget.RecyclerViewAccessibilityDelegate
            r3.<init>(r12)
            r12.setAccessibilityDelegateCompat(r3)
            r3 = 262144(0x40000, float:3.67342E-40)
            if (r14 == 0) goto L195
            int[] r4 = android.support.v7.recyclerview.R.styleable.RecyclerView
            android.content.res.TypedArray r4 = r13.obtainStyledAttributes(r14, r4, r15, r0)
            int r5 = android.support.v7.recyclerview.R.styleable.RecyclerView_layoutManager
            java.lang.String r8 = r4.getString(r5)
            int r5 = android.support.v7.recyclerview.R.styleable.RecyclerView_android_descendantFocusability
            int r5 = r4.getInt(r5, r1)
            if (r5 != r1) goto L14c
            r12.setDescendantFocusability(r3)
        L14c:
            int r1 = android.support.v7.recyclerview.R.styleable.RecyclerView_fastScrollEnabled
            boolean r1 = r4.getBoolean(r1, r0)
            r12.mEnableFastScroller = r1
            if (r1 == 0) goto L175
            int r1 = android.support.v7.recyclerview.R.styleable.RecyclerView_fastScrollVerticalThumbDrawable
            android.graphics.drawable.Drawable r1 = r4.getDrawable(r1)
            android.graphics.drawable.StateListDrawable r1 = (android.graphics.drawable.StateListDrawable) r1
            int r3 = android.support.v7.recyclerview.R.styleable.RecyclerView_fastScrollVerticalTrackDrawable
            android.graphics.drawable.Drawable r3 = r4.getDrawable(r3)
            int r5 = android.support.v7.recyclerview.R.styleable.RecyclerView_fastScrollHorizontalThumbDrawable
            android.graphics.drawable.Drawable r5 = r4.getDrawable(r5)
            android.graphics.drawable.StateListDrawable r5 = (android.graphics.drawable.StateListDrawable) r5
            int r6 = android.support.v7.recyclerview.R.styleable.RecyclerView_fastScrollHorizontalTrackDrawable
            android.graphics.drawable.Drawable r6 = r4.getDrawable(r6)
            r12.initFastScroller(r1, r3, r5, r6)
        L175:
            r4.recycle()
            r11 = 0
            r6 = r12
            r7 = r13
            r9 = r14
            r10 = r15
            r6.createLayoutManager(r7, r8, r9, r10, r11)
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r1 < r3) goto L198
            int[] r1 = android.support.v7.widget.RecyclerView.NESTED_SCROLLING_ATTRS
            android.content.res.TypedArray r13 = r13.obtainStyledAttributes(r14, r1, r15, r0)
            boolean r14 = r13.getBoolean(r0, r2)
            r13.recycle()
            r2 = r14
            goto L198
        L195:
            r12.setDescendantFocusability(r3)
        L198:
            r12.setNestedScrollingEnabled(r2)
            return
    }

    static void access$000(android.support.v7.widget.RecyclerView r0, android.view.View r1, int r2, android.view.ViewGroup.LayoutParams r3) {
            r0.attachViewToParent(r1, r2, r3)
            return
    }

    static void access$100(android.support.v7.widget.RecyclerView r0, int r1) {
            r0.detachViewFromParent(r1)
            return
    }

    static boolean access$200(android.support.v7.widget.RecyclerView r0) {
            boolean r0 = r0.awakenScrollBars()
            return r0
    }

    static void access$300(android.support.v7.widget.RecyclerView r0, int r1, int r2) {
            r0.setMeasuredDimension(r1, r2)
            return
    }

    private void addAnimatingView(android.support.v7.widget.RecyclerView.ViewHolder r6) {
            r5 = this;
            android.view.View r0 = r6.itemView
            android.view.ViewParent r1 = r0.getParent()
            r2 = 1
            if (r1 != r5) goto Lb
            r1 = r2
            goto Lc
        Lb:
            r1 = 0
        Lc:
            android.support.v7.widget.RecyclerView$Recycler r3 = r5.mRecycler
            android.support.v7.widget.RecyclerView$ViewHolder r4 = r5.getChildViewHolder(r0)
            r3.unscrapView(r4)
            boolean r6 = r6.isTmpDetached()
            if (r6 == 0) goto L26
            android.support.v7.widget.ChildHelper r6 = r5.mChildHelper
            r1 = -1
            android.view.ViewGroup$LayoutParams r3 = r0.getLayoutParams()
            r6.attachViewToParent(r0, r1, r3, r2)
            goto L33
        L26:
            if (r1 != 0) goto L2e
            android.support.v7.widget.ChildHelper r6 = r5.mChildHelper
            r6.addView(r0, r2)
            goto L33
        L2e:
            android.support.v7.widget.ChildHelper r6 = r5.mChildHelper
            r6.hide(r0)
        L33:
            return
    }

    private void animateChange(android.support.v7.widget.RecyclerView.ViewHolder r2, android.support.v7.widget.RecyclerView.ViewHolder r3, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r4, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r5, boolean r6, boolean r7) {
            r1 = this;
            r0 = 0
            r2.setIsRecyclable(r0)
            if (r6 == 0) goto L9
            r1.addAnimatingView(r2)
        L9:
            if (r2 == r3) goto L1f
            if (r7 == 0) goto L10
            r1.addAnimatingView(r3)
        L10:
            r2.mShadowedHolder = r3
            r1.addAnimatingView(r2)
            android.support.v7.widget.RecyclerView$Recycler r6 = r1.mRecycler
            r6.unscrapView(r2)
            r3.setIsRecyclable(r0)
            r3.mShadowingHolder = r2
        L1f:
            android.support.v7.widget.RecyclerView$ItemAnimator r6 = r1.mItemAnimator
            boolean r2 = r6.animateChange(r2, r3, r4, r5)
            if (r2 == 0) goto L2a
            r1.postAnimationRunner()
        L2a:
            return
    }

    private void cancelTouch() {
            r1 = this;
            r1.resetTouch()
            r0 = 0
            r1.setScrollState(r0)
            return
    }

    static void clearNestedRecyclerViewIfNotNested(android.support.v7.widget.RecyclerView.ViewHolder r3) {
            java.lang.ref.WeakReference<android.support.v7.widget.RecyclerView> r0 = r3.mNestedRecyclerView
            if (r0 == 0) goto L23
            java.lang.ref.WeakReference<android.support.v7.widget.RecyclerView> r0 = r3.mNestedRecyclerView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
        Lc:
            r1 = 0
            if (r0 == 0) goto L21
            android.view.View r2 = r3.itemView
            if (r0 != r2) goto L14
            return
        L14:
            android.view.ViewParent r0 = r0.getParent()
            boolean r2 = r0 instanceof android.view.View
            if (r2 == 0) goto L1f
            android.view.View r0 = (android.view.View) r0
            goto Lc
        L1f:
            r0 = r1
            goto Lc
        L21:
            r3.mNestedRecyclerView = r1
        L23:
            return
    }

    private void createLayoutManager(android.content.Context r8, java.lang.String r9, android.util.AttributeSet r10, int r11, int r12) {
            r7 = this;
            java.lang.String r0 = ": Could not instantiate the LayoutManager: "
            if (r9 == 0) goto L11d
            java.lang.String r9 = r9.trim()
            boolean r1 = r9.isEmpty()
            if (r1 != 0) goto L11d
            java.lang.String r9 = r7.getFullClassName(r8, r9)
            boolean r1 = r7.isInEditMode()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            if (r1 == 0) goto L21
            java.lang.Class r1 = r7.getClass()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            goto L25
        L21:
            java.lang.ClassLoader r1 = r8.getClassLoader()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
        L25:
            java.lang.Class r1 = r1.loadClass(r9)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.Class<android.support.v7.widget.RecyclerView$LayoutManager> r2 = android.support.v7.widget.RecyclerView.LayoutManager.class
            java.lang.Class r1 = r1.asSubclass(r2)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r2 = 0
            r3 = 1
            r4 = 0
            java.lang.Class<?>[] r5 = android.support.v7.widget.RecyclerView.LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.reflect.Constructor r5 = r1.getConstructor(r5)     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r6[r4] = r8     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r6[r3] = r10     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r8 = 2
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r6[r8] = r11     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r8 = 3
            java.lang.Integer r11 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r6[r8] = r11     // Catch: java.lang.NoSuchMethodException -> L4f java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r2 = r6
            goto L56
        L4f:
            r8 = move-exception
            java.lang.Class[] r11 = new java.lang.Class[r4]     // Catch: java.lang.NoSuchMethodException -> L64 java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.reflect.Constructor r5 = r1.getConstructor(r11)     // Catch: java.lang.NoSuchMethodException -> L64 java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
        L56:
            r5.setAccessible(r3)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.Object r8 = r5.newInstance(r2)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            android.support.v7.widget.RecyclerView$LayoutManager r8 = (android.support.v7.widget.RecyclerView.LayoutManager) r8     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r7.setLayoutManager(r8)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            goto L11d
        L64:
            r11 = move-exception
            r11.initCause(r8)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r12.<init>()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.String r1 = r10.getPositionDescription()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r12.append(r1)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.String r1 = ": Error creating LayoutManager "
            r12.append(r1)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r12.append(r9)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            java.lang.String r12 = r12.toString()     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            r8.<init>(r12, r11)     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
            throw r8     // Catch: java.lang.ClassCastException -> L86 java.lang.IllegalAccessException -> La5 java.lang.InstantiationException -> Lc4 java.lang.reflect.InvocationTargetException -> Le1 java.lang.ClassNotFoundException -> Lfe
        L86:
            r8 = move-exception
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r12.append(r10)
            java.lang.String r10 = ": Class is not a LayoutManager "
            r12.append(r10)
            r12.append(r9)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9, r8)
            throw r11
        La5:
            r8 = move-exception
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r12.append(r10)
            java.lang.String r10 = ": Cannot access non-public constructor "
            r12.append(r10)
            r12.append(r9)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9, r8)
            throw r11
        Lc4:
            r8 = move-exception
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r12.append(r10)
            r12.append(r0)
            r12.append(r9)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9, r8)
            throw r11
        Le1:
            r8 = move-exception
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r12.append(r10)
            r12.append(r0)
            r12.append(r9)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9, r8)
            throw r11
        Lfe:
            r8 = move-exception
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r10 = r10.getPositionDescription()
            r12.append(r10)
            java.lang.String r10 = ": Unable to find LayoutManager "
            r12.append(r10)
            r12.append(r9)
            java.lang.String r9 = r12.toString()
            r11.<init>(r9, r8)
            throw r11
        L11d:
            return
    }

    private boolean didChildRangeChange(int r5, int r6) {
            r4 = this;
            int[] r0 = r4.mMinMaxLayoutPositions
            r4.findMinMaxChildLayoutPositions(r0)
            int[] r0 = r4.mMinMaxLayoutPositions
            r1 = 0
            r2 = r0[r1]
            r3 = 1
            if (r2 != r5) goto L11
            r5 = r0[r3]
            if (r5 == r6) goto L12
        L11:
            r1 = r3
        L12:
            return r1
    }

    private void dispatchContentChangedIfNecessary() {
            r3 = this;
            int r0 = r3.mEatenAccessibilityChangeFlags
            r1 = 0
            r3.mEatenAccessibilityChangeFlags = r1
            if (r0 == 0) goto L1c
            boolean r1 = r3.isAccessibilityEnabled()
            if (r1 == 0) goto L1c
            android.view.accessibility.AccessibilityEvent r1 = android.view.accessibility.AccessibilityEvent.obtain()
            r2 = 2048(0x800, float:2.87E-42)
            r1.setEventType(r2)
            android.support.v4.view.accessibility.AccessibilityEventCompat.setContentChangeTypes(r1, r0)
            r3.sendAccessibilityEventUnchecked(r1)
        L1c:
            return
    }

    private void dispatchLayoutStep1() {
            r8 = this;
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            r1 = 1
            r0.assertLayoutStep(r1)
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            r8.fillRemainingScrollValues(r0)
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            r2 = 0
            r0.mIsMeasuring = r2
            r8.startInterceptRequestLayout()
            android.support.v7.widget.ViewInfoStore r0 = r8.mViewInfoStore
            r0.clear()
            r8.onEnterLayoutOrScroll()
            r8.processAdapterUpdatesAndSetAnimationFlags()
            r8.saveFocusInfo()
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            boolean r3 = r0.mRunSimpleAnimations
            if (r3 == 0) goto L2c
            boolean r3 = r8.mItemsChanged
            if (r3 == 0) goto L2c
            goto L2d
        L2c:
            r1 = r2
        L2d:
            r0.mTrackOldChangeHolders = r1
            r8.mItemsChanged = r2
            r8.mItemsAddedOrRemoved = r2
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            boolean r1 = r0.mRunPredictiveAnimations
            r0.mInPreLayout = r1
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            android.support.v7.widget.RecyclerView$Adapter r1 = r8.mAdapter
            int r1 = r1.getItemCount()
            r0.mItemCount = r1
            int[] r0 = r8.mMinMaxLayoutPositions
            r8.findMinMaxChildLayoutPositions(r0)
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            boolean r0 = r0.mRunSimpleAnimations
            if (r0 == 0) goto Lb5
            android.support.v7.widget.ChildHelper r0 = r8.mChildHelper
            int r0 = r0.getChildCount()
            r1 = r2
        L55:
            if (r1 >= r0) goto Lb5
            android.support.v7.widget.ChildHelper r3 = r8.mChildHelper
            android.view.View r3 = r3.getChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            boolean r4 = r3.shouldIgnore()
            if (r4 != 0) goto Lb2
            boolean r4 = r3.isInvalid()
            if (r4 == 0) goto L76
            android.support.v7.widget.RecyclerView$Adapter r4 = r8.mAdapter
            boolean r4 = r4.hasStableIds()
            if (r4 != 0) goto L76
            goto Lb2
        L76:
            android.support.v7.widget.RecyclerView$ItemAnimator r4 = r8.mItemAnimator
            android.support.v7.widget.RecyclerView$State r5 = r8.mState
            int r6 = android.support.v7.widget.RecyclerView.ItemAnimator.buildAdapterChangeFlagsForAnimations(r3)
            java.util.List r7 = r3.getUnmodifiedPayloads()
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r4 = r4.recordPreLayoutInformation(r5, r3, r6, r7)
            android.support.v7.widget.ViewInfoStore r5 = r8.mViewInfoStore
            r5.addToPreLayout(r3, r4)
            android.support.v7.widget.RecyclerView$State r4 = r8.mState
            boolean r4 = r4.mTrackOldChangeHolders
            if (r4 == 0) goto Lb2
            boolean r4 = r3.isUpdated()
            if (r4 == 0) goto Lb2
            boolean r4 = r3.isRemoved()
            if (r4 != 0) goto Lb2
            boolean r4 = r3.shouldIgnore()
            if (r4 != 0) goto Lb2
            boolean r4 = r3.isInvalid()
            if (r4 != 0) goto Lb2
            long r4 = r8.getChangedHolderKey(r3)
            android.support.v7.widget.ViewInfoStore r6 = r8.mViewInfoStore
            r6.addToOldChangeHolders(r4, r3)
        Lb2:
            int r1 = r1 + 1
            goto L55
        Lb5:
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            boolean r0 = r0.mRunPredictiveAnimations
            if (r0 == 0) goto L121
            r8.saveOldPositions()
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            boolean r0 = r0.mStructureChanged
            android.support.v7.widget.RecyclerView$State r1 = r8.mState
            r1.mStructureChanged = r2
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r8.mLayout
            android.support.v7.widget.RecyclerView$Recycler r3 = r8.mRecycler
            android.support.v7.widget.RecyclerView$State r4 = r8.mState
            r1.onLayoutChildren(r3, r4)
            android.support.v7.widget.RecyclerView$State r1 = r8.mState
            r1.mStructureChanged = r0
            r0 = r2
        Ld4:
            android.support.v7.widget.ChildHelper r1 = r8.mChildHelper
            int r1 = r1.getChildCount()
            if (r0 >= r1) goto L11d
            android.support.v7.widget.ChildHelper r1 = r8.mChildHelper
            android.view.View r1 = r1.getChildAt(r0)
            android.support.v7.widget.RecyclerView$ViewHolder r1 = getChildViewHolderInt(r1)
            boolean r3 = r1.shouldIgnore()
            if (r3 == 0) goto Led
            goto L11a
        Led:
            android.support.v7.widget.ViewInfoStore r3 = r8.mViewInfoStore
            boolean r3 = r3.isInPreLayout(r1)
            if (r3 != 0) goto L11a
            int r3 = android.support.v7.widget.RecyclerView.ItemAnimator.buildAdapterChangeFlagsForAnimations(r1)
            r4 = 8192(0x2000, float:1.148E-41)
            boolean r4 = r1.hasAnyOfTheFlags(r4)
            if (r4 != 0) goto L103
            r3 = r3 | 4096(0x1000, float:5.74E-42)
        L103:
            android.support.v7.widget.RecyclerView$ItemAnimator r5 = r8.mItemAnimator
            android.support.v7.widget.RecyclerView$State r6 = r8.mState
            java.util.List r7 = r1.getUnmodifiedPayloads()
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r3 = r5.recordPreLayoutInformation(r6, r1, r3, r7)
            if (r4 == 0) goto L115
            r8.recordAnimationInfoIfBouncedHiddenView(r1, r3)
            goto L11a
        L115:
            android.support.v7.widget.ViewInfoStore r4 = r8.mViewInfoStore
            r4.addToAppearedInPreLayoutHolders(r1, r3)
        L11a:
            int r0 = r0 + 1
            goto Ld4
        L11d:
            r8.clearOldPositions()
            goto L124
        L121:
            r8.clearOldPositions()
        L124:
            r8.onExitLayoutOrScroll()
            r8.stopInterceptRequestLayout(r2)
            android.support.v7.widget.RecyclerView$State r0 = r8.mState
            r1 = 2
            r0.mLayoutStep = r1
            return
    }

    private void dispatchLayoutStep2() {
            r4 = this;
            r4.startInterceptRequestLayout()
            r4.onEnterLayoutOrScroll()
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r1 = 6
            r0.assertLayoutStep(r1)
            android.support.v7.widget.AdapterHelper r0 = r4.mAdapterHelper
            r0.consumeUpdatesInOnePass()
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            android.support.v7.widget.RecyclerView$Adapter r1 = r4.mAdapter
            int r1 = r1.getItemCount()
            r0.mItemCount = r1
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r1 = 0
            r0.mDeletedInvisibleItemCountSincePreviousLayout = r1
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r0.mInPreLayout = r1
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r4.mLayout
            android.support.v7.widget.RecyclerView$Recycler r2 = r4.mRecycler
            android.support.v7.widget.RecyclerView$State r3 = r4.mState
            r0.onLayoutChildren(r2, r3)
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r0.mStructureChanged = r1
            r0 = 0
            r4.mPendingSavedState = r0
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            boolean r2 = r0.mRunSimpleAnimations
            if (r2 == 0) goto L40
            android.support.v7.widget.RecyclerView$ItemAnimator r2 = r4.mItemAnimator
            if (r2 == 0) goto L40
            r2 = 1
            goto L41
        L40:
            r2 = r1
        L41:
            r0.mRunSimpleAnimations = r2
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r2 = 4
            r0.mLayoutStep = r2
            r4.onExitLayoutOrScroll()
            r4.stopInterceptRequestLayout(r1)
            return
    }

    private void dispatchLayoutStep3() {
            r11 = this;
            android.support.v7.widget.RecyclerView$State r0 = r11.mState
            r1 = 4
            r0.assertLayoutStep(r1)
            r11.startInterceptRequestLayout()
            r11.onEnterLayoutOrScroll()
            android.support.v7.widget.RecyclerView$State r0 = r11.mState
            r1 = 1
            r0.mLayoutStep = r1
            android.support.v7.widget.RecyclerView$State r0 = r11.mState
            boolean r0 = r0.mRunSimpleAnimations
            if (r0 == 0) goto L8f
            android.support.v7.widget.ChildHelper r0 = r11.mChildHelper
            int r0 = r0.getChildCount()
            int r0 = r0 - r1
        L1e:
            if (r0 < 0) goto L88
            android.support.v7.widget.ChildHelper r2 = r11.mChildHelper
            android.view.View r2 = r2.getChildAt(r0)
            android.support.v7.widget.RecyclerView$ViewHolder r5 = getChildViewHolderInt(r2)
            boolean r2 = r5.shouldIgnore()
            if (r2 == 0) goto L31
            goto L85
        L31:
            long r2 = r11.getChangedHolderKey(r5)
            android.support.v7.widget.RecyclerView$ItemAnimator r4 = r11.mItemAnimator
            android.support.v7.widget.RecyclerView$State r6 = r11.mState
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r4 = r4.recordPostLayoutInformation(r6, r5)
            android.support.v7.widget.ViewInfoStore r6 = r11.mViewInfoStore
            android.support.v7.widget.RecyclerView$ViewHolder r6 = r6.getFromOldChangeHolders(r2)
            if (r6 == 0) goto L80
            boolean r7 = r6.shouldIgnore()
            if (r7 != 0) goto L80
            android.support.v7.widget.ViewInfoStore r7 = r11.mViewInfoStore
            boolean r8 = r7.isDisappearing(r6)
            android.support.v7.widget.ViewInfoStore r7 = r11.mViewInfoStore
            boolean r9 = r7.isDisappearing(r5)
            if (r8 == 0) goto L61
            if (r6 != r5) goto L61
            android.support.v7.widget.ViewInfoStore r2 = r11.mViewInfoStore
            r2.addToPostLayout(r5, r4)
            goto L85
        L61:
            android.support.v7.widget.ViewInfoStore r7 = r11.mViewInfoStore
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r7 = r7.popFromPreLayout(r6)
            android.support.v7.widget.ViewInfoStore r10 = r11.mViewInfoStore
            r10.addToPostLayout(r5, r4)
            android.support.v7.widget.ViewInfoStore r4 = r11.mViewInfoStore
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemHolderInfo r10 = r4.popFromPostLayout(r5)
            if (r7 != 0) goto L78
            r11.handleMissingPreInfoForChangeError(r2, r5, r6)
            goto L85
        L78:
            r3 = r11
            r4 = r6
            r6 = r7
            r7 = r10
            r3.animateChange(r4, r5, r6, r7, r8, r9)
            goto L85
        L80:
            android.support.v7.widget.ViewInfoStore r2 = r11.mViewInfoStore
            r2.addToPostLayout(r5, r4)
        L85:
            int r0 = r0 + (-1)
            goto L1e
        L88:
            android.support.v7.widget.ViewInfoStore r0 = r11.mViewInfoStore
            android.support.v7.widget.ViewInfoStore$ProcessCallback r2 = r11.mViewInfoProcessCallback
            r0.process(r2)
        L8f:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r11.mLayout
            android.support.v7.widget.RecyclerView$Recycler r2 = r11.mRecycler
            r0.removeAndRecycleScrapInt(r2)
            android.support.v7.widget.RecyclerView$State r0 = r11.mState
            int r2 = r0.mItemCount
            r0.mPreviousLayoutItemCount = r2
            r0 = 0
            r11.mDataSetHasChangedAfterLayout = r0
            r11.mDispatchItemsChangedEvent = r0
            android.support.v7.widget.RecyclerView$State r2 = r11.mState
            r2.mRunSimpleAnimations = r0
            android.support.v7.widget.RecyclerView$State r2 = r11.mState
            r2.mRunPredictiveAnimations = r0
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r11.mLayout
            r2.mRequestedSimpleAnimations = r0
            android.support.v7.widget.RecyclerView$Recycler r2 = r11.mRecycler
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r2.mChangedScrap
            if (r2 == 0) goto Lba
            android.support.v7.widget.RecyclerView$Recycler r2 = r11.mRecycler
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r2.mChangedScrap
            r2.clear()
        Lba:
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r11.mLayout
            boolean r2 = r2.mPrefetchMaxObservedInInitialPrefetch
            if (r2 == 0) goto Lcd
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r11.mLayout
            r2.mPrefetchMaxCountObserved = r0
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r11.mLayout
            r2.mPrefetchMaxObservedInInitialPrefetch = r0
            android.support.v7.widget.RecyclerView$Recycler r2 = r11.mRecycler
            r2.updateViewCacheSize()
        Lcd:
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r11.mLayout
            android.support.v7.widget.RecyclerView$State r3 = r11.mState
            r2.onLayoutCompleted(r3)
            r11.onExitLayoutOrScroll()
            r11.stopInterceptRequestLayout(r0)
            android.support.v7.widget.ViewInfoStore r2 = r11.mViewInfoStore
            r2.clear()
            int[] r2 = r11.mMinMaxLayoutPositions
            r3 = r2[r0]
            r1 = r2[r1]
            boolean r1 = r11.didChildRangeChange(r3, r1)
            if (r1 == 0) goto Lee
            r11.dispatchOnScrolled(r0, r0)
        Lee:
            r11.recoverFocusFromState()
            r11.resetFocusInfo()
            return
    }

    private boolean dispatchOnItemTouch(android.view.MotionEvent r7) {
            r6 = this;
            int r0 = r7.getAction()
            android.support.v7.widget.RecyclerView$OnItemTouchListener r1 = r6.mActiveOnItemTouchListener
            r2 = 1
            if (r1 == 0) goto L1a
            r3 = 0
            if (r0 != 0) goto Lf
            r6.mActiveOnItemTouchListener = r3
            goto L1a
        Lf:
            r1.onTouchEvent(r6, r7)
            r7 = 3
            if (r0 == r7) goto L17
            if (r0 != r2) goto L19
        L17:
            r6.mActiveOnItemTouchListener = r3
        L19:
            return r2
        L1a:
            r1 = 0
            if (r0 == 0) goto L3a
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r0 = r6.mOnItemTouchListeners
            int r0 = r0.size()
            r3 = r1
        L24:
            if (r3 >= r0) goto L3a
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r4 = r6.mOnItemTouchListeners
            java.lang.Object r4 = r4.get(r3)
            android.support.v7.widget.RecyclerView$OnItemTouchListener r4 = (android.support.v7.widget.RecyclerView.OnItemTouchListener) r4
            boolean r5 = r4.onInterceptTouchEvent(r6, r7)
            if (r5 == 0) goto L37
            r6.mActiveOnItemTouchListener = r4
            return r2
        L37:
            int r3 = r3 + 1
            goto L24
        L3a:
            return r1
    }

    private boolean dispatchOnItemTouchIntercept(android.view.MotionEvent r8) {
            r7 = this;
            int r0 = r8.getAction()
            r1 = 3
            if (r0 == r1) goto L9
            if (r0 != 0) goto Lc
        L9:
            r2 = 0
            r7.mActiveOnItemTouchListener = r2
        Lc:
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r2 = r7.mOnItemTouchListeners
            int r2 = r2.size()
            r3 = 0
            r4 = r3
        L14:
            if (r4 >= r2) goto L2d
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r5 = r7.mOnItemTouchListeners
            java.lang.Object r5 = r5.get(r4)
            android.support.v7.widget.RecyclerView$OnItemTouchListener r5 = (android.support.v7.widget.RecyclerView.OnItemTouchListener) r5
            boolean r6 = r5.onInterceptTouchEvent(r7, r8)
            if (r6 == 0) goto L2a
            if (r0 == r1) goto L2a
            r7.mActiveOnItemTouchListener = r5
            r8 = 1
            return r8
        L2a:
            int r4 = r4 + 1
            goto L14
        L2d:
            return r3
    }

    private void findMinMaxChildLayoutPositions(int[] r9) {
            r8 = this;
            android.support.v7.widget.ChildHelper r0 = r8.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L10
            r0 = -1
            r9[r2] = r0
            r9[r1] = r0
            return
        L10:
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = r2
        L16:
            if (r5 >= r0) goto L36
            android.support.v7.widget.ChildHelper r6 = r8.mChildHelper
            android.view.View r6 = r6.getChildAt(r5)
            android.support.v7.widget.RecyclerView$ViewHolder r6 = getChildViewHolderInt(r6)
            boolean r7 = r6.shouldIgnore()
            if (r7 == 0) goto L29
            goto L33
        L29:
            int r6 = r6.getLayoutPosition()
            if (r6 >= r3) goto L30
            r3 = r6
        L30:
            if (r6 <= r4) goto L33
            r4 = r6
        L33:
            int r5 = r5 + 1
            goto L16
        L36:
            r9[r2] = r3
            r9[r1] = r4
            return
    }

    static android.support.v7.widget.RecyclerView findNestedRecyclerView(android.view.View r4) {
            boolean r0 = r4 instanceof android.view.ViewGroup
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r4 instanceof android.support.v7.widget.RecyclerView
            if (r0 == 0) goto Ld
            android.support.v7.widget.RecyclerView r4 = (android.support.v7.widget.RecyclerView) r4
            return r4
        Ld:
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            int r0 = r4.getChildCount()
            r2 = 0
        L14:
            if (r2 >= r0) goto L24
            android.view.View r3 = r4.getChildAt(r2)
            android.support.v7.widget.RecyclerView r3 = findNestedRecyclerView(r3)
            if (r3 == 0) goto L21
            return r3
        L21:
            int r2 = r2 + 1
            goto L14
        L24:
            return r1
    }

    private android.view.View findNextViewToFocus() {
            r5 = this;
            android.support.v7.widget.RecyclerView$State r0 = r5.mState
            int r0 = r0.mFocusedItemPosition
            r1 = -1
            if (r0 == r1) goto Lc
            android.support.v7.widget.RecyclerView$State r0 = r5.mState
            int r0 = r0.mFocusedItemPosition
            goto Ld
        Lc:
            r0 = 0
        Ld:
            android.support.v7.widget.RecyclerView$State r1 = r5.mState
            int r1 = r1.getItemCount()
            r2 = r0
        L14:
            if (r2 >= r1) goto L2b
            android.support.v7.widget.RecyclerView$ViewHolder r3 = r5.findViewHolderForAdapterPosition(r2)
            if (r3 != 0) goto L1d
            goto L2b
        L1d:
            android.view.View r4 = r3.itemView
            boolean r4 = r4.hasFocusable()
            if (r4 == 0) goto L28
            android.view.View r0 = r3.itemView
            return r0
        L28:
            int r2 = r2 + 1
            goto L14
        L2b:
            int r0 = java.lang.Math.min(r1, r0)
            int r0 = r0 + (-1)
        L31:
            r1 = 0
            if (r0 < 0) goto L49
            android.support.v7.widget.RecyclerView$ViewHolder r2 = r5.findViewHolderForAdapterPosition(r0)
            if (r2 != 0) goto L3b
            return r1
        L3b:
            android.view.View r1 = r2.itemView
            boolean r1 = r1.hasFocusable()
            if (r1 == 0) goto L46
            android.view.View r0 = r2.itemView
            return r0
        L46:
            int r0 = r0 + (-1)
            goto L31
        L49:
            return r1
    }

    static android.support.v7.widget.RecyclerView.ViewHolder getChildViewHolderInt(android.view.View r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
            android.support.v7.widget.RecyclerView$ViewHolder r0 = r0.mViewHolder
            return r0
    }

    static void getDecoratedBoundsWithMarginsInt(android.view.View r6, android.graphics.Rect r7) {
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
            android.graphics.Rect r1 = r0.mDecorInsets
            int r2 = r6.getLeft()
            int r3 = r1.left
            int r2 = r2 - r3
            int r3 = r0.leftMargin
            int r2 = r2 - r3
            int r3 = r6.getTop()
            int r4 = r1.top
            int r3 = r3 - r4
            int r4 = r0.topMargin
            int r3 = r3 - r4
            int r4 = r6.getRight()
            int r5 = r1.right
            int r4 = r4 + r5
            int r5 = r0.rightMargin
            int r4 = r4 + r5
            int r6 = r6.getBottom()
            int r1 = r1.bottom
            int r6 = r6 + r1
            int r0 = r0.bottomMargin
            int r6 = r6 + r0
            r7.set(r2, r3, r4, r6)
            return
    }

    private int getDeepestFocusedViewWithId(android.view.View r4) {
            r3 = this;
            int r0 = r4.getId()
        L4:
            boolean r1 = r4.isFocused()
            if (r1 != 0) goto L26
            boolean r1 = r4 instanceof android.view.ViewGroup
            if (r1 == 0) goto L26
            boolean r1 = r4.hasFocus()
            if (r1 == 0) goto L26
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            android.view.View r4 = r4.getFocusedChild()
            int r1 = r4.getId()
            r2 = -1
            if (r1 == r2) goto L4
            int r0 = r4.getId()
            goto L4
        L26:
            return r0
    }

    private java.lang.String getFullClassName(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            char r0 = r4.charAt(r0)
            r1 = 46
            if (r0 != r1) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r3.getPackageName()
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            return r3
        L1d:
            java.lang.String r3 = "."
            boolean r3 = r4.contains(r3)
            if (r3 == 0) goto L26
            return r4
        L26:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Class<android.support.v7.widget.RecyclerView> r0 = android.support.v7.widget.RecyclerView.class
            java.lang.Package r0 = r0.getPackage()
            java.lang.String r0 = r0.getName()
            r3.append(r0)
            r3.append(r1)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            return r3
    }

    private android.support.v4.view.NestedScrollingChildHelper getScrollingChildHelper() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mScrollingChildHelper
            if (r0 != 0) goto Lb
            android.support.v4.view.NestedScrollingChildHelper r0 = new android.support.v4.view.NestedScrollingChildHelper
            r0.<init>(r1)
            r1.mScrollingChildHelper = r0
        Lb:
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.mScrollingChildHelper
            return r0
    }

    private void handleMissingPreInfoForChangeError(long r6, android.support.v7.widget.RecyclerView.ViewHolder r8, android.support.v7.widget.RecyclerView.ViewHolder r9) {
            r5 = this;
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L75
            android.support.v7.widget.ChildHelper r2 = r5.mChildHelper
            android.view.View r2 = r2.getChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r2 = getChildViewHolderInt(r2)
            if (r2 != r8) goto L16
            goto L72
        L16:
            long r3 = r5.getChangedHolderKey(r2)
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L72
            android.support.v7.widget.RecyclerView$Adapter r6 = r5.mAdapter
            java.lang.String r7 = " \n View Holder 2:"
            if (r6 == 0) goto L4e
            boolean r6 = r6.hasStableIds()
            if (r6 == 0) goto L4e
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Two different ViewHolders have the same stable ID. Stable IDs in your adapter MUST BE unique and SHOULD NOT change.\n ViewHolder 1:"
            r9.append(r0)
            r9.append(r2)
            r9.append(r7)
            r9.append(r8)
            java.lang.String r7 = r5.exceptionLabel()
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r6.<init>(r7)
            throw r6
        L4e:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Two different ViewHolders have the same change ID. This might happen due to inconsistent Adapter update events or if the LayoutManager lays out the same View multiple times.\n ViewHolder 1:"
            r9.append(r0)
            r9.append(r2)
            r9.append(r7)
            r9.append(r8)
            java.lang.String r7 = r5.exceptionLabel()
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r6.<init>(r7)
            throw r6
        L72:
            int r1 = r1 + 1
            goto L7
        L75:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Problem while matching changed view holders with the newones. The pre-layout information for the change holder "
            r6.append(r7)
            r6.append(r9)
            java.lang.String r7 = " cannot be found but it is necessary for "
            r6.append(r7)
            r6.append(r8)
            java.lang.String r7 = r5.exceptionLabel()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "RecyclerView"
            android.util.Log.e(r7, r6)
            return
    }

    private boolean hasUpdatedView() {
            r5 = this;
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L28
            android.support.v7.widget.ChildHelper r3 = r5.mChildHelper
            android.view.View r3 = r3.getChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L25
            boolean r4 = r3.shouldIgnore()
            if (r4 == 0) goto L1d
            goto L25
        L1d:
            boolean r3 = r3.isUpdated()
            if (r3 == 0) goto L25
            r0 = 1
            return r0
        L25:
            int r2 = r2 + 1
            goto L8
        L28:
            return r1
    }

    private void initAutofill() {
            r1 = this;
            int r0 = android.support.v4.view.ViewCompat.getImportantForAutofill(r1)
            if (r0 != 0) goto Lb
            r0 = 8
            android.support.v4.view.ViewCompat.setImportantForAutofill(r1, r0)
        Lb:
            return
    }

    private void initChildrenHelper() {
            r2 = this;
            android.support.v7.widget.ChildHelper r0 = new android.support.v7.widget.ChildHelper
            android.support.v7.widget.RecyclerView$5 r1 = new android.support.v7.widget.RecyclerView$5
            r1.<init>(r2)
            r0.<init>(r1)
            r2.mChildHelper = r0
            return
    }

    private boolean isPreferredNextFocus(android.view.View r6, android.view.View r7, int r8) {
            r5 = this;
            r0 = 0
            if (r7 == 0) goto L11e
            if (r7 != r5) goto L7
            goto L11e
        L7:
            android.view.View r1 = r5.findContainingItemView(r7)
            if (r1 != 0) goto Le
            return r0
        Le:
            r1 = 1
            if (r6 != 0) goto L12
            return r1
        L12:
            android.view.View r2 = r5.findContainingItemView(r6)
            if (r2 != 0) goto L19
            return r1
        L19:
            android.graphics.Rect r2 = r5.mTempRect
            int r3 = r6.getWidth()
            int r4 = r6.getHeight()
            r2.set(r0, r0, r3, r4)
            android.graphics.Rect r2 = r5.mTempRect2
            int r3 = r7.getWidth()
            int r4 = r7.getHeight()
            r2.set(r0, r0, r3, r4)
            android.graphics.Rect r2 = r5.mTempRect
            r5.offsetDescendantRectToMyCoords(r6, r2)
            android.graphics.Rect r6 = r5.mTempRect2
            r5.offsetDescendantRectToMyCoords(r7, r6)
            android.support.v7.widget.RecyclerView$LayoutManager r6 = r5.mLayout
            int r6 = r6.getLayoutDirection()
            r7 = -1
            if (r6 != r1) goto L48
            r6 = r7
            goto L49
        L48:
            r6 = r1
        L49:
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.left
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.left
            if (r2 < r3) goto L5d
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.right
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.left
            if (r2 > r3) goto L69
        L5d:
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.right
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.right
            if (r2 >= r3) goto L69
            r2 = r1
            goto L8a
        L69:
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.right
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.right
            if (r2 > r3) goto L7d
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.left
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.right
            if (r2 < r3) goto L89
        L7d:
            android.graphics.Rect r2 = r5.mTempRect
            int r2 = r2.left
            android.graphics.Rect r3 = r5.mTempRect2
            int r3 = r3.left
            if (r2 <= r3) goto L89
            r2 = r7
            goto L8a
        L89:
            r2 = r0
        L8a:
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.top
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.top
            if (r3 < r4) goto L9e
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.bottom
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.top
            if (r3 > r4) goto Laa
        L9e:
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.bottom
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.bottom
            if (r3 >= r4) goto Laa
            r7 = r1
            goto Lca
        Laa:
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.bottom
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.bottom
            if (r3 > r4) goto Lbe
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.top
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.bottom
            if (r3 < r4) goto Lc9
        Lbe:
            android.graphics.Rect r3 = r5.mTempRect
            int r3 = r3.top
            android.graphics.Rect r4 = r5.mTempRect2
            int r4 = r4.top
            if (r3 <= r4) goto Lc9
            goto Lca
        Lc9:
            r7 = r0
        Lca:
            if (r8 == r1) goto L116
            r3 = 2
            if (r8 == r3) goto L10d
            r6 = 17
            if (r8 == r6) goto L109
            r6 = 33
            if (r8 == r6) goto L105
            r6 = 66
            if (r8 == r6) goto L101
            r6 = 130(0x82, float:1.82E-43)
            if (r8 != r6) goto Le3
            if (r7 <= 0) goto Le2
            r0 = r1
        Le2:
            return r0
        Le3:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Invalid direction: "
            r7.append(r0)
            r7.append(r8)
            java.lang.String r8 = r5.exceptionLabel()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L101:
            if (r2 <= 0) goto L104
            r0 = r1
        L104:
            return r0
        L105:
            if (r7 >= 0) goto L108
            r0 = r1
        L108:
            return r0
        L109:
            if (r2 >= 0) goto L10c
            r0 = r1
        L10c:
            return r0
        L10d:
            if (r7 > 0) goto L114
            if (r7 != 0) goto L115
            int r2 = r2 * r6
            if (r2 < 0) goto L115
        L114:
            r0 = r1
        L115:
            return r0
        L116:
            if (r7 < 0) goto L11d
            if (r7 != 0) goto L11e
            int r2 = r2 * r6
            if (r2 > 0) goto L11e
        L11d:
            r0 = r1
        L11e:
            return r0
    }

    private void onPointerUp(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getActionIndex()
            int r1 = r4.getPointerId(r0)
            int r2 = r3.mScrollPointerId
            if (r1 != r2) goto L2d
            if (r0 != 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            int r1 = r4.getPointerId(r0)
            r3.mScrollPointerId = r1
            float r1 = r4.getX(r0)
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r3.mLastTouchX = r1
            r3.mInitialTouchX = r1
            float r4 = r4.getY(r0)
            float r4 = r4 + r2
            int r4 = (int) r4
            r3.mLastTouchY = r4
            r3.mInitialTouchY = r4
        L2d:
            return
    }

    private boolean predictiveItemAnimationsEnabled() {
            r1 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r1.mItemAnimator
            if (r0 == 0) goto Le
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            boolean r0 = r0.supportsPredictiveItemAnimations()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private void processAdapterUpdatesAndSetAnimationFlags() {
            r5 = this;
            boolean r0 = r5.mDataSetHasChangedAfterLayout
            if (r0 == 0) goto L12
            android.support.v7.widget.AdapterHelper r0 = r5.mAdapterHelper
            r0.reset()
            boolean r0 = r5.mDispatchItemsChangedEvent
            if (r0 == 0) goto L12
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r5.mLayout
            r0.onItemsChanged(r5)
        L12:
            boolean r0 = r5.predictiveItemAnimationsEnabled()
            if (r0 == 0) goto L1e
            android.support.v7.widget.AdapterHelper r0 = r5.mAdapterHelper
            r0.preProcess()
            goto L23
        L1e:
            android.support.v7.widget.AdapterHelper r0 = r5.mAdapterHelper
            r0.consumeUpdatesInOnePass()
        L23:
            boolean r0 = r5.mItemsAddedOrRemoved
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L30
            boolean r0 = r5.mItemsChanged
            if (r0 == 0) goto L2e
            goto L30
        L2e:
            r0 = r1
            goto L31
        L30:
            r0 = r2
        L31:
            android.support.v7.widget.RecyclerView$State r3 = r5.mState
            boolean r4 = r5.mFirstLayoutComplete
            if (r4 == 0) goto L55
            android.support.v7.widget.RecyclerView$ItemAnimator r4 = r5.mItemAnimator
            if (r4 == 0) goto L55
            boolean r4 = r5.mDataSetHasChangedAfterLayout
            if (r4 != 0) goto L47
            if (r0 != 0) goto L47
            android.support.v7.widget.RecyclerView$LayoutManager r4 = r5.mLayout
            boolean r4 = r4.mRequestedSimpleAnimations
            if (r4 == 0) goto L55
        L47:
            boolean r4 = r5.mDataSetHasChangedAfterLayout
            if (r4 == 0) goto L53
            android.support.v7.widget.RecyclerView$Adapter r4 = r5.mAdapter
            boolean r4 = r4.hasStableIds()
            if (r4 == 0) goto L55
        L53:
            r4 = r2
            goto L56
        L55:
            r4 = r1
        L56:
            r3.mRunSimpleAnimations = r4
            android.support.v7.widget.RecyclerView$State r3 = r5.mState
            boolean r4 = r3.mRunSimpleAnimations
            if (r4 == 0) goto L6b
            if (r0 == 0) goto L6b
            boolean r0 = r5.mDataSetHasChangedAfterLayout
            if (r0 != 0) goto L6b
            boolean r0 = r5.predictiveItemAnimationsEnabled()
            if (r0 == 0) goto L6b
            r1 = r2
        L6b:
            r3.mRunPredictiveAnimations = r1
            return
    }

    private void pullGlows(float r7, float r8, float r9, float r10) {
            r6 = this;
            r0 = 0
            int r1 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 1
            if (r1 >= 0) goto L21
            r6.ensureLeftGlow()
            android.widget.EdgeEffect r1 = r6.mLeftGlow
            float r4 = -r8
            int r5 = r6.getWidth()
            float r5 = (float) r5
            float r4 = r4 / r5
            int r5 = r6.getHeight()
            float r5 = (float) r5
            float r9 = r9 / r5
            float r9 = r2 - r9
            android.support.v4.widget.EdgeEffectCompat.onPull(r1, r4, r9)
        L1f:
            r9 = r3
            goto L3c
        L21:
            int r1 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r1 <= 0) goto L3b
            r6.ensureRightGlow()
            android.widget.EdgeEffect r1 = r6.mRightGlow
            int r4 = r6.getWidth()
            float r4 = (float) r4
            float r4 = r8 / r4
            int r5 = r6.getHeight()
            float r5 = (float) r5
            float r9 = r9 / r5
            android.support.v4.widget.EdgeEffectCompat.onPull(r1, r4, r9)
            goto L1f
        L3b:
            r9 = 0
        L3c:
            int r1 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r1 >= 0) goto L56
            r6.ensureTopGlow()
            android.widget.EdgeEffect r9 = r6.mTopGlow
            float r1 = -r10
            int r2 = r6.getHeight()
            float r2 = (float) r2
            float r1 = r1 / r2
            int r2 = r6.getWidth()
            float r2 = (float) r2
            float r7 = r7 / r2
            android.support.v4.widget.EdgeEffectCompat.onPull(r9, r1, r7)
            goto L72
        L56:
            int r1 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r1 <= 0) goto L71
            r6.ensureBottomGlow()
            android.widget.EdgeEffect r9 = r6.mBottomGlow
            int r1 = r6.getHeight()
            float r1 = (float) r1
            float r1 = r10 / r1
            int r4 = r6.getWidth()
            float r4 = (float) r4
            float r7 = r7 / r4
            float r2 = r2 - r7
            android.support.v4.widget.EdgeEffectCompat.onPull(r9, r1, r2)
            goto L72
        L71:
            r3 = r9
        L72:
            if (r3 != 0) goto L7c
            int r7 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r7 != 0) goto L7c
            int r7 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r7 == 0) goto L7f
        L7c:
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r6)
        L7f:
            return
    }

    private void recoverFocusFromState() {
            r6 = this;
            boolean r0 = r6.mPreserveFocusAfterLayout
            if (r0 == 0) goto Lb5
            android.support.v7.widget.RecyclerView$Adapter r0 = r6.mAdapter
            if (r0 == 0) goto Lb5
            boolean r0 = r6.hasFocus()
            if (r0 == 0) goto Lb5
            int r0 = r6.getDescendantFocusability()
            r1 = 393216(0x60000, float:5.51013E-40)
            if (r0 == r1) goto Lb5
            int r0 = r6.getDescendantFocusability()
            r1 = 131072(0x20000, float:1.83671E-40)
            if (r0 != r1) goto L26
            boolean r0 = r6.isFocused()
            if (r0 == 0) goto L26
            goto Lb5
        L26:
            boolean r0 = r6.isFocused()
            if (r0 != 0) goto L55
            android.view.View r0 = r6.getFocusedChild()
            boolean r1 = android.support.v7.widget.RecyclerView.IGNORE_DETACHED_FOCUSED_CHILD
            if (r1 == 0) goto L4c
            android.view.ViewParent r1 = r0.getParent()
            if (r1 == 0) goto L40
            boolean r1 = r0.hasFocus()
            if (r1 != 0) goto L4c
        L40:
            android.support.v7.widget.ChildHelper r0 = r6.mChildHelper
            int r0 = r0.getChildCount()
            if (r0 != 0) goto L55
            r6.requestFocus()
            return
        L4c:
            android.support.v7.widget.ChildHelper r1 = r6.mChildHelper
            boolean r0 = r1.isHidden(r0)
            if (r0 != 0) goto L55
            return
        L55:
            android.support.v7.widget.RecyclerView$State r0 = r6.mState
            long r0 = r0.mFocusedItemId
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L71
            android.support.v7.widget.RecyclerView$Adapter r0 = r6.mAdapter
            boolean r0 = r0.hasStableIds()
            if (r0 == 0) goto L71
            android.support.v7.widget.RecyclerView$State r0 = r6.mState
            long r4 = r0.mFocusedItemId
            android.support.v7.widget.RecyclerView$ViewHolder r0 = r6.findViewHolderForItemId(r4)
            goto L72
        L71:
            r0 = r1
        L72:
            if (r0 == 0) goto L8a
            android.support.v7.widget.ChildHelper r4 = r6.mChildHelper
            android.view.View r5 = r0.itemView
            boolean r4 = r4.isHidden(r5)
            if (r4 != 0) goto L8a
            android.view.View r4 = r0.itemView
            boolean r4 = r4.hasFocusable()
            if (r4 != 0) goto L87
            goto L8a
        L87:
            android.view.View r1 = r0.itemView
            goto L96
        L8a:
            android.support.v7.widget.ChildHelper r0 = r6.mChildHelper
            int r0 = r0.getChildCount()
            if (r0 <= 0) goto L96
            android.view.View r1 = r6.findNextViewToFocus()
        L96:
            if (r1 == 0) goto Lb5
            android.support.v7.widget.RecyclerView$State r0 = r6.mState
            int r0 = r0.mFocusedSubChildId
            long r4 = (long) r0
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb2
            android.support.v7.widget.RecyclerView$State r0 = r6.mState
            int r0 = r0.mFocusedSubChildId
            android.view.View r0 = r1.findViewById(r0)
            if (r0 == 0) goto Lb2
            boolean r2 = r0.isFocusable()
            if (r2 == 0) goto Lb2
            r1 = r0
        Lb2:
            r1.requestFocus()
        Lb5:
            return
    }

    private void releaseGlows() {
            r2 = this;
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            if (r0 == 0) goto Le
            r0.onRelease()
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            boolean r0 = r0.isFinished()
            goto Lf
        Le:
            r0 = 0
        Lf:
            android.widget.EdgeEffect r1 = r2.mTopGlow
            if (r1 == 0) goto L1d
            r1.onRelease()
            android.widget.EdgeEffect r1 = r2.mTopGlow
            boolean r1 = r1.isFinished()
            r0 = r0 | r1
        L1d:
            android.widget.EdgeEffect r1 = r2.mRightGlow
            if (r1 == 0) goto L2b
            r1.onRelease()
            android.widget.EdgeEffect r1 = r2.mRightGlow
            boolean r1 = r1.isFinished()
            r0 = r0 | r1
        L2b:
            android.widget.EdgeEffect r1 = r2.mBottomGlow
            if (r1 == 0) goto L39
            r1.onRelease()
            android.widget.EdgeEffect r1 = r2.mBottomGlow
            boolean r1 = r1.isFinished()
            r0 = r0 | r1
        L39:
            if (r0 == 0) goto L3e
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        L3e:
            return
    }

    private void requestChildOnScreen(android.view.View r12, android.view.View r13) {
            r11 = this;
            if (r13 == 0) goto L4
            r0 = r13
            goto L5
        L4:
            r0 = r12
        L5:
            android.graphics.Rect r1 = r11.mTempRect
            int r2 = r0.getWidth()
            int r3 = r0.getHeight()
            r4 = 0
            r1.set(r4, r4, r2, r3)
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = r0 instanceof android.support.v7.widget.RecyclerView.LayoutParams
            if (r1 == 0) goto L47
            android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
            boolean r1 = r0.mInsetsDirty
            if (r1 != 0) goto L47
            android.graphics.Rect r0 = r0.mDecorInsets
            android.graphics.Rect r1 = r11.mTempRect
            int r2 = r1.left
            int r3 = r0.left
            int r2 = r2 - r3
            r1.left = r2
            android.graphics.Rect r1 = r11.mTempRect
            int r2 = r1.right
            int r3 = r0.right
            int r2 = r2 + r3
            r1.right = r2
            android.graphics.Rect r1 = r11.mTempRect
            int r2 = r1.top
            int r3 = r0.top
            int r2 = r2 - r3
            r1.top = r2
            android.graphics.Rect r1 = r11.mTempRect
            int r2 = r1.bottom
            int r0 = r0.bottom
            int r2 = r2 + r0
            r1.bottom = r2
        L47:
            if (r13 == 0) goto L53
            android.graphics.Rect r0 = r11.mTempRect
            r11.offsetDescendantRectToMyCoords(r13, r0)
            android.graphics.Rect r0 = r11.mTempRect
            r11.offsetRectIntoDescendantCoords(r12, r0)
        L53:
            android.support.v7.widget.RecyclerView$LayoutManager r5 = r11.mLayout
            android.graphics.Rect r8 = r11.mTempRect
            boolean r0 = r11.mFirstLayoutComplete
            r1 = 1
            r9 = r0 ^ 1
            if (r13 != 0) goto L60
            r10 = r1
            goto L61
        L60:
            r10 = r4
        L61:
            r6 = r11
            r7 = r12
            r5.requestChildRectangleOnScreen(r6, r7, r8, r9, r10)
            return
    }

    private void resetFocusInfo() {
            r3 = this;
            android.support.v7.widget.RecyclerView$State r0 = r3.mState
            r1 = -1
            r0.mFocusedItemId = r1
            android.support.v7.widget.RecyclerView$State r0 = r3.mState
            r1 = -1
            r0.mFocusedItemPosition = r1
            android.support.v7.widget.RecyclerView$State r0 = r3.mState
            r0.mFocusedSubChildId = r1
            return
    }

    private void resetTouch() {
            r1 = this;
            android.view.VelocityTracker r0 = r1.mVelocityTracker
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            r0 = 0
            r1.stopNestedScroll(r0)
            r1.releaseGlows()
            return
    }

    private void saveFocusInfo() {
            r4 = this;
            boolean r0 = r4.mPreserveFocusAfterLayout
            r1 = 0
            if (r0 == 0) goto L14
            boolean r0 = r4.hasFocus()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$Adapter r0 = r4.mAdapter
            if (r0 == 0) goto L14
            android.view.View r0 = r4.getFocusedChild()
            goto L15
        L14:
            r0 = r1
        L15:
            if (r0 != 0) goto L18
            goto L1c
        L18:
            android.support.v7.widget.RecyclerView$ViewHolder r1 = r4.findContainingViewHolder(r0)
        L1c:
            if (r1 != 0) goto L22
            r4.resetFocusInfo()
            goto L56
        L22:
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            android.support.v7.widget.RecyclerView$Adapter r2 = r4.mAdapter
            boolean r2 = r2.hasStableIds()
            if (r2 == 0) goto L31
            long r2 = r1.getItemId()
            goto L33
        L31:
            r2 = -1
        L33:
            r0.mFocusedItemId = r2
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            boolean r2 = r4.mDataSetHasChangedAfterLayout
            if (r2 == 0) goto L3d
            r2 = -1
            goto L4a
        L3d:
            boolean r2 = r1.isRemoved()
            if (r2 == 0) goto L46
            int r2 = r1.mOldPosition
            goto L4a
        L46:
            int r2 = r1.getAdapterPosition()
        L4a:
            r0.mFocusedItemPosition = r2
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            android.view.View r1 = r1.itemView
            int r1 = r4.getDeepestFocusedViewWithId(r1)
            r0.mFocusedSubChildId = r1
        L56:
            return
    }

    private void setAdapterInternal(android.support.v7.widget.RecyclerView.Adapter r3, boolean r4, boolean r5) {
            r2 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            if (r0 == 0) goto Le
            android.support.v7.widget.RecyclerView$RecyclerViewDataObserver r1 = r2.mObserver
            r0.unregisterAdapterDataObserver(r1)
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            r0.onDetachedFromRecyclerView(r2)
        Le:
            if (r4 == 0) goto L12
            if (r5 == 0) goto L15
        L12:
            r2.removeAndRecycleViews()
        L15:
            android.support.v7.widget.AdapterHelper r5 = r2.mAdapterHelper
            r5.reset()
            android.support.v7.widget.RecyclerView$Adapter r5 = r2.mAdapter
            r2.mAdapter = r3
            if (r3 == 0) goto L28
            android.support.v7.widget.RecyclerView$RecyclerViewDataObserver r0 = r2.mObserver
            r3.registerAdapterDataObserver(r0)
            r3.onAttachedToRecyclerView(r2)
        L28:
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r2.mLayout
            if (r3 == 0) goto L31
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            r3.onAdapterChanged(r5, r0)
        L31:
            android.support.v7.widget.RecyclerView$Recycler r3 = r2.mRecycler
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            r3.onAdapterChanged(r5, r0, r4)
            android.support.v7.widget.RecyclerView$State r3 = r2.mState
            r4 = 1
            r3.mStructureChanged = r4
            return
    }

    private void stopScrollersInternal() {
            r1 = this;
            android.support.v7.widget.RecyclerView$ViewFlinger r0 = r1.mViewFlinger
            r0.stop()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            if (r0 == 0) goto Lc
            r0.stopSmoothScroller()
        Lc:
            return
    }

    void absorbGlows(int r3, int r4) {
            r2 = this;
            if (r3 >= 0) goto Lc
            r2.ensureLeftGlow()
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            int r1 = -r3
            r0.onAbsorb(r1)
            goto L16
        Lc:
            if (r3 <= 0) goto L16
            r2.ensureRightGlow()
            android.widget.EdgeEffect r0 = r2.mRightGlow
            r0.onAbsorb(r3)
        L16:
            if (r4 >= 0) goto L22
            r2.ensureTopGlow()
            android.widget.EdgeEffect r0 = r2.mTopGlow
            int r1 = -r4
            r0.onAbsorb(r1)
            goto L2c
        L22:
            if (r4 <= 0) goto L2c
            r2.ensureBottomGlow()
            android.widget.EdgeEffect r0 = r2.mBottomGlow
            r0.onAbsorb(r4)
        L2c:
            if (r3 != 0) goto L30
            if (r4 == 0) goto L33
        L30:
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        L33:
            return
    }

    @Override
    public void addFocusables(java.util.ArrayList<android.view.View> r2, int r3, int r4) {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            if (r0 == 0) goto La
            boolean r0 = r0.onAddFocusables(r1, r2, r3, r4)
            if (r0 != 0) goto Ld
        La:
            super.addFocusables(r2, r3, r4)
        Ld:
            return
    }

    public void addItemDecoration(android.support.v7.widget.RecyclerView.ItemDecoration r2) {
            r1 = this;
            r0 = -1
            r1.addItemDecoration(r2, r0)
            return
    }

    public void addItemDecoration(android.support.v7.widget.RecyclerView.ItemDecoration r3, int r4) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L9
            java.lang.String r1 = "Cannot add item decoration during a scroll  or layout"
            r0.assertNotInLayoutOrScroll(r1)
        L9:
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r2.mItemDecorations
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L15
            r0 = 0
            r2.setWillNotDraw(r0)
        L15:
            if (r4 >= 0) goto L1d
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r4 = r2.mItemDecorations
            r4.add(r3)
            goto L22
        L1d:
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r2.mItemDecorations
            r0.add(r4, r3)
        L22:
            r2.markItemDecorInsetsDirty()
            r2.requestLayout()
            return
    }

    public void addOnChildAttachStateChangeListener(android.support.v7.widget.RecyclerView.OnChildAttachStateChangeListener r2) {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r1.mOnChildAttachStateListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mOnChildAttachStateListeners = r0
        Lb:
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r1.mOnChildAttachStateListeners
            r0.add(r2)
            return
    }

    public void addOnItemTouchListener(android.support.v7.widget.RecyclerView.OnItemTouchListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r0 = r1.mOnItemTouchListeners
            r0.add(r2)
            return
    }

    public void addOnScrollListener(android.support.v7.widget.RecyclerView.OnScrollListener r2) {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r1.mScrollListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mScrollListeners = r0
        Lb:
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r1.mScrollListeners
            r0.add(r2)
            return
    }

    void animateAppearance(android.support.v7.widget.RecyclerView.ViewHolder r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r4) {
            r1 = this;
            r0 = 0
            r2.setIsRecyclable(r0)
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r1.mItemAnimator
            boolean r2 = r0.animateAppearance(r2, r3, r4)
            if (r2 == 0) goto Lf
            r1.postAnimationRunner()
        Lf:
            return
    }

    void animateDisappearance(android.support.v7.widget.RecyclerView.ViewHolder r2, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r3, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r4) {
            r1 = this;
            r1.addAnimatingView(r2)
            r0 = 0
            r2.setIsRecyclable(r0)
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r1.mItemAnimator
            boolean r2 = r0.animateDisappearance(r2, r3, r4)
            if (r2 == 0) goto L12
            r1.postAnimationRunner()
        L12:
            return
    }

    void assertInLayoutOrScroll(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isComputingLayout()
            if (r0 != 0) goto L3c
            if (r3 != 0) goto L23
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot call this method unless RecyclerView is computing a layout or scrolling"
            r0.append(r1)
            java.lang.String r1 = r2.exceptionLabel()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L23:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = r2.exceptionLabel()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L3c:
            return
    }

    void assertNotInLayoutOrScroll(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isComputingLayout()
            if (r0 == 0) goto L29
            if (r3 != 0) goto L23
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot call this method while RecyclerView is computing a layout or scrolling"
            r0.append(r1)
            java.lang.String r1 = r2.exceptionLabel()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L23:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r3)
            throw r0
        L29:
            int r3 = r2.mDispatchScrollCounter
            if (r3 <= 0) goto L4e
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r1 = r2.exceptionLabel()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            java.lang.String r0 = "RecyclerView"
            java.lang.String r1 = "Cannot call this method in a scroll callback. Scroll callbacks mightbe run during a measure & layout pass where you cannot change theRecyclerView data. Any method call that might change the structureof the RecyclerView or the adapter contents should be postponed tothe next frame."
            android.util.Log.w(r0, r1, r3)
        L4e:
            return
    }

    boolean canReuseUpdatedViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r2.mItemAnimator
            if (r0 == 0) goto L11
            java.util.List r1 = r3.getUnmodifiedPayloads()
            boolean r3 = r0.canReuseUpdatedViewHolder(r3, r1)
            if (r3 == 0) goto Lf
            goto L11
        Lf:
            r3 = 0
            goto L12
        L11:
            r3 = 1
        L12:
            return r3
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.RecyclerView.LayoutParams
            if (r0 == 0) goto L10
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
            boolean r2 = r0.checkLayoutParams(r2)
            if (r2 == 0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    void clearOldPositions() {
            r4 = this;
            android.support.v7.widget.ChildHelper r0 = r4.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            android.support.v7.widget.ChildHelper r2 = r4.mChildHelper
            android.view.View r2 = r2.getUnfilteredChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r2 = getChildViewHolderInt(r2)
            boolean r3 = r2.shouldIgnore()
            if (r3 != 0) goto L1c
            r2.clearOldPosition()
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            android.support.v7.widget.RecyclerView$Recycler r0 = r4.mRecycler
            r0.clearOldPositions()
            return
    }

    public void clearOnChildAttachStateChangeListeners() {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r1.mOnChildAttachStateListeners
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            return
    }

    public void clearOnScrollListeners() {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r1.mScrollListeners
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            return
    }

    @Override
    public int computeHorizontalScrollExtent() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollHorizontally()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeHorizontalScrollExtent(r1)
        L14:
            return r1
    }

    @Override
    public int computeHorizontalScrollOffset() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollHorizontally()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeHorizontalScrollOffset(r1)
        L14:
            return r1
    }

    @Override
    public int computeHorizontalScrollRange() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollHorizontally()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeHorizontalScrollRange(r1)
        L14:
            return r1
    }

    @Override
    public int computeVerticalScrollExtent() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollVertically()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeVerticalScrollExtent(r1)
        L14:
            return r1
    }

    @Override
    public int computeVerticalScrollOffset() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollVertically()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeVerticalScrollOffset(r1)
        L14:
            return r1
    }

    @Override
    public int computeVerticalScrollRange() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.canScrollVertically()
            if (r0 == 0) goto L14
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            int r1 = r0.computeVerticalScrollRange(r1)
        L14:
            return r1
    }

    void considerReleasingGlowsOnScroll(int r3, int r4) {
            r2 = this;
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            if (r0 == 0) goto L18
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L18
            if (r3 <= 0) goto L18
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            r0.onRelease()
            android.widget.EdgeEffect r0 = r2.mLeftGlow
            boolean r0 = r0.isFinished()
            goto L19
        L18:
            r0 = 0
        L19:
            android.widget.EdgeEffect r1 = r2.mRightGlow
            if (r1 == 0) goto L31
            boolean r1 = r1.isFinished()
            if (r1 != 0) goto L31
            if (r3 >= 0) goto L31
            android.widget.EdgeEffect r3 = r2.mRightGlow
            r3.onRelease()
            android.widget.EdgeEffect r3 = r2.mRightGlow
            boolean r3 = r3.isFinished()
            r0 = r0 | r3
        L31:
            android.widget.EdgeEffect r3 = r2.mTopGlow
            if (r3 == 0) goto L49
            boolean r3 = r3.isFinished()
            if (r3 != 0) goto L49
            if (r4 <= 0) goto L49
            android.widget.EdgeEffect r3 = r2.mTopGlow
            r3.onRelease()
            android.widget.EdgeEffect r3 = r2.mTopGlow
            boolean r3 = r3.isFinished()
            r0 = r0 | r3
        L49:
            android.widget.EdgeEffect r3 = r2.mBottomGlow
            if (r3 == 0) goto L61
            boolean r3 = r3.isFinished()
            if (r3 != 0) goto L61
            if (r4 >= 0) goto L61
            android.widget.EdgeEffect r3 = r2.mBottomGlow
            r3.onRelease()
            android.widget.EdgeEffect r3 = r2.mBottomGlow
            boolean r3 = r3.isFinished()
            r0 = r0 | r3
        L61:
            if (r0 == 0) goto L66
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        L66:
            return
    }

    void consumePendingUpdateOperations() {
            r3 = this;
            boolean r0 = r3.mFirstLayoutComplete
            java.lang.String r1 = "RV FullInvalidate"
            if (r0 == 0) goto L67
            boolean r0 = r3.mDataSetHasChangedAfterLayout
            if (r0 == 0) goto Lb
            goto L67
        Lb:
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            boolean r0 = r0.hasPendingUpdates()
            if (r0 != 0) goto L14
            return
        L14:
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            r2 = 4
            boolean r0 = r0.hasAnyUpdateTypes(r2)
            if (r0 == 0) goto L55
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            r2 = 11
            boolean r0 = r0.hasAnyUpdateTypes(r2)
            if (r0 != 0) goto L55
            java.lang.String r0 = "RV PartialInvalidate"
            android.support.v4.os.TraceCompat.beginSection(r0)
            r3.startInterceptRequestLayout()
            r3.onEnterLayoutOrScroll()
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            r0.preProcess()
            boolean r0 = r3.mLayoutWasDefered
            if (r0 != 0) goto L4a
            boolean r0 = r3.hasUpdatedView()
            if (r0 == 0) goto L45
            r3.dispatchLayout()
            goto L4a
        L45:
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            r0.consumePostponedUpdates()
        L4a:
            r0 = 1
            r3.stopInterceptRequestLayout(r0)
            r3.onExitLayoutOrScroll()
            android.support.v4.os.TraceCompat.endSection()
            goto L66
        L55:
            android.support.v7.widget.AdapterHelper r0 = r3.mAdapterHelper
            boolean r0 = r0.hasPendingUpdates()
            if (r0 == 0) goto L66
            android.support.v4.os.TraceCompat.beginSection(r1)
            r3.dispatchLayout()
            android.support.v4.os.TraceCompat.endSection()
        L66:
            return
        L67:
            android.support.v4.os.TraceCompat.beginSection(r1)
            r3.dispatchLayout()
            android.support.v4.os.TraceCompat.endSection()
            return
    }

    void defaultOnMeasure(int r3, int r4) {
            r2 = this;
            int r0 = r2.getPaddingLeft()
            int r1 = r2.getPaddingRight()
            int r0 = r0 + r1
            int r1 = android.support.v4.view.ViewCompat.getMinimumWidth(r2)
            int r3 = android.support.v7.widget.RecyclerView.LayoutManager.chooseSize(r3, r0, r1)
            int r0 = r2.getPaddingTop()
            int r1 = r2.getPaddingBottom()
            int r0 = r0 + r1
            int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r2)
            int r4 = android.support.v7.widget.RecyclerView.LayoutManager.chooseSize(r4, r0, r1)
            r2.setMeasuredDimension(r3, r4)
            return
    }

    void dispatchChildAttached(android.view.View r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$ViewHolder r0 = getChildViewHolderInt(r3)
            r2.onChildAttachedToWindow(r3)
            android.support.v7.widget.RecyclerView$Adapter r1 = r2.mAdapter
            if (r1 == 0) goto L10
            if (r0 == 0) goto L10
            r1.onViewAttachedToWindow(r0)
        L10:
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r2.mOnChildAttachStateListeners
            if (r0 == 0) goto L2a
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L1a:
            if (r0 < 0) goto L2a
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r1 = r2.mOnChildAttachStateListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener r1 = (android.support.v7.widget.RecyclerView.OnChildAttachStateChangeListener) r1
            r1.onChildViewAttachedToWindow(r3)
            int r0 = r0 + (-1)
            goto L1a
        L2a:
            return
    }

    void dispatchChildDetached(android.view.View r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$ViewHolder r0 = getChildViewHolderInt(r3)
            r2.onChildDetachedFromWindow(r3)
            android.support.v7.widget.RecyclerView$Adapter r1 = r2.mAdapter
            if (r1 == 0) goto L10
            if (r0 == 0) goto L10
            r1.onViewDetachedFromWindow(r0)
        L10:
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r2.mOnChildAttachStateListeners
            if (r0 == 0) goto L2a
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L1a:
            if (r0 < 0) goto L2a
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r1 = r2.mOnChildAttachStateListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener r1 = (android.support.v7.widget.RecyclerView.OnChildAttachStateChangeListener) r1
            r1.onChildViewDetachedFromWindow(r3)
            int r0 = r0 + (-1)
            goto L1a
        L2a:
            return
    }

    void dispatchLayout() {
            r2 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            java.lang.String r1 = "RecyclerView"
            if (r0 != 0) goto Lc
            java.lang.String r0 = "No adapter attached; skipping layout"
            android.util.Log.e(r1, r0)
            return
        Lc:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 != 0) goto L16
            java.lang.String r0 = "No layout manager attached; skipping layout"
            android.util.Log.e(r1, r0)
            return
        L16:
            android.support.v7.widget.RecyclerView$State r0 = r2.mState
            r1 = 0
            r0.mIsMeasuring = r1
            android.support.v7.widget.RecyclerView$State r0 = r2.mState
            int r0 = r0.mLayoutStep
            r1 = 1
            if (r0 != r1) goto L2e
            r2.dispatchLayoutStep1()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r0.setExactMeasureSpecsFrom(r2)
            r2.dispatchLayoutStep2()
            goto L5d
        L2e:
            android.support.v7.widget.AdapterHelper r0 = r2.mAdapterHelper
            boolean r0 = r0.hasUpdates()
            if (r0 != 0) goto L55
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            int r0 = r0.getWidth()
            int r1 = r2.getWidth()
            if (r0 != r1) goto L55
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            int r0 = r0.getHeight()
            int r1 = r2.getHeight()
            if (r0 == r1) goto L4f
            goto L55
        L4f:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r0.setExactMeasureSpecsFrom(r2)
            goto L5d
        L55:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            r0.setExactMeasureSpecsFrom(r2)
            r2.dispatchLayoutStep2()
        L5d:
            r2.dispatchLayoutStep3()
            return
    }

    @Override
    public boolean dispatchNestedFling(float r2, float r3, boolean r4) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.dispatchNestedFling(r2, r3, r4)
            return r2
    }

    @Override
    public boolean dispatchNestedPreFling(float r2, float r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.dispatchNestedPreFling(r2, r3)
            return r2
    }

    @Override
    public boolean dispatchNestedPreScroll(int r2, int r3, int[] r4, int[] r5) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.dispatchNestedPreScroll(r2, r3, r4, r5)
            return r2
    }

    @Override
    public boolean dispatchNestedPreScroll(int r7, int r8, int[] r9, int[] r10, int r11) {
            r6 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r6.getScrollingChildHelper()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.dispatchNestedPreScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public boolean dispatchNestedScroll(int r7, int r8, int r9, int r10, int[] r11) {
            r6 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r6.getScrollingChildHelper()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            boolean r7 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    public boolean dispatchNestedScroll(int r8, int r9, int r10, int r11, int[] r12, int r13) {
            r7 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r7.getScrollingChildHelper()
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            boolean r8 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            return r8
    }

    void dispatchOnScrollStateChanged(int r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L7
            r0.onScrollStateChanged(r3)
        L7:
            r2.onScrollStateChanged(r3)
            android.support.v7.widget.RecyclerView$OnScrollListener r0 = r2.mScrollListener
            if (r0 == 0) goto L11
            r0.onScrollStateChanged(r2, r3)
        L11:
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r2.mScrollListeners
            if (r0 == 0) goto L2b
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L1b:
            if (r0 < 0) goto L2b
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r1 = r2.mScrollListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.v7.widget.RecyclerView$OnScrollListener r1 = (android.support.v7.widget.RecyclerView.OnScrollListener) r1
            r1.onScrollStateChanged(r2, r3)
            int r0 = r0 + (-1)
            goto L1b
        L2b:
            return
    }

    void dispatchOnScrolled(int r3, int r4) {
            r2 = this;
            int r0 = r2.mDispatchScrollCounter
            int r0 = r0 + 1
            r2.mDispatchScrollCounter = r0
            int r0 = r2.getScrollX()
            int r1 = r2.getScrollY()
            r2.onScrollChanged(r0, r1, r0, r1)
            r2.onScrolled(r3, r4)
            android.support.v7.widget.RecyclerView$OnScrollListener r0 = r2.mScrollListener
            if (r0 == 0) goto L1b
            r0.onScrolled(r2, r3, r4)
        L1b:
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r2.mScrollListeners
            if (r0 == 0) goto L35
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L25:
            if (r0 < 0) goto L35
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r1 = r2.mScrollListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.v7.widget.RecyclerView$OnScrollListener r1 = (android.support.v7.widget.RecyclerView.OnScrollListener) r1
            r1.onScrolled(r2, r3, r4)
            int r0 = r0 + (-1)
            goto L25
        L35:
            int r3 = r2.mDispatchScrollCounter
            int r3 = r3 + (-1)
            r2.mDispatchScrollCounter = r3
            return
    }

    void dispatchPendingImportantForAccessibilityChanges() {
            r5 = this;
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mPendingAccessibilityImportanceChange
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L30
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r1 = r5.mPendingAccessibilityImportanceChange
            java.lang.Object r1 = r1.get(r0)
            android.support.v7.widget.RecyclerView$ViewHolder r1 = (android.support.v7.widget.RecyclerView.ViewHolder) r1
            android.view.View r2 = r1.itemView
            android.view.ViewParent r2 = r2.getParent()
            if (r2 != r5) goto L2d
            boolean r2 = r1.shouldIgnore()
            if (r2 == 0) goto L21
            goto L2d
        L21:
            int r2 = r1.mPendingAccessibilityState
            r3 = -1
            if (r2 == r3) goto L2d
            android.view.View r4 = r1.itemView
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r4, r2)
            r1.mPendingAccessibilityState = r3
        L2d:
            int r0 = r0 + (-1)
            goto L8
        L30:
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mPendingAccessibilityImportanceChange
            r0.clear()
            return
    }

    @Override
    protected void dispatchRestoreInstanceState(android.util.SparseArray<android.os.Parcelable> r1) {
            r0 = this;
            r0.dispatchThawSelfOnly(r1)
            return
    }

    @Override
    protected void dispatchSaveInstanceState(android.util.SparseArray<android.os.Parcelable> r1) {
            r0 = this;
            r0.dispatchFreezeSelfOnly(r1)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r8) {
            r7 = this;
            super.draw(r8)
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r7.mItemDecorations
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L1d
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r3 = r7.mItemDecorations
            java.lang.Object r3 = r3.get(r2)
            android.support.v7.widget.RecyclerView$ItemDecoration r3 = (android.support.v7.widget.RecyclerView.ItemDecoration) r3
            android.support.v7.widget.RecyclerView$State r4 = r7.mState
            r3.onDrawOver(r8, r7, r4)
            int r2 = r2 + 1
            goto Lb
        L1d:
            android.widget.EdgeEffect r0 = r7.mLeftGlow
            r2 = 1
            if (r0 == 0) goto L57
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L57
            int r0 = r8.save()
            boolean r3 = r7.mClipToPadding
            if (r3 == 0) goto L35
            int r3 = r7.getPaddingBottom()
            goto L36
        L35:
            r3 = r1
        L36:
            r4 = 1132920832(0x43870000, float:270.0)
            r8.rotate(r4)
            int r4 = r7.getHeight()
            int r4 = -r4
            int r4 = r4 + r3
            float r3 = (float) r4
            r4 = 0
            r8.translate(r3, r4)
            android.widget.EdgeEffect r3 = r7.mLeftGlow
            if (r3 == 0) goto L52
            boolean r3 = r3.draw(r8)
            if (r3 == 0) goto L52
            r3 = r2
            goto L53
        L52:
            r3 = r1
        L53:
            r8.restoreToCount(r0)
            goto L58
        L57:
            r3 = r1
        L58:
            android.widget.EdgeEffect r0 = r7.mTopGlow
            if (r0 == 0) goto L88
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L88
            int r0 = r8.save()
            boolean r4 = r7.mClipToPadding
            if (r4 == 0) goto L77
            int r4 = r7.getPaddingLeft()
            float r4 = (float) r4
            int r5 = r7.getPaddingTop()
            float r5 = (float) r5
            r8.translate(r4, r5)
        L77:
            android.widget.EdgeEffect r4 = r7.mTopGlow
            if (r4 == 0) goto L83
            boolean r4 = r4.draw(r8)
            if (r4 == 0) goto L83
            r4 = r2
            goto L84
        L83:
            r4 = r1
        L84:
            r3 = r3 | r4
            r8.restoreToCount(r0)
        L88:
            android.widget.EdgeEffect r0 = r7.mRightGlow
            if (r0 == 0) goto Lc1
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto Lc1
            int r0 = r8.save()
            int r4 = r7.getWidth()
            boolean r5 = r7.mClipToPadding
            if (r5 == 0) goto La3
            int r5 = r7.getPaddingTop()
            goto La4
        La3:
            r5 = r1
        La4:
            r6 = 1119092736(0x42b40000, float:90.0)
            r8.rotate(r6)
            int r5 = -r5
            float r5 = (float) r5
            int r4 = -r4
            float r4 = (float) r4
            r8.translate(r5, r4)
            android.widget.EdgeEffect r4 = r7.mRightGlow
            if (r4 == 0) goto Lbc
            boolean r4 = r4.draw(r8)
            if (r4 == 0) goto Lbc
            r4 = r2
            goto Lbd
        Lbc:
            r4 = r1
        Lbd:
            r3 = r3 | r4
            r8.restoreToCount(r0)
        Lc1:
            android.widget.EdgeEffect r0 = r7.mBottomGlow
            if (r0 == 0) goto L110
            boolean r0 = r0.isFinished()
            if (r0 != 0) goto L110
            int r0 = r8.save()
            r4 = 1127481344(0x43340000, float:180.0)
            r8.rotate(r4)
            boolean r4 = r7.mClipToPadding
            if (r4 == 0) goto Lf2
            int r4 = r7.getWidth()
            int r4 = -r4
            int r5 = r7.getPaddingRight()
            int r4 = r4 + r5
            float r4 = (float) r4
            int r5 = r7.getHeight()
            int r5 = -r5
            int r6 = r7.getPaddingBottom()
            int r5 = r5 + r6
            float r5 = (float) r5
            r8.translate(r4, r5)
            goto L101
        Lf2:
            int r4 = r7.getWidth()
            int r4 = -r4
            float r4 = (float) r4
            int r5 = r7.getHeight()
            int r5 = -r5
            float r5 = (float) r5
            r8.translate(r4, r5)
        L101:
            android.widget.EdgeEffect r4 = r7.mBottomGlow
            if (r4 == 0) goto L10c
            boolean r4 = r4.draw(r8)
            if (r4 == 0) goto L10c
            r1 = r2
        L10c:
            r3 = r3 | r1
            r8.restoreToCount(r0)
        L110:
            if (r3 != 0) goto L127
            android.support.v7.widget.RecyclerView$ItemAnimator r8 = r7.mItemAnimator
            if (r8 == 0) goto L127
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r8 = r7.mItemDecorations
            int r8 = r8.size()
            if (r8 <= 0) goto L127
            android.support.v7.widget.RecyclerView$ItemAnimator r8 = r7.mItemAnimator
            boolean r8 = r8.isRunning()
            if (r8 == 0) goto L127
            goto L128
        L127:
            r2 = r3
        L128:
            if (r2 == 0) goto L12d
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r7)
        L12d:
            return
    }

    @Override
    public boolean drawChild(android.graphics.Canvas r1, android.view.View r2, long r3) {
            r0 = this;
            boolean r1 = super.drawChild(r1, r2, r3)
            return r1
    }

    void ensureBottomGlow() {
            r4 = this;
            android.widget.EdgeEffect r0 = r4.mBottomGlow
            if (r0 == 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r0 = r4.mEdgeEffectFactory
            r1 = 3
            android.widget.EdgeEffect r0 = r0.createEdgeEffect(r4, r1)
            r4.mBottomGlow = r0
            boolean r1 = r4.mClipToPadding
            if (r1 == 0) goto L32
            int r1 = r4.getMeasuredWidth()
            int r2 = r4.getPaddingLeft()
            int r1 = r1 - r2
            int r2 = r4.getPaddingRight()
            int r1 = r1 - r2
            int r2 = r4.getMeasuredHeight()
            int r3 = r4.getPaddingTop()
            int r2 = r2 - r3
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            r0.setSize(r1, r2)
            goto L3d
        L32:
            int r1 = r4.getMeasuredWidth()
            int r2 = r4.getMeasuredHeight()
            r0.setSize(r1, r2)
        L3d:
            return
    }

    void ensureLeftGlow() {
            r4 = this;
            android.widget.EdgeEffect r0 = r4.mLeftGlow
            if (r0 == 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r0 = r4.mEdgeEffectFactory
            r1 = 0
            android.widget.EdgeEffect r0 = r0.createEdgeEffect(r4, r1)
            r4.mLeftGlow = r0
            boolean r1 = r4.mClipToPadding
            if (r1 == 0) goto L32
            int r1 = r4.getMeasuredHeight()
            int r2 = r4.getPaddingTop()
            int r1 = r1 - r2
            int r2 = r4.getPaddingBottom()
            int r1 = r1 - r2
            int r2 = r4.getMeasuredWidth()
            int r3 = r4.getPaddingLeft()
            int r2 = r2 - r3
            int r3 = r4.getPaddingRight()
            int r2 = r2 - r3
            r0.setSize(r1, r2)
            goto L3d
        L32:
            int r1 = r4.getMeasuredHeight()
            int r2 = r4.getMeasuredWidth()
            r0.setSize(r1, r2)
        L3d:
            return
    }

    void ensureRightGlow() {
            r4 = this;
            android.widget.EdgeEffect r0 = r4.mRightGlow
            if (r0 == 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r0 = r4.mEdgeEffectFactory
            r1 = 2
            android.widget.EdgeEffect r0 = r0.createEdgeEffect(r4, r1)
            r4.mRightGlow = r0
            boolean r1 = r4.mClipToPadding
            if (r1 == 0) goto L32
            int r1 = r4.getMeasuredHeight()
            int r2 = r4.getPaddingTop()
            int r1 = r1 - r2
            int r2 = r4.getPaddingBottom()
            int r1 = r1 - r2
            int r2 = r4.getMeasuredWidth()
            int r3 = r4.getPaddingLeft()
            int r2 = r2 - r3
            int r3 = r4.getPaddingRight()
            int r2 = r2 - r3
            r0.setSize(r1, r2)
            goto L3d
        L32:
            int r1 = r4.getMeasuredHeight()
            int r2 = r4.getMeasuredWidth()
            r0.setSize(r1, r2)
        L3d:
            return
    }

    void ensureTopGlow() {
            r4 = this;
            android.widget.EdgeEffect r0 = r4.mTopGlow
            if (r0 == 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r0 = r4.mEdgeEffectFactory
            r1 = 1
            android.widget.EdgeEffect r0 = r0.createEdgeEffect(r4, r1)
            r4.mTopGlow = r0
            boolean r1 = r4.mClipToPadding
            if (r1 == 0) goto L32
            int r1 = r4.getMeasuredWidth()
            int r2 = r4.getPaddingLeft()
            int r1 = r1 - r2
            int r2 = r4.getPaddingRight()
            int r1 = r1 - r2
            int r2 = r4.getMeasuredHeight()
            int r3 = r4.getPaddingTop()
            int r2 = r2 - r3
            int r3 = r4.getPaddingBottom()
            int r2 = r2 - r3
            r0.setSize(r1, r2)
            goto L3d
        L32:
            int r1 = r4.getMeasuredWidth()
            int r2 = r4.getMeasuredHeight()
            r0.setSize(r1, r2)
        L3d:
            return
    }

    java.lang.String exceptionLabel() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " "
            r0.append(r1)
            java.lang.String r1 = super.toString()
            r0.append(r1)
            java.lang.String r1 = ", adapter:"
            r0.append(r1)
            android.support.v7.widget.RecyclerView$Adapter r1 = r2.mAdapter
            r0.append(r1)
            java.lang.String r1 = ", layout:"
            r0.append(r1)
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r2.mLayout
            r0.append(r1)
            java.lang.String r1 = ", context:"
            r0.append(r1)
            android.content.Context r1 = r2.getContext()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    final void fillRemainingScrollValues(android.support.v7.widget.RecyclerView.State r4) {
            r3 = this;
            int r0 = r3.getScrollState()
            r1 = 2
            if (r0 != r1) goto L22
            android.support.v7.widget.RecyclerView$ViewFlinger r0 = r3.mViewFlinger
            android.widget.OverScroller r0 = r0.mScroller
            int r1 = r0.getFinalX()
            int r2 = r0.getCurrX()
            int r1 = r1 - r2
            r4.mRemainingScrollHorizontal = r1
            int r1 = r0.getFinalY()
            int r0 = r0.getCurrY()
            int r1 = r1 - r0
            r4.mRemainingScrollVertical = r1
            goto L27
        L22:
            r0 = 0
            r4.mRemainingScrollHorizontal = r0
            r4.mRemainingScrollVertical = r0
        L27:
            return
    }

    public android.view.View findChildViewUnder(float r6, float r7) {
            r5 = this;
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getChildCount()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L44
            android.support.v7.widget.ChildHelper r1 = r5.mChildHelper
            android.view.View r1 = r1.getChildAt(r0)
            float r2 = r1.getTranslationX()
            float r3 = r1.getTranslationY()
            int r4 = r1.getLeft()
            float r4 = (float) r4
            float r4 = r4 + r2
            int r4 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r4 < 0) goto L41
            int r4 = r1.getRight()
            float r4 = (float) r4
            float r4 = r4 + r2
            int r2 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r2 > 0) goto L41
            int r2 = r1.getTop()
            float r2 = (float) r2
            float r2 = r2 + r3
            int r2 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r2 < 0) goto L41
            int r2 = r1.getBottom()
            float r2 = (float) r2
            float r2 = r2 + r3
            int r2 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r2 > 0) goto L41
            return r1
        L41:
            int r0 = r0 + (-1)
            goto L8
        L44:
            r6 = 0
            return r6
    }

    public android.view.View findContainingItemView(android.view.View r3) {
            r2 = this;
            android.view.ViewParent r0 = r3.getParent()
        L4:
            if (r0 == 0) goto L14
            if (r0 == r2) goto L14
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto L14
            r3 = r0
            android.view.View r3 = (android.view.View) r3
            android.view.ViewParent r0 = r3.getParent()
            goto L4
        L14:
            if (r0 != r2) goto L17
            goto L18
        L17:
            r3 = 0
        L18:
            return r3
    }

    public android.support.v7.widget.RecyclerView.ViewHolder findContainingViewHolder(android.view.View r1) {
            r0 = this;
            android.view.View r1 = r0.findContainingItemView(r1)
            if (r1 != 0) goto L8
            r1 = 0
            goto Lc
        L8:
            android.support.v7.widget.RecyclerView$ViewHolder r1 = r0.getChildViewHolder(r1)
        Lc:
            return r1
    }

    public android.support.v7.widget.RecyclerView.ViewHolder findViewHolderForAdapterPosition(int r6) {
            r5 = this;
            boolean r0 = r5.mDataSetHasChangedAfterLayout
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r2 = 0
        Ld:
            if (r2 >= r0) goto L37
            android.support.v7.widget.ChildHelper r3 = r5.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L34
            boolean r4 = r3.isRemoved()
            if (r4 != 0) goto L34
            int r4 = r5.getAdapterPositionFor(r3)
            if (r4 != r6) goto L34
            android.support.v7.widget.ChildHelper r1 = r5.mChildHelper
            android.view.View r4 = r3.itemView
            boolean r1 = r1.isHidden(r4)
            if (r1 == 0) goto L33
            r1 = r3
            goto L34
        L33:
            return r3
        L34:
            int r2 = r2 + 1
            goto Ld
        L37:
            return r1
    }

    public android.support.v7.widget.RecyclerView.ViewHolder findViewHolderForItemId(long r7) {
            r6 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r6.mAdapter
            r1 = 0
            if (r0 == 0) goto L3f
            boolean r0 = r0.hasStableIds()
            if (r0 != 0) goto Lc
            goto L3f
        Lc:
            android.support.v7.widget.ChildHelper r0 = r6.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r2 = 0
        L13:
            if (r2 >= r0) goto L3f
            android.support.v7.widget.ChildHelper r3 = r6.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L3c
            boolean r4 = r3.isRemoved()
            if (r4 != 0) goto L3c
            long r4 = r3.getItemId()
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 != 0) goto L3c
            android.support.v7.widget.ChildHelper r1 = r6.mChildHelper
            android.view.View r4 = r3.itemView
            boolean r1 = r1.isHidden(r4)
            if (r1 == 0) goto L3b
            r1 = r3
            goto L3c
        L3b:
            return r3
        L3c:
            int r2 = r2 + 1
            goto L13
        L3f:
            return r1
    }

    public android.support.v7.widget.RecyclerView.ViewHolder findViewHolderForLayoutPosition(int r2) {
            r1 = this;
            r0 = 0
            android.support.v7.widget.RecyclerView$ViewHolder r2 = r1.findViewHolderForPosition(r2, r0)
            return r2
    }

    @java.lang.Deprecated
    public android.support.v7.widget.RecyclerView.ViewHolder findViewHolderForPosition(int r2) {
            r1 = this;
            r0 = 0
            android.support.v7.widget.RecyclerView$ViewHolder r2 = r1.findViewHolderForPosition(r2, r0)
            return r2
    }

    android.support.v7.widget.RecyclerView.ViewHolder findViewHolderForPosition(int r6, boolean r7) {
            r5 = this;
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
            r2 = 0
        L8:
            if (r2 >= r0) goto L3a
            android.support.v7.widget.ChildHelper r3 = r5.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L37
            boolean r4 = r3.isRemoved()
            if (r4 != 0) goto L37
            if (r7 == 0) goto L23
            int r4 = r3.mPosition
            if (r4 == r6) goto L2a
            goto L37
        L23:
            int r4 = r3.getLayoutPosition()
            if (r4 == r6) goto L2a
            goto L37
        L2a:
            android.support.v7.widget.ChildHelper r1 = r5.mChildHelper
            android.view.View r4 = r3.itemView
            boolean r1 = r1.isHidden(r4)
            if (r1 == 0) goto L36
            r1 = r3
            goto L37
        L36:
            return r3
        L37:
            int r2 = r2 + 1
            goto L8
        L3a:
            return r1
    }

    public boolean fling(int r8, int r9) {
            r7 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            r1 = 0
            if (r0 != 0) goto Ld
            java.lang.String r8 = "RecyclerView"
            java.lang.String r9 = "Cannot fling without a LayoutManager set. Call setLayoutManager with a non-null argument."
            android.util.Log.e(r8, r9)
            return r1
        Ld:
            boolean r2 = r7.mLayoutFrozen
            if (r2 == 0) goto L12
            return r1
        L12:
            boolean r0 = r0.canScrollHorizontally()
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r7.mLayout
            boolean r2 = r2.canScrollVertically()
            if (r0 == 0) goto L26
            int r3 = java.lang.Math.abs(r8)
            int r4 = r7.mMinFlingVelocity
            if (r3 >= r4) goto L27
        L26:
            r8 = r1
        L27:
            if (r2 == 0) goto L31
            int r3 = java.lang.Math.abs(r9)
            int r4 = r7.mMinFlingVelocity
            if (r3 >= r4) goto L32
        L31:
            r9 = r1
        L32:
            if (r8 != 0) goto L37
            if (r9 != 0) goto L37
            return r1
        L37:
            float r3 = (float) r8
            float r4 = (float) r9
            boolean r5 = r7.dispatchNestedPreFling(r3, r4)
            if (r5 != 0) goto L7e
            r5 = 1
            if (r0 != 0) goto L47
            if (r2 == 0) goto L45
            goto L47
        L45:
            r6 = r1
            goto L48
        L47:
            r6 = r5
        L48:
            r7.dispatchNestedFling(r3, r4, r6)
            android.support.v7.widget.RecyclerView$OnFlingListener r3 = r7.mOnFlingListener
            if (r3 == 0) goto L56
            boolean r3 = r3.onFling(r8, r9)
            if (r3 == 0) goto L56
            return r5
        L56:
            if (r6 == 0) goto L7e
            if (r0 == 0) goto L5b
            r1 = r5
        L5b:
            if (r2 == 0) goto L5f
            r1 = r1 | 2
        L5f:
            r7.startNestedScroll(r1, r5)
            int r0 = r7.mMaxFlingVelocity
            int r1 = -r0
            int r8 = java.lang.Math.min(r8, r0)
            int r8 = java.lang.Math.max(r1, r8)
            int r0 = r7.mMaxFlingVelocity
            int r1 = -r0
            int r9 = java.lang.Math.min(r9, r0)
            int r9 = java.lang.Math.max(r1, r9)
            android.support.v7.widget.RecyclerView$ViewFlinger r0 = r7.mViewFlinger
            r0.fling(r8, r9)
            return r5
        L7e:
            return r1
    }

    @Override
    public android.view.View focusSearch(android.view.View r9, int r10) {
            r8 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            android.view.View r0 = r0.onInterceptFocusSearch(r9, r10)
            if (r0 == 0) goto L9
            return r0
        L9:
            android.support.v7.widget.RecyclerView$Adapter r0 = r8.mAdapter
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1f
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            if (r0 == 0) goto L1f
            boolean r0 = r8.isComputingLayout()
            if (r0 != 0) goto L1f
            boolean r0 = r8.mLayoutFrozen
            if (r0 != 0) goto L1f
            r0 = r1
            goto L20
        L1f:
            r0 = r2
        L20:
            android.view.FocusFinder r3 = android.view.FocusFinder.getInstance()
            r4 = 0
            if (r0 == 0) goto L9b
            r5 = 2
            if (r10 == r5) goto L2c
            if (r10 != r1) goto L9b
        L2c:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            boolean r0 = r0.canScrollVertically()
            if (r0 == 0) goto L4a
            if (r10 != r5) goto L39
            r0 = 130(0x82, float:1.82E-43)
            goto L3b
        L39:
            r0 = 33
        L3b:
            android.view.View r6 = r3.findNextFocus(r8, r9, r0)
            if (r6 != 0) goto L43
            r6 = r1
            goto L44
        L43:
            r6 = r2
        L44:
            boolean r7 = android.support.v7.widget.RecyclerView.FORCE_ABS_FOCUS_SEARCH_DIRECTION
            if (r7 == 0) goto L4b
            r10 = r0
            goto L4b
        L4a:
            r6 = r2
        L4b:
            if (r6 != 0) goto L7b
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            boolean r0 = r0.canScrollHorizontally()
            if (r0 == 0) goto L7b
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            int r0 = r0.getLayoutDirection()
            if (r0 != r1) goto L5f
            r0 = r1
            goto L60
        L5f:
            r0 = r2
        L60:
            if (r10 != r5) goto L64
            r5 = r1
            goto L65
        L64:
            r5 = r2
        L65:
            r0 = r0 ^ r5
            if (r0 == 0) goto L6b
            r0 = 66
            goto L6d
        L6b:
            r0 = 17
        L6d:
            android.view.View r5 = r3.findNextFocus(r8, r9, r0)
            if (r5 != 0) goto L74
            goto L75
        L74:
            r1 = r2
        L75:
            boolean r5 = android.support.v7.widget.RecyclerView.FORCE_ABS_FOCUS_SEARCH_DIRECTION
            if (r5 == 0) goto L7a
            r10 = r0
        L7a:
            r6 = r1
        L7b:
            if (r6 == 0) goto L96
            r8.consumePendingUpdateOperations()
            android.view.View r0 = r8.findContainingItemView(r9)
            if (r0 != 0) goto L87
            return r4
        L87:
            r8.startInterceptRequestLayout()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r8.mRecycler
            android.support.v7.widget.RecyclerView$State r5 = r8.mState
            r0.onFocusSearchFailed(r9, r10, r1, r5)
            r8.stopInterceptRequestLayout(r2)
        L96:
            android.view.View r0 = r3.findNextFocus(r8, r9, r10)
            goto Lbf
        L9b:
            android.view.View r1 = r3.findNextFocus(r8, r9, r10)
            if (r1 != 0) goto Lbe
            if (r0 == 0) goto Lbe
            r8.consumePendingUpdateOperations()
            android.view.View r0 = r8.findContainingItemView(r9)
            if (r0 != 0) goto Lad
            return r4
        Lad:
            r8.startInterceptRequestLayout()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r8.mRecycler
            android.support.v7.widget.RecyclerView$State r3 = r8.mState
            android.view.View r0 = r0.onFocusSearchFailed(r9, r10, r1, r3)
            r8.stopInterceptRequestLayout(r2)
            goto Lbf
        Lbe:
            r0 = r1
        Lbf:
            if (r0 == 0) goto Ld6
            boolean r1 = r0.hasFocusable()
            if (r1 != 0) goto Ld6
            android.view.View r1 = r8.getFocusedChild()
            if (r1 != 0) goto Ld2
            android.view.View r9 = super.focusSearch(r9, r10)
            return r9
        Ld2:
            r8.requestChildOnScreen(r0, r4)
            return r9
        Ld6:
            boolean r1 = r8.isPreferredNextFocus(r9, r0, r10)
            if (r1 == 0) goto Ldd
            goto Le1
        Ldd:
            android.view.View r0 = super.focusSearch(r9, r10)
        Le1:
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r3 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            if (r0 == 0) goto L9
            android.support.v7.widget.RecyclerView$LayoutParams r0 = r0.generateDefaultLayoutParams()
            return r0
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "RecyclerView has no LayoutManager"
            r1.append(r2)
            java.lang.String r2 = r3.exceptionLabel()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto Ld
            android.content.Context r1 = r2.getContext()
            android.support.v7.widget.RecyclerView$LayoutParams r3 = r0.generateLayoutParams(r1, r3)
            return r3
        Ld:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RecyclerView has no LayoutManager"
            r0.append(r1)
            java.lang.String r1 = r2.exceptionLabel()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L9
            android.support.v7.widget.RecyclerView$LayoutParams r3 = r0.generateLayoutParams(r3)
            return r3
        L9:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RecyclerView has no LayoutManager"
            r0.append(r1)
            java.lang.String r1 = r2.exceptionLabel()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
    }

    public android.support.v7.widget.RecyclerView.Adapter getAdapter() {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            return r0
    }

    int getAdapterPositionFor(android.support.v7.widget.RecyclerView.ViewHolder r2) {
            r1 = this;
            r0 = 524(0x20c, float:7.34E-43)
            boolean r0 = r2.hasAnyOfTheFlags(r0)
            if (r0 != 0) goto L18
            boolean r0 = r2.isBound()
            if (r0 != 0) goto Lf
            goto L18
        Lf:
            android.support.v7.widget.AdapterHelper r0 = r1.mAdapterHelper
            int r2 = r2.mPosition
            int r2 = r0.applyPendingUpdatesToPosition(r2)
            return r2
        L18:
            r2 = -1
            return r2
    }

    @Override
    public int getBaseline() {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            if (r0 == 0) goto L9
            int r0 = r0.getBaseline()
            return r0
        L9:
            int r0 = super.getBaseline()
            return r0
    }

    long getChangedHolderKey(android.support.v7.widget.RecyclerView.ViewHolder r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r2.mAdapter
            boolean r0 = r0.hasStableIds()
            if (r0 == 0) goto Ld
            long r0 = r3.getItemId()
            goto L10
        Ld:
            int r3 = r3.mPosition
            long r0 = (long) r3
        L10:
            return r0
    }

    public int getChildAdapterPosition(android.view.View r1) {
            r0 = this;
            android.support.v7.widget.RecyclerView$ViewHolder r1 = getChildViewHolderInt(r1)
            if (r1 == 0) goto Lb
            int r1 = r1.getAdapterPosition()
            goto Lc
        Lb:
            r1 = -1
        Lc:
            return r1
    }

    @Override
    protected int getChildDrawingOrder(int r2, int r3) {
            r1 = this;
            android.support.v7.widget.RecyclerView$ChildDrawingOrderCallback r0 = r1.mChildDrawingOrderCallback
            if (r0 != 0) goto L9
            int r2 = super.getChildDrawingOrder(r2, r3)
            return r2
        L9:
            int r2 = r0.onGetChildDrawingOrder(r2, r3)
            return r2
    }

    public long getChildItemId(android.view.View r4) {
            r3 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r3.mAdapter
            r1 = -1
            if (r0 == 0) goto L17
            boolean r0 = r0.hasStableIds()
            if (r0 != 0) goto Ld
            goto L17
        Ld:
            android.support.v7.widget.RecyclerView$ViewHolder r4 = getChildViewHolderInt(r4)
            if (r4 == 0) goto L17
            long r1 = r4.getItemId()
        L17:
            return r1
    }

    public int getChildLayoutPosition(android.view.View r1) {
            r0 = this;
            android.support.v7.widget.RecyclerView$ViewHolder r1 = getChildViewHolderInt(r1)
            if (r1 == 0) goto Lb
            int r1 = r1.getLayoutPosition()
            goto Lc
        Lb:
            r1 = -1
        Lc:
            return r1
    }

    @java.lang.Deprecated
    public int getChildPosition(android.view.View r1) {
            r0 = this;
            int r1 = r0.getChildAdapterPosition(r1)
            return r1
    }

    public android.support.v7.widget.RecyclerView.ViewHolder getChildViewHolder(android.view.View r4) {
            r3 = this;
            android.view.ViewParent r0 = r4.getParent()
            if (r0 == 0) goto L28
            if (r0 != r3) goto L9
            goto L28
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "View "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " is not a direct child of "
            r1.append(r4)
            r1.append(r3)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L28:
            android.support.v7.widget.RecyclerView$ViewHolder r4 = getChildViewHolderInt(r4)
            return r4
    }

    @Override
    public boolean getClipToPadding() {
            r1 = this;
            boolean r0 = r1.mClipToPadding
            return r0
    }

    public android.support.v7.widget.RecyclerViewAccessibilityDelegate getCompatAccessibilityDelegate() {
            r1 = this;
            android.support.v7.widget.RecyclerViewAccessibilityDelegate r0 = r1.mAccessibilityDelegate
            return r0
    }

    public void getDecoratedBoundsWithMargins(android.view.View r1, android.graphics.Rect r2) {
            r0 = this;
            getDecoratedBoundsWithMarginsInt(r1, r2)
            return
    }

    public android.support.v7.widget.RecyclerView.EdgeEffectFactory getEdgeEffectFactory() {
            r1 = this;
            android.support.v7.widget.RecyclerView$EdgeEffectFactory r0 = r1.mEdgeEffectFactory
            return r0
    }

    public android.support.v7.widget.RecyclerView.ItemAnimator getItemAnimator() {
            r1 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r1.mItemAnimator
            return r0
    }

    android.graphics.Rect getItemDecorInsetsForChild(android.view.View r9) {
            r8 = this;
            android.view.ViewGroup$LayoutParams r0 = r9.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
            boolean r1 = r0.mInsetsDirty
            if (r1 != 0) goto Ld
            android.graphics.Rect r9 = r0.mDecorInsets
            return r9
        Ld:
            android.support.v7.widget.RecyclerView$State r1 = r8.mState
            boolean r1 = r1.isPreLayout()
            if (r1 == 0) goto L24
            boolean r1 = r0.isItemChanged()
            if (r1 != 0) goto L21
            boolean r1 = r0.isViewInvalid()
            if (r1 == 0) goto L24
        L21:
            android.graphics.Rect r9 = r0.mDecorInsets
            return r9
        L24:
            android.graphics.Rect r1 = r0.mDecorInsets
            r2 = 0
            r1.set(r2, r2, r2, r2)
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r3 = r8.mItemDecorations
            int r3 = r3.size()
            r4 = r2
        L31:
            if (r4 >= r3) goto L6e
            android.graphics.Rect r5 = r8.mTempRect
            r5.set(r2, r2, r2, r2)
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r5 = r8.mItemDecorations
            java.lang.Object r5 = r5.get(r4)
            android.support.v7.widget.RecyclerView$ItemDecoration r5 = (android.support.v7.widget.RecyclerView.ItemDecoration) r5
            android.graphics.Rect r6 = r8.mTempRect
            android.support.v7.widget.RecyclerView$State r7 = r8.mState
            r5.getItemOffsets(r6, r9, r8, r7)
            int r5 = r1.left
            android.graphics.Rect r6 = r8.mTempRect
            int r6 = r6.left
            int r5 = r5 + r6
            r1.left = r5
            int r5 = r1.top
            android.graphics.Rect r6 = r8.mTempRect
            int r6 = r6.top
            int r5 = r5 + r6
            r1.top = r5
            int r5 = r1.right
            android.graphics.Rect r6 = r8.mTempRect
            int r6 = r6.right
            int r5 = r5 + r6
            r1.right = r5
            int r5 = r1.bottom
            android.graphics.Rect r6 = r8.mTempRect
            int r6 = r6.bottom
            int r5 = r5 + r6
            r1.bottom = r5
            int r4 = r4 + 1
            goto L31
        L6e:
            r0.mInsetsDirty = r2
            return r1
    }

    public android.support.v7.widget.RecyclerView.ItemDecoration getItemDecorationAt(int r4) {
            r3 = this;
            int r0 = r3.getItemDecorationCount()
            if (r4 < 0) goto L11
            if (r4 >= r0) goto L11
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r3.mItemDecorations
            java.lang.Object r4 = r0.get(r4)
            android.support.v7.widget.RecyclerView$ItemDecoration r4 = (android.support.v7.widget.RecyclerView.ItemDecoration) r4
            return r4
        L11:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = " is an invalid index for size "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
    }

    public int getItemDecorationCount() {
            r1 = this;
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r1.mItemDecorations
            int r0 = r0.size()
            return r0
    }

    public android.support.v7.widget.RecyclerView.LayoutManager getLayoutManager() {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            return r0
    }

    public int getMaxFlingVelocity() {
            r1 = this;
            int r0 = r1.mMaxFlingVelocity
            return r0
    }

    public int getMinFlingVelocity() {
            r1 = this;
            int r0 = r1.mMinFlingVelocity
            return r0
    }

    long getNanoTime() {
            r2 = this;
            boolean r0 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
            if (r0 == 0) goto L9
            long r0 = java.lang.System.nanoTime()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public android.support.v7.widget.RecyclerView.OnFlingListener getOnFlingListener() {
            r1 = this;
            android.support.v7.widget.RecyclerView$OnFlingListener r0 = r1.mOnFlingListener
            return r0
    }

    public boolean getPreserveFocusAfterLayout() {
            r1 = this;
            boolean r0 = r1.mPreserveFocusAfterLayout
            return r0
    }

    public android.support.v7.widget.RecyclerView.RecycledViewPool getRecycledViewPool() {
            r1 = this;
            android.support.v7.widget.RecyclerView$Recycler r0 = r1.mRecycler
            android.support.v7.widget.RecyclerView$RecycledViewPool r0 = r0.getRecycledViewPool()
            return r0
    }

    public int getScrollState() {
            r1 = this;
            int r0 = r1.mScrollState
            return r0
    }

    public boolean hasFixedSize() {
            r1 = this;
            boolean r0 = r1.mHasFixedSize
            return r0
    }

    @Override
    public boolean hasNestedScrollingParent() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r0 = r0.hasNestedScrollingParent()
            return r0
    }

    @Override
    public boolean hasNestedScrollingParent(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.hasNestedScrollingParent(r2)
            return r2
    }

    public boolean hasPendingAdapterUpdates() {
            r1 = this;
            boolean r0 = r1.mFirstLayoutComplete
            if (r0 == 0) goto L13
            boolean r0 = r1.mDataSetHasChangedAfterLayout
            if (r0 != 0) goto L13
            android.support.v7.widget.AdapterHelper r0 = r1.mAdapterHelper
            boolean r0 = r0.hasPendingUpdates()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    void initAdapterManager() {
            r2 = this;
            android.support.v7.widget.AdapterHelper r0 = new android.support.v7.widget.AdapterHelper
            android.support.v7.widget.RecyclerView$6 r1 = new android.support.v7.widget.RecyclerView$6
            r1.<init>(r2)
            r0.<init>(r1)
            r2.mAdapterHelper = r0
            return
    }

    void initFastScroller(android.graphics.drawable.StateListDrawable r11, android.graphics.drawable.Drawable r12, android.graphics.drawable.StateListDrawable r13, android.graphics.drawable.Drawable r14) {
            r10 = this;
            if (r11 == 0) goto L2d
            if (r12 == 0) goto L2d
            if (r13 == 0) goto L2d
            if (r14 == 0) goto L2d
            android.content.Context r0 = r10.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.support.v7.widget.FastScroller r1 = new android.support.v7.widget.FastScroller
            int r2 = android.support.v7.recyclerview.R.dimen.fastscroll_default_thickness
            int r7 = r0.getDimensionPixelSize(r2)
            int r2 = android.support.v7.recyclerview.R.dimen.fastscroll_minimum_range
            int r8 = r0.getDimensionPixelSize(r2)
            int r2 = android.support.v7.recyclerview.R.dimen.fastscroll_margin
            int r9 = r0.getDimensionPixelOffset(r2)
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            return
        L2d:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Trying to set fast scroller without both required drawables."
            r12.append(r13)
            java.lang.String r13 = r10.exceptionLabel()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            throw r11
    }

    void invalidateGlows() {
            r1 = this;
            r0 = 0
            r1.mBottomGlow = r0
            r1.mTopGlow = r0
            r1.mRightGlow = r0
            r1.mLeftGlow = r0
            return
    }

    public void invalidateItemDecorations() {
            r2 = this;
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r2.mItemDecorations
            int r0 = r0.size()
            if (r0 != 0) goto L9
            return
        L9:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L12
            java.lang.String r1 = "Cannot invalidate item decorations during a scroll or layout"
            r0.assertNotInLayoutOrScroll(r1)
        L12:
            r2.markItemDecorInsetsDirty()
            r2.requestLayout()
            return
    }

    boolean isAccessibilityEnabled() {
            r1 = this;
            android.view.accessibility.AccessibilityManager r0 = r1.mAccessibilityManager
            if (r0 == 0) goto Lc
            boolean r0 = r0.isEnabled()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public boolean isAnimating() {
            r1 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r1.mItemAnimator
            if (r0 == 0) goto Lc
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public boolean isAttachedToWindow() {
            r1 = this;
            boolean r0 = r1.mIsAttached
            return r0
    }

    public boolean isComputingLayout() {
            r1 = this;
            int r0 = r1.mLayoutOrScrollCounter
            if (r0 <= 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isLayoutFrozen() {
            r1 = this;
            boolean r0 = r1.mLayoutFrozen
            return r0
    }

    @Override
    public boolean isNestedScrollingEnabled() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r0 = r0.isNestedScrollingEnabled()
            return r0
    }

    void jumpToPositionForSmoothScroller(int r2) {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            if (r0 != 0) goto L5
            return
        L5:
            r0.scrollToPosition(r2)
            r1.awakenScrollBars()
            return
    }

    void markItemDecorInsetsDirty() {
            r4 = this;
            android.support.v7.widget.ChildHelper r0 = r4.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1b
            android.support.v7.widget.ChildHelper r2 = r4.mChildHelper
            android.view.View r2 = r2.getUnfilteredChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
            r3 = 1
            r2.mInsetsDirty = r3
            int r1 = r1 + 1
            goto L7
        L1b:
            android.support.v7.widget.RecyclerView$Recycler r0 = r4.mRecycler
            r0.markItemDecorInsetsDirty()
            return
    }

    void markKnownViewsInvalid() {
            r4 = this;
            android.support.v7.widget.ChildHelper r0 = r4.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L22
            android.support.v7.widget.ChildHelper r2 = r4.mChildHelper
            android.view.View r2 = r2.getUnfilteredChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r2 = getChildViewHolderInt(r2)
            if (r2 == 0) goto L1f
            boolean r3 = r2.shouldIgnore()
            if (r3 != 0) goto L1f
            r3 = 6
            r2.addFlags(r3)
        L1f:
            int r1 = r1 + 1
            goto L7
        L22:
            r4.markItemDecorInsetsDirty()
            android.support.v7.widget.RecyclerView$Recycler r0 = r4.mRecycler
            r0.markKnownViewsInvalid()
            return
    }

    public void offsetChildrenHorizontal(int r4) {
            r3 = this;
            android.support.v7.widget.ChildHelper r0 = r3.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            android.support.v7.widget.ChildHelper r2 = r3.mChildHelper
            android.view.View r2 = r2.getChildAt(r1)
            r2.offsetLeftAndRight(r4)
            int r1 = r1 + 1
            goto L7
        L15:
            return
    }

    public void offsetChildrenVertical(int r4) {
            r3 = this;
            android.support.v7.widget.ChildHelper r0 = r3.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            android.support.v7.widget.ChildHelper r2 = r3.mChildHelper
            android.view.View r2 = r2.getChildAt(r1)
            r2.offsetTopAndBottom(r4)
            int r1 = r1 + 1
            goto L7
        L15:
            return
    }

    void offsetPositionRecordsForInsert(int r6, int r7) {
            r5 = this;
            android.support.v7.widget.ChildHelper r0 = r5.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L2b
            android.support.v7.widget.ChildHelper r3 = r5.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L28
            boolean r4 = r3.shouldIgnore()
            if (r4 != 0) goto L28
            int r4 = r3.mPosition
            if (r4 < r6) goto L28
            r3.offsetPosition(r7, r1)
            android.support.v7.widget.RecyclerView$State r3 = r5.mState
            r4 = 1
            r3.mStructureChanged = r4
        L28:
            int r2 = r2 + 1
            goto L8
        L2b:
            android.support.v7.widget.RecyclerView$Recycler r0 = r5.mRecycler
            r0.offsetPositionRecordsForInsert(r6, r7)
            r5.requestLayout()
            return
    }

    void offsetPositionRecordsForMove(int r10, int r11) {
            r9 = this;
            android.support.v7.widget.ChildHelper r0 = r9.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 1
            if (r10 >= r11) goto Ld
            r2 = -1
            r3 = r10
            r4 = r11
            goto L10
        Ld:
            r4 = r10
            r3 = r11
            r2 = r1
        L10:
            r5 = 0
            r6 = r5
        L12:
            if (r6 >= r0) goto L3d
            android.support.v7.widget.ChildHelper r7 = r9.mChildHelper
            android.view.View r7 = r7.getUnfilteredChildAt(r6)
            android.support.v7.widget.RecyclerView$ViewHolder r7 = getChildViewHolderInt(r7)
            if (r7 == 0) goto L3a
            int r8 = r7.mPosition
            if (r8 < r3) goto L3a
            int r8 = r7.mPosition
            if (r8 <= r4) goto L29
            goto L3a
        L29:
            int r8 = r7.mPosition
            if (r8 != r10) goto L33
            int r8 = r11 - r10
            r7.offsetPosition(r8, r5)
            goto L36
        L33:
            r7.offsetPosition(r2, r5)
        L36:
            android.support.v7.widget.RecyclerView$State r7 = r9.mState
            r7.mStructureChanged = r1
        L3a:
            int r6 = r6 + 1
            goto L12
        L3d:
            android.support.v7.widget.RecyclerView$Recycler r0 = r9.mRecycler
            r0.offsetPositionRecordsForMove(r10, r11)
            r9.requestLayout()
            return
    }

    void offsetPositionRecordsForRemove(int r8, int r9, boolean r10) {
            r7 = this;
            int r0 = r8 + r9
            android.support.v7.widget.ChildHelper r1 = r7.mChildHelper
            int r1 = r1.getUnfilteredChildCount()
            r2 = 0
        L9:
            if (r2 >= r1) goto L3c
            android.support.v7.widget.ChildHelper r3 = r7.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            if (r3 == 0) goto L39
            boolean r4 = r3.shouldIgnore()
            if (r4 != 0) goto L39
            int r4 = r3.mPosition
            r5 = 1
            if (r4 < r0) goto L2b
            int r4 = -r9
            r3.offsetPosition(r4, r10)
            android.support.v7.widget.RecyclerView$State r3 = r7.mState
            r3.mStructureChanged = r5
            goto L39
        L2b:
            int r4 = r3.mPosition
            if (r4 < r8) goto L39
            int r4 = r8 + (-1)
            int r6 = -r9
            r3.flagRemovedAndOffsetPosition(r4, r6, r10)
            android.support.v7.widget.RecyclerView$State r3 = r7.mState
            r3.mStructureChanged = r5
        L39:
            int r2 = r2 + 1
            goto L9
        L3c:
            android.support.v7.widget.RecyclerView$Recycler r0 = r7.mRecycler
            r0.offsetPositionRecordsForRemove(r8, r9, r10)
            r7.requestLayout()
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r3 = this;
            super.onAttachedToWindow()
            r0 = 0
            r3.mLayoutOrScrollCounter = r0
            r1 = 1
            r3.mIsAttached = r1
            boolean r2 = r3.mFirstLayoutComplete
            if (r2 == 0) goto L14
            boolean r2 = r3.isLayoutRequested()
            if (r2 != 0) goto L14
            goto L15
        L14:
            r1 = r0
        L15:
            r3.mFirstLayoutComplete = r1
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r3.mLayout
            if (r1 == 0) goto L1e
            r1.dispatchAttachedToWindow(r3)
        L1e:
            r3.mPostedAnimatorRunner = r0
            boolean r0 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
            if (r0 == 0) goto L65
            java.lang.ThreadLocal<android.support.v7.widget.GapWorker> r0 = android.support.v7.widget.GapWorker.sGapWorker
            java.lang.Object r0 = r0.get()
            android.support.v7.widget.GapWorker r0 = (android.support.v7.widget.GapWorker) r0
            r3.mGapWorker = r0
            if (r0 != 0) goto L60
            android.support.v7.widget.GapWorker r0 = new android.support.v7.widget.GapWorker
            r0.<init>()
            r3.mGapWorker = r0
            android.view.Display r0 = android.support.v4.view.ViewCompat.getDisplay(r3)
            r1 = 1114636288(0x42700000, float:60.0)
            boolean r2 = r3.isInEditMode()
            if (r2 != 0) goto L50
            if (r0 == 0) goto L50
            float r0 = r0.getRefreshRate()
            r2 = 1106247680(0x41f00000, float:30.0)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L50
            r1 = r0
        L50:
            android.support.v7.widget.GapWorker r0 = r3.mGapWorker
            r2 = 1315859240(0x4e6e6b28, float:1.0E9)
            float r2 = r2 / r1
            long r1 = (long) r2
            r0.mFrameIntervalNs = r1
            java.lang.ThreadLocal<android.support.v7.widget.GapWorker> r0 = android.support.v7.widget.GapWorker.sGapWorker
            android.support.v7.widget.GapWorker r1 = r3.mGapWorker
            r0.set(r1)
        L60:
            android.support.v7.widget.GapWorker r0 = r3.mGapWorker
            r0.add(r3)
        L65:
            return
    }

    public void onChildAttachedToWindow(android.view.View r1) {
            r0 = this;
            return
    }

    public void onChildDetachedFromWindow(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r2.mItemAnimator
            if (r0 == 0) goto La
            r0.endAnimations()
        La:
            r2.stopScroll()
            r0 = 0
            r2.mIsAttached = r0
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L19
            android.support.v7.widget.RecyclerView$Recycler r1 = r2.mRecycler
            r0.dispatchDetachedFromWindow(r2, r1)
        L19:
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mPendingAccessibilityImportanceChange
            r0.clear()
            java.lang.Runnable r0 = r2.mItemAnimatorRunner
            r2.removeCallbacks(r0)
            android.support.v7.widget.ViewInfoStore r0 = r2.mViewInfoStore
            r0.onDetach()
            boolean r0 = android.support.v7.widget.RecyclerView.ALLOW_THREAD_GAP_WORK
            if (r0 == 0) goto L36
            android.support.v7.widget.GapWorker r0 = r2.mGapWorker
            if (r0 == 0) goto L36
            r0.remove(r2)
            r0 = 0
            r2.mGapWorker = r0
        L36:
            return
    }

    @Override
    public void onDraw(android.graphics.Canvas r5) {
            r4 = this;
            super.onDraw(r5)
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r4.mItemDecorations
            int r0 = r0.size()
            r1 = 0
        La:
            if (r1 >= r0) goto L1c
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r2 = r4.mItemDecorations
            java.lang.Object r2 = r2.get(r1)
            android.support.v7.widget.RecyclerView$ItemDecoration r2 = (android.support.v7.widget.RecyclerView.ItemDecoration) r2
            android.support.v7.widget.RecyclerView$State r3 = r4.mState
            r2.onDraw(r5, r4, r3)
            int r1 = r1 + 1
            goto La
        L1c:
            return
    }

    void onEnterLayoutOrScroll() {
            r1 = this;
            int r0 = r1.mLayoutOrScrollCounter
            int r0 = r0 + 1
            r1.mLayoutOrScrollCounter = r0
            return
    }

    void onExitLayoutOrScroll() {
            r1 = this;
            r0 = 1
            r1.onExitLayoutOrScroll(r0)
            return
    }

    void onExitLayoutOrScroll(boolean r3) {
            r2 = this;
            int r0 = r2.mLayoutOrScrollCounter
            r1 = 1
            int r0 = r0 - r1
            r2.mLayoutOrScrollCounter = r0
            if (r0 >= r1) goto L13
            r0 = 0
            r2.mLayoutOrScrollCounter = r0
            if (r3 == 0) goto L13
            r2.dispatchContentChangedIfNecessary()
            r2.dispatchPendingImportantForAccessibilityChanges()
        L13:
            return
    }

    @Override
    public boolean onGenericMotionEvent(android.view.MotionEvent r6) {
            r5 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r5.mLayout
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r5.mLayoutFrozen
            if (r0 == 0) goto Lb
            return r1
        Lb:
            int r0 = r6.getAction()
            r2 = 8
            if (r0 != r2) goto L77
            int r0 = r6.getSource()
            r0 = r0 & 2
            r2 = 0
            if (r0 == 0) goto L3e
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r5.mLayout
            boolean r0 = r0.canScrollVertically()
            if (r0 == 0) goto L2c
            r0 = 9
            float r0 = r6.getAxisValue(r0)
            float r0 = -r0
            goto L2d
        L2c:
            r0 = r2
        L2d:
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r5.mLayout
            boolean r3 = r3.canScrollHorizontally()
            if (r3 == 0) goto L3c
            r3 = 10
            float r3 = r6.getAxisValue(r3)
            goto L64
        L3c:
            r3 = r2
            goto L64
        L3e:
            int r0 = r6.getSource()
            r3 = 4194304(0x400000, float:5.877472E-39)
            r0 = r0 & r3
            if (r0 == 0) goto L62
            r0 = 26
            float r0 = r6.getAxisValue(r0)
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r5.mLayout
            boolean r3 = r3.canScrollVertically()
            if (r3 == 0) goto L57
            float r0 = -r0
            goto L3c
        L57:
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r5.mLayout
            boolean r3 = r3.canScrollHorizontally()
            if (r3 == 0) goto L62
            r3 = r0
            r0 = r2
            goto L64
        L62:
            r0 = r2
            r3 = r0
        L64:
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L6c
            int r2 = (r3 > r2 ? 1 : (r3 == r2 ? 0 : -1))
            if (r2 == 0) goto L77
        L6c:
            float r2 = r5.mScaledHorizontalScrollFactor
            float r3 = r3 * r2
            int r2 = (int) r3
            float r3 = r5.mScaledVerticalScrollFactor
            float r0 = r0 * r3
            int r0 = (int) r0
            r5.scrollByInternal(r2, r0, r6)
        L77:
            return r1
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r9) {
            r8 = this;
            boolean r0 = r8.mLayoutFrozen
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            boolean r0 = r8.dispatchOnItemTouchIntercept(r9)
            r2 = 1
            if (r0 == 0) goto L11
            r8.cancelTouch()
            return r2
        L11:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r8.mLayout
            if (r0 != 0) goto L16
            return r1
        L16:
            boolean r0 = r0.canScrollHorizontally()
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r8.mLayout
            boolean r3 = r3.canScrollVertically()
            android.view.VelocityTracker r4 = r8.mVelocityTracker
            if (r4 != 0) goto L2a
            android.view.VelocityTracker r4 = android.view.VelocityTracker.obtain()
            r8.mVelocityTracker = r4
        L2a:
            android.view.VelocityTracker r4 = r8.mVelocityTracker
            r4.addMovement(r9)
            int r4 = r9.getActionMasked()
            int r5 = r9.getActionIndex()
            r6 = 2
            r7 = 1056964608(0x3f000000, float:0.5)
            if (r4 == 0) goto Lda
            if (r4 == r2) goto Ld1
            if (r4 == r6) goto L71
            r0 = 3
            if (r4 == r0) goto L6c
            r0 = 5
            if (r4 == r0) goto L50
            r0 = 6
            if (r4 == r0) goto L4b
            goto L11a
        L4b:
            r8.onPointerUp(r9)
            goto L11a
        L50:
            int r0 = r9.getPointerId(r5)
            r8.mScrollPointerId = r0
            float r0 = r9.getX(r5)
            float r0 = r0 + r7
            int r0 = (int) r0
            r8.mLastTouchX = r0
            r8.mInitialTouchX = r0
            float r9 = r9.getY(r5)
            float r9 = r9 + r7
            int r9 = (int) r9
            r8.mLastTouchY = r9
            r8.mInitialTouchY = r9
            goto L11a
        L6c:
            r8.cancelTouch()
            goto L11a
        L71:
            int r4 = r8.mScrollPointerId
            int r4 = r9.findPointerIndex(r4)
            if (r4 >= 0) goto L97
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Error processing scroll; pointer index for id "
            r9.append(r0)
            int r0 = r8.mScrollPointerId
            r9.append(r0)
            java.lang.String r0 = " not found. Did any MotionEvents get skipped?"
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "RecyclerView"
            android.util.Log.e(r0, r9)
            return r1
        L97:
            float r5 = r9.getX(r4)
            float r5 = r5 + r7
            int r5 = (int) r5
            float r9 = r9.getY(r4)
            float r9 = r9 + r7
            int r9 = (int) r9
            int r4 = r8.mScrollState
            if (r4 == r2) goto L11a
            int r4 = r8.mInitialTouchX
            int r4 = r5 - r4
            int r6 = r8.mInitialTouchY
            int r6 = r9 - r6
            if (r0 == 0) goto Lbd
            int r0 = java.lang.Math.abs(r4)
            int r4 = r8.mTouchSlop
            if (r0 <= r4) goto Lbd
            r8.mLastTouchX = r5
            r0 = r2
            goto Lbe
        Lbd:
            r0 = r1
        Lbe:
            if (r3 == 0) goto Lcb
            int r3 = java.lang.Math.abs(r6)
            int r4 = r8.mTouchSlop
            if (r3 <= r4) goto Lcb
            r8.mLastTouchY = r9
            r0 = r2
        Lcb:
            if (r0 == 0) goto L11a
            r8.setScrollState(r2)
            goto L11a
        Ld1:
            android.view.VelocityTracker r9 = r8.mVelocityTracker
            r9.clear()
            r8.stopNestedScroll(r1)
            goto L11a
        Lda:
            boolean r4 = r8.mIgnoreMotionEventTillDown
            if (r4 == 0) goto Le0
            r8.mIgnoreMotionEventTillDown = r1
        Le0:
            int r4 = r9.getPointerId(r1)
            r8.mScrollPointerId = r4
            float r4 = r9.getX()
            float r4 = r4 + r7
            int r4 = (int) r4
            r8.mLastTouchX = r4
            r8.mInitialTouchX = r4
            float r9 = r9.getY()
            float r9 = r9 + r7
            int r9 = (int) r9
            r8.mLastTouchY = r9
            r8.mInitialTouchY = r9
            int r9 = r8.mScrollState
            if (r9 != r6) goto L108
            android.view.ViewParent r9 = r8.getParent()
            r9.requestDisallowInterceptTouchEvent(r2)
            r8.setScrollState(r2)
        L108:
            int[] r9 = r8.mNestedOffsets
            r9[r2] = r1
            r9[r1] = r1
            if (r0 == 0) goto L112
            r9 = r2
            goto L113
        L112:
            r9 = r1
        L113:
            if (r3 == 0) goto L117
            r9 = r9 | 2
        L117:
            r8.startNestedScroll(r9, r1)
        L11a:
            int r9 = r8.mScrollState
            if (r9 != r2) goto L11f
            r1 = r2
        L11f:
            return r1
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            java.lang.String r1 = "RV OnLayout"
            android.support.v4.os.TraceCompat.beginSection(r1)
            r0.dispatchLayout()
            android.support.v4.os.TraceCompat.endSection()
            r1 = 1
            r0.mFirstLayoutComplete = r1
            return
    }

    @Override
    protected void onMeasure(int r8, int r9) {
            r7 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            if (r0 != 0) goto L8
            r7.defaultOnMeasure(r8, r9)
            return
        L8:
            boolean r0 = r0.isAutoMeasureEnabled()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L74
            int r0 = android.view.View.MeasureSpec.getMode(r8)
            int r3 = android.view.View.MeasureSpec.getMode(r9)
            android.support.v7.widget.RecyclerView$LayoutManager r4 = r7.mLayout
            android.support.v7.widget.RecyclerView$Recycler r5 = r7.mRecycler
            android.support.v7.widget.RecyclerView$State r6 = r7.mState
            r4.onMeasure(r5, r6, r8, r9)
            r4 = 1073741824(0x40000000, float:2.0)
            if (r0 != r4) goto L28
            if (r3 != r4) goto L28
            r2 = r1
        L28:
            if (r2 != 0) goto L73
            android.support.v7.widget.RecyclerView$Adapter r0 = r7.mAdapter
            if (r0 != 0) goto L2f
            goto L73
        L2f:
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            int r0 = r0.mLayoutStep
            if (r0 != r1) goto L38
            r7.dispatchLayoutStep1()
        L38:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            r0.setMeasureSpecs(r8, r9)
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            r0.mIsMeasuring = r1
            r7.dispatchLayoutStep2()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            r0.setMeasuredDimensionFromChildren(r8, r9)
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            boolean r0 = r0.shouldMeasureTwice()
            if (r0 == 0) goto Le2
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            int r2 = r7.getMeasuredWidth()
            int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r2, r4)
            int r3 = r7.getMeasuredHeight()
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r4)
            r0.setMeasureSpecs(r2, r3)
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            r0.mIsMeasuring = r1
            r7.dispatchLayoutStep2()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            r0.setMeasuredDimensionFromChildren(r8, r9)
            goto Le2
        L73:
            return
        L74:
            boolean r0 = r7.mHasFixedSize
            if (r0 == 0) goto L82
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r7.mRecycler
            android.support.v7.widget.RecyclerView$State r2 = r7.mState
            r0.onMeasure(r1, r2, r8, r9)
            return
        L82:
            boolean r0 = r7.mAdapterUpdateDuringMeasure
            if (r0 == 0) goto Lac
            r7.startInterceptRequestLayout()
            r7.onEnterLayoutOrScroll()
            r7.processAdapterUpdatesAndSetAnimationFlags()
            r7.onExitLayoutOrScroll()
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            boolean r0 = r0.mRunPredictiveAnimations
            if (r0 == 0) goto L9d
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            r0.mInPreLayout = r1
            goto La6
        L9d:
            android.support.v7.widget.AdapterHelper r0 = r7.mAdapterHelper
            r0.consumeUpdatesInOnePass()
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            r0.mInPreLayout = r2
        La6:
            r7.mAdapterUpdateDuringMeasure = r2
            r7.stopInterceptRequestLayout(r2)
            goto Lbe
        Lac:
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            boolean r0 = r0.mRunPredictiveAnimations
            if (r0 == 0) goto Lbe
            int r8 = r7.getMeasuredWidth()
            int r9 = r7.getMeasuredHeight()
            r7.setMeasuredDimension(r8, r9)
            return
        Lbe:
            android.support.v7.widget.RecyclerView$Adapter r0 = r7.mAdapter
            if (r0 == 0) goto Lcb
            android.support.v7.widget.RecyclerView$State r1 = r7.mState
            int r0 = r0.getItemCount()
            r1.mItemCount = r0
            goto Lcf
        Lcb:
            android.support.v7.widget.RecyclerView$State r0 = r7.mState
            r0.mItemCount = r2
        Lcf:
            r7.startInterceptRequestLayout()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r7.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r7.mRecycler
            android.support.v7.widget.RecyclerView$State r3 = r7.mState
            r0.onMeasure(r1, r3, r8, r9)
            r7.stopInterceptRequestLayout(r2)
            android.support.v7.widget.RecyclerView$State r8 = r7.mState
            r8.mInPreLayout = r2
        Le2:
            return
    }

    @Override
    protected boolean onRequestFocusInDescendants(int r2, android.graphics.Rect r3) {
            r1 = this;
            boolean r0 = r1.isComputingLayout()
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            boolean r2 = super.onRequestFocusInDescendants(r2, r3)
            return r2
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.RecyclerView.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.v7.widget.RecyclerView$SavedState r2 = (android.support.v7.widget.RecyclerView.SavedState) r2
            r1.mPendingSavedState = r2
            android.os.Parcelable r2 = r2.getSuperState()
            super.onRestoreInstanceState(r2)
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r1.mLayout
            if (r2 == 0) goto L26
            android.support.v7.widget.RecyclerView$SavedState r2 = r1.mPendingSavedState
            android.os.Parcelable r2 = r2.mLayoutState
            if (r2 == 0) goto L26
            android.support.v7.widget.RecyclerView$LayoutManager r2 = r1.mLayout
            android.support.v7.widget.RecyclerView$SavedState r0 = r1.mPendingSavedState
            android.os.Parcelable r0 = r0.mLayoutState
            r2.onRestoreInstanceState(r0)
        L26:
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.support.v7.widget.RecyclerView$SavedState r0 = new android.support.v7.widget.RecyclerView$SavedState
            android.os.Parcelable r1 = super.onSaveInstanceState()
            r0.<init>(r1)
            android.support.v7.widget.RecyclerView$SavedState r1 = r2.mPendingSavedState
            if (r1 == 0) goto L11
            r0.copyFrom(r1)
            goto L1f
        L11:
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r2.mLayout
            if (r1 == 0) goto L1c
            android.os.Parcelable r1 = r1.onSaveInstanceState()
            r0.mLayoutState = r1
            goto L1f
        L1c:
            r1 = 0
            r0.mLayoutState = r1
        L1f:
            return r0
    }

    public void onScrollStateChanged(int r1) {
            r0 = this;
            return
    }

    public void onScrolled(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            if (r1 != r3) goto L7
            if (r2 == r4) goto La
        L7:
            r0.invalidateGlows()
        La:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r15) {
            r14 = this;
            boolean r0 = r14.mLayoutFrozen
            r1 = 0
            if (r0 != 0) goto L1c8
            boolean r0 = r14.mIgnoreMotionEventTillDown
            if (r0 == 0) goto Lb
            goto L1c8
        Lb:
            boolean r0 = r14.dispatchOnItemTouch(r15)
            r2 = 1
            if (r0 == 0) goto L16
            r14.cancelTouch()
            return r2
        L16:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r14.mLayout
            if (r0 != 0) goto L1b
            return r1
        L1b:
            boolean r0 = r0.canScrollHorizontally()
            android.support.v7.widget.RecyclerView$LayoutManager r3 = r14.mLayout
            boolean r3 = r3.canScrollVertically()
            android.view.VelocityTracker r4 = r14.mVelocityTracker
            if (r4 != 0) goto L2f
            android.view.VelocityTracker r4 = android.view.VelocityTracker.obtain()
            r14.mVelocityTracker = r4
        L2f:
            android.view.MotionEvent r4 = android.view.MotionEvent.obtain(r15)
            int r5 = r15.getActionMasked()
            int r6 = r15.getActionIndex()
            if (r5 != 0) goto L43
            int[] r7 = r14.mNestedOffsets
            r7[r2] = r1
            r7[r1] = r1
        L43:
            int[] r7 = r14.mNestedOffsets
            r8 = r7[r1]
            float r8 = (float) r8
            r7 = r7[r2]
            float r7 = (float) r7
            r4.offsetLocation(r8, r7)
            r7 = 1056964608(0x3f000000, float:0.5)
            if (r5 == 0) goto L197
            if (r5 == r2) goto L155
            r8 = 2
            if (r5 == r8) goto L88
            r0 = 3
            if (r5 == r0) goto L83
            r0 = 5
            if (r5 == r0) goto L67
            r0 = 6
            if (r5 == r0) goto L62
            goto L1bd
        L62:
            r14.onPointerUp(r15)
            goto L1bd
        L67:
            int r0 = r15.getPointerId(r6)
            r14.mScrollPointerId = r0
            float r0 = r15.getX(r6)
            float r0 = r0 + r7
            int r0 = (int) r0
            r14.mLastTouchX = r0
            r14.mInitialTouchX = r0
            float r15 = r15.getY(r6)
            float r15 = r15 + r7
            int r15 = (int) r15
            r14.mLastTouchY = r15
            r14.mInitialTouchY = r15
            goto L1bd
        L83:
            r14.cancelTouch()
            goto L1bd
        L88:
            int r5 = r14.mScrollPointerId
            int r5 = r15.findPointerIndex(r5)
            if (r5 >= 0) goto Lae
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "Error processing scroll; pointer index for id "
            r15.append(r0)
            int r0 = r14.mScrollPointerId
            r15.append(r0)
            java.lang.String r0 = " not found. Did any MotionEvents get skipped?"
            r15.append(r0)
            java.lang.String r15 = r15.toString()
            java.lang.String r0 = "RecyclerView"
            android.util.Log.e(r0, r15)
            return r1
        Lae:
            float r6 = r15.getX(r5)
            float r6 = r6 + r7
            int r6 = (int) r6
            float r15 = r15.getY(r5)
            float r15 = r15 + r7
            int r15 = (int) r15
            int r5 = r14.mLastTouchX
            int r5 = r5 - r6
            int r7 = r14.mLastTouchY
            int r13 = r7 - r15
            int[] r10 = r14.mScrollConsumed
            int[] r11 = r14.mScrollOffset
            r12 = 0
            r7 = r14
            r8 = r5
            r9 = r13
            boolean r7 = r7.dispatchNestedPreScroll(r8, r9, r10, r11, r12)
            if (r7 == 0) goto Lf4
            int[] r7 = r14.mScrollConsumed
            r8 = r7[r1]
            int r5 = r5 - r8
            r7 = r7[r2]
            int r13 = r13 - r7
            int[] r7 = r14.mScrollOffset
            r8 = r7[r1]
            float r8 = (float) r8
            r7 = r7[r2]
            float r7 = (float) r7
            r4.offsetLocation(r8, r7)
            int[] r7 = r14.mNestedOffsets
            r8 = r7[r1]
            int[] r9 = r14.mScrollOffset
            r10 = r9[r1]
            int r8 = r8 + r10
            r7[r1] = r8
            r8 = r7[r2]
            r9 = r9[r2]
            int r8 = r8 + r9
            r7[r2] = r8
        Lf4:
            int r7 = r14.mScrollState
            if (r7 == r2) goto L11f
            if (r0 == 0) goto L109
            int r7 = java.lang.Math.abs(r5)
            int r8 = r14.mTouchSlop
            if (r7 <= r8) goto L109
            if (r5 <= 0) goto L106
            int r5 = r5 - r8
            goto L107
        L106:
            int r5 = r5 + r8
        L107:
            r7 = r2
            goto L10a
        L109:
            r7 = r1
        L10a:
            if (r3 == 0) goto L11a
            int r8 = java.lang.Math.abs(r13)
            int r9 = r14.mTouchSlop
            if (r8 <= r9) goto L11a
            if (r13 <= 0) goto L118
            int r13 = r13 - r9
            goto L119
        L118:
            int r13 = r13 + r9
        L119:
            r7 = r2
        L11a:
            if (r7 == 0) goto L11f
            r14.setScrollState(r2)
        L11f:
            int r7 = r14.mScrollState
            if (r7 != r2) goto L1bd
            int[] r7 = r14.mScrollOffset
            r8 = r7[r1]
            int r6 = r6 - r8
            r14.mLastTouchX = r6
            r6 = r7[r2]
            int r15 = r15 - r6
            r14.mLastTouchY = r15
            if (r0 == 0) goto L133
            r15 = r5
            goto L134
        L133:
            r15 = r1
        L134:
            if (r3 == 0) goto L138
            r0 = r13
            goto L139
        L138:
            r0 = r1
        L139:
            boolean r15 = r14.scrollByInternal(r15, r0, r4)
            if (r15 == 0) goto L146
            android.view.ViewParent r15 = r14.getParent()
            r15.requestDisallowInterceptTouchEvent(r2)
        L146:
            android.support.v7.widget.GapWorker r15 = r14.mGapWorker
            if (r15 == 0) goto L1bd
            if (r5 != 0) goto L14e
            if (r13 == 0) goto L1bd
        L14e:
            android.support.v7.widget.GapWorker r15 = r14.mGapWorker
            r15.postFromTraversal(r14, r5, r13)
            goto L1bd
        L155:
            android.view.VelocityTracker r15 = r14.mVelocityTracker
            r15.addMovement(r4)
            android.view.VelocityTracker r15 = r14.mVelocityTracker
            r5 = 1000(0x3e8, float:1.401E-42)
            int r6 = r14.mMaxFlingVelocity
            float r6 = (float) r6
            r15.computeCurrentVelocity(r5, r6)
            r15 = 0
            if (r0 == 0) goto L171
            android.view.VelocityTracker r0 = r14.mVelocityTracker
            int r5 = r14.mScrollPointerId
            float r0 = r0.getXVelocity(r5)
            float r0 = -r0
            goto L172
        L171:
            r0 = r15
        L172:
            if (r3 == 0) goto L17e
            android.view.VelocityTracker r3 = r14.mVelocityTracker
            int r5 = r14.mScrollPointerId
            float r3 = r3.getYVelocity(r5)
            float r3 = -r3
            goto L17f
        L17e:
            r3 = r15
        L17f:
            int r5 = (r0 > r15 ? 1 : (r0 == r15 ? 0 : -1))
            if (r5 != 0) goto L187
            int r15 = (r3 > r15 ? 1 : (r3 == r15 ? 0 : -1))
            if (r15 == 0) goto L18f
        L187:
            int r15 = (int) r0
            int r0 = (int) r3
            boolean r15 = r14.fling(r15, r0)
            if (r15 != 0) goto L192
        L18f:
            r14.setScrollState(r1)
        L192:
            r14.resetTouch()
            r1 = r2
            goto L1bd
        L197:
            int r5 = r15.getPointerId(r1)
            r14.mScrollPointerId = r5
            float r5 = r15.getX()
            float r5 = r5 + r7
            int r5 = (int) r5
            r14.mLastTouchX = r5
            r14.mInitialTouchX = r5
            float r15 = r15.getY()
            float r15 = r15 + r7
            int r15 = (int) r15
            r14.mLastTouchY = r15
            r14.mInitialTouchY = r15
            if (r0 == 0) goto L1b5
            r15 = r2
            goto L1b6
        L1b5:
            r15 = r1
        L1b6:
            if (r3 == 0) goto L1ba
            r15 = r15 | 2
        L1ba:
            r14.startNestedScroll(r15, r1)
        L1bd:
            if (r1 != 0) goto L1c4
            android.view.VelocityTracker r15 = r14.mVelocityTracker
            r15.addMovement(r4)
        L1c4:
            r4.recycle()
            return r2
        L1c8:
            return r1
    }

    void postAnimationRunner() {
            r1 = this;
            boolean r0 = r1.mPostedAnimatorRunner
            if (r0 != 0) goto L10
            boolean r0 = r1.mIsAttached
            if (r0 == 0) goto L10
            java.lang.Runnable r0 = r1.mItemAnimatorRunner
            android.support.v4.view.ViewCompat.postOnAnimation(r1, r0)
            r0 = 1
            r1.mPostedAnimatorRunner = r0
        L10:
            return
    }

    void processDataSetCompletelyChanged(boolean r2) {
            r1 = this;
            boolean r0 = r1.mDispatchItemsChangedEvent
            r2 = r2 | r0
            r1.mDispatchItemsChangedEvent = r2
            r2 = 1
            r1.mDataSetHasChangedAfterLayout = r2
            r1.markKnownViewsInvalid()
            return
    }

    void recordAnimationInfoIfBouncedHiddenView(android.support.v7.widget.RecyclerView.ViewHolder r4, android.support.v7.widget.RecyclerView.ItemAnimator.ItemHolderInfo r5) {
            r3 = this;
            r0 = 0
            r1 = 8192(0x2000, float:1.148E-41)
            r4.setFlags(r0, r1)
            android.support.v7.widget.RecyclerView$State r0 = r3.mState
            boolean r0 = r0.mTrackOldChangeHolders
            if (r0 == 0) goto L27
            boolean r0 = r4.isUpdated()
            if (r0 == 0) goto L27
            boolean r0 = r4.isRemoved()
            if (r0 != 0) goto L27
            boolean r0 = r4.shouldIgnore()
            if (r0 != 0) goto L27
            long r0 = r3.getChangedHolderKey(r4)
            android.support.v7.widget.ViewInfoStore r2 = r3.mViewInfoStore
            r2.addToOldChangeHolders(r0, r4)
        L27:
            android.support.v7.widget.ViewInfoStore r0 = r3.mViewInfoStore
            r0.addToPreLayout(r4, r5)
            return
    }

    void removeAndRecycleViews() {
            r2 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r2.mItemAnimator
            if (r0 == 0) goto L7
            r0.endAnimations()
        L7:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L17
            android.support.v7.widget.RecyclerView$Recycler r1 = r2.mRecycler
            r0.removeAndRecycleAllViews(r1)
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r2.mRecycler
            r0.removeAndRecycleScrapInt(r1)
        L17:
            android.support.v7.widget.RecyclerView$Recycler r0 = r2.mRecycler
            r0.clear()
            return
    }

    boolean removeAnimatingView(android.view.View r3) {
            r2 = this;
            r2.startInterceptRequestLayout()
            android.support.v7.widget.ChildHelper r0 = r2.mChildHelper
            boolean r0 = r0.removeViewIfHidden(r3)
            if (r0 == 0) goto L19
            android.support.v7.widget.RecyclerView$ViewHolder r3 = getChildViewHolderInt(r3)
            android.support.v7.widget.RecyclerView$Recycler r1 = r2.mRecycler
            r1.unscrapView(r3)
            android.support.v7.widget.RecyclerView$Recycler r1 = r2.mRecycler
            r1.recycleViewHolderInternal(r3)
        L19:
            r3 = r0 ^ 1
            r2.stopInterceptRequestLayout(r3)
            return r0
    }

    @Override
    protected void removeDetachedView(android.view.View r3, boolean r4) {
            r2 = this;
            android.support.v7.widget.RecyclerView$ViewHolder r0 = getChildViewHolderInt(r3)
            if (r0 == 0) goto L35
            boolean r1 = r0.isTmpDetached()
            if (r1 == 0) goto L10
            r0.clearTmpDetachFlag()
            goto L35
        L10:
            boolean r1 = r0.shouldIgnore()
            if (r1 == 0) goto L17
            goto L35
        L17:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "Called removeDetachedView with a view which is not flagged as tmp detached."
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = r2.exceptionLabel()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L35:
            r3.clearAnimation()
            r2.dispatchChildDetached(r3)
            super.removeDetachedView(r3, r4)
            return
    }

    public void removeItemDecoration(android.support.v7.widget.RecyclerView.ItemDecoration r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 == 0) goto L9
            java.lang.String r1 = "Cannot remove item decoration during a scroll  or layout"
            r0.assertNotInLayoutOrScroll(r1)
        L9:
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r2.mItemDecorations
            r0.remove(r3)
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r3 = r2.mItemDecorations
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L23
            int r3 = r2.getOverScrollMode()
            r0 = 2
            if (r3 != r0) goto L1f
            r3 = 1
            goto L20
        L1f:
            r3 = 0
        L20:
            r2.setWillNotDraw(r3)
        L23:
            r2.markItemDecorInsetsDirty()
            r2.requestLayout()
            return
    }

    public void removeItemDecorationAt(int r4) {
            r3 = this;
            int r0 = r3.getItemDecorationCount()
            if (r4 < 0) goto L10
            if (r4 >= r0) goto L10
            android.support.v7.widget.RecyclerView$ItemDecoration r4 = r3.getItemDecorationAt(r4)
            r3.removeItemDecoration(r4)
            return
        L10:
            java.lang.IndexOutOfBoundsException r1 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = " is an invalid index for size "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            throw r1
    }

    public void removeOnChildAttachStateChangeListener(android.support.v7.widget.RecyclerView.OnChildAttachStateChangeListener r2) {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnChildAttachStateChangeListener> r0 = r1.mOnChildAttachStateListeners
            if (r0 != 0) goto L5
            return
        L5:
            r0.remove(r2)
            return
    }

    public void removeOnItemTouchListener(android.support.v7.widget.RecyclerView.OnItemTouchListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r0 = r1.mOnItemTouchListeners
            r0.remove(r2)
            android.support.v7.widget.RecyclerView$OnItemTouchListener r0 = r1.mActiveOnItemTouchListener
            if (r0 != r2) goto Lc
            r2 = 0
            r1.mActiveOnItemTouchListener = r2
        Lc:
            return
    }

    public void removeOnScrollListener(android.support.v7.widget.RecyclerView.OnScrollListener r2) {
            r1 = this;
            java.util.List<android.support.v7.widget.RecyclerView$OnScrollListener> r0 = r1.mScrollListeners
            if (r0 == 0) goto L7
            r0.remove(r2)
        L7:
            return
    }

    void repositionShadowingViews() {
            r7 = this;
            android.support.v7.widget.ChildHelper r0 = r7.mChildHelper
            int r0 = r0.getChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L41
            android.support.v7.widget.ChildHelper r2 = r7.mChildHelper
            android.view.View r2 = r2.getChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r3 = r7.getChildViewHolder(r2)
            if (r3 == 0) goto L3e
            android.support.v7.widget.RecyclerView$ViewHolder r4 = r3.mShadowingHolder
            if (r4 == 0) goto L3e
            android.support.v7.widget.RecyclerView$ViewHolder r3 = r3.mShadowingHolder
            android.view.View r3 = r3.itemView
            int r4 = r2.getLeft()
            int r2 = r2.getTop()
            int r5 = r3.getLeft()
            if (r4 != r5) goto L31
            int r5 = r3.getTop()
            if (r2 == r5) goto L3e
        L31:
            int r5 = r3.getWidth()
            int r5 = r5 + r4
            int r6 = r3.getHeight()
            int r6 = r6 + r2
            r3.layout(r4, r2, r5, r6)
        L3e:
            int r1 = r1 + 1
            goto L7
        L41:
            return
    }

    @Override
    public void requestChildFocus(android.view.View r3, android.view.View r4) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            boolean r0 = r0.onRequestChildFocus(r2, r1, r3, r4)
            if (r0 != 0) goto Lf
            if (r4 == 0) goto Lf
            r2.requestChildOnScreen(r3, r4)
        Lf:
            super.requestChildFocus(r3, r4)
            return
    }

    @Override
    public boolean requestChildRectangleOnScreen(android.view.View r2, android.graphics.Rect r3, boolean r4) {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            boolean r2 = r0.requestChildRectangleOnScreen(r1, r2, r3, r4)
            return r2
    }

    @Override
    public void requestDisallowInterceptTouchEvent(boolean r4) {
            r3 = this;
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r0 = r3.mOnItemTouchListeners
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L17
            java.util.ArrayList<android.support.v7.widget.RecyclerView$OnItemTouchListener> r2 = r3.mOnItemTouchListeners
            java.lang.Object r2 = r2.get(r1)
            android.support.v7.widget.RecyclerView$OnItemTouchListener r2 = (android.support.v7.widget.RecyclerView.OnItemTouchListener) r2
            r2.onRequestDisallowInterceptTouchEvent(r4)
            int r1 = r1 + 1
            goto L7
        L17:
            super.requestDisallowInterceptTouchEvent(r4)
            return
    }

    @Override
    public void requestLayout() {
            r1 = this;
            int r0 = r1.mInterceptRequestLayoutDepth
            if (r0 != 0) goto Lc
            boolean r0 = r1.mLayoutFrozen
            if (r0 != 0) goto Lc
            super.requestLayout()
            goto Lf
        Lc:
            r0 = 1
            r1.mLayoutWasDefered = r0
        Lf:
            return
    }

    void saveOldPositions() {
            r4 = this;
            android.support.v7.widget.ChildHelper r0 = r4.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1f
            android.support.v7.widget.ChildHelper r2 = r4.mChildHelper
            android.view.View r2 = r2.getUnfilteredChildAt(r1)
            android.support.v7.widget.RecyclerView$ViewHolder r2 = getChildViewHolderInt(r2)
            boolean r3 = r2.shouldIgnore()
            if (r3 != 0) goto L1c
            r2.saveOldPosition()
        L1c:
            int r1 = r1 + 1
            goto L7
        L1f:
            return
    }

    @Override
    public void scrollBy(int r4, int r5) {
            r3 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            if (r0 != 0) goto Lc
            java.lang.String r4 = "RecyclerView"
            java.lang.String r5 = "Cannot scroll without a LayoutManager set. Call setLayoutManager with a non-null argument."
            android.util.Log.e(r4, r5)
            return
        Lc:
            boolean r1 = r3.mLayoutFrozen
            if (r1 == 0) goto L11
            return
        L11:
            boolean r0 = r0.canScrollHorizontally()
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r3.mLayout
            boolean r1 = r1.canScrollVertically()
            if (r0 != 0) goto L1f
            if (r1 == 0) goto L2c
        L1f:
            r2 = 0
            if (r0 == 0) goto L23
            goto L24
        L23:
            r4 = r2
        L24:
            if (r1 == 0) goto L27
            goto L28
        L27:
            r5 = r2
        L28:
            r0 = 0
            r3.scrollByInternal(r4, r5, r0)
        L2c:
            return
    }

    boolean scrollByInternal(int r19, int r20, android.view.MotionEvent r21) {
            r18 = this;
            r7 = r18
            r8 = r19
            r9 = r20
            r10 = r21
            r18.consumePendingUpdateOperations()
            android.support.v7.widget.RecyclerView$Adapter r0 = r7.mAdapter
            r11 = 1
            r12 = 0
            if (r0 == 0) goto L25
            int[] r0 = r7.mScrollStepConsumed
            r7.scrollStep(r8, r9, r0)
            int[] r0 = r7.mScrollStepConsumed
            r1 = r0[r12]
            r0 = r0[r11]
            int r2 = r8 - r1
            int r3 = r9 - r0
            r13 = r0
            r14 = r1
            r15 = r2
            r6 = r3
            goto L29
        L25:
            r6 = r12
            r13 = r6
            r14 = r13
            r15 = r14
        L29:
            java.util.ArrayList<android.support.v7.widget.RecyclerView$ItemDecoration> r0 = r7.mItemDecorations
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L34
            r18.invalidate()
        L34:
            int[] r5 = r7.mScrollOffset
            r16 = 0
            r0 = r18
            r1 = r14
            r2 = r13
            r3 = r15
            r4 = r6
            r17 = r6
            r6 = r16
            boolean r0 = r0.dispatchNestedScroll(r1, r2, r3, r4, r5, r6)
            if (r0 == 0) goto L76
            int r0 = r7.mLastTouchX
            int[] r1 = r7.mScrollOffset
            r2 = r1[r12]
            int r0 = r0 - r2
            r7.mLastTouchX = r0
            int r0 = r7.mLastTouchY
            r2 = r1[r11]
            int r0 = r0 - r2
            r7.mLastTouchY = r0
            if (r10 == 0) goto L63
            r0 = r1[r12]
            float r0 = (float) r0
            r1 = r1[r11]
            float r1 = (float) r1
            r10.offsetLocation(r0, r1)
        L63:
            int[] r0 = r7.mNestedOffsets
            r1 = r0[r12]
            int[] r2 = r7.mScrollOffset
            r3 = r2[r12]
            int r1 = r1 + r3
            r0[r12] = r1
            r1 = r0[r11]
            r2 = r2[r11]
            int r1 = r1 + r2
            r0[r11] = r1
            goto L99
        L76:
            int r0 = r18.getOverScrollMode()
            r1 = 2
            if (r0 == r1) goto L99
            if (r10 == 0) goto L96
            r0 = 8194(0x2002, float:1.1482E-41)
            boolean r0 = android.support.v4.view.MotionEventCompat.isFromSource(r10, r0)
            if (r0 != 0) goto L96
            float r0 = r21.getX()
            float r1 = (float) r15
            float r2 = r21.getY()
            r3 = r17
            float r3 = (float) r3
            r7.pullGlows(r0, r1, r2, r3)
        L96:
            r18.considerReleasingGlowsOnScroll(r19, r20)
        L99:
            if (r14 != 0) goto L9d
            if (r13 == 0) goto La0
        L9d:
            r7.dispatchOnScrolled(r14, r13)
        La0:
            boolean r0 = r18.awakenScrollBars()
            if (r0 != 0) goto La9
            r18.invalidate()
        La9:
            if (r14 != 0) goto Laf
            if (r13 == 0) goto Lae
            goto Laf
        Lae:
            r11 = r12
        Laf:
            return r11
    }

    void scrollStep(int r5, int r6, int[] r7) {
            r4 = this;
            r4.startInterceptRequestLayout()
            r4.onEnterLayoutOrScroll()
            java.lang.String r0 = "RV Scroll"
            android.support.v4.os.TraceCompat.beginSection(r0)
            android.support.v7.widget.RecyclerView$State r0 = r4.mState
            r4.fillRemainingScrollValues(r0)
            r0 = 0
            if (r5 == 0) goto L1e
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r4.mLayout
            android.support.v7.widget.RecyclerView$Recycler r2 = r4.mRecycler
            android.support.v7.widget.RecyclerView$State r3 = r4.mState
            int r5 = r1.scrollHorizontallyBy(r5, r2, r3)
            goto L1f
        L1e:
            r5 = r0
        L1f:
            if (r6 == 0) goto L2c
            android.support.v7.widget.RecyclerView$LayoutManager r1 = r4.mLayout
            android.support.v7.widget.RecyclerView$Recycler r2 = r4.mRecycler
            android.support.v7.widget.RecyclerView$State r3 = r4.mState
            int r6 = r1.scrollVerticallyBy(r6, r2, r3)
            goto L2d
        L2c:
            r6 = r0
        L2d:
            android.support.v4.os.TraceCompat.endSection()
            r4.repositionShadowingViews()
            r4.onExitLayoutOrScroll()
            r4.stopInterceptRequestLayout(r0)
            if (r7 == 0) goto L40
            r7[r0] = r5
            r5 = 1
            r7[r5] = r6
        L40:
            return
    }

    @Override
    public void scrollTo(int r1, int r2) {
            r0 = this;
            java.lang.String r1 = "RecyclerView"
            java.lang.String r2 = "RecyclerView does not support scrolling to an absolute position. Use scrollToPosition instead"
            android.util.Log.w(r1, r2)
            return
    }

    public void scrollToPosition(int r2) {
            r1 = this;
            boolean r0 = r1.mLayoutFrozen
            if (r0 == 0) goto L5
            return
        L5:
            r1.stopScroll()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayout
            if (r0 != 0) goto L14
            java.lang.String r2 = "RecyclerView"
            java.lang.String r0 = "Cannot scroll to position a LayoutManager set. Call setLayoutManager with a non-null argument."
            android.util.Log.e(r2, r0)
            return
        L14:
            r0.scrollToPosition(r2)
            r1.awakenScrollBars()
            return
    }

    @Override
    public void sendAccessibilityEventUnchecked(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            boolean r0 = r1.shouldDeferAccessibilityEvent(r2)
            if (r0 == 0) goto L7
            return
        L7:
            super.sendAccessibilityEventUnchecked(r2)
            return
    }

    public void setAccessibilityDelegateCompat(android.support.v7.widget.RecyclerViewAccessibilityDelegate r1) {
            r0 = this;
            r0.mAccessibilityDelegate = r1
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r0, r1)
            return
    }

    public void setAdapter(android.support.v7.widget.RecyclerView.Adapter r3) {
            r2 = this;
            r0 = 0
            r2.setLayoutFrozen(r0)
            r1 = 1
            r2.setAdapterInternal(r3, r0, r1)
            r2.processDataSetCompletelyChanged(r0)
            r2.requestLayout()
            return
    }

    public void setChildDrawingOrderCallback(android.support.v7.widget.RecyclerView.ChildDrawingOrderCallback r2) {
            r1 = this;
            android.support.v7.widget.RecyclerView$ChildDrawingOrderCallback r0 = r1.mChildDrawingOrderCallback
            if (r2 != r0) goto L5
            return
        L5:
            r1.mChildDrawingOrderCallback = r2
            if (r2 == 0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setChildrenDrawingOrderEnabled(r2)
            return
    }

    boolean setChildImportantForAccessibilityInternal(android.support.v7.widget.RecyclerView.ViewHolder r2, int r3) {
            r1 = this;
            boolean r0 = r1.isComputingLayout()
            if (r0 == 0) goto Lf
            r2.mPendingAccessibilityState = r3
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r1.mPendingAccessibilityImportanceChange
            r3.add(r2)
            r2 = 0
            return r2
        Lf:
            android.view.View r2 = r2.itemView
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r2, r3)
            r2 = 1
            return r2
    }

    @Override
    public void setClipToPadding(boolean r2) {
            r1 = this;
            boolean r0 = r1.mClipToPadding
            if (r2 == r0) goto L7
            r1.invalidateGlows()
        L7:
            r1.mClipToPadding = r2
            super.setClipToPadding(r2)
            boolean r2 = r1.mFirstLayoutComplete
            if (r2 == 0) goto L13
            r1.requestLayout()
        L13:
            return
    }

    public void setEdgeEffectFactory(android.support.v7.widget.RecyclerView.EdgeEffectFactory r1) {
            r0 = this;
            android.support.v4.util.Preconditions.checkNotNull(r1)
            r0.mEdgeEffectFactory = r1
            r0.invalidateGlows()
            return
    }

    public void setHasFixedSize(boolean r1) {
            r0 = this;
            r0.mHasFixedSize = r1
            return
    }

    public void setItemAnimator(android.support.v7.widget.RecyclerView.ItemAnimator r3) {
            r2 = this;
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r2.mItemAnimator
            if (r0 == 0) goto Ld
            r0.endAnimations()
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r2.mItemAnimator
            r1 = 0
            r0.setListener(r1)
        Ld:
            r2.mItemAnimator = r3
            if (r3 == 0) goto L16
            android.support.v7.widget.RecyclerView$ItemAnimator$ItemAnimatorListener r0 = r2.mItemAnimatorListener
            r3.setListener(r0)
        L16:
            return
    }

    public void setItemViewCacheSize(int r2) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Recycler r0 = r1.mRecycler
            r0.setViewCacheSize(r2)
            return
    }

    public void setLayoutFrozen(boolean r10) {
            r9 = this;
            boolean r0 = r9.mLayoutFrozen
            if (r10 == r0) goto L38
            java.lang.String r0 = "Do not setLayoutFrozen in layout or scroll"
            r9.assertNotInLayoutOrScroll(r0)
            if (r10 != 0) goto L20
            r10 = 0
            r9.mLayoutFrozen = r10
            boolean r0 = r9.mLayoutWasDefered
            if (r0 == 0) goto L1d
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r9.mLayout
            if (r0 == 0) goto L1d
            android.support.v7.widget.RecyclerView$Adapter r0 = r9.mAdapter
            if (r0 == 0) goto L1d
            r9.requestLayout()
        L1d:
            r9.mLayoutWasDefered = r10
            goto L38
        L20:
            long r3 = android.os.SystemClock.uptimeMillis()
            r5 = 3
            r6 = 0
            r7 = 0
            r8 = 0
            r1 = r3
            android.view.MotionEvent r10 = android.view.MotionEvent.obtain(r1, r3, r5, r6, r7, r8)
            r9.onTouchEvent(r10)
            r10 = 1
            r9.mLayoutFrozen = r10
            r9.mIgnoreMotionEventTillDown = r10
            r9.stopScroll()
        L38:
            return
    }

    public void setLayoutManager(android.support.v7.widget.RecyclerView.LayoutManager r4) {
            r3 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            if (r4 != r0) goto L5
            return
        L5:
            r3.stopScroll()
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            if (r0 == 0) goto L3a
            android.support.v7.widget.RecyclerView$ItemAnimator r0 = r3.mItemAnimator
            if (r0 == 0) goto L13
            r0.endAnimations()
        L13:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r3.mRecycler
            r0.removeAndRecycleAllViews(r1)
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r3.mRecycler
            r0.removeAndRecycleScrapInt(r1)
            android.support.v7.widget.RecyclerView$Recycler r0 = r3.mRecycler
            r0.clear()
            boolean r0 = r3.mIsAttached
            if (r0 == 0) goto L31
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            android.support.v7.widget.RecyclerView$Recycler r1 = r3.mRecycler
            r0.dispatchDetachedFromWindow(r3, r1)
        L31:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r3.mLayout
            r1 = 0
            r0.setRecyclerView(r1)
            r3.mLayout = r1
            goto L3f
        L3a:
            android.support.v7.widget.RecyclerView$Recycler r0 = r3.mRecycler
            r0.clear()
        L3f:
            android.support.v7.widget.ChildHelper r0 = r3.mChildHelper
            r0.removeAllViewsUnfiltered()
            r3.mLayout = r4
            if (r4 == 0) goto L80
            android.support.v7.widget.RecyclerView r0 = r4.mRecyclerView
            if (r0 != 0) goto L5b
            android.support.v7.widget.RecyclerView$LayoutManager r4 = r3.mLayout
            r4.setRecyclerView(r3)
            boolean r4 = r3.mIsAttached
            if (r4 == 0) goto L80
            android.support.v7.widget.RecyclerView$LayoutManager r4 = r3.mLayout
            r4.dispatchAttachedToWindow(r3)
            goto L80
        L5b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "LayoutManager "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " is already attached to a RecyclerView:"
            r1.append(r2)
            android.support.v7.widget.RecyclerView r4 = r4.mRecyclerView
            java.lang.String r4 = r4.exceptionLabel()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L80:
            android.support.v7.widget.RecyclerView$Recycler r4 = r3.mRecycler
            r4.updateViewCacheSize()
            r3.requestLayout()
            return
    }

    @Override
    public void setNestedScrollingEnabled(boolean r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            r0.setNestedScrollingEnabled(r2)
            return
    }

    public void setOnFlingListener(android.support.v7.widget.RecyclerView.OnFlingListener r1) {
            r0 = this;
            r0.mOnFlingListener = r1
            return
    }

    @java.lang.Deprecated
    public void setOnScrollListener(android.support.v7.widget.RecyclerView.OnScrollListener r1) {
            r0 = this;
            r0.mScrollListener = r1
            return
    }

    public void setPreserveFocusAfterLayout(boolean r1) {
            r0 = this;
            r0.mPreserveFocusAfterLayout = r1
            return
    }

    public void setRecycledViewPool(android.support.v7.widget.RecyclerView.RecycledViewPool r2) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Recycler r0 = r1.mRecycler
            r0.setRecycledViewPool(r2)
            return
    }

    public void setRecyclerListener(android.support.v7.widget.RecyclerView.RecyclerListener r1) {
            r0 = this;
            r0.mRecyclerListener = r1
            return
    }

    void setScrollState(int r2) {
            r1 = this;
            int r0 = r1.mScrollState
            if (r2 != r0) goto L5
            return
        L5:
            r1.mScrollState = r2
            r0 = 2
            if (r2 == r0) goto Ld
            r1.stopScrollersInternal()
        Ld:
            r1.dispatchOnScrollStateChanged(r2)
            return
    }

    public void setScrollingTouchSlop(int r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            if (r4 == 0) goto L30
            r1 = 1
            if (r4 == r1) goto L29
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "setScrollingTouchSlop(): bad argument constant "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "; using default value"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "RecyclerView"
            android.util.Log.w(r1, r4)
            goto L30
        L29:
            int r4 = r0.getScaledPagingTouchSlop()
            r3.mTouchSlop = r4
            goto L36
        L30:
            int r4 = r0.getScaledTouchSlop()
            r3.mTouchSlop = r4
        L36:
            return
    }

    public void setViewCacheExtension(android.support.v7.widget.RecyclerView.ViewCacheExtension r2) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Recycler r0 = r1.mRecycler
            r0.setViewCacheExtension(r2)
            return
    }

    boolean shouldDeferAccessibilityEvent(android.view.accessibility.AccessibilityEvent r3) {
            r2 = this;
            boolean r0 = r2.isComputingLayout()
            r1 = 0
            if (r0 == 0) goto L1a
            if (r3 == 0) goto Le
            int r3 = android.support.v4.view.accessibility.AccessibilityEventCompat.getContentChangeTypes(r3)
            goto Lf
        Le:
            r3 = r1
        Lf:
            if (r3 != 0) goto L12
            goto L13
        L12:
            r1 = r3
        L13:
            int r3 = r2.mEatenAccessibilityChangeFlags
            r3 = r3 | r1
            r2.mEatenAccessibilityChangeFlags = r3
            r3 = 1
            return r3
        L1a:
            return r1
    }

    public void smoothScrollBy(int r2, int r3) {
            r1 = this;
            r0 = 0
            r1.smoothScrollBy(r2, r3, r0)
            return
    }

    public void smoothScrollBy(int r3, int r4, android.view.animation.Interpolator r5) {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 != 0) goto Lc
            java.lang.String r3 = "RecyclerView"
            java.lang.String r4 = "Cannot smooth scroll without a LayoutManager set. Call setLayoutManager with a non-null argument."
            android.util.Log.e(r3, r4)
            return
        Lc:
            boolean r1 = r2.mLayoutFrozen
            if (r1 == 0) goto L11
            return
        L11:
            boolean r0 = r0.canScrollHorizontally()
            r1 = 0
            if (r0 != 0) goto L19
            r3 = r1
        L19:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            boolean r0 = r0.canScrollVertically()
            if (r0 != 0) goto L22
            r4 = r1
        L22:
            if (r3 != 0) goto L26
            if (r4 == 0) goto L2b
        L26:
            android.support.v7.widget.RecyclerView$ViewFlinger r0 = r2.mViewFlinger
            r0.smoothScrollBy(r3, r4, r5)
        L2b:
            return
    }

    public void smoothScrollToPosition(int r3) {
            r2 = this;
            boolean r0 = r2.mLayoutFrozen
            if (r0 == 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r2.mLayout
            if (r0 != 0) goto L11
            java.lang.String r3 = "RecyclerView"
            java.lang.String r0 = "Cannot smooth scroll without a LayoutManager set. Call setLayoutManager with a non-null argument."
            android.util.Log.e(r3, r0)
            return
        L11:
            android.support.v7.widget.RecyclerView$State r1 = r2.mState
            r0.smoothScrollToPosition(r2, r1, r3)
            return
    }

    void startInterceptRequestLayout() {
            r2 = this;
            int r0 = r2.mInterceptRequestLayoutDepth
            r1 = 1
            int r0 = r0 + r1
            r2.mInterceptRequestLayoutDepth = r0
            if (r0 != r1) goto Lf
            boolean r0 = r2.mLayoutFrozen
            if (r0 != 0) goto Lf
            r0 = 0
            r2.mLayoutWasDefered = r0
        Lf:
            return
    }

    @Override
    public boolean startNestedScroll(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.startNestedScroll(r2)
            return r2
    }

    @Override
    public boolean startNestedScroll(int r2, int r3) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            boolean r2 = r0.startNestedScroll(r2, r3)
            return r2
    }

    void stopInterceptRequestLayout(boolean r4) {
            r3 = this;
            int r0 = r3.mInterceptRequestLayoutDepth
            r1 = 1
            if (r0 >= r1) goto L7
            r3.mInterceptRequestLayoutDepth = r1
        L7:
            r0 = 0
            if (r4 != 0) goto L10
            boolean r2 = r3.mLayoutFrozen
            if (r2 != 0) goto L10
            r3.mLayoutWasDefered = r0
        L10:
            int r2 = r3.mInterceptRequestLayoutDepth
            if (r2 != r1) goto L2f
            if (r4 == 0) goto L29
            boolean r4 = r3.mLayoutWasDefered
            if (r4 == 0) goto L29
            boolean r4 = r3.mLayoutFrozen
            if (r4 != 0) goto L29
            android.support.v7.widget.RecyclerView$LayoutManager r4 = r3.mLayout
            if (r4 == 0) goto L29
            android.support.v7.widget.RecyclerView$Adapter r4 = r3.mAdapter
            if (r4 == 0) goto L29
            r3.dispatchLayout()
        L29:
            boolean r4 = r3.mLayoutFrozen
            if (r4 != 0) goto L2f
            r3.mLayoutWasDefered = r0
        L2f:
            int r4 = r3.mInterceptRequestLayoutDepth
            int r4 = r4 - r1
            r3.mInterceptRequestLayoutDepth = r4
            return
    }

    @Override
    public void stopNestedScroll() {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            r0.stopNestedScroll()
            return
    }

    @Override
    public void stopNestedScroll(int r2) {
            r1 = this;
            android.support.v4.view.NestedScrollingChildHelper r0 = r1.getScrollingChildHelper()
            r0.stopNestedScroll(r2)
            return
    }

    public void stopScroll() {
            r1 = this;
            r0 = 0
            r1.setScrollState(r0)
            r1.stopScrollersInternal()
            return
    }

    public void swapAdapter(android.support.v7.widget.RecyclerView.Adapter r2, boolean r3) {
            r1 = this;
            r0 = 0
            r1.setLayoutFrozen(r0)
            r0 = 1
            r1.setAdapterInternal(r2, r0, r3)
            r1.processDataSetCompletelyChanged(r0)
            r1.requestLayout()
            return
    }

    void viewRangeUpdate(int r7, int r8, java.lang.Object r9) {
            r6 = this;
            android.support.v7.widget.ChildHelper r0 = r6.mChildHelper
            int r0 = r0.getUnfilteredChildCount()
            int r1 = r7 + r8
            r2 = 0
        L9:
            if (r2 >= r0) goto L39
            android.support.v7.widget.ChildHelper r3 = r6.mChildHelper
            android.view.View r3 = r3.getUnfilteredChildAt(r2)
            android.support.v7.widget.RecyclerView$ViewHolder r4 = getChildViewHolderInt(r3)
            if (r4 == 0) goto L36
            boolean r5 = r4.shouldIgnore()
            if (r5 == 0) goto L1e
            goto L36
        L1e:
            int r5 = r4.mPosition
            if (r5 < r7) goto L36
            int r5 = r4.mPosition
            if (r5 >= r1) goto L36
            r5 = 2
            r4.addFlags(r5)
            r4.addChangePayload(r9)
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r3 = (android.support.v7.widget.RecyclerView.LayoutParams) r3
            r4 = 1
            r3.mInsetsDirty = r4
        L36:
            int r2 = r2 + 1
            goto L9
        L39:
            android.support.v7.widget.RecyclerView$Recycler r9 = r6.mRecycler
            r9.viewRangeUpdate(r7, r8)
            return
    }
}
