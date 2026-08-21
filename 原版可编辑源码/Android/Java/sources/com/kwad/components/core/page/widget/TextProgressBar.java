package com.kwad.components.core.page.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ProgressBar;
import com.kwad.sdk.m.l;

public class TextProgressBar extends ProgressBar {
    private String OM;
    private LinearGradient ON;
    private Matrix OO;
    private boolean OP;
    private boolean OQ;
    private boolean OR;
    private int OS;
    private int OT;
    private Drawable OU;
    private int OV;
    private Rect OW;
    private int[] OX;
    private int OY;
    private int OZ;
    private boolean Pa;
    private Paint mPaint;
    private RectF mRectF;

    public TextProgressBar(Context context) {
        this(context, null);
    }

    public TextProgressBar(Context context, AttributeSet attributeSet) {
        super(l.wrapContextIfNeed(context), attributeSet);
        this.OQ = false;
        this.OR = true;
        this.OW = new Rect();
        pu();
    }

    private void pu() {
        Paint paint = new Paint();
        this.mPaint = paint;
        paint.setAntiAlias(true);
        this.mPaint.setColor(-1);
        this.mPaint.setTextSize(com.kwad.sdk.d.a.a.a(getContext(), 12.0f));
        this.OV = com.kwad.sdk.d.a.a.a(getContext(), 2.0f);
        this.mRectF = new RectF();
        this.OY = -1;
        this.OZ = -117146;
    }

    private void setProgressText(int i) {
        this.OM = String.valueOf((int) (((i * 1.0f) / getMax()) * 100.0f)) + "%";
    }

    public final void e(String str, int i) {
        this.OM = str;
        this.OP = true;
        setProgress(i);
        invalidate();
    }

    @Override
    protected synchronized void onDraw(Canvas canvas) {
        int width;
        if (this.OQ) {
            canvas.save();
            canvas.rotate(90.0f);
            canvas.translate(0.0f, -getWidth());
            super.onDraw(canvas);
            canvas.restore();
        } else {
            super.onDraw(canvas);
        }
        if (!TextUtils.isEmpty(this.OM)) {
            this.mPaint.getTextBounds(this.OM, 0, this.OM.length(), this.OW);
        }
        int height = (getHeight() / 2) - this.OW.centerY();
        if (this.OU != null) {
            int intrinsicWidth = this.OU.getIntrinsicWidth();
            int intrinsicHeight = this.OU.getIntrinsicHeight();
            int width2 = (((getWidth() - this.OW.width()) - intrinsicWidth) - this.OV) / 2;
            int i = intrinsicWidth + width2;
            this.OU.setBounds(width2, (getHeight() - intrinsicHeight) / 2, i, (getHeight() + intrinsicHeight) / 2);
            this.OU.draw(canvas);
            width = i + this.OV;
        } else {
            width = (getWidth() / 2) - this.OW.centerX();
        }
        if (this.OX != null) {
            float progress = ((getProgress() * 1.0f) / getMax()) * getWidth();
            float f = width;
            if (progress >= f) {
                if (this.ON == null) {
                    this.ON = new LinearGradient(f, 0.0f, width + this.OW.width(), 0.0f, this.OX, (float[]) null, Shader.TileMode.CLAMP);
                    Matrix matrix = new Matrix();
                    this.OO = matrix;
                    this.ON.setLocalMatrix(matrix);
                }
                this.mPaint.setShader(this.ON);
                this.OO.setScale(((progress - f) * 1.0f) / this.OW.width(), 1.0f, f, 0.0f);
                this.ON.setLocalMatrix(this.OO);
            } else {
                this.mPaint.setShader(null);
            }
            canvas.drawText(this.OM, f, height, this.mPaint);
            return;
        }
        if (!isIndeterminate() && !this.Pa) {
            this.mPaint.setColor(this.OY);
            if (this.OM != null) {
                canvas.drawText(this.OM, width, height, this.mPaint);
            }
            return;
        }
        float width3 = (getWidth() * getProgress()) / getMax();
        int iSave = canvas.save();
        this.mRectF.set(width3, 0.0f, getWidth(), getHeight());
        canvas.clipRect(this.mRectF);
        this.mPaint.setColor(this.OZ);
        if (this.OM != null) {
            canvas.drawText(this.OM, width, height, this.mPaint);
        }
        canvas.restoreToCount(iSave);
        int iSave2 = canvas.save();
        this.mRectF.set(0.0f, 0.0f, width3, getHeight());
        canvas.clipRect(this.mRectF);
        this.mPaint.setColor(this.OY);
        if (this.OM != null) {
            canvas.drawText(this.OM, width, height, this.mPaint);
        }
        canvas.restoreToCount(iSave2);
    }

    @Override
    protected synchronized void onMeasure(int i, int i2) {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams != null && !TextUtils.isEmpty(this.OM)) {
            Rect rect = new Rect();
            this.mPaint.getTextBounds(this.OM, 0, this.OM.length(), rect);
            if (layoutParams.width == -2) {
                layoutParams.width = rect.width() + this.OS + this.OT;
                i = View.MeasureSpec.makeMeasureSpec(layoutParams.width, 1073741824);
            }
            if (layoutParams.height == -2) {
                layoutParams.height = rect.height();
                i2 = View.MeasureSpec.makeMeasureSpec(layoutParams.height, 1073741824);
            }
        }
        if (!this.OQ) {
            super.onMeasure(i, i2);
        } else {
            super.onMeasure(i2, i);
            setMeasuredDimension(getMeasuredHeight(), getMeasuredWidth());
        }
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        if (this.OQ) {
            super.onSizeChanged(i2, i, i3, i4);
        } else {
            super.onSizeChanged(i, i2, i3, i4);
        }
    }

    public void setDrawableLeft(Drawable drawable) {
        this.OU = drawable;
    }

    public void setDrawablePadding(int i) {
        this.OV = i;
    }

    public void setHasProgress(boolean z) {
        this.OR = z;
    }

    @Override
    public void setPadding(int i, int i2, int i3, int i4) {
        this.OS = i;
        this.OT = i3;
    }

    @Override
    public void setProgress(int i) {
        if (this.OR) {
            super.setProgress(i);
        } else {
            super.setProgress(0);
        }
    }

    public void setTextColor(int i) {
        this.Pa = false;
        this.OY = i;
        postInvalidate();
    }

    public final void setTextColor(int i, int i2) {
        this.Pa = true;
        this.OY = i;
        this.OZ = i2;
        postInvalidate();
    }

    public void setTextDimen(float f) {
        this.mPaint.setTextSize(f);
    }

    public void setTextDimenSp(int i) {
        this.mPaint.setTextSize(TypedValue.applyDimension(2, i, getResources().getDisplayMetrics()));
    }

    public void setVertical(boolean z) {
        this.OQ = z;
    }
}
