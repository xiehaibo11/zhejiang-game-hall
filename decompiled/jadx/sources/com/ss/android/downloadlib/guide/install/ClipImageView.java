package com.ss.android.downloadlib.guide.install;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PaintFlagsDrawFilter;
import android.graphics.Path;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public class ClipImageView extends ImageView {
    private Path df;
    private float[] pp;
    private Paint pt;
    private RectF q;
    private boolean rg;

    public ClipImageView(Context context) {
        super(context);
        this.rg = true;
        rg(context);
    }

    public ClipImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.rg = true;
        rg(context);
    }

    public ClipImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.rg = true;
        rg(context);
    }

    protected void rg(Context context) {
        this.df = new Path();
        this.q = new RectF();
    }

    public void setRadius(float[] fArr) {
        if (fArr == null || fArr.length != 8) {
            return;
        }
        this.pp = fArr;
    }

    @Override // android.view.View
    public void setBackgroundColor(int i) {
        Paint paint = new Paint(1);
        this.pt = paint;
        paint.setStyle(Paint.Style.FILL);
        this.pt.setColor(i);
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        if (this.rg) {
            this.df.reset();
            this.q.set(0.0f, 0.0f, getWidth(), getHeight());
            float[] fArr = this.pp;
            if (fArr != null) {
                this.df.addRoundRect(this.q, fArr, Path.Direction.CW);
            }
            canvas.setDrawFilter(new PaintFlagsDrawFilter(0, 3));
            canvas.clipPath(this.df);
            Paint paint = this.pt;
            if (paint != null) {
                canvas.drawPath(this.df, paint);
            }
        }
        super.onDraw(canvas);
    }

    public void setRoundRadius(int i) {
        if (i > 0) {
            float f = i;
            setRadius(new float[]{f, f, f, f, f, f, f, f});
        }
    }

    public void setClip(boolean z) {
        this.rg = z;
    }
}
