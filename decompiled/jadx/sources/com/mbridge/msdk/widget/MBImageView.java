package com.mbridge.msdk.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: loaded from: classes3.dex */
public class MBImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Bitmap f4412a;
    private String b;

    public MBImageView(Context context) {
        super(context);
        this.f4412a = null;
    }

    public MBImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f4412a = null;
    }

    public MBImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f4412a = null;
    }

    public void setImageUrl(String str) {
        this.b = str;
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        Bitmap bitmap = this.f4412a;
        if (bitmap != null && bitmap.isRecycled()) {
            z.d("mb-widget-imageview", "onDraw bitmap recycled");
            if (getContext() != null) {
                b.a(getContext()).a(this.b, new c() { // from class: com.mbridge.msdk.widget.MBImageView.1
                    @Override // com.mbridge.msdk.foundation.same.c.c
                    public final void onSuccessLoad(Bitmap bitmap2, String str) {
                        MBImageView.this.setImageBitmap(bitmap2);
                    }

                    @Override // com.mbridge.msdk.foundation.same.c.c
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

    @Override // android.widget.ImageView
    public void setImageBitmap(Bitmap bitmap) {
        this.f4412a = bitmap;
        if (bitmap != null && bitmap.isRecycled()) {
            this.f4412a = null;
            super.setImageBitmap(null);
            z.d("mb-widget-imageview", "setImageBitmap recycled");
            return;
        }
        super.setImageBitmap(bitmap);
    }
}
