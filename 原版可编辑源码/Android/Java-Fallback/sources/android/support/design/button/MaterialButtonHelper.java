package android.support.design.button;

class MaterialButtonHelper {
    private static final float CORNER_RADIUS_ADJUSTMENT = 1.0E-5f;
    private static final int DEFAULT_BACKGROUND_COLOR = -1;
    private static final boolean IS_LOLLIPOP = false;
    private android.graphics.drawable.GradientDrawable backgroundDrawableLollipop;
    private boolean backgroundOverwritten;
    private android.content.res.ColorStateList backgroundTint;
    private android.graphics.PorterDuff.Mode backgroundTintMode;
    private final android.graphics.Rect bounds;
    private final android.graphics.Paint buttonStrokePaint;
    private android.graphics.drawable.GradientDrawable colorableBackgroundDrawableCompat;
    private int cornerRadius;
    private int insetBottom;
    private int insetLeft;
    private int insetRight;
    private int insetTop;
    private android.graphics.drawable.GradientDrawable maskDrawableLollipop;
    private final android.support.design.button.MaterialButton materialButton;
    private final android.graphics.RectF rectF;
    private android.content.res.ColorStateList rippleColor;
    private android.graphics.drawable.GradientDrawable rippleDrawableCompat;
    private android.content.res.ColorStateList strokeColor;
    private android.graphics.drawable.GradientDrawable strokeDrawableLollipop;
    private int strokeWidth;
    private android.graphics.drawable.Drawable tintableBackgroundDrawableCompat;
    private android.graphics.drawable.Drawable tintableRippleDrawableCompat;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP = r0
            return
    }

    public MaterialButtonHelper(android.support.design.button.MaterialButton r3) {
            r2 = this;
            r2.<init>()
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 1
            r0.<init>(r1)
            r2.buttonStrokePaint = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r2.bounds = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.rectF = r0
            r0 = 0
            r2.backgroundOverwritten = r0
            r2.materialButton = r3
            return
    }

    private android.graphics.drawable.Drawable createBackgroundCompat() {
            r4 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r4.colorableBackgroundDrawableCompat = r0
            int r1 = r4.cornerRadius
            float r1 = (float) r1
            r2 = 925353388(0x3727c5ac, float:1.0E-5)
            float r1 = r1 + r2
            r0.setCornerRadius(r1)
            android.graphics.drawable.GradientDrawable r0 = r4.colorableBackgroundDrawableCompat
            r1 = -1
            r0.setColor(r1)
            android.graphics.drawable.GradientDrawable r0 = r4.colorableBackgroundDrawableCompat
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            r4.tintableBackgroundDrawableCompat = r0
            android.content.res.ColorStateList r3 = r4.backgroundTint
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r3)
            android.graphics.PorterDuff$Mode r0 = r4.backgroundTintMode
            if (r0 == 0) goto L2d
            android.graphics.drawable.Drawable r3 = r4.tintableBackgroundDrawableCompat
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r3, r0)
        L2d:
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r4.rippleDrawableCompat = r0
            int r3 = r4.cornerRadius
            float r3 = (float) r3
            float r3 = r3 + r2
            r0.setCornerRadius(r3)
            android.graphics.drawable.GradientDrawable r0 = r4.rippleDrawableCompat
            r0.setColor(r1)
            android.graphics.drawable.GradientDrawable r0 = r4.rippleDrawableCompat
            android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
            r4.tintableRippleDrawableCompat = r0
            android.content.res.ColorStateList r1 = r4.rippleColor
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
            android.graphics.drawable.LayerDrawable r0 = new android.graphics.drawable.LayerDrawable
            r1 = 2
            android.graphics.drawable.Drawable[] r1 = new android.graphics.drawable.Drawable[r1]
            r2 = 0
            android.graphics.drawable.Drawable r3 = r4.tintableBackgroundDrawableCompat
            r1[r2] = r3
            r2 = 1
            android.graphics.drawable.Drawable r3 = r4.tintableRippleDrawableCompat
            r1[r2] = r3
            r0.<init>(r1)
            android.graphics.drawable.InsetDrawable r0 = r4.wrapDrawableWithInset(r0)
            return r0
    }

    private android.graphics.drawable.Drawable createBackgroundLollipop() {
            r6 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r6.backgroundDrawableLollipop = r0
            int r1 = r6.cornerRadius
            float r1 = (float) r1
            r2 = 925353388(0x3727c5ac, float:1.0E-5)
            float r1 = r1 + r2
            r0.setCornerRadius(r1)
            android.graphics.drawable.GradientDrawable r0 = r6.backgroundDrawableLollipop
            r1 = -1
            r0.setColor(r1)
            r6.updateTintAndTintModeLollipop()
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r6.strokeDrawableLollipop = r0
            int r3 = r6.cornerRadius
            float r3 = (float) r3
            float r3 = r3 + r2
            r0.setCornerRadius(r3)
            android.graphics.drawable.GradientDrawable r0 = r6.strokeDrawableLollipop
            r3 = 0
            r0.setColor(r3)
            android.graphics.drawable.GradientDrawable r0 = r6.strokeDrawableLollipop
            int r4 = r6.strokeWidth
            android.content.res.ColorStateList r5 = r6.strokeColor
            r0.setStroke(r4, r5)
            android.graphics.drawable.LayerDrawable r0 = new android.graphics.drawable.LayerDrawable
            r4 = 2
            android.graphics.drawable.Drawable[] r4 = new android.graphics.drawable.Drawable[r4]
            android.graphics.drawable.GradientDrawable r5 = r6.backgroundDrawableLollipop
            r4[r3] = r5
            android.graphics.drawable.GradientDrawable r3 = r6.strokeDrawableLollipop
            r5 = 1
            r4[r5] = r3
            r0.<init>(r4)
            android.graphics.drawable.InsetDrawable r0 = r6.wrapDrawableWithInset(r0)
            android.graphics.drawable.GradientDrawable r3 = new android.graphics.drawable.GradientDrawable
            r3.<init>()
            r6.maskDrawableLollipop = r3
            int r4 = r6.cornerRadius
            float r4 = (float) r4
            float r4 = r4 + r2
            r3.setCornerRadius(r4)
            android.graphics.drawable.GradientDrawable r2 = r6.maskDrawableLollipop
            r2.setColor(r1)
            android.support.design.button.MaterialButtonBackgroundDrawable r1 = new android.support.design.button.MaterialButtonBackgroundDrawable
            android.content.res.ColorStateList r2 = r6.rippleColor
            android.content.res.ColorStateList r2 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r2)
            android.graphics.drawable.GradientDrawable r3 = r6.maskDrawableLollipop
            r1.<init>(r2, r0, r3)
            return r1
    }

    private android.graphics.drawable.GradientDrawable unwrapBackgroundDrawable() {
            r2 = this;
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto L28
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L28
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            android.graphics.drawable.RippleDrawable r0 = (android.graphics.drawable.RippleDrawable) r0
            r1 = 0
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.drawable.InsetDrawable r0 = (android.graphics.drawable.InsetDrawable) r0
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            android.graphics.drawable.LayerDrawable r0 = (android.graphics.drawable.LayerDrawable) r0
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.drawable.GradientDrawable r0 = (android.graphics.drawable.GradientDrawable) r0
            return r0
        L28:
            r0 = 0
            return r0
    }

    private android.graphics.drawable.GradientDrawable unwrapStrokeDrawable() {
            r2 = this;
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto L29
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            if (r0 == 0) goto L29
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            android.graphics.drawable.RippleDrawable r0 = (android.graphics.drawable.RippleDrawable) r0
            r1 = 0
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.drawable.InsetDrawable r0 = (android.graphics.drawable.InsetDrawable) r0
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            android.graphics.drawable.LayerDrawable r0 = (android.graphics.drawable.LayerDrawable) r0
            r1 = 1
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.drawable.GradientDrawable r0 = (android.graphics.drawable.GradientDrawable) r0
            return r0
        L29:
            r0 = 0
            return r0
    }

    private void updateStroke() {
            r2 = this;
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto L12
            android.graphics.drawable.GradientDrawable r0 = r2.strokeDrawableLollipop
            if (r0 == 0) goto L12
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.drawable.Drawable r1 = r2.createBackgroundLollipop()
            r0.setInternalBackground(r1)
            goto L1b
        L12:
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 != 0) goto L1b
            android.support.design.button.MaterialButton r0 = r2.materialButton
            r0.invalidate()
        L1b:
            return
    }

    private void updateTintAndTintModeLollipop() {
            r2 = this;
            android.graphics.drawable.GradientDrawable r0 = r2.backgroundDrawableLollipop
            if (r0 == 0) goto L12
            android.content.res.ColorStateList r1 = r2.backgroundTint
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
            android.graphics.PorterDuff$Mode r0 = r2.backgroundTintMode
            if (r0 == 0) goto L12
            android.graphics.drawable.GradientDrawable r1 = r2.backgroundDrawableLollipop
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r1, r0)
        L12:
            return
    }

    private android.graphics.drawable.InsetDrawable wrapDrawableWithInset(android.graphics.drawable.Drawable r8) {
            r7 = this;
            android.graphics.drawable.InsetDrawable r6 = new android.graphics.drawable.InsetDrawable
            int r2 = r7.insetLeft
            int r3 = r7.insetTop
            int r4 = r7.insetRight
            int r5 = r7.insetBottom
            r0 = r6
            r1 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    void drawStroke(android.graphics.Canvas r8) {
            r7 = this;
            if (r8 == 0) goto L67
            android.content.res.ColorStateList r0 = r7.strokeColor
            if (r0 == 0) goto L67
            int r0 = r7.strokeWidth
            if (r0 <= 0) goto L67
            android.graphics.Rect r0 = r7.bounds
            android.support.design.button.MaterialButton r1 = r7.materialButton
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            android.graphics.Rect r1 = r1.getBounds()
            r0.set(r1)
            android.graphics.RectF r0 = r7.rectF
            android.graphics.Rect r1 = r7.bounds
            int r1 = r1.left
            float r1 = (float) r1
            int r2 = r7.strokeWidth
            float r2 = (float) r2
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            float r1 = r1 + r2
            int r2 = r7.insetLeft
            float r2 = (float) r2
            float r1 = r1 + r2
            android.graphics.Rect r2 = r7.bounds
            int r2 = r2.top
            float r2 = (float) r2
            int r4 = r7.strokeWidth
            float r4 = (float) r4
            float r4 = r4 / r3
            float r2 = r2 + r4
            int r4 = r7.insetTop
            float r4 = (float) r4
            float r2 = r2 + r4
            android.graphics.Rect r4 = r7.bounds
            int r4 = r4.right
            float r4 = (float) r4
            int r5 = r7.strokeWidth
            float r5 = (float) r5
            float r5 = r5 / r3
            float r4 = r4 - r5
            int r5 = r7.insetRight
            float r5 = (float) r5
            float r4 = r4 - r5
            android.graphics.Rect r5 = r7.bounds
            int r5 = r5.bottom
            float r5 = (float) r5
            int r6 = r7.strokeWidth
            float r6 = (float) r6
            float r6 = r6 / r3
            float r5 = r5 - r6
            int r6 = r7.insetBottom
            float r6 = (float) r6
            float r5 = r5 - r6
            r0.set(r1, r2, r4, r5)
            int r0 = r7.cornerRadius
            float r0 = (float) r0
            int r1 = r7.strokeWidth
            float r1 = (float) r1
            float r1 = r1 / r3
            float r0 = r0 - r1
            android.graphics.RectF r1 = r7.rectF
            android.graphics.Paint r2 = r7.buttonStrokePaint
            r8.drawRoundRect(r1, r0, r0, r2)
        L67:
            return
    }

    int getCornerRadius() {
            r1 = this;
            int r0 = r1.cornerRadius
            return r0
    }

    android.content.res.ColorStateList getRippleColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            return r0
    }

    android.content.res.ColorStateList getStrokeColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.strokeColor
            return r0
    }

    int getStrokeWidth() {
            r1 = this;
            int r0 = r1.strokeWidth
            return r0
    }

    android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.backgroundTint
            return r0
    }

    android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.backgroundTintMode
            return r0
    }

    boolean isBackgroundOverwritten() {
            r1 = this;
            boolean r0 = r1.backgroundOverwritten
            return r0
    }

    public void loadFromAttributes(android.content.res.TypedArray r6) {
            r5 = this;
            int r0 = android.support.design.R.styleable.MaterialButton_android_insetLeft
            r1 = 0
            int r0 = r6.getDimensionPixelOffset(r0, r1)
            r5.insetLeft = r0
            int r0 = android.support.design.R.styleable.MaterialButton_android_insetRight
            int r0 = r6.getDimensionPixelOffset(r0, r1)
            r5.insetRight = r0
            int r0 = android.support.design.R.styleable.MaterialButton_android_insetTop
            int r0 = r6.getDimensionPixelOffset(r0, r1)
            r5.insetTop = r0
            int r0 = android.support.design.R.styleable.MaterialButton_android_insetBottom
            int r0 = r6.getDimensionPixelOffset(r0, r1)
            r5.insetBottom = r0
            int r0 = android.support.design.R.styleable.MaterialButton_cornerRadius
            int r0 = r6.getDimensionPixelSize(r0, r1)
            r5.cornerRadius = r0
            int r0 = android.support.design.R.styleable.MaterialButton_strokeWidth
            int r0 = r6.getDimensionPixelSize(r0, r1)
            r5.strokeWidth = r0
            int r0 = android.support.design.R.styleable.MaterialButton_backgroundTintMode
            r2 = -1
            int r0 = r6.getInt(r0, r2)
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
            android.graphics.PorterDuff$Mode r0 = android.support.design.internal.ViewUtils.parseTintMode(r0, r2)
            r5.backgroundTintMode = r0
            android.support.design.button.MaterialButton r0 = r5.materialButton
            android.content.Context r0 = r0.getContext()
            int r2 = android.support.design.R.styleable.MaterialButton_backgroundTint
            android.content.res.ColorStateList r0 = android.support.design.resources.MaterialResources.getColorStateList(r0, r6, r2)
            r5.backgroundTint = r0
            android.support.design.button.MaterialButton r0 = r5.materialButton
            android.content.Context r0 = r0.getContext()
            int r2 = android.support.design.R.styleable.MaterialButton_strokeColor
            android.content.res.ColorStateList r0 = android.support.design.resources.MaterialResources.getColorStateList(r0, r6, r2)
            r5.strokeColor = r0
            android.support.design.button.MaterialButton r0 = r5.materialButton
            android.content.Context r0 = r0.getContext()
            int r2 = android.support.design.R.styleable.MaterialButton_rippleColor
            android.content.res.ColorStateList r6 = android.support.design.resources.MaterialResources.getColorStateList(r0, r6, r2)
            r5.rippleColor = r6
            android.graphics.Paint r6 = r5.buttonStrokePaint
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r6.setStyle(r0)
            android.graphics.Paint r6 = r5.buttonStrokePaint
            int r0 = r5.strokeWidth
            float r0 = (float) r0
            r6.setStrokeWidth(r0)
            android.graphics.Paint r6 = r5.buttonStrokePaint
            android.content.res.ColorStateList r0 = r5.strokeColor
            if (r0 == 0) goto L89
            android.support.design.button.MaterialButton r2 = r5.materialButton
            int[] r2 = r2.getDrawableState()
            int r1 = r0.getColorForState(r2, r1)
        L89:
            r6.setColor(r1)
            android.support.design.button.MaterialButton r6 = r5.materialButton
            int r6 = android.support.v4.view.ViewCompat.getPaddingStart(r6)
            android.support.design.button.MaterialButton r0 = r5.materialButton
            int r0 = r0.getPaddingTop()
            android.support.design.button.MaterialButton r1 = r5.materialButton
            int r1 = android.support.v4.view.ViewCompat.getPaddingEnd(r1)
            android.support.design.button.MaterialButton r2 = r5.materialButton
            int r2 = r2.getPaddingBottom()
            android.support.design.button.MaterialButton r3 = r5.materialButton
            boolean r4 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r4 == 0) goto Laf
            android.graphics.drawable.Drawable r4 = r5.createBackgroundLollipop()
            goto Lb3
        Laf:
            android.graphics.drawable.Drawable r4 = r5.createBackgroundCompat()
        Lb3:
            r3.setInternalBackground(r4)
            android.support.design.button.MaterialButton r3 = r5.materialButton
            int r4 = r5.insetLeft
            int r6 = r6 + r4
            int r4 = r5.insetTop
            int r0 = r0 + r4
            int r4 = r5.insetRight
            int r1 = r1 + r4
            int r4 = r5.insetBottom
            int r2 = r2 + r4
            android.support.v4.view.ViewCompat.setPaddingRelative(r3, r6, r0, r1, r2)
            return
    }

    void setBackgroundColor(int r2) {
            r1 = this;
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto Lc
            android.graphics.drawable.GradientDrawable r0 = r1.backgroundDrawableLollipop
            if (r0 == 0) goto Lc
            r0.setColor(r2)
            goto L17
        Lc:
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 != 0) goto L17
            android.graphics.drawable.GradientDrawable r0 = r1.colorableBackgroundDrawableCompat
            if (r0 == 0) goto L17
            r0.setColor(r2)
        L17:
            return
    }

    void setBackgroundOverwritten() {
            r2 = this;
            r0 = 1
            r2.backgroundOverwritten = r0
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.content.res.ColorStateList r1 = r2.backgroundTint
            r0.setSupportBackgroundTintList(r1)
            android.support.design.button.MaterialButton r0 = r2.materialButton
            android.graphics.PorterDuff$Mode r1 = r2.backgroundTintMode
            r0.setSupportBackgroundTintMode(r1)
            return
    }

    void setCornerRadius(int r4) {
            r3 = this;
            int r0 = r3.cornerRadius
            if (r0 == r4) goto L5c
            r3.cornerRadius = r4
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            r1 = 925353388(0x3727c5ac, float:1.0E-5)
            if (r0 == 0) goto L41
            android.graphics.drawable.GradientDrawable r0 = r3.backgroundDrawableLollipop
            if (r0 == 0) goto L41
            android.graphics.drawable.GradientDrawable r0 = r3.strokeDrawableLollipop
            if (r0 == 0) goto L41
            android.graphics.drawable.GradientDrawable r0 = r3.maskDrawableLollipop
            if (r0 == 0) goto L41
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r0 != r2) goto L2f
            android.graphics.drawable.GradientDrawable r0 = r3.unwrapBackgroundDrawable()
            float r2 = (float) r4
            float r2 = r2 + r1
            r0.setCornerRadius(r2)
            android.graphics.drawable.GradientDrawable r0 = r3.unwrapStrokeDrawable()
            r0.setCornerRadius(r2)
        L2f:
            android.graphics.drawable.GradientDrawable r0 = r3.backgroundDrawableLollipop
            float r4 = (float) r4
            float r4 = r4 + r1
            r0.setCornerRadius(r4)
            android.graphics.drawable.GradientDrawable r0 = r3.strokeDrawableLollipop
            r0.setCornerRadius(r4)
            android.graphics.drawable.GradientDrawable r0 = r3.maskDrawableLollipop
            r0.setCornerRadius(r4)
            goto L5c
        L41:
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 != 0) goto L5c
            android.graphics.drawable.GradientDrawable r0 = r3.colorableBackgroundDrawableCompat
            if (r0 == 0) goto L5c
            android.graphics.drawable.GradientDrawable r2 = r3.rippleDrawableCompat
            if (r2 == 0) goto L5c
            float r4 = (float) r4
            float r4 = r4 + r1
            r0.setCornerRadius(r4)
            android.graphics.drawable.GradientDrawable r0 = r3.rippleDrawableCompat
            r0.setCornerRadius(r4)
            android.support.design.button.MaterialButton r4 = r3.materialButton
            r4.invalidate()
        L5c:
            return
    }

    void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            if (r0 == r2) goto L2b
            r1.rippleColor = r2
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto L20
            android.support.design.button.MaterialButton r0 = r1.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            boolean r0 = r0 instanceof android.graphics.drawable.RippleDrawable
            if (r0 == 0) goto L20
            android.support.design.button.MaterialButton r0 = r1.materialButton
            android.graphics.drawable.Drawable r0 = r0.getBackground()
            android.graphics.drawable.RippleDrawable r0 = (android.graphics.drawable.RippleDrawable) r0
            r0.setColor(r2)
            goto L2b
        L20:
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 != 0) goto L2b
            android.graphics.drawable.Drawable r0 = r1.tintableRippleDrawableCompat
            if (r0 == 0) goto L2b
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        L2b:
            return
    }

    void setStrokeColor(android.content.res.ColorStateList r4) {
            r3 = this;
            android.content.res.ColorStateList r0 = r3.strokeColor
            if (r0 == r4) goto L1b
            r3.strokeColor = r4
            android.graphics.Paint r0 = r3.buttonStrokePaint
            r1 = 0
            if (r4 == 0) goto L15
            android.support.design.button.MaterialButton r2 = r3.materialButton
            int[] r2 = r2.getDrawableState()
            int r1 = r4.getColorForState(r2, r1)
        L15:
            r0.setColor(r1)
            r3.updateStroke()
        L1b:
            return
    }

    void setStrokeWidth(int r2) {
            r1 = this;
            int r0 = r1.strokeWidth
            if (r0 == r2) goto Lf
            r1.strokeWidth = r2
            android.graphics.Paint r0 = r1.buttonStrokePaint
            float r2 = (float) r2
            r0.setStrokeWidth(r2)
            r1.updateStroke()
        Lf:
            return
    }

    void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.backgroundTint
            if (r0 == r2) goto L15
            r1.backgroundTint = r2
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto Le
            r1.updateTintAndTintModeLollipop()
            goto L15
        Le:
            android.graphics.drawable.Drawable r0 = r1.tintableBackgroundDrawableCompat
            if (r0 == 0) goto L15
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
        L15:
            return
    }

    void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.backgroundTintMode
            if (r0 == r2) goto L17
            r1.backgroundTintMode = r2
            boolean r0 = android.support.design.button.MaterialButtonHelper.IS_LOLLIPOP
            if (r0 == 0) goto Le
            r1.updateTintAndTintModeLollipop()
            goto L17
        Le:
            android.graphics.drawable.Drawable r0 = r1.tintableBackgroundDrawableCompat
            if (r0 == 0) goto L17
            if (r2 == 0) goto L17
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r2)
        L17:
            return
    }

    void updateMaskBounds(int r5, int r6) {
            r4 = this;
            android.graphics.drawable.GradientDrawable r0 = r4.maskDrawableLollipop
            if (r0 == 0) goto L11
            int r1 = r4.insetLeft
            int r2 = r4.insetTop
            int r3 = r4.insetRight
            int r6 = r6 - r3
            int r3 = r4.insetBottom
            int r5 = r5 - r3
            r0.setBounds(r1, r2, r6, r5)
        L11:
            return
    }
}
