package com.bumptech.glide.load.resource.drawable;

public abstract class GlideDrawable extends android.graphics.drawable.Drawable implements android.graphics.drawable.Animatable {
    public static final int LOOP_FOREVER = -1;
    public static final int LOOP_INTRINSIC = 0;

    public GlideDrawable() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract boolean isAnimated();

    public abstract void setLoopCount(int r1);
}
