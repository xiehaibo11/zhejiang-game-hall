package com.bumptech.glide.request.target;

public abstract class ImageViewTarget<Z> extends com.bumptech.glide.request.target.ViewTarget<android.widget.ImageView, Z> implements com.bumptech.glide.request.animation.GlideAnimation.ViewAdapter {
    public ImageViewTarget(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public android.graphics.drawable.Drawable getCurrentDrawable() {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            android.graphics.drawable.Drawable r0 = r0.getDrawable()
            return r0
    }

    @Override
    public void onLoadCleared(android.graphics.drawable.Drawable r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageDrawable(r2)
            return
    }

    @Override
    public void onLoadFailed(java.lang.Exception r1, android.graphics.drawable.Drawable r2) {
            r0 = this;
            T extends android.view.View r1 = r0.view
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r1.setImageDrawable(r2)
            return
    }

    @Override
    public void onLoadStarted(android.graphics.drawable.Drawable r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageDrawable(r2)
            return
    }

    @Override
    public void onResourceReady(Z r1, com.bumptech.glide.request.animation.GlideAnimation<? super Z> r2) {
            r0 = this;
            if (r2 == 0) goto L8
            boolean r2 = r2.animate(r1, r0)
            if (r2 != 0) goto Lb
        L8:
            r0.setResource(r1)
        Lb:
            return
    }

    @Override
    public void setDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageDrawable(r2)
            return
    }

    protected abstract void setResource(Z r1);
}
