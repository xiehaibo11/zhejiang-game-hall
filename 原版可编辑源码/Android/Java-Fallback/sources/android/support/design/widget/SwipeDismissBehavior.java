package android.support.design.widget;

import android.view.View;

public class SwipeDismissBehavior<V extends android.view.View> extends android.support.design.widget.CoordinatorLayout.Behavior<V> {
    private static final float DEFAULT_ALPHA_END_DISTANCE = 0.5f;
    private static final float DEFAULT_ALPHA_START_DISTANCE = 0.0f;
    private static final float DEFAULT_DRAG_DISMISS_THRESHOLD = 0.5f;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_IDLE = 0;
    public static final int STATE_SETTLING = 2;
    public static final int SWIPE_DIRECTION_ANY = 2;
    public static final int SWIPE_DIRECTION_END_TO_START = 1;
    public static final int SWIPE_DIRECTION_START_TO_END = 0;
    float alphaEndSwipeDistance;
    float alphaStartSwipeDistance;
    private final android.support.v4.widget.ViewDragHelper.Callback dragCallback;
    float dragDismissThreshold;
    private boolean interceptingEvents;
    android.support.design.widget.SwipeDismissBehavior.OnDismissListener listener;
    private float sensitivity;
    private boolean sensitivitySet;
    int swipeDirection;
    android.support.v4.widget.ViewDragHelper viewDragHelper;


    public interface OnDismissListener {
        void onDismiss(android.view.View r1);

        void onDragStateChanged(int r1);
    }

    private class SettleRunnable implements java.lang.Runnable {
        private final boolean dismiss;
        final android.support.design.widget.SwipeDismissBehavior this$0;
        private final android.view.View view;

        SettleRunnable(android.support.design.widget.SwipeDismissBehavior r1, android.view.View r2, boolean r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.view = r2
                r0.dismiss = r3
                return
        }

        @Override
        public void run() {
                r2 = this;
                android.support.design.widget.SwipeDismissBehavior r0 = r2.this$0
                android.support.v4.widget.ViewDragHelper r0 = r0.viewDragHelper
                if (r0 == 0) goto L17
                android.support.design.widget.SwipeDismissBehavior r0 = r2.this$0
                android.support.v4.widget.ViewDragHelper r0 = r0.viewDragHelper
                r1 = 1
                boolean r0 = r0.continueSettling(r1)
                if (r0 == 0) goto L17
                android.view.View r0 = r2.view
                android.support.v4.view.ViewCompat.postOnAnimation(r0, r2)
                goto L2a
            L17:
                boolean r0 = r2.dismiss
                if (r0 == 0) goto L2a
                android.support.design.widget.SwipeDismissBehavior r0 = r2.this$0
                android.support.design.widget.SwipeDismissBehavior$OnDismissListener r0 = r0.listener
                if (r0 == 0) goto L2a
                android.support.design.widget.SwipeDismissBehavior r0 = r2.this$0
                android.support.design.widget.SwipeDismissBehavior$OnDismissListener r0 = r0.listener
                android.view.View r1 = r2.view
                r0.onDismiss(r1)
            L2a:
                return
        }
    }

    public SwipeDismissBehavior() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.sensitivity = r0
            r1 = 2
            r2.swipeDirection = r1
            r1 = 1056964608(0x3f000000, float:0.5)
            r2.dragDismissThreshold = r1
            r2.alphaStartSwipeDistance = r0
            r2.alphaEndSwipeDistance = r1
            android.support.design.widget.SwipeDismissBehavior$1 r0 = new android.support.design.widget.SwipeDismissBehavior$1
            r0.<init>(r2)
            r2.dragCallback = r0
            return
    }

    static float clamp(float r0, float r1, float r2) {
            float r0 = java.lang.Math.max(r0, r1)
            float r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    static int clamp(int r0, int r1, int r2) {
            int r0 = java.lang.Math.max(r0, r1)
            int r0 = java.lang.Math.min(r0, r2)
            return r0
    }

    private void ensureViewDragHelper(android.view.ViewGroup r3) {
            r2 = this;
            android.support.v4.widget.ViewDragHelper r0 = r2.viewDragHelper
            if (r0 != 0) goto L19
            boolean r0 = r2.sensitivitySet
            if (r0 == 0) goto L11
            float r0 = r2.sensitivity
            android.support.v4.widget.ViewDragHelper$Callback r1 = r2.dragCallback
            android.support.v4.widget.ViewDragHelper r3 = android.support.v4.widget.ViewDragHelper.create(r3, r0, r1)
            goto L17
        L11:
            android.support.v4.widget.ViewDragHelper$Callback r0 = r2.dragCallback
            android.support.v4.widget.ViewDragHelper r3 = android.support.v4.widget.ViewDragHelper.create(r3, r0)
        L17:
            r2.viewDragHelper = r3
        L19:
            return
    }

    static float fraction(float r0, float r1, float r2) {
            float r2 = r2 - r0
            float r1 = r1 - r0
            float r2 = r2 / r1
            return r2
    }

    public boolean canSwipeDismissView(android.view.View r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    public int getDragState() {
            r1 = this;
            android.support.v4.widget.ViewDragHelper r0 = r1.viewDragHelper
            if (r0 == 0) goto L9
            int r0 = r0.getViewDragState()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public boolean onInterceptTouchEvent(android.support.design.widget.CoordinatorLayout r4, V r5, android.view.MotionEvent r6) {
            r3 = this;
            boolean r0 = r3.interceptingEvents
            int r1 = r6.getActionMasked()
            r2 = 0
            if (r1 == 0) goto L13
            r5 = 1
            if (r1 == r5) goto L10
            r5 = 3
            if (r1 == r5) goto L10
            goto L23
        L10:
            r3.interceptingEvents = r2
            goto L23
        L13:
            float r0 = r6.getX()
            int r0 = (int) r0
            float r1 = r6.getY()
            int r1 = (int) r1
            boolean r0 = r4.isPointInChildBounds(r5, r0, r1)
            r3.interceptingEvents = r0
        L23:
            if (r0 == 0) goto L2f
            r3.ensureViewDragHelper(r4)
            android.support.v4.widget.ViewDragHelper r4 = r3.viewDragHelper
            boolean r4 = r4.shouldInterceptTouchEvent(r6)
            return r4
        L2f:
            return r2
    }

    @Override
    public boolean onTouchEvent(android.support.design.widget.CoordinatorLayout r1, V r2, android.view.MotionEvent r3) {
            r0 = this;
            android.support.v4.widget.ViewDragHelper r1 = r0.viewDragHelper
            if (r1 == 0) goto L9
            r1.processTouchEvent(r3)
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    public void setDragDismissDistance(float r3) {
            r2 = this;
            r0 = 0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r3 = clamp(r0, r3, r1)
            r2.dragDismissThreshold = r3
            return
    }

    public void setEndAlphaSwipeDistance(float r3) {
            r2 = this;
            r0 = 0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r3 = clamp(r0, r3, r1)
            r2.alphaEndSwipeDistance = r3
            return
    }

    public void setListener(android.support.design.widget.SwipeDismissBehavior.OnDismissListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    public void setSensitivity(float r1) {
            r0 = this;
            r0.sensitivity = r1
            r1 = 1
            r0.sensitivitySet = r1
            return
    }

    public void setStartAlphaSwipeDistance(float r3) {
            r2 = this;
            r0 = 0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r3 = clamp(r0, r3, r1)
            r2.alphaStartSwipeDistance = r3
            return
    }

    public void setSwipeDirection(int r1) {
            r0 = this;
            r0.swipeDirection = r1
            return
    }
}
