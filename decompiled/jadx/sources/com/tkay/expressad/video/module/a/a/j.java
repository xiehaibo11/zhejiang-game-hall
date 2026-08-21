package com.tkay.expressad.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public final class j extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7340a;

    public j(ImageView imageView, int i) {
        super(imageView);
        this.f7340a = i;
    }

    @Override // com.tkay.expressad.video.module.a.a.e, com.tkay.expressad.foundation.g.d.c
    public final void a(Bitmap bitmap, String str) {
        Bitmap bitmapA;
        if (bitmap == null) {
            return;
        }
        try {
            if (this.c == null || this.c.get() == null || bitmap.isRecycled() || (bitmapA = com.tkay.expressad.foundation.h.n.a(bitmap, this.f7340a)) == null) {
                return;
            }
            this.c.get().setImageBitmap(bitmapA);
        } catch (Throwable th) {
            if (com.tkay.expressad.b.f6449a) {
                th.printStackTrace();
            }
        }
    }
}
