package com.mbridge.msdk.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.z;

public class MBImageView extends ImageView {
    private Bitmap a;
    private String b;

    public MBImageView(Context context) {
        super(context);
        this.a = null;
    }

    public MBImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = null;
    }

    public MBImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = null;
    }

    public void setImageUrl(String str) {
        this.b = str;
    }

    @Override
    protected void onDraw(Canvas canvas) {
        Bitmap bitmap = this.a;
        if (bitmap != null && bitmap.isRecycled()) {
            z.d("mb-widget-imageview", "onDraw bitmap recycled");
            if (getContext() != null) {
                b.a(getContext()).a(this.b, new c() {
                    @Override
                    public final void onSuccessLoad(Bitmap bitmap2, String str) {
                        MBImageView.this.setImageBitmap(bitmap2);
                    }

                    @Override
                    public final void onFailedLoad(String str, String str2) {
                        z.d("mb-widget-imageview", str2 + " load failed:" + str);
                    }
                });
                return;
            }
            return;
        }
        super.onDraw(canvas);
    }

    @Override
    public void setImageBitmap(Bitmap bitmap) {
        this.a = bitmap;
        if (bitmap != null && bitmap.isRecycled()) {
            this.a = null;
            super.setImageBitmap(null);
            z.d("mb-widget-imageview", "setImageBitmap recycled");
            return;
        }
        super.setImageBitmap(bitmap);
    }
}
