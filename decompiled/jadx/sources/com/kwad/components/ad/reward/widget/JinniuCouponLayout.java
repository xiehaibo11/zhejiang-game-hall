package com.kwad.components.ad.reward.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.util.AttributeSet;
import android.view.View;
import android.widget.LinearLayout;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public class JinniuCouponLayout extends LinearLayout {
    private float Ap;
    private Rect Aq;
    private RectF Ar;
    private RectF As;
    private RectF At;
    private RectF Au;
    private Path Av;
    private int endColor;
    private Paint mPaint;
    private float mRadius;
    private int startColor;

    public JinniuCouponLayout(Context context) {
        super(context);
        this.mPaint = new Paint();
        this.Ap = 4.0f;
        this.mRadius = 10.0f;
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.As = new RectF();
        this.At = new RectF();
        this.Au = new RectF();
        this.Av = new Path();
        this.startColor = Color.parseColor("#FFFE3666");
        this.endColor = Color.parseColor("#FFFD7200");
        a(context, null, 0);
    }

    public JinniuCouponLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mPaint = new Paint();
        this.Ap = 4.0f;
        this.mRadius = 10.0f;
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.As = new RectF();
        this.At = new RectF();
        this.Au = new RectF();
        this.Av = new Path();
        this.startColor = Color.parseColor("#FFFE3666");
        this.endColor = Color.parseColor("#FFFD7200");
        a(context, attributeSet, 0);
    }

    public JinniuCouponLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mPaint = new Paint();
        this.Ap = 4.0f;
        this.mRadius = 10.0f;
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.As = new RectF();
        this.At = new RectF();
        this.Au = new RectF();
        this.Av = new Path();
        this.startColor = Color.parseColor("#FFFE3666");
        this.endColor = Color.parseColor("#FFFD7200");
        a(context, attributeSet, i);
    }

    public JinniuCouponLayout(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.mPaint = new Paint();
        this.Ap = 4.0f;
        this.mRadius = 10.0f;
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.As = new RectF();
        this.At = new RectF();
        this.Au = new RectF();
        this.Av = new Path();
        this.startColor = Color.parseColor("#FFFE3666");
        this.endColor = Color.parseColor("#FFFD7200");
        a(context, attributeSet, i);
    }

    private void a(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_JinniuCouponLayout, i, 0);
        this.mRadius = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_JinniuCouponLayout_ksad_outerRadius, 4.0f);
        this.Ap = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_JinniuCouponLayout_ksad_verticalRadius, 10.0f);
        typedArrayObtainStyledAttributes.recycle();
        this.mPaint.setAntiAlias(true);
    }

    private void a(Path path, RectF rectF, RectF rectF2, RectF rectF3) {
        path.reset();
        path.moveTo(this.Ar.left, this.Ar.top + this.mRadius);
        this.Au.set(rectF);
        RectF rectF4 = this.Au;
        rectF4.bottom = rectF4.top + (this.mRadius * 2.0f);
        RectF rectF5 = this.Au;
        rectF5.right = rectF5.left + (this.mRadius * 2.0f);
        path.arcTo(this.Au, 180.0f, 90.0f);
        path.lineTo(rectF2.left, rectF2.top);
        path.arcTo(rectF2, -180.0f, -180.0f);
        path.lineTo(rectF.width() - this.mRadius, rectF.top);
        this.Au.set(rectF);
        RectF rectF6 = this.Au;
        rectF6.left = rectF6.right - (this.mRadius * 2.0f);
        RectF rectF7 = this.Au;
        rectF7.bottom = rectF7.top + (this.mRadius * 2.0f);
        path.arcTo(this.Au, 270.0f, 90.0f);
        this.Au.set(rectF);
        RectF rectF8 = this.Au;
        rectF8.left = rectF8.right - (this.mRadius * 2.0f);
        RectF rectF9 = this.Au;
        rectF9.top = rectF9.bottom - (this.mRadius * 2.0f);
        path.arcTo(this.Au, 0.0f, 90.0f);
        path.lineTo(rectF3.right, rectF3.bottom);
        path.arcTo(rectF3, 0.0f, -180.0f);
        path.lineTo(rectF.left + this.mRadius, rectF.bottom);
        this.Au.set(rectF);
        RectF rectF10 = this.Au;
        rectF10.right = rectF10.left + (this.mRadius * 2.0f);
        RectF rectF11 = this.Au;
        rectF11.top = rectF11.bottom - (this.mRadius * 2.0f);
        path.arcTo(this.Au, 90.0f, 90.0f);
    }

    private void setGradientPaint(RectF rectF) {
        this.mPaint.setShader(new LinearGradient(rectF.left, rectF.top, rectF.right, rectF.bottom, this.startColor, this.endColor, Shader.TileMode.CLAMP));
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchDraw(Canvas canvas) {
        this.Aq.setEmpty();
        getDrawingRect(this.Aq);
        this.Ar.set(this.Aq);
        if (getChildCount() > 1) {
            View childAt = getChildAt(0);
            RectF rectF = this.As;
            if (rectF == null) {
                this.As = new RectF();
            } else {
                rectF.setEmpty();
            }
            RectF rectF2 = this.At;
            if (rectF2 == null) {
                this.At = new RectF();
            } else {
                rectF2.setEmpty();
            }
            float measuredWidth = this.Aq.left + childAt.getMeasuredWidth();
            RectF rectF3 = this.As;
            float f = this.Aq.top;
            float f2 = this.Ap;
            rectF3.set(measuredWidth, f - f2, (f2 * 2.0f) + measuredWidth, this.Aq.top + this.Ap);
            this.At.set(this.As.left, this.Aq.bottom - this.Ap, this.As.right, this.Aq.bottom + this.Ap);
            a(this.Av, this.Ar, this.As, this.At);
            setGradientPaint(this.Ar);
            canvas.drawPath(this.Av, this.mPaint);
        }
        super.dispatchDraw(canvas);
    }
}
