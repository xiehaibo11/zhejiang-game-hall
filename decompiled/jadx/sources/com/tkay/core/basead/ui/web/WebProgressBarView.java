package com.tkay.core.basead.ui.web;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public class WebProgressBarView extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5993a;
    int b;
    Paint c;

    public WebProgressBarView(Context context) {
        super(context);
        a();
    }

    public WebProgressBarView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a();
    }

    public WebProgressBarView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        a();
    }

    private void a() {
        this.b = -14575885;
        Paint paint = new Paint();
        this.c = paint;
        paint.setColor(this.b);
        this.c.setAntiAlias(true);
        this.c.setDither(true);
        this.f5993a = 0;
        setBackgroundColor(ViewCompat.MEASURED_SIZE_MASK);
    }

    public void setProgress(int i) {
        this.f5993a = i;
        postInvalidate();
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.save();
        canvas.drawRect(0.0f, 0.0f, (getWidth() * this.f5993a) / 100, getHeight(), this.c);
        canvas.restore();
    }
}
