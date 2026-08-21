package android.support.design.button;

public class MaterialButton extends android.support.v7.widget.AppCompatButton {
    public static final int ICON_GRAVITY_START = 1;
    public static final int ICON_GRAVITY_TEXT_START = 2;
    private static final java.lang.String LOG_TAG = "MaterialButton";
    private android.graphics.drawable.Drawable icon;
    private int iconGravity;
    private int iconLeft;
    private int iconPadding;
    private int iconSize;
    private android.content.res.ColorStateList iconTint;
    private android.graphics.PorterDuff.Mode iconTintMode;
    private final android.support.design.button.MaterialButtonHelper materialButtonHelper;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface IconGravity {
    }

    public MaterialButton(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MaterialButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.materialButtonStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public MaterialButton(android.content.Context r8, android.util.AttributeSet r9, int r10) {
            r7 = this;
            r7.<init>(r8, r9, r10)
            int[] r2 = android.support.design.R.styleable.MaterialButton
            int r4 = android.support.design.R.style.Widget_MaterialComponents_Button
            r6 = 0
            int[] r5 = new int[r6]
            r0 = r8
            r1 = r9
            r3 = r10
            android.content.res.TypedArray r8 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r0, r1, r2, r3, r4, r5)
            int r9 = android.support.design.R.styleable.MaterialButton_iconPadding
            int r9 = r8.getDimensionPixelSize(r9, r6)
            r7.iconPadding = r9
            int r9 = android.support.design.R.styleable.MaterialButton_iconTintMode
            r10 = -1
            int r9 = r8.getInt(r9, r10)
            android.graphics.PorterDuff$Mode r10 = android.graphics.PorterDuff.Mode.SRC_IN
            android.graphics.PorterDuff$Mode r9 = android.support.design.internal.ViewUtils.parseTintMode(r9, r10)
            r7.iconTintMode = r9
            android.content.Context r9 = r7.getContext()
            int r10 = android.support.design.R.styleable.MaterialButton_iconTint
            android.content.res.ColorStateList r9 = android.support.design.resources.MaterialResources.getColorStateList(r9, r8, r10)
            r7.iconTint = r9
            android.content.Context r9 = r7.getContext()
            int r10 = android.support.design.R.styleable.MaterialButton_icon
            android.graphics.drawable.Drawable r9 = android.support.design.resources.MaterialResources.getDrawable(r9, r8, r10)
            r7.icon = r9
            int r9 = android.support.design.R.styleable.MaterialButton_iconGravity
            r10 = 1
            int r9 = r8.getInteger(r9, r10)
            r7.iconGravity = r9
            int r9 = android.support.design.R.styleable.MaterialButton_iconSize
            int r9 = r8.getDimensionPixelSize(r9, r6)
            r7.iconSize = r9
            android.support.design.button.MaterialButtonHelper r9 = new android.support.design.button.MaterialButtonHelper
            r9.<init>(r7)
            r7.materialButtonHelper = r9
            r9.loadFromAttributes(r8)
            r8.recycle()
            int r8 = r7.iconPadding
            r7.setCompoundDrawablePadding(r8)
            r7.updateIcon()
            return
    }

    private boolean isLayoutRTL() {
            r2 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r2)
            r1 = 1
            if (r0 != r1) goto L8
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    private boolean isUsingOriginalBackground() {
            r1 = this;
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            if (r0 == 0) goto Lc
            boolean r0 = r0.isBackgroundOverwritten()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    private void updateIcon() {
            r5 = this;
            android.graphics.drawable.Drawable r0 = r5.icon
            if (r0 == 0) goto L37
            android.graphics.drawable.Drawable r0 = r0.mutate()
            r5.icon = r0
            android.content.res.ColorStateList r1 = r5.iconTint
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r1)
            android.graphics.PorterDuff$Mode r0 = r5.iconTintMode
            if (r0 == 0) goto L18
            android.graphics.drawable.Drawable r1 = r5.icon
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r1, r0)
        L18:
            int r0 = r5.iconSize
            if (r0 == 0) goto L1d
            goto L23
        L1d:
            android.graphics.drawable.Drawable r0 = r5.icon
            int r0 = r0.getIntrinsicWidth()
        L23:
            int r1 = r5.iconSize
            if (r1 == 0) goto L28
            goto L2e
        L28:
            android.graphics.drawable.Drawable r1 = r5.icon
            int r1 = r1.getIntrinsicHeight()
        L2e:
            android.graphics.drawable.Drawable r2 = r5.icon
            int r3 = r5.iconLeft
            r4 = 0
            int r0 = r0 + r3
            r2.setBounds(r3, r4, r0, r1)
        L37:
            android.graphics.drawable.Drawable r0 = r5.icon
            r1 = 0
            android.support.v4.widget.TextViewCompat.setCompoundDrawablesRelative(r5, r0, r1, r1, r1)
            return
    }

    @Override
    public android.content.res.ColorStateList getBackgroundTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.getSupportBackgroundTintList()
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getBackgroundTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.getSupportBackgroundTintMode()
            return r0
    }

    public int getCornerRadius() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            int r0 = r0.getCornerRadius()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public android.graphics.drawable.Drawable getIcon() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.icon
            return r0
    }

    public int getIconGravity() {
            r1 = this;
            int r0 = r1.iconGravity
            return r0
    }

    public int getIconPadding() {
            r1 = this;
            int r0 = r1.iconPadding
            return r0
    }

    public int getIconSize() {
            r1 = this;
            int r0 = r1.iconSize
            return r0
    }

    public android.content.res.ColorStateList getIconTint() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.iconTint
            return r0
    }

    public android.graphics.PorterDuff.Mode getIconTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.iconTintMode
            return r0
    }

    public android.content.res.ColorStateList getRippleColor() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            android.content.res.ColorStateList r0 = r0.getRippleColor()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public android.content.res.ColorStateList getStrokeColor() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            android.content.res.ColorStateList r0 = r0.getStrokeColor()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public int getStrokeWidth() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            int r0 = r0.getStrokeWidth()
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    @Override
    public android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            android.content.res.ColorStateList r0 = r0.getSupportBackgroundTintList()
            return r0
        Ld:
            android.content.res.ColorStateList r0 = super.getSupportBackgroundTintList()
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Ld
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            android.graphics.PorterDuff$Mode r0 = r0.getSupportBackgroundTintMode()
            return r0
        Ld:
            android.graphics.PorterDuff$Mode r0 = super.getSupportBackgroundTintMode()
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            super.onDraw(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L14
            boolean r0 = r2.isUsingOriginalBackground()
            if (r0 == 0) goto L14
            android.support.design.button.MaterialButtonHelper r0 = r2.materialButtonHelper
            r0.drawStroke(r3)
        L14:
            return
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            super.onLayout(r2, r3, r4, r5, r6)
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r2 != r0) goto L12
            android.support.design.button.MaterialButtonHelper r2 = r1.materialButtonHelper
            if (r2 == 0) goto L12
            int r6 = r6 - r4
            int r5 = r5 - r3
            r2.updateMaskBounds(r6, r5)
        L12:
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            super.onMeasure(r3, r4)
            android.graphics.drawable.Drawable r3 = r2.icon
            if (r3 == 0) goto L4c
            int r3 = r2.iconGravity
            r4 = 2
            if (r3 == r4) goto Ld
            goto L4c
        Ld:
            android.text.TextPaint r3 = r2.getPaint()
            java.lang.CharSequence r0 = r2.getText()
            java.lang.String r0 = r0.toString()
            float r3 = r3.measureText(r0)
            int r3 = (int) r3
            int r0 = r2.iconSize
            if (r0 != 0) goto L28
            android.graphics.drawable.Drawable r0 = r2.icon
            int r0 = r0.getIntrinsicWidth()
        L28:
            int r1 = r2.getMeasuredWidth()
            int r1 = r1 - r3
            int r3 = android.support.v4.view.ViewCompat.getPaddingEnd(r2)
            int r1 = r1 - r3
            int r1 = r1 - r0
            int r3 = r2.iconPadding
            int r1 = r1 - r3
            int r3 = android.support.v4.view.ViewCompat.getPaddingStart(r2)
            int r1 = r1 - r3
            int r1 = r1 / r4
            boolean r3 = r2.isLayoutRTL()
            if (r3 == 0) goto L43
            int r1 = -r1
        L43:
            int r3 = r2.iconLeft
            if (r3 == r1) goto L4c
            r2.iconLeft = r1
            r2.updateIcon()
        L4c:
            return
    }

    @Override
    public void setBackground(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.setBackgroundDrawable(r1)
            return
    }

    @Override
    public void setBackgroundColor(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lc
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setBackgroundColor(r2)
            goto Lf
        Lc:
            super.setBackgroundColor(r2)
        Lf:
            return
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r3) {
            r2 = this;
            boolean r0 = r2.isUsingOriginalBackground()
            if (r0 == 0) goto L28
            android.graphics.drawable.Drawable r0 = r2.getBackground()
            if (r3 == r0) goto L1c
            java.lang.String r0 = "MaterialButton"
            java.lang.String r1 = "Setting a custom background is not supported."
            android.util.Log.i(r0, r1)
            android.support.design.button.MaterialButtonHelper r0 = r2.materialButtonHelper
            r0.setBackgroundOverwritten()
            super.setBackgroundDrawable(r3)
            goto L2b
        L1c:
            android.graphics.drawable.Drawable r0 = r2.getBackground()
            int[] r3 = r3.getState()
            r0.setState(r3)
            goto L2b
        L28:
            super.setBackgroundDrawable(r3)
        L2b:
            return
    }

    @Override
    public void setBackgroundResource(int r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setBackgroundDrawable(r2)
            return
    }

    @Override
    public void setBackgroundTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.setSupportBackgroundTintList(r1)
            return
    }

    @Override
    public void setBackgroundTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.setSupportBackgroundTintMode(r1)
            return
    }

    public void setCornerRadius(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lb
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setCornerRadius(r2)
        Lb:
            return
    }

    public void setCornerRadiusResource(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto L11
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelSize(r2)
            r1.setCornerRadius(r2)
        L11:
            return
    }

    public void setIcon(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.icon
            if (r0 == r2) goto L9
            r1.icon = r2
            r1.updateIcon()
        L9:
            return
    }

    public void setIconGravity(int r1) {
            r0 = this;
            r0.iconGravity = r1
            return
    }

    public void setIconPadding(int r2) {
            r1 = this;
            int r0 = r1.iconPadding
            if (r0 == r2) goto L9
            r1.iconPadding = r2
            r1.setCompoundDrawablePadding(r2)
        L9:
            return
    }

    public void setIconResource(int r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.setIcon(r2)
            return
    }

    public void setIconSize(int r2) {
            r1 = this;
            if (r2 < 0) goto Lc
            int r0 = r1.iconSize
            if (r0 == r2) goto Lb
            r1.iconSize = r2
            r1.updateIcon()
        Lb:
            return
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "iconSize cannot be less than 0"
            r2.<init>(r0)
            throw r2
    }

    public void setIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.iconTint
            if (r0 == r2) goto L9
            r1.iconTint = r2
            r1.updateIcon()
        L9:
            return
    }

    public void setIconTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.iconTintMode
            if (r0 == r2) goto L9
            r1.iconTintMode = r2
            r1.updateIcon()
        L9:
            return
    }

    public void setIconTintResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setIconTint(r2)
            return
    }

    void setInternalBackground(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.setBackgroundDrawable(r1)
            return
    }

    public void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lb
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setRippleColor(r2)
        Lb:
            return
    }

    public void setRippleColorResource(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto L11
            android.content.Context r0 = r1.getContext()
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setRippleColor(r2)
        L11:
            return
    }

    public void setStrokeColor(android.content.res.ColorStateList r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lb
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setStrokeColor(r2)
        Lb:
            return
    }

    public void setStrokeColorResource(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto L11
            android.content.Context r0 = r1.getContext()
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setStrokeColor(r2)
        L11:
            return
    }

    public void setStrokeWidth(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lb
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setStrokeWidth(r2)
        Lb:
            return
    }

    public void setStrokeWidthResource(int r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto L11
            android.content.res.Resources r0 = r1.getResources()
            int r2 = r0.getDimensionPixelSize(r2)
            r1.setStrokeWidth(r2)
        L11:
            return
    }

    @Override
    public void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lc
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setSupportBackgroundTintList(r2)
            goto L13
        Lc:
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            if (r0 == 0) goto L13
            super.setSupportBackgroundTintList(r2)
        L13:
            return
    }

    @Override
    public void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            boolean r0 = r1.isUsingOriginalBackground()
            if (r0 == 0) goto Lc
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            r0.setSupportBackgroundTintMode(r2)
            goto L13
        Lc:
            android.support.design.button.MaterialButtonHelper r0 = r1.materialButtonHelper
            if (r0 == 0) goto L13
            super.setSupportBackgroundTintMode(r2)
        L13:
            return
    }
}
