package android.support.v7.widget;

public abstract class OrientationHelper {
    public static final int HORIZONTAL = 0;
    private static final int INVALID_SIZE = Integer.MIN_VALUE;
    public static final int VERTICAL = 1;
    private int mLastTotalSpace;
    protected final android.support.v7.widget.RecyclerView.LayoutManager mLayoutManager;
    final android.graphics.Rect mTmpRect;



    private OrientationHelper(android.support.v7.widget.RecyclerView.LayoutManager r2) {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.mLastTotalSpace = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.mTmpRect = r0
            r1.mLayoutManager = r2
            return
    }

    OrientationHelper(android.support.v7.widget.RecyclerView.LayoutManager r1, android.support.v7.widget.OrientationHelper.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static android.support.v7.widget.OrientationHelper createHorizontalHelper(android.support.v7.widget.RecyclerView.LayoutManager r1) {
            android.support.v7.widget.OrientationHelper$1 r0 = new android.support.v7.widget.OrientationHelper$1
            r0.<init>(r1)
            return r0
    }

    public static android.support.v7.widget.OrientationHelper createOrientationHelper(android.support.v7.widget.RecyclerView.LayoutManager r1, int r2) {
            if (r2 == 0) goto L12
            r0 = 1
            if (r2 != r0) goto La
            android.support.v7.widget.OrientationHelper r1 = createVerticalHelper(r1)
            return r1
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "invalid orientation"
            r1.<init>(r2)
            throw r1
        L12:
            android.support.v7.widget.OrientationHelper r1 = createHorizontalHelper(r1)
            return r1
    }

    public static android.support.v7.widget.OrientationHelper createVerticalHelper(android.support.v7.widget.RecyclerView.LayoutManager r1) {
            android.support.v7.widget.OrientationHelper$2 r0 = new android.support.v7.widget.OrientationHelper$2
            r0.<init>(r1)
            return r0
    }

    public abstract int getDecoratedEnd(android.view.View r1);

    public abstract int getDecoratedMeasurement(android.view.View r1);

    public abstract int getDecoratedMeasurementInOther(android.view.View r1);

    public abstract int getDecoratedStart(android.view.View r1);

    public abstract int getEnd();

    public abstract int getEndAfterPadding();

    public abstract int getEndPadding();

    public android.support.v7.widget.RecyclerView.LayoutManager getLayoutManager() {
            r1 = this;
            android.support.v7.widget.RecyclerView$LayoutManager r0 = r1.mLayoutManager
            return r0
    }

    public abstract int getMode();

    public abstract int getModeInOther();

    public abstract int getStartAfterPadding();

    public abstract int getTotalSpace();

    public int getTotalSpaceChange() {
            r2 = this;
            int r0 = r2.mLastTotalSpace
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r0) goto L8
            r0 = 0
            goto Lf
        L8:
            int r0 = r2.getTotalSpace()
            int r1 = r2.mLastTotalSpace
            int r0 = r0 - r1
        Lf:
            return r0
    }

    public abstract int getTransformedEndWithDecoration(android.view.View r1);

    public abstract int getTransformedStartWithDecoration(android.view.View r1);

    public abstract void offsetChild(android.view.View r1, int r2);

    public abstract void offsetChildren(int r1);

    public void onLayoutComplete() {
            r1 = this;
            int r0 = r1.getTotalSpace()
            r1.mLastTotalSpace = r0
            return
    }
}
