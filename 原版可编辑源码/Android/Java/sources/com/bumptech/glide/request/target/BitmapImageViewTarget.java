package com.bumptech.glide.request.target;

import android.graphics.Bitmap;
import android.widget.ImageView;

public class BitmapImageViewTarget extends ImageViewTarget<Bitmap> {
    public BitmapImageViewTarget(ImageView imageView) {
        super(imageView);
    }

    @Override
    protected void setResource(Bitmap bitmap) {
        ((ImageView) this.view).setImageBitmap(bitmap);
    }
}
