package android.support.design.transformation;

public class FabTransformationScrimBehavior extends android.support.design.transformation.ExpandableTransformationBehavior {
    public static final long COLLAPSE_DELAY = 0;
    public static final long COLLAPSE_DURATION = 150;
    public static final long EXPAND_DELAY = 75;
    public static final long EXPAND_DURATION = 150;
    private final android.support.design.animation.MotionTiming collapseTiming;
    private final android.support.design.animation.MotionTiming expandTiming;


    public FabTransformationScrimBehavior() {
            r5 = this;
            r5.<init>()
            android.support.design.animation.MotionTiming r0 = new android.support.design.animation.MotionTiming
            r1 = 150(0x96, double:7.4E-322)
            r3 = 75
            r0.<init>(r3, r1)
            r5.expandTiming = r0
            android.support.design.animation.MotionTiming r0 = new android.support.design.animation.MotionTiming
            r3 = 0
            r0.<init>(r3, r1)
            r5.collapseTiming = r0
            return
    }

    public FabTransformationScrimBehavior(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r4.<init>(r5, r6)
            android.support.design.animation.MotionTiming r5 = new android.support.design.animation.MotionTiming
            r0 = 150(0x96, double:7.4E-322)
            r2 = 75
            r5.<init>(r2, r0)
            r4.expandTiming = r5
            android.support.design.animation.MotionTiming r5 = new android.support.design.animation.MotionTiming
            r2 = 0
            r5.<init>(r2, r0)
            r4.collapseTiming = r5
            return
    }

    private void createScrimAnimation(android.view.View r4, boolean r5, boolean r6, java.util.List<android.animation.Animator> r7, java.util.List<android.animation.Animator.AnimatorListener> r8) {
            r3 = this;
            if (r5 == 0) goto L5
            android.support.design.animation.MotionTiming r8 = r3.expandTiming
            goto L7
        L5:
            android.support.design.animation.MotionTiming r8 = r3.collapseTiming
        L7:
            r0 = 0
            r1 = 0
            r2 = 1
            if (r5 == 0) goto L1e
            if (r6 != 0) goto L11
            r4.setAlpha(r0)
        L11:
            android.util.Property r5 = android.view.View.ALPHA
            float[] r6 = new float[r2]
            r0 = 1065353216(0x3f800000, float:1.0)
            r6[r1] = r0
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r4, r5, r6)
            goto L28
        L1e:
            android.util.Property r5 = android.view.View.ALPHA
            float[] r6 = new float[r2]
            r6[r1] = r0
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r4, r5, r6)
        L28:
            r8.apply(r4)
            r7.add(r4)
            return
    }

    @Override
    public boolean layoutDependsOn(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3) {
            r0 = this;
            boolean r1 = r3 instanceof android.support.design.widget.FloatingActionButton
            return r1
    }

    @Override
    protected android.animation.AnimatorSet onCreateExpandedStateChangeAnimation(android.view.View r7, android.view.View r8, boolean r9, boolean r10) {
            r6 = this;
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r7
            r0.createScrimAnimation(r1, r2, r3, r4, r5)
            android.animation.AnimatorSet r10 = new android.animation.AnimatorSet
            r10.<init>()
            android.support.design.animation.AnimatorSetCompat.playTogether(r10, r7)
            android.support.design.transformation.FabTransformationScrimBehavior$1 r7 = new android.support.design.transformation.FabTransformationScrimBehavior$1
            r7.<init>(r6, r9, r8)
            r10.addListener(r7)
            return r10
    }

    @Override
    public boolean onTouchEvent(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.MotionEvent r3) {
            r0 = this;
            boolean r1 = super.onTouchEvent(r1, r2, r3)
            return r1
    }
}
