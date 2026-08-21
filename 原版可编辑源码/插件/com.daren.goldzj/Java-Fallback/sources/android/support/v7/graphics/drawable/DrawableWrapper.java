package android.support.v7.graphics.drawable;

import android.content.res.ColorStateList;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.Drawable;
import android.support.annotation.RestrictTo;
import android.support.v4.graphics.drawable.DrawableCompat;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class DrawableWrapper extends Drawable implements Drawable.Callback {
    private Drawable mDrawable;

    public DrawableWrapper(Drawable r1) {
        setWrappedDrawable(r1);
    }

    @Override
    public void draw(Canvas r2) {
        this.mDrawable.draw(r2);
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        this.mDrawable.setBounds(r2);
    }

    @Override
    public void setChangingConfigurations(int r2) {
        this.mDrawable.setChangingConfigurations(r2);
    }

    @Override
    public int getChangingConfigurations() {
        return this.mDrawable.getChangingConfigurations();
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
        return this.mDrawable.isStateful();
    }

    @Override
    public boolean setState(int[] r2) {
        return this.mDrawable.setState(r2);
    }

    @Override
    public int[] getState() {
        return this.mDrawable.getState();
    }

    @Override
    public void jumpToCurrentState() {
        DrawableCompat.jumpToCurrentState(this.mDrawable);
    }

    @Override
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
    public boolean getPadding(Rect r2) {
        return this.mDrawable.getPadding(r2);
    }

    @Override
    public void invalidateDrawable(Drawable r1) {
        invalidateSelf();
    }

    @Override
    public void scheduleDrawable(Drawable r1, Runnable r2, long r3) {
        scheduleSelf(r2, r3);
    }

    @Override
    public void unscheduleDrawable(Drawable r1, Runnable r2) {
        unscheduleSelf(r2);
    }

    @Override
    protected boolean onLevelChange(int r2) {
        return this.mDrawable.setLevel(r2);
    }

    @Override
    public void setAutoMirrored(boolean r2) {
        DrawableCompat.setAutoMirrored(this.mDrawable, r2);
    }

    @Override
    public boolean isAutoMirrored() {
        return DrawableCompat.isAutoMirrored(this.mDrawable);
    }

    @Override
    public void setTint(int r2) {
        DrawableCompat.setTint(this.mDrawable, r2);
    }

    @Override
    public void setTintList(ColorStateList r2) {
        DrawableCompat.setTintList(this.mDrawable, r2);
    }

    @Override
    public void setTintMode(PorterDuff.Mode r2) {
        DrawableCompat.setTintMode(this.mDrawable, r2);
    }

    @Override
    public void setHotspot(float r2, float r3) {
        DrawableCompat.setHotspot(this.mDrawable, r2, r3);
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
        DrawableCompat.setHotspotBounds(this.mDrawable, r2, r3, r4, r5);
    }

    public Drawable getWrappedDrawable() {
        return this.mDrawable;
    }

    public void setWrappedDrawable(Drawable r3) {
        Drawable r0 = this.mDrawable;
        if (r0 == null) goto L5;
        r0.setCallback(null);
    L5:
        this.mDrawable = r3;
        if (r3 == null) goto L9;
        r3.setCallback(this);
        return;
    }
}
