package android.support.v7.widget;

public abstract class SnapHelper extends android.support.v7.widget.RecyclerView.OnFlingListener {
    static final float MILLISECONDS_PER_INCH = 100.0f;
    private android.widget.Scroller mGravityScroller;
    android.support.v7.widget.RecyclerView mRecyclerView;
    private final android.support.v7.widget.RecyclerView.OnScrollListener mScrollListener;



    public SnapHelper() {
            r1 = this;
            r1.<init>()
            android.support.v7.widget.SnapHelper$1 r0 = new android.support.v7.widget.SnapHelper$1
            r0.<init>(r1)
            r1.mScrollListener = r0
            return
    }

    private void destroyCallbacks() {
            r2 = this;
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            android.support.v7.widget.RecyclerView$OnScrollListener r1 = r2.mScrollListener
            r0.removeOnScrollListener(r1)
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            r1 = 0
            r0.setOnFlingListener(r1)
            return
    }

    private void setupCallbacks() throws java.lang.IllegalStateException {
            r2 = this;
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            android.support.v7.widget.RecyclerView$OnFlingListener r0 = r0.getOnFlingListener()
            if (r0 != 0) goto L15
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            android.support.v7.widget.RecyclerView$OnScrollListener r1 = r2.mScrollListener
            r0.addOnScrollListener(r1)
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            r0.setOnFlingListener(r2)
            return
        L15:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "An instance of OnFlingListener already set."
            r0.<init>(r1)
            throw r0
    }

    private boolean snapFromFling(android.support.v7.widget.RecyclerView.LayoutManager r3, int r4, int r5) {
            r2 = this;
            boolean r0 = r3 instanceof android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            android.support.v7.widget.RecyclerView$SmoothScroller r0 = r2.createScroller(r3)
            if (r0 != 0) goto Ld
            return r1
        Ld:
            int r4 = r2.findTargetSnapPosition(r3, r4, r5)
            r5 = -1
            if (r4 != r5) goto L15
            return r1
        L15:
            r0.setTargetPosition(r4)
            r3.startSmoothScroll(r0)
            r3 = 1
            return r3
    }

    public void attachToRecyclerView(android.support.v7.widget.RecyclerView r3) throws java.lang.IllegalStateException {
            r2 = this;
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            if (r0 != r3) goto L5
            return
        L5:
            if (r0 == 0) goto La
            r2.destroyCallbacks()
        La:
            r2.mRecyclerView = r3
            if (r3 == 0) goto L26
            r2.setupCallbacks()
            android.widget.Scroller r3 = new android.widget.Scroller
            android.support.v7.widget.RecyclerView r0 = r2.mRecyclerView
            android.content.Context r0 = r0.getContext()
            android.view.animation.DecelerateInterpolator r1 = new android.view.animation.DecelerateInterpolator
            r1.<init>()
            r3.<init>(r0, r1)
            r2.mGravityScroller = r3
            r2.snapToTargetExistingView()
        L26:
            return
    }

    public abstract int[] calculateDistanceToFinalSnap(android.support.v7.widget.RecyclerView.LayoutManager r1, android.view.View r2);

    public int[] calculateScrollDistance(int r11, int r12) {
            r10 = this;
            r0 = 2
            int[] r0 = new int[r0]
            android.widget.Scroller r1 = r10.mGravityScroller
            r2 = 0
            r3 = 0
            r6 = -2147483648(0xffffffff80000000, float:-0.0)
            r7 = 2147483647(0x7fffffff, float:NaN)
            r8 = -2147483648(0xffffffff80000000, float:-0.0)
            r9 = 2147483647(0x7fffffff, float:NaN)
            r4 = r11
            r5 = r12
            r1.fling(r2, r3, r4, r5, r6, r7, r8, r9)
            android.widget.Scroller r11 = r10.mGravityScroller
            int r11 = r11.getFinalX()
            r12 = 0
            r0[r12] = r11
            android.widget.Scroller r11 = r10.mGravityScroller
            int r11 = r11.getFinalY()
            r12 = 1
            r0[r12] = r11
            return r0
    }

    protected android.support.v7.widget.RecyclerView.SmoothScroller createScroller(android.support.v7.widget.RecyclerView.LayoutManager r1) {
            r0 = this;
            android.support.v7.widget.LinearSmoothScroller r1 = r0.createSnapScroller(r1)
            return r1
    }

    @java.lang.Deprecated
    protected android.support.v7.widget.LinearSmoothScroller createSnapScroller(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            boolean r2 = r2 instanceof android.support.v7.widget.RecyclerView.SmoothScroller.ScrollVectorProvider
            if (r2 != 0) goto L6
            r2 = 0
            return r2
        L6:
            android.support.v7.widget.SnapHelper$2 r2 = new android.support.v7.widget.SnapHelper$2
            android.support.v7.widget.RecyclerView r0 = r1.mRecyclerView
            android.content.Context r0 = r0.getContext()
            r2.<init>(r1, r0)
            return r2
    }

    public abstract android.view.View findSnapView(android.support.v7.widget.RecyclerView.LayoutManager r1);

    public abstract int findTargetSnapPosition(android.support.v7.widget.RecyclerView.LayoutManager r1, int r2, int r3);

    @Override
    public boolean onFling(int r5, int r6) {
            r4 = this;
            android.support.v7.widget.RecyclerView r0 = r4.mRecyclerView
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.support.v7.widget.RecyclerView r2 = r4.mRecyclerView
            android.support.v7.widget.RecyclerView$Adapter r2 = r2.getAdapter()
            if (r2 != 0) goto L13
            return r1
        L13:
            android.support.v7.widget.RecyclerView r2 = r4.mRecyclerView
            int r2 = r2.getMinFlingVelocity()
            int r3 = java.lang.Math.abs(r6)
            if (r3 > r2) goto L25
            int r3 = java.lang.Math.abs(r5)
            if (r3 <= r2) goto L2c
        L25:
            boolean r5 = r4.snapFromFling(r0, r5, r6)
            if (r5 == 0) goto L2c
            r1 = 1
        L2c:
            return r1
    }

    void snapToTargetExistingView() {
            r4 = this;
            android.support.v7.widget.RecyclerView r0 = r4.mRecyclerView
            if (r0 != 0) goto L5
            return
        L5:
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r0.getLayoutManager()
            if (r0 != 0) goto Lc
            return
        Lc:
            android.view.View r1 = r4.findSnapView(r0)
            if (r1 != 0) goto L13
            return
        L13:
            int[] r0 = r4.calculateDistanceToFinalSnap(r0, r1)
            r1 = 0
            r2 = r0[r1]
            r3 = 1
            if (r2 != 0) goto L21
            r2 = r0[r3]
            if (r2 == 0) goto L2a
        L21:
            android.support.v7.widget.RecyclerView r2 = r4.mRecyclerView
            r1 = r0[r1]
            r0 = r0[r3]
            r2.smoothScrollBy(r1, r0)
        L2a:
            return
    }
}
