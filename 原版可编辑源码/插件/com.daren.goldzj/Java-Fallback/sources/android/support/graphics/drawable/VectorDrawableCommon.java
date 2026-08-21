package android.support.graphics.drawable;

import android.content.res.Resources;
import android.graphics.ColorFilter;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.Region;
import android.graphics.drawable.Drawable;
import android.support.v4.graphics.drawable.DrawableCompat;
import android.support.v4.graphics.drawable.TintAwareDrawable;

abstract class VectorDrawableCommon extends Drawable implements TintAwareDrawable {
    Drawable mDelegateDrawable;

    VectorDrawableCommon() {
    }

    @Override
    public void setColorFilter(int r2, PorterDuff.Mode r3) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        r0.setColorFilter(r2, r3);
        return;
    L6:
        super.setColorFilter(r2, r3);
    }

    @Override
    public ColorFilter getColorFilter() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 != null) goto L5;
        return null;
    L5:
        return DrawableCompat.getColorFilter(r0);
    }

    @Override
    protected boolean onLevelChange(int r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.setLevel(r2);
    L7:
        return super.onLevelChange(r2);
    }

    @Override
    protected void onBoundsChange(Rect r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        r0.setBounds(r2);
        return;
    L6:
        super.onBoundsChange(r2);
    }

    @Override
    public void setHotspot(float r2, float r3) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        DrawableCompat.setHotspot(r0, r2, r3);
        return;
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        DrawableCompat.setHotspotBounds(r0, r2, r3, r4, r5);
        return;
    }

    @Override
    public void setFilterBitmap(boolean r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        r0.setFilterBitmap(r2);
        return;
    }

    @Override
    public void jumpToCurrentState() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        DrawableCompat.jumpToCurrentState(r0);
        return;
    }

    @Override
    public void applyTheme(Resources.Theme r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        DrawableCompat.applyTheme(r0, r2);
        return;
    }

    @Override
    public void clearColorFilter() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        r0.clearColorFilter();
        return;
    L6:
        super.clearColorFilter();
    }

    @Override
    public Drawable getCurrent() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getCurrent();
    L7:
        return super.getCurrent();
    }

    @Override
    public int getMinimumWidth() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getMinimumWidth();
    L7:
        return super.getMinimumWidth();
    }

    @Override
    public int getMinimumHeight() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getMinimumHeight();
    L7:
        return super.getMinimumHeight();
    }

    @Override
    public boolean getPadding(Rect r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getPadding(r2);
    L7:
        return super.getPadding(r2);
    }

    @Override
    public int[] getState() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getState();
    L7:
        return super.getState();
    }

    @Override
    public Region getTransparentRegion() {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.getTransparentRegion();
    L7:
        return super.getTransparentRegion();
    }

    @Override
    public void setChangingConfigurations(int r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L6;
        r0.setChangingConfigurations(r2);
        return;
    L6:
        super.setChangingConfigurations(r2);
    }

    @Override
    public boolean setState(int[] r2) {
        Drawable r0 = this.mDelegateDrawable;
        if (r0 == null) goto L7;
        return r0.setState(r2);
    L7:
        return super.setState(r2);
    }
}
