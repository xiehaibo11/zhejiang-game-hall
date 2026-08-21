package com.bumptech.glide.request.animation;

public class ViewPropertyAnimationFactory<R> implements com.bumptech.glide.request.animation.GlideAnimationFactory<R> {
    private com.bumptech.glide.request.animation.ViewPropertyAnimation<R> animation;
    private final com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator animator;

    public ViewPropertyAnimationFactory(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            r0.<init>()
            r0.animator = r1
            return
    }

    @Override
    public com.bumptech.glide.request.animation.GlideAnimation<R> build(boolean r1, boolean r2) {
            r0 = this;
            if (r1 != 0) goto L15
            if (r2 != 0) goto L5
            goto L15
        L5:
            com.bumptech.glide.request.animation.ViewPropertyAnimation<R> r1 = r0.animation
            if (r1 != 0) goto L12
            com.bumptech.glide.request.animation.ViewPropertyAnimation r1 = new com.bumptech.glide.request.animation.ViewPropertyAnimation
            com.bumptech.glide.request.animation.ViewPropertyAnimation$Animator r2 = r0.animator
            r1.<init>(r2)
            r0.animation = r1
        L12:
            com.bumptech.glide.request.animation.ViewPropertyAnimation<R> r1 = r0.animation
            return r1
        L15:
            com.bumptech.glide.request.animation.GlideAnimation r1 = com.bumptech.glide.request.animation.NoAnimation.get()
            return r1
    }
}
