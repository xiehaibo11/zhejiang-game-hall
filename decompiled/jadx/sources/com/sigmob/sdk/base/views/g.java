package com.sigmob.sdk.base.views;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import com.sigmob.sdk.base.views.n;

/* JADX INFO: loaded from: classes3.dex */
public class g extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Paint f4954a;
    private final float b;

    public g() {
        this(8.0f);
    }

    private g(float f) {
        this.b = f / 2.0f;
        Paint paint = new Paint();
        this.f4954a = paint;
        paint.setColor(-1);
        this.f4954a.setStrokeWidth(f);
        this.f4954a.setStrokeCap(n.a.f);
    }

    @Override // android.graphics.drawable.Drawable
    public void draw(Canvas canvas) {
        int iWidth = getBounds().width();
        int iHeight = getBounds().height();
        float f = this.b;
        float f2 = iHeight;
        float f3 = iWidth;
        canvas.drawLine(f + 0.0f, f2 - f, f3 - f, f + 0.0f, this.f4954a);
        float f4 = this.b;
        canvas.drawLine(f4 + 0.0f, f4 + 0.0f, f3 - f4, f2 - f4, this.f4954a);
    }

    @Override // com.sigmob.sdk.base.views.f, android.graphics.drawable.Drawable
    public /* bridge */ /* synthetic */ int getOpacity() {
        return super.getOpacity();
    }

    @Override // com.sigmob.sdk.base.views.f, android.graphics.drawable.Drawable
    public /* bridge */ /* synthetic */ void setAlpha(int i) {
        super.setAlpha(i);
    }

    @Override // com.sigmob.sdk.base.views.f, android.graphics.drawable.Drawable
    public /* bridge */ /* synthetic */ void setColorFilter(ColorFilter colorFilter) {
        super.setColorFilter(colorFilter);
    }
}
