package com.bumptech.glide.request.animation;

public class ViewAnimationFactory<R> implements com.bumptech.glide.request.animation.GlideAnimationFactory<R> {
    private final com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory animationFactory;
    private com.bumptech.glide.request.animation.GlideAnimation<R> glideAnimation;

    private static class ConcreteAnimationFactory implements com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory {
        private final android.view.animation.Animation animation;

        public ConcreteAnimationFactory(android.view.animation.Animation r1) {
                r0 = this;
                r0.<init>()
                r0.animation = r1
                return
        }

        @Override
        public android.view.animation.Animation build() {
                r1 = this;
                android.view.animation.Animation r0 = r1.animation
                return r0
        }
    }

    private static class ResourceAnimationFactory implements com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory {
        private final int animationId;
        private final android.content.Context context;

        public ResourceAnimationFactory(android.content.Context r1, int r2) {
                r0 = this;
                r0.<init>()
                android.content.Context r1 = r1.getApplicationContext()
                r0.context = r1
                r0.animationId = r2
                return
        }

        @Override
        public android.view.animation.Animation build() {
                r2 = this;
                android.content.Context r0 = r2.context
                int r1 = r2.animationId
                android.view.animation.Animation r0 = android.view.animation.AnimationUtils.loadAnimation(r0, r1)
                return r0
        }
    }

    public ViewAnimationFactory(android.content.Context r2, int r3) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory$ResourceAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory$ResourceAnimationFactory
            r0.<init>(r2, r3)
            r1.<init>(r0)
            return
    }

    public ViewAnimationFactory(android.view.animation.Animation r2) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory$ConcreteAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory$ConcreteAnimationFactory
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    ViewAnimationFactory(com.bumptech.glide.request.animation.ViewAnimation.AnimationFactory r1) {
            r0 = this;
            r0.<init>()
            r0.animationFactory = r1
            return
    }

    @Override
    public com.bumptech.glide.request.animation.GlideAnimation<R> build(boolean r1, boolean r2) {
            r0 = this;
            if (r1 != 0) goto L15
            if (r2 != 0) goto L5
            goto L15
        L5:
            com.bumptech.glide.request.animation.GlideAnimation<R> r1 = r0.glideAnimation
            if (r1 != 0) goto L12
            com.bumptech.glide.request.animation.ViewAnimation r1 = new com.bumptech.glide.request.animation.ViewAnimation
            com.bumptech.glide.request.animation.ViewAnimation$AnimationFactory r2 = r0.animationFactory
            r1.<init>(r2)
            r0.glideAnimation = r1
        L12:
            com.bumptech.glide.request.animation.GlideAnimation<R> r1 = r0.glideAnimation
            return r1
        L15:
            com.bumptech.glide.request.animation.GlideAnimation r1 = com.bumptech.glide.request.animation.NoAnimation.get()
            return r1
    }
}
