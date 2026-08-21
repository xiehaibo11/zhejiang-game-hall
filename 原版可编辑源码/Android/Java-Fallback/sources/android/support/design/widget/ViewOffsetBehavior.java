package android.support.design.widget;

import android.view.View;

class ViewOffsetBehavior<V extends android.view.View> extends android.support.design.widget.CoordinatorLayout.Behavior<V> {
    private int tempLeftRightOffset;
    private int tempTopBottomOffset;
    private android.support.design.widget.ViewOffsetHelper viewOffsetHelper;

    public ViewOffsetBehavior() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.tempTopBottomOffset = r0
            r1.tempLeftRightOffset = r0
            return
    }

    public ViewOffsetBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.tempTopBottomOffset = r1
            r0.tempLeftRightOffset = r1
            return
    }

    public int getLeftAndRightOffset() {
            r1 = this;
            android.support.design.widget.ViewOffsetHelper r0 = r1.viewOffsetHelper
            if (r0 == 0) goto L9
            int r0 = r0.getLeftAndRightOffset()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public int getTopAndBottomOffset() {
            r1 = this;
            android.support.design.widget.ViewOffsetHelper r0 = r1.viewOffsetHelper
            if (r0 == 0) goto L9
            int r0 = r0.getTopAndBottomOffset()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    protected void layoutChild(android.support.design.widget.CoordinatorLayout r1, V r2, int r3) {
            r0 = this;
            r1.onLayoutChild(r2, r3)
            return
    }

    @Override
    public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, V r2, int r3) {
            r0 = this;
            r0.layoutChild(r1, r2, r3)
            android.support.design.widget.ViewOffsetHelper r1 = r0.viewOffsetHelper
            if (r1 != 0) goto Le
            android.support.design.widget.ViewOffsetHelper r1 = new android.support.design.widget.ViewOffsetHelper
            r1.<init>(r2)
            r0.viewOffsetHelper = r1
        Le:
            android.support.design.widget.ViewOffsetHelper r1 = r0.viewOffsetHelper
            r1.onViewLayout()
            int r1 = r0.tempTopBottomOffset
            r2 = 0
            if (r1 == 0) goto L1f
            android.support.design.widget.ViewOffsetHelper r3 = r0.viewOffsetHelper
            r3.setTopAndBottomOffset(r1)
            r0.tempTopBottomOffset = r2
        L1f:
            int r1 = r0.tempLeftRightOffset
            if (r1 == 0) goto L2a
            android.support.design.widget.ViewOffsetHelper r3 = r0.viewOffsetHelper
            r3.setLeftAndRightOffset(r1)
            r0.tempLeftRightOffset = r2
        L2a:
            r1 = 1
            return r1
    }

    public boolean setLeftAndRightOffset(int r2) {
            r1 = this;
            android.support.design.widget.ViewOffsetHelper r0 = r1.viewOffsetHelper
            if (r0 == 0) goto L9
            boolean r2 = r0.setLeftAndRightOffset(r2)
            return r2
        L9:
            r1.tempLeftRightOffset = r2
            r2 = 0
            return r2
    }

    public boolean setTopAndBottomOffset(int r2) {
            r1 = this;
            android.support.design.widget.ViewOffsetHelper r0 = r1.viewOffsetHelper
            if (r0 == 0) goto L9
            boolean r2 = r0.setTopAndBottomOffset(r2)
            return r2
        L9:
            r1.tempTopBottomOffset = r2
            r2 = 0
            return r2
    }
}
