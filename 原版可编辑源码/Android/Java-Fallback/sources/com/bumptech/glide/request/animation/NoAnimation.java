package com.bumptech.glide.request.animation;

public class NoAnimation<R> implements com.bumptech.glide.request.animation.GlideAnimation<R> {
    private static final com.bumptech.glide.request.animation.NoAnimation<?> NO_ANIMATION = null;
    private static final com.bumptech.glide.request.animation.GlideAnimationFactory<?> NO_ANIMATION_FACTORY = null;

    public static class NoAnimationFactory<R> implements com.bumptech.glide.request.animation.GlideAnimationFactory<R> {
        public NoAnimationFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.request.animation.GlideAnimation<R> build(boolean r1, boolean r2) {
                r0 = this;
                com.bumptech.glide.request.animation.NoAnimation r1 = com.bumptech.glide.request.animation.NoAnimation.access$000()
                return r1
        }
    }

    static {
            com.bumptech.glide.request.animation.NoAnimation r0 = new com.bumptech.glide.request.animation.NoAnimation
            r0.<init>()
            com.bumptech.glide.request.animation.NoAnimation.NO_ANIMATION = r0
            com.bumptech.glide.request.animation.NoAnimation$NoAnimationFactory r0 = new com.bumptech.glide.request.animation.NoAnimation$NoAnimationFactory
            r0.<init>()
            com.bumptech.glide.request.animation.NoAnimation.NO_ANIMATION_FACTORY = r0
            return
    }

    public NoAnimation() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.bumptech.glide.request.animation.NoAnimation access$000() {
            com.bumptech.glide.request.animation.NoAnimation<?> r0 = com.bumptech.glide.request.animation.NoAnimation.NO_ANIMATION
            return r0
    }

    public static <R> com.bumptech.glide.request.animation.GlideAnimation<R> get() {
            com.bumptech.glide.request.animation.NoAnimation<?> r0 = com.bumptech.glide.request.animation.NoAnimation.NO_ANIMATION
            return r0
    }

    public static <R> com.bumptech.glide.request.animation.GlideAnimationFactory<R> getFactory() {
            com.bumptech.glide.request.animation.GlideAnimationFactory<?> r0 = com.bumptech.glide.request.animation.NoAnimation.NO_ANIMATION_FACTORY
            return r0
    }

    @Override
    public boolean animate(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r2) {
            r0 = this;
            r1 = 0
            return r1
    }
}
