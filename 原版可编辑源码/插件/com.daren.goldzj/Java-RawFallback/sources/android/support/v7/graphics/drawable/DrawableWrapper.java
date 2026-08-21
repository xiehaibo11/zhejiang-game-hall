package android.support.v7.graphics.drawable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class DrawableWrapper extends android.graphics.drawable.Drawable implements android.graphics.drawable.Drawable.Callback {
    private android.graphics.drawable.Drawable mDrawable;

    public DrawableWrapper(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.<init>()
            r0.setWrappedDrawable(r1)
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.draw(r2)
            return
    }

    @Override
    public int getChangingConfigurations() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getChangingConfigurations()
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable getCurrent() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.graphics.drawable.Drawable r0 = r0.getCurrent()
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getIntrinsicHeight()
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getIntrinsicWidth()
            return r0
    }

    @Override
    public int getMinimumHeight() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getMinimumHeight()
            return r0
    }

    @Override
    public int getMinimumWidth() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getMinimumWidth()
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int r0 = r0.getOpacity()
            return r0
    }

    @Override
    public boolean getPadding(android.graphics.Rect r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r2 = r0.getPadding(r2)
            return r2
    }

    @Override
    public int[] getState() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            int[] r0 = r0.getState()
            return r0
    }

    @Override
    public android.graphics.Region getTransparentRegion() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.graphics.Region r0 = r0.getTransparentRegion()
            return r0
    }

    public android.graphics.drawable.Drawable getWrappedDrawable() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            return r0
    }

    @Override
    public void invalidateDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.invalidateSelf()
            return
    }

    @Override
    public boolean isAutoMirrored() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r0 = android.support.v4.graphics.drawable.DrawableCompat.isAutoMirrored(r0)
            return r0
    }

    @Override
    public boolean isStateful() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r0 = r0.isStateful()
            return r0
    }

    @Override
    public void jumpToCurrentState() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.jumpToCurrentState(r0)
            return
    }

    @Override
    protected void onBoundsChange(android.graphics.Rect r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setBounds(r2)
            return
    }

    @Override
    protected boolean onLevelChange(int r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r2 = r0.setLevel(r2)
            return r2
    }

    @Override
    public void scheduleDrawable(android.graphics.drawable.Drawable r1, java.lang.Runnable r2, long r3) {
            r0 = this;
            r0.scheduleSelf(r2, r3)
            return
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setAlpha(r2)
            return
    }

    @Override
    public void setAutoMirrored(boolean r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setAutoMirrored(r0, r2)
            return
    }

    @Override
    public void setChangingConfigurations(int r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setChangingConfigurations(r2)
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setColorFilter(r2)
            return
    }

    @Override
    public void setDither(boolean r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setDither(r2)
            return
    }

    @Override
    public void setFilterBitmap(boolean r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            r0.setFilterBitmap(r2)
            return
    }

    @Override
    public void setHotspot(float r2, float r3) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setHotspot(r0, r2, r3)
            return
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setHotspotBounds(r0, r2, r3, r4, r5)
            return
    }

    @Override
    public boolean setState(int[] r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r2 = r0.setState(r2)
            return r2
    }

    @Override
    public void setTint(int r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTint(r0, r2)
            return
    }

    @Override
    public void setTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
            return
    }

    @Override
    public void setTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r0, r2)
            return
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
            r1 = this;
            boolean r0 = super.setVisible(r2, r3)
            if (r0 != 0) goto L11
            android.graphics.drawable.Drawable r0 = r1.mDrawable
            boolean r2 = r0.setVisible(r2, r3)
            if (r2 == 0) goto Lf
            goto L11
        Lf:
            r2 = 0
            goto L12
        L11:
            r2 = 1
        L12:
            return r2
    }

    public void setWrappedDrawable(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.mDrawable
            if (r0 == 0) goto L8
            r1 = 0
            r0.setCallback(r1)
        L8:
            r2.mDrawable = r3
            if (r3 == 0) goto Lf
            r3.setCallback(r2)
        Lf:
            return
    }

    @Override
    public void unscheduleDrawable(android.graphics.drawable.Drawable r1, java.lang.Runnable r2) {
            r0 = this;
            r0.unscheduleSelf(r2)
            return
    }
}
