package android.support.v7.widget;

public class GridLayoutManager extends android.support.v7.widget.LinearLayoutManager {
    private static final boolean DEBUG = false;
    public static final int DEFAULT_SPAN_COUNT = -1;
    private static final java.lang.String TAG = "GridLayoutManager";
    int[] mCachedBorders;
    final android.graphics.Rect mDecorInsets;
    boolean mPendingSpanCountChange;
    final android.util.SparseIntArray mPreLayoutSpanIndexCache;
    final android.util.SparseIntArray mPreLayoutSpanSizeCache;
    android.view.View[] mSet;
    int mSpanCount;
    android.support.v7.widget.GridLayoutManager.SpanSizeLookup mSpanSizeLookup;

    public static final class DefaultSpanSizeLookup extends android.support.v7.widget.GridLayoutManager.SpanSizeLookup {
        public DefaultSpanSizeLookup() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public int getSpanIndex(int r1, int r2) {
                r0 = this;
                int r1 = r1 % r2
                return r1
        }

        @Override
        public int getSpanSize(int r1) {
                r0 = this;
                r1 = 1
                return r1
        }
    }

    public static class LayoutParams extends android.support.v7.widget.RecyclerView.LayoutParams {
        public static final int INVALID_SPAN_ID = -1;
        int mSpanIndex;
        int mSpanSize;

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = -1
                r0.mSpanIndex = r1
                r1 = 0
                r0.mSpanSize = r1
                return
        }

        public LayoutParams(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = -1
                r0.mSpanIndex = r1
                r1 = 0
                r0.mSpanSize = r1
                return
        }

        public LayoutParams(android.support.v7.widget.RecyclerView.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.mSpanIndex = r1
                r1 = 0
                r0.mSpanSize = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.mSpanIndex = r1
                r1 = 0
                r0.mSpanSize = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.mSpanIndex = r1
                r1 = 0
                r0.mSpanSize = r1
                return
        }

        public int getSpanIndex() {
                r1 = this;
                int r0 = r1.mSpanIndex
                return r0
        }

        public int getSpanSize() {
                r1 = this;
                int r0 = r1.mSpanSize
                return r0
        }
    }

    public static abstract class SpanSizeLookup {
        private boolean mCacheSpanIndices;
        final android.util.SparseIntArray mSpanIndexCache;

        public SpanSizeLookup() {
                r1 = this;
                r1.<init>()
                android.util.SparseIntArray r0 = new android.util.SparseIntArray
                r0.<init>()
                r1.mSpanIndexCache = r0
                r0 = 0
                r1.mCacheSpanIndices = r0
                return
        }

        int findReferenceIndexFromCache(int r5) {
                r4 = this;
                android.util.SparseIntArray r0 = r4.mSpanIndexCache
                int r0 = r0.size()
                int r0 = r0 + (-1)
                r1 = 0
            L9:
                if (r1 > r0) goto L1f
                int r2 = r1 + r0
                int r2 = r2 >>> 1
                android.util.SparseIntArray r3 = r4.mSpanIndexCache
                int r3 = r3.keyAt(r2)
                if (r3 >= r5) goto L1b
                int r2 = r2 + 1
                r1 = r2
                goto L9
            L1b:
                int r2 = r2 + (-1)
                r0 = r2
                goto L9
            L1f:
                int r1 = r1 + (-1)
                if (r1 < 0) goto L32
                android.util.SparseIntArray r5 = r4.mSpanIndexCache
                int r5 = r5.size()
                if (r1 >= r5) goto L32
                android.util.SparseIntArray r5 = r4.mSpanIndexCache
                int r5 = r5.keyAt(r1)
                return r5
            L32:
                r5 = -1
                return r5
        }

        int getCachedSpanIndex(int r3, int r4) {
                r2 = this;
                boolean r0 = r2.mCacheSpanIndices
                if (r0 != 0) goto L9
                int r3 = r2.getSpanIndex(r3, r4)
                return r3
            L9:
                android.util.SparseIntArray r0 = r2.mSpanIndexCache
                r1 = -1
                int r0 = r0.get(r3, r1)
                if (r0 == r1) goto L13
                return r0
            L13:
                int r4 = r2.getSpanIndex(r3, r4)
                android.util.SparseIntArray r0 = r2.mSpanIndexCache
                r0.put(r3, r4)
                return r4
        }

        public int getSpanGroupIndex(int r7, int r8) {
                r6 = this;
                int r0 = r6.getSpanSize(r7)
                r1 = 0
                r2 = r1
                r3 = r2
                r4 = r3
            L8:
                if (r2 >= r7) goto L1d
                int r5 = r6.getSpanSize(r2)
                int r3 = r3 + r5
                if (r3 != r8) goto L15
                int r4 = r4 + 1
                r3 = r1
                goto L1a
            L15:
                if (r3 <= r8) goto L1a
                int r4 = r4 + 1
                r3 = r5
            L1a:
                int r2 = r2 + 1
                goto L8
            L1d:
                int r3 = r3 + r0
                if (r3 <= r8) goto L22
                int r4 = r4 + 1
            L22:
                return r4
        }

        public int getSpanIndex(int r6, int r7) {
                r5 = this;
                int r0 = r5.getSpanSize(r6)
                r1 = 0
                if (r0 != r7) goto L8
                return r1
            L8:
                boolean r2 = r5.mCacheSpanIndices
                if (r2 == 0) goto L26
                android.util.SparseIntArray r2 = r5.mSpanIndexCache
                int r2 = r2.size()
                if (r2 <= 0) goto L26
                int r2 = r5.findReferenceIndexFromCache(r6)
                if (r2 < 0) goto L26
                android.util.SparseIntArray r3 = r5.mSpanIndexCache
                int r3 = r3.get(r2)
                int r4 = r5.getSpanSize(r2)
                int r3 = r3 + r4
                goto L36
            L26:
                r2 = r1
                r3 = r2
            L28:
                if (r2 >= r6) goto L39
                int r4 = r5.getSpanSize(r2)
                int r3 = r3 + r4
                if (r3 != r7) goto L33
                r3 = r1
                goto L36
            L33:
                if (r3 <= r7) goto L36
                r3 = r4
            L36:
                int r2 = r2 + 1
                goto L28
            L39:
                int r0 = r0 + r3
                if (r0 > r7) goto L3d
                return r3
            L3d:
                return r1
        }

        public abstract int getSpanSize(int r1);

        public void invalidateSpanIndexCache() {
                r1 = this;
                android.util.SparseIntArray r0 = r1.mSpanIndexCache
                r0.clear()
                return
        }

        public boolean isSpanIndexCacheEnabled() {
                r1 = this;
                boolean r0 = r1.mCacheSpanIndices
                return r0
        }

        public void setSpanIndexCacheEnabled(boolean r1) {
                r0 = this;
                r0.mCacheSpanIndices = r1
                return
        }
    }

    public GridLayoutManager(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.mPendingSpanCountChange = r1
            r1 = -1
            r0.mSpanCount = r1
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            r0.mPreLayoutSpanSizeCache = r1
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            r0.mPreLayoutSpanIndexCache = r1
            android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup r1 = new android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup
            r1.<init>()
            r0.mSpanSizeLookup = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.mDecorInsets = r1
            r0.setSpanCount(r2)
            return
    }

    public GridLayoutManager(android.content.Context r1, int r2, int r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r3, r4)
            r1 = 0
            r0.mPendingSpanCountChange = r1
            r1 = -1
            r0.mSpanCount = r1
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            r0.mPreLayoutSpanSizeCache = r1
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            r0.mPreLayoutSpanIndexCache = r1
            android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup r1 = new android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup
            r1.<init>()
            r0.mSpanSizeLookup = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.mDecorInsets = r1
            r0.setSpanCount(r2)
            return
    }

    public GridLayoutManager(android.content.Context r2, android.util.AttributeSet r3, int r4, int r5) {
            r1 = this;
            r1.<init>(r2, r3, r4, r5)
            r0 = 0
            r1.mPendingSpanCountChange = r0
            r0 = -1
            r1.mSpanCount = r0
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            r1.mPreLayoutSpanSizeCache = r0
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            r1.mPreLayoutSpanIndexCache = r0
            android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup r0 = new android.support.v7.widget.GridLayoutManager$DefaultSpanSizeLookup
            r0.<init>()
            r1.mSpanSizeLookup = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.mDecorInsets = r0
            android.support.v7.widget.RecyclerView$LayoutManager$Properties r2 = getProperties(r2, r3, r4, r5)
            int r2 = r2.spanCount
            r1.setSpanCount(r2)
            return
    }

    private void assignSpans(android.support.v7.widget.RecyclerView.Recycler r4, android.support.v7.widget.RecyclerView.State r5, int r6, int r7, boolean r8) {
            r3 = this;
            r7 = 0
            r0 = -1
            if (r8 == 0) goto L9
            r0 = 1
            r8 = r0
            r0 = r6
            r6 = r7
            goto Lc
        L9:
            int r6 = r6 + (-1)
            r8 = r0
        Lc:
            if (r6 == r0) goto L29
            android.view.View[] r1 = r3.mSet
            r1 = r1[r6]
            android.view.ViewGroup$LayoutParams r2 = r1.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r2 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r2
            int r1 = r3.getPosition(r1)
            int r1 = r3.getSpanSize(r4, r5, r1)
            r2.mSpanSize = r1
            r2.mSpanIndex = r7
            int r1 = r2.mSpanSize
            int r7 = r7 + r1
            int r6 = r6 + r8
            goto Lc
        L29:
            return
    }

    private void cachePreLayoutSpanMapping() {
            r6 = this;
            int r0 = r6.getChildCount()
            r1 = 0
        L5:
            if (r1 >= r0) goto L2a
            android.view.View r2 = r6.getChildAt(r1)
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r2 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r2
            int r3 = r2.getViewLayoutPosition()
            android.util.SparseIntArray r4 = r6.mPreLayoutSpanSizeCache
            int r5 = r2.getSpanSize()
            r4.put(r3, r5)
            android.util.SparseIntArray r4 = r6.mPreLayoutSpanIndexCache
            int r2 = r2.getSpanIndex()
            r4.put(r3, r2)
            int r1 = r1 + 1
            goto L5
        L2a:
            return
    }

    private void calculateItemBorders(int r3) {
            r2 = this;
            int[] r0 = r2.mCachedBorders
            int r1 = r2.mSpanCount
            int[] r3 = calculateItemBorders(r0, r1, r3)
            r2.mCachedBorders = r3
            return
    }

    static int[] calculateItemBorders(int[] r5, int r6, int r7) {
            r0 = 1
            if (r5 == 0) goto Le
            int r1 = r5.length
            int r2 = r6 + 1
            if (r1 != r2) goto Le
            int r1 = r5.length
            int r1 = r1 - r0
            r1 = r5[r1]
            if (r1 == r7) goto L12
        Le:
            int r5 = r6 + 1
            int[] r5 = new int[r5]
        L12:
            r1 = 0
            r5[r1] = r1
            int r2 = r7 / r6
            int r7 = r7 % r6
            r3 = r1
        L19:
            if (r0 > r6) goto L2d
            int r1 = r1 + r7
            if (r1 <= 0) goto L26
            int r4 = r6 - r1
            if (r4 >= r7) goto L26
            int r4 = r2 + 1
            int r1 = r1 - r6
            goto L27
        L26:
            r4 = r2
        L27:
            int r3 = r3 + r4
            r5[r0] = r3
            int r0 = r0 + 1
            goto L19
        L2d:
            return r5
    }

    private void clearPreLayoutSpanMappingCache() {
            r1 = this;
            android.util.SparseIntArray r0 = r1.mPreLayoutSpanSizeCache
            r0.clear()
            android.util.SparseIntArray r0 = r1.mPreLayoutSpanIndexCache
            r0.clear()
            return
    }

    private void ensureAnchorIsInCorrectSpan(android.support.v7.widget.RecyclerView.Recycler r5, android.support.v7.widget.RecyclerView.State r6, android.support.v7.widget.LinearLayoutManager.AnchorInfo r7, int r8) {
            r4 = this;
            r0 = 1
            if (r8 != r0) goto L5
            r8 = r0
            goto L6
        L5:
            r8 = 0
        L6:
            int r1 = r7.mPosition
            int r1 = r4.getSpanIndex(r5, r6, r1)
            if (r8 == 0) goto L20
        Le:
            if (r1 <= 0) goto L36
            int r8 = r7.mPosition
            if (r8 <= 0) goto L36
            int r8 = r7.mPosition
            int r8 = r8 - r0
            r7.mPosition = r8
            int r8 = r7.mPosition
            int r1 = r4.getSpanIndex(r5, r6, r8)
            goto Le
        L20:
            int r8 = r6.getItemCount()
            int r8 = r8 - r0
            int r0 = r7.mPosition
        L27:
            if (r0 >= r8) goto L34
            int r2 = r0 + 1
            int r3 = r4.getSpanIndex(r5, r6, r2)
            if (r3 <= r1) goto L34
            r0 = r2
            r1 = r3
            goto L27
        L34:
            r7.mPosition = r0
        L36:
            return
    }

    private void ensureViewSet() {
            r2 = this;
            android.view.View[] r0 = r2.mSet
            if (r0 == 0) goto L9
            int r0 = r0.length
            int r1 = r2.mSpanCount
            if (r0 == r1) goto Lf
        L9:
            int r0 = r2.mSpanCount
            android.view.View[] r0 = new android.view.View[r0]
            r2.mSet = r0
        Lf:
            return
    }

    private int getSpanGroupIndex(android.support.v7.widget.RecyclerView.Recycler r1, android.support.v7.widget.RecyclerView.State r2, int r3) {
            r0 = this;
            boolean r2 = r2.isPreLayout()
            if (r2 != 0) goto Lf
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            int r2 = r0.mSpanCount
            int r1 = r1.getSpanGroupIndex(r3, r2)
            return r1
        Lf:
            int r1 = r1.convertPreLayoutPositionToPostLayout(r3)
            r2 = -1
            if (r1 != r2) goto L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cannot find span size for pre layout position. "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "GridLayoutManager"
            android.util.Log.w(r2, r1)
            r1 = 0
            return r1
        L2e:
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r2 = r0.mSpanSizeLookup
            int r3 = r0.mSpanCount
            int r1 = r2.getSpanGroupIndex(r1, r3)
            return r1
    }

    private int getSpanIndex(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, int r4) {
            r1 = this;
            boolean r3 = r3.isPreLayout()
            if (r3 != 0) goto Lf
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r2 = r1.mSpanSizeLookup
            int r3 = r1.mSpanCount
            int r2 = r2.getCachedSpanIndex(r4, r3)
            return r2
        Lf:
            android.util.SparseIntArray r3 = r1.mPreLayoutSpanIndexCache
            r0 = -1
            int r3 = r3.get(r4, r0)
            if (r3 == r0) goto L19
            return r3
        L19:
            int r2 = r2.convertPreLayoutPositionToPostLayout(r4)
            if (r2 != r0) goto L37
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Cannot find span size for pre layout position. It is not cached, not in the adapter. Pos:"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "GridLayoutManager"
            android.util.Log.w(r3, r2)
            r2 = 0
            return r2
        L37:
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r3 = r1.mSpanSizeLookup
            int r4 = r1.mSpanCount
            int r2 = r3.getCachedSpanIndex(r2, r4)
            return r2
    }

    private int getSpanSize(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, int r4) {
            r1 = this;
            boolean r3 = r3.isPreLayout()
            if (r3 != 0) goto Ld
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r2 = r1.mSpanSizeLookup
            int r2 = r2.getSpanSize(r4)
            return r2
        Ld:
            android.util.SparseIntArray r3 = r1.mPreLayoutSpanSizeCache
            r0 = -1
            int r3 = r3.get(r4, r0)
            if (r3 == r0) goto L17
            return r3
        L17:
            int r2 = r2.convertPreLayoutPositionToPostLayout(r4)
            if (r2 != r0) goto L35
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Cannot find span size for pre layout position. It is not cached, not in the adapter. Pos:"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "GridLayoutManager"
            android.util.Log.w(r3, r2)
            r2 = 1
            return r2
        L35:
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r3 = r1.mSpanSizeLookup
            int r2 = r3.getSpanSize(r2)
            return r2
    }

    private void guessMeasurement(float r2, int r3) {
            r1 = this;
            int r0 = r1.mSpanCount
            float r0 = (float) r0
            float r2 = r2 * r0
            int r2 = java.lang.Math.round(r2)
            int r2 = java.lang.Math.max(r2, r3)
            r1.calculateItemBorders(r2)
            return
    }

    private void measureChild(android.view.View r9, int r10, boolean r11) {
            r8 = this;
            android.view.ViewGroup$LayoutParams r0 = r9.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r0
            android.graphics.Rect r1 = r0.mDecorInsets
            int r2 = r1.top
            int r3 = r1.bottom
            int r2 = r2 + r3
            int r3 = r0.topMargin
            int r2 = r2 + r3
            int r3 = r0.bottomMargin
            int r2 = r2 + r3
            int r3 = r1.left
            int r1 = r1.right
            int r3 = r3 + r1
            int r1 = r0.leftMargin
            int r3 = r3 + r1
            int r1 = r0.rightMargin
            int r3 = r3 + r1
            int r1 = r0.mSpanIndex
            int r4 = r0.mSpanSize
            int r1 = r8.getSpaceForSpanRange(r1, r4)
            int r4 = r8.mOrientation
            r5 = 0
            r6 = 1
            if (r4 != r6) goto L43
            int r4 = r0.width
            int r10 = getChildMeasureSpec(r1, r10, r3, r4, r5)
            android.support.v7.widget.OrientationHelper r1 = r8.mOrientationHelper
            int r1 = r1.getTotalSpace()
            int r3 = r8.getHeightMode()
            int r0 = r0.height
            int r0 = getChildMeasureSpec(r1, r3, r2, r0, r6)
            goto L5c
        L43:
            int r4 = r0.height
            int r10 = getChildMeasureSpec(r1, r10, r2, r4, r5)
            android.support.v7.widget.OrientationHelper r1 = r8.mOrientationHelper
            int r1 = r1.getTotalSpace()
            int r2 = r8.getWidthMode()
            int r0 = r0.width
            int r0 = getChildMeasureSpec(r1, r2, r3, r0, r6)
            r7 = r0
            r0 = r10
            r10 = r7
        L5c:
            r8.measureChildWithDecorationsAndMargin(r9, r10, r0, r11)
            return
    }

    private void measureChildWithDecorationsAndMargin(android.view.View r2, int r3, int r4, boolean r5) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r0 = (android.support.v7.widget.RecyclerView.LayoutParams) r0
            if (r5 == 0) goto Ld
            boolean r5 = r1.shouldReMeasureChild(r2, r3, r4, r0)
            goto L11
        Ld:
            boolean r5 = r1.shouldMeasureChild(r2, r3, r4, r0)
        L11:
            if (r5 == 0) goto L16
            r2.measure(r3, r4)
        L16:
            return
    }

    private void updateMeasurements() {
            r2 = this;
            int r0 = r2.getOrientation()
            r1 = 1
            if (r0 != r1) goto L15
            int r0 = r2.getWidth()
            int r1 = r2.getPaddingRight()
            int r0 = r0 - r1
            int r1 = r2.getPaddingLeft()
            goto L22
        L15:
            int r0 = r2.getHeight()
            int r1 = r2.getPaddingBottom()
            int r0 = r0 - r1
            int r1 = r2.getPaddingTop()
        L22:
            int r0 = r0 - r1
            r2.calculateItemBorders(r0)
            return
    }

    @Override
    public boolean checkLayoutParams(android.support.v7.widget.RecyclerView.LayoutParams r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.support.v7.widget.GridLayoutManager.LayoutParams
            return r1
    }

    @Override
    void collectPrefetchPositionsForLayoutState(android.support.v7.widget.RecyclerView.State r6, android.support.v7.widget.LinearLayoutManager.LayoutState r7, android.support.v7.widget.RecyclerView.LayoutManager.LayoutPrefetchRegistry r8) {
            r5 = this;
            int r0 = r5.mSpanCount
            r1 = 0
            r2 = r1
        L4:
            int r3 = r5.mSpanCount
            if (r2 >= r3) goto L2c
            boolean r3 = r7.hasMore(r6)
            if (r3 == 0) goto L2c
            if (r0 <= 0) goto L2c
            int r3 = r7.mCurrentPosition
            int r4 = r7.mScrollingOffset
            int r4 = java.lang.Math.max(r1, r4)
            r8.addPosition(r3, r4)
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r4 = r5.mSpanSizeLookup
            int r3 = r4.getSpanSize(r3)
            int r0 = r0 - r3
            int r3 = r7.mCurrentPosition
            int r4 = r7.mItemDirection
            int r3 = r3 + r4
            r7.mCurrentPosition = r3
            int r2 = r2 + 1
            goto L4
        L2c:
            return
    }

    @Override
    android.view.View findReferenceChild(android.support.v7.widget.RecyclerView.Recycler r8, android.support.v7.widget.RecyclerView.State r9, int r10, int r11, int r12) {
            r7 = this;
            r7.ensureLayoutState()
            android.support.v7.widget.OrientationHelper r0 = r7.mOrientationHelper
            int r0 = r0.getStartAfterPadding()
            android.support.v7.widget.OrientationHelper r1 = r7.mOrientationHelper
            int r1 = r1.getEndAfterPadding()
            if (r11 <= r10) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = -1
        L14:
            r3 = 0
            r4 = r3
        L16:
            if (r10 == r11) goto L52
            android.view.View r5 = r7.getChildAt(r10)
            int r6 = r7.getPosition(r5)
            if (r6 < 0) goto L50
            if (r6 >= r12) goto L50
            int r6 = r7.getSpanIndex(r8, r9, r6)
            if (r6 == 0) goto L2b
            goto L50
        L2b:
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            android.support.v7.widget.RecyclerView$LayoutParams r6 = (android.support.v7.widget.RecyclerView.LayoutParams) r6
            boolean r6 = r6.isItemRemoved()
            if (r6 == 0) goto L3b
            if (r4 != 0) goto L50
            r4 = r5
            goto L50
        L3b:
            android.support.v7.widget.OrientationHelper r6 = r7.mOrientationHelper
            int r6 = r6.getDecoratedStart(r5)
            if (r6 >= r1) goto L4d
            android.support.v7.widget.OrientationHelper r6 = r7.mOrientationHelper
            int r6 = r6.getDecoratedEnd(r5)
            if (r6 >= r0) goto L4c
            goto L4d
        L4c:
            return r5
        L4d:
            if (r3 != 0) goto L50
            r3 = r5
        L50:
            int r10 = r10 + r2
            goto L16
        L52:
            if (r3 == 0) goto L55
            goto L56
        L55:
            r3 = r4
        L56:
            return r3
    }

    @Override
    public android.support.v7.widget.RecyclerView.LayoutParams generateDefaultLayoutParams() {
            r3 = this;
            int r0 = r3.mOrientation
            r1 = -2
            r2 = -1
            if (r0 != 0) goto Lc
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = new android.support.v7.widget.GridLayoutManager$LayoutParams
            r0.<init>(r1, r2)
            return r0
        Lc:
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = new android.support.v7.widget.GridLayoutManager$LayoutParams
            r0.<init>(r2, r1)
            return r0
    }

    @Override
    public android.support.v7.widget.RecyclerView.LayoutParams generateLayoutParams(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = new android.support.v7.widget.GridLayoutManager$LayoutParams
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    public android.support.v7.widget.RecyclerView.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r0 == 0) goto Lc
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = new android.support.v7.widget.GridLayoutManager$LayoutParams
            android.view.ViewGroup$MarginLayoutParams r2 = (android.view.ViewGroup.MarginLayoutParams) r2
            r0.<init>(r2)
            return r0
        Lc:
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = new android.support.v7.widget.GridLayoutManager$LayoutParams
            r0.<init>(r2)
            return r0
    }

    @Override
    public int getColumnCountForAccessibility(android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4) {
            r2 = this;
            int r0 = r2.mOrientation
            r1 = 1
            if (r0 != r1) goto L8
            int r3 = r2.mSpanCount
            return r3
        L8:
            int r0 = r4.getItemCount()
            if (r0 >= r1) goto L10
            r3 = 0
            return r3
        L10:
            int r0 = r4.getItemCount()
            int r0 = r0 - r1
            int r3 = r2.getSpanGroupIndex(r3, r4, r0)
            int r3 = r3 + r1
            return r3
    }

    @Override
    public int getRowCountForAccessibility(android.support.v7.widget.RecyclerView.Recycler r3, android.support.v7.widget.RecyclerView.State r4) {
            r2 = this;
            int r0 = r2.mOrientation
            if (r0 != 0) goto L7
            int r3 = r2.mSpanCount
            return r3
        L7:
            int r0 = r4.getItemCount()
            r1 = 1
            if (r0 >= r1) goto L10
            r3 = 0
            return r3
        L10:
            int r0 = r4.getItemCount()
            int r0 = r0 - r1
            int r3 = r2.getSpanGroupIndex(r3, r4, r0)
            int r3 = r3 + r1
            return r3
    }

    int getSpaceForSpanRange(int r4, int r5) {
            r3 = this;
            int r0 = r3.mOrientation
            r1 = 1
            if (r0 != r1) goto L19
            boolean r0 = r3.isLayoutRTL()
            if (r0 == 0) goto L19
            int[] r0 = r3.mCachedBorders
            int r1 = r3.mSpanCount
            int r2 = r1 - r4
            r2 = r0[r2]
            int r1 = r1 - r4
            int r1 = r1 - r5
            r4 = r0[r1]
            int r2 = r2 - r4
            return r2
        L19:
            int[] r0 = r3.mCachedBorders
            int r5 = r5 + r4
            r5 = r0[r5]
            r4 = r0[r4]
            int r5 = r5 - r4
            return r5
    }

    public int getSpanCount() {
            r1 = this;
            int r0 = r1.mSpanCount
            return r0
    }

    public android.support.v7.widget.GridLayoutManager.SpanSizeLookup getSpanSizeLookup() {
            r1 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r0 = r1.mSpanSizeLookup
            return r0
    }

    @Override
    void layoutChunk(android.support.v7.widget.RecyclerView.Recycler r19, android.support.v7.widget.RecyclerView.State r20, android.support.v7.widget.LinearLayoutManager.LayoutState r21, android.support.v7.widget.LinearLayoutManager.LayoutChunkResult r22) {
            r18 = this;
            r6 = r18
            r1 = r19
            r2 = r20
            r7 = r21
            r8 = r22
            android.support.v7.widget.OrientationHelper r0 = r6.mOrientationHelper
            int r9 = r0.getModeInOther()
            r10 = 1073741824(0x40000000, float:2.0)
            r11 = 1
            if (r9 == r10) goto L17
            r13 = r11
            goto L18
        L17:
            r13 = 0
        L18:
            int r0 = r18.getChildCount()
            if (r0 <= 0) goto L26
            int[] r0 = r6.mCachedBorders
            int r3 = r6.mSpanCount
            r0 = r0[r3]
            r14 = r0
            goto L27
        L26:
            r14 = 0
        L27:
            if (r13 == 0) goto L2c
            r18.updateMeasurements()
        L2c:
            int r0 = r7.mItemDirection
            if (r0 != r11) goto L32
            r15 = r11
            goto L33
        L32:
            r15 = 0
        L33:
            int r0 = r6.mSpanCount
            if (r15 != 0) goto L44
            int r0 = r7.mCurrentPosition
            int r0 = r6.getSpanIndex(r1, r2, r0)
            int r3 = r7.mCurrentPosition
            int r3 = r6.getSpanSize(r1, r2, r3)
            int r0 = r0 + r3
        L44:
            r4 = 0
            r5 = 0
        L46:
            int r3 = r6.mSpanCount
            if (r5 >= r3) goto L9f
            boolean r3 = r7.hasMore(r2)
            if (r3 == 0) goto L9f
            if (r0 <= 0) goto L9f
            int r3 = r7.mCurrentPosition
            int r10 = r6.getSpanSize(r1, r2, r3)
            int r12 = r6.mSpanCount
            if (r10 > r12) goto L71
            int r0 = r0 - r10
            if (r0 >= 0) goto L60
            goto L9f
        L60:
            android.view.View r3 = r7.next(r1)
            if (r3 != 0) goto L67
            goto L9f
        L67:
            int r4 = r4 + r10
            android.view.View[] r10 = r6.mSet
            r10[r5] = r3
            int r5 = r5 + 1
            r10 = 1073741824(0x40000000, float:2.0)
            goto L46
        L71:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Item at position "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = " requires "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r2 = " spans but GridLayoutManager has only "
            r1.append(r2)
            int r2 = r6.mSpanCount
            r1.append(r2)
            java.lang.String r2 = " spans."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L9f:
            if (r5 != 0) goto La4
            r8.mFinished = r11
            return
        La4:
            r10 = 0
            r0 = r18
            r1 = r19
            r2 = r20
            r3 = r5
            r12 = r5
            r5 = r15
            r0.assignSpans(r1, r2, r3, r4, r5)
            r0 = 0
            r1 = 0
        Lb3:
            if (r0 >= r12) goto L100
            android.view.View[] r2 = r6.mSet
            r2 = r2[r0]
            java.util.List<android.support.v7.widget.RecyclerView$ViewHolder> r3 = r7.mScrapList
            if (r3 != 0) goto Lc9
            if (r15 == 0) goto Lc4
            r6.addView(r2)
            r3 = 0
            goto Ld3
        Lc4:
            r3 = 0
            r6.addView(r2, r3)
            goto Ld3
        Lc9:
            r3 = 0
            if (r15 == 0) goto Ld0
            r6.addDisappearingView(r2)
            goto Ld3
        Ld0:
            r6.addDisappearingView(r2, r3)
        Ld3:
            android.graphics.Rect r4 = r6.mDecorInsets
            r6.calculateItemDecorationsForChild(r2, r4)
            r6.measureChild(r2, r9, r3)
            android.support.v7.widget.OrientationHelper r3 = r6.mOrientationHelper
            int r3 = r3.getDecoratedMeasurement(r2)
            if (r3 <= r1) goto Le4
            r1 = r3
        Le4:
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r3 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r3
            r4 = 1065353216(0x3f800000, float:1.0)
            android.support.v7.widget.OrientationHelper r5 = r6.mOrientationHelper
            int r2 = r5.getDecoratedMeasurementInOther(r2)
            float r2 = (float) r2
            float r2 = r2 * r4
            int r3 = r3.mSpanSize
            float r3 = (float) r3
            float r2 = r2 / r3
            int r3 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r3 <= 0) goto Lfd
            r10 = r2
        Lfd:
            int r0 = r0 + 1
            goto Lb3
        L100:
            if (r13 == 0) goto L11e
            r6.guessMeasurement(r10, r14)
            r1 = 0
            r3 = 0
        L107:
            if (r3 >= r12) goto L11e
            android.view.View[] r0 = r6.mSet
            r0 = r0[r3]
            r2 = 1073741824(0x40000000, float:2.0)
            r6.measureChild(r0, r2, r11)
            android.support.v7.widget.OrientationHelper r2 = r6.mOrientationHelper
            int r0 = r2.getDecoratedMeasurement(r0)
            if (r0 <= r1) goto L11b
            r1 = r0
        L11b:
            int r3 = r3 + 1
            goto L107
        L11e:
            r3 = 0
        L11f:
            if (r3 >= r12) goto L181
            android.view.View[] r0 = r6.mSet
            r0 = r0[r3]
            android.support.v7.widget.OrientationHelper r2 = r6.mOrientationHelper
            int r2 = r2.getDecoratedMeasurement(r0)
            if (r2 == r1) goto L17b
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r2 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r2
            android.graphics.Rect r4 = r2.mDecorInsets
            int r5 = r4.top
            int r9 = r4.bottom
            int r5 = r5 + r9
            int r9 = r2.topMargin
            int r5 = r5 + r9
            int r9 = r2.bottomMargin
            int r5 = r5 + r9
            int r9 = r4.left
            int r4 = r4.right
            int r9 = r9 + r4
            int r4 = r2.leftMargin
            int r9 = r9 + r4
            int r4 = r2.rightMargin
            int r9 = r9 + r4
            int r4 = r2.mSpanIndex
            int r10 = r2.mSpanSize
            int r4 = r6.getSpaceForSpanRange(r4, r10)
            int r10 = r6.mOrientation
            if (r10 != r11) goto L167
            int r2 = r2.width
            r10 = 0
            r13 = 1073741824(0x40000000, float:2.0)
            int r2 = getChildMeasureSpec(r4, r13, r9, r2, r10)
            int r4 = r1 - r5
            int r4 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r13)
            goto L177
        L167:
            r10 = 0
            r13 = 1073741824(0x40000000, float:2.0)
            int r9 = r1 - r9
            int r9 = android.view.View.MeasureSpec.makeMeasureSpec(r9, r13)
            int r2 = r2.height
            int r4 = getChildMeasureSpec(r4, r13, r5, r2, r10)
            r2 = r9
        L177:
            r6.measureChildWithDecorationsAndMargin(r0, r2, r4, r11)
            goto L17e
        L17b:
            r10 = 0
            r13 = 1073741824(0x40000000, float:2.0)
        L17e:
            int r3 = r3 + 1
            goto L11f
        L181:
            r10 = 0
            r8.mConsumed = r1
            int r0 = r6.mOrientation
            r2 = -1
            if (r0 != r11) goto L1a0
            int r0 = r7.mLayoutDirection
            if (r0 != r2) goto L199
            int r3 = r7.mOffset
            int r0 = r3 - r1
            r1 = r10
            r2 = r1
            r17 = r3
            r3 = r0
            r0 = r17
            goto L1b3
        L199:
            int r3 = r7.mOffset
            int r0 = r3 + r1
            r1 = r10
            r2 = r1
            goto L1b3
        L1a0:
            int r0 = r7.mLayoutDirection
            if (r0 != r2) goto L1ab
            int r3 = r7.mOffset
            int r0 = r3 - r1
            r1 = r0
            r2 = r3
            goto L1b1
        L1ab:
            int r3 = r7.mOffset
            int r0 = r3 + r1
            r2 = r0
            r1 = r3
        L1b1:
            r0 = r10
            r3 = r0
        L1b3:
            if (r10 >= r12) goto L23e
            android.view.View[] r4 = r6.mSet
            r7 = r4[r10]
            android.view.ViewGroup$LayoutParams r4 = r7.getLayoutParams()
            r9 = r4
            android.support.v7.widget.GridLayoutManager$LayoutParams r9 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r9
            int r4 = r6.mOrientation
            if (r4 != r11) goto L1fc
            boolean r1 = r18.isLayoutRTL()
            if (r1 == 0) goto L1e4
            int r1 = r18.getPaddingLeft()
            int[] r2 = r6.mCachedBorders
            int r4 = r6.mSpanCount
            int r5 = r9.mSpanIndex
            int r4 = r4 - r5
            r2 = r2[r4]
            int r1 = r1 + r2
            android.support.v7.widget.OrientationHelper r2 = r6.mOrientationHelper
            int r2 = r2.getDecoratedMeasurementInOther(r7)
            int r2 = r1 - r2
            r13 = r0
            r15 = r1
            r14 = r2
            goto L1f9
        L1e4:
            int r1 = r18.getPaddingLeft()
            int[] r2 = r6.mCachedBorders
            int r4 = r9.mSpanIndex
            r2 = r2[r4]
            int r1 = r1 + r2
            android.support.v7.widget.OrientationHelper r2 = r6.mOrientationHelper
            int r2 = r2.getDecoratedMeasurementInOther(r7)
            int r2 = r2 + r1
            r13 = r0
            r14 = r1
            r15 = r2
        L1f9:
            r16 = r3
            goto L213
        L1fc:
            int r0 = r18.getPaddingTop()
            int[] r3 = r6.mCachedBorders
            int r4 = r9.mSpanIndex
            r3 = r3[r4]
            int r0 = r0 + r3
            android.support.v7.widget.OrientationHelper r3 = r6.mOrientationHelper
            int r3 = r3.getDecoratedMeasurementInOther(r7)
            int r3 = r3 + r0
            r16 = r0
            r14 = r1
            r15 = r2
            r13 = r3
        L213:
            r0 = r18
            r1 = r7
            r2 = r14
            r3 = r16
            r4 = r15
            r5 = r13
            r0.layoutDecoratedWithMargins(r1, r2, r3, r4, r5)
            boolean r0 = r9.isItemRemoved()
            if (r0 != 0) goto L22a
            boolean r0 = r9.isItemChanged()
            if (r0 == 0) goto L22c
        L22a:
            r8.mIgnoreConsumed = r11
        L22c:
            boolean r0 = r8.mFocusable
            boolean r1 = r7.hasFocusable()
            r0 = r0 | r1
            r8.mFocusable = r0
            int r10 = r10 + 1
            r0 = r13
            r1 = r14
            r2 = r15
            r3 = r16
            goto L1b3
        L23e:
            android.view.View[] r0 = r6.mSet
            r1 = 0
            java.util.Arrays.fill(r0, r1)
            return
    }

    @Override
    void onAnchorReady(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3, android.support.v7.widget.LinearLayoutManager.AnchorInfo r4, int r5) {
            r1 = this;
            super.onAnchorReady(r2, r3, r4, r5)
            r1.updateMeasurements()
            int r0 = r3.getItemCount()
            if (r0 <= 0) goto L15
            boolean r0 = r3.isPreLayout()
            if (r0 != 0) goto L15
            r1.ensureAnchorIsInCorrectSpan(r2, r3, r4, r5)
        L15:
            r1.ensureViewSet()
            return
    }

    @Override
    public android.view.View onFocusSearchFailed(android.view.View r23, int r24, android.support.v7.widget.RecyclerView.Recycler r25, android.support.v7.widget.RecyclerView.State r26) {
            r22 = this;
            r0 = r22
            r1 = r25
            r2 = r26
            android.view.View r3 = r22.findContainingItemView(r23)
            r4 = 0
            if (r3 != 0) goto Le
            return r4
        Le:
            android.view.ViewGroup$LayoutParams r5 = r3.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r5 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r5
            int r6 = r5.mSpanIndex
            int r7 = r5.mSpanIndex
            int r5 = r5.mSpanSize
            int r7 = r7 + r5
            android.view.View r5 = super.onFocusSearchFailed(r23, r24, r25, r26)
            if (r5 != 0) goto L22
            return r4
        L22:
            r5 = r24
            int r5 = r0.convertFocusDirectionToLayoutDirection(r5)
            r9 = 1
            if (r5 != r9) goto L2d
            r5 = r9
            goto L2e
        L2d:
            r5 = 0
        L2e:
            boolean r10 = r0.mShouldReverseLayout
            if (r5 == r10) goto L34
            r5 = r9
            goto L35
        L34:
            r5 = 0
        L35:
            r10 = -1
            if (r5 == 0) goto L40
            int r5 = r22.getChildCount()
            int r5 = r5 - r9
            r11 = r10
            r12 = r11
            goto L47
        L40:
            int r5 = r22.getChildCount()
            r11 = r5
            r12 = r9
            r5 = 0
        L47:
            int r13 = r0.mOrientation
            if (r13 != r9) goto L53
            boolean r13 = r22.isLayoutRTL()
            if (r13 == 0) goto L53
            r13 = r9
            goto L54
        L53:
            r13 = 0
        L54:
            int r14 = r0.getSpanGroupIndex(r1, r2, r5)
            r15 = r10
            r16 = r15
            r8 = 0
            r17 = 0
            r10 = r5
            r5 = r4
        L60:
            if (r10 == r11) goto L14a
            int r9 = r0.getSpanGroupIndex(r1, r2, r10)
            android.view.View r1 = r0.getChildAt(r10)
            if (r1 != r3) goto L6e
            goto L14a
        L6e:
            boolean r18 = r1.hasFocusable()
            if (r18 == 0) goto L88
            if (r9 == r14) goto L88
            if (r4 == 0) goto L7a
            goto L14a
        L7a:
            r18 = r3
            r20 = r5
            r23 = r8
            r19 = r11
            r11 = r16
            r5 = r17
            goto L136
        L88:
            android.view.ViewGroup$LayoutParams r9 = r1.getLayoutParams()
            android.support.v7.widget.GridLayoutManager$LayoutParams r9 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r9
            int r2 = r9.mSpanIndex
            r18 = r3
            int r3 = r9.mSpanIndex
            r19 = r11
            int r11 = r9.mSpanSize
            int r3 = r3 + r11
            boolean r11 = r1.hasFocusable()
            if (r11 == 0) goto La4
            if (r2 != r6) goto La4
            if (r3 != r7) goto La4
            return r1
        La4:
            boolean r11 = r1.hasFocusable()
            if (r11 == 0) goto Lac
            if (r4 == 0) goto Lb4
        Lac:
            boolean r11 = r1.hasFocusable()
            if (r11 != 0) goto Lbe
            if (r5 != 0) goto Lbe
        Lb4:
            r20 = r5
            r23 = r8
            r11 = r16
            r5 = r17
        Lbc:
            r8 = 1
            goto L107
        Lbe:
            int r11 = java.lang.Math.max(r2, r6)
            int r20 = java.lang.Math.min(r3, r7)
            int r11 = r20 - r11
            boolean r20 = r1.hasFocusable()
            if (r20 == 0) goto Ldb
            if (r11 <= r8) goto Ld1
            goto Lb4
        Ld1:
            if (r11 != r8) goto Lfe
            if (r2 <= r15) goto Ld7
            r11 = 1
            goto Ld8
        Ld7:
            r11 = 0
        Ld8:
            if (r13 != r11) goto Lfe
            goto Lb4
        Ldb:
            if (r4 != 0) goto Lfe
            r20 = r5
            r23 = r8
            r5 = 0
            r8 = 1
            boolean r21 = r0.isViewPartiallyVisible(r1, r5, r8)
            if (r21 == 0) goto L102
            r5 = r17
            if (r11 <= r5) goto Lf0
            r11 = r16
            goto L107
        Lf0:
            if (r11 != r5) goto Lfb
            r11 = r16
            if (r2 <= r11) goto Lf7
            goto Lf8
        Lf7:
            r8 = 0
        Lf8:
            if (r13 != r8) goto L106
            goto Lbc
        Lfb:
            r11 = r16
            goto L106
        Lfe:
            r20 = r5
            r23 = r8
        L102:
            r11 = r16
            r5 = r17
        L106:
            r8 = 0
        L107:
            if (r8 == 0) goto L136
            boolean r8 = r1.hasFocusable()
            if (r8 == 0) goto L124
            int r4 = r9.mSpanIndex
            int r3 = java.lang.Math.min(r3, r7)
            int r2 = java.lang.Math.max(r2, r6)
            int r8 = r3 - r2
            r15 = r4
            r17 = r5
            r16 = r11
            r5 = r20
            r4 = r1
            goto L13e
        L124:
            int r5 = r9.mSpanIndex
            int r3 = java.lang.Math.min(r3, r7)
            int r2 = java.lang.Math.max(r2, r6)
            int r17 = r3 - r2
            r8 = r23
            r16 = r5
            r5 = r1
            goto L13e
        L136:
            r8 = r23
            r17 = r5
            r16 = r11
            r5 = r20
        L13e:
            int r10 = r10 + r12
            r1 = r25
            r2 = r26
            r3 = r18
            r11 = r19
            r9 = 1
            goto L60
        L14a:
            r20 = r5
            if (r4 == 0) goto L14f
            goto L151
        L14f:
            r4 = r20
        L151:
            return r4
    }

    @Override
    public void onInitializeAccessibilityNodeInfoForItem(android.support.v7.widget.RecyclerView.Recycler r8, android.support.v7.widget.RecyclerView.State r9, android.view.View r10, android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r11) {
            r7 = this;
            android.view.ViewGroup$LayoutParams r0 = r10.getLayoutParams()
            boolean r1 = r0 instanceof android.support.v7.widget.GridLayoutManager.LayoutParams
            if (r1 != 0) goto Lc
            super.onInitializeAccessibilityNodeInfoForItem(r10, r11)
            return
        Lc:
            android.support.v7.widget.GridLayoutManager$LayoutParams r0 = (android.support.v7.widget.GridLayoutManager.LayoutParams) r0
            int r10 = r0.getViewLayoutPosition()
            int r8 = r7.getSpanGroupIndex(r8, r9, r10)
            int r9 = r7.mOrientation
            r10 = 0
            r1 = 1
            if (r9 != 0) goto L3f
            int r9 = r0.getSpanIndex()
            int r2 = r0.getSpanSize()
            r4 = 1
            int r3 = r7.mSpanCount
            if (r3 <= r1) goto L33
            int r0 = r0.getSpanSize()
            int r3 = r7.mSpanCount
            if (r0 != r3) goto L33
            r5 = r1
            goto L34
        L33:
            r5 = r10
        L34:
            r6 = 0
            r1 = r9
            r3 = r8
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r8 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat.obtain(r1, r2, r3, r4, r5, r6)
            r11.setCollectionItemInfo(r8)
            goto L60
        L3f:
            r2 = 1
            int r3 = r0.getSpanIndex()
            int r4 = r0.getSpanSize()
            int r9 = r7.mSpanCount
            if (r9 <= r1) goto L56
            int r9 = r0.getSpanSize()
            int r0 = r7.mSpanCount
            if (r9 != r0) goto L56
            r5 = r1
            goto L57
        L56:
            r5 = r10
        L57:
            r6 = 0
            r1 = r8
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$CollectionItemInfoCompat r8 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.CollectionItemInfoCompat.obtain(r1, r2, r3, r4, r5, r6)
            r11.setCollectionItemInfo(r8)
        L60:
            return
    }

    @Override
    public void onItemsAdded(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
            r0 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            r1.invalidateSpanIndexCache()
            return
    }

    @Override
    public void onItemsChanged(android.support.v7.widget.RecyclerView r1) {
            r0 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            r1.invalidateSpanIndexCache()
            return
    }

    @Override
    public void onItemsMoved(android.support.v7.widget.RecyclerView r1, int r2, int r3, int r4) {
            r0 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            r1.invalidateSpanIndexCache()
            return
    }

    @Override
    public void onItemsRemoved(android.support.v7.widget.RecyclerView r1, int r2, int r3) {
            r0 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            r1.invalidateSpanIndexCache()
            return
    }

    @Override
    public void onItemsUpdated(android.support.v7.widget.RecyclerView r1, int r2, int r3, java.lang.Object r4) {
            r0 = this;
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r1 = r0.mSpanSizeLookup
            r1.invalidateSpanIndexCache()
            return
    }

    @Override
    public void onLayoutChildren(android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r1 = this;
            boolean r0 = r3.isPreLayout()
            if (r0 == 0) goto L9
            r1.cachePreLayoutSpanMapping()
        L9:
            super.onLayoutChildren(r2, r3)
            r1.clearPreLayoutSpanMappingCache()
            return
    }

    @Override
    public void onLayoutCompleted(android.support.v7.widget.RecyclerView.State r1) {
            r0 = this;
            super.onLayoutCompleted(r1)
            r1 = 0
            r0.mPendingSpanCountChange = r1
            return
    }

    @Override
    public int scrollHorizontallyBy(int r1, android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r0 = this;
            r0.updateMeasurements()
            r0.ensureViewSet()
            int r1 = super.scrollHorizontallyBy(r1, r2, r3)
            return r1
    }

    @Override
    public int scrollVerticallyBy(int r1, android.support.v7.widget.RecyclerView.Recycler r2, android.support.v7.widget.RecyclerView.State r3) {
            r0 = this;
            r0.updateMeasurements()
            r0.ensureViewSet()
            int r1 = super.scrollVerticallyBy(r1, r2, r3)
            return r1
    }

    @Override
    public void setMeasuredDimension(android.graphics.Rect r5, int r6, int r7) {
            r4 = this;
            int[] r0 = r4.mCachedBorders
            if (r0 != 0) goto L7
            super.setMeasuredDimension(r5, r6, r7)
        L7:
            int r0 = r4.getPaddingLeft()
            int r1 = r4.getPaddingRight()
            int r0 = r0 + r1
            int r1 = r4.getPaddingTop()
            int r2 = r4.getPaddingBottom()
            int r1 = r1 + r2
            int r2 = r4.mOrientation
            r3 = 1
            if (r2 != r3) goto L3b
            int r5 = r5.height()
            int r5 = r5 + r1
            int r1 = r4.getMinimumHeight()
            int r5 = chooseSize(r7, r5, r1)
            int[] r7 = r4.mCachedBorders
            int r1 = r7.length
            int r1 = r1 - r3
            r7 = r7[r1]
            int r7 = r7 + r0
            int r0 = r4.getMinimumWidth()
            int r6 = chooseSize(r6, r7, r0)
            goto L57
        L3b:
            int r5 = r5.width()
            int r5 = r5 + r0
            int r0 = r4.getMinimumWidth()
            int r6 = chooseSize(r6, r5, r0)
            int[] r5 = r4.mCachedBorders
            int r0 = r5.length
            int r0 = r0 - r3
            r5 = r5[r0]
            int r5 = r5 + r1
            int r0 = r4.getMinimumHeight()
            int r5 = chooseSize(r7, r5, r0)
        L57:
            r4.setMeasuredDimension(r6, r5)
            return
    }

    public void setSpanCount(int r4) {
            r3 = this;
            int r0 = r3.mSpanCount
            if (r4 != r0) goto L5
            return
        L5:
            r0 = 1
            r3.mPendingSpanCountChange = r0
            if (r4 < r0) goto L15
            r3.mSpanCount = r4
            android.support.v7.widget.GridLayoutManager$SpanSizeLookup r4 = r3.mSpanSizeLookup
            r4.invalidateSpanIndexCache()
            r3.requestLayout()
            return
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Span count should be at least 1. Provided "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setSpanSizeLookup(android.support.v7.widget.GridLayoutManager.SpanSizeLookup r1) {
            r0 = this;
            r0.mSpanSizeLookup = r1
            return
    }

    @Override
    public void setStackFromEnd(boolean r2) {
            r1 = this;
            if (r2 != 0) goto L7
            r2 = 0
            super.setStackFromEnd(r2)
            return
        L7:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "GridLayoutManager does not support stack from end. Consider using reverse layout"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean supportsPredictiveItemAnimations() {
            r1 = this;
            android.support.v7.widget.LinearLayoutManager$SavedState r0 = r1.mPendingSavedState
            if (r0 != 0) goto La
            boolean r0 = r1.mPendingSpanCountChange
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
