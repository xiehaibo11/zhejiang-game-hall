package com.kwad.sdk.core.imageloader.core.imageaware;

public abstract class ViewAware implements com.kwad.sdk.core.imageloader.core.imageaware.ImageAware {
    public static final java.lang.String WARN_CANT_SET_BITMAP = "Can't set a bitmap into view. You should call ImageLoader on UI thread for it.";
    public static final java.lang.String WARN_CANT_SET_DRAWABLE = "Can't set a drawable into view. You should call ImageLoader on UI thread for it.";
    protected boolean checkActualViewSize;
    protected java.lang.ref.Reference<android.view.View> viewRef;

    public ViewAware(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    public ViewAware(android.view.View r2, boolean r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto Lf
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.viewRef = r0
            r1.checkActualViewSize = r3
            return
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "view must not be null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public int getHeight() {
            r5 = this;
            java.lang.ref.Reference<android.view.View> r0 = r5.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            r1 = 0
            if (r0 == 0) goto L24
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            boolean r3 = r5.checkActualViewSize
            if (r3 == 0) goto L1e
            if (r2 == 0) goto L1e
            int r3 = r2.height
            r4 = -2
            if (r3 == r4) goto L1e
            int r1 = r0.getHeight()
        L1e:
            if (r1 > 0) goto L24
            if (r2 == 0) goto L24
            int r1 = r2.height
        L24:
            return r1
    }

    @Override
    public int getId() {
            r1 = this;
            java.lang.ref.Reference<android.view.View> r0 = r1.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto Lf
            int r0 = super.hashCode()
            return r0
        Lf:
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public com.kwad.sdk.core.imageloader.core.assist.ViewScaleType getScaleType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r0 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP
            return r0
    }

    @Override
    public int getWidth() {
            r5 = this;
            java.lang.ref.Reference<android.view.View> r0 = r5.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            r1 = 0
            if (r0 == 0) goto L24
            android.view.ViewGroup$LayoutParams r2 = r0.getLayoutParams()
            boolean r3 = r5.checkActualViewSize
            if (r3 == 0) goto L1e
            if (r2 == 0) goto L1e
            int r3 = r2.width
            r4 = -2
            if (r3 == r4) goto L1e
            int r1 = r0.getWidth()
        L1e:
            if (r1 > 0) goto L24
            if (r2 == 0) goto L24
            int r1 = r2.width
        L24:
            return r1
    }

    @Override
    public android.view.View getWrappedView() {
            r1 = this;
            java.lang.ref.Reference<android.view.View> r0 = r1.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            return r0
    }

    @Override
    public boolean isCollected() {
            r1 = this;
            java.lang.ref.Reference<android.view.View> r0 = r1.viewRef
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    @Override
    public boolean setImageBitmap(android.graphics.Bitmap r4) {
            r3 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r2 = 0
            if (r0 != r1) goto L1a
            java.lang.ref.Reference<android.view.View> r0 = r3.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L21
            r3.setImageBitmapInto(r4, r0)
            r4 = 1
            return r4
        L1a:
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r0 = "Can't set a bitmap into view. You should call ImageLoader on UI thread for it."
            com.kwad.sdk.core.imageloader.utils.L.w(r0, r4)
        L21:
            return r2
    }

    protected abstract void setImageBitmapInto(android.graphics.Bitmap r1, android.view.View r2);

    @Override
    public boolean setImageDrawable(android.graphics.drawable.Drawable r4) {
            r3 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r2 = 0
            if (r0 != r1) goto L1a
            java.lang.ref.Reference<android.view.View> r0 = r3.viewRef
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L21
            r3.setImageDrawableInto(r4, r0)
            r4 = 1
            return r4
        L1a:
            java.lang.Object[] r4 = new java.lang.Object[r2]
            java.lang.String r0 = "Can't set a drawable into view. You should call ImageLoader on UI thread for it."
            com.kwad.sdk.core.imageloader.utils.L.w(r0, r4)
        L21:
            return r2
    }

    protected abstract void setImageDrawableInto(android.graphics.drawable.Drawable r1, android.view.View r2);
}
