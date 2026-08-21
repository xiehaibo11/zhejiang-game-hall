package com.kwad.components.core.g;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.sdk.core.imageloader.ImageLoaderProxy;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends KSFrameLayout {
    private ImageView Kr;

    public b(Context context) {
        super(context);
    }

    private ImageView nV() {
        ImageView imageView = new ImageView(getContext());
        imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        return imageView;
    }

    public final void a(String str, ImageLoadingListener imageLoadingListener) {
        if (this.Kr != null) {
            ImageLoaderProxy.INSTANCE.load(this.Kr, str, imageLoadingListener);
        }
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout
    public final void init(Context context, AttributeSet attributeSet) {
        super.init(context, attributeSet);
        this.Kr = nV();
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        layoutParams.gravity = 17;
        addView(this.Kr, layoutParams);
    }

    public final void setImageGravity(int i) {
        FrameLayout.LayoutParams layoutParams;
        ImageView imageView = this.Kr;
        if (imageView == null || (layoutParams = (FrameLayout.LayoutParams) imageView.getLayoutParams()) == null) {
            return;
        }
        layoutParams.gravity = i;
        this.Kr.setLayoutParams(layoutParams);
    }

    public final void setImageScaleType(ImageView.ScaleType scaleType) {
        ImageView imageView = this.Kr;
        if (imageView == null || scaleType == null) {
            return;
        }
        imageView.setScaleType(scaleType);
    }
}
