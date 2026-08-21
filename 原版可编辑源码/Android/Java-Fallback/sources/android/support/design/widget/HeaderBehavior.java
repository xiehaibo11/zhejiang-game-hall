package android.support.design.widget;

import android.view.View;

abstract class HeaderBehavior<V extends android.view.View> extends android.support.design.widget.ViewOffsetBehavior<V> {
    private static final int INVALID_POINTER = -1;
    private int activePointerId;
    private java.lang.Runnable flingRunnable;
    private boolean isBeingDragged;
    private int lastMotionY;
    android.widget.OverScroller scroller;
    private int touchSlop;
    private android.view.VelocityTracker velocityTracker;

    private class FlingRunnable implements java.lang.Runnable {
        private final V layout;
        private final android.support.design.widget.CoordinatorLayout parent;
        final android.support.design.widget.HeaderBehavior this$0;

        FlingRunnable(android.support.design.widget.HeaderBehavior r1, android.support.design.widget.CoordinatorLayout r2, V r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.parent = r2
                r0.layout = r3
                return
        }

        @Override
        public void run() {
                r4 = this;
                V extends android.view.View r0 = r4.layout
                if (r0 == 0) goto L32
                android.support.design.widget.HeaderBehavior r0 = r4.this$0
                android.widget.OverScroller r0 = r0.scroller
                if (r0 == 0) goto L32
                android.support.design.widget.HeaderBehavior r0 = r4.this$0
                android.widget.OverScroller r0 = r0.scroller
                boolean r0 = r0.computeScrollOffset()
                if (r0 == 0) goto L29
                android.support.design.widget.HeaderBehavior r0 = r4.this$0
                android.support.design.widget.CoordinatorLayout r1 = r4.parent
                V extends android.view.View r2 = r4.layout
                android.widget.OverScroller r3 = r0.scroller
                int r3 = r3.getCurrY()
                r0.setHeaderTopBottomOffset(r1, r2, r3)
                V extends android.view.View r0 = r4.layout
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r4)
                goto L32
            L29:
                android.support.design.widget.HeaderBehavior r0 = r4.this$0
                android.support.design.widget.CoordinatorLayout r1 = r4.parent
                V extends android.view.View r2 = r4.layout
                r0.onFlingFinished(r1, r2)
            L32:
                return
        }
    }

    public HeaderBehavior() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.activePointerId = r0
            r1.touchSlop = r0
            return
    }

    public HeaderBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = -1
            r0.activePointerId = r1
            r0.touchSlop = r1
            return
    }

    private void ensureVelocityTracker() {
            r1 = this;
            android.view.VelocityTracker r0 = r1.velocityTracker
            if (r0 != 0) goto La
            android.view.VelocityTracker r0 = android.view.VelocityTracker.obtain()
            r1.velocityTracker = r0
        La:
            return
    }

    boolean canDragView(V r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    final boolean fling(android.support.design.widget.CoordinatorLayout r14, V r15, int r16, int r17, float r18) {
            r13 = this;
            r0 = r13
            r1 = r15
            java.lang.Runnable r2 = r0.flingRunnable
            if (r2 == 0) goto Lc
            r15.removeCallbacks(r2)
            r2 = 0
            r0.flingRunnable = r2
        Lc:
            android.widget.OverScroller r2 = r0.scroller
            if (r2 != 0) goto L1b
            android.widget.OverScroller r2 = new android.widget.OverScroller
            android.content.Context r3 = r15.getContext()
            r2.<init>(r3)
            r0.scroller = r2
        L1b:
            android.widget.OverScroller r4 = r0.scroller
            r5 = 0
            int r6 = r13.getTopAndBottomOffset()
            r7 = 0
            int r8 = java.lang.Math.round(r18)
            r9 = 0
            r10 = 0
            r11 = r16
            r12 = r17
            r4.fling(r5, r6, r7, r8, r9, r10, r11, r12)
            android.widget.OverScroller r2 = r0.scroller
            boolean r2 = r2.computeScrollOffset()
            if (r2 == 0) goto L45
            android.support.design.widget.HeaderBehavior$FlingRunnable r2 = new android.support.design.widget.HeaderBehavior$FlingRunnable
            r3 = r14
            r2.<init>(r13, r14, r15)
            r0.flingRunnable = r2
            android.support.v4.view.ViewCompat.postOnAnimation(r15, r2)
            r1 = 1
            return r1
        L45:
            r3 = r14
            r13.onFlingFinished(r14, r15)
            r1 = 0
            return r1
    }

    int getMaxDragOffset(V r1) {
            r0 = this;
            int r1 = r1.getHeight()
            int r1 = -r1
            return r1
    }

    int getScrollRangeForDragFling(V r1) {
            r0 = this;
            int r1 = r1.getHeight()
            return r1
    }

    int getTopBottomOffsetForScrollingSibling() {
            r1 = this;
            int r0 = r1.getTopAndBottomOffset()
            return r0
    }

    void onFlingFinished(android.support.design.widget.CoordinatorLayout r1, V r2) {
            r0 = this;
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.support.design.widget.CoordinatorLayout r5, V r6, android.view.MotionEvent r7) {
            r4 = this;
            int r0 = r4.touchSlop
            if (r0 >= 0) goto L12
            android.content.Context r0 = r5.getContext()
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            int r0 = r0.getScaledTouchSlop()
            r4.touchSlop = r0
        L12:
            int r0 = r7.getAction()
            r1 = 2
            r2 = 1
            if (r0 != r1) goto L1f
            boolean r0 = r4.isBeingDragged
            if (r0 == 0) goto L1f
            return r2
        L1f:
            int r0 = r7.getActionMasked()
            r3 = 0
            if (r0 == 0) goto L60
            r5 = -1
            if (r0 == r2) goto L51
            if (r0 == r1) goto L2f
            r6 = 3
            if (r0 == r6) goto L51
            goto L83
        L2f:
            int r6 = r4.activePointerId
            if (r6 != r5) goto L34
            goto L83
        L34:
            int r6 = r7.findPointerIndex(r6)
            if (r6 != r5) goto L3b
            goto L83
        L3b:
            float r5 = r7.getY(r6)
            int r5 = (int) r5
            int r6 = r4.lastMotionY
            int r6 = r5 - r6
            int r6 = java.lang.Math.abs(r6)
            int r0 = r4.touchSlop
            if (r6 <= r0) goto L83
            r4.isBeingDragged = r2
            r4.lastMotionY = r5
            goto L83
        L51:
            r4.isBeingDragged = r3
            r4.activePointerId = r5
            android.view.VelocityTracker r5 = r4.velocityTracker
            if (r5 == 0) goto L83
            r5.recycle()
            r5 = 0
            r4.velocityTracker = r5
            goto L83
        L60:
            r4.isBeingDragged = r3
            float r0 = r7.getX()
            int r0 = (int) r0
            float r1 = r7.getY()
            int r1 = (int) r1
            boolean r2 = r4.canDragView(r6)
            if (r2 == 0) goto L83
            boolean r5 = r5.isPointInChildBounds(r6, r0, r1)
            if (r5 == 0) goto L83
            r4.lastMotionY = r1
            int r5 = r7.getPointerId(r3)
            r4.activePointerId = r5
            r4.ensureVelocityTracker()
        L83:
            android.view.VelocityTracker r5 = r4.velocityTracker
            if (r5 == 0) goto L8a
            r5.addMovement(r7)
        L8a:
            boolean r5 = r4.isBeingDragged
            return r5
    }

    @Override
    public boolean onTouchEvent(android.support.design.widget.CoordinatorLayout r12, V r13, android.view.MotionEvent r14) {
            r11 = this;
            int r0 = r11.touchSlop
            if (r0 >= 0) goto L12
            android.content.Context r0 = r12.getContext()
            android.view.ViewConfiguration r0 = android.view.ViewConfiguration.get(r0)
            int r0 = r0.getScaledTouchSlop()
            r11.touchSlop = r0
        L12:
            int r0 = r14.getActionMasked()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L8d
            r3 = -1
            if (r0 == r1) goto L5c
            r4 = 2
            if (r0 == r4) goto L25
            r12 = 3
            if (r0 == r12) goto L7e
            goto Lae
        L25:
            int r0 = r11.activePointerId
            int r0 = r14.findPointerIndex(r0)
            if (r0 != r3) goto L2e
            return r2
        L2e:
            float r0 = r14.getY(r0)
            int r0 = (int) r0
            int r2 = r11.lastMotionY
            int r2 = r2 - r0
            boolean r3 = r11.isBeingDragged
            if (r3 != 0) goto L49
            int r3 = java.lang.Math.abs(r2)
            int r4 = r11.touchSlop
            if (r3 <= r4) goto L49
            r11.isBeingDragged = r1
            if (r2 <= 0) goto L48
            int r2 = r2 - r4
            goto L49
        L48:
            int r2 = r2 + r4
        L49:
            r6 = r2
            boolean r2 = r11.isBeingDragged
            if (r2 == 0) goto Lae
            r11.lastMotionY = r0
            int r7 = r11.getMaxDragOffset(r13)
            r8 = 0
            r3 = r11
            r4 = r12
            r5 = r13
            r3.scroll(r4, r5, r6, r7, r8)
            goto Lae
        L5c:
            android.view.VelocityTracker r0 = r11.velocityTracker
            if (r0 == 0) goto L7e
            r0.addMovement(r14)
            android.view.VelocityTracker r0 = r11.velocityTracker
            r4 = 1000(0x3e8, float:1.401E-42)
            r0.computeCurrentVelocity(r4)
            android.view.VelocityTracker r0 = r11.velocityTracker
            int r4 = r11.activePointerId
            float r10 = r0.getYVelocity(r4)
            int r0 = r11.getScrollRangeForDragFling(r13)
            int r8 = -r0
            r9 = 0
            r5 = r11
            r6 = r12
            r7 = r13
            r5.fling(r6, r7, r8, r9, r10)
        L7e:
            r11.isBeingDragged = r2
            r11.activePointerId = r3
            android.view.VelocityTracker r12 = r11.velocityTracker
            if (r12 == 0) goto Lae
            r12.recycle()
            r12 = 0
            r11.velocityTracker = r12
            goto Lae
        L8d:
            float r0 = r14.getX()
            int r0 = (int) r0
            float r3 = r14.getY()
            int r3 = (int) r3
            boolean r12 = r12.isPointInChildBounds(r13, r0, r3)
            if (r12 == 0) goto Lb6
            boolean r12 = r11.canDragView(r13)
            if (r12 == 0) goto Lb6
            r11.lastMotionY = r3
            int r12 = r14.getPointerId(r2)
            r11.activePointerId = r12
            r11.ensureVelocityTracker()
        Lae:
            android.view.VelocityTracker r12 = r11.velocityTracker
            if (r12 == 0) goto Lb5
            r12.addMovement(r14)
        Lb5:
            return r1
        Lb6:
            return r2
    }

    final int scroll(android.support.design.widget.CoordinatorLayout r8, V r9, int r10, int r11, int r12) {
            r7 = this;
            int r0 = r7.getTopBottomOffsetForScrollingSibling()
            int r4 = r0 - r10
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r11
            r6 = r12
            int r8 = r1.setHeaderTopBottomOffset(r2, r3, r4, r5, r6)
            return r8
    }

    int setHeaderTopBottomOffset(android.support.design.widget.CoordinatorLayout r7, V r8, int r9) {
            r6 = this;
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = 2147483647(0x7fffffff, float:NaN)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            int r7 = r0.setHeaderTopBottomOffset(r1, r2, r3, r4, r5)
            return r7
    }

    int setHeaderTopBottomOffset(android.support.design.widget.CoordinatorLayout r1, V r2, int r3, int r4, int r5) {
            r0 = this;
            int r1 = r0.getTopAndBottomOffset()
            if (r4 == 0) goto L15
            if (r1 < r4) goto L15
            if (r1 > r5) goto L15
            int r2 = android.support.v4.math.MathUtils.clamp(r3, r4, r5)
            if (r1 == r2) goto L15
            r0.setTopAndBottomOffset(r2)
            int r1 = r1 - r2
            goto L16
        L15:
            r1 = 0
        L16:
            return r1
    }
}
