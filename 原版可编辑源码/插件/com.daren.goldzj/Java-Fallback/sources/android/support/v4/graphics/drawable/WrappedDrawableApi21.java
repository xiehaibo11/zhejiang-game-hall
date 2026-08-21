package android.support.v4.graphics.drawable;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Outline;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.DrawableContainer;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.v4.graphics.drawable.WrappedDrawableApi14;
import android.util.Log;
import java.lang.reflect.Method;

@RequiresApi(21)
class WrappedDrawableApi21 extends WrappedDrawableApi14 {
    private static final String TAG = "WrappedDrawableApi21";
    private static Method sIsProjectedDrawableMethod;

    private static class DrawableWrapperStateLollipop extends WrappedDrawableApi14.DrawableWrapperState {
        DrawableWrapperStateLollipop(@Nullable WrappedDrawableApi14.DrawableWrapperState r1, @Nullable Resources r2) {
            super(r1, r2);
        }

        @Override
        @NonNull
        public Drawable newDrawable(@Nullable Resources r2) {
            return new WrappedDrawableApi21(this, r2);
        }
    }

    WrappedDrawableApi21(Drawable r1) {
        super(r1);
        findAndCacheIsProjectedDrawableMethod();
    }

    WrappedDrawableApi21(WrappedDrawableApi14.DrawableWrapperState r1, Resources r2) {
        super(r1, r2);
        findAndCacheIsProjectedDrawableMethod();
    }

    @Override
    public void setHotspot(float r2, float r3) {
        this.mDrawable.setHotspot(r2, r3);
    }

    @Override
    public void setHotspotBounds(int r2, int r3, int r4, int r5) {
        this.mDrawable.setHotspotBounds(r2, r3, r4, r5);
    }

    @Override
    public void getOutline(@NonNull Outline r2) {
        this.mDrawable.getOutline(r2);
    }

    @Override
    @NonNull
    public Rect getDirtyBounds() {
        return this.mDrawable.getDirtyBounds();
    }

    @Override
    public void setTintList(ColorStateList r2) {
        if (isCompatTintEnabled() == false) goto L5;
        super.setTintList(r2);
        return;
    L5:
        this.mDrawable.setTintList(r2);
    }

    @Override
    public void setTint(int r2) {
        if (isCompatTintEnabled() == false) goto L5;
        super.setTint(r2);
        return;
    L5:
        this.mDrawable.setTint(r2);
    }

    @Override
    public void setTintMode(PorterDuff.Mode r2) {
        if (isCompatTintEnabled() == false) goto L5;
        super.setTintMode(r2);
        return;
    L5:
        this.mDrawable.setTintMode(r2);
    }

    @Override
    public boolean setState(@NonNull int[] r1) {
        if (super.setState(r1) == false) goto L6;
        invalidateSelf();
        return true;
    L6:
        return false;
    }

    @Override
    protected boolean isCompatTintEnabled() {
        if (Build.VERSION.SDK_INT != 21) goto L14;
        Drawable r0 = this.mDrawable;
        if ((r0 instanceof GradientDrawable) == false) goto L7;
    L12:
        return true;
    L7:
        if ((r0 instanceof DrawableContainer) == true) goto L12;
        if ((r0 instanceof InsetDrawable) == true) goto L12;
        if ((r0 instanceof RippleDrawable) == true) goto L12;
        return false;
    L14:
        return false;
    }

    @Override
    public boolean isProjected() {
        if (this.mDrawable == null) goto L10;
        Method r0 = sIsProjectedDrawableMethod;
        if (r0 == null) goto L10;
        return ((Boolean) r0.invoke(this.mDrawable, new Object[0])).booleanValue();
    L8:
        e = move-exception;
        Log.w(TAG, "Error calling Drawable#isProjected() method", e);
    L10:
        return false;
    }

    @Override
    @NonNull
    WrappedDrawableApi14.DrawableWrapperState mutateConstantState() {
        return new DrawableWrapperStateLollipop(this.mState, null);
    }

    private void findAndCacheIsProjectedDrawableMethod() {
        if (sIsProjectedDrawableMethod != null) goto L11;
        sIsProjectedDrawableMethod = Drawable.class.getDeclaredMethod("isProjected", new Class[0]);     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        Log.w(TAG, "Failed to retrieve Drawable#isProjected() method", e);
        return;
    }
}
