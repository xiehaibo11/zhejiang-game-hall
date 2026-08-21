package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.RectF;
import android.widget.RelativeLayout;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.l.u;

public abstract class BaseEndCardView extends RelativeLayout {
    protected String a;
    protected h b;
    protected i c;
    protected j d;
    private boolean e;

    protected abstract void a();

    public BaseEndCardView(Context context, h hVar, i iVar) {
        super(context);
        this.a = getClass().getSimpleName();
        super.setWillNotDraw(false);
        this.b = hVar;
        this.c = iVar;
        this.d = iVar.m;
    }

    public void setNeedArc(boolean z) {
        this.e = z;
        invalidate();
    }

    @Override
    public void draw(Canvas canvas) {
        try {
            if (this.e) {
                int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
                super.draw(canvas);
                int width = getWidth();
                int height = getHeight();
                int width2 = getWidth();
                int i = width2 / 2;
                float height2 = getHeight();
                int i2 = (int) (1.0f * height2);
                RectF rectF = new RectF();
                rectF.left = i - i2;
                rectF.top = r4 - (i2 * 2);
                rectF.right = i + i2;
                rectF.bottom = height2;
                u.a(canvas, width, height, rectF);
                canvas.restoreToCount(iSaveLayer);
                return;
            }
        } catch (Exception unused) {
        }
        super.draw(canvas);
    }

    private static RectF a(int i, int i2) {
        int i3 = i / 2;
        float f = i2;
        int i4 = (int) (1.0f * f);
        RectF rectF = new RectF();
        rectF.left = i3 - i4;
        rectF.top = i2 - (i4 * 2);
        rectF.right = i3 + i4;
        rectF.bottom = f;
        return rectF;
    }
}
