package com.kwad.components.core.internal.api;

import android.text.TextUtils;
import com.kwad.sdk.api.KsImage;

public class d implements KsImage {
    private int height;
    private String imageUrl;
    private int width;

    public d(int i, int i2, String str) {
        this.width = i;
        this.height = i2;
        this.imageUrl = str;
    }

    public static void register() {
        com.kwad.sdk.service.b.b(KsImage.class, d.class);
    }

    @Override
    public int getHeight() {
        return this.height;
    }

    @Override
    public String getImageUrl() {
        return this.imageUrl;
    }

    @Override
    public int getWidth() {
        return this.width;
    }

    @Override
    public boolean isValid() {
        return this.width > 0 && this.height > 0 && !TextUtils.isEmpty(this.imageUrl);
    }
}
