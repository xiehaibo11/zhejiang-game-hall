package com.mbridge.msdk.video.module.a.a;

import android.graphics.Bitmap;
import android.widget.ImageView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.y;
import com.mbridge.msdk.foundation.tools.z;

public final class i extends d {
    private int a;

    public i(ImageView imageView, int i) {
        super(imageView);
        this.a = i;
    }

    @Override
    public final void onSuccessLoad(Bitmap bitmap, String str) {
        Bitmap bitmapA;
        try {
            if (bitmap == null) {
                z.d("ImageLoaderListener", "bitmap=null");
            } else {
                if (this.b == null || bitmap.isRecycled() || (bitmapA = y.a(bitmap, 1, this.a)) == null) {
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
