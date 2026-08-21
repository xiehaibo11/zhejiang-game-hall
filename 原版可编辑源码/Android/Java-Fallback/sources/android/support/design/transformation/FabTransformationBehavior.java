package android.support.design.transformation;

public abstract class FabTransformationBehavior extends android.support.design.transformation.ExpandableTransformationBehavior {
    private final int[] tmpArray;
    private final android.graphics.Rect tmpRect;
    private final android.graphics.RectF tmpRectF1;
    private final android.graphics.RectF tmpRectF2;





    protected static class FabTransformationSpec {
        public android.support.design.animation.Positioning positioning;
        public android.support.design.animation.MotionSpec timings;

        protected FabTransformationSpec() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public FabTransformationBehavior() {
            r1 = this;
            r1.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.tmpRect = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.tmpRectF1 = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.tmpRectF2 = r0
            r0 = 2
            int[] r0 = new int[r0]
            r1.tmpArray = r0
            return
    }

    public FabTransformationBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.tmpRect = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.tmpRectF1 = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.tmpRectF2 = r1
            r1 = 2
            int[] r1 = new int[r1]
            r0.tmpArray = r1
            return
    }

    private android.view.ViewGroup calculateChildContentContainer(android.view.View r2) {
            r1 = this;
            int r0 = android.support.design.R.id.mtrl_child_content_container
            android.view.View r0 = r2.findViewById(r0)
            if (r0 == 0) goto Ld
            android.view.ViewGroup r2 = r1.toViewGroupOrNull(r0)
            return r2
        Ld:
            boolean r0 = r2 instanceof android.support.design.transformation.TransformationChildLayout
            if (r0 != 0) goto L1b
            boolean r0 = r2 instanceof android.support.design.transformation.TransformationChildCard
            if (r0 == 0) goto L16
            goto L1b
        L16:
            android.view.ViewGroup r2 = r1.toViewGroupOrNull(r2)
            return r2
        L1b:
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r0 = 0
            android.view.View r2 = r2.getChildAt(r0)
            android.view.ViewGroup r2 = r1.toViewGroupOrNull(r2)
            return r2
    }

    private void calculateChildVisibleBoundsAtEndOfExpansion(android.view.View r1, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r2, android.support.design.animation.MotionTiming r3, android.support.design.animation.MotionTiming r4, float r5, float r6, float r7, float r8, android.graphics.RectF r9) {
            r0 = this;
            float r3 = r0.calculateValueOfAnimationAtEndOfExpansion(r2, r3, r5, r7)
            float r2 = r0.calculateValueOfAnimationAtEndOfExpansion(r2, r4, r6, r8)
            android.graphics.Rect r4 = r0.tmpRect
            r1.getWindowVisibleDisplayFrame(r4)
            android.graphics.RectF r5 = r0.tmpRectF1
            r5.set(r4)
            android.graphics.RectF r4 = r0.tmpRectF2
            r0.calculateWindowBounds(r1, r4)
            r4.offset(r3, r2)
            r4.intersect(r5)
            r9.set(r4)
            return
    }

    private float calculateRevealCenterX(android.view.View r3, android.view.View r4, android.support.design.animation.Positioning r5) {
            r2 = this;
            android.graphics.RectF r0 = r2.tmpRectF1
            android.graphics.RectF r1 = r2.tmpRectF2
            r2.calculateWindowBounds(r3, r0)
            r2.calculateWindowBounds(r4, r1)
            float r3 = r2.calculateTranslationX(r3, r4, r5)
            float r3 = -r3
            r4 = 0
            r1.offset(r3, r4)
            float r3 = r0.centerX()
            float r4 = r1.left
            float r3 = r3 - r4
            return r3
    }

    private float calculateRevealCenterY(android.view.View r3, android.view.View r4, android.support.design.animation.Positioning r5) {
            r2 = this;
            android.graphics.RectF r0 = r2.tmpRectF1
            android.graphics.RectF r1 = r2.tmpRectF2
            r2.calculateWindowBounds(r3, r0)
            r2.calculateWindowBounds(r4, r1)
            float r3 = r2.calculateTranslationY(r3, r4, r5)
            float r3 = -r3
            r4 = 0
            r1.offset(r4, r3)
            float r3 = r0.centerY()
            float r4 = r1.top
            float r3 = r3 - r4
            return r3
    }

    private float calculateTranslationX(android.view.View r3, android.view.View r4, android.support.design.animation.Positioning r5) {
            r2 = this;
            android.graphics.RectF r0 = r2.tmpRectF1
            android.graphics.RectF r1 = r2.tmpRectF2
            r2.calculateWindowBounds(r3, r0)
            r2.calculateWindowBounds(r4, r1)
            int r3 = r5.gravity
            r3 = r3 & 7
            r4 = 1
            if (r3 == r4) goto L23
            r4 = 3
            if (r3 == r4) goto L1e
            r4 = 5
            if (r3 == r4) goto L19
            r3 = 0
            goto L2c
        L19:
            float r3 = r1.right
            float r4 = r0.right
            goto L2b
        L1e:
            float r3 = r1.left
            float r4 = r0.left
            goto L2b
        L23:
            float r3 = r1.centerX()
            float r4 = r0.centerX()
        L2b:
            float r3 = r3 - r4
        L2c:
            float r4 = r5.xAdjustment
            float r3 = r3 + r4
            return r3
    }

    private float calculateTranslationY(android.view.View r3, android.view.View r4, android.support.design.animation.Positioning r5) {
            r2 = this;
            android.graphics.RectF r0 = r2.tmpRectF1
            android.graphics.RectF r1 = r2.tmpRectF2
            r2.calculateWindowBounds(r3, r0)
            r2.calculateWindowBounds(r4, r1)
            int r3 = r5.gravity
            r3 = r3 & 112(0x70, float:1.57E-43)
            r4 = 16
            if (r3 == r4) goto L26
            r4 = 48
            if (r3 == r4) goto L21
            r4 = 80
            if (r3 == r4) goto L1c
            r3 = 0
            goto L2f
        L1c:
            float r3 = r1.bottom
            float r4 = r0.bottom
            goto L2e
        L21:
            float r3 = r1.top
            float r4 = r0.top
            goto L2e
        L26:
            float r3 = r1.centerY()
            float r4 = r0.centerY()
        L2e:
            float r3 = r3 - r4
        L2f:
            float r4 = r5.yAdjustment
            float r3 = r3 + r4
            return r3
    }

    private float calculateValueOfAnimationAtEndOfExpansion(android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r9, android.support.design.animation.MotionTiming r10, float r11, float r12) {
            r8 = this;
            long r0 = r10.getDelay()
            long r2 = r10.getDuration()
            android.support.design.animation.MotionSpec r9 = r9.timings
            java.lang.String r4 = "expansion"
            android.support.design.animation.MotionTiming r9 = r9.getTiming(r4)
            long r4 = r9.getDelay()
            long r6 = r9.getDuration()
            long r4 = r4 + r6
            r6 = 17
            long r4 = r4 + r6
            long r4 = r4 - r0
            float r9 = (float) r4
            float r0 = (float) r2
            float r9 = r9 / r0
            android.animation.TimeInterpolator r10 = r10.getInterpolator()
            float r9 = r10.getInterpolation(r9)
            float r9 = android.support.design.animation.AnimationUtils.lerp(r11, r12, r9)
            return r9
    }

    private void calculateWindowBounds(android.view.View r4, android.graphics.RectF r5) {
            r3 = this;
            int r0 = r4.getWidth()
            float r0 = (float) r0
            int r1 = r4.getHeight()
            float r1 = (float) r1
            r2 = 0
            r5.set(r2, r2, r0, r1)
            int[] r0 = r3.tmpArray
            r4.getLocationInWindow(r0)
            r1 = 0
            r1 = r0[r1]
            float r1 = (float) r1
            r2 = 1
            r0 = r0[r2]
            float r0 = (float) r0
            r5.offsetTo(r1, r0)
            float r0 = r4.getTranslationX()
            float r0 = -r0
            int r0 = (int) r0
            float r0 = (float) r0
            float r4 = r4.getTranslationY()
            float r4 = -r4
            int r4 = (int) r4
            float r4 = (float) r4
            r5.offset(r0, r4)
            return
    }

    private void createChildrenFadeAnimation(android.view.View r2, android.view.View r3, boolean r4, boolean r5, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r6, java.util.List<android.animation.Animator> r7, java.util.List<android.animation.Animator.AnimatorListener> r8) {
            r1 = this;
            boolean r2 = r3 instanceof android.view.ViewGroup
            if (r2 != 0) goto L5
            return
        L5:
            boolean r2 = r3 instanceof android.support.design.circularreveal.CircularRevealWidget
            if (r2 == 0) goto Le
            int r2 = android.support.design.circularreveal.CircularRevealHelper.STRATEGY
            if (r2 != 0) goto Le
            return
        Le:
            android.view.ViewGroup r2 = r1.calculateChildContentContainer(r3)
            if (r2 != 0) goto L15
            return
        L15:
            r3 = 0
            r8 = 0
            r0 = 1
            if (r4 == 0) goto L32
            if (r5 != 0) goto L25
            android.util.Property<android.view.ViewGroup, java.lang.Float> r4 = android.support.design.animation.ChildrenAlphaProperty.CHILDREN_ALPHA
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            r4.set(r2, r3)
        L25:
            android.util.Property<android.view.ViewGroup, java.lang.Float> r3 = android.support.design.animation.ChildrenAlphaProperty.CHILDREN_ALPHA
            float[] r4 = new float[r0]
            r5 = 1065353216(0x3f800000, float:1.0)
            r4[r8] = r5
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r3, r4)
            goto L3c
        L32:
            android.util.Property<android.view.ViewGroup, java.lang.Float> r4 = android.support.design.animation.ChildrenAlphaProperty.CHILDREN_ALPHA
            float[] r5 = new float[r0]
            r5[r8] = r3
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r4, r5)
        L3c:
            android.support.design.animation.MotionSpec r3 = r6.timings
            java.lang.String r4 = "contentFade"
            android.support.design.animation.MotionTiming r3 = r3.getTiming(r4)
            r3.apply(r2)
            r7.add(r2)
            return
    }

    private void createColorAnimation(android.view.View r3, android.view.View r4, boolean r5, boolean r6, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r7, java.util.List<android.animation.Animator> r8, java.util.List<android.animation.Animator.AnimatorListener> r9) {
            r2 = this;
            boolean r9 = r4 instanceof android.support.design.circularreveal.CircularRevealWidget
            if (r9 != 0) goto L5
            return
        L5:
            android.support.design.circularreveal.CircularRevealWidget r4 = (android.support.design.circularreveal.CircularRevealWidget) r4
            int r3 = r2.getBackgroundTint(r3)
            r9 = 16777215(0xffffff, float:2.3509886E-38)
            r9 = r9 & r3
            r0 = 0
            r1 = 1
            if (r5 == 0) goto L23
            if (r6 != 0) goto L18
            r4.setCircularRevealScrimColor(r3)
        L18:
            android.util.Property<android.support.design.circularreveal.CircularRevealWidget, java.lang.Integer> r3 = android.support.design.circularreveal.CircularRevealWidget.CircularRevealScrimColorProperty.CIRCULAR_REVEAL_SCRIM_COLOR
            int[] r5 = new int[r1]
            r5[r0] = r9
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofInt(r4, r3, r5)
            goto L2d
        L23:
            android.util.Property<android.support.design.circularreveal.CircularRevealWidget, java.lang.Integer> r5 = android.support.design.circularreveal.CircularRevealWidget.CircularRevealScrimColorProperty.CIRCULAR_REVEAL_SCRIM_COLOR
            int[] r6 = new int[r1]
            r6[r0] = r3
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofInt(r4, r5, r6)
        L2d:
            android.support.design.animation.ArgbEvaluatorCompat r4 = android.support.design.animation.ArgbEvaluatorCompat.getInstance()
            r3.setEvaluator(r4)
            android.support.design.animation.MotionSpec r4 = r7.timings
            java.lang.String r5 = "color"
            android.support.design.animation.MotionTiming r4 = r4.getTiming(r5)
            r4.apply(r3)
            r8.add(r3)
            return
    }

    private void createElevationAnimation(android.view.View r2, android.view.View r3, boolean r4, boolean r5, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r6, java.util.List<android.animation.Animator> r7, java.util.List<android.animation.Animator.AnimatorListener> r8) {
            r1 = this;
            float r8 = android.support.v4.view.ViewCompat.getElevation(r3)
            float r2 = android.support.v4.view.ViewCompat.getElevation(r2)
            float r8 = r8 - r2
            r2 = 0
            r0 = 1
            if (r4 == 0) goto L1f
            if (r5 != 0) goto L13
            float r4 = -r8
            r3.setTranslationZ(r4)
        L13:
            android.util.Property r4 = android.view.View.TRANSLATION_Z
            float[] r5 = new float[r0]
            r8 = 0
            r5[r2] = r8
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r3, r4, r5)
            goto L2a
        L1f:
            android.util.Property r4 = android.view.View.TRANSLATION_Z
            float[] r5 = new float[r0]
            float r8 = -r8
            r5[r2] = r8
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r3, r4, r5)
        L2a:
            android.support.design.animation.MotionSpec r3 = r6.timings
            java.lang.String r4 = "elevation"
            android.support.design.animation.MotionTiming r3 = r3.getTiming(r4)
            r3.apply(r2)
            r7.add(r2)
            return
    }

    private void createExpansionAnimation(android.view.View r18, android.view.View r19, boolean r20, boolean r21, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r22, float r23, float r24, java.util.List<android.animation.Animator> r25, java.util.List<android.animation.Animator.AnimatorListener> r26) {
            r17 = this;
            r12 = r17
            r0 = r18
            r8 = r19
            r9 = r22
            boolean r1 = r8 instanceof android.support.design.circularreveal.CircularRevealWidget
            if (r1 != 0) goto Ld
            return
        Ld:
            r13 = r8
            android.support.design.circularreveal.CircularRevealWidget r13 = (android.support.design.circularreveal.CircularRevealWidget) r13
            android.support.design.animation.Positioning r1 = r9.positioning
            float r1 = r12.calculateRevealCenterX(r0, r8, r1)
            android.support.design.animation.Positioning r2 = r9.positioning
            float r10 = r12.calculateRevealCenterY(r0, r8, r2)
            android.support.design.widget.FloatingActionButton r0 = (android.support.design.widget.FloatingActionButton) r0
            android.graphics.Rect r2 = r12.tmpRect
            r0.getContentRect(r2)
            android.graphics.Rect r0 = r12.tmpRect
            int r0 = r0.width()
            float r0 = (float) r0
            r2 = 1073741824(0x40000000, float:2.0)
            float r11 = r0 / r2
            android.support.design.animation.MotionSpec r0 = r9.timings
            java.lang.String r2 = "expansion"
            android.support.design.animation.MotionTiming r14 = r0.getTiming(r2)
            if (r20 == 0) goto L74
            if (r21 != 0) goto L42
            android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = new android.support.design.circularreveal.CircularRevealWidget$RevealInfo
            r0.<init>(r1, r10, r11)
            r13.setRevealInfo(r0)
        L42:
            if (r21 == 0) goto L4b
            android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = r13.getRevealInfo()
            float r0 = r0.radius
            r11 = r0
        L4b:
            r4 = 0
            r5 = 0
            r2 = r1
            r3 = r10
            r6 = r23
            r7 = r24
            float r0 = android.support.design.widget.MathUtils.distanceToFurthestCorner(r2, r3, r4, r5, r6, r7)
            android.animation.Animator r9 = android.support.design.circularreveal.CircularRevealCompat.createCircularReveal(r13, r1, r10, r0)
            android.support.design.transformation.FabTransformationBehavior$4 r0 = new android.support.design.transformation.FabTransformationBehavior$4
            r0.<init>(r12, r13)
            r9.addListener(r0)
            long r2 = r14.getDelay()
            int r4 = (int) r1
            int r5 = (int) r10
            r0 = r17
            r1 = r19
            r6 = r11
            r7 = r25
            r0.createPreFillRadialExpansion(r1, r2, r4, r5, r6, r7)
            goto Lab
        L74:
            android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = r13.getRevealInfo()
            float r6 = r0.radius
            android.animation.Animator r15 = android.support.design.circularreveal.CircularRevealCompat.createCircularReveal(r13, r1, r10, r11)
            long r2 = r14.getDelay()
            int r7 = (int) r1
            int r10 = (int) r10
            r0 = r17
            r1 = r19
            r4 = r7
            r5 = r10
            r16 = r7
            r7 = r25
            r0.createPreFillRadialExpansion(r1, r2, r4, r5, r6, r7)
            long r2 = r14.getDelay()
            long r4 = r14.getDuration()
            android.support.design.animation.MotionSpec r0 = r9.timings
            long r6 = r0.getTotalDuration()
            r0 = r17
            r8 = r16
            r9 = r10
            r10 = r11
            r11 = r25
            r0.createPostFillRadialExpansion(r1, r2, r4, r6, r8, r9, r10, r11)
            r9 = r15
        Lab:
            r14.apply(r9)
            r0 = r25
            r0.add(r9)
            android.animation.Animator$AnimatorListener r0 = android.support.design.circularreveal.CircularRevealCompat.createCircularRevealListener(r13)
            r1 = r26
            r1.add(r0)
            return
    }

    private void createIconFadeAnimation(android.view.View r5, android.view.View r6, boolean r7, boolean r8, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r9, java.util.List<android.animation.Animator> r10, java.util.List<android.animation.Animator.AnimatorListener> r11) {
            r4 = this;
            boolean r0 = r6 instanceof android.support.design.circularreveal.CircularRevealWidget
            if (r0 == 0) goto L56
            boolean r0 = r5 instanceof android.widget.ImageView
            if (r0 != 0) goto L9
            goto L56
        L9:
            r0 = r6
            android.support.design.circularreveal.CircularRevealWidget r0 = (android.support.design.circularreveal.CircularRevealWidget) r0
            android.widget.ImageView r5 = (android.widget.ImageView) r5
            android.graphics.drawable.Drawable r5 = r5.getDrawable()
            if (r5 != 0) goto L15
            return
        L15:
            r5.mutate()
            r1 = 255(0xff, float:3.57E-43)
            r2 = 1
            r3 = 0
            if (r7 == 0) goto L2e
            if (r8 != 0) goto L23
            r5.setAlpha(r1)
        L23:
            android.util.Property<android.graphics.drawable.Drawable, java.lang.Integer> r7 = android.support.design.animation.DrawableAlphaProperty.DRAWABLE_ALPHA_COMPAT
            int[] r8 = new int[r2]
            r8[r3] = r3
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofInt(r5, r7, r8)
            goto L38
        L2e:
            android.util.Property<android.graphics.drawable.Drawable, java.lang.Integer> r7 = android.support.design.animation.DrawableAlphaProperty.DRAWABLE_ALPHA_COMPAT
            int[] r8 = new int[r2]
            r8[r3] = r1
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofInt(r5, r7, r8)
        L38:
            android.support.design.transformation.FabTransformationBehavior$2 r8 = new android.support.design.transformation.FabTransformationBehavior$2
            r8.<init>(r4, r6)
            r7.addUpdateListener(r8)
            android.support.design.animation.MotionSpec r6 = r9.timings
            java.lang.String r8 = "iconFade"
            android.support.design.animation.MotionTiming r6 = r6.getTiming(r8)
            r6.apply(r7)
            r10.add(r7)
            android.support.design.transformation.FabTransformationBehavior$3 r6 = new android.support.design.transformation.FabTransformationBehavior$3
            r6.<init>(r4, r0, r5)
            r11.add(r6)
        L56:
            return
    }

    private void createPostFillRadialExpansion(android.view.View r3, long r4, long r6, long r8, int r10, int r11, float r12, java.util.List<android.animation.Animator> r13) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L19
            long r4 = r4 + r6
            int r6 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r6 >= 0) goto L19
            android.animation.Animator r3 = android.view.ViewAnimationUtils.createCircularReveal(r3, r10, r11, r12, r12)
            r3.setStartDelay(r4)
            long r8 = r8 - r4
            r3.setDuration(r8)
            r13.add(r3)
        L19:
            return
    }

    private void createPreFillRadialExpansion(android.view.View r4, long r5, int r7, int r8, float r9, java.util.List<android.animation.Animator> r10) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L19
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L19
            android.animation.Animator r4 = android.view.ViewAnimationUtils.createCircularReveal(r4, r7, r8, r9, r9)
            r4.setStartDelay(r0)
            r4.setDuration(r5)
            r10.add(r4)
        L19:
            return
    }

    private void createTranslationAnimation(android.view.View r17, android.view.View r18, boolean r19, boolean r20, android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec r21, java.util.List<android.animation.Animator> r22, java.util.List<android.animation.Animator.AnimatorListener> r23, android.graphics.RectF r24) {
            r16 = this;
            r10 = r16
            r0 = r17
            r1 = r18
            r2 = r21
            r11 = r22
            android.support.design.animation.Positioning r3 = r2.positioning
            float r3 = r10.calculateTranslationX(r0, r1, r3)
            android.support.design.animation.Positioning r4 = r2.positioning
            float r0 = r10.calculateTranslationY(r0, r1, r4)
            r4 = 0
            int r5 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r5 == 0) goto L4c
            int r5 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r5 != 0) goto L20
            goto L4c
        L20:
            if (r19 == 0) goto L26
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 < 0) goto L2a
        L26:
            if (r19 != 0) goto L3b
            if (r5 <= 0) goto L3b
        L2a:
            android.support.design.animation.MotionSpec r5 = r2.timings
            java.lang.String r6 = "translationXCurveUpwards"
            android.support.design.animation.MotionTiming r5 = r5.getTiming(r6)
            android.support.design.animation.MotionSpec r6 = r2.timings
            java.lang.String r7 = "translationYCurveUpwards"
            android.support.design.animation.MotionTiming r6 = r6.getTiming(r7)
            goto L5c
        L3b:
            android.support.design.animation.MotionSpec r5 = r2.timings
            java.lang.String r6 = "translationXCurveDownwards"
            android.support.design.animation.MotionTiming r5 = r5.getTiming(r6)
            android.support.design.animation.MotionSpec r6 = r2.timings
            java.lang.String r7 = "translationYCurveDownwards"
            android.support.design.animation.MotionTiming r6 = r6.getTiming(r7)
            goto L5c
        L4c:
            android.support.design.animation.MotionSpec r5 = r2.timings
            java.lang.String r6 = "translationXLinear"
            android.support.design.animation.MotionTiming r5 = r5.getTiming(r6)
            android.support.design.animation.MotionSpec r6 = r2.timings
            java.lang.String r7 = "translationYLinear"
            android.support.design.animation.MotionTiming r6 = r6.getTiming(r7)
        L5c:
            r12 = r5
            r13 = r6
            r5 = 0
            r6 = 1
            if (r19 == 0) goto L92
            if (r20 != 0) goto L6c
            float r7 = -r3
            r1.setTranslationX(r7)
            float r7 = -r0
            r1.setTranslationY(r7)
        L6c:
            android.util.Property r7 = android.view.View.TRANSLATION_X
            float[] r8 = new float[r6]
            r8[r5] = r4
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r1, r7, r8)
            android.util.Property r7 = android.view.View.TRANSLATION_Y
            float[] r6 = new float[r6]
            r6[r5] = r4
            android.animation.ObjectAnimator r15 = android.animation.ObjectAnimator.ofFloat(r1, r7, r6)
            float r5 = -r3
            float r6 = -r0
            r7 = 0
            r8 = 0
            r0 = r16
            r1 = r18
            r2 = r21
            r3 = r12
            r4 = r13
            r9 = r24
            r0.calculateChildVisibleBoundsAtEndOfExpansion(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            goto La8
        L92:
            android.util.Property r2 = android.view.View.TRANSLATION_X
            float[] r4 = new float[r6]
            float r3 = -r3
            r4[r5] = r3
            android.animation.ObjectAnimator r14 = android.animation.ObjectAnimator.ofFloat(r1, r2, r4)
            android.util.Property r2 = android.view.View.TRANSLATION_Y
            float[] r3 = new float[r6]
            float r0 = -r0
            r3[r5] = r0
            android.animation.ObjectAnimator r15 = android.animation.ObjectAnimator.ofFloat(r1, r2, r3)
        La8:
            r12.apply(r14)
            r13.apply(r15)
            r11.add(r14)
            r11.add(r15)
            return
    }

    private int getBackgroundTint(android.view.View r3) {
            r2 = this;
            android.content.res.ColorStateList r0 = android.support.v4.view.ViewCompat.getBackgroundTintList(r3)
            if (r0 == 0) goto L13
            int[] r3 = r3.getDrawableState()
            int r1 = r0.getDefaultColor()
            int r3 = r0.getColorForState(r3, r1)
            return r3
        L13:
            r3 = 0
            return r3
    }

    private android.view.ViewGroup toViewGroupOrNull(android.view.View r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.view.ViewGroup
            if (r0 == 0) goto L7
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    @Override
    public boolean layoutDependsOn(android.support.design.widget.CoordinatorLayout r2, android.view.View r3, android.view.View r4) {
            r1 = this;
            int r2 = r3.getVisibility()
            r0 = 8
            if (r2 == r0) goto L1d
            boolean r2 = r4 instanceof android.support.design.widget.FloatingActionButton
            r0 = 0
            if (r2 == 0) goto L1c
            android.support.design.widget.FloatingActionButton r4 = (android.support.design.widget.FloatingActionButton) r4
            int r2 = r4.getExpandedComponentIdHint()
            if (r2 == 0) goto L1b
            int r3 = r3.getId()
            if (r2 != r3) goto L1c
        L1b:
            r0 = 1
        L1c:
            return r0
        L1d:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "This behavior cannot be attached to a GONE view. Set the view to INVISIBLE instead."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void onAttachedToLayoutParams(android.support.design.widget.CoordinatorLayout.LayoutParams r2) {
            r1 = this;
            int r0 = r2.dodgeInsetEdges
            if (r0 != 0) goto L8
            r0 = 80
            r2.dodgeInsetEdges = r0
        L8:
            return
    }

    @Override
    protected android.animation.AnimatorSet onCreateExpandedStateChangeAnimation(android.view.View r16, android.view.View r17, boolean r18, boolean r19) {
            r15 = this;
            r10 = r15
            r11 = r18
            android.content.Context r0 = r17.getContext()
            android.support.design.transformation.FabTransformationBehavior$FabTransformationSpec r12 = r15.onCreateMotionSpec(r0, r11)
            java.util.ArrayList r13 = new java.util.ArrayList
            r13.<init>()
            java.util.ArrayList r14 = new java.util.ArrayList
            r14.<init>()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2a
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r12
            r6 = r13
            r7 = r14
            r0.createElevationAnimation(r1, r2, r3, r4, r5, r6, r7)
        L2a:
            android.graphics.RectF r9 = r10.tmpRectF1
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r9
            r0.createTranslationAnimation(r1, r2, r3, r4, r5, r6, r7, r8)
            float r8 = r9.width()
            float r9 = r9.height()
            r0.createIconFadeAnimation(r1, r2, r3, r4, r5, r6, r7)
            r6 = r8
            r7 = r9
            r8 = r13
            r9 = r14
            r0.createExpansionAnimation(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r6 = r13
            r7 = r14
            r0.createColorAnimation(r1, r2, r3, r4, r5, r6, r7)
            r0.createChildrenFadeAnimation(r1, r2, r3, r4, r5, r6, r7)
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.support.design.animation.AnimatorSetCompat.playTogether(r0, r13)
            android.support.design.transformation.FabTransformationBehavior$1 r1 = new android.support.design.transformation.FabTransformationBehavior$1
            r2 = r16
            r3 = r17
            r1.<init>(r15, r11, r3, r2)
            r0.addListener(r1)
            r1 = 0
            int r2 = r14.size()
        L6f:
            if (r1 >= r2) goto L7d
            java.lang.Object r3 = r14.get(r1)
            android.animation.Animator$AnimatorListener r3 = (android.animation.Animator.AnimatorListener) r3
            r0.addListener(r3)
            int r1 = r1 + 1
            goto L6f
        L7d:
            return r0
    }

    protected abstract android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec onCreateMotionSpec(android.content.Context r1, boolean r2);
}
