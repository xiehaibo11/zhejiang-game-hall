package android.support.v4.graphics.drawable;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.Drawable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;

class WrappedDrawableApi14 extends Drawable implements Drawable.Callback, WrappedDrawable, TintAwareDrawable {
    static final PorterDuff.Mode DEFAULT_TINT_MODE = null;
    private boolean mColorFilterSet;
    private int mCurrentColor;
    private PorterDuff.Mode mCurrentMode;
    Drawable mDrawable;
    private boolean mMutated;
    DrawableWrapperState mState;

    protected static abstract class DrawableWrapperState extends Drawable.ConstantState {
        int mChangingConfigurations;
        Drawable.ConstantState mDrawableState;
        ColorStateList mTint;
        PorterDuff.Mode mTintMode;

        @Override
        @NonNull
        public abstract Drawable newDrawable(@Nullable Resources r1);

        DrawableWrapperState(@Nullable DrawableWrapperState r1, @Nullable Resources r2) {
            this.mTint = null;
            this.mTintMode = WrappedDrawableApi14.DEFAULT_TINT_MODE;
            if (r1 == null) goto L6;
            this.mChangingConfigurations = r1.mChangingConfigurations;
            this.mDrawableState = r1.mDrawableState;
            this.mTint = r1.mTint;
            this.mTintMode = r1.mTintMode;
            return;
        }

        @Override
        @NonNull
        public Drawable newDrawable() {
            return newDrawable(null);
        }

        @Override
        public int getChangingConfigurations() {
            int r0 = this.mChangingConfigurations;
            Drawable.ConstantState r1 = this.mDrawableState;
            if (r1 == null) goto L5;
            int r12 = r1.getChangingConfigurations();
        L7:
            return r0 | r12;
        L5:
            r12 = 0;
            goto L7
        }

        boolean canConstantState() {
            if (this.mDrawableState == null) goto L5;
            return true;
        L5:
            return false;
        }
    }

    private static class DrawableWrapperStateBase extends DrawableWrapperState {
        DrawableWrapperStateBase(@Nullable DrawableWrapperState r1, @Nullable Resources r2) {
            super(r1, r2);
        }

        @Override
        @NonNull
        public Drawable newDrawable(@Nullable Resources r2) {
            return new WrappedDrawableApi14(this, r2);
        }
    }

    protected boolean isCompatTintEnabled() {
        return true;
    }

    static {
        DEFAULT_TINT_MODE = PorterDuff.Mode.SRC_IN;
    }

    WrappedDrawableApi14(@NonNull DrawableWrapperState r1, @Nullable Resources r2) {
        this.mState = r1;
        updateLocalState(r2);
    }

    WrappedDrawableApi14(@Nullable Drawable r2) {
        this.mState = mutateConstantState();
        setWrappedDrawable(r2);
    }

    private void updateLocalState(@Nullable Resources r2) {
        DrawableWrapperState r0 = this.mState;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.mDrawableState == null) goto L9;
        setWrappedDrawable(this.mState.mDrawableState.newDrawable(r2));
        return;
    }

    @Override
    public void jumpToCurrentState() {
        this.mDrawable.jumpToCurrentState();
    }

    @Override
    public void draw(@NonNull Canvas r2) {
        this.mDrawable.draw(r2);
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        Drawable r0 = this.mDrawable;
        if (r0 == null) goto L6;
        r0.setBounds(r2);
        return;
    }

    @Override
    public void setChangingConfigurations(int r2) {
        this.mDrawable.setChangingConfigurations(r2);
    }

    @Override
    public int getChangingConfigurations() {
        int r0 = super.getChangingConfigurations();
        DrawableWrapperState r1 = this.mState;
        if (r1 == null) goto L5;
        int r12 = r1.getChangingConfigurations();
    L7:
        return (r0 | r12) | this.mDrawable.getChangingConfigurations();
    L5:
        r12 = 0;
        goto L7
    }

    @Override
    public void setDither(boolean r2) {
        this.mDrawable.setDither(r2);
    }

    @Override
    public void setFilterBitmap(boolean r2) {
        this.mDrawable.setFilterBitmap(r2);
    }

    @Override
    public void setAlpha(int r2) {
        this.mDrawable.setAlpha(r2);
    }

    @Override
    public void setColorFilter(ColorFilter r2) {
        this.mDrawable.setColorFilter(r2);
    }

    @Override
    public boolean isStateful() {
        if (isCompatTintEnabled() == false) goto L7;
        DrawableWrapperState r0 = this.mState;
        if (r0 == null) goto L7;
        ColorStateList r02 = r0.mTint;
    L8:
        if (r02 == null) goto L12;
        if (r02.isStateful() == false) goto L12;
    L13:
        return true;
    L12:
        if (this.mDrawable.isStateful() == true) goto L13;
        return false;
    L7:
        r02 = null;
        goto L8
    }

    @Override
    public boolean setState(@NonNull int[] r2) {
        boolean r0 = this.mDrawable.setState(r2);
        if (updateTint(r2) == true) goto L7;
        if (r0 == true) goto L7;
        return false;
    L7:
        return true;
    }

    @Override
    @NonNull
    public int[] getState() {
        return this.mDrawable.getState();
    }

    @Override
    @NonNull
    public Drawable getCurrent() {
        return this.mDrawable.getCurrent();
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
        if (super.setVisible(r2, r3) == false) goto L5;
    L8:
        return true;
    L5:
        if (this.mDrawable.setVisible(r2, r3) == true) goto L8;
        return false;
    }

    @Override
    public int getOpacity() {
        return this.mDrawable.getOpacity();
    }

    @Override
    public Region getTransparentRegion() {
        return this.mDrawable.getTransparentRegion();
    }

    @Override
    public int getIntrinsicWidth() {
        return this.mDrawable.getIntrinsicWidth();
    }

    @Override
    public int getIntrinsicHeight() {
        return this.mDrawable.getIntrinsicHeight();
    }

    @Override
    public int getMinimumWidth() {
        return this.mDrawable.getMinimumWidth();
    }

    @Override
    public int getMinimumHeight() {
        return this.mDrawable.getMinimumHeight();
    }

    @Override
    public boolean getPadding(@NonNull Rect r2) {
        return this.mDrawable.getPadding(r2);
    }

    @Override
    @RequiresApi(19)
    public void setAutoMirrored(boolean r2) {
        this.mDrawable.setAutoMirrored(r2);
    }

    @Override
    @RequiresApi(19)
    public boolean isAutoMirrored() {
        return this.mDrawable.isAutoMirrored();
    }

    @Override
    @Nullable
    public Drawable.ConstantState getConstantState() {
        DrawableWrapperState r0 = this.mState;
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.canConstantState() == false) goto L10;
        DrawableWrapperState r02 = this.mState;
        r02.mChangingConfigurations = getChangingConfigurations();
        return this.mState;
    L10:
        return null;
    }

    @Override
    @NonNull
    public Drawable mutate() {
        if (this.mMutated == false) goto L5;
    L17:
        return this;
    L5:
        if (super.mutate() != this) goto L17;
        this.mState = mutateConstantState();
        Drawable r0 = this.mDrawable;
        if (r0 == null) goto L9;
        r0.mutate();
    L9:
        DrawableWrapperState r02 = this.mState;
        if (r02 == null) goto L16;
        Drawable r1 = this.mDrawable;
        if (r1 == null) goto L14;
        Drawable.ConstantState r12 = r1.getConstantState();
    L15:
        r02.mDrawableState = r12;
        goto L16
    L14:
        r12 = null;
    L16:
        this.mMutated = true;
        goto L17
    }

    @NonNull
    DrawableWrapperState mutateConstantState() {
        return new DrawableWrapperStateBase(this.mState, null);
    }

    @Override
    public void invalidateDrawable(@NonNull Drawable r1) {
        invalidateSelf();
    }

    @Override
    public void scheduleDrawable(@NonNull Drawable r1, @NonNull Runnable r2, long r3) {
        scheduleSelf(r2, r3);
    }

    @Override
    public void unscheduleDrawable(@NonNull Drawable r1, @NonNull Runnable r2) {
        unscheduleSelf(r2);
    }

    @Override
    protected boolean onLevelChange(int r2) {
        return this.mDrawable.setLevel(r2);
    }

    @Override
    public void setTint(int r1) {
        setTintList(ColorStateList.valueOf(r1));
    }

    @Override
    public void setTintList(ColorStateList r2) {
        this.mState.mTint = r2;
        updateTint(getState());
    }

    @Override
    public void setTintMode(@NonNull PorterDuff.Mode r2) {
        this.mState.mTintMode = r2;
        updateTint(getState());
    }

    private boolean updateTint(int[] r5) {
        if (isCompatTintEnabled() == true) goto L5;
        return false;
    L5:
        ColorStateList r0 = this.mState.mTint;
        PorterDuff.Mode r2 = this.mState.mTintMode;
        if (r0 == null) goto L16;
        if (r2 == null) goto L16;
        int r52 = r0.getColorForState(r5, r0.getDefaultColor());
        if (this.mColorFilterSet == true) goto L11;
    L14:
        setColorFilter(r52, r2);
        this.mCurrentColor = r52;
        this.mCurrentMode = r2;
        this.mColorFilterSet = true;
        return true;
    L11:
        if (r52 != this.mCurrentColor) goto L14;
        if (r2 != this.mCurrentMode) goto L14;
    L17:
        return false;
    L16:
        this.mColorFilterSet = false;
        clearColorFilter();
        goto L17
    }

    @Override
    public final Drawable getWrappedDrawable() {
        return this.mDrawable;
    }

    @Override
    public final void setWrappedDrawable(Drawable r3) {
        Drawable r0 = this.mDrawable;
        if (r0 == null) goto L5;
        r0.setCallback(null);
    L5:
        this.mDrawable = r3;
        if (r3 == null) goto L10;
        r3.setCallback(this);
        setVisible(r3.isVisible(), true);
        setState(r3.getState());
        setLevel(r3.getLevel());
        setBounds(r3.getBounds());
        DrawableWrapperState r02 = this.mState;
        if (r02 == null) goto L10;
        r02.mDrawableState = r3.getConstantState();
    L10:
        invalidateSelf();
    }
}
