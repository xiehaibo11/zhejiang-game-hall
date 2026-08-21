package com.kwad.sdk.core.imageloader;

public class ImageLoadFactory {
    public static IImageLoader create() {
        return new ImageLoadImpl();
    }
}
