package com.tkay.expressad.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;
import java.lang.ref.WeakReference;

public class e implements com.tkay.expressad.foundation.g.d.c {
    protected static final String b = "ImageLoaderListener";
    private com.tkay.expressad.foundation.d.c a;
    protected WeakReference<ImageView> c;
    private String d;

    @Override
    public void a(String str, String str2) {
    }

    public e(ImageView imageView) {
        this.c = new WeakReference<>(imageView);
    }

    public e(ImageView imageView, com.tkay.expressad.foundation.d.c cVar, String str) {
        this.c = new WeakReference<>(imageView);
        this.a = cVar;
        this.d = str;
    }

    @Override
    public void a(Bitmap bitmap, String str) {
        if (bitmap == null) {
            return;
        }
        try {
            if (this.c == null || this.c.get() == null || bitmap.isRecycled()) {
                return;
            }
            this.c.get().setImageBitmap(bitmap);
            this.c.get().setVisibility(0);
        } catch (Throwable th) {
            if (com.tkay.expressad.b.a) {
                th.printStackTrace();
            }
        }
    }
}
