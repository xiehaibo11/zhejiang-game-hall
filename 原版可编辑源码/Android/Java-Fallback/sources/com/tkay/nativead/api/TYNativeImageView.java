package com.tkay.nativead.api;

public class TYNativeImageView extends android.widget.ImageView {
    public static final java.lang.String TAG = null;
    java.lang.String mImageUrl;


    static {
            java.lang.Class<com.tkay.nativead.api.TYNativeImageView> r0 = com.tkay.nativead.api.TYNativeImageView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.nativead.api.TYNativeImageView.TAG = r0
            return
    }

    public TYNativeImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TYNativeImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TYNativeImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void dispatchDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.dispatchDraw(r1)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.onDraw(r1)     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public void setImage(java.lang.String r3) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            if (r0 == 0) goto Le
            int r1 = r0.width
            int r0 = r0.height
            r2.setImage(r3, r1, r0)
            return
        Le:
            r0 = -1
            r2.setImage(r3, r0, r0)
            return
    }

    public void setImage(java.lang.String r5, int r6, int r7) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Le
            java.lang.String r5 = com.tkay.nativead.api.TYNativeImageView.TAG
            java.lang.String r6 = "load: url is empty!"
            android.util.Log.e(r5, r6)
            return
        Le:
            r4.mImageUrl = r5
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r4)
            android.content.Context r1 = r4.getContext()
            com.tkay.core.common.res.b r1 = com.tkay.core.common.res.b.a(r1)
            com.tkay.core.common.res.e r2 = new com.tkay.core.common.res.e
            r3 = 2
            r2.<init>(r3, r5)
            com.tkay.nativead.api.TYNativeImageView$1 r5 = new com.tkay.nativead.api.TYNativeImageView$1
            r5.<init>(r4, r0)
            r1.a(r2, r6, r7, r5)
            return
    }
}
