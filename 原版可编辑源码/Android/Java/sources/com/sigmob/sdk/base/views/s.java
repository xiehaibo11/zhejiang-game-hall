package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.views.n;

public class s extends f {
    private final Paint a;
    private final Paint b;
    private int c;
    private int d;
    private int e;
    private int f;
    private float g;
    private final int h;

    public s(Context context) {
        Paint paint = new Paint();
        this.a = paint;
        paint.setColor(-1);
        this.a.setAlpha(128);
        this.a.setStyle(n.b.e);
        this.a.setAntiAlias(true);
        Paint paint2 = new Paint();
        this.b = paint2;
        paint2.setColor(n.b.f);
        this.b.setAlpha(255);
        this.b.setStyle(n.b.h);
        this.b.setAntiAlias(true);
        this.h = Dips.dipsToIntPixels(4.0f, context);
    }

    private void d() {
        this.e = this.c;
    }

    public void a() {
        this.f = 0;
    }

    public void a(int i) {
        int i2 = this.f;
        if (i >= i2) {
            this.e = i;
            this.f = i;
        } else if (i != 0) {
            SigmobLog.d(String.format("Progress not monotonically increasing: last = %d, current = %d", Integer.valueOf(i2), Integer.valueOf(i)));
            d();
        }
        invalidateSelf();
    }

    public void a(int i, int i2) {
        this.c = i;
        this.d = i2;
        this.g = i2 / i;
    }

    @Deprecated
    public float b() {
        return this.g;
    }

    @Deprecated
    public int c() {
        return this.e;
    }

    @Override
    public void draw(Canvas canvas) {
        canvas.drawRect(getBounds(), this.a);
        canvas.drawRect(getBounds().left, getBounds().top, getBounds().right * (this.e / this.c), getBounds().bottom, this.b);
        int i = this.d;
        if (i <= 0 || i >= this.c) {
            return;
        }
        float f = getBounds().right * this.g;
        canvas.drawRect(f, getBounds().top, f + this.h, getBounds().bottom, this.b);
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
