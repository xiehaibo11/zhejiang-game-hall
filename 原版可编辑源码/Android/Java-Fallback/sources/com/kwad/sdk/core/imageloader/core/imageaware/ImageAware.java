package com.kwad.sdk.core.imageloader.core.imageaware;

public interface ImageAware {
    int getHeight();

    int getId();

    com.kwad.sdk.core.imageloader.core.assist.ViewScaleType getScaleType();

    int getWidth();

    android.view.View getWrappedView();

    boolean isCollected();

    boolean setImageBitmap(android.graphics.Bitmap r1);

    boolean setImageDrawable(android.graphics.drawable.Drawable r1);
}
