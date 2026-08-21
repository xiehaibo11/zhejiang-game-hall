package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public class h extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected float f4955a;
    protected boolean b;
    private BitmapShader c;
    private float d;
    private float e;
    private Paint f;
    private Matrix g;
    private RectF h;

    public h(Context context) {
        this(context, null);
    }

    public h(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public h(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = true;
        Paint paint = new Paint();
        this.f = paint;
        paint.setAntiAlias(true);
        this.g = new Matrix();
        this.f4955a = TypedValue.applyDimension(1, 10.0f, context.getResources().getDisplayMetrics());
    }

    private BitmapShader a() {
        BitmapDrawable bitmapDrawable = (BitmapDrawable) getDrawable();
        if (bitmapDrawable == null) {
            return null;
        }
        BitmapShader bitmapShader = new BitmapShader(bitmapDrawable.getBitmap(), Shader.TileMode.CLAMP, Shader.TileMode.CLAMP);
        float fMax = Math.max(this.d / r0.getWidth(), this.d / r0.getHeight());
        this.g.setScale(fMax, fMax);
        bitmapShader.setLocalMatrix(this.g);
        return bitmapShader;
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        BitmapShader bitmapShaderA = a();
        this.c = bitmapShaderA;
        if (bitmapShaderA == null) {
            super.onDraw(canvas);
            return;
        }
        this.f.setShader(bitmapShaderA);
        if (this.b) {
            float f = this.d;
            canvas.drawCircle(f / 2.0f, f / 2.0f, f / 2.0f, this.f);
        } else {
            RectF rectF = this.h;
            float f2 = this.f4955a;
            canvas.drawRoundRect(rectF, f2, f2, this.f);
        }
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        this.d = getMeasuredWidth();
        float measuredHeight = getMeasuredHeight();
        this.e = measuredHeight;
        this.d = Math.min(this.d, measuredHeight);
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.h = new RectF(0.0f, 0.0f, getHeight(), getHeight());
    }

    public void setCircle(boolean z) {
        this.b = z;
    }
}
