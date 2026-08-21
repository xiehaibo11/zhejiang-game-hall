package com.tkay.expressad.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;

public final class j extends e {
    private int a;

    public j(ImageView imageView, int i) {
        super(imageView);
        this.a = i;
    }

    @Override
    public final void a(Bitmap bitmap, String str) {
        Bitmap bitmapA;
        if (bitmap == null) {
            return;
        }
        try {
            if (this.c == null || this.c.get() == null || bitmap.isRecycled() || (bitmapA = com.tkay.expressad.foundation.h.n.a(bitmap, this.a)) == null) {
                return;
            }
            this.c.get().setImageBitmap(bitmapA);
        } catch (Throwable th) {
            if (com.tkay.expressad.b.a) {
                th.printStackTrace();
            }
        }
    }
}
