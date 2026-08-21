package com.tkay.expressad.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.g.d.c;

public class TYImageView extends ImageView {
    private static final String a = "at-widget-imageview";
    private Bitmap b;
    private String c;

    public TYImageView(Context context) {
        super(context);
        this.b = null;
    }

    public TYImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = null;
    }

    public TYImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = null;
    }

    public void setImageUrl(String str) {
        this.c = str;
    }

    @Override
    protected void onDraw(Canvas canvas) {
        try {
            if (this.b == null || !this.b.isRecycled()) {
                super.onDraw(canvas);
            } else if (getContext() != null) {
                b.a(getContext()).a(this.c, new 1());
            }
        } catch (Throwable unused) {
        }
    }

    final class 1 implements c {
        @Override
        public final void a(String str, String str2) {
        }

        1() {
        }

        @Override
        public final void a(Bitmap bitmap, String str) {
            TYImageView.this.setImageBitmap(bitmap);
        }
    }

    private void a() {
        if (getContext() != null) {
            b.a(getContext()).a(this.c, new 1());
        }
    }

    @Override
    public void setImageBitmap(Bitmap bitmap) {
        this.b = bitmap;
        if (bitmap != null && bitmap.isRecycled()) {
            this.b = null;
            super.setImageBitmap(null);
        } else {
            super.setImageBitmap(bitmap);
        }
    }
}
