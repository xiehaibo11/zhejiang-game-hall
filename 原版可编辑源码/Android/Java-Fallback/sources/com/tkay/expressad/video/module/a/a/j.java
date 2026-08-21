package com.tkay.expressad.video.module.a.a;

public final class j extends com.tkay.expressad.video.module.a.a.e {
    private int a;

    public j(android.widget.ImageView r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            return
    }

    @Override
    public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L28
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L29
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L28
            boolean r2 = r1.isRecycled()     // Catch: java.lang.Throwable -> L29
            if (r2 != 0) goto L28
            int r2 = r0.a     // Catch: java.lang.Throwable -> L29
            android.graphics.Bitmap r1 = com.tkay.expressad.foundation.h.n.a(r1, r2)     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L28
            java.lang.ref.WeakReference<android.widget.ImageView> r2 = r0.c     // Catch: java.lang.Throwable -> L29
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L29
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> L29
            r2.setImageBitmap(r1)     // Catch: java.lang.Throwable -> L29
        L28:
            return
        L29:
            r1 = move-exception
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L31
            r1.printStackTrace()
        L31:
            return
    }
}
