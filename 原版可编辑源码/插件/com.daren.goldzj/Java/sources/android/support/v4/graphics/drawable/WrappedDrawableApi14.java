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
    static final PorterDuff.Mode DEFAULT_TINT_MODE = PorterDuff.Mode.SRC_IN;
    private boolean mColorFilterSet;
    private int mCurrentColor;
    private PorterDuff.Mode mCurrentMode;
    Drawable mDrawable;
    private boolean mMutated;
    DrawableWrapperState mState;

    protected boolean isCompatTintEnabled() {
        return true;
    }

    WrappedDrawableApi14(@NonNull DrawableWrapperState drawableWrapperState, @Nullable Resources resources) {
        this.mState = drawableWrapperState;
        updateLocalState(resources);
    }

    WrappedDrawableApi14(@Nullable Drawable drawable) {
        this.mState = mutateConstantState();
        setWrappedDrawable(drawable);
    }

    private void updateLocalState(@Nullable Resources resources) {
        DrawableWrapperState drawableWrapperState = this.mState;
        if (drawableWrapperState == null || drawableWrapperState.mDrawableState == null) {
            return;
        }
        setWrappedDrawable(this.mState.mDrawableState.newDrawable(resources));
    }

    @Override
    public void jumpToCurrentState() {
        this.mDrawable.jumpToCurrentState();
    }

    @Override
    public void draw(@NonNull Canvas canvas) {
        this.mDrawable.draw(canvas);
    }

    @Override
    protected void onBoundsChange(Rect rect) {
        Drawable drawable = this.mDrawable;
        if (drawable != null) {
            drawable.setBounds(rect);
        }
    }

    @Override
    public void setChangingConfigurations(int i) {
        this.mDrawable.setChangingConfigurations(i);
    }

    @Override
    public int getChangingConfigurations() {
        int changingConfigurations = super.getChangingConfigurations();
        DrawableWrapperState drawableWrapperState = this.mState;
        return changingConfigurations | (drawableWrapperState != null ? drawableWrapperState.getChangingConfigurations() : 0) | this.mDrawable.getChangingConfigurations();
    }

    @Override
    public void setDither(boolean z) {
        this.mDrawable.setDither(z);
    }

    @Override
    public void setFilterBitmap(boolean z) {
        this.mDrawable.setFilterBitmap(z);
    }

    @Override
    public void setAlpha(int i) {
        this.mDrawable.setAlpha(i);
    }

    @Override
    public void setColorFilter(ColorFilter colorFilter) {
        this.mDrawable.setColorFilter(colorFilter);
    }

    @Override
    public boolean isStateful() {
        DrawableWrapperState drawableWrapperState;
        ColorStateList colorStateList = (!isCompatTintEnabled() || (drawableWrapperState = this.mState) == null) ? null : drawableWrapperState.mTint;
        return (colorStateList != null && colorStateList.isStateful()) || this.mDrawable.isStateful();
    }

    @Override
    public boolean setState(@NonNull int[] iArr) {
        return updateTint(iArr) || this.mDrawable.setState(iArr);
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
    public boolean setVisible(boolean z, boolean z2) {
        return super.setVisible(z, z2) || this.mDrawable.setVisible(z, z2);
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
    public boolean getPadding(@NonNull Rect rect) {
        return this.mDrawable.getPadding(rect);
    }

    @Override
    @RequiresApi(19)
    public void setAutoMirrored(boolean z) {
        this.mDrawable.setAutoMirrored(z);
    }

    @Override
    @RequiresApi(19)
    public boolean isAutoMirrored() {
        return this.mDrawable.isAutoMirrored();
    }

    @Override
    @Nullable
    public Drawable.ConstantState getConstantState() {
        DrawableWrapperState drawableWrapperState = this.mState;
        if (drawableWrapperState == null || !drawableWrapperState.canConstantState()) {
            return null;
        }
        this.mState.mChangingConfigurations = getChangingConfigurations();
        return this.mState;
    }

    @Override
    @NonNull
    public Drawable mutate() {
        if (!this.mMutated && super.mutate() == this) {
            this.mState = mutateConstantState();
            Drawable drawable = this.mDrawable;
            if (drawable != null) {
                drawable.mutate();
            }
            DrawableWrapperState drawableWrapperState = this.mState;
            if (drawableWrapperState != null) {
                Drawable drawable2 = this.mDrawable;
                drawableWrapperState.mDrawableState = drawable2 != null ? drawable2.getConstantState() : null;
            }
            this.mMutated = true;
        }
        return this;
    }

    @NonNull
    DrawableWrapperState mutateConstantState() {
        return new DrawableWrapperStateBase(this.mState, null);
    }

    @Override
    public void invalidateDrawable(@NonNull Drawable drawable) {
        invalidateSelf();
    }

    @Override
    public void scheduleDrawable(@NonNull Drawable drawable, @NonNull Runnable runnable, long j) {
        scheduleSelf(runnable, j);
    }

    @Override
    public void unscheduleDrawable(@NonNull Drawable drawable, @NonNull Runnable runnable) {
        unscheduleSelf(runnable);
    }

    @Override
    protected boolean onLevelChange(int i) {
        return this.mDrawable.setLevel(i);
    }

    @Override
    public void setTint(int i) {
        setTintList(ColorStateList.valueOf(i));
    }

    @Override
    public void setTintList(ColorStateList colorStateList) {
        this.mState.mTint = colorStateList;
        updateTint(getState());
    }

    @Override
    public void setTintMode(@NonNull PorterDuff.Mode mode) {
        this.mState.mTintMode = mode;
        updateTint(getState());
    }

    private boolean updateTint(int[] iArr) {
        if (!isCompatTintEnabled()) {
            return false;
        }
        ColorStateList colorStateList = this.mState.mTint;
        PorterDuff.Mode mode = this.mState.mTintMode;
        if (colorStateList != null && mode != null) {
            int colorForState = colorStateList.getColorForState(iArr, colorStateList.getDefaultColor());
            if (!this.mColorFilterSet || colorForState != this.mCurrentColor || mode != this.mCurrentMode) {
                setColorFilter(colorForState, mode);
                this.mCurrentColor = colorForState;
                this.mCurrentMode = mode;
                this.mColorFilterSet = true;
                return true;
            }
        } else {
            this.mColorFilterSet = false;
            clearColorFilter();
        }
        return false;
    }

    @Override
    public final Drawable getWrappedDrawable() {
        return this.mDrawable;
    }

    @Override
    public final void setWrappedDrawable(Drawable drawable) {
        Drawable drawable2 = this.mDrawable;
        if (drawable2 != null) {
            drawable2.setCallback(null);
        }
        this.mDrawable = drawable;
        if (drawable != null) {
            drawable.setCallback(this);
            setVisible(drawable.isVisible(), true);
            setState(drawable.getState());
            setLevel(drawable.getLevel());
            setBounds(drawable.getBounds());
            DrawableWrapperState drawableWrapperState = this.mState;
            if (drawableWrapperState != null) {
                drawableWrapperState.mDrawableState = drawable.getConstantState();
            }
        }
        invalidateSelf();
    }

    protected static abstract class DrawableWrapperState extends Drawable.ConstantState {
        int mChangingConfigurations;
        Drawable.ConstantState mDrawableState;
        ColorStateList mTint;
        PorterDuff.Mode mTintMode;

        @Override
        @NonNull
        public abstract Drawable newDrawable(@Nullable Resources resources);

        DrawableWrapperState(@Nullable DrawableWrapperState drawableWrapperState, @Nullable Resources resources) {
            this.mTint = null;
            this.mTintMode = WrappedDrawableApi14.DEFAULT_TINT_MODE;
            if (drawableWrapperState != null) {
                this.mChangingConfigurations = drawableWrapperState.mChangingConfigurations;
                this.mDrawableState = drawableWrapperState.mDrawableState;
                this.mTint = drawableWrapperState.mTint;
                this.mTintMode = drawableWrapperState.mTintMode;
            }
        }

        @Override
        @NonNull
        public Drawable newDrawable() {
            return newDrawable(null);
        }

        @Override
        public int getChangingConfigurations() {
            int i = this.mChangingConfigurations;
            Drawable.ConstantState constantState = this.mDrawableState;
            return i | (constantState != null ? constantState.getChangingConfigurations() : 0);
        }

        boolean canConstantState() {
            return this.mDrawableState != null;
        }
    }

    private static class DrawableWrapperStateBase extends DrawableWrapperState {
        DrawableWrapperStateBase(@Nullable DrawableWrapperState drawableWrapperState, @Nullable Resources resources) {
            super(drawableWrapperState, resources);
        }

        @Override
        @NonNull
        public Drawable newDrawable(@Nullable Resources resources) {
            return new WrappedDrawableApi14(this, resources);
        }
    }
}
