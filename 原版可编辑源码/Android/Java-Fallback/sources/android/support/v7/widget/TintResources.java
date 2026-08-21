package android.support.v7.widget;

class TintResources extends android.support.v7.widget.ResourcesWrapper {
    private final java.lang.ref.WeakReference<android.content.Context> mContextRef;

    public TintResources(android.content.Context r1, android.content.res.Resources r2) {
            r0 = this;
            r0.<init>(r2)
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r1)
            r0.mContextRef = r2
            return
    }

    @Override
    public android.graphics.drawable.Drawable getDrawable(int r3) throws android.content.res.Resources.NotFoundException {
            r2 = this;
            android.graphics.drawable.Drawable r0 = super.getDrawable(r3)
            java.lang.ref.WeakReference<android.content.Context> r1 = r2.mContextRef
            java.lang.Object r1 = r1.get()
            android.content.Context r1 = (android.content.Context) r1
            if (r0 == 0) goto L16
            if (r1 == 0) goto L16
            android.support.v7.widget.AppCompatDrawableManager.get()
            android.support.v7.widget.AppCompatDrawableManager.tintDrawableUsingColorFilter(r1, r3, r0)
        L16:
            return r0
    }
}
