package com.tkay.expressad.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.g.d.c;

/* JADX INFO: loaded from: classes3.dex */
public class TYImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7491a = "at-widget-imageview";
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

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        try {
            if (this.b == null || !this.b.isRecycled()) {
                super.onDraw(canvas);
            } else if (getContext() != null) {
                b.a(getContext()).a(this.c, new AnonymousClass1());
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.widget.TYImageView$1, reason: invalid class name */
    final class AnonymousClass1 implements c {
        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass1() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            TYImageView.this.setImageBitmap(bitmap);
        }
    }

    private void a() {
        if (getContext() != null) {
            b.a(getContext()).a(this.c, new AnonymousClass1());
        }
    }

    @Override // android.widget.ImageView
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
