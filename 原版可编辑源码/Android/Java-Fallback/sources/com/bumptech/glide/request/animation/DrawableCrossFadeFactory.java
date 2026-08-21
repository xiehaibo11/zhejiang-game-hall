package com.bumptech.glide.request.animation;

import android.graphics.drawable.Drawable;

public class DrawableCrossFadeFactory<T extends android.graphics.drawable.Drawable> implements com.bumptech.glide.request.animation.GlideAnimationFactory<T> {
    private static final int DEFAULT_DURATION_MS = 300;
    private final com.bumptech.glide.request.animation.ViewAnimationFactory<T> animationFactory;
    private final int duration;
    private com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T> firstResourceAnimation;
    private com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T> secondResourceAnimation;

    private static class DefaultAnimationFactory implements com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory {
        private final int duration;

        DefaultAnimationFactory(int r1) {
                r0 = this;
                r0.<init>()
                r0.duration = r1
                return
        }

        @Override
        public android.view.animation.Animation build() {
                r3 = this;
                android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
                r1 = 0
                r2 = 1065353216(0x3f800000, float:1.0)
                r0.<init>(r1, r2)
                int r1 = r3.duration
                long r1 = (long) r1
                r0.setDuration(r1)
                return r0
        }
    }

    public DrawableCrossFadeFactory() {
            r1 = this;
            r0 = 300(0x12c, float:4.2E-43)
            r1.<init>(r0)
            return
    }

    public DrawableCrossFadeFactory(int r3) {
            r2 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory$DefaultAnimationFactory r1 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory$DefaultAnimationFactory
            r1.<init>(r3)
            r0.<init>(r1)
            r2.<init>(r0, r3)
            return
    }

    public DrawableCrossFadeFactory(android.content.Context r2, int r3, int r4) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory
            r0.<init>(r2, r3)
            r1.<init>(r0, r4)
            return
    }

    public DrawableCrossFadeFactory(android.view.animation.Animation r2, int r3) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory
            r0.<init>(r2)
            r1.<init>(r0, r3)
            return
    }

    DrawableCrossFadeFactory(com.bumptech.glide.request.animation.ViewAnimationFactory<T> r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.animationFactory = r1
            r0.duration = r2
            return
    }

    private com.bumptech.glide.request.animation.GlideAnimation<T> getFirstResourceAnimation() {
            r3 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T extends android.graphics.drawable.Drawable> r0 = r3.firstResourceAnimation
            if (r0 != 0) goto L15
            com.bumptech.glide.request.animation.ViewAnimationFactory<T extends android.graphics.drawable.Drawable> r0 = r3.animationFactory
            r1 = 0
            r2 = 1
            com.bumptech.glide.request.animation.GlideAnimation r0 = r0.build(r1, r2)
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation r1 = new com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation
            int r2 = r3.duration
            r1.<init>(r0, r2)
            r3.firstResourceAnimation = r1
        L15:
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T extends android.graphics.drawable.Drawable> r0 = r3.firstResourceAnimation
            return r0
    }

    private com.bumptech.glide.request.animation.GlideAnimation<T> getSecondResourceAnimation() {
            r3 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T extends android.graphics.drawable.Drawable> r0 = r3.secondResourceAnimation
            if (r0 != 0) goto L14
            com.bumptech.glide.request.animation.ViewAnimationFactory<T extends android.graphics.drawable.Drawable> r0 = r3.animationFactory
            r1 = 0
            com.bumptech.glide.request.animation.GlideAnimation r0 = r0.build(r1, r1)
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation r1 = new com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation
            int r2 = r3.duration
            r1.<init>(r0, r2)
            r3.secondResourceAnimation = r1
        L14:
            com.bumptech.glide.request.animation.DrawableCrossFadeViewAnimation<T extends android.graphics.drawable.Drawable> r0 = r3.secondResourceAnimation
            return r0
    }

    @Override
    public com.bumptech.glide.request.animation.GlideAnimation<T> build(boolean r1, boolean r2) {
            r0 = this;
            if (r1 == 0) goto L7
            com.bumptech.glide.request.animation.GlideAnimation r1 = com.bumptech.glide.request.animation.NoAnimation.get()
            return r1
        L7:
            if (r2 == 0) goto Le
            com.bumptech.glide.request.animation.GlideAnimation r1 = r0.getFirstResourceAnimation()
            return r1
        Le:
            com.bumptech.glide.request.animation.GlideAnimation r1 = r0.getSecondResourceAnimation()
            return r1
    }
}
