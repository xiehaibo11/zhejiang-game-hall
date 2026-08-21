package android.support.design.widget;

class ViewOffsetHelper {
    private int layoutLeft;
    private int layoutTop;
    private int offsetLeft;
    private int offsetTop;
    private final android.view.View view;

    public ViewOffsetHelper(android.view.View r1) {
            r0 = this;
            r0.<init>()
            r0.view = r1
            return
    }

    private void updateOffsets() {
            r4 = this;
            android.view.View r0 = r4.view
            int r1 = r4.offsetTop
            int r2 = r0.getTop()
            int r3 = r4.layoutTop
            int r2 = r2 - r3
            int r1 = r1 - r2
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r0, r1)
            android.view.View r0 = r4.view
            int r1 = r4.offsetLeft
            int r2 = r0.getLeft()
            int r3 = r4.layoutLeft
            int r2 = r2 - r3
            int r1 = r1 - r2
            android.support.v4.view.ViewCompat.offsetLeftAndRight(r0, r1)
            return
    }

    public int getLayoutLeft() {
            r1 = this;
            int r0 = r1.layoutLeft
            return r0
    }

    public int getLayoutTop() {
            r1 = this;
            int r0 = r1.layoutTop
            return r0
    }

    public int getLeftAndRightOffset() {
            r1 = this;
            int r0 = r1.offsetLeft
            return r0
    }

    public int getTopAndBottomOffset() {
            r1 = this;
            int r0 = r1.offsetTop
            return r0
    }

    public void onViewLayout() {
            r1 = this;
            android.view.View r0 = r1.view
            int r0 = r0.getTop()
            r1.layoutTop = r0
            android.view.View r0 = r1.view
            int r0 = r0.getLeft()
            r1.layoutLeft = r0
            r1.updateOffsets()
            return
    }

    public boolean setLeftAndRightOffset(int r2) {
            r1 = this;
            int r0 = r1.offsetLeft
            if (r0 == r2) goto Lb
            r1.offsetLeft = r2
            r1.updateOffsets()
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public boolean setTopAndBottomOffset(int r2) {
            r1 = this;
            int r0 = r1.offsetTop
            if (r0 == r2) goto Lb
            r1.offsetTop = r2
            r1.updateOffsets()
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }
}
