package com.bumptech.glide.request.animation;

public class ViewAnimation<R> implements com.bumptech.glide.request.animation.GlideAnimation<R> {
    private final com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory animationFactory;

    interface AnimationFactory {
        android.view.animation.Animation build();
    }

    ViewAnimation(com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory r1) {
            r0 = this;
            r0.<init>()
            r0.animationFactory = r1
            return
    }

    @Override
    public boolean animate(R r1, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r2) {
            r0 = this;
            android.view.View r1 = r2.getView()
            if (r1 == 0) goto L12
            r1.clearAnimation()
            com.bumptech.glide.request.animation.ViewAnimation$AnimationFactory r2 = r0.animationFactory
            android.view.animation.Animation r2 = r2.build()
            r1.startAnimation(r2)
        L12:
            r1 = 0
            return r1
    }
}
