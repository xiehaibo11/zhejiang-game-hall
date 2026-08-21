package com.kwad.sdk.core.view;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.Interpolator;
import android.view.animation.LinearInterpolator;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes2.dex */
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
            this.axT.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.sdk.core.view.ScaleAnimSeekBar.3
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
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
            this.axU.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.sdk.core.view.ScaleAnimSeekBar.4
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
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

    /* JADX INFO: Access modifiers changed from: private */
    public int cB(int i) {
        int i2 = this.axw;
        return i > i2 / 2 ? this.axs : i < (-i2) / 2 ? this.axr : Math.round(((i + (i2 / 2.0f)) * (this.axs - this.axr)) / i2) + this.axr;
    }

    private boolean d(float f, float f2) {
        return this.axJ.left < this.axJ.right && this.axJ.top < this.axJ.bottom && f >= (((float) this.axJ.left) * this.axW) - ((float) this.axx) && f <= (((float) this.axJ.right) * this.axW) + ((float) this.axx) && f2 >= (((float) this.axJ.top) * this.axW) - ((float) this.axx) && f2 <= (((float) this.axJ.bottom) * this.axW) + ((float) this.axx);
    }

    private boolean e(float f, float f2) {
        return this.axG.left < this.axG.right && this.axG.top < this.axG.bottom && f >= (((float) this.axG.left) * this.axY) - ((float) this.axx) && f <= (((float) this.axG.right) * this.axY) + ((float) this.axx) && f2 >= (((float) this.axG.top) * this.axY) - ((float) this.axx) && f2 <= (((float) this.axG.bottom) * this.axY) + ((float) this.axx);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g(float f) {
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
            this.axV.setInterpolator(new Interpolator() { // from class: com.kwad.sdk.core.view.ScaleAnimSeekBar.1
                @Override // android.animation.TimeInterpolator
                public final float getInterpolation(float f) {
                    float f2 = f - 1.0f;
                    return (f2 * f2 * f2) + 1.0f;
                }
            });
            this.axV.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.sdk.core.view.ScaleAnimSeekBar.2
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
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

    @Override // android.view.View
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

    @Override // android.view.View
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
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean onTouchEvent(android.view.MotionEvent r8) {
        /*
            r7 = this;
            float r0 = r8.getX()
            int r1 = r7.axC
            r2 = 2
            int r1 = r1 / r2
            float r1 = (float) r1
            float r0 = r0 - r1
            float r1 = r8.getY()
            int r3 = r7.axB
            int r3 = r3 / r2
            float r3 = (float) r3
            float r1 = r1 - r3
            android.view.ViewParent r3 = r7.getParent()
            com.kwad.sdk.core.view.ScaleAnimSeekBar$a r4 = r7.getOnSeekBarChangedListener()
            int r5 = r8.getAction()
            r6 = 1
            if (r5 == 0) goto L5d
            r8 = 0
            if (r5 == r6) goto L3a
            if (r5 == r2) goto L29
            goto L91
        L29:
            boolean r1 = r7.axL
            if (r1 != 0) goto L31
            boolean r1 = r7.axM
            if (r1 == 0) goto L91
        L31:
            int r0 = (int) r0
            int r0 = r7.cB(r0)
            r7.a(r0, r8, r6)
            goto L91
        L3a:
            r7.axP = r8
            boolean r1 = r7.axM
            if (r1 != 0) goto L44
            boolean r1 = r7.axL
            if (r1 == 0) goto L57
        L44:
            r7.axM = r8
            r7.axL = r8
            int r0 = (int) r0
            int r0 = r7.cB(r0)
            boolean r1 = r7.axS
            r7.a(r0, r1, r6)
            if (r4 == 0) goto L57
            r4.a(r7)
        L57:
            if (r3 == 0) goto L91
            r3.requestDisallowInterceptTouchEvent(r8)
            goto L91
        L5d:
            boolean r2 = r7.axO
            if (r2 != 0) goto L66
            boolean r8 = super.onTouchEvent(r8)
            return r8
        L66:
            boolean r8 = r7.d(r0, r1)
            if (r8 == 0) goto L7e
            r7.bh(r6)
            r7.axL = r6
            r7.axP = r6
            if (r4 == 0) goto L78
            r4.st()
        L78:
            if (r3 == 0) goto L91
        L7a:
            r3.requestDisallowInterceptTouchEvent(r6)
            goto L91
        L7e:
            boolean r8 = r7.e(r0, r1)
            if (r8 == 0) goto L91
            r7.bh(r6)
            r7.axM = r6
            if (r4 == 0) goto L8e
            r4.st()
        L8e:
            if (r3 == 0) goto L91
            goto L7a
        L91:
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.core.view.ScaleAnimSeekBar.onTouchEvent(android.view.MotionEvent):boolean");
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
