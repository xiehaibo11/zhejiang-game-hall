package com.kwad.sdk.core.view;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewParent;
import android.view.animation.Interpolator;
import android.view.animation.LinearInterpolator;
import java.lang.ref.WeakReference;

public class ScaleAnimSeekBar extends View {
    private int axA;
    private int axB;
    private int axC;
    private GradientDrawable axD;
    private GradientDrawable axE;
    private GradientDrawable axF;
    private Rect axG;
    private Rect axH;
    private Rect axI;
    private Rect axJ;
    private Drawable axK;
    private boolean axL;
    private boolean axM;
    private boolean axN;
    private boolean axO;
    private boolean axP;
    private WeakReference<a> axQ;
    private boolean axR;
    private boolean axS;
    private ValueAnimator axT;
    private ValueAnimator axU;
    private ValueAnimator axV;
    private float axW;
    private float axX;
    private float axY;
    private float axZ;
    private Paint axm;
    private int axn;
    private int axo;
    private int axp;
    private int axq;
    private int axr;
    private int axs;
    private int axt;
    private int axu;
    private boolean axv;
    private int axw;
    private int axx;
    private int axy;
    private int axz;
    private int aya;
    private boolean ayb;

    public interface a {
        void a(ScaleAnimSeekBar scaleAnimSeekBar);

        void a(ScaleAnimSeekBar scaleAnimSeekBar, boolean z);

        void st();
    }

    public ScaleAnimSeekBar(Context context) {
        this(context, null);
    }

    public ScaleAnimSeekBar(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ScaleAnimSeekBar(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.axs = 100;
        this.axv = false;
        this.axK = null;
        this.axL = false;
        this.axM = false;
        this.axN = false;
        this.axO = true;
        this.axR = true;
        this.axS = false;
        this.axW = 1.0f;
        this.axX = 1.34f;
        this.axY = 1.0f;
        this.axZ = 2.0f;
        init(context, attributeSet);
    }

    private void a(int i, boolean z, boolean z2) {
        int i2 = this.axr;
        if (i <= i2 || i >= (i2 = this.axs)) {
            i = i2;
        }
        h(z, i);
        a onSeekBarChangedListener = getOnSeekBarChangedListener();
        if (onSeekBarChangedListener != null && this.axz != this.axy) {
            this.axN = z2;
            onSeekBarChangedListener.a(this, z2);
            this.axN = false;
        }
        this.axz = this.axy;
    }

    private void a(Canvas canvas, Rect rect, GradientDrawable gradientDrawable) {
        canvas.save();
        Rect rect2 = new Rect();
        rect2.top = (int) (rect.top * this.axY);
        rect2.bottom = (int) (rect.bottom * this.axY);
        rect2.left = rect.left;
        rect2.right = rect.right;
        gradientDrawable.setBounds(rect2);
        gradientDrawable.setCornerRadius(this.axt * this.axY);
        gradientDrawable.draw(canvas);
        canvas.restore();
    }

    private void bh(boolean z) {
        if (this.axR) {
            boolean z2 = z;
            bi(z2);
            bj(z2);
        }
    }

    private void bi(boolean z) {
        float f = this.axW;
        float f2 = z ? this.axX : 1.0f;
        ValueAnimator valueAnimator = this.axT;
        if (valueAnimator == null) {
            ValueAnimator valueAnimator2 = new ValueAnimator();
            this.axT = valueAnimator2;
            valueAnimator2.setDuration(250L);
            this.axT.setInterpolator(new LinearInterpolator());
            this.axT.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator3) {
                    ScaleAnimSeekBar.this.axW = ((Float) valueAnimator3.getAnimatedValue()).floatValue();
                    ScaleAnimSeekBar.this.requestLayout();
                }
            });
        } else {
            valueAnimator.cancel();
        }
        this.axT.setFloatValues(f, f2);
        this.axT.start();
    }

    private void bj(boolean z) {
        float f = this.axY;
        float f2 = z ? this.axZ : 1.0f;
        ValueAnimator valueAnimator = this.axU;
        if (valueAnimator == null) {
            ValueAnimator valueAnimator2 = new ValueAnimator();
            this.axU = valueAnimator2;
            valueAnimator2.setDuration(250L);
            this.axU.setInterpolator(new LinearInterpolator());
            this.axU.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator3) {
                    ScaleAnimSeekBar.this.axY = ((Float) valueAnimator3.getAnimatedValue()).floatValue();
                    ScaleAnimSeekBar.this.requestLayout();
                }
            });
        } else {
            valueAnimator.cancel();
        }
        this.axU.setFloatValues(f, f2);
        this.axU.start();
    }

    private void bm(Context context) {
        this.axR = true;
        this.aya = com.kwad.sdk.d.a.a.a(context, 10.0f);
        this.axq = com.kwad.sdk.d.a.a.a(context, 3.0f);
        this.axx = com.kwad.sdk.d.a.a.a(context, 20.0f);
        this.axK = null;
        this.axS = false;
        this.axu = com.kwad.sdk.d.a.a.a(context, 0.3f);
        this.axt = com.kwad.sdk.d.a.a.a(context, 1.0f);
        this.axn = 654311423;
        this.axo = -1;
        this.axp = 1090519039;
        this.axr = 0;
        this.axs = 100;
        this.axv = false;
    }

    private void c(Canvas canvas) {
        canvas.save();
        Drawable drawable = this.axK;
        if (drawable != null) {
            drawable.setBounds(this.axJ);
            this.axK.draw(canvas);
        } else {
            this.axm.setColor(this.axo);
            canvas.drawCircle(this.axJ.centerX(), this.axJ.centerY(), (this.axJ.width() * this.axW) / 2.0f, this.axm);
        }
        canvas.restore();
    }

    private float cA(int i) {
        int i2 = this.axw;
        int i3 = this.axr;
        return ((i2 * (i - i3)) / (this.axs - i3)) - (i2 / 2.0f);
    }

    private int cB(int i) {
        int i2 = this.axw;
        return i > i2 / 2 ? this.axs : i < (-i2) / 2 ? this.axr : Math.round(((i + (i2 / 2.0f)) * (this.axs - this.axr)) / i2) + this.axr;
    }

    private boolean d(float f, float f2) {
        return this.axJ.left < this.axJ.right && this.axJ.top < this.axJ.bottom && f >= (((float) this.axJ.left) * this.axW) - ((float) this.axx) && f <= (((float) this.axJ.right) * this.axW) + ((float) this.axx) && f2 >= (((float) this.axJ.top) * this.axW) - ((float) this.axx) && f2 <= (((float) this.axJ.bottom) * this.axW) + ((float) this.axx);
    }

    private boolean e(float f, float f2) {
        return this.axG.left < this.axG.right && this.axG.top < this.axG.bottom && f >= (((float) this.axG.left) * this.axY) - ((float) this.axx) && f <= (((float) this.axG.right) * this.axY) + ((float) this.axx) && f2 >= (((float) this.axG.top) * this.axY) - ((float) this.axx) && f2 <= (((float) this.axG.bottom) * this.axY) + ((float) this.axx);
    }

    private void g(float f) {
        this.axJ.left = (int) (f - this.axq);
        this.axJ.right = (int) (this.axq + f);
        this.axH.right = (int) f;
        invalidate();
    }

    private a getOnSeekBarChangedListener() {
        WeakReference<a> weakReference = this.axQ;
        if (weakReference != null) {
            return weakReference.get();
        }
        return null;
    }

    private float h(float f) {
        float f2 = this.axw / 2;
        if (f > f2) {
            return f2;
        }
        float f3 = -f2;
        return f < f3 ? f3 : f;
    }

    private void h(boolean z, int i) {
        if (!z) {
            this.axy = i;
            g(h(cA(i)));
            return;
        }
        float fH = h(cA(this.axy));
        float fH2 = h(cA(i));
        ValueAnimator valueAnimator = this.axV;
        if (valueAnimator == null) {
            ValueAnimator valueAnimator2 = new ValueAnimator();
            this.axV = valueAnimator2;
            valueAnimator2.setDuration(300L);
            this.axV.setInterpolator(new Interpolator() {
                @Override
                public final float getInterpolation(float f) {
                    float f2 = f - 1.0f;
                    return (f2 * f2 * f2) + 1.0f;
                }
            });
            this.axV.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
                @Override
                public final void onAnimationUpdate(ValueAnimator valueAnimator3) {
                    float fFloatValue = ((Float) valueAnimator3.getAnimatedValue()).floatValue();
                    ScaleAnimSeekBar scaleAnimSeekBar = ScaleAnimSeekBar.this;
                    scaleAnimSeekBar.axy = scaleAnimSeekBar.cB((int) fFloatValue);
                    ScaleAnimSeekBar.this.g(fFloatValue);
                }
            });
        } else {
            valueAnimator.cancel();
        }
        this.axV.setFloatValues(fH, fH2);
        this.axV.start();
    }

    private void init(Context context, AttributeSet attributeSet) {
        if (attributeSet != null) {
            bm(context);
        }
        Paint paint = new Paint();
        this.axm = paint;
        paint.setStyle(Paint.Style.FILL);
        this.axm.setAntiAlias(true);
        GradientDrawable gradientDrawable = new GradientDrawable();
        this.axD = gradientDrawable;
        gradientDrawable.setShape(0);
        this.axD.setColor(this.axn);
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        this.axE = gradientDrawable2;
        gradientDrawable2.setShape(0);
        this.axE.setColor(this.axo);
        GradientDrawable gradientDrawable3 = new GradientDrawable();
        this.axF = gradientDrawable3;
        gradientDrawable3.setShape(0);
        this.axF.setColor(this.axp);
        this.axG = new Rect();
        this.axH = new Rect();
        this.axJ = new Rect();
        this.axI = new Rect();
        this.axy = this.axr;
    }

    private void v(int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        this.axw = this.axR ? (int) (i - ((this.aya * 2) * (this.axX - this.axW))) : i - (this.aya * 2);
        this.axG.top = -this.axu;
        Rect rect = this.axG;
        rect.bottom = -rect.top;
        this.axG.left = (this.axv ? -i : -this.axw) / 2;
        this.axG.right = this.axv ? i / 2 : this.axw / 2;
        this.axH.top = -this.axu;
        Rect rect2 = this.axH;
        rect2.bottom = -rect2.top;
        this.axH.left = (this.axv ? -i : -this.axw) / 2;
        this.axH.right = (-this.axw) / 2;
        this.axI.top = -this.axu;
        this.axI.bottom = -this.axH.top;
        Rect rect3 = this.axI;
        if (!this.axv) {
            i = this.axw;
        }
        rect3.left = (-i) / 2;
        this.axI.right = (-this.axw) / 2;
        this.axJ.top = -this.axq;
        this.axJ.bottom = this.axq;
        this.axJ.left = ((-this.axw) / 2) - this.axq;
        this.axJ.right = ((-this.axw) / 2) + this.axq;
        setThumbDrawable(this.axK);
        setProgress(this.axy);
        setSecondaryProgress(this.axA);
    }

    public final void bg(boolean z) {
        this.ayb = z;
        bh(z);
    }

    public int getMaxProgress() {
        return this.axs;
    }

    public int getProgress() {
        return this.axy;
    }

    public int getProgressLength() {
        return this.axw;
    }

    public int getProgressX() {
        return (int) (getX() + (this.axq * this.axX));
    }

    public int getSecondaryProgress() {
        return this.axA;
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.save();
        canvas.translate(this.axC / 2, this.axB / 2);
        a(canvas, this.axG, this.axD);
        a(canvas, this.axI, this.axF);
        a(canvas, this.axH, this.axE);
        if (this.ayb) {
            c(canvas);
        }
        canvas.restore();
    }

    @Override
    protected void onMeasure(int i, int i2) {
        int mode = View.MeasureSpec.getMode(i);
        int size = View.MeasureSpec.getSize(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size2 = View.MeasureSpec.getSize(i2);
        if (mode != 1073741824) {
            size = getWidth();
        }
        this.axC = size;
        if (mode2 == 1073741824) {
            this.axB = size2;
        } else {
            this.axB = getHeight();
        }
        v(this.axC, this.axB);
        setMeasuredDimension(this.axC, this.axB);
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x007a  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        float x = motionEvent.getX() - (this.axC / 2);
        float y = motionEvent.getY() - (this.axB / 2);
        ViewParent parent = getParent();
        a onSeekBarChangedListener = getOnSeekBarChangedListener();
        int action = motionEvent.getAction();
        if (action != 0) {
            if (action == 1) {
                this.axP = false;
                if (this.axM || this.axL) {
                    this.axM = false;
                    this.axL = false;
                    a(cB((int) x), this.axS, true);
                    if (onSeekBarChangedListener != null) {
                        onSeekBarChangedListener.a(this);
                    }
                }
                if (parent != null) {
                    parent.requestDisallowInterceptTouchEvent(false);
                }
            } else if (action == 2 && (this.axL || this.axM)) {
                a(cB((int) x), false, true);
            }
        } else {
            if (!this.axO) {
                return super.onTouchEvent(motionEvent);
            }
            if (d(x, y)) {
                bh(true);
                this.axL = true;
                this.axP = true;
                if (onSeekBarChangedListener != null) {
                    onSeekBarChangedListener.st();
                }
                if (parent != null) {
                    parent.requestDisallowInterceptTouchEvent(true);
                }
            } else if (e(x, y)) {
                bh(true);
                this.axM = true;
                if (onSeekBarChangedListener != null) {
                    onSeekBarChangedListener.st();
                }
                if (parent != null) {
                }
            }
        }
        return true;
    }

    public void setMaxProgress(int i) {
        this.axs = i;
    }

    public void setMinProgress(int i) {
        this.axr = i;
        if (this.axy < i) {
            this.axy = i;
        }
    }

    public void setOnSeekBarChangeListener(a aVar) {
        this.axQ = new WeakReference<>(aVar);
    }

    public void setProgress(int i) {
        a(i, false, false);
    }

    public void setProgressBackgroundColor(int i) {
        this.axn = i;
        this.axD.setColor(i);
    }

    public void setProgressColor(int i) {
        this.axo = i;
        this.axE.setColor(i);
    }

    public void setSecondaryProgress(int i) {
        int i2 = this.axr;
        if (i <= i2 || i >= (i2 = this.axs)) {
            i = i2;
        }
        this.axA = i;
        this.axI.right = (int) h(cA(i));
        invalidate();
    }

    public void setSecondaryProgressColor(int i) {
        this.axp = i;
        this.axF.setColor(i);
    }

    public void setThumbDrawable(Drawable drawable) {
        if (drawable == null) {
            return;
        }
        this.axK = drawable;
    }

    public void setThumbEnable(boolean z) {
        this.axO = z;
    }

    public void setThumbScale(float f) {
        this.axW = f;
    }

    public void setThumbTouchOffset(int i) {
        this.axx = i;
        invalidate();
    }
}
