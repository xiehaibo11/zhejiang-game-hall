package com.bumptech.glide.request.target;

public class BitmapImageViewTarget extends com.bumptech.glide.request.target.ImageViewTarget<android.graphics.Bitmap> {
    public BitmapImageViewTarget(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    protected void setResource(android.graphics.Bitmap r2) {
            r1 = this;
            T extends android.view.View r0 = r1.view
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r0.setImageBitmap(r2)
            return
    }

    @Override
    protected void setResource(android.graphics.Bitmap r1) {
            r0 = this;
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            r0.setResource(r1)
            return
    }
}
