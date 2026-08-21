package com.kwad.sdk.core.imageloader.core.imageaware;

public class ImageViewAware extends com.kwad.sdk.core.imageloader.core.imageaware.ViewAware {
    public ImageViewAware(android.widget.ImageView r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ImageViewAware(android.widget.ImageView r1, boolean r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private static int getImageViewFieldValue(java.lang.Object r1, java.lang.String r2) {
            r0 = 0
            java.lang.Object r1 = com.kwad.sdk.utils.s.f(r1, r2)     // Catch: java.lang.Exception -> L13
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Exception -> L13
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L13
            if (r1 <= 0) goto L13
            r2 = 2147483647(0x7fffffff, float:NaN)
            if (r1 >= r2) goto L13
            r0 = r1
        L13:
            return r0
    }

    @Override
    public int getHeight() {
            r2 = this;
            int r0 = super.getHeight()
            if (r0 > 0) goto L16
            java.lang.ref.Reference<android.view.View> r1 = r2.viewRef
            java.lang.Object r1 = r1.get()
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            if (r1 == 0) goto L16
            java.lang.String r0 = "mMaxHeight"
            int r0 = getImageViewFieldValue(r1, r0)
        L16:
            return r0
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.assist.ViewScaleType getScaleType() {
            r1 = this;
            java.lang.ref.Reference<android.view.View> r0 = r1.viewRef
            java.lang.Object r0 = r0.get()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.fromImageView(r0)
            return r0
        Lf:
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = super.getScaleType()
            return r0
    }

    @Override
    public int getWidth() {
            r2 = this;
            int r0 = super.getWidth()
            if (r0 > 0) goto L16
            java.lang.ref.Reference<android.view.View> r1 = r2.viewRef
            java.lang.Object r1 = r1.get()
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            if (r1 == 0) goto L16
            java.lang.String r0 = "mMaxWidth"
            int r0 = getImageViewFieldValue(r1, r0)
        L16:
            return r0
    }

    @Override
    public android.view.View getWrappedView() {
            r1 = this;
            android.widget.ImageView r0 = r1.getWrappedView()
            return r0
    }

    @Override
    public android.widget.ImageView getWrappedView() {
            r1 = this;
            android.view.View r0 = super.getWrappedView()
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            return r0
    }

    @Override
    protected void setImageBitmapInto(android.graphics.Bitmap r1, android.view.View r2) {
            r0 = this;
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r2.setImageBitmap(r1)
            return
    }

    @Override
    protected void setImageDrawableInto(android.graphics.drawable.Drawable r1, android.view.View r2) {
            r0 = this;
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r2.setImageDrawable(r1)
            boolean r2 = r1 instanceof android.graphics.drawable.AnimationDrawable
            if (r2 == 0) goto Le
            android.graphics.drawable.AnimationDrawable r1 = (android.graphics.drawable.AnimationDrawable) r1
            r1.start()
        Le:
            return
    }
}
