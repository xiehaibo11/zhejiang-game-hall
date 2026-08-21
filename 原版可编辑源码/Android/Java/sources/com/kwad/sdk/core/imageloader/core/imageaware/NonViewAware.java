package com.kwad.sdk.core.imageloader.core.imageaware;

import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.view.View;
import com.kwad.sdk.core.imageloader.core.assist.ImageSize;
import com.kwad.sdk.core.imageloader.core.assist.ViewScaleType;

public class NonViewAware implements ImageAware {
    protected final ImageSize imageSize;
    protected final String imageUri;
    protected final ViewScaleType scaleType;

    public NonViewAware(ImageSize imageSize, ViewScaleType viewScaleType) {
        this(null, imageSize, viewScaleType);
    }

    public NonViewAware(String str, ImageSize imageSize, ViewScaleType viewScaleType) {
        if (imageSize == null) {
            throw new IllegalArgumentException("imageSize must not be null");
        }
        if (viewScaleType == null) {
            throw new IllegalArgumentException("scaleType must not be null");
        }
        this.imageUri = str;
        this.imageSize = imageSize;
        this.scaleType = viewScaleType;
    }

    @Override
    public int getHeight() {
        return this.imageSize.getHeight();
    }

    @Override
    public int getId() {
        return TextUtils.isEmpty(this.imageUri) ? super.hashCode() : this.imageUri.hashCode();
    }

    @Override
    public ViewScaleType getScaleType() {
        return this.scaleType;
    }

    @Override
    public int getWidth() {
        return this.imageSize.getWidth();
    }

    @Override
    public View getWrappedView() {
        return null;
    }

    @Override
    public boolean isCollected() {
        return false;
    }

    @Override
    public boolean setImageBitmap(Bitmap bitmap) {
        return true;
    }

    @Override
    public boolean setImageDrawable(Drawable drawable) {
        return true;
    }
}
