package com.tkay.basead.ui;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.widget.FrameLayout;
import com.tkay.core.common.l.h;

/* JADX INFO: loaded from: classes3.dex */
public class SpreadAnimLayout extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Paint f5849a;
    private ValueAnimator b;
    private a c;
    private RectF d;
    private RectF e;
    private int f;
    private int g;
    private int h;
    private Paint i;
    private boolean j;
    private boolean k;

    public SpreadAnimLayout(Context context) {
        this(context, null, 0);
    }

    public SpreadAnimLayout(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public SpreadAnimLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.j = true;
        setWillNotDraw(false);
        int color = getResources().getColor(h.a(context, "color_spread", "color"));
        this.g = getResources().getDimensionPixelSize(h.a(getContext(), "myoffer_spread_max_distance_normal", "dimen"));
        this.f = h.a(context, 4.0f);
        this.h = 1000;
        Paint paint = new Paint();
        this.f5849a = paint;
        paint.setAntiAlias(true);
        this.f5849a.setAlpha(255);
        this.f5849a.setColor(color);
        Paint paint2 = new Paint(1);
        this.i = paint2;
        paint2.setColor(-1);
        this.i.setStyle(Paint.Style.FILL);
        this.i.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OUT));
    }

    @Override // android.widget.FrameLayout, android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        int i3 = this.g;
        setPadding(i3, i3, i3, i3);
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
    }

    @Override // android.view.View
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        if (this.j) {
            if (i == 0) {
                post(new Runnable() { // from class: com.tkay.basead.ui.SpreadAnimLayout.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        SpreadAnimLayout.this.startSpreadAnimation();
                    }
                });
                return;
            }
            ValueAnimator valueAnimator = this.b;
            if (valueAnimator != null) {
                valueAnimator.end();
            }
        }
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        if (this.j && this.k) {
            int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
            this.f5849a.setAlpha(this.c.b);
            RectF rectF = this.c.f5852a;
            int i = this.f;
            canvas.drawRoundRect(rectF, i, i, this.f5849a);
            RectF rectF2 = this.d;
            int i2 = this.f;
            canvas.drawRoundRect(rectF2, i2, i2, this.i);
            canvas.restoreToCount(iSaveLayer);
            super.draw(canvas);
            return;
        }
        super.draw(canvas);
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        RectF f5852a;
        int b;

        a() {
        }
    }

    public void startSpreadAnimation() {
        View childAt = getChildAt(0);
        if (childAt == null) {
            return;
        }
        this.j = true;
        if (!this.k) {
            this.d = new RectF(childAt.getLeft(), childAt.getTop(), childAt.getRight(), childAt.getBottom());
            this.e = new RectF(this.d);
            a aVar = new a();
            this.c = aVar;
            aVar.b = 255;
            this.c.f5852a = this.e;
            this.g = Math.min(this.g, Math.min((getWidth() - childAt.getWidth()) / 2, (getHeight() - childAt.getHeight()) / 2));
            ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
            this.b = valueAnimatorOfFloat;
            valueAnimatorOfFloat.setDuration(this.h);
            this.b.setRepeatMode(1);
            this.b.setRepeatCount(-1);
            this.b.setInterpolator(new AccelerateDecelerateInterpolator());
            this.b.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.tkay.basead.ui.SpreadAnimLayout.2
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                    SpreadAnimLayout.this.c.b = (int) ((1.0f - fFloatValue) * 255.0f);
                    SpreadAnimLayout.this.c.f5852a.set(SpreadAnimLayout.this.d);
                    float f = -((int) (SpreadAnimLayout.this.g * fFloatValue));
                    SpreadAnimLayout.this.c.f5852a.inset(f, f);
                    SpreadAnimLayout.this.invalidate();
                }
            });
            this.k = true;
        }
        this.b.start();
    }

    public void setMaxSpreadDistance(int i) {
        this.g = i;
    }
}
