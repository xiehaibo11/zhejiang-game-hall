package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.DashPathEffect;
import android.graphics.Paint;
import android.graphics.Path;
import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public class m extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Paint f4969a;
    private Path b;

    public m(Context context) {
        super(context);
        Paint paint = new Paint(1);
        this.f4969a = paint;
        paint.setColor(-12303292);
        this.f4969a.setStyle(Paint.Style.STROKE);
        this.f4969a.setStrokeWidth(3.0f);
        this.f4969a.setPathEffect(new DashPathEffect(new float[]{10.0f, 5.0f}, 0.0f));
        this.b = new Path();
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        this.b.reset();
        getHeight();
        getWidth();
        this.b.moveTo(0.0f, 0.0f);
        this.b.lineTo(0.0f, getHeight());
        canvas.drawPath(this.b, this.f4969a);
    }
}
