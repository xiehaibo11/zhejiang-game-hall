package com.bumptech.glide.request.animation;

public interface GlideAnimation<R> {

    public interface ViewAdapter {
        android.graphics.drawable.Drawable getCurrentDrawable();

        android.view.View getView();

        void setDrawable(android.graphics.drawable.Drawable r1);
    }

    boolean animate(R r1, com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter r2);
}
