package com.bumptech.glide.request.target;

public class DrawableImageViewTarget extends com.bumptech.glide.request.target.ImageViewTarget<android.graphics.drawable.Drawable> {
    public DrawableImageViewTarget(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected void setResource(android.graphics.drawable.Drawable r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageDrawable(r2)
            return
    }

    @Override
    protected void setResource(android.graphics.drawable.Drawable r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = (android.graphics.drawable.Drawable) r1
            r0.setResource(r1)
            return
    }
}
