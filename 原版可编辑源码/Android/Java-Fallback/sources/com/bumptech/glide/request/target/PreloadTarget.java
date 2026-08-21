package com.bumptech.glide.request.target;

public final class PreloadTarget<Z> extends com.bumptech.glide.request.target.SimpleTarget<Z> {
    private PreloadTarget(int r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static <Z> com.bumptech.glide.request.target.PreloadTarget<Z> obtain(int r1, int r2) {
            com.bumptech.glide.request.target.PreloadTarget r0 = new com.bumptech.glide.request.target.PreloadTarget
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public void onResourceReady(Z r1, com.bumptech.glide.request.animation.GlideAnimation<? super Z> r2) {
            r0 = this;
            com.bumptech.glide.Glide.clear(r0)
            return
    }
}
