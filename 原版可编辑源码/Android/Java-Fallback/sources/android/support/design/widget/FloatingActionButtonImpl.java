package android.support.design.widget;

class FloatingActionButtonImpl {
    static final int ANIM_STATE_HIDING = 1;
    static final int ANIM_STATE_NONE = 0;
    static final int ANIM_STATE_SHOWING = 2;
    static final long ELEVATION_ANIM_DELAY = 100;
    static final long ELEVATION_ANIM_DURATION = 100;
    static final android.animation.TimeInterpolator ELEVATION_ANIM_INTERPOLATOR = null;
    static final int[] EMPTY_STATE_SET = null;
    static final int[] ENABLED_STATE_SET = null;
    static final int[] FOCUSED_ENABLED_STATE_SET = null;
    private static final float HIDE_ICON_SCALE = 0.0f;
    private static final float HIDE_OPACITY = 0.0f;
    private static final float HIDE_SCALE = 0.0f;
    static final int[] HOVERED_ENABLED_STATE_SET = null;
    static final int[] HOVERED_FOCUSED_ENABLED_STATE_SET = null;
    static final int[] PRESSED_ENABLED_STATE_SET = null;
    private static final float SHOW_ICON_SCALE = 1.0f;
    private static final float SHOW_OPACITY = 1.0f;
    private static final float SHOW_SCALE = 1.0f;
    int animState;
    android.support.design.widget.CircularBorderDrawable borderDrawable;
    android.graphics.drawable.Drawable contentBackground;
    android.animation.Animator currentAnimator;
    private android.support.design.animation.MotionSpec defaultHideMotionSpec;
    private android.support.design.animation.MotionSpec defaultShowMotionSpec;
    float elevation;
    private java.util.ArrayList<android.animation.Animator.AnimatorListener> hideListeners;
    android.support.design.animation.MotionSpec hideMotionSpec;
    float hoveredFocusedTranslationZ;
    float imageMatrixScale;
    int maxImageSize;
    private android.view.ViewTreeObserver.OnPreDrawListener preDrawListener;
    float pressedTranslationZ;
    android.graphics.drawable.Drawable rippleDrawable;
    private float rotation;
    android.support.design.widget.ShadowDrawableWrapper shadowDrawable;
    final android.support.design.widget.ShadowViewDelegate shadowViewDelegate;
    android.graphics.drawable.Drawable shapeDrawable;
    private java.util.ArrayList<android.animation.Animator.AnimatorListener> showListeners;
    android.support.design.animation.MotionSpec showMotionSpec;
    private final android.support.design.widget.StateListAnimator stateListAnimator;
    private final android.graphics.Matrix tmpMatrix;
    private final android.graphics.Rect tmpRect;
    private final android.graphics.RectF tmpRectF1;
    private final android.graphics.RectF tmpRectF2;
    final android.support.design.widget.VisibilityAwareImageButton view;




    private class DisabledElevationAnimation extends android.support.design.widget.FloatingActionButtonImpl.ShadowAnimatorImpl {
        final android.support.design.widget.FloatingActionButtonImpl this$0;

        DisabledElevationAnimation(android.support.design.widget.FloatingActionButtonImpl r2) {
                r1 = this;
                r1.this$0 = r2
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        @Override
        protected float getTargetShadowSize() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    private class ElevateToHoveredFocusedTranslationZAnimation extends android.support.design.widget.FloatingActionButtonImpl.ShadowAnimatorImpl {
        final android.support.design.widget.FloatingActionButtonImpl this$0;

        ElevateToHoveredFocusedTranslationZAnimation(android.support.design.widget.FloatingActionButtonImpl r2) {
                r1 = this;
                r1.this$0 = r2
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        @Override
        protected float getTargetShadowSize() {
                r2 = this;
                android.support.design.widget.FloatingActionButtonImpl r0 = r2.this$0
                float r0 = r0.elevation
                android.support.design.widget.FloatingActionButtonImpl r1 = r2.this$0
                float r1 = r1.hoveredFocusedTranslationZ
                float r0 = r0 + r1
                return r0
        }
    }

    private class ElevateToPressedTranslationZAnimation extends android.support.design.widget.FloatingActionButtonImpl.ShadowAnimatorImpl {
        final android.support.design.widget.FloatingActionButtonImpl this$0;

        ElevateToPressedTranslationZAnimation(android.support.design.widget.FloatingActionButtonImpl r2) {
                r1 = this;
                r1.this$0 = r2
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        @Override
        protected float getTargetShadowSize() {
                r2 = this;
                android.support.design.widget.FloatingActionButtonImpl r0 = r2.this$0
                float r0 = r0.elevation
                android.support.design.widget.FloatingActionButtonImpl r1 = r2.this$0
                float r1 = r1.pressedTranslationZ
                float r0 = r0 + r1
                return r0
        }
    }

    interface InternalVisibilityChangedListener {
        void onHidden();

        void onShown();
    }

    private class ResetElevationAnimation extends android.support.design.widget.FloatingActionButtonImpl.ShadowAnimatorImpl {
        final android.support.design.widget.FloatingActionButtonImpl this$0;

        ResetElevationAnimation(android.support.design.widget.FloatingActionButtonImpl r2) {
                r1 = this;
                r1.this$0 = r2
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        @Override
        protected float getTargetShadowSize() {
                r1 = this;
                android.support.design.widget.FloatingActionButtonImpl r0 = r1.this$0
                float r0 = r0.elevation
                return r0
        }
    }

    private abstract class ShadowAnimatorImpl extends android.animation.AnimatorListenerAdapter implements android.animation.ValueAnimator.AnimatorUpdateListener {
        private float shadowSizeEnd;
        private float shadowSizeStart;
        final android.support.design.widget.FloatingActionButtonImpl this$0;
        private boolean validValues;

        private ShadowAnimatorImpl(android.support.design.widget.FloatingActionButtonImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        ShadowAnimatorImpl(android.support.design.widget.FloatingActionButtonImpl r1, android.support.design.widget.FloatingActionButtonImpl.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        protected abstract float getTargetShadowSize();

        @Override
        public void onAnimationEnd(android.animation.Animator r2) {
                r1 = this;
                android.support.design.widget.FloatingActionButtonImpl r2 = r1.this$0
                android.support.design.widget.ShadowDrawableWrapper r2 = r2.shadowDrawable
                float r0 = r1.shadowSizeEnd
                r2.setShadowSize(r0)
                r2 = 0
                r1.validValues = r2
                return
        }

        @Override
        public void onAnimationUpdate(android.animation.ValueAnimator r4) {
                r3 = this;
                boolean r0 = r3.validValues
                if (r0 != 0) goto L17
                android.support.design.widget.FloatingActionButtonImpl r0 = r3.this$0
                android.support.design.widget.ShadowDrawableWrapper r0 = r0.shadowDrawable
                float r0 = r0.getShadowSize()
                r3.shadowSizeStart = r0
                float r0 = r3.getTargetShadowSize()
                r3.shadowSizeEnd = r0
                r0 = 1
                r3.validValues = r0
            L17:
                android.support.design.widget.FloatingActionButtonImpl r0 = r3.this$0
                android.support.design.widget.ShadowDrawableWrapper r0 = r0.shadowDrawable
                float r1 = r3.shadowSizeStart
                float r2 = r3.shadowSizeEnd
                float r2 = r2 - r1
                float r4 = r4.getAnimatedFraction()
                float r2 = r2 * r4
                float r1 = r1 + r2
                r0.setShadowSize(r1)
                return
        }
    }

    static {
            android.animation.TimeInterpolator r0 = android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR
            android.support.design.widget.FloatingActionButtonImpl.ELEVATION_ANIM_INTERPOLATOR = r0
            r0 = 2
            int[] r1 = new int[r0]
            r1 = {x0032: FILL_ARRAY_DATA , data: [16842919, 16842910} // fill-array
            android.support.design.widget.FloatingActionButtonImpl.PRESSED_ENABLED_STATE_SET = r1
            r1 = 3
            int[] r1 = new int[r1]
            r1 = {x003a: FILL_ARRAY_DATA , data: [16843623, 16842908, 16842910} // fill-array
            android.support.design.widget.FloatingActionButtonImpl.HOVERED_FOCUSED_ENABLED_STATE_SET = r1
            int[] r1 = new int[r0]
            r1 = {x0044: FILL_ARRAY_DATA , data: [16842908, 16842910} // fill-array
            android.support.design.widget.FloatingActionButtonImpl.FOCUSED_ENABLED_STATE_SET = r1
            int[] r0 = new int[r0]
            r0 = {x004c: FILL_ARRAY_DATA , data: [16843623, 16842910} // fill-array
            android.support.design.widget.FloatingActionButtonImpl.HOVERED_ENABLED_STATE_SET = r0
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 16842910(0x101009e, float:2.3694E-38)
            r2 = 0
            r0[r2] = r1
            android.support.design.widget.FloatingActionButtonImpl.ENABLED_STATE_SET = r0
            int[] r0 = new int[r2]
            android.support.design.widget.FloatingActionButtonImpl.EMPTY_STATE_SET = r0
            return
    }

    FloatingActionButtonImpl(android.support.design.widget.VisibilityAwareImageButton r2, android.support.design.widget.ShadowViewDelegate r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.animState = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            r1.imageMatrixScale = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.tmpRect = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.tmpRectF1 = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.tmpRectF2 = r0
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r1.tmpMatrix = r0
            r1.view = r2
            r1.shadowViewDelegate = r3
            android.support.design.widget.StateListAnimator r2 = new android.support.design.widget.StateListAnimator
            r2.<init>()
            r1.stateListAnimator = r2
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.PRESSED_ENABLED_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$ElevateToPressedTranslationZAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$ElevateToPressedTranslationZAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.StateListAnimator r2 = r1.stateListAnimator
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.HOVERED_FOCUSED_ENABLED_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.StateListAnimator r2 = r1.stateListAnimator
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.FOCUSED_ENABLED_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.StateListAnimator r2 = r1.stateListAnimator
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.HOVERED_ENABLED_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$ElevateToHoveredFocusedTranslationZAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.StateListAnimator r2 = r1.stateListAnimator
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.ENABLED_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$ResetElevationAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$ResetElevationAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.StateListAnimator r2 = r1.stateListAnimator
            int[] r3 = android.support.design.widget.FloatingActionButtonImpl.EMPTY_STATE_SET
            android.support.design.widget.FloatingActionButtonImpl$DisabledElevationAnimation r0 = new android.support.design.widget.FloatingActionButtonImpl$DisabledElevationAnimation
            r0.<init>(r1)
            android.animation.ValueAnimator r0 = r1.createElevationAnimator(r0)
            r2.addState(r3, r0)
            android.support.design.widget.VisibilityAwareImageButton r2 = r1.view
            float r2 = r2.getRotation()
            r1.rotation = r2
            return
    }

    private void calculateImageMatrixFromScale(float r6, android.graphics.Matrix r7) {
            r5 = this;
            r7.reset()
            android.support.design.widget.VisibilityAwareImageButton r0 = r5.view
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            if (r0 == 0) goto L38
            int r1 = r5.maxImageSize
            if (r1 == 0) goto L38
            android.graphics.RectF r1 = r5.tmpRectF1
            android.graphics.RectF r2 = r5.tmpRectF2
            int r3 = r0.getIntrinsicWidth()
            float r3 = (float) r3
            int r0 = r0.getIntrinsicHeight()
            float r0 = (float) r0
            r4 = 0
            r1.set(r4, r4, r3, r0)
            int r0 = r5.maxImageSize
            float r3 = (float) r0
            float r0 = (float) r0
            r2.set(r4, r4, r3, r0)
            android.graphics.Matrix$ScaleToFit r0 = android.graphics.Matrix.ScaleToFit.CENTER
            r7.setRectToRect(r1, r2, r0)
            int r0 = r5.maxImageSize
            float r1 = (float) r0
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r2
            float r0 = (float) r0
            float r0 = r0 / r2
            r7.postScale(r6, r6, r1, r0)
        L38:
            return
    }

    private android.animation.AnimatorSet createAnimator(android.support.design.animation.MotionSpec r7, float r8, float r9, float r10) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.support.design.widget.VisibilityAwareImageButton r1 = r6.view
            android.util.Property r2 = android.view.View.ALPHA
            r3 = 1
            float[] r4 = new float[r3]
            r5 = 0
            r4[r5] = r8
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r1, r2, r4)
            java.lang.String r1 = "opacity"
            android.support.design.animation.MotionTiming r1 = r7.getTiming(r1)
            r1.apply(r8)
            r0.add(r8)
            android.support.design.widget.VisibilityAwareImageButton r8 = r6.view
            android.util.Property r1 = android.view.View.SCALE_X
            float[] r2 = new float[r3]
            r2[r5] = r9
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r1, r2)
            java.lang.String r1 = "scale"
            android.support.design.animation.MotionTiming r2 = r7.getTiming(r1)
            r2.apply(r8)
            r0.add(r8)
            android.support.design.widget.VisibilityAwareImageButton r8 = r6.view
            android.util.Property r2 = android.view.View.SCALE_Y
            float[] r4 = new float[r3]
            r4[r5] = r9
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r8, r2, r4)
            android.support.design.animation.MotionTiming r9 = r7.getTiming(r1)
            r9.apply(r8)
            r0.add(r8)
            android.graphics.Matrix r8 = r6.tmpMatrix
            r6.calculateImageMatrixFromScale(r10, r8)
            android.support.design.widget.VisibilityAwareImageButton r8 = r6.view
            android.support.design.animation.ImageMatrixProperty r9 = new android.support.design.animation.ImageMatrixProperty
            r9.<init>()
            android.support.design.animation.MatrixEvaluator r10 = new android.support.design.animation.MatrixEvaluator
            r10.<init>()
            android.graphics.Matrix[] r1 = new android.graphics.Matrix[r3]
            android.graphics.Matrix r2 = new android.graphics.Matrix
            android.graphics.Matrix r3 = r6.tmpMatrix
            r2.<init>(r3)
            r1[r5] = r2
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofObject(r8, r9, r10, r1)
            java.lang.String r9 = "iconScale"
            android.support.design.animation.MotionTiming r7 = r7.getTiming(r9)
            r7.apply(r8)
            r0.add(r8)
            android.animation.AnimatorSet r7 = new android.animation.AnimatorSet
            r7.<init>()
            android.support.design.animation.AnimatorSetCompat.playTogether(r7, r0)
            return r7
    }

    private android.animation.ValueAnimator createElevationAnimator(android.support.design.widget.FloatingActionButtonImpl.ShadowAnimatorImpl r4) {
            r3 = this;
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            android.animation.TimeInterpolator r1 = android.support.design.widget.FloatingActionButtonImpl.ELEVATION_ANIM_INTERPOLATOR
            r0.setInterpolator(r1)
            r1 = 100
            r0.setDuration(r1)
            r0.addListener(r4)
            r0.addUpdateListener(r4)
            r4 = 2
            float[] r4 = new float[r4]
            r4 = {x0020: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            r0.setFloatValues(r4)
            return r0
    }

    private void ensurePreDrawListener() {
            r1 = this;
            android.view.ViewTreeObserver$OnPreDrawListener r0 = r1.preDrawListener
            if (r0 != 0) goto Lb
            android.support.design.widget.FloatingActionButtonImpl$3 r0 = new android.support.design.widget.FloatingActionButtonImpl$3
            r0.<init>(r1)
            r1.preDrawListener = r0
        Lb:
            return
    }

    private android.support.design.animation.MotionSpec getDefaultHideMotionSpec() {
            r2 = this;
            android.support.design.animation.MotionSpec r0 = r2.defaultHideMotionSpec
            if (r0 != 0) goto L12
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            android.content.Context r0 = r0.getContext()
            int r1 = android.support.design.R.animator.design_fab_hide_motion_spec
            android.support.design.animation.MotionSpec r0 = android.support.design.animation.MotionSpec.createFromResource(r0, r1)
            r2.defaultHideMotionSpec = r0
        L12:
            android.support.design.animation.MotionSpec r0 = r2.defaultHideMotionSpec
            return r0
    }

    private android.support.design.animation.MotionSpec getDefaultShowMotionSpec() {
            r2 = this;
            android.support.design.animation.MotionSpec r0 = r2.defaultShowMotionSpec
            if (r0 != 0) goto L12
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            android.content.Context r0 = r0.getContext()
            int r1 = android.support.design.R.animator.design_fab_show_motion_spec
            android.support.design.animation.MotionSpec r0 = android.support.design.animation.MotionSpec.createFromResource(r0, r1)
            r2.defaultShowMotionSpec = r0
        L12:
            android.support.design.animation.MotionSpec r0 = r2.defaultShowMotionSpec
            return r0
    }

    private boolean shouldAnimateVisibilityChange() {
            r1 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r1.view
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r0)
            if (r0 == 0) goto L12
            android.support.design.widget.VisibilityAwareImageButton r0 = r1.view
            boolean r0 = r0.isInEditMode()
            if (r0 != 0) goto L12
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    private void updateFromViewRotation() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 != r1) goto L2e
            float r0 = r3.rotation
            r1 = 1119092736(0x42b40000, float:90.0)
            float r0 = r0 % r1
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L20
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            int r0 = r0.getLayerType()
            r2 = 1
            if (r0 == r2) goto L2e
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r0.setLayerType(r2, r1)
            goto L2e
        L20:
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            int r0 = r0.getLayerType()
            if (r0 == 0) goto L2e
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r2 = 0
            r0.setLayerType(r2, r1)
        L2e:
            android.support.design.widget.ShadowDrawableWrapper r0 = r3.shadowDrawable
            if (r0 == 0) goto L38
            float r1 = r3.rotation
            float r1 = -r1
            r0.setRotation(r1)
        L38:
            android.support.design.widget.CircularBorderDrawable r0 = r3.borderDrawable
            if (r0 == 0) goto L42
            float r1 = r3.rotation
            float r1 = -r1
            r0.setRotation(r1)
        L42:
            return
    }

    public void addOnHideAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.hideListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.hideListeners = r0
        Lb:
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.hideListeners
            r0.add(r2)
            return
    }

    void addOnShowAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.showListeners
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.showListeners = r0
        Lb:
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.showListeners
            r0.add(r2)
            return
    }

    android.support.design.widget.CircularBorderDrawable createBorderDrawable(int r7, android.content.res.ColorStateList r8) {
            r6 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r6.view
            android.content.Context r0 = r0.getContext()
            android.support.design.widget.CircularBorderDrawable r1 = r6.newCircularDrawable()
            int r2 = android.support.design.R.color.design_fab_stroke_top_outer_color
            int r2 = android.support.v4.content.ContextCompat.getColor(r0, r2)
            int r3 = android.support.design.R.color.design_fab_stroke_top_inner_color
            int r3 = android.support.v4.content.ContextCompat.getColor(r0, r3)
            int r4 = android.support.design.R.color.design_fab_stroke_end_inner_color
            int r4 = android.support.v4.content.ContextCompat.getColor(r0, r4)
            int r5 = android.support.design.R.color.design_fab_stroke_end_outer_color
            int r0 = android.support.v4.content.ContextCompat.getColor(r0, r5)
            r1.setGradientColors(r2, r3, r4, r0)
            float r7 = (float) r7
            r1.setBorderWidth(r7)
            r1.setBorderTint(r8)
            return r1
    }

    android.graphics.drawable.GradientDrawable createShapeDrawable() {
            r2 = this;
            android.graphics.drawable.GradientDrawable r0 = r2.newGradientDrawableForShape()
            r1 = 1
            r0.setShape(r1)
            r1 = -1
            r0.setColor(r1)
            return r0
    }

    final android.graphics.drawable.Drawable getContentBackground() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.contentBackground
            return r0
    }

    float getElevation() {
            r1 = this;
            float r0 = r1.elevation
            return r0
    }

    final android.support.design.animation.MotionSpec getHideMotionSpec() {
            r1 = this;
            android.support.design.animation.MotionSpec r0 = r1.hideMotionSpec
            return r0
    }

    float getHoveredFocusedTranslationZ() {
            r1 = this;
            float r0 = r1.hoveredFocusedTranslationZ
            return r0
    }

    void getPadding(android.graphics.Rect r2) {
            r1 = this;
            android.support.design.widget.ShadowDrawableWrapper r0 = r1.shadowDrawable
            r0.getPadding(r2)
            return
    }

    float getPressedTranslationZ() {
            r1 = this;
            float r0 = r1.pressedTranslationZ
            return r0
    }

    final android.support.design.animation.MotionSpec getShowMotionSpec() {
            r1 = this;
            android.support.design.animation.MotionSpec r0 = r1.showMotionSpec
            return r0
    }

    void hide(android.support.design.widget.FloatingActionButtonImpl.InternalVisibilityChangedListener r3, boolean r4) {
            r2 = this;
            boolean r0 = r2.isOrWillBeHidden()
            if (r0 == 0) goto L7
            return
        L7:
            android.animation.Animator r0 = r2.currentAnimator
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            boolean r0 = r2.shouldAnimateVisibilityChange()
            if (r0 == 0) goto L46
            android.support.design.animation.MotionSpec r0 = r2.hideMotionSpec
            if (r0 == 0) goto L19
            goto L1d
        L19:
            android.support.design.animation.MotionSpec r0 = r2.getDefaultHideMotionSpec()
        L1d:
            r1 = 0
            android.animation.AnimatorSet r0 = r2.createAnimator(r0, r1, r1, r1)
            android.support.design.widget.FloatingActionButtonImpl$1 r1 = new android.support.design.widget.FloatingActionButtonImpl$1
            r1.<init>(r2, r4, r3)
            r0.addListener(r1)
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r3 = r2.hideListeners
            if (r3 == 0) goto L42
            java.util.Iterator r3 = r3.iterator()
        L32:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L42
            java.lang.Object r4 = r3.next()
            android.animation.Animator$AnimatorListener r4 = (android.animation.Animator.AnimatorListener) r4
            r0.addListener(r4)
            goto L32
        L42:
            r0.start()
            goto L56
        L46:
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            if (r4 == 0) goto L4d
            r1 = 8
            goto L4e
        L4d:
            r1 = 4
        L4e:
            r0.internalSetVisibility(r1, r4)
            if (r3 == 0) goto L56
            r3.onHidden()
        L56:
            return
    }

    boolean isOrWillBeHidden() {
            r4 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r4.view
            int r0 = r0.getVisibility()
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L10
            int r0 = r4.animState
            if (r0 != r2) goto Lf
            r1 = r2
        Lf:
            return r1
        L10:
            int r0 = r4.animState
            r3 = 2
            if (r0 == r3) goto L16
            r1 = r2
        L16:
            return r1
    }

    boolean isOrWillBeShown() {
            r4 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r4.view
            int r0 = r0.getVisibility()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L11
            int r0 = r4.animState
            r3 = 2
            if (r0 != r3) goto L10
            r1 = r2
        L10:
            return r1
        L11:
            int r0 = r4.animState
            if (r0 == r2) goto L16
            r1 = r2
        L16:
            return r1
    }

    void jumpDrawableToCurrentState() {
            r1 = this;
            android.support.design.widget.StateListAnimator r0 = r1.stateListAnimator
            r0.jumpToCurrentState()
            return
    }

    android.support.design.widget.CircularBorderDrawable newCircularDrawable() {
            r1 = this;
            android.support.design.widget.CircularBorderDrawable r0 = new android.support.design.widget.CircularBorderDrawable
            r0.<init>()
            return r0
    }

    android.graphics.drawable.GradientDrawable newGradientDrawableForShape() {
            r1 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            return r0
    }

    void onAttachedToWindow() {
            r2 = this;
            boolean r0 = r2.requirePreDrawListener()
            if (r0 == 0) goto L14
            r2.ensurePreDrawListener()
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnPreDrawListener r1 = r2.preDrawListener
            r0.addOnPreDrawListener(r1)
        L14:
            return
    }

    void onCompatShadowChanged() {
            r0 = this;
            return
    }

    void onDetachedFromWindow() {
            r2 = this;
            android.view.ViewTreeObserver$OnPreDrawListener r0 = r2.preDrawListener
            if (r0 == 0) goto L12
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnPreDrawListener r1 = r2.preDrawListener
            r0.removeOnPreDrawListener(r1)
            r0 = 0
            r2.preDrawListener = r0
        L12:
            return
    }

    void onDrawableStateChanged(int[] r2) {
            r1 = this;
            android.support.design.widget.StateListAnimator r0 = r1.stateListAnimator
            r0.setState(r2)
            return
    }

    void onElevationsChanged(float r1, float r2, float r3) {
            r0 = this;
            android.support.design.widget.ShadowDrawableWrapper r2 = r0.shadowDrawable
            if (r2 == 0) goto Ld
            float r3 = r0.pressedTranslationZ
            float r3 = r3 + r1
            r2.setShadowSize(r1, r3)
            r0.updatePadding()
        Ld:
            return
    }

    void onPaddingUpdated(android.graphics.Rect r1) {
            r0 = this;
            return
    }

    void onPreDraw() {
            r2 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r2.view
            float r0 = r0.getRotation()
            float r1 = r2.rotation
            int r1 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r1 == 0) goto L11
            r2.rotation = r0
            r2.updateFromViewRotation()
        L11:
            return
    }

    public void removeOnHideAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.hideListeners
            if (r0 != 0) goto L5
            return
        L5:
            r0.remove(r2)
            return
    }

    void removeOnShowAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r0 = r1.showListeners
            if (r0 != 0) goto L5
            return
        L5:
            r0.remove(r2)
            return
    }

    boolean requirePreDrawListener() {
            r1 = this;
            r0 = 1
            return r0
    }

    void setBackgroundDrawable(android.content.res.ColorStateList r8, android.graphics.PorterDuff.Mode r9, android.content.res.ColorStateList r10, int r11) {
            r7 = this;
            android.graphics.drawable.GradientDrawable r0 = r7.createShapeDrawable()
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            r7.shapeDrawable = r0
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r8)
            if (r9 == 0) goto L14
            android.graphics.drawable.Drawable r0 = r7.shapeDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r9)
        L14:
            android.graphics.drawable.GradientDrawable r9 = r7.createShapeDrawable()
            android.graphics.drawable.Drawable r9 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r9)
            r7.rippleDrawable = r9
            android.content.res.ColorStateList r10 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r10)
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r9, r10)
            r9 = 1
            r10 = 2
            r0 = 0
            if (r11 <= 0) goto L3e
            android.support.design.widget.CircularBorderDrawable r8 = r7.createBorderDrawable(r11, r8)
            r7.borderDrawable = r8
            r11 = 3
            android.graphics.drawable.Drawable[] r11 = new android.graphics.drawable.Drawable[r11]
            r11[r0] = r8
            android.graphics.drawable.Drawable r8 = r7.shapeDrawable
            r11[r9] = r8
            android.graphics.drawable.Drawable r8 = r7.rippleDrawable
            r11[r10] = r8
            goto L4b
        L3e:
            r8 = 0
            r7.borderDrawable = r8
            android.graphics.drawable.Drawable[] r11 = new android.graphics.drawable.Drawable[r10]
            android.graphics.drawable.Drawable r8 = r7.shapeDrawable
            r11[r0] = r8
            android.graphics.drawable.Drawable r8 = r7.rippleDrawable
            r11[r9] = r8
        L4b:
            android.graphics.drawable.LayerDrawable r8 = new android.graphics.drawable.LayerDrawable
            r8.<init>(r11)
            r7.contentBackground = r8
            android.support.design.widget.ShadowDrawableWrapper r8 = new android.support.design.widget.ShadowDrawableWrapper
            android.support.design.widget.VisibilityAwareImageButton r9 = r7.view
            android.content.Context r2 = r9.getContext()
            android.graphics.drawable.Drawable r3 = r7.contentBackground
            android.support.design.widget.ShadowViewDelegate r9 = r7.shadowViewDelegate
            float r4 = r9.getRadius()
            float r5 = r7.elevation
            float r9 = r7.pressedTranslationZ
            float r6 = r5 + r9
            r1 = r8
            r1.<init>(r2, r3, r4, r5, r6)
            r7.shadowDrawable = r8
            r8.setAddPaddingForCorners(r0)
            android.support.design.widget.ShadowViewDelegate r8 = r7.shadowViewDelegate
            android.support.design.widget.ShadowDrawableWrapper r9 = r7.shadowDrawable
            r8.setBackgroundDrawable(r9)
            return
    }

    void setBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.shapeDrawable
            if (r0 == 0) goto L7
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        L7:
            android.support.design.widget.CircularBorderDrawable r0 = r1.borderDrawable
            if (r0 == 0) goto Le
            r0.setBorderTint(r2)
        Le:
            return
    }

    void setBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.shapeDrawable
            if (r0 == 0) goto L7
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r2)
        L7:
            return
    }

    final void setElevation(float r3) {
            r2 = this;
            float r0 = r2.elevation
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto Lf
            r2.elevation = r3
            float r0 = r2.hoveredFocusedTranslationZ
            float r1 = r2.pressedTranslationZ
            r2.onElevationsChanged(r3, r0, r1)
        Lf:
            return
    }

    final void setHideMotionSpec(android.support.design.animation.MotionSpec r1) {
            r0 = this;
            r0.hideMotionSpec = r1
            return
    }

    final void setHoveredFocusedTranslationZ(float r3) {
            r2 = this;
            float r0 = r2.hoveredFocusedTranslationZ
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto Lf
            r2.hoveredFocusedTranslationZ = r3
            float r0 = r2.elevation
            float r1 = r2.pressedTranslationZ
            r2.onElevationsChanged(r0, r3, r1)
        Lf:
            return
    }

    final void setImageMatrixScale(float r2) {
            r1 = this;
            r1.imageMatrixScale = r2
            android.graphics.Matrix r0 = r1.tmpMatrix
            r1.calculateImageMatrixFromScale(r2, r0)
            android.support.design.widget.VisibilityAwareImageButton r2 = r1.view
            r2.setImageMatrix(r0)
            return
    }

    final void setMaxImageSize(int r2) {
            r1 = this;
            int r0 = r1.maxImageSize
            if (r0 == r2) goto L9
            r1.maxImageSize = r2
            r1.updateImageMatrixScale()
        L9:
            return
    }

    final void setPressedTranslationZ(float r3) {
            r2 = this;
            float r0 = r2.pressedTranslationZ
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto Lf
            r2.pressedTranslationZ = r3
            float r0 = r2.elevation
            float r1 = r2.hoveredFocusedTranslationZ
            r2.onElevationsChanged(r0, r1, r3)
        Lf:
            return
    }

    void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.rippleDrawable
            if (r0 == 0) goto Lb
            android.content.res.ColorStateList r2 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r2)
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        Lb:
            return
    }

    final void setShowMotionSpec(android.support.design.animation.MotionSpec r1) {
            r0 = this;
            r0.showMotionSpec = r1
            return
    }

    void show(android.support.design.widget.FloatingActionButtonImpl.InternalVisibilityChangedListener r4, boolean r5) {
            r3 = this;
            boolean r0 = r3.isOrWillBeShown()
            if (r0 == 0) goto L7
            return
        L7:
            android.animation.Animator r0 = r3.currentAnimator
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            boolean r0 = r3.shouldAnimateVisibilityChange()
            r1 = 1065353216(0x3f800000, float:1.0)
            if (r0 == 0) goto L62
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L31
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r2 = 0
            r0.setAlpha(r2)
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r0.setScaleY(r2)
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r0.setScaleX(r2)
            r3.setImageMatrixScale(r2)
        L31:
            android.support.design.animation.MotionSpec r0 = r3.showMotionSpec
            if (r0 == 0) goto L36
            goto L3a
        L36:
            android.support.design.animation.MotionSpec r0 = r3.getDefaultShowMotionSpec()
        L3a:
            android.animation.AnimatorSet r0 = r3.createAnimator(r0, r1, r1, r1)
            android.support.design.widget.FloatingActionButtonImpl$2 r1 = new android.support.design.widget.FloatingActionButtonImpl$2
            r1.<init>(r3, r5, r4)
            r0.addListener(r1)
            java.util.ArrayList<android.animation.Animator$AnimatorListener> r4 = r3.showListeners
            if (r4 == 0) goto L5e
            java.util.Iterator r4 = r4.iterator()
        L4e:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L5e
            java.lang.Object r5 = r4.next()
            android.animation.Animator$AnimatorListener r5 = (android.animation.Animator.AnimatorListener) r5
            r0.addListener(r5)
            goto L4e
        L5e:
            r0.start()
            goto L7f
        L62:
            android.support.design.widget.VisibilityAwareImageButton r0 = r3.view
            r2 = 0
            r0.internalSetVisibility(r2, r5)
            android.support.design.widget.VisibilityAwareImageButton r5 = r3.view
            r5.setAlpha(r1)
            android.support.design.widget.VisibilityAwareImageButton r5 = r3.view
            r5.setScaleY(r1)
            android.support.design.widget.VisibilityAwareImageButton r5 = r3.view
            r5.setScaleX(r1)
            r3.setImageMatrixScale(r1)
            if (r4 == 0) goto L7f
            r4.onShown()
        L7f:
            return
    }

    final void updateImageMatrixScale() {
            r1 = this;
            float r0 = r1.imageMatrixScale
            r1.setImageMatrixScale(r0)
            return
    }

    final void updatePadding() {
            r5 = this;
            android.graphics.Rect r0 = r5.tmpRect
            r5.getPadding(r0)
            r5.onPaddingUpdated(r0)
            android.support.design.widget.ShadowViewDelegate r1 = r5.shadowViewDelegate
            int r2 = r0.left
            int r3 = r0.top
            int r4 = r0.right
            int r0 = r0.bottom
            r1.setShadowPadding(r2, r3, r4, r0)
            return
    }
}
