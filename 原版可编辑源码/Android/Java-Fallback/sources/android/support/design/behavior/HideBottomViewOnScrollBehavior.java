package android.support.design.behavior;

import android.view.View;

public class HideBottomViewOnScrollBehavior<V extends android.view.View> extends android.support.design.widget.CoordinatorLayout.Behavior<V> {
    protected static final int ENTER_ANIMATION_DURATION = 225;
    protected static final int EXIT_ANIMATION_DURATION = 175;
    private static final int STATE_SCROLLED_DOWN = 1;
    private static final int STATE_SCROLLED_UP = 2;
    private android.view.ViewPropertyAnimator currentAnimator;
    private int currentState;
    private int height;


    public HideBottomViewOnScrollBehavior() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.height = r0
            r0 = 2
            r1.currentState = r0
            return
    }

    public HideBottomViewOnScrollBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.height = r1
            r1 = 2
            r0.currentState = r1
            return
    }

    static android.view.ViewPropertyAnimator access$002(android.support.design.behavior.HideBottomViewOnScrollBehavior r0, android.view.ViewPropertyAnimator r1) {
            r0.currentAnimator = r1
            return r1
    }

    private void animateChildTo(V r1, int r2, long r3, android.animation.TimeInterpolator r5) {
            r0 = this;
            android.view.ViewPropertyAnimator r1 = r1.animate()
            float r2 = (float) r2
            android.view.ViewPropertyAnimator r1 = r1.translationY(r2)
            android.view.ViewPropertyAnimator r1 = r1.setInterpolator(r5)
            android.view.ViewPropertyAnimator r1 = r1.setDuration(r3)
            android.support.design.behavior.HideBottomViewOnScrollBehavior$1 r2 = new android.support.design.behavior.HideBottomViewOnScrollBehavior$1
            r2.<init>(r0)
            android.view.ViewPropertyAnimator r1 = r1.setListener(r2)
            r0.currentAnimator = r1
            return
    }

    @Override
    public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r2, V r3, int r4) {
            r1 = this;
            int r0 = r3.getMeasuredHeight()
            r1.height = r0
            boolean r2 = super.onLayoutChild(r2, r3, r4)
            return r2
    }

    @Override
    public void onNestedScroll(android.support.design.widget.CoordinatorLayout r1, V r2, android.view.View r3, int r4, int r5, int r6, int r7) {
            r0 = this;
            int r1 = r0.currentState
            r3 = 1
            if (r1 == r3) goto Lb
            if (r5 <= 0) goto Lb
            r0.slideDown(r2)
            goto L15
        Lb:
            int r1 = r0.currentState
            r3 = 2
            if (r1 == r3) goto L15
            if (r5 >= 0) goto L15
            r0.slideUp(r2)
        L15:
            return
    }

    @Override
    public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, V r2, android.view.View r3, android.view.View r4, int r5) {
            r0 = this;
            r1 = 2
            if (r5 != r1) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = 0
        L6:
            return r1
    }

    protected void slideDown(V r8) {
            r7 = this;
            android.view.ViewPropertyAnimator r0 = r7.currentAnimator
            if (r0 == 0) goto La
            r0.cancel()
            r8.clearAnimation()
        La:
            r0 = 1
            r7.currentState = r0
            int r3 = r7.height
            r4 = 175(0xaf, double:8.65E-322)
            android.animation.TimeInterpolator r6 = android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR
            r1 = r7
            r2 = r8
            r1.animateChildTo(r2, r3, r4, r6)
            return
    }

    protected void slideUp(V r8) {
            r7 = this;
            android.view.ViewPropertyAnimator r0 = r7.currentAnimator
            if (r0 == 0) goto La
            r0.cancel()
            r8.clearAnimation()
        La:
            r0 = 2
            r7.currentState = r0
            r3 = 0
            r4 = 225(0xe1, double:1.11E-321)
            android.animation.TimeInterpolator r6 = android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR
            r1 = r7
            r2 = r8
            r1.animateChildTo(r2, r3, r4, r6)
            return
    }
}
