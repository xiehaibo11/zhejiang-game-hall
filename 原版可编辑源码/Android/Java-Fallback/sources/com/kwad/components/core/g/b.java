package com.kwad.components.core.g;

public final class b extends com.kwad.sdk.widget.KSFrameLayout {
    private android.widget.ImageView Kr;

    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private android.widget.ImageView nV() {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
            r0.setScaleType(r1)
            return r0
    }

    public final void a(java.lang.String r3, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4) {
            r2 = this;
            android.widget.ImageView r0 = r2.Kr
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.widget.ImageView r1 = r2.Kr
            r0.load(r1, r3, r4)
        Lb:
            return
    }

    @Override
    public final void init(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            super.init(r1, r2)
            android.widget.ImageView r1 = r0.nV()
            r0.Kr = r1
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r2 = 17
            r1.gravity = r2
            android.widget.ImageView r2 = r0.Kr
            r0.addView(r2, r1)
            return
    }

    public final void setImageGravity(int r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.Kr
            if (r0 == 0) goto L13
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            if (r0 == 0) goto L13
            r0.gravity = r2
            android.widget.ImageView r2 = r1.Kr
            r2.setLayoutParams(r0)
        L13:
            return
    }

    public final void setImageScaleType(android.widget.ImageView.ScaleType r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.Kr
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.setScaleType(r2)
        L9:
            return
    }
}
