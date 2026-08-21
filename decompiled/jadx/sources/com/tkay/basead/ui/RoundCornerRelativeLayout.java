package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.widget.RelativeLayout;
import com.tkay.core.common.l.h;

/* JADX INFO: loaded from: classes3.dex */
public class RoundCornerRelativeLayout extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Path f5825a;
    private Paint b;
    private RectF c;
    private float d;

    public RoundCornerRelativeLayout(Context context) {
        super(context);
        this.d = 0.0f;
        a();
    }

    public RoundCornerRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.d = 0.0f;
        a();
    }

    public RoundCornerRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.d = 0.0f;
        a();
    }

    public RoundCornerRelativeLayout(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.d = 0.0f;
        a();
    }

    private void a() {
        this.d = h.a(getContext(), 12.0f);
        this.f5825a = new Path();
        this.b = new Paint(1);
        this.c = new RectF();
        this.b.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_IN));
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.c.set(0.0f, 0.0f, i, i2);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchDraw(Canvas canvas) {
        canvas.save();
        this.f5825a.reset();
        Path path = this.f5825a;
        RectF rectF = this.c;
        float f = this.d;
        path.addRoundRect(rectF, f, f, Path.Direction.CW);
        canvas.clipPath(this.f5825a);
        super.dispatchDraw(canvas);
        canvas.restore();
    }

    private Path b() {
        this.f5825a.reset();
        Path path = this.f5825a;
        RectF rectF = this.c;
        float f = this.d;
        path.addRoundRect(rectF, f, f, Path.Direction.CW);
        return this.f5825a;
    }
}
