package com.bumptech.glide.request.animation;

public class ViewPropertyAnimation<R> implements com.bumptech.glide.request.animation.GlideAnimation<R> {
    private final com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator animator;

    public interface Animator {
        void animate(android.view.View r1);
    }

    public ViewPropertyAnimation(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            r0.<init>()
            r0.animator = r1
            return
    }

    @Override
    public boolean animate(R r1, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r2) {
            r0 = this;
            android.view.View r1 = r2.getView()
            if (r1 == 0) goto Lf
            com.bumptech.glide.request.animation.ViewPropertyAnimation$Animator r1 = r0.animator
            android.view.View r2 = r2.getView()
            r1.animate(r2)
        Lf:
            r1 = 0
            return r1
    }
}
