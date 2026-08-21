package com.tkay.expressad.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class e implements com.tkay.expressad.foundation.g.d.c {
    protected static final String b = "ImageLoaderListener";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.tkay.expressad.foundation.d.c f7338a;
    protected WeakReference<ImageView> c;
    private String d;

    @Override // com.tkay.expressad.foundation.g.d.c
    public void a(String str, String str2) {
    }

    public e(ImageView imageView) {
        this.c = new WeakReference<>(imageView);
    }

    public e(ImageView imageView, com.tkay.expressad.foundation.d.c cVar, String str) {
        this.c = new WeakReference<>(imageView);
        this.f7338a = cVar;
        this.d = str;
    }

    @Override // com.tkay.expressad.foundation.g.d.c
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
            if (com.tkay.expressad.b.f6449a) {
                th.printStackTrace();
            }
        }
    }
}
