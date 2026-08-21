package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public class WaveAnimImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5859a;
    int b;
    private Paint c;
    private a d;

    public WaveAnimImageView(Context context) {
        super(context);
        a();
    }

    public WaveAnimImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a();
    }

    public WaveAnimImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        a();
    }

    private void a() {
        Paint paint = new Paint();
        this.c = paint;
        paint.setAntiAlias(true);
        this.c.setStyle(Paint.Style.STROKE);
        this.c.setColor(Color.parseColor("#FFFFFF"));
    }

    public void setWaveAnimParams(a aVar) {
        this.d = aVar;
        invalidate();
    }

    @Override // android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        this.f5859a = getWidth() / 2;
        this.b = getHeight() / 2;
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        a aVar = this.d;
        if (aVar != null) {
            this.c.setAlpha((int) (aVar.c * 255.0f));
            this.c.setStrokeWidth(this.d.b);
            canvas.drawCircle(this.f5859a, this.b, this.d.f5860a, this.c);
        }
    }

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        float f5860a;
        float b;
        float c;

        public a(float f, float f2, float f3) {
            this.f5860a = f;
            this.b = f2;
            this.c = f3;
        }
    }
}
