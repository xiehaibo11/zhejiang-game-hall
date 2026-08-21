package android.support.transition;

public class ChangeImageTransform extends android.support.transition.Transition {
    private static final android.util.Property<android.widget.ImageView, android.graphics.Matrix> ANIMATED_TRANSFORM_PROPERTY = null;
    private static final android.animation.TypeEvaluator<android.graphics.Matrix> NULL_MATRIX_EVALUATOR = null;
    private static final java.lang.String PROPNAME_BOUNDS = "android:changeImageTransform:bounds";
    private static final java.lang.String PROPNAME_MATRIX = "android:changeImageTransform:matrix";
    private static final java.lang.String[] sTransitionProperties = null;



    static class 3 {
        static final int[] $SwitchMap$android$widget$ImageView$ScaleType = null;

        static {
                android.widget.ImageView$ScaleType[] r0 = android.widget.ImageView.ScaleType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                android.support.transition.ChangeImageTransform.3.$SwitchMap$android$widget$ImageView$ScaleType = r0
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = android.support.transition.ChangeImageTransform.3.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L1d
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    static {
            java.lang.String r0 = "android:changeImageTransform:matrix"
            java.lang.String r1 = "android:changeImageTransform:bounds"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            android.support.transition.ChangeImageTransform.sTransitionProperties = r0
            android.support.transition.ChangeImageTransform$1 r0 = new android.support.transition.ChangeImageTransform$1
            r0.<init>()
            android.support.transition.ChangeImageTransform.NULL_MATRIX_EVALUATOR = r0
            android.support.transition.ChangeImageTransform$2 r0 = new android.support.transition.ChangeImageTransform$2
            java.lang.Class<android.graphics.Matrix> r1 = android.graphics.Matrix.class
            java.lang.String r2 = "animatedTransform"
            r0.<init>(r1, r2)
            android.support.transition.ChangeImageTransform.ANIMATED_TRANSFORM_PROPERTY = r0
            return
    }

    public ChangeImageTransform() {
            r0 = this;
            r0.<init>()
            return
    }

    public ChangeImageTransform(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void captureValues(android.support.transition.TransitionValues r7) {
            r6 = this;
            android.view.View r0 = r7.view
            boolean r1 = r0 instanceof android.widget.ImageView
            if (r1 == 0) goto L3c
            int r1 = r0.getVisibility()
            if (r1 == 0) goto Ld
            goto L3c
        Ld:
            r1 = r0
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.graphics.drawable.Drawable r2 = r1.getDrawable()
            if (r2 != 0) goto L17
            return
        L17:
            java.util.Map<java.lang.String, java.lang.Object> r7 = r7.values
            int r2 = r0.getLeft()
            int r3 = r0.getTop()
            int r4 = r0.getRight()
            int r0 = r0.getBottom()
            android.graphics.Rect r5 = new android.graphics.Rect
            r5.<init>(r2, r3, r4, r0)
            java.lang.String r0 = "android:changeImageTransform:bounds"
            r7.put(r0, r5)
            android.graphics.Matrix r0 = copyImageMatrix(r1)
            java.lang.String r1 = "android:changeImageTransform:matrix"
            r7.put(r1, r0)
        L3c:
            return
    }

    private static android.graphics.Matrix centerCropMatrix(android.widget.ImageView r5) {
            android.graphics.drawable.Drawable r0 = r5.getDrawable()
            int r1 = r0.getIntrinsicWidth()
            int r2 = r5.getWidth()
            float r2 = (float) r2
            float r1 = (float) r1
            float r3 = r2 / r1
            int r0 = r0.getIntrinsicHeight()
            int r5 = r5.getHeight()
            float r5 = (float) r5
            float r0 = (float) r0
            float r4 = r5 / r0
            float r3 = java.lang.Math.max(r3, r4)
            float r1 = r1 * r3
            float r0 = r0 * r3
            float r2 = r2 - r1
            r1 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r1
            int r2 = java.lang.Math.round(r2)
            float r5 = r5 - r0
            float r5 = r5 / r1
            int r5 = java.lang.Math.round(r5)
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r0.postScale(r3, r3)
            float r1 = (float) r2
            float r5 = (float) r5
            r0.postTranslate(r1, r5)
            return r0
    }

    private static android.graphics.Matrix copyImageMatrix(android.widget.ImageView r2) {
            int[] r0 = android.support.transition.ChangeImageTransform.3.$SwitchMap$android$widget$ImageView$ScaleType
            android.widget.ImageView$ScaleType r1 = r2.getScaleType()
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L21
            r1 = 2
            if (r0 == r1) goto L1c
            android.graphics.Matrix r0 = new android.graphics.Matrix
            android.graphics.Matrix r2 = r2.getImageMatrix()
            r0.<init>(r2)
            return r0
        L1c:
            android.graphics.Matrix r2 = centerCropMatrix(r2)
            return r2
        L21:
            android.graphics.Matrix r2 = fitXYMatrix(r2)
            return r2
    }

    private android.animation.ObjectAnimator createMatrixAnimator(android.widget.ImageView r5, android.graphics.Matrix r6, android.graphics.Matrix r7) {
            r4 = this;
            android.util.Property<android.widget.ImageView, android.graphics.Matrix> r0 = android.support.transition.ChangeImageTransform.ANIMATED_TRANSFORM_PROPERTY
            android.support.transition.TransitionUtils$MatrixEvaluator r1 = new android.support.transition.TransitionUtils$MatrixEvaluator
            r1.<init>()
            r2 = 2
            android.graphics.Matrix[] r2 = new android.graphics.Matrix[r2]
            r3 = 0
            r2[r3] = r6
            r6 = 1
            r2[r6] = r7
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofObject(r5, r0, r1, r2)
            return r5
    }

    private android.animation.ObjectAnimator createNullAnimator(android.widget.ImageView r6) {
            r5 = this;
            android.util.Property<android.widget.ImageView, android.graphics.Matrix> r0 = android.support.transition.ChangeImageTransform.ANIMATED_TRANSFORM_PROPERTY
            android.animation.TypeEvaluator<android.graphics.Matrix> r1 = android.support.transition.ChangeImageTransform.NULL_MATRIX_EVALUATOR
            r2 = 2
            android.graphics.Matrix[] r2 = new android.graphics.Matrix[r2]
            r3 = 0
            r4 = 0
            r2[r4] = r3
            r4 = 1
            r2[r4] = r3
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofObject(r6, r0, r1, r2)
            return r6
    }

    private static android.graphics.Matrix fitXYMatrix(android.widget.ImageView r4) {
            android.graphics.drawable.Drawable r0 = r4.getDrawable()
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            int r2 = r4.getWidth()
            float r2 = (float) r2
            int r3 = r0.getIntrinsicWidth()
            float r3 = (float) r3
            float r2 = r2 / r3
            int r4 = r4.getHeight()
            float r4 = (float) r4
            int r0 = r0.getIntrinsicHeight()
            float r0 = (float) r0
            float r4 = r4 / r0
            r1.postScale(r2, r4)
            return r1
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
    public android.animation.Animator createAnimator(android.view.ViewGroup r5, android.support.transition.TransitionValues r6, android.support.transition.TransitionValues r7) {
            r4 = this;
            r5 = 0
            if (r6 == 0) goto L7a
            if (r7 != 0) goto L7
            goto L7a
        L7:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r6.values
            java.lang.String r1 = "android:changeImageTransform:bounds"
            java.lang.Object r0 = r0.get(r1)
            android.graphics.Rect r0 = (android.graphics.Rect) r0
            java.util.Map<java.lang.String, java.lang.Object> r2 = r7.values
            java.lang.Object r1 = r2.get(r1)
            android.graphics.Rect r1 = (android.graphics.Rect) r1
            if (r0 == 0) goto L7a
            if (r1 != 0) goto L1e
            goto L7a
        L1e:
            java.util.Map<java.lang.String, java.lang.Object> r6 = r6.values
            java.lang.String r2 = "android:changeImageTransform:matrix"
            java.lang.Object r6 = r6.get(r2)
            android.graphics.Matrix r6 = (android.graphics.Matrix) r6
            java.util.Map<java.lang.String, java.lang.Object> r3 = r7.values
            java.lang.Object r2 = r3.get(r2)
            android.graphics.Matrix r2 = (android.graphics.Matrix) r2
            if (r6 != 0) goto L34
            if (r2 == 0) goto L3c
        L34:
            if (r6 == 0) goto L3e
            boolean r3 = r6.equals(r2)
            if (r3 == 0) goto L3e
        L3c:
            r3 = 1
            goto L3f
        L3e:
            r3 = 0
        L3f:
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L48
            if (r3 == 0) goto L48
            return r5
        L48:
            android.view.View r5 = r7.view
            android.widget.ImageView r5 = (android.widget.ImageView) r5
            android.graphics.drawable.Drawable r7 = r5.getDrawable()
            int r0 = r7.getIntrinsicWidth()
            int r7 = r7.getIntrinsicHeight()
            android.support.transition.ImageViewUtils.startAnimateTransform(r5)
            if (r0 == 0) goto L72
            if (r7 != 0) goto L60
            goto L72
        L60:
            if (r6 != 0) goto L64
            android.graphics.Matrix r6 = android.support.transition.MatrixUtils.IDENTITY_MATRIX
        L64:
            if (r2 != 0) goto L68
            android.graphics.Matrix r2 = android.support.transition.MatrixUtils.IDENTITY_MATRIX
        L68:
            android.util.Property<android.widget.ImageView, android.graphics.Matrix> r7 = android.support.transition.ChangeImageTransform.ANIMATED_TRANSFORM_PROPERTY
            r7.set(r5, r6)
            android.animation.ObjectAnimator r6 = r4.createMatrixAnimator(r5, r6, r2)
            goto L76
        L72:
            android.animation.ObjectAnimator r6 = r4.createNullAnimator(r5)
        L76:
            android.support.transition.ImageViewUtils.reserveEndAnimateTransform(r5, r6)
            return r6
        L7a:
            return r5
    }

    @Override
    public java.lang.String[] getTransitionProperties() {
            r1 = this;
            java.lang.String[] r0 = android.support.transition.ChangeImageTransform.sTransitionProperties
            return r0
    }
}
