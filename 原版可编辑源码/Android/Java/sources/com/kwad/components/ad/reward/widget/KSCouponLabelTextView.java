package com.kwad.components.ad.reward.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.os.Build;
import android.util.AttributeSet;
import android.widget.TextView;
import com.kwad.components.core.widget.d;
import com.kwad.components.core.widget.e;
import com.kwad.sdk.R;

public class KSCouponLabelTextView extends TextView implements d {
    private final RectF AA;
    private final Path AB;
    private Path AC;
    private Path AE;
    private boolean AF;
    private final Rect Aq;
    private final RectF Ar;
    private final RectF Au;
    private float Aw;
    private float Ax;
    private float Ay;
    private final RectF Az;
    private final Paint mPaint;
    private int strokeColor;

    public KSCouponLabelTextView(Context context) {
        super(context);
        this.mPaint = new Paint();
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.Az = new RectF();
        this.AA = new RectF();
        this.AB = new Path();
        this.Au = new RectF();
        this.AF = true;
        a(context, null, 0);
    }

    public KSCouponLabelTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mPaint = new Paint();
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.Az = new RectF();
        this.AA = new RectF();
        this.AB = new Path();
        this.Au = new RectF();
        this.AF = true;
        a(context, attributeSet, 0);
    }

    public KSCouponLabelTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mPaint = new Paint();
        this.Aq = new Rect();
        this.Ar = new RectF();
        this.Az = new RectF();
        this.AA = new RectF();
        this.AB = new Path();
        this.Au = new RectF();
        this.AF = true;
        a(context, attributeSet, i);
    }

    private void a(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_KSCouponLabelTextView, i, 0);
        int color = context.getResources().getColor(R.color.ksad_reward_main_color);
        this.Aw = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSCouponLabelTextView_ksad_labelRadius, 8.0f);
        this.Ax = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSCouponLabelTextView_ksad_strokeSize, 2.0f);
        this.strokeColor = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_KSCouponLabelTextView_ksad_strokeColor, color);
        this.Ay = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_KSCouponLabelTextView_ksad_sideRadius, 16.0f);
        typedArrayObtainStyledAttributes.recycle();
        ki();
    }

    private void a(Path path, Path path2, Path path3, RectF rectF, RectF rectF2, RectF rectF3) {
        path.reset();
        float f = this.Aw;
        path.addRoundRect(rectF, f, f, Path.Direction.CW);
        path2.addArc(rectF2, 90.0f, -180.0f);
        path3.addArc(rectF3, 90.0f, 180.0f);
        path.op(this.AC, Path.Op.DIFFERENCE);
        path.op(this.AE, Path.Op.DIFFERENCE);
    }

    private void a(RectF rectF, RectF rectF2) {
        rectF2.set(rectF);
        rectF2.left -= this.Ay;
        rectF2.right = rectF2.left + (this.Ay * 2.0f);
        rectF2.top += (rectF.height() - (this.Ay * 2.0f)) / 2.0f;
        rectF2.bottom = rectF2.top + (this.Ay * 2.0f);
    }

    private void b(Path path, RectF rectF, RectF rectF2, RectF rectF3) {
        path.reset();
        path.moveTo(rectF.left, rectF.top + this.Aw);
        this.Au.set(rectF);
        RectF rectF4 = this.Au;
        rectF4.bottom = rectF4.top + (this.Aw * 2.0f);
        RectF rectF5 = this.Au;
        rectF5.right = rectF5.left + (this.Aw * 2.0f);
        path.arcTo(this.Au, 180.0f, 90.0f);
        path.lineTo(rectF.width() - this.Aw, rectF.top);
        this.Au.set(rectF);
        RectF rectF6 = this.Au;
        rectF6.left = rectF6.right - (this.Aw * 2.0f);
        RectF rectF7 = this.Au;
        rectF7.bottom = rectF7.top + (this.Aw * 2.0f);
        path.arcTo(this.Au, 270.0f, 90.0f);
        path.lineTo(rectF.right, rectF3.top);
        path.arcTo(rectF3, 270.0f, -180.0f);
        path.lineTo(rectF.right, rectF.bottom - this.Aw);
        this.Au.set(rectF);
        RectF rectF8 = this.Au;
        rectF8.left = rectF8.right - (this.Aw * 2.0f);
        RectF rectF9 = this.Au;
        rectF9.top = rectF9.bottom - (this.Aw * 2.0f);
        path.arcTo(this.Au, 0.0f, 90.0f);
        path.lineTo(rectF.left + this.Aw, rectF.bottom);
        this.Au.set(rectF);
        RectF rectF10 = this.Au;
        rectF10.right = rectF10.left + (this.Aw * 2.0f);
        RectF rectF11 = this.Au;
        rectF11.top = rectF11.bottom - (this.Aw * 2.0f);
        path.arcTo(this.Au, 90.0f, 90.0f);
        path.lineTo(rectF.left, rectF2.bottom);
        path.arcTo(rectF2, 90.0f, -180.0f);
        path.close();
    }

    private void b(RectF rectF, RectF rectF2) {
        rectF2.set(rectF);
        rectF2.right += this.Ay;
        rectF2.left = rectF2.right - (this.Ay * 2.0f);
        rectF2.top += (rectF.height() - (this.Ay * 2.0f)) / 2.0f;
        rectF2.bottom = rectF2.top + (this.Ay * 2.0f);
    }

    private void ki() {
        this.mPaint.setColor(this.strokeColor);
        this.mPaint.setStrokeWidth(this.Ax);
        this.mPaint.setStyle(Paint.Style.STROKE);
        this.mPaint.setAntiAlias(true);
    }

    @Override
    public final void a(e eVar) {
        int color = getResources().getColor(R.color.ksad_reward_main_color);
        this.strokeColor = color;
        setTextColor(color);
        ki();
        invalidate();
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        this.Aq.setEmpty();
        getDrawingRect(this.Aq);
        float f = this.Ax / 2.0f;
        this.Ar.set(this.Aq);
        this.Ar.left += f;
        this.Ar.top += f;
        this.Ar.right -= f;
        this.Ar.bottom -= f;
        a(this.Ar, this.Az);
        b(this.Ar, this.AA);
        if (Build.VERSION.SDK_INT >= 19) {
            Path path = this.AC;
            if (path == null) {
                this.AC = new Path();
            } else {
                path.reset();
            }
            Path path2 = this.AE;
            if (path2 == null) {
                this.AE = new Path();
            } else {
                path2.reset();
            }
            a(this.AB, this.AC, this.AE, this.Ar, this.Az, this.AA);
        } else {
            b(this.AB, this.Ar, this.Az, this.AA);
        }
        canvas.drawPath(this.AB, this.mPaint);
    }

    @Override
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        if (this.AF) {
            if (((float) (getPaddingLeft() + getPaddingRight())) + getPaint().measureText(getText().toString()) <= ((float) getMeasuredWidth())) {
                return;
            }
            setVisibility(8);
        }
    }
}
