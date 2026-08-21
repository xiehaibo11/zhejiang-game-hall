package android.support.design.widget;

class FloatingActionButtonImplLollipop extends android.support.design.widget.FloatingActionButtonImpl {
    private android.graphics.drawable.InsetDrawable insetDrawable;

    static class AlwaysStatefulGradientDrawable extends android.graphics.drawable.GradientDrawable {
        AlwaysStatefulGradientDrawable() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean isStateful() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    FloatingActionButtonImplLollipop(android.support.design.widget.VisibilityAwareImageButton r1, android.support.design.widget.ShadowViewDelegate r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private android.animation.Animator createElevationAnimator(float r8, float r9) {
            r7 = this;
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.support.design.widget.VisibilityAwareImageButton r1 = r7.view
            r2 = 1
            float[] r3 = new float[r2]
            r4 = 0
            r3[r4] = r8
            java.lang.String r8 = "elevation"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r1, r8, r3)
            r5 = 0
            android.animation.ObjectAnimator r8 = r8.setDuration(r5)
            android.animation.AnimatorSet$Builder r8 = r0.play(r8)
            android.support.design.widget.VisibilityAwareImageButton r1 = r7.view
            android.util.Property r3 = android.view.View.TRANSLATION_Z
            float[] r2 = new float[r2]
            r2[r4] = r9
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r1, r3, r2)
            r1 = 100
            android.animation.ObjectAnimator r9 = r9.setDuration(r1)
            r8.with(r9)
            android.animation.TimeInterpolator r8 = android.support.design.widget.FloatingActionButtonImplLollipop.ELEVATION_ANIM_INTERPOLATOR
            r0.setInterpolator(r8)
            return r0
    }

    @Override
    public float getElevation() {
            r1 = this;
            android.support.design.widget.VisibilityAwareImageButton r0 = r1.view
            float r0 = r0.getElevation()
            return r0
    }

    @Override
    void getPadding(android.graphics.Rect r6) {
            r5 = this;
            android.support.design.widget.ShadowViewDelegate r0 = r5.shadowViewDelegate
            boolean r0 = r0.isCompatPaddingEnabled()
            r1 = 0
            if (r0 == 0) goto L2e
            android.support.design.widget.ShadowViewDelegate r0 = r5.shadowViewDelegate
            float r0 = r0.getRadius()
            float r2 = r5.getElevation()
            float r3 = r5.pressedTranslationZ
            float r2 = r2 + r3
            float r3 = android.support.design.widget.ShadowDrawableWrapper.calculateHorizontalPadding(r2, r0, r1)
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            float r0 = android.support.design.widget.ShadowDrawableWrapper.calculateVerticalPadding(r2, r0, r1)
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            r6.set(r3, r0, r3, r0)
            goto L31
        L2e:
            r6.set(r1, r1, r1, r1)
        L31:
            return
    }

    @Override
    void jumpDrawableToCurrentState() {
            r0 = this;
            return
    }

    @Override
    android.support.design.widget.CircularBorderDrawable newCircularDrawable() {
            r1 = this;
            android.support.design.widget.CircularBorderDrawableLollipop r0 = new android.support.design.widget.CircularBorderDrawableLollipop
            r0.<init>()
            return r0
    }

    @Override
    android.graphics.drawable.GradientDrawable newGradientDrawableForShape() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImplLollipop$AlwaysStatefulGradientDrawable r0 = new android.support.design.widget.FloatingActionButtonImplLollipop$AlwaysStatefulGradientDrawable
            r0.<init>()
            return r0
    }

    @Override
    void onCompatShadowChanged() {
            r0 = this;
            r0.updatePadding()
            return
    }

    @Override
    void onDrawableStateChanged(int[] r3) {
            r2 = this;
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r3 != r0) goto L4f
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            boolean r3 = r3.isEnabled()
            r0 = 0
            if (r3 == 0) goto L45
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            float r1 = r2.elevation
            r3.setElevation(r1)
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            boolean r3 = r3.isPressed()
            if (r3 == 0) goto L26
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            float r0 = r2.pressedTranslationZ
            r3.setTranslationZ(r0)
            goto L4f
        L26:
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            boolean r3 = r3.isFocused()
            if (r3 != 0) goto L3d
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            boolean r3 = r3.isHovered()
            if (r3 == 0) goto L37
            goto L3d
        L37:
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            r3.setTranslationZ(r0)
            goto L4f
        L3d:
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            float r0 = r2.hoveredFocusedTranslationZ
            r3.setTranslationZ(r0)
            goto L4f
        L45:
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            r3.setElevation(r0)
            android.support.design.widget.VisibilityAwareImageButton r3 = r2.view
            r3.setTranslationZ(r0)
        L4f:
            return
    }

    @Override
    void onElevationsChanged(float r9, float r10, float r11) {
            r8 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 != r1) goto Ld
            android.support.design.widget.VisibilityAwareImageButton r9 = r8.view
            r9.refreshDrawableState()
            goto Lb5
        Ld:
            android.animation.StateListAnimator r0 = new android.animation.StateListAnimator
            r0.<init>()
            int[] r1 = android.support.design.widget.FloatingActionButtonImplLollipop.PRESSED_ENABLED_STATE_SET
            android.animation.Animator r11 = r8.createElevationAnimator(r9, r11)
            r0.addState(r1, r11)
            int[] r11 = android.support.design.widget.FloatingActionButtonImplLollipop.HOVERED_FOCUSED_ENABLED_STATE_SET
            android.animation.Animator r1 = r8.createElevationAnimator(r9, r10)
            r0.addState(r11, r1)
            int[] r11 = android.support.design.widget.FloatingActionButtonImplLollipop.FOCUSED_ENABLED_STATE_SET
            android.animation.Animator r1 = r8.createElevationAnimator(r9, r10)
            r0.addState(r11, r1)
            int[] r11 = android.support.design.widget.FloatingActionButtonImplLollipop.HOVERED_ENABLED_STATE_SET
            android.animation.Animator r10 = r8.createElevationAnimator(r9, r10)
            r0.addState(r11, r10)
            android.animation.AnimatorSet r10 = new android.animation.AnimatorSet
            r10.<init>()
            java.util.ArrayList r11 = new java.util.ArrayList
            r11.<init>()
            android.support.design.widget.VisibilityAwareImageButton r1 = r8.view
            r2 = 1
            float[] r3 = new float[r2]
            r4 = 0
            r3[r4] = r9
            java.lang.String r9 = "elevation"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r1, r9, r3)
            r5 = 0
            android.animation.ObjectAnimator r9 = r9.setDuration(r5)
            r11.add(r9)
            int r9 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            r5 = 100
            if (r9 < r1) goto L7e
            int r9 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r9 > r1) goto L7e
            android.support.design.widget.VisibilityAwareImageButton r9 = r8.view
            android.util.Property r1 = android.view.View.TRANSLATION_Z
            float[] r3 = new float[r2]
            android.support.design.widget.VisibilityAwareImageButton r7 = r8.view
            float r7 = r7.getTranslationZ()
            r3[r4] = r7
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r1, r3)
            android.animation.ObjectAnimator r9 = r9.setDuration(r5)
            r11.add(r9)
        L7e:
            android.support.design.widget.VisibilityAwareImageButton r9 = r8.view
            android.util.Property r1 = android.view.View.TRANSLATION_Z
            float[] r2 = new float[r2]
            r3 = 0
            r2[r4] = r3
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r9, r1, r2)
            android.animation.ObjectAnimator r9 = r9.setDuration(r5)
            r11.add(r9)
            android.animation.Animator[] r9 = new android.animation.Animator[r4]
            java.lang.Object[] r9 = r11.toArray(r9)
            android.animation.Animator[] r9 = (android.animation.Animator[]) r9
            r10.playSequentially(r9)
            android.animation.TimeInterpolator r9 = android.support.design.widget.FloatingActionButtonImplLollipop.ELEVATION_ANIM_INTERPOLATOR
            r10.setInterpolator(r9)
            int[] r9 = android.support.design.widget.FloatingActionButtonImplLollipop.ENABLED_STATE_SET
            r0.addState(r9, r10)
            int[] r9 = android.support.design.widget.FloatingActionButtonImplLollipop.EMPTY_STATE_SET
            android.animation.Animator r10 = r8.createElevationAnimator(r3, r3)
            r0.addState(r9, r10)
            android.support.design.widget.VisibilityAwareImageButton r9 = r8.view
            r9.setStateListAnimator(r0)
        Lb5:
            android.support.design.widget.ShadowViewDelegate r9 = r8.shadowViewDelegate
            boolean r9 = r9.isCompatPaddingEnabled()
            if (r9 == 0) goto Lc0
            r8.updatePadding()
        Lc0:
            return
    }

    @Override
    void onPaddingUpdated(android.graphics.Rect r8) {
            r7 = this;
            android.support.design.widget.ShadowViewDelegate r0 = r7.shadowViewDelegate
            boolean r0 = r0.isCompatPaddingEnabled()
            if (r0 == 0) goto L22
            android.graphics.drawable.InsetDrawable r0 = new android.graphics.drawable.InsetDrawable
            android.graphics.drawable.Drawable r2 = r7.rippleDrawable
            int r3 = r8.left
            int r4 = r8.top
            int r5 = r8.right
            int r6 = r8.bottom
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r7.insetDrawable = r0
            android.support.design.widget.ShadowViewDelegate r8 = r7.shadowViewDelegate
            android.graphics.drawable.InsetDrawable r0 = r7.insetDrawable
            r8.setBackgroundDrawable(r0)
            goto L29
        L22:
            android.support.design.widget.ShadowViewDelegate r8 = r7.shadowViewDelegate
            android.graphics.drawable.Drawable r0 = r7.rippleDrawable
            r8.setBackgroundDrawable(r0)
        L29:
            return
    }

    @Override
    boolean requirePreDrawListener() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    void setBackgroundDrawable(android.content.res.ColorStateList r3, android.graphics.PorterDuff.Mode r4, android.content.res.ColorStateList r5, int r6) {
            r2 = this;
            android.graphics.drawable.GradientDrawable r0 = r2.createShapeDrawable()
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            r2.shapeDrawable = r0
            android.graphics.drawable.Drawable r0 = r2.shapeDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r3)
            if (r4 == 0) goto L16
            android.graphics.drawable.Drawable r0 = r2.shapeDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r4)
        L16:
            r4 = 0
            if (r6 <= 0) goto L32
            android.support.design.widget.CircularBorderDrawable r3 = r2.createBorderDrawable(r6, r3)
            r2.borderDrawable = r3
            android.graphics.drawable.LayerDrawable r3 = new android.graphics.drawable.LayerDrawable
            r6 = 2
            android.graphics.drawable.Drawable[] r6 = new android.graphics.drawable.Drawable[r6]
            r0 = 0
            android.support.design.widget.CircularBorderDrawable r1 = r2.borderDrawable
            r6[r0] = r1
            r0 = 1
            android.graphics.drawable.Drawable r1 = r2.shapeDrawable
            r6[r0] = r1
            r3.<init>(r6)
            goto L36
        L32:
            r2.borderDrawable = r4
            android.graphics.drawable.Drawable r3 = r2.shapeDrawable
        L36:
            android.graphics.drawable.RippleDrawable r6 = new android.graphics.drawable.RippleDrawable
            android.content.res.ColorStateList r5 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r5)
            r6.<init>(r5, r3, r4)
            r2.rippleDrawable = r6
            android.graphics.drawable.Drawable r3 = r2.rippleDrawable
            r2.contentBackground = r3
            android.support.design.widget.ShadowViewDelegate r3 = r2.shadowViewDelegate
            android.graphics.drawable.Drawable r4 = r2.rippleDrawable
            r3.setBackgroundDrawable(r4)
            return
    }

    @Override
    void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.rippleDrawable
            boolean r0 = r0 instanceof android.graphics.drawable.RippleDrawable
            if (r0 == 0) goto L12
            android.graphics.drawable.Drawable r0 = r1.rippleDrawable
            android.graphics.drawable.RippleDrawable r0 = (android.graphics.drawable.RippleDrawable) r0
            android.content.res.ColorStateList r2 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r2)
            r0.setColor(r2)
            goto L15
        L12:
            super.setRippleColor(r2)
        L15:
            return
    }
}
