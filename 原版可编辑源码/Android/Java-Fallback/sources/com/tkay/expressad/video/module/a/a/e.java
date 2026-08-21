package com.tkay.expressad.video.module.a.a;

public class e implements com.tkay.expressad.foundation.g.d.c {
    protected static final java.lang.String b = "ImageLoaderListener";
    private com.tkay.expressad.foundation.d.c a;
    protected java.lang.ref.WeakReference<android.widget.ImageView> c;
    private java.lang.String d;

    public e(android.widget.ImageView r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.c = r0
            return
    }

    public e(android.widget.ImageView r2, com.tkay.expressad.foundation.d.c r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.c = r0
            r1.a = r3
            r1.d = r4
            return
    }

    @Override
    public void a(android.graphics.Bitmap r1, java.lang.String r2) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L2c
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L2c
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L2d
            if (r2 != 0) goto L2c
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L2d
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> L2d
            r2.setImageBitmap(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.ref.WeakReference<android.widget.ImageView> r1 = r0.c     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Throwable -> L2d
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L2d
        L2c:
            return
        L2d:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L35
            r1.printStackTrace()
        L35:
            return
    }

    @Override
    public void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            return
    }
}
