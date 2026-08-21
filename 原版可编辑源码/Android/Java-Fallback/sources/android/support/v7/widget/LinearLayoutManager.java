package android.support.v7.widget;

public class LinearLayoutManager extends android.support.v7.widget.RecyclerView.LayoutManager implements android.support.v7.widget.helper.ItemTouchHelper.ViewDropHandler, android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider {
    static final boolean DEBUG = false;
    public static final int HORIZONTAL = 0;
    public static final int INVALID_OFFSET = Integer.MIN_VALUE;
    private static final float MAX_SCROLL_FACTOR = 0.33333334f;
    private static final java.lang.String TAG = "LinearLayoutManager";
    public static final int VERTICAL = 1;
    final android.support.v7.widget.LinearLayoutManager.AnchorInfo mAnchorInfo;
    private int mInitialPrefetchItemCount;
    private boolean mLastStackFromEnd;
    private final android.support.v7.widget.LinearLayoutManager.LayoutChunkResult mLayoutChunkResult;
    private android.support.v7.widget.LinearLayoutManager.LayoutState mLayoutState;
    int mOrientation;
    android.support.v7.widget.OrientationHelper mOrientationHelper;
    android.support.v7.widget.LinearLayoutManager.SavedState mPendingSavedState;
    int mPendingScrollPosition;
    int mPendingScrollPositionOffset;
    private boolean mRecycleChildrenOnDetach;
    private boolean mReverseLayout;
    boolean mShouldReverseLayout;
    private boolean mSmoothScrollbarEnabled;
    private boolean mStackFromEnd;

    static class AnchorInfo {
        int mCoordinate;
        boolean mLayoutFromEnd;
        android.support.v7.widget.OrientationHelper mOrientationHelper;
        int mPosition;
        boolean mValid;

        AnchorInfo() {
                r0 = this;
                r0.<init>()
                r0.reset()
                return
        }

        void assignCoordinateFromPadding() {
                r1 = this;
                boolean r0 = r1.mLayoutFromEnd
                if (r0 == 0) goto Lb
                android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
                int r0 = r0.getEndAfterPadding()
                goto L11
            Lb:
                android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
                int r0 = r0.getStartAfterPadding()
            L11:
                r1.mCoordinate = r0
                return
        }

        public void assignFromView(android.view.View r2, int r3) {
                r1 = this;
                boolean r0 = r1.mLayoutFromEnd
                if (r0 == 0) goto L14
                android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
                int r2 = r0.getDecoratedEnd(r2)
                android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
                int r0 = r0.getTotalSpaceChange()
                int r2 = r2 + r0
                r1.mCoordinate = r2
                goto L1c
            L14:
                android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
                int r2 = r0.getDecoratedStart(r2)
                r1.mCoordinate = r2
            L1c:
                r1.mPosition = r3
                return
        }

        public void assignFromViewAndKeepVisibleRect(android.view.View r5, int r6) {
                r4 = this;
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r0 = r0.getTotalSpaceChange()
                if (r0 < 0) goto Lc
                r4.assignFromView(r5, r6)
                return
            Lc:
                r4.mPosition = r6
                boolean r6 = r4.mLayoutFromEnd
                r1 = 0
                if (r6 == 0) goto L55
                android.support.v7.widget.OrientationHelper r6 = r4.mOrientationHelper
                int r6 = r6.getEndAfterPadding()
                int r6 = r6 - r0
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r0 = r0.getDecoratedEnd(r5)
                int r6 = r6 - r0
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r0 = r0.getEndAfterPadding()
                int r0 = r0 - r6
                r4.mCoordinate = r0
                if (r6 <= 0) goto L94
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r0 = r0.getDecoratedMeasurement(r5)
                int r2 = r4.mCoordinate
                int r2 = r2 - r0
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r0 = r0.getStartAfterPadding()
                android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
                int r5 = r3.getDecoratedStart(r5)
                int r5 = r5 - r0
                int r5 = java.lang.Math.min(r5, r1)
                int r0 = r0 + r5
                int r2 = r2 - r0
                if (r2 >= 0) goto L94
                int r5 = r4.mCoordinate
                int r0 = -r2
                int r6 = java.lang.Math.min(r6, r0)
                int r5 = r5 + r6
                r4.mCoordinate = r5
                goto L94
            L55:
                android.support.v7.widget.OrientationHelper r6 = r4.mOrientationHelper
                int r6 = r6.getDecoratedStart(r5)
                android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
                int r2 = r2.getStartAfterPadding()
                int r2 = r6 - r2
                r4.mCoordinate = r6
                if (r2 <= 0) goto L94
                android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
                int r3 = r3.getDecoratedMeasurement(r5)
                int r6 = r6 + r3
                android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
                int r3 = r3.getEndAfterPadding()
                int r3 = r3 - r0
                android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
                int r5 = r0.getDecoratedEnd(r5)
                int r3 = r3 - r5
                android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
                int r5 = r5.getEndAfterPadding()
                int r0 = java.lang.Math.min(r1, r3)
                int r5 = r5 - r0
                int r5 = r5 - r6
                if (r5 >= 0) goto L94
                int r6 = r4.mCoordinate
                int r5 = -r5
                int r5 = java.lang.Math.min(r2, r5)
                int r6 = r6 - r5
                r4.mCoordinate = r6
            L94:
                return
        }

        boolean isViewValidAsAnchor(android.view.View r2, android.support.v7.widget.RecyclerView.State r3) {
                r1 = this;
                android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r2 = (android.support.v7.widget.RecyclerView.LayoutParams) r2
                boolean r0 = r2.isItemRemoved()
                if (r0 != 0) goto L1e
                int r0 = r2.getViewLayoutPosition()
                if (r0 < 0) goto L1e
                int r2 = r2.getViewLayoutPosition()
                int r3 = r3.getItemCount()
                if (r2 >= r3) goto L1e
                r2 = 1
                goto L1f
            L1e:
                r2 = 0
            L1f:
                return r2
        }

        void reset() {
                r1 = this;
                r0 = -1
                r1.mPosition = r0
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                r1.mCoordinate = r0
                r0 = 0
                r1.mLayoutFromEnd = r0
                r1.mValid = r0
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "AnchorInfo{mPosition="
                r0.append(r1)
                int r1 = r2.mPosition
                r0.append(r1)
                java.lang.String r1 = ", mCoordinate="
                r0.append(r1)
                int r1 = r2.mCoordinate
                r0.append(r1)
                java.lang.String r1 = ", mLayoutFromEnd="
                r0.append(r1)
                boolean r1 = r2.mLayoutFromEnd
                r0.append(r1)
                java.lang.String r1 = ", mValid="
                r0.append(r1)
                boolean r1 = r2.mValid
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    protected static class LayoutChunkResult {
        public int mConsumed;
        public boolean mFinished;
        public boolean mFocusable;
        public boolean mIgnoreConsumed;

        protected LayoutChunkResult() {
                r0 = this;
                r0.<init>()
                return
        }

        void resetInternal() {
                r1 = this;
                r0 = 0
                r1.mConsumed = r0
                r1.mFinished = r0
                r1.mIgnoreConsumed = r0
                r1.mFocusable = r0
                return
        }
    }

    static class LayoutState {
        static final int INVALID_LAYOUT = Integer.MIN_VALUE;
        static final int ITEM_DIRECTION_HEAD = -1;
        static final int ITEM_DIRECTION_TAIL = 1;
        static final int LAYOUT_END = 1;
        static final int LAYOUT_START = -1;
        static final int SCROLLING_OFFSET_NaN = Integer.MIN_VALUE;
        static final java.lang.String TAG = "LLM#LayoutState";
        int mAvailable;
        int mCurrentPosition;
        int mExtra;
        boolean mInfinite;
        boolean mIsPreLayout;
        int mItemDirection;
        int mLastScrollDelta;
        int mLayoutDirection;
        int mOffset;
        boolean mRecycle;
        java.util.List<android.support.v7.widget.RecyclerView.ViewHolder> mScrapList;
        int mScrollingOffset;

        LayoutState() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.mRecycle = r0
                r0 = 0
                r1.mExtra = r0
                r1.mIsPreLayout = r0
                r0 = 0
                r1.mScrapList = r0
                return
        }

        private android.view.View nextViewFromScrapList() {
                r5 = this;
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r5.mScrapList
                int r0 = r0.size()
                r1 = 0
            L7:
                if (r1 >= r0) goto L2f
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r2 = r5.mScrapList
                java.lang.Object r2 = r2.get(r1)
                android.support.v7.widget.RecyclerView$ViewHolder r2 = (android.support.v7.widget.RecyclerView.ViewHolder) r2
                android.view.View r2 = r2.itemView
                android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r3 = (android.support.v7.widget.RecyclerView.LayoutParams) r3
                boolean r4 = r3.isItemRemoved()
                if (r4 == 0) goto L20
                goto L2c
            L20:
                int r4 = r5.mCurrentPosition
                int r3 = r3.getViewLayoutPosition()
                if (r4 != r3) goto L2c
                r5.assignPositionFromScrapList(r2)
                return r2
            L2c:
                int r1 = r1 + 1
                goto L7
            L2f:
                r0 = 0
                return r0
        }

        public void assignPositionFromScrapList() {
                r1 = this;
                r0 = 0
                r1.assignPositionFromScrapList(r0)
                return
        }

        public void assignPositionFromScrapList(android.view.View r1) {
                r0 = this;
                android.view.View r1 = r0.nextViewInLimitedList(r1)
                if (r1 != 0) goto La
                r1 = -1
                r0.mCurrentPosition = r1
                goto L16
            La:
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r1 = (android.support.v7.widget.RecyclerView.LayoutParams) r1
                int r1 = r1.getViewLayoutPosition()
                r0.mCurrentPosition = r1
            L16:
                return
        }

        boolean hasMore(android.support.v7.widget.RecyclerView.State r2) {
                r1 = this;
                int r0 = r1.mCurrentPosition
                if (r0 < 0) goto Lc
                int r2 = r2.getItemCount()
                if (r0 >= r2) goto Lc
                r2 = 1
                goto Ld
            Lc:
                r2 = 0
            Ld:
                return r2
        }

        void log() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "avail:"
                r0.append(r1)
                int r1 = r2.mAvailable
                r0.append(r1)
                java.lang.String r1 = ", ind:"
                r0.append(r1)
                int r1 = r2.mCurrentPosition
                r0.append(r1)
                java.lang.String r1 = ", dir:"
                r0.append(r1)
                int r1 = r2.mItemDirection
                r0.append(r1)
                java.lang.String r1 = ", offset:"
                r0.append(r1)
                int r1 = r2.mOffset
                r0.append(r1)
                java.lang.String r1 = ", layoutDir:"
                r0.append(r1)
                int r1 = r2.mLayoutDirection
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "LLM#LayoutState"
                android.util.Log.d(r1, r0)
                return
        }

        android.view.View next(android.support.v7.widget.RecyclerView.Recycler r3) {
                r2 = this;
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r2.mScrapList
                if (r0 == 0) goto L9
                android.view.View r3 = r2.nextViewFromScrapList()
                return r3
            L9:
                int r0 = r2.mCurrentPosition
                android.view.View r3 = r3.getViewForPosition(r0)
                int r0 = r2.mCurrentPosition
                int r1 = r2.mItemDirection
                int r0 = r0 + r1
                r2.mCurrentPosition = r0
                return r3
        }

        public android.view.View nextViewInLimitedList(android.view.View r8) {
                r7 = this;
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r7.mScrapList
                int r0 = r0.size()
                r1 = 0
                r2 = 2147483647(0x7fffffff, float:NaN)
                r3 = 0
            Lb:
                if (r3 >= r0) goto L3d
                java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r4 = r7.mScrapList
                java.lang.Object r4 = r4.get(r3)
                android.support.v7.widget.RecyclerView$ViewHolder r4 = (android.support.v7.widget.RecyclerView.ViewHolder) r4
                android.view.View r4 = r4.itemView
                android.view.ViewGroup$LayoutParams r5 = r4.getLayoutParams()
                android.support.v7.widget.RecyclerView$LayoutParams r5 = (android.support.v7.widget.RecyclerView.LayoutParams) r5
                if (r4 == r8) goto L3a
                boolean r6 = r5.isItemRemoved()
                if (r6 == 0) goto L26
                goto L3a
            L26:
                int r5 = r5.getViewLayoutPosition()
                int r6 = r7.mCurrentPosition
                int r5 = r5 - r6
                int r6 = r7.mItemDirection
                int r5 = r5 * r6
                if (r5 >= 0) goto L33
                goto L3a
            L33:
                if (r5 >= r2) goto L3a
                r1 = r4
                if (r5 != 0) goto L39
                goto L3d
            L39:
                r2 = r5
            L3a:
                int r3 = r3 + 1
                goto Lb
            L3d:
                return r1
        }
    }

    public static class SavedState implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<android.support.v7.widget.LinearLayoutManager.SavedState> CREATOR = null;
        boolean mAnchorLayoutFromEnd;
        int mAnchorOffset;
        int mAnchorPosition;


        static {
                android.support.v7.widget.LinearLayoutManager$SavedState$1 r0 = new android.support.v7.widget.LinearLayoutManager$SavedState$1
                r0.<init>()
                android.support.v7.widget.LinearLayoutManager.SavedState.CREATOR = r0
                return
        }

        public SavedState() {
                r0 = this;
                r0.<init>()
                return
        }

        SavedState(android.os.Parcel r2) {
                r1 = this;
                r1.<init>()
                int r0 = r2.readInt()
                r1.mAnchorPosition = r0
                int r0 = r2.readInt()
                r1.mAnchorOffset = r0
                int r2 = r2.readInt()
                r0 = 1
                if (r2 != r0) goto L17
                goto L18
            L17:
                r0 = 0
            L18:
                r1.mAnchorLayoutFromEnd = r0
                return
        }

        public SavedState(android.support.v7.widget.LinearLayoutManager.SavedState r2) {
                r1 = this;
                r1.<init>()
                int r0 = r2.mAnchorPosition
                r1.mAnchorPosition = r0
                int r0 = r2.mAnchorOffset
                r1.mAnchorOffset = r0
                boolean r2 = r2.mAnchorLayoutFromEnd
                r1.mAnchorLayoutFromEnd = r2
                return
        }

        @Override
        public int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        boolean hasValidAnchor() {
                r1 = this;
                int r0 = r1.mAnchorPosition
                if (r0 < 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        void invalidateAnchor() {
                r1 = this;
                r0 = -1
                r1.mAnchorPosition = r0
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                int r2 = r0.mAnchorPosition
                r1.writeInt(r2)
                int r2 = r0.mAnchorOffset
                r1.writeInt(r2)
                boolean r2 = r0.mAnchorLayoutFromEnd
                r1.writeInt(r2)
                return
        }
    }

    public LinearLayoutManager(android.content.Context r3) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public LinearLayoutManager(android.content.Context r2, int r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r2 = 1
            r1.mOrientation = r2
            r0 = 0
            r1.mReverseLayout = r0
            r1.mShouldReverseLayout = r0
            r1.mStackFromEnd = r0
            r1.mSmoothScrollbarEnabled = r2
            r2 = -1
            r1.mPendingScrollPosition = r2
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.mPendingScrollPositionOffset = r2
            r2 = 0
            r1.mPendingSavedState = r2
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r2 = new android.support.v7.widget.LinearLayoutManager$AnchorInfo
            r2.<init>()
            r1.mAnchorInfo = r2
            android.support.v7.widget.LinearLayoutManager$LayoutChunkResult r2 = new android.support.v7.widget.LinearLayoutManager$LayoutChunkResult
            r2.<init>()
            r1.mLayoutChunkResult = r2
            r2 = 2
            r1.mInitialPrefetchItemCount = r2
            r1.setOrientation(r3)
            r1.setReverseLayout(r4)
            return
    }

    public LinearLayoutManager(android.content.Context r3, android.util.AttributeSet r4, int r5, int r6) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.mOrientation = r0
            r1 = 0
            r2.mReverseLayout = r1
            r2.mShouldReverseLayout = r1
            r2.mStackFromEnd = r1
            r2.mSmoothScrollbarEnabled = r0
            r0 = -1
            r2.mPendingScrollPosition = r0
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r2.mPendingScrollPositionOffset = r0
            r0 = 0
            r2.mPendingSavedState = r0
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r0 = new android.support.v7.widget.LinearLayoutManager$AnchorInfo
            r0.<init>()
            r2.mAnchorInfo = r0
            android.support.v7.widget.LinearLayoutManager$LayoutChunkResult r0 = new android.support.v7.widget.LinearLayoutManager$LayoutChunkResult
            r0.<init>()
            r2.mLayoutChunkResult = r0
            r0 = 2
            r2.mInitialPrefetchItemCount = r0
            android.support.v7.widget.RecyclerView$LayoutManager$Properties r3 = getProperties(r3, r4, r5, r6)
            int r4 = r3.orientation
            r2.setOrientation(r4)
            boolean r4 = r3.reverseLayout
            r2.setReverseLayout(r4)
            boolean r3 = r3.stackFromEnd
            r2.setStackFromEnd(r3)
            return
    }

    private int computeScrollExtent(android.support.v7.widget.RecyclerView.State r7) {
            r6 = this;
            int r0 = r6.getChildCount()
            if (r0 != 0) goto L8
            r7 = 0
            return r7
        L8:
            r6.ensureLayoutState()
            android.support.v7.widget.OrientationHelper r1 = r6.mOrientationHelper
            boolean r0 = r6.mSmoothScrollbarEnabled
            r2 = 1
            r0 = r0 ^ r2
            android.view.View r3 = r6.findFirstVisibleChildClosestToStart(r0, r2)
            boolean r0 = r6.mSmoothScrollbarEnabled
            r0 = r0 ^ r2
            android.view.View r4 = r6.findFirstVisibleChildClosestToEnd(r0, r2)
            boolean r5 = r6.mSmoothScrollbarEnabled
            r0 = r7
            r2 = r3
            r3 = r4
            r4 = r6
            int r7 = android.support.v7.widget.ScrollbarHelper.computeScrollExtent(r0, r1, r2, r3, r4, r5)
            return r7
    }

    private int computeScrollOffset(android.support.v7.widget.RecyclerView.State r8) {
            r7 = this;
            int r0 = r7.getChildCount()
            if (r0 != 0) goto L8
            r8 = 0
            return r8
        L8:
            r7.ensureLayoutState()
            android.support.v7.widget.OrientationHelper r1 = r7.mOrientationHelper
            boolean r0 = r7.mSmoothScrollbarEnabled
            r2 = 1
            r0 = r0 ^ r2
            android.view.View r3 = r7.findFirstVisibleChildClosestToStart(r0, r2)
            boolean r0 = r7.mSmoothScrollbarEnabled
            r0 = r0 ^ r2
            android.view.View r4 = r7.findFirstVisibleChildClosestToEnd(r0, r2)
            boolean r5 = r7.mSmoothScrollbarEnabled
            boolean r6 = r7.mShouldReverseLayout
            r0 = r8
            r2 = r3
            r3 = r4
            r4 = r7
            int r8 = android.support.v7.widget.ScrollbarHelper.computeScrollOffset(r0, r1, r2, r3, r4, r5, r6)
            return r8
    }

    private int computeScrollRange(android.support.v7.widget.RecyclerView.State r7) {
            r6 = this;
            int r0 = r6.getChildCount()
            if (r0 != 0) goto L8
            r7 = 0
            return r7
        L8:
            r6.ensureLayoutState()
            android.support.v7.widget.OrientationHelper r1 = r6.mOrientationHelper
            boolean r0 = r6.mSmoothScrollbarEnabled
            r2 = 1
            r0 = r0 ^ r2
            android.view.View r3 = r6.findFirstVisibleChildClosestToStart(r0, r2)
            boolean r0 = r6.mSmoothScrollbarEnabled
            r0 = r0 ^ r2
            android.view.View r4 = r6.findFirstVisibleChildClosestToEnd(r0, r2)
            boolean r5 = r6.mSmoothScrollbarEnabled
            r0 = r7
            r2 = r3
            r3 = r4
            r4 = r6
            int r7 = android.support.v7.widget.ScrollbarHelper.computeScrollRange(r0, r1, r2, r3, r4, r5)
            return r7
    }

    private android.view.View findFirstPartiallyOrCompletelyInvisibleChild(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
            r0 = this;
            int r1 = r0.getChildCount()
            r2 = 0
            android.view.View r1 = r0.findOnePartiallyOrCompletelyInvisibleChild(r2, r1)
            return r1
    }

    private android.view.View findFirstReferenceChild(android.support.v7.widget.RecyclerView.Recycler r7, android.support.v7.widget.RecyclerView.State r8) {
            r6 = this;
            int r4 = r6.getChildCount()
            int r5 = r8.getItemCount()
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            android.view.View r7 = r0.findReferenceChild(r1, r2, r3, r4, r5)
            return r7
    }

    private android.view.View findFirstVisibleChildClosestToEnd(boolean r3, boolean r4) {
            r2 = this;
            boolean r0 = r2.mShouldReverseLayout
            if (r0 == 0) goto Le
            r0 = 0
            int r1 = r2.getChildCount()
            android.view.View r3 = r2.findOneVisibleChild(r0, r1, r3, r4)
            return r3
        Le:
            int r0 = r2.getChildCount()
            int r0 = r0 + (-1)
            r1 = -1
            android.view.View r3 = r2.findOneVisibleChild(r0, r1, r3, r4)
            return r3
    }

    private android.view.View findFirstVisibleChildClosestToStart(boolean r3, boolean r4) {
            r2 = this;
            boolean r0 = r2.mShouldReverseLayout
            if (r0 == 0) goto L10
            int r0 = r2.getChildCount()
            int r0 = r0 + (-1)
            r1 = -1
            android.view.View r3 = r2.findOneVisibleChild(r0, r1, r3, r4)
            return r3
        L10:
            r0 = 0
            int r1 = r2.getChildCount()
            android.view.View r3 = r2.findOneVisibleChild(r0, r1, r3, r4)
            return r3
    }

    private android.view.View findLastPartiallyOrCompletelyInvisibleChild(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2) {
            r0 = this;
            int r1 = r0.getChildCount()
            int r1 = r1 + (-1)
            r2 = -1
            android.view.View r1 = r0.findOnePartiallyOrCompletelyInvisibleChild(r1, r2)
            return r1
    }

    private android.view.View findLastReferenceChild(android.support.v7.widget.RecyclerView.Recycler r8, android.support.v7.widget.RecyclerView.State r9) {
            r7 = this;
            int r0 = r7.getChildCount()
            int r4 = r0 + (-1)
            int r6 = r9.getItemCount()
            r5 = -1
            r1 = r7
            r2 = r8
            r3 = r9
            android.view.View r8 = r1.findReferenceChild(r2, r3, r4, r5, r6)
            return r8
    }

    private android.view.View findPartiallyOrCompletelyInvisibleChildClosestToEnd(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto L9
            android.view.View r2 = r1.findFirstPartiallyOrCompletelyInvisibleChild(r2, r3)
            goto Ld
        L9:
            android.view.View r2 = r1.findLastPartiallyOrCompletelyInvisibleChild(r2, r3)
        Ld:
            return r2
    }

    private android.view.View findPartiallyOrCompletelyInvisibleChildClosestToStart(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto L9
            android.view.View r2 = r1.findLastPartiallyOrCompletelyInvisibleChild(r2, r3)
            goto Ld
        L9:
            android.view.View r2 = r1.findFirstPartiallyOrCompletelyInvisibleChild(r2, r3)
        Ld:
            return r2
    }

    private android.view.View findReferenceChildClosestToEnd(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto L9
            android.view.View r2 = r1.findFirstReferenceChild(r2, r3)
            goto Ld
        L9:
            android.view.View r2 = r1.findLastReferenceChild(r2, r3)
        Ld:
            return r2
    }

    private android.view.View findReferenceChildClosestToStart(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto L9
            android.view.View r2 = r1.findLastReferenceChild(r2, r3)
            goto Ld
        L9:
            android.view.View r2 = r1.findFirstReferenceChild(r2, r3)
        Ld:
            return r2
    }

    private int fixLayoutEndGap(int r2, android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4, boolean r5) {
            r1 = this;
            android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
            int r0 = r0.getEndAfterPadding()
            int r0 = r0 - r2
            if (r0 <= 0) goto L23
            int r0 = -r0
            int r3 = r1.scrollBy(r0, r3, r4)
            int r3 = -r3
            int r2 = r2 + r3
            if (r5 == 0) goto L22
            android.support.v7.widget.OrientationHelper r4 = r1.mOrientationHelper
            int r4 = r4.getEndAfterPadding()
            int r4 = r4 - r2
            if (r4 <= 0) goto L22
            android.support.v7.widget.OrientationHelper r2 = r1.mOrientationHelper
            r2.offsetChildren(r4)
            int r4 = r4 + r3
            return r4
        L22:
            return r3
        L23:
            r2 = 0
            return r2
    }

    private int fixLayoutStartGap(int r2, android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4, boolean r5) {
            r1 = this;
            android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
            int r0 = r0.getStartAfterPadding()
            int r0 = r2 - r0
            if (r0 <= 0) goto L23
            int r3 = r1.scrollBy(r0, r3, r4)
            int r3 = -r3
            int r2 = r2 + r3
            if (r5 == 0) goto L22
            android.support.v7.widget.OrientationHelper r4 = r1.mOrientationHelper
            int r4 = r4.getStartAfterPadding()
            int r2 = r2 - r4
            if (r2 <= 0) goto L22
            android.support.v7.widget.OrientationHelper r4 = r1.mOrientationHelper
            int r5 = -r2
            r4.offsetChildren(r5)
            int r3 = r3 - r2
        L22:
            return r3
        L23:
            r2 = 0
            return r2
    }

    private android.view.View getChildClosestToEnd() {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto L6
            r0 = 0
            goto Lc
        L6:
            int r0 = r1.getChildCount()
            int r0 = r0 + (-1)
        Lc:
            android.view.View r0 = r1.getChildAt(r0)
            return r0
    }

    private android.view.View getChildClosestToStart() {
            r1 = this;
            boolean r0 = r1.mShouldReverseLayout
            if (r0 == 0) goto Lb
            int r0 = r1.getChildCount()
            int r0 = r0 + (-1)
            goto Lc
        Lb:
            r0 = 0
        Lc:
            android.view.View r0 = r1.getChildAt(r0)
            return r0
    }

    private void layoutForPredictiveAnimations(android.support.v7.widget.RecyclerView.Recycler r16, android.support.v7.widget.RecyclerView.State r17, int r18, int r19) {
            r15 = this;
            r0 = r15
            r1 = r16
            r2 = r17
            boolean r3 = r17.willRunPredictiveAnimations()
            if (r3 == 0) goto Lb5
            int r3 = r15.getChildCount()
            if (r3 == 0) goto Lb5
            boolean r3 = r17.isPreLayout()
            if (r3 != 0) goto Lb5
            boolean r3 = r15.supportsPredictiveItemAnimations()
            if (r3 != 0) goto L1f
            goto Lb5
        L1f:
            java.util.List r3 = r16.getScrapList()
            int r4 = r3.size()
            r5 = 0
            android.view.View r6 = r15.getChildAt(r5)
            int r6 = r15.getPosition(r6)
            r7 = r5
            r8 = r7
            r9 = r8
        L33:
            if (r7 >= r4) goto L6a
            java.lang.Object r10 = r3.get(r7)
            android.support.v7.widget.RecyclerView$ViewHolder r10 = (android.support.v7.widget.RecyclerView.ViewHolder) r10
            boolean r11 = r10.isRemoved()
            if (r11 == 0) goto L42
            goto L67
        L42:
            int r11 = r10.getLayoutPosition()
            r12 = 1
            if (r11 >= r6) goto L4b
            r11 = r12
            goto L4c
        L4b:
            r11 = r5
        L4c:
            boolean r13 = r0.mShouldReverseLayout
            r14 = -1
            if (r11 == r13) goto L52
            r12 = r14
        L52:
            if (r12 != r14) goto L5e
            android.support.v7.widget.OrientationHelper r11 = r0.mOrientationHelper
            android.view.View r10 = r10.itemView
            int r10 = r11.getDecoratedMeasurement(r10)
            int r8 = r8 + r10
            goto L67
        L5e:
            android.support.v7.widget.OrientationHelper r11 = r0.mOrientationHelper
            android.view.View r10 = r10.itemView
            int r10 = r11.getDecoratedMeasurement(r10)
            int r9 = r9 + r10
        L67:
            int r7 = r7 + 1
            goto L33
        L6a:
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r0.mLayoutState
            r4.mScrapList = r3
            if (r8 <= 0) goto L8f
            android.view.View r3 = r15.getChildClosestToStart()
            int r3 = r15.getPosition(r3)
            r4 = r18
            r15.updateLayoutStateToFillStart(r3, r4)
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.mExtra = r8
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.mAvailable = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.assignPositionFromScrapList()
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r15.fill(r1, r3, r2, r5)
        L8f:
            if (r9 <= 0) goto Lb0
            android.view.View r3 = r15.getChildClosestToEnd()
            int r3 = r15.getPosition(r3)
            r4 = r19
            r15.updateLayoutStateToFillEnd(r3, r4)
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.mExtra = r9
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.mAvailable = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r3.assignPositionFromScrapList()
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r0.mLayoutState
            r15.fill(r1, r3, r2, r5)
        Lb0:
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r0.mLayoutState
            r2 = 0
            r1.mScrapList = r2
        Lb5:
            return
    }

    private void logChildren() {
            r5 = this;
            java.lang.String r0 = "LinearLayoutManager"
            java.lang.String r1 = "internal representation of views on the screen"
            android.util.Log.d(r0, r1)
            r1 = 0
        L8:
            int r2 = r5.getChildCount()
            if (r1 >= r2) goto L3b
            android.view.View r2 = r5.getChildAt(r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "item "
            r3.append(r4)
            int r4 = r5.getPosition(r2)
            r3.append(r4)
            java.lang.String r4 = ", coord:"
            r3.append(r4)
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r2 = r4.getDecoratedStart(r2)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            android.util.Log.d(r0, r2)
            int r1 = r1 + 1
            goto L8
        L3b:
            java.lang.String r1 = "=============="
            android.util.Log.d(r0, r1)
            return
    }

    private void recycleByLayoutState(android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.LinearLayoutManager.LayoutState r4) {
            r2 = this;
            boolean r0 = r4.mRecycle
            if (r0 == 0) goto L19
            boolean r0 = r4.mInfinite
            if (r0 == 0) goto L9
            goto L19
        L9:
            int r0 = r4.mLayoutDirection
            r1 = -1
            if (r0 != r1) goto L14
            int r4 = r4.mScrollingOffset
            r2.recycleViewsFromEnd(r3, r4)
            goto L19
        L14:
            int r4 = r4.mScrollingOffset
            r2.recycleViewsFromStart(r3, r4)
        L19:
            return
    }

    private void recycleChildren(android.support.v7.widget.RecyclerView.Recycler r1, int r2, int r3) {
            r0 = this;
            if (r2 != r3) goto L3
            return
        L3:
            if (r3 <= r2) goto Lf
            int r3 = r3 + (-1)
        L7:
            if (r3 < r2) goto L17
            r0.removeAndRecycleViewAt(r3, r1)
            int r3 = r3 + (-1)
            goto L7
        Lf:
            if (r2 <= r3) goto L17
            r0.removeAndRecycleViewAt(r2, r1)
            int r2 = r2 + (-1)
            goto Lf
        L17:
            return
    }

    private void recycleViewsFromEnd(android.support.v7.widget.RecyclerView.Recycler r6, int r7) {
            r5 = this;
            int r0 = r5.getChildCount()
            if (r7 >= 0) goto L7
            return
        L7:
            android.support.v7.widget.OrientationHelper r1 = r5.mOrientationHelper
            int r1 = r1.getEnd()
            int r1 = r1 - r7
            boolean r7 = r5.mShouldReverseLayout
            if (r7 == 0) goto L32
            r7 = 0
            r2 = r7
        L14:
            if (r2 >= r0) goto L52
            android.view.View r3 = r5.getChildAt(r2)
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r4 = r4.getDecoratedStart(r3)
            if (r4 < r1) goto L2e
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r3 = r4.getTransformedStartWithDecoration(r3)
            if (r3 >= r1) goto L2b
            goto L2e
        L2b:
            int r2 = r2 + 1
            goto L14
        L2e:
            r5.recycleChildren(r6, r7, r2)
            return
        L32:
            int r0 = r0 + (-1)
            r7 = r0
        L35:
            if (r7 < 0) goto L52
            android.view.View r2 = r5.getChildAt(r7)
            android.support.v7.widget.OrientationHelper r3 = r5.mOrientationHelper
            int r3 = r3.getDecoratedStart(r2)
            if (r3 < r1) goto L4f
            android.support.v7.widget.OrientationHelper r3 = r5.mOrientationHelper
            int r2 = r3.getTransformedStartWithDecoration(r2)
            if (r2 >= r1) goto L4c
            goto L4f
        L4c:
            int r7 = r7 + (-1)
            goto L35
        L4f:
            r5.recycleChildren(r6, r0, r7)
        L52:
            return
    }

    private void recycleViewsFromStart(android.support.v7.widget.RecyclerView.Recycler r6, int r7) {
            r5 = this;
            if (r7 >= 0) goto L3
            return
        L3:
            int r0 = r5.getChildCount()
            boolean r1 = r5.mShouldReverseLayout
            if (r1 == 0) goto L2c
            int r0 = r0 + (-1)
            r1 = r0
        Le:
            if (r1 < 0) goto L4b
            android.view.View r2 = r5.getChildAt(r1)
            android.support.v7.widget.OrientationHelper r3 = r5.mOrientationHelper
            int r3 = r3.getDecoratedEnd(r2)
            if (r3 > r7) goto L28
            android.support.v7.widget.OrientationHelper r3 = r5.mOrientationHelper
            int r2 = r3.getTransformedEndWithDecoration(r2)
            if (r2 <= r7) goto L25
            goto L28
        L25:
            int r1 = r1 + (-1)
            goto Le
        L28:
            r5.recycleChildren(r6, r0, r1)
            return
        L2c:
            r1 = 0
            r2 = r1
        L2e:
            if (r2 >= r0) goto L4b
            android.view.View r3 = r5.getChildAt(r2)
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r4 = r4.getDecoratedEnd(r3)
            if (r4 > r7) goto L48
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r3 = r4.getTransformedEndWithDecoration(r3)
            if (r3 <= r7) goto L45
            goto L48
        L45:
            int r2 = r2 + 1
            goto L2e
        L48:
            r5.recycleChildren(r6, r1, r2)
        L4b:
            return
    }

    private void resolveShouldLayoutReverse() {
            r2 = this;
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 == r1) goto L12
            boolean r0 = r2.isLayoutRTL()
            if (r0 != 0) goto Lc
            goto L12
        Lc:
            boolean r0 = r2.mReverseLayout
            r0 = r0 ^ r1
            r2.mShouldReverseLayout = r0
            goto L16
        L12:
            boolean r0 = r2.mReverseLayout
            r2.mShouldReverseLayout = r0
        L16:
            return
    }

    private boolean updateAnchorFromChildren(android.support.v7.widget.RecyclerView.Recycler r5, android.support.v7.widget.RecyclerView.State r6, android.support.v7.widget.LinearLayoutManager.AnchorInfo r7) {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.view.View r0 = r4.getFocusedChild()
            r2 = 1
            if (r0 == 0) goto L1d
            boolean r3 = r7.isViewValidAsAnchor(r0, r6)
            if (r3 == 0) goto L1d
            int r5 = r4.getPosition(r0)
            r7.assignFromViewAndKeepVisibleRect(r0, r5)
            return r2
        L1d:
            boolean r0 = r4.mLastStackFromEnd
            boolean r3 = r4.mStackFromEnd
            if (r0 == r3) goto L24
            return r1
        L24:
            boolean r0 = r7.mLayoutFromEnd
            if (r0 == 0) goto L2d
            android.view.View r5 = r4.findReferenceChildClosestToEnd(r5, r6)
            goto L31
        L2d:
            android.view.View r5 = r4.findReferenceChildClosestToStart(r5, r6)
        L31:
            if (r5 == 0) goto L79
            int r0 = r4.getPosition(r5)
            r7.assignFromView(r5, r0)
            boolean r6 = r6.isPreLayout()
            if (r6 != 0) goto L78
            boolean r6 = r4.supportsPredictiveItemAnimations()
            if (r6 == 0) goto L78
            android.support.v7.widget.OrientationHelper r6 = r4.mOrientationHelper
            int r6 = r6.getDecoratedStart(r5)
            android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
            int r0 = r0.getEndAfterPadding()
            if (r6 >= r0) goto L62
            android.support.v7.widget.OrientationHelper r6 = r4.mOrientationHelper
            int r5 = r6.getDecoratedEnd(r5)
            android.support.v7.widget.OrientationHelper r6 = r4.mOrientationHelper
            int r6 = r6.getStartAfterPadding()
            if (r5 >= r6) goto L63
        L62:
            r1 = r2
        L63:
            if (r1 == 0) goto L78
            boolean r5 = r7.mLayoutFromEnd
            if (r5 == 0) goto L70
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getEndAfterPadding()
            goto L76
        L70:
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
        L76:
            r7.mCoordinate = r5
        L78:
            return r2
        L79:
            return r1
    }

    private boolean updateAnchorFromPendingData(android.support.v7.widget.RecyclerView.State r5, android.support.v7.widget.LinearLayoutManager.AnchorInfo r6) {
            r4 = this;
            boolean r0 = r5.isPreLayout()
            r1 = 0
            if (r0 != 0) goto L100
            int r0 = r4.mPendingScrollPosition
            r2 = -1
            if (r0 != r2) goto Le
            goto L100
        Le:
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 < 0) goto Lfc
            int r5 = r5.getItemCount()
            if (r0 < r5) goto L1a
            goto Lfc
        L1a:
            int r5 = r4.mPendingScrollPosition
            r6.mPosition = r5
            android.support.v7.widget.LinearLayoutManager$SavedState r5 = r4.mPendingSavedState
            r0 = 1
            if (r5 == 0) goto L4f
            boolean r5 = r5.hasValidAnchor()
            if (r5 == 0) goto L4f
            android.support.v7.widget.LinearLayoutManager$SavedState r5 = r4.mPendingSavedState
            boolean r5 = r5.mAnchorLayoutFromEnd
            r6.mLayoutFromEnd = r5
            boolean r5 = r6.mLayoutFromEnd
            if (r5 == 0) goto L41
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getEndAfterPadding()
            android.support.v7.widget.LinearLayoutManager$SavedState r1 = r4.mPendingSavedState
            int r1 = r1.mAnchorOffset
            int r5 = r5 - r1
            r6.mCoordinate = r5
            goto L4e
        L41:
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
            android.support.v7.widget.LinearLayoutManager$SavedState r1 = r4.mPendingSavedState
            int r1 = r1.mAnchorOffset
            int r5 = r5 + r1
            r6.mCoordinate = r5
        L4e:
            return r0
        L4f:
            int r5 = r4.mPendingScrollPositionOffset
            if (r5 != r3) goto Ldc
            int r5 = r4.mPendingScrollPosition
            android.view.View r5 = r4.findViewByPosition(r5)
            if (r5 == 0) goto Lbc
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getDecoratedMeasurement(r5)
            android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
            int r3 = r3.getTotalSpace()
            if (r2 <= r3) goto L6d
            r6.assignCoordinateFromPadding()
            return r0
        L6d:
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getDecoratedStart(r5)
            android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
            int r3 = r3.getStartAfterPadding()
            int r2 = r2 - r3
            if (r2 >= 0) goto L87
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
            r6.mCoordinate = r5
            r6.mLayoutFromEnd = r1
            return r0
        L87:
            android.support.v7.widget.OrientationHelper r1 = r4.mOrientationHelper
            int r1 = r1.getEndAfterPadding()
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getDecoratedEnd(r5)
            int r1 = r1 - r2
            if (r1 >= 0) goto La1
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getEndAfterPadding()
            r6.mCoordinate = r5
            r6.mLayoutFromEnd = r0
            return r0
        La1:
            boolean r1 = r6.mLayoutFromEnd
            if (r1 == 0) goto Lb3
            android.support.v7.widget.OrientationHelper r1 = r4.mOrientationHelper
            int r5 = r1.getDecoratedEnd(r5)
            android.support.v7.widget.OrientationHelper r1 = r4.mOrientationHelper
            int r1 = r1.getTotalSpaceChange()
            int r5 = r5 + r1
            goto Lb9
        Lb3:
            android.support.v7.widget.OrientationHelper r1 = r4.mOrientationHelper
            int r5 = r1.getDecoratedStart(r5)
        Lb9:
            r6.mCoordinate = r5
            goto Ldb
        Lbc:
            int r5 = r4.getChildCount()
            if (r5 <= 0) goto Ld8
            android.view.View r5 = r4.getChildAt(r1)
            int r5 = r4.getPosition(r5)
            int r2 = r4.mPendingScrollPosition
            if (r2 >= r5) goto Ld0
            r5 = r0
            goto Ld1
        Ld0:
            r5 = r1
        Ld1:
            boolean r2 = r4.mShouldReverseLayout
            if (r5 != r2) goto Ld6
            r1 = r0
        Ld6:
            r6.mLayoutFromEnd = r1
        Ld8:
            r6.assignCoordinateFromPadding()
        Ldb:
            return r0
        Ldc:
            boolean r5 = r4.mShouldReverseLayout
            r6.mLayoutFromEnd = r5
            boolean r5 = r4.mShouldReverseLayout
            if (r5 == 0) goto Lf0
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getEndAfterPadding()
            int r1 = r4.mPendingScrollPositionOffset
            int r5 = r5 - r1
            r6.mCoordinate = r5
            goto Lfb
        Lf0:
            android.support.v7.widget.OrientationHelper r5 = r4.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
            int r1 = r4.mPendingScrollPositionOffset
            int r5 = r5 + r1
            r6.mCoordinate = r5
        Lfb:
            return r0
        Lfc:
            r4.mPendingScrollPosition = r2
            r4.mPendingScrollPositionOffset = r3
        L100:
            return r1
    }

    private void updateAnchorInfoForLayout(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, android.support.v7.widget.LinearLayoutManager.AnchorInfo r4) {
            r1 = this;
            boolean r0 = r1.updateAnchorFromPendingData(r3, r4)
            if (r0 == 0) goto L7
            return
        L7:
            boolean r2 = r1.updateAnchorFromChildren(r2, r3, r4)
            if (r2 == 0) goto Le
            return
        Le:
            r4.assignCoordinateFromPadding()
            boolean r2 = r1.mStackFromEnd
            if (r2 == 0) goto L1c
            int r2 = r3.getItemCount()
            int r2 = r2 + (-1)
            goto L1d
        L1c:
            r2 = 0
        L1d:
            r4.mPosition = r2
            return
    }

    private void updateLayoutState(int r5, int r6, boolean r7, android.support.v7.widget.RecyclerView.State r8) {
            r4 = this;
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r4.mLayoutState
            boolean r1 = r4.resolveIsInfinite()
            r0.mInfinite = r1
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r4.mLayoutState
            int r8 = r4.getExtraLayoutSpace(r8)
            r0.mExtra = r8
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            r8.mLayoutDirection = r5
            r8 = -1
            r0 = 1
            if (r5 != r0) goto L58
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r4.mLayoutState
            int r1 = r5.mExtra
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getEndPadding()
            int r1 = r1 + r2
            r5.mExtra = r1
            android.view.View r5 = r4.getChildClosestToEnd()
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r4.mLayoutState
            boolean r2 = r4.mShouldReverseLayout
            if (r2 == 0) goto L30
            goto L31
        L30:
            r8 = r0
        L31:
            r1.mItemDirection = r8
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            int r0 = r4.getPosition(r5)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r4.mLayoutState
            int r1 = r1.mItemDirection
            int r0 = r0 + r1
            r8.mCurrentPosition = r0
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
            int r0 = r0.getDecoratedEnd(r5)
            r8.mOffset = r0
            android.support.v7.widget.OrientationHelper r8 = r4.mOrientationHelper
            int r5 = r8.getDecoratedEnd(r5)
            android.support.v7.widget.OrientationHelper r8 = r4.mOrientationHelper
            int r8 = r8.getEndAfterPadding()
            int r5 = r5 - r8
            goto L97
        L58:
            android.view.View r5 = r4.getChildClosestToStart()
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r4.mLayoutState
            int r2 = r1.mExtra
            android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
            int r3 = r3.getStartAfterPadding()
            int r2 = r2 + r3
            r1.mExtra = r2
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r4.mLayoutState
            boolean r2 = r4.mShouldReverseLayout
            if (r2 == 0) goto L70
            r8 = r0
        L70:
            r1.mItemDirection = r8
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            int r0 = r4.getPosition(r5)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r4.mLayoutState
            int r1 = r1.mItemDirection
            int r0 = r0 + r1
            r8.mCurrentPosition = r0
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            android.support.v7.widget.OrientationHelper r0 = r4.mOrientationHelper
            int r0 = r0.getDecoratedStart(r5)
            r8.mOffset = r0
            android.support.v7.widget.OrientationHelper r8 = r4.mOrientationHelper
            int r5 = r8.getDecoratedStart(r5)
            int r5 = -r5
            android.support.v7.widget.OrientationHelper r8 = r4.mOrientationHelper
            int r8 = r8.getStartAfterPadding()
            int r5 = r5 + r8
        L97:
            android.support.v7.widget.LinearLayoutManager$LayoutState r8 = r4.mLayoutState
            r8.mAvailable = r6
            if (r7 == 0) goto La4
            android.support.v7.widget.LinearLayoutManager$LayoutState r6 = r4.mLayoutState
            int r7 = r6.mAvailable
            int r7 = r7 - r5
            r6.mAvailable = r7
        La4:
            android.support.v7.widget.LinearLayoutManager$LayoutState r6 = r4.mLayoutState
            r6.mScrollingOffset = r5
            return
    }

    private void updateLayoutStateToFillEnd(int r4, int r5) {
            r3 = this;
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r3.mLayoutState
            android.support.v7.widget.OrientationHelper r1 = r3.mOrientationHelper
            int r1 = r1.getEndAfterPadding()
            int r1 = r1 - r5
            r0.mAvailable = r1
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r3.mLayoutState
            boolean r1 = r3.mShouldReverseLayout
            r2 = 1
            if (r1 == 0) goto L14
            r1 = -1
            goto L15
        L14:
            r1 = r2
        L15:
            r0.mItemDirection = r1
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r3.mLayoutState
            r0.mCurrentPosition = r4
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r3.mLayoutState
            r4.mLayoutDirection = r2
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r3.mLayoutState
            r4.mOffset = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r3.mLayoutState
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r4.mScrollingOffset = r5
            return
    }

    private void updateLayoutStateToFillEnd(android.support.v7.widget.LinearLayoutManager.AnchorInfo r2) {
            r1 = this;
            int r0 = r2.mPosition
            int r2 = r2.mCoordinate
            r1.updateLayoutStateToFillEnd(r0, r2)
            return
    }

    private void updateLayoutStateToFillStart(int r3, int r4) {
            r2 = this;
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r2.mLayoutState
            android.support.v7.widget.OrientationHelper r1 = r2.mOrientationHelper
            int r1 = r1.getStartAfterPadding()
            int r1 = r4 - r1
            r0.mAvailable = r1
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r2.mLayoutState
            r0.mCurrentPosition = r3
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r2.mLayoutState
            boolean r0 = r2.mShouldReverseLayout
            r1 = -1
            if (r0 == 0) goto L19
            r0 = 1
            goto L1a
        L19:
            r0 = r1
        L1a:
            r3.mItemDirection = r0
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r2.mLayoutState
            r3.mLayoutDirection = r1
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r2.mLayoutState
            r3.mOffset = r4
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r2.mLayoutState
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.mScrollingOffset = r4
            return
    }

    private void updateLayoutStateToFillStart(android.support.v7.widget.LinearLayoutManager.AnchorInfo r2) {
            r1 = this;
            int r0 = r2.mPosition
            int r2 = r2.mCoordinate
            r1.updateLayoutStateToFillStart(r0, r2)
            return
    }

    @Override
    public void assertNotInLayoutOrScroll(java.lang.String r2) {
            r1 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r1.mPendingSavedState
            if (r0 != 0) goto L7
            super.assertNotInLayoutOrScroll(r2)
        L7:
            return
    }

    @Override
    public boolean canScrollHorizontally() {
            r1 = this;
            int r0 = r1.mOrientation
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public boolean canScrollVertically() {
            r2 = this;
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    @Override
    public void collectAdjacentPrefetchPositions(int r2, int r3, android.support.v7.widget.RecyclerView.State r4, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r5) {
            r1 = this;
            int r0 = r1.mOrientation
            if (r0 != 0) goto L5
            goto L6
        L5:
            r2 = r3
        L6:
            int r3 = r1.getChildCount()
            if (r3 == 0) goto L24
            if (r2 != 0) goto Lf
            goto L24
        Lf:
            r1.ensureLayoutState()
            r3 = 1
            if (r2 <= 0) goto L17
            r0 = r3
            goto L18
        L17:
            r0 = -1
        L18:
            int r2 = java.lang.Math.abs(r2)
            r1.updateLayoutState(r0, r2, r3, r4)
            android.support.v7.widget.LinearLayoutManager$LayoutState r2 = r1.mLayoutState
            r1.collectPrefetchPositionsForLayoutState(r4, r2, r5)
        L24:
            return
    }

    @Override
    public void collectInitialPrefetchPositions(int r6, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r7) {
            r5 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r5.mPendingSavedState
            r1 = -1
            r2 = 0
            if (r0 == 0) goto L15
            boolean r0 = r0.hasValidAnchor()
            if (r0 == 0) goto L15
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r5.mPendingSavedState
            boolean r0 = r0.mAnchorLayoutFromEnd
            android.support.v7.widget.LinearLayoutManager$SavedState r3 = r5.mPendingSavedState
            int r3 = r3.mAnchorPosition
            goto L24
        L15:
            r5.resolveShouldLayoutReverse()
            boolean r0 = r5.mShouldReverseLayout
            int r3 = r5.mPendingScrollPosition
            if (r3 != r1) goto L24
            if (r0 == 0) goto L23
            int r3 = r6 + (-1)
            goto L24
        L23:
            r3 = r2
        L24:
            if (r0 == 0) goto L27
            goto L28
        L27:
            r1 = 1
        L28:
            r0 = r2
        L29:
            int r4 = r5.mInitialPrefetchItemCount
            if (r0 >= r4) goto L38
            if (r3 < 0) goto L38
            if (r3 >= r6) goto L38
            r7.addPosition(r3, r2)
            int r3 = r3 + r1
            int r0 = r0 + 1
            goto L29
        L38:
            return
    }

    void collectPrefetchPositionsForLayoutState(android.support.v7.widget.RecyclerView.State r2, android.support.v7.widget.LinearLayoutManager.LayoutState r3, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r4) {
            r1 = this;
            int r0 = r3.mCurrentPosition
            if (r0 < 0) goto L14
            int r2 = r2.getItemCount()
            if (r0 >= r2) goto L14
            r2 = 0
            int r3 = r3.mScrollingOffset
            int r2 = java.lang.Math.max(r2, r3)
            r4.addPosition(r0, r2)
        L14:
            return
    }

    @Override
    public int computeHorizontalScrollExtent(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollExtent(r1)
            return r1
    }

    @Override
    public int computeHorizontalScrollOffset(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollOffset(r1)
            return r1
    }

    @Override
    public int computeHorizontalScrollRange(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollRange(r1)
            return r1
    }

    @Override
    public android.graphics.PointF computeScrollVectorForPosition(int r4) {
            r3 = this;
            int r0 = r3.getChildCount()
            if (r0 != 0) goto L8
            r4 = 0
            return r4
        L8:
            r0 = 0
            android.view.View r1 = r3.getChildAt(r0)
            int r1 = r3.getPosition(r1)
            r2 = 1
            if (r4 >= r1) goto L15
            r0 = r2
        L15:
            boolean r4 = r3.mShouldReverseLayout
            if (r0 == r4) goto L1a
            r2 = -1
        L1a:
            int r4 = r3.mOrientation
            r0 = 0
            if (r4 != 0) goto L26
            android.graphics.PointF r4 = new android.graphics.PointF
            float r1 = (float) r2
            r4.<init>(r1, r0)
            return r4
        L26:
            android.graphics.PointF r4 = new android.graphics.PointF
            float r1 = (float) r2
            r4.<init>(r0, r1)
            return r4
    }

    @Override
    public int computeVerticalScrollExtent(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollExtent(r1)
            return r1
    }

    @Override
    public int computeVerticalScrollOffset(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollOffset(r1)
            return r1
    }

    @Override
    public int computeVerticalScrollRange(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            int r1 = r0.computeScrollRange(r1)
            return r1
    }

    int convertFocusDirectionToLayoutDirection(int r5) {
            r4 = this;
            r0 = -1
            r1 = 1
            if (r5 == r1) goto L43
            r2 = 2
            if (r5 == r2) goto L36
            r2 = 17
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r5 == r2) goto L2f
            r2 = 33
            if (r5 == r2) goto L28
            r0 = 66
            if (r5 == r0) goto L21
            r0 = 130(0x82, float:1.82E-43)
            if (r5 == r0) goto L1a
            return r3
        L1a:
            int r5 = r4.mOrientation
            if (r5 != r1) goto L1f
            goto L20
        L1f:
            r1 = r3
        L20:
            return r1
        L21:
            int r5 = r4.mOrientation
            if (r5 != 0) goto L26
            goto L27
        L26:
            r1 = r3
        L27:
            return r1
        L28:
            int r5 = r4.mOrientation
            if (r5 != r1) goto L2d
            goto L2e
        L2d:
            r0 = r3
        L2e:
            return r0
        L2f:
            int r5 = r4.mOrientation
            if (r5 != 0) goto L34
            goto L35
        L34:
            r0 = r3
        L35:
            return r0
        L36:
            int r5 = r4.mOrientation
            if (r5 != r1) goto L3b
            return r1
        L3b:
            boolean r5 = r4.isLayoutRTL()
            if (r5 == 0) goto L42
            return r0
        L42:
            return r1
        L43:
            int r5 = r4.mOrientation
            if (r5 != r1) goto L48
            return r0
        L48:
            boolean r5 = r4.isLayoutRTL()
            if (r5 == 0) goto L4f
            return r1
        L4f:
            return r0
    }

    android.support.v7.widget.LinearLayoutManager.LayoutState createLayoutState() {
            r1 = this;
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = new android.support.v7.widget.LinearLayoutManager$LayoutState
            r0.<init>()
            return r0
    }

    void ensureLayoutState() {
            r1 = this;
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r1.mLayoutState
            if (r0 != 0) goto La
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r1.createLayoutState()
            r1.mLayoutState = r0
        La:
            return
    }

    int fill(android.support.v7.widget.RecyclerView.Recycler r8, android.support.v7.widget.LinearLayoutManager.LayoutState r9, android.support.v7.widget.RecyclerView.State r10, boolean r11) {
            r7 = this;
            int r0 = r9.mAvailable
            int r1 = r9.mScrollingOffset
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r2) goto L16
            int r1 = r9.mAvailable
            if (r1 >= 0) goto L13
            int r1 = r9.mScrollingOffset
            int r3 = r9.mAvailable
            int r1 = r1 + r3
            r9.mScrollingOffset = r1
        L13:
            r7.recycleByLayoutState(r8, r9)
        L16:
            int r1 = r9.mAvailable
            int r3 = r9.mExtra
            int r1 = r1 + r3
            android.support.v7.widget.LinearLayoutManager$LayoutChunkResult r3 = r7.mLayoutChunkResult
        L1d:
            boolean r4 = r9.mInfinite
            if (r4 != 0) goto L23
            if (r1 <= 0) goto L77
        L23:
            boolean r4 = r9.hasMore(r10)
            if (r4 == 0) goto L77
            r3.resetInternal()
            r7.layoutChunk(r8, r10, r9, r3)
            boolean r4 = r3.mFinished
            if (r4 == 0) goto L34
            goto L77
        L34:
            int r4 = r9.mOffset
            int r5 = r3.mConsumed
            int r6 = r9.mLayoutDirection
            int r5 = r5 * r6
            int r4 = r4 + r5
            r9.mOffset = r4
            boolean r4 = r3.mIgnoreConsumed
            if (r4 == 0) goto L4e
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r7.mLayoutState
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r4 = r4.mScrapList
            if (r4 != 0) goto L4e
            boolean r4 = r10.isPreLayout()
            if (r4 != 0) goto L58
        L4e:
            int r4 = r9.mAvailable
            int r5 = r3.mConsumed
            int r4 = r4 - r5
            r9.mAvailable = r4
            int r4 = r3.mConsumed
            int r1 = r1 - r4
        L58:
            int r4 = r9.mScrollingOffset
            if (r4 == r2) goto L71
            int r4 = r9.mScrollingOffset
            int r5 = r3.mConsumed
            int r4 = r4 + r5
            r9.mScrollingOffset = r4
            int r4 = r9.mAvailable
            if (r4 >= 0) goto L6e
            int r4 = r9.mScrollingOffset
            int r5 = r9.mAvailable
            int r4 = r4 + r5
            r9.mScrollingOffset = r4
        L6e:
            r7.recycleByLayoutState(r8, r9)
        L71:
            if (r11 == 0) goto L1d
            boolean r4 = r3.mFocusable
            if (r4 == 0) goto L1d
        L77:
            int r8 = r9.mAvailable
            int r0 = r0 - r8
            return r0
    }

    public int findFirstCompletelyVisibleItemPosition() {
            r3 = this;
            int r0 = r3.getChildCount()
            r1 = 0
            r2 = 1
            android.view.View r0 = r3.findOneVisibleChild(r1, r0, r2, r1)
            if (r0 != 0) goto Le
            r0 = -1
            goto L12
        Le:
            int r0 = r3.getPosition(r0)
        L12:
            return r0
    }

    public int findFirstVisibleItemPosition() {
            r3 = this;
            int r0 = r3.getChildCount()
            r1 = 0
            r2 = 1
            android.view.View r0 = r3.findOneVisibleChild(r1, r0, r1, r2)
            if (r0 != 0) goto Le
            r0 = -1
            goto L12
        Le:
            int r0 = r3.getPosition(r0)
        L12:
            return r0
    }

    public int findLastCompletelyVisibleItemPosition() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 1
            int r0 = r0 - r1
            r2 = -1
            r3 = 0
            android.view.View r0 = r4.findOneVisibleChild(r0, r2, r1, r3)
            if (r0 != 0) goto Lf
            goto L13
        Lf:
            int r2 = r4.getPosition(r0)
        L13:
            return r2
    }

    public int findLastVisibleItemPosition() {
            r4 = this;
            int r0 = r4.getChildCount()
            r1 = 1
            int r0 = r0 - r1
            r2 = -1
            r3 = 0
            android.view.View r0 = r4.findOneVisibleChild(r0, r2, r3, r1)
            if (r0 != 0) goto Lf
            goto L13
        Lf:
            int r2 = r4.getPosition(r0)
        L13:
            return r2
    }

    android.view.View findOnePartiallyOrCompletelyInvisibleChild(int r4, int r5) {
            r3 = this;
            r3.ensureLayoutState()
            if (r5 <= r4) goto L7
            r0 = 1
            goto Lc
        L7:
            if (r5 >= r4) goto Lb
            r0 = -1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 != 0) goto L13
            android.view.View r4 = r3.getChildAt(r4)
            return r4
        L13:
            android.support.v7.widget.OrientationHelper r0 = r3.mOrientationHelper
            android.view.View r1 = r3.getChildAt(r4)
            int r0 = r0.getDecoratedStart(r1)
            android.support.v7.widget.OrientationHelper r1 = r3.mOrientationHelper
            int r1 = r1.getStartAfterPadding()
            if (r0 >= r1) goto L2a
            r0 = 16644(0x4104, float:2.3323E-41)
            r1 = 16388(0x4004, float:2.2964E-41)
            goto L2e
        L2a:
            r0 = 4161(0x1041, float:5.831E-42)
            r1 = 4097(0x1001, float:5.741E-42)
        L2e:
            int r2 = r3.mOrientation
            if (r2 != 0) goto L39
            android.support.v7.widget.ViewBoundsCheck r2 = r3.mHorizontalBoundCheck
            android.view.View r4 = r2.findOneViewWithinBoundFlags(r4, r5, r0, r1)
            goto L3f
        L39:
            android.support.v7.widget.ViewBoundsCheck r2 = r3.mVerticalBoundCheck
            android.view.View r4 = r2.findOneViewWithinBoundFlags(r4, r5, r0, r1)
        L3f:
            return r4
    }

    android.view.View findOneVisibleChild(int r2, int r3, boolean r4, boolean r5) {
            r1 = this;
            r1.ensureLayoutState()
            r0 = 320(0x140, float:4.48E-43)
            if (r4 == 0) goto La
            r4 = 24579(0x6003, float:3.4443E-41)
            goto Lb
        La:
            r4 = r0
        Lb:
            if (r5 == 0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            int r5 = r1.mOrientation
            if (r5 != 0) goto L1a
            android.support.v7.widget.ViewBoundsCheck r5 = r1.mHorizontalBoundCheck
            android.view.View r2 = r5.findOneViewWithinBoundFlags(r2, r3, r4, r0)
            goto L20
        L1a:
            android.support.v7.widget.ViewBoundsCheck r5 = r1.mVerticalBoundCheck
            android.view.View r2 = r5.findOneViewWithinBoundFlags(r2, r3, r4, r0)
        L20:
            return r2
    }

    android.view.View findReferenceChild(android.support.v7.widget.RecyclerView.Recycler r6, android.support.v7.widget.RecyclerView.State r7, int r8, int r9, int r10) {
            r5 = this;
            r5.ensureLayoutState()
            android.support.v7.widget.OrientationHelper r6 = r5.mOrientationHelper
            int r6 = r6.getStartAfterPadding()
            android.support.v7.widget.OrientationHelper r7 = r5.mOrientationHelper
            int r7 = r7.getEndAfterPadding()
            if (r9 <= r8) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = -1
        L14:
            r1 = 0
            r2 = r1
        L16:
            if (r8 == r9) goto L4b
            android.view.View r3 = r5.getChildAt(r8)
            int r4 = r5.getPosition(r3)
            if (r4 < 0) goto L49
            if (r4 >= r10) goto L49
            android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r4 = (android.support.v7.widget.RecyclerView.LayoutParams) r4
            boolean r4 = r4.isItemRemoved()
            if (r4 == 0) goto L34
            if (r2 != 0) goto L49
            r2 = r3
            goto L49
        L34:
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r4 = r4.getDecoratedStart(r3)
            if (r4 >= r7) goto L46
            android.support.v7.widget.OrientationHelper r4 = r5.mOrientationHelper
            int r4 = r4.getDecoratedEnd(r3)
            if (r4 >= r6) goto L45
            goto L46
        L45:
            return r3
        L46:
            if (r1 != 0) goto L49
            r1 = r3
        L49:
            int r8 = r8 + r0
            goto L16
        L4b:
            if (r1 == 0) goto L4e
            goto L4f
        L4e:
            r1 = r2
        L4f:
            return r1
    }

    @Override
    public android.view.View findViewByPosition(int r3) {
            r2 = this;
            int r0 = r2.getChildCount()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            r1 = 0
            android.view.View r1 = r2.getChildAt(r1)
            int r1 = r2.getPosition(r1)
            int r1 = r3 - r1
            if (r1 < 0) goto L22
            if (r1 >= r0) goto L22
            android.view.View r0 = r2.getChildAt(r1)
            int r1 = r2.getPosition(r0)
            if (r1 != r3) goto L22
            return r0
        L22:
            android.view.View r3 = super.findViewByPosition(r3)
            return r3
    }

    @Override
    public android.support.v7.widget.RecyclerView.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.v7.widget.RecyclerView$LayoutParams r0 = new android.support.v7.widget.RecyclerView$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            return r0
    }

    protected int getExtraLayoutSpace(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            boolean r1 = r1.hasTargetScrollPosition()
            if (r1 == 0) goto Ld
            android.support.v7.widget.OrientationHelper r1 = r0.mOrientationHelper
            int r1 = r1.getTotalSpace()
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public int getInitialPrefetchItemCount() {
            r1 = this;
            int r0 = r1.mInitialPrefetchItemCount
            return r0
    }

    public int getOrientation() {
            r1 = this;
            int r0 = r1.mOrientation
            return r0
    }

    public boolean getRecycleChildrenOnDetach() {
            r1 = this;
            boolean r0 = r1.mRecycleChildrenOnDetach
            return r0
    }

    public boolean getReverseLayout() {
            r1 = this;
            boolean r0 = r1.mReverseLayout
            return r0
    }

    public boolean getStackFromEnd() {
            r1 = this;
            boolean r0 = r1.mStackFromEnd
            return r0
    }

    @Override
    public boolean isAutoMeasureEnabled() {
            r1 = this;
            r0 = 1
            return r0
    }

    protected boolean isLayoutRTL() {
            r2 = this;
            int r0 = r2.getLayoutDirection()
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public boolean isSmoothScrollbarEnabled() {
            r1 = this;
            boolean r0 = r1.mSmoothScrollbarEnabled
            return r0
    }

    void layoutChunk(android.support.v7.widget.RecyclerView.Recycler r8, android.support.v7.widget.RecyclerView.State r9, android.support.v7.widget.LinearLayoutManager.LayoutState r10, android.support.v7.widget.LinearLayoutManager.LayoutChunkResult r11) {
            r7 = this;
            android.view.View r8 = r10.next(r8)
            r9 = 1
            if (r8 != 0) goto La
            r11.mFinished = r9
            return
        La:
            android.view.ViewGroup$LayoutParams r0 = r8.getLayoutParams()
            r6 = r0
            android.support.v7.widget.RecyclerView$LayoutParams r6 = (android.support.v7.widget.RecyclerView.LayoutParams) r6
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r0 = r10.mScrapList
            r1 = -1
            r2 = 0
            if (r0 != 0) goto L2a
            boolean r0 = r7.mShouldReverseLayout
            int r3 = r10.mLayoutDirection
            if (r3 != r1) goto L1f
            r3 = r9
            goto L20
        L1f:
            r3 = r2
        L20:
            if (r0 != r3) goto L26
            r7.addView(r8)
            goto L3c
        L26:
            r7.addView(r8, r2)
            goto L3c
        L2a:
            boolean r0 = r7.mShouldReverseLayout
            int r3 = r10.mLayoutDirection
            if (r3 != r1) goto L32
            r3 = r9
            goto L33
        L32:
            r3 = r2
        L33:
            if (r0 != r3) goto L39
            r7.addDisappearingView(r8)
            goto L3c
        L39:
            r7.addDisappearingView(r8, r2)
        L3c:
            r7.measureChildWithMargins(r8, r2, r2)
            android.support.v7.widget.OrientationHelper r0 = r7.mOrientationHelper
            int r0 = r0.getDecoratedMeasurement(r8)
            r11.mConsumed = r0
            int r0 = r7.mOrientation
            if (r0 != r9) goto L88
            boolean r0 = r7.isLayoutRTL()
            if (r0 == 0) goto L63
            int r0 = r7.getWidth()
            int r2 = r7.getPaddingRight()
            int r0 = r0 - r2
            android.support.v7.widget.OrientationHelper r2 = r7.mOrientationHelper
            int r2 = r2.getDecoratedMeasurementInOther(r8)
            int r2 = r0 - r2
            goto L6e
        L63:
            int r2 = r7.getPaddingLeft()
            android.support.v7.widget.OrientationHelper r0 = r7.mOrientationHelper
            int r0 = r0.getDecoratedMeasurementInOther(r8)
            int r0 = r0 + r2
        L6e:
            int r3 = r10.mLayoutDirection
            if (r3 != r1) goto L7d
            int r1 = r10.mOffset
            int r10 = r10.mOffset
            int r3 = r11.mConsumed
            int r10 = r10 - r3
            r3 = r10
            r4 = r0
            r5 = r1
            goto Lae
        L7d:
            int r1 = r10.mOffset
            int r10 = r10.mOffset
            int r3 = r11.mConsumed
            int r10 = r10 + r3
            r5 = r10
            r4 = r0
            r3 = r1
            goto Lae
        L88:
            int r0 = r7.getPaddingTop()
            android.support.v7.widget.OrientationHelper r2 = r7.mOrientationHelper
            int r2 = r2.getDecoratedMeasurementInOther(r8)
            int r2 = r2 + r0
            int r3 = r10.mLayoutDirection
            if (r3 != r1) goto La3
            int r1 = r10.mOffset
            int r10 = r10.mOffset
            int r3 = r11.mConsumed
            int r10 = r10 - r3
            r3 = r0
            r4 = r1
            r5 = r2
            r2 = r10
            goto Lae
        La3:
            int r1 = r10.mOffset
            int r10 = r10.mOffset
            int r3 = r11.mConsumed
            int r10 = r10 + r3
            r4 = r10
            r3 = r0
            r5 = r2
            r2 = r1
        Lae:
            r0 = r7
            r1 = r8
            r0.layoutDecoratedWithMargins(r1, r2, r3, r4, r5)
            boolean r10 = r6.isItemRemoved()
            if (r10 != 0) goto Lbf
            boolean r10 = r6.isItemChanged()
            if (r10 == 0) goto Lc1
        Lbf:
            r11.mIgnoreConsumed = r9
        Lc1:
            boolean r8 = r8.hasFocusable()
            r11.mFocusable = r8
            return
    }

    void onAnchorReady(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2, android.support.v7.widget.LinearLayoutManager.AnchorInfo r3, int r4) {
            r0 = this;
            return
    }

    @Override
    public void onDetachedFromWindow(android.support.v7.widget.RecyclerView r1, android.support.v7.widget.RecyclerView.Recycler r2) {
            r0 = this;
            super.onDetachedFromWindow(r1, r2)
            boolean r1 = r0.mRecycleChildrenOnDetach
            if (r1 == 0) goto Ld
            r0.removeAndRecycleAllViews(r2)
            r2.clear()
        Ld:
            return
    }

    @Override
    public android.view.View onFocusSearchFailed(android.view.View r4, int r5, android.support.v7.widget.RecyclerView.Recycler r6, android.support.v7.widget.RecyclerView.State r7) {
            r3 = this;
            r3.resolveShouldLayoutReverse()
            int r4 = r3.getChildCount()
            r0 = 0
            if (r4 != 0) goto Lb
            return r0
        Lb:
            int r4 = r3.convertFocusDirectionToLayoutDirection(r5)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 != r5) goto L14
            return r0
        L14:
            r3.ensureLayoutState()
            r3.ensureLayoutState()
            r1 = 1051372203(0x3eaaaaab, float:0.33333334)
            android.support.v7.widget.OrientationHelper r2 = r3.mOrientationHelper
            int r2 = r2.getTotalSpace()
            float r2 = (float) r2
            float r2 = r2 * r1
            int r1 = (int) r2
            r2 = 0
            r3.updateLayoutState(r4, r1, r2, r7)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r3.mLayoutState
            r1.mScrollingOffset = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r3.mLayoutState
            r5.mRecycle = r2
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r3.mLayoutState
            r1 = 1
            r3.fill(r6, r5, r7, r1)
            r5 = -1
            if (r4 != r5) goto L40
            android.view.View r6 = r3.findPartiallyOrCompletelyInvisibleChildClosestToStart(r6, r7)
            goto L44
        L40:
            android.view.View r6 = r3.findPartiallyOrCompletelyInvisibleChildClosestToEnd(r6, r7)
        L44:
            if (r4 != r5) goto L4b
            android.view.View r4 = r3.getChildClosestToStart()
            goto L4f
        L4b:
            android.view.View r4 = r3.getChildClosestToEnd()
        L4f:
            boolean r5 = r4.hasFocusable()
            if (r5 == 0) goto L59
            if (r6 != 0) goto L58
            return r0
        L58:
            return r4
        L59:
            return r6
    }

    @Override
    public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
            r1 = this;
            super.onInitializeAccessibilityEvent(r2)
            int r0 = r1.getChildCount()
            if (r0 <= 0) goto L17
            int r0 = r1.findFirstVisibleItemPosition()
            r2.setFromIndex(r0)
            int r0 = r1.findLastVisibleItemPosition()
            r2.setToIndex(r0)
        L17:
            return
    }

    @Override
    public void onLayoutChildren(android.support.v7.widget.RecyclerView.Recycler r9, android.support.v7.widget.RecyclerView.State r10) {
            r8 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r8.mPendingSavedState
            r1 = -1
            if (r0 != 0) goto L9
            int r0 = r8.mPendingScrollPosition
            if (r0 == r1) goto L13
        L9:
            int r0 = r10.getItemCount()
            if (r0 != 0) goto L13
            r8.removeAndRecycleAllViews(r9)
            return
        L13:
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r8.mPendingSavedState
            if (r0 == 0) goto L23
            boolean r0 = r0.hasValidAnchor()
            if (r0 == 0) goto L23
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r8.mPendingSavedState
            int r0 = r0.mAnchorPosition
            r8.mPendingScrollPosition = r0
        L23:
            r8.ensureLayoutState()
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            r2 = 0
            r0.mRecycle = r2
            r8.resolveShouldLayoutReverse()
            android.view.View r0 = r8.getFocusedChild()
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r3 = r8.mAnchorInfo
            boolean r3 = r3.mValid
            r4 = 1
            if (r3 == 0) goto L6a
            int r3 = r8.mPendingScrollPosition
            if (r3 != r1) goto L6a
            android.support.v7.widget.LinearLayoutManager$SavedState r3 = r8.mPendingSavedState
            if (r3 == 0) goto L42
            goto L6a
        L42:
            if (r0 == 0) goto L81
            android.support.v7.widget.OrientationHelper r3 = r8.mOrientationHelper
            int r3 = r3.getDecoratedStart(r0)
            android.support.v7.widget.OrientationHelper r5 = r8.mOrientationHelper
            int r5 = r5.getEndAfterPadding()
            if (r3 >= r5) goto L60
            android.support.v7.widget.OrientationHelper r3 = r8.mOrientationHelper
            int r3 = r3.getDecoratedEnd(r0)
            android.support.v7.widget.OrientationHelper r5 = r8.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
            if (r3 > r5) goto L81
        L60:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r3 = r8.mAnchorInfo
            int r5 = r8.getPosition(r0)
            r3.assignFromViewAndKeepVisibleRect(r0, r5)
            goto L81
        L6a:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r0 = r8.mAnchorInfo
            r0.reset()
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r0 = r8.mAnchorInfo
            boolean r3 = r8.mShouldReverseLayout
            boolean r5 = r8.mStackFromEnd
            r3 = r3 ^ r5
            r0.mLayoutFromEnd = r3
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r0 = r8.mAnchorInfo
            r8.updateAnchorInfoForLayout(r9, r10, r0)
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r0 = r8.mAnchorInfo
            r0.mValid = r4
        L81:
            int r0 = r8.getExtraLayoutSpace(r10)
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r8.mLayoutState
            int r3 = r3.mLastScrollDelta
            if (r3 < 0) goto L8e
            r3 = r0
            r0 = r2
            goto L8f
        L8e:
            r3 = r2
        L8f:
            android.support.v7.widget.OrientationHelper r5 = r8.mOrientationHelper
            int r5 = r5.getStartAfterPadding()
            int r0 = r0 + r5
            android.support.v7.widget.OrientationHelper r5 = r8.mOrientationHelper
            int r5 = r5.getEndPadding()
            int r3 = r3 + r5
            boolean r5 = r10.isPreLayout()
            if (r5 == 0) goto Ldc
            int r5 = r8.mPendingScrollPosition
            if (r5 == r1) goto Ldc
            int r6 = r8.mPendingScrollPositionOffset
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r6 == r7) goto Ldc
            android.view.View r5 = r8.findViewByPosition(r5)
            if (r5 == 0) goto Ldc
            boolean r6 = r8.mShouldReverseLayout
            if (r6 == 0) goto Lc7
            android.support.v7.widget.OrientationHelper r6 = r8.mOrientationHelper
            int r6 = r6.getEndAfterPadding()
            android.support.v7.widget.OrientationHelper r7 = r8.mOrientationHelper
            int r5 = r7.getDecoratedEnd(r5)
            int r6 = r6 - r5
            int r5 = r8.mPendingScrollPositionOffset
            goto Ld6
        Lc7:
            android.support.v7.widget.OrientationHelper r6 = r8.mOrientationHelper
            int r5 = r6.getDecoratedStart(r5)
            android.support.v7.widget.OrientationHelper r6 = r8.mOrientationHelper
            int r6 = r6.getStartAfterPadding()
            int r5 = r5 - r6
            int r6 = r8.mPendingScrollPositionOffset
        Ld6:
            int r6 = r6 - r5
            if (r6 <= 0) goto Ldb
            int r0 = r0 + r6
            goto Ldc
        Ldb:
            int r3 = r3 - r6
        Ldc:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r5 = r8.mAnchorInfo
            boolean r5 = r5.mLayoutFromEnd
            if (r5 == 0) goto Le8
            boolean r5 = r8.mShouldReverseLayout
            if (r5 == 0) goto Lec
        Le6:
            r1 = r4
            goto Lec
        Le8:
            boolean r5 = r8.mShouldReverseLayout
            if (r5 == 0) goto Le6
        Lec:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r5 = r8.mAnchorInfo
            r8.onAnchorReady(r9, r10, r5, r1)
            r8.detachAndScrapAttachedViews(r9)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            boolean r5 = r8.resolveIsInfinite()
            r1.mInfinite = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            boolean r5 = r10.isPreLayout()
            r1.mIsPreLayout = r5
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r1 = r8.mAnchorInfo
            boolean r1 = r1.mLayoutFromEnd
            if (r1 == 0) goto L163
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r1 = r8.mAnchorInfo
            r8.updateLayoutStateToFillStart(r1)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            r1.mExtra = r0
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            r8.fill(r9, r0, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            int r0 = r0.mOffset
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            int r1 = r1.mCurrentPosition
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            if (r5 <= 0) goto L12b
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            int r3 = r3 + r5
        L12b:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r5 = r8.mAnchorInfo
            r8.updateLayoutStateToFillEnd(r5)
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            r5.mExtra = r3
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r8.mLayoutState
            int r5 = r3.mCurrentPosition
            android.support.v7.widget.LinearLayoutManager$LayoutState r6 = r8.mLayoutState
            int r6 = r6.mItemDirection
            int r5 = r5 + r6
            r3.mCurrentPosition = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r8.mLayoutState
            r8.fill(r9, r3, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r3 = r8.mLayoutState
            int r3 = r3.mOffset
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            if (r5 <= 0) goto L1bb
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            r8.updateLayoutStateToFillStart(r1, r0)
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            r0.mExtra = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            r8.fill(r9, r0, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            int r0 = r0.mOffset
            goto L1bb
        L163:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r1 = r8.mAnchorInfo
            r8.updateLayoutStateToFillEnd(r1)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            r1.mExtra = r3
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            r8.fill(r9, r1, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            int r3 = r1.mOffset
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            int r1 = r1.mCurrentPosition
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            if (r5 <= 0) goto L184
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            int r0 = r0 + r5
        L184:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r5 = r8.mAnchorInfo
            r8.updateLayoutStateToFillStart(r5)
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            r5.mExtra = r0
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            int r5 = r0.mCurrentPosition
            android.support.v7.widget.LinearLayoutManager$LayoutState r6 = r8.mLayoutState
            int r6 = r6.mItemDirection
            int r5 = r5 + r6
            r0.mCurrentPosition = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            r8.fill(r9, r0, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r8.mLayoutState
            int r0 = r0.mOffset
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            if (r5 <= 0) goto L1bb
            android.support.v7.widget.LinearLayoutManager$LayoutState r5 = r8.mLayoutState
            int r5 = r5.mAvailable
            r8.updateLayoutStateToFillEnd(r1, r3)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            r1.mExtra = r5
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            r8.fill(r9, r1, r10, r2)
            android.support.v7.widget.LinearLayoutManager$LayoutState r1 = r8.mLayoutState
            int r3 = r1.mOffset
        L1bb:
            int r1 = r8.getChildCount()
            if (r1 <= 0) goto L1df
            boolean r1 = r8.mShouldReverseLayout
            boolean r5 = r8.mStackFromEnd
            r1 = r1 ^ r5
            if (r1 == 0) goto L1d3
            int r1 = r8.fixLayoutEndGap(r3, r9, r10, r4)
            int r0 = r0 + r1
            int r3 = r3 + r1
            int r1 = r8.fixLayoutStartGap(r0, r9, r10, r2)
            goto L1dd
        L1d3:
            int r1 = r8.fixLayoutStartGap(r0, r9, r10, r4)
            int r0 = r0 + r1
            int r3 = r3 + r1
            int r1 = r8.fixLayoutEndGap(r3, r9, r10, r2)
        L1dd:
            int r0 = r0 + r1
            int r3 = r3 + r1
        L1df:
            r8.layoutForPredictiveAnimations(r9, r10, r0, r3)
            boolean r9 = r10.isPreLayout()
            if (r9 != 0) goto L1ee
            android.support.v7.widget.OrientationHelper r9 = r8.mOrientationHelper
            r9.onLayoutComplete()
            goto L1f3
        L1ee:
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r9 = r8.mAnchorInfo
            r9.reset()
        L1f3:
            boolean r9 = r8.mStackFromEnd
            r8.mLastStackFromEnd = r9
            return
    }

    @Override
    public void onLayoutCompleted(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            super.onLayoutCompleted(r1)
            r1 = 0
            r0.mPendingSavedState = r1
            r1 = -1
            r0.mPendingScrollPosition = r1
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.mPendingScrollPositionOffset = r1
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r1 = r0.mAnchorInfo
            r1.reset()
            return
    }

    @Override
    public void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.v7.widget.LinearLayoutManager.SavedState
            if (r0 == 0) goto Lb
            android.support.v7.widget.LinearLayoutManager$SavedState r2 = (android.support.v7.widget.LinearLayoutManager.SavedState) r2
            r1.mPendingSavedState = r2
            r1.requestLayout()
        Lb:
            return
    }

    @Override
    public android.os.Parcelable onSaveInstanceState() {
            r4 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r4.mPendingSavedState
            if (r0 == 0) goto Lc
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = new android.support.v7.widget.LinearLayoutManager$SavedState
            android.support.v7.widget.LinearLayoutManager$SavedState r1 = r4.mPendingSavedState
            r0.<init>(r1)
            return r0
        Lc:
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = new android.support.v7.widget.LinearLayoutManager$SavedState
            r0.<init>()
            int r1 = r4.getChildCount()
            if (r1 <= 0) goto L57
            r4.ensureLayoutState()
            boolean r1 = r4.mLastStackFromEnd
            boolean r2 = r4.mShouldReverseLayout
            r1 = r1 ^ r2
            r0.mAnchorLayoutFromEnd = r1
            if (r1 == 0) goto L3d
            android.view.View r1 = r4.getChildClosestToEnd()
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getEndAfterPadding()
            android.support.v7.widget.OrientationHelper r3 = r4.mOrientationHelper
            int r3 = r3.getDecoratedEnd(r1)
            int r2 = r2 - r3
            r0.mAnchorOffset = r2
            int r1 = r4.getPosition(r1)
            r0.mAnchorPosition = r1
            goto L5a
        L3d:
            android.view.View r1 = r4.getChildClosestToStart()
            int r2 = r4.getPosition(r1)
            r0.mAnchorPosition = r2
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r1 = r2.getDecoratedStart(r1)
            android.support.v7.widget.OrientationHelper r2 = r4.mOrientationHelper
            int r2 = r2.getStartAfterPadding()
            int r1 = r1 - r2
            r0.mAnchorOffset = r1
            goto L5a
        L57:
            r0.invalidateAnchor()
        L5a:
            return r0
    }

    @Override
    public void prepareForDrop(android.view.View r4, android.view.View r5, int r6, int r7) {
            r3 = this;
            java.lang.String r6 = "Cannot drop a view during a scroll or layout calculation"
            r3.assertNotInLayoutOrScroll(r6)
            r3.ensureLayoutState()
            r3.resolveShouldLayoutReverse()
            int r6 = r3.getPosition(r4)
            int r7 = r3.getPosition(r5)
            r0 = 1
            r1 = -1
            if (r6 >= r7) goto L19
            r6 = r0
            goto L1a
        L19:
            r6 = r1
        L1a:
            boolean r2 = r3.mShouldReverseLayout
            if (r2 == 0) goto L49
            if (r6 != r0) goto L38
            android.support.v7.widget.OrientationHelper r6 = r3.mOrientationHelper
            int r6 = r6.getEndAfterPadding()
            android.support.v7.widget.OrientationHelper r0 = r3.mOrientationHelper
            int r5 = r0.getDecoratedStart(r5)
            android.support.v7.widget.OrientationHelper r0 = r3.mOrientationHelper
            int r4 = r0.getDecoratedMeasurement(r4)
            int r5 = r5 + r4
            int r6 = r6 - r5
            r3.scrollToPositionWithOffset(r7, r6)
            goto L65
        L38:
            android.support.v7.widget.OrientationHelper r4 = r3.mOrientationHelper
            int r4 = r4.getEndAfterPadding()
            android.support.v7.widget.OrientationHelper r6 = r3.mOrientationHelper
            int r5 = r6.getDecoratedEnd(r5)
            int r4 = r4 - r5
            r3.scrollToPositionWithOffset(r7, r4)
            goto L65
        L49:
            if (r6 != r1) goto L55
            android.support.v7.widget.OrientationHelper r4 = r3.mOrientationHelper
            int r4 = r4.getDecoratedStart(r5)
            r3.scrollToPositionWithOffset(r7, r4)
            goto L65
        L55:
            android.support.v7.widget.OrientationHelper r6 = r3.mOrientationHelper
            int r5 = r6.getDecoratedEnd(r5)
            android.support.v7.widget.OrientationHelper r6 = r3.mOrientationHelper
            int r4 = r6.getDecoratedMeasurement(r4)
            int r5 = r5 - r4
            r3.scrollToPositionWithOffset(r7, r5)
        L65:
            return
    }

    boolean resolveIsInfinite() {
            r1 = this;
            android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
            int r0 = r0.getMode()
            if (r0 != 0) goto L12
            android.support.v7.widget.OrientationHelper r0 = r1.mOrientationHelper
            int r0 = r0.getEnd()
            if (r0 != 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    int scrollBy(int r6, android.support.v7.widget.RecyclerView.Recycler r7, android.support.v7.widget.RecyclerView.State r8) {
            r5 = this;
            int r0 = r5.getChildCount()
            r1 = 0
            if (r0 == 0) goto L3b
            if (r6 != 0) goto La
            goto L3b
        La:
            android.support.v7.widget.LinearLayoutManager$LayoutState r0 = r5.mLayoutState
            r2 = 1
            r0.mRecycle = r2
            r5.ensureLayoutState()
            if (r6 <= 0) goto L16
            r0 = r2
            goto L17
        L16:
            r0 = -1
        L17:
            int r3 = java.lang.Math.abs(r6)
            r5.updateLayoutState(r0, r3, r2, r8)
            android.support.v7.widget.LinearLayoutManager$LayoutState r2 = r5.mLayoutState
            int r2 = r2.mScrollingOffset
            android.support.v7.widget.LinearLayoutManager$LayoutState r4 = r5.mLayoutState
            int r7 = r5.fill(r7, r4, r8, r1)
            int r2 = r2 + r7
            if (r2 >= 0) goto L2c
            return r1
        L2c:
            if (r3 <= r2) goto L30
            int r6 = r0 * r2
        L30:
            android.support.v7.widget.OrientationHelper r7 = r5.mOrientationHelper
            int r8 = -r6
            r7.offsetChildren(r8)
            android.support.v7.widget.LinearLayoutManager$LayoutState r7 = r5.mLayoutState
            r7.mLastScrollDelta = r6
            return r6
        L3b:
            return r1
    }

    @Override
    public int scrollHorizontallyBy(int r3, android.support.v7.widget.RecyclerView.Recycler r4, android.support.v7.widget.RecyclerView.State r5) {
            r2 = this;
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 != r1) goto L7
            r3 = 0
            return r3
        L7:
            int r3 = r2.scrollBy(r3, r4, r5)
            return r3
    }

    @Override
    public void scrollToPosition(int r1) {
            r0 = this;
            r0.mPendingScrollPosition = r1
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.mPendingScrollPositionOffset = r1
            android.support.v7.widget.LinearLayoutManager$SavedState r1 = r0.mPendingSavedState
            if (r1 == 0) goto Ld
            r1.invalidateAnchor()
        Ld:
            r0.requestLayout()
            return
    }

    public void scrollToPositionWithOffset(int r1, int r2) {
            r0 = this;
            r0.mPendingScrollPosition = r1
            r0.mPendingScrollPositionOffset = r2
            android.support.v7.widget.LinearLayoutManager$SavedState r1 = r0.mPendingSavedState
            if (r1 == 0) goto Lb
            r1.invalidateAnchor()
        Lb:
            r0.requestLayout()
            return
    }

    @Override
    public int scrollVerticallyBy(int r2, android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4) {
            r1 = this;
            int r0 = r1.mOrientation
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            int r2 = r1.scrollBy(r2, r3, r4)
            return r2
    }

    public void setInitialPrefetchItemCount(int r1) {
            r0 = this;
            r0.mInitialPrefetchItemCount = r1
            return
    }

    public void setOrientation(int r4) {
            r3 = this;
            if (r4 == 0) goto L1d
            r0 = 1
            if (r4 != r0) goto L6
            goto L1d
        L6:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid orientation:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L1d:
            r0 = 0
            r3.assertNotInLayoutOrScroll(r0)
            int r0 = r3.mOrientation
            if (r4 != r0) goto L29
            android.support.v7.widget.OrientationHelper r0 = r3.mOrientationHelper
            if (r0 != 0) goto L38
        L29:
            android.support.v7.widget.OrientationHelper r0 = android.support.v7.widget.OrientationHelper.createOrientationHelper(r3, r4)
            r3.mOrientationHelper = r0
            android.support.v7.widget.LinearLayoutManager$AnchorInfo r1 = r3.mAnchorInfo
            r1.mOrientationHelper = r0
            r3.mOrientation = r4
            r3.requestLayout()
        L38:
            return
    }

    public void setRecycleChildrenOnDetach(boolean r1) {
            r0 = this;
            r0.mRecycleChildrenOnDetach = r1
            return
    }

    public void setReverseLayout(boolean r2) {
            r1 = this;
            r0 = 0
            r1.assertNotInLayoutOrScroll(r0)
            boolean r0 = r1.mReverseLayout
            if (r2 != r0) goto L9
            return
        L9:
            r1.mReverseLayout = r2
            r1.requestLayout()
            return
    }

    public void setSmoothScrollbarEnabled(boolean r1) {
            r0 = this;
            r0.mSmoothScrollbarEnabled = r1
            return
    }

    public void setStackFromEnd(boolean r2) {
            r1 = this;
            r0 = 0
            r1.assertNotInLayoutOrScroll(r0)
            boolean r0 = r1.mStackFromEnd
            if (r0 != r2) goto L9
            return
        L9:
            r1.mStackFromEnd = r2
            r1.requestLayout()
            return
    }

    @Override
    boolean shouldMeasureTwice() {
            r2 = this;
            int r0 = r2.getHeightMode()
            r1 = 1073741824(0x40000000, float:2.0)
            if (r0 == r1) goto L16
            int r0 = r2.getWidthMode()
            if (r0 == r1) goto L16
            boolean r0 = r2.hasFlexibleChildInBothOrientations()
            if (r0 == 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    @Override
    public void smoothScrollToPosition(android.support.v7.widget.RecyclerView r1, android.support.v7.widget.RecyclerView.State r2, int r3) {
            r0 = this;
            android.support.v7.widget.LinearSmoothScroller r2 = new android.support.v7.widget.LinearSmoothScroller
            android.content.Context r1 = r1.getContext()
            r2.<init>(r1)
            r2.setTargetPosition(r3)
            r0.startSmoothScroll(r2)
            return
    }

    @Override
    public boolean supportsPredictiveItemAnimations() {
            r2 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r2.mPendingSavedState
            if (r0 != 0) goto Lc
            boolean r0 = r2.mLastStackFromEnd
            boolean r1 = r2.mStackFromEnd
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    void validateChildOrder() {
            r10 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "validating child count "
            r0.append(r1)
            int r1 = r10.getChildCount()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LinearLayoutManager"
            android.util.Log.d(r1, r0)
            int r0 = r10.getChildCount()
            r1 = 1
            if (r0 >= r1) goto L22
            return
        L22:
            r0 = 0
            android.view.View r2 = r10.getChildAt(r0)
            int r2 = r10.getPosition(r2)
            android.support.v7.widget.OrientationHelper r3 = r10.mOrientationHelper
            android.view.View r4 = r10.getChildAt(r0)
            int r3 = r3.getDecoratedStart(r4)
            boolean r4 = r10.mShouldReverseLayout
            java.lang.String r5 = "detected invalid location"
            java.lang.String r6 = "detected invalid position. loc invalid? "
            if (r4 == 0) goto L7e
            r4 = r1
        L3e:
            int r7 = r10.getChildCount()
            if (r4 >= r7) goto Lbf
            android.view.View r7 = r10.getChildAt(r4)
            int r8 = r10.getPosition(r7)
            android.support.v7.widget.OrientationHelper r9 = r10.mOrientationHelper
            int r7 = r9.getDecoratedStart(r7)
            if (r8 >= r2) goto L70
            r10.logChildren()
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            if (r7 >= r3) goto L64
            goto L65
        L64:
            r1 = r0
        L65:
            r4.append(r1)
            java.lang.String r0 = r4.toString()
            r2.<init>(r0)
            throw r2
        L70:
            if (r7 > r3) goto L75
            int r4 = r4 + 1
            goto L3e
        L75:
            r10.logChildren()
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r5)
            throw r0
        L7e:
            r4 = r1
        L7f:
            int r7 = r10.getChildCount()
            if (r4 >= r7) goto Lbf
            android.view.View r7 = r10.getChildAt(r4)
            int r8 = r10.getPosition(r7)
            android.support.v7.widget.OrientationHelper r9 = r10.mOrientationHelper
            int r7 = r9.getDecoratedStart(r7)
            if (r8 >= r2) goto Lb1
            r10.logChildren()
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            if (r7 >= r3) goto La5
            goto La6
        La5:
            r1 = r0
        La6:
            r4.append(r1)
            java.lang.String r0 = r4.toString()
            r2.<init>(r0)
            throw r2
        Lb1:
            if (r7 < r3) goto Lb6
            int r4 = r4 + 1
            goto L7f
        Lb6:
            r10.logChildren()
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r5)
            throw r0
        Lbf:
            return
    }
}
