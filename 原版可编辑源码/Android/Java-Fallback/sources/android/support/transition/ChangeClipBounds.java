package android.support.transition;

public class ChangeClipBounds extends android.support.transition.Transition {
    private static final java.lang.String PROPNAME_BOUNDS = "android:clipBounds:bounds";
    private static final java.lang.String PROPNAME_CLIP = "android:clipBounds:clip";
    private static final java.lang.String[] sTransitionProperties = null;


    static {
            java.lang.String r0 = "android:clipBounds:clip"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            android.support.transition.ChangeClipBounds.sTransitionProperties = r0
            return
    }

    public ChangeClipBounds() {
            r0 = this;
            r0.<init>()
            return
    }

    public ChangeClipBounds(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void captureValues(android.support.transition.TransitionValues r5) {
            r4 = this;
            android.view.View r0 = r5.view
            int r1 = r0.getVisibility()
            r2 = 8
            if (r1 != r2) goto Lb
            return
        Lb:
            android.graphics.Rect r1 = android.support.v4.view.ViewCompat.getClipBounds(r0)
            java.util.Map<java.lang.String, java.lang.Object> r2 = r5.values
            java.lang.String r3 = "android:clipBounds:clip"
            r2.put(r3, r1)
            if (r1 != 0) goto L2d
            android.graphics.Rect r1 = new android.graphics.Rect
            int r2 = r0.getWidth()
            int r0 = r0.getHeight()
            r3 = 0
            r1.<init>(r3, r3, r2, r0)
            java.util.Map<java.lang.String, java.lang.Object> r5 = r5.values
            java.lang.String r0 = "android:clipBounds:bounds"
            r5.put(r0, r1)
        L2d:
            return
    }

    @Override
    public void captureEndValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            r0.captureValues(r1)
            return
    }

    @Override
    public void captureStartValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            r0.captureValues(r1)
            return
    }

    @Override
    public android.animation.Animator createAnimator(android.view.ViewGroup r8, android.support.transition.TransitionValues r9, android.support.transition.TransitionValues r10) {
            r7 = this;
            r8 = 0
            if (r9 == 0) goto L7e
            if (r10 == 0) goto L7e
            java.util.Map<java.lang.String, java.lang.Object> r0 = r9.values
            java.lang.String r1 = "android:clipBounds:clip"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L7e
            java.util.Map<java.lang.String, java.lang.Object> r0 = r10.values
            boolean r0 = r0.containsKey(r1)
            if (r0 != 0) goto L18
            goto L7e
        L18:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r9.values
            java.lang.Object r0 = r0.get(r1)
            android.graphics.Rect r0 = (android.graphics.Rect) r0
            java.util.Map<java.lang.String, java.lang.Object> r2 = r10.values
            java.lang.Object r1 = r2.get(r1)
            android.graphics.Rect r1 = (android.graphics.Rect) r1
            r2 = 1
            r3 = 0
            if (r1 != 0) goto L2e
            r4 = r2
            goto L2f
        L2e:
            r4 = r3
        L2f:
            if (r0 != 0) goto L34
            if (r1 != 0) goto L34
            return r8
        L34:
            java.lang.String r5 = "android:clipBounds:bounds"
            if (r0 != 0) goto L42
            java.util.Map<java.lang.String, java.lang.Object> r9 = r9.values
            java.lang.Object r9 = r9.get(r5)
            r0 = r9
            android.graphics.Rect r0 = (android.graphics.Rect) r0
            goto L4d
        L42:
            if (r1 != 0) goto L4d
            java.util.Map<java.lang.String, java.lang.Object> r9 = r10.values
            java.lang.Object r9 = r9.get(r5)
            r1 = r9
            android.graphics.Rect r1 = (android.graphics.Rect) r1
        L4d:
            boolean r9 = r0.equals(r1)
            if (r9 == 0) goto L54
            return r8
        L54:
            android.view.View r8 = r10.view
            android.support.v4.view.ViewCompat.setClipBounds(r8, r0)
            android.support.transition.RectEvaluator r8 = new android.support.transition.RectEvaluator
            android.graphics.Rect r9 = new android.graphics.Rect
            r9.<init>()
            r8.<init>(r9)
            android.view.View r9 = r10.view
            android.util.Property<android.view.View, android.graphics.Rect> r5 = android.support.transition.ViewUtils.CLIP_BOUNDS
            r6 = 2
            android.graphics.Rect[] r6 = new android.graphics.Rect[r6]
            r6[r3] = r0
            r6[r2] = r1
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofObject(r9, r5, r8, r6)
            if (r4 == 0) goto L7e
            android.view.View r9 = r10.view
            android.support.transition.ChangeClipBounds$1 r10 = new android.support.transition.ChangeClipBounds$1
            r10.<init>(r7, r9)
            r8.addListener(r10)
        L7e:
            return r8
    }

    @Override
    public java.lang.String[] getTransitionProperties() {
            r1 = this;
            java.lang.String[] r0 = android.support.transition.ChangeClipBounds.sTransitionProperties
            return r0
    }
}
