package android.support.v7.widget;

public class PagerSnapHelper extends android.support.v7.widget.SnapHelper {
    private static final int MAX_SCROLL_ON_FLING_DURATION = 100;
    private android.support.v7.widget.OrientationHelper mHorizontalHelper;
    private android.support.v7.widget.OrientationHelper mVerticalHelper;


    public PagerSnapHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private int distanceToCenter(android.support.v7.widget.RecyclerView.LayoutManager r2, android.view.View r3, android.support.v7.widget.OrientationHelper r4) {
            r1 = this;
            int r0 = r4.getDecoratedStart(r3)
            int r3 = r4.getDecoratedMeasurement(r3)
            int r3 = r3 / 2
            int r0 = r0 + r3
            boolean r2 = r2.getClipToPadding()
            if (r2 == 0) goto L1d
            int r2 = r4.getStartAfterPadding()
            int r3 = r4.getTotalSpace()
            int r3 = r3 / 2
            int r2 = r2 + r3
            goto L23
        L1d:
            int r2 = r4.getEnd()
            int r2 = r2 / 2
        L23:
            int r0 = r0 - r2
            return r0
    }

    private android.view.View findCenterView(android.support.v7.widget.RecyclerView.LayoutManager r9, android.support.v7.widget.OrientationHelper r10) {
            r8 = this;
            int r0 = r9.getChildCount()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r2 = r9.getClipToPadding()
            if (r2 == 0) goto L1a
            int r2 = r10.getStartAfterPadding()
            int r3 = r10.getTotalSpace()
            int r3 = r3 / 2
            int r2 = r2 + r3
            goto L20
        L1a:
            int r2 = r10.getEnd()
            int r2 = r2 / 2
        L20:
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = 0
        L24:
            if (r4 >= r0) goto L41
            android.view.View r5 = r9.getChildAt(r4)
            int r6 = r10.getDecoratedStart(r5)
            int r7 = r10.getDecoratedMeasurement(r5)
            int r7 = r7 / 2
            int r6 = r6 + r7
            int r6 = r6 - r2
            int r6 = java.lang.Math.abs(r6)
            if (r6 >= r3) goto L3e
            r1 = r5
            r3 = r6
        L3e:
            int r4 = r4 + 1
            goto L24
        L41:
            return r1
    }

    private android.view.View findStartView(android.support.v7.widget.RecyclerView.LayoutManager r7, android.support.v7.widget.OrientationHelper r8) {
            r6 = this;
            int r0 = r7.getChildCount()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 0
        Lc:
            if (r3 >= r0) goto L1d
            android.view.View r4 = r7.getChildAt(r3)
            int r5 = r8.getDecoratedStart(r4)
            if (r5 >= r2) goto L1a
            r1 = r4
            r2 = r5
        L1a:
            int r3 = r3 + 1
            goto Lc
        L1d:
            return r1
    }

    private android.support.v7.widget.OrientationHelper getHorizontalHelper(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            android.support.v7.widget.OrientationHelper r0 = r1.mHorizontalHelper
            if (r0 == 0) goto L8
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayoutManager
            if (r0 == r2) goto Le
        L8:
            android.support.v7.widget.OrientationHelper r2 = android.support.v7.widget.OrientationHelper.createHorizontalHelper(r2)
            r1.mHorizontalHelper = r2
        Le:
            android.support.v7.widget.OrientationHelper r2 = r1.mHorizontalHelper
            return r2
    }

    private android.support.v7.widget.OrientationHelper getVerticalHelper(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            android.support.v7.widget.OrientationHelper r0 = r1.mVerticalHelper
            if (r0 == 0) goto L8
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.mLayoutManager
            if (r0 == r2) goto Le
        L8:
            android.support.v7.widget.OrientationHelper r2 = android.support.v7.widget.OrientationHelper.createVerticalHelper(r2)
            r1.mVerticalHelper = r2
        Le:
            android.support.v7.widget.OrientationHelper r2 = r1.mVerticalHelper
            return r2
    }

    @Override
    public int[] calculateDistanceToFinalSnap(android.support.v7.widget.RecyclerView.LayoutManager r5, android.view.View r6) {
            r4 = this;
            r0 = 2
            int[] r0 = new int[r0]
            boolean r1 = r5.canScrollHorizontally()
            r2 = 0
            if (r1 == 0) goto L15
            android.support.v7.widget.OrientationHelper r1 = r4.getHorizontalHelper(r5)
            int r1 = r4.distanceToCenter(r5, r6, r1)
            r0[r2] = r1
            goto L17
        L15:
            r0[r2] = r2
        L17:
            boolean r1 = r5.canScrollVertically()
            r3 = 1
            if (r1 == 0) goto L29
            android.support.v7.widget.OrientationHelper r1 = r4.getVerticalHelper(r5)
            int r5 = r4.distanceToCenter(r5, r6, r1)
            r0[r3] = r5
            goto L2b
        L29:
            r0[r3] = r2
        L2b:
            return r0
    }

    @Override
    protected android.support.v7.widget.LinearSmoothScroller createSnapScroller(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            boolean r2 = r2 instanceof android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider
            if (r2 != 0) goto L6
            r2 = 0
            return r2
        L6:
            android.support.v7.widget.PagerSnapHelper$1 r2 = new android.support.v7.widget.PagerSnapHelper$1
            android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
            android.content.Context r0 = r0.getContext()
            r2.<init>(r1, r0)
            return r2
    }

    @Override
    public android.view.View findSnapView(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            boolean r0 = r2.canScrollVertically()
            if (r0 == 0) goto Lf
            android.support.v7.widget.OrientationHelper r0 = r1.getVerticalHelper(r2)
            android.view.View r2 = r1.findCenterView(r2, r0)
            return r2
        Lf:
            boolean r0 = r2.canScrollHorizontally()
            if (r0 == 0) goto L1e
            android.support.v7.widget.OrientationHelper r0 = r1.getHorizontalHelper(r2)
            android.view.View r2 = r1.findCenterView(r2, r0)
            return r2
        L1e:
            r2 = 0
            return r2
    }

    @Override
    public int findTargetSnapPosition(android.support.v7.widget.RecyclerView.LayoutManager r6, int r7, int r8) {
            r5 = this;
            int r0 = r6.getItemCount()
            r1 = -1
            if (r0 != 0) goto L8
            return r1
        L8:
            r2 = 0
            boolean r3 = r6.canScrollVertically()
            if (r3 == 0) goto L18
            android.support.v7.widget.OrientationHelper r2 = r5.getVerticalHelper(r6)
            android.view.View r2 = r5.findStartView(r6, r2)
            goto L26
        L18:
            boolean r3 = r6.canScrollHorizontally()
            if (r3 == 0) goto L26
            android.support.v7.widget.OrientationHelper r2 = r5.getHorizontalHelper(r6)
            android.view.View r2 = r5.findStartView(r6, r2)
        L26:
            if (r2 != 0) goto L29
            return r1
        L29:
            int r2 = r6.getPosition(r2)
            if (r2 != r1) goto L30
            return r1
        L30:
            boolean r1 = r6.canScrollHorizontally()
            r3 = 0
            r4 = 1
            if (r1 == 0) goto L3e
            if (r7 <= 0) goto L3c
        L3a:
            r7 = r4
            goto L41
        L3c:
            r7 = r3
            goto L41
        L3e:
            if (r8 <= 0) goto L3c
            goto L3a
        L41:
            boolean r8 = r6 instanceof android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider
            if (r8 == 0) goto L5c
            android.support.v7.widget.RecyclerView$SmoothScroller$ScrollVectorProvider r6 = (android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider) r6
            int r0 = r0 - r4
            android.graphics.PointF r6 = r6.computeScrollVectorForPosition(r0)
            if (r6 == 0) goto L5c
            float r8 = r6.x
            r0 = 0
            int r8 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r8 < 0) goto L5b
            float r6 = r6.y
            int r6 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r6 >= 0) goto L5c
        L5b:
            r3 = r4
        L5c:
            if (r3 == 0) goto L63
            if (r7 == 0) goto L67
            int r2 = r2 + (-1)
            goto L67
        L63:
            if (r7 == 0) goto L67
            int r2 = r2 + 1
        L67:
            return r2
    }
}
