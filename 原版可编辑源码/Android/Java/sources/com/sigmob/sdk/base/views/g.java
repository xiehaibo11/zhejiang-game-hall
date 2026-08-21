package com.sigmob.sdk.base.views;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import com.sigmob.sdk.base.views.n;

public class g extends f {
    private final Paint a;
    private final float b;

    public g() {
        this(8.0f);
    }

    private g(float f) {
        this.b = f / 2.0f;
        Paint paint = new Paint();
        this.a = paint;
        paint.setColor(-1);
        this.a.setStrokeWidth(f);
        this.a.setStrokeCap(n.a.f);
    }

    @Override
    public void draw(Canvas canvas) {
        int iWidth = getBounds().width();
        int iHeight = getBounds().height();
        float f = this.b;
        float f2 = iHeight;
        float f3 = iWidth;
        canvas.drawLine(f + 0.0f, f2 - f, f3 - f, f + 0.0f, this.a);
        float f4 = this.b;
        canvas.drawLine(f4 + 0.0f, f4 + 0.0f, f3 - f4, f2 - f4, this.a);
    }

    @Override
    public int getOpacity() {
        return super.getOpacity();
    }

    @Override
    public void setAlpha(int i) {
        super.setAlpha(i);
    }

    @Override
    public void setColorFilter(ColorFilter colorFilter) {
        super.setColorFilter(colorFilter);
    }
}
