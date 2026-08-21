package android.support.design.transformation;

public abstract class ExpandableTransformationBehavior extends android.support.design.transformation.ExpandableBehavior {
    private android.animation.AnimatorSet currentAnimation;


    public ExpandableTransformationBehavior() {
            r0 = this;
            r0.<init>()
            return
    }

    public ExpandableTransformationBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static android.animation.AnimatorSet access$002(android.support.design.transformation.ExpandableTransformationBehavior r0, android.animation.AnimatorSet r1) {
            r0.currentAnimation = r1
            return r1
    }

    protected abstract android.animation.AnimatorSet onCreateExpandedStateChangeAnimation(android.view.View r1, android.view.View r2, boolean r3, boolean r4);

    @Override
    protected boolean onExpandedStateChange(android.view.View r4, android.view.View r5, boolean r6, boolean r7) {
            r3 = this;
            android.animation.AnimatorSet r0 = r3.currentAnimation
            r1 = 1
            if (r0 == 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            if (r0 == 0) goto Lf
            android.animation.AnimatorSet r2 = r3.currentAnimation
            r2.cancel()
        Lf:
            android.animation.AnimatorSet r4 = r3.onCreateExpandedStateChangeAnimation(r4, r5, r6, r0)
            r3.currentAnimation = r4
            android.support.design.transformation.ExpandableTransformationBehavior$1 r5 = new android.support.design.transformation.ExpandableTransformationBehavior$1
            r5.<init>(r3)
            r4.addListener(r5)
            android.animation.AnimatorSet r4 = r3.currentAnimation
            r4.start()
            if (r7 != 0) goto L29
            android.animation.AnimatorSet r4 = r3.currentAnimation
            r4.end()
        L29:
            return r1
    }
}
