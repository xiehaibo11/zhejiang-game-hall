package com.mbridge.msdk.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.y;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: RoundedImageLoaderListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class i extends d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4370a;

    public i(ImageView imageView, int i) {
        super(imageView);
        this.f4370a = i;
    }

    @Override // com.mbridge.msdk.video.module.a.a.d, com.mbridge.msdk.foundation.same.c.c
    public final void onSuccessLoad(Bitmap bitmap, String str) {
        Bitmap bitmapA;
        try {
            if (bitmap == null) {
                z.d("ImageLoaderListener", "bitmap=null");
            } else {
                if (this.b == null || bitmap.isRecycled() || (bitmapA = y.a(bitmap, 1, this.f4370a)) == null) {
                    return;
                }
                this.b.setImageBitmap(bitmapA);
            }
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }
}
