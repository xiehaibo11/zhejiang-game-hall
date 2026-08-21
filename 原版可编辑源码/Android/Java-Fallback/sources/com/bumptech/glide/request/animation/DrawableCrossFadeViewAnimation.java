package com.bumptech.glide.request.animation;

import android.graphics.drawable.Drawable;

public class DrawableCrossFadeViewAnimation<T extends android.graphics.drawable.Drawable> implements com.bumptech.glide.request.animation.GlideAnimation<T> {
    private final com.bumptech.glide.request.animation.GlideAnimation<T> defaultAnimation;
    private final int duration;

    public DrawableCrossFadeViewAnimation(com.bumptech.glide.request.animation.GlideAnimation<T> r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.defaultAnimation = r1
            r0.duration = r2
            return
    }

    public boolean animate(T r5, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r6) {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r6.getCurrentDrawable()
            r1 = 0
            if (r0 == 0) goto L20
            android.graphics.drawable.TransitionDrawable r2 = new android.graphics.drawable.TransitionDrawable
            r3 = 2
            android.graphics.drawable.Drawable[] r3 = new android.graphics.drawable.Drawable[r3]
            r3[r1] = r0
            r0 = 1
            r3[r0] = r5
            r2.<init>(r3)
            r2.setCrossFadeEnabled(r0)
            int r5 = r4.duration
            r2.startTransition(r5)
            r6.setDrawable(r2)
            return r0
        L20:
            com.bumptech.glide.request.animation.GlideAnimation<T extends android.graphics.drawable.Drawable> r0 = r4.defaultAnimation
            r0.animate(r5, r6)
            return r1
    }

    @Override
    public boolean animate(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r2) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = (android.graphics.drawable.Drawable) r1
            boolean r1 = r0.animate(r1, r2)
            return r1
    }
}
