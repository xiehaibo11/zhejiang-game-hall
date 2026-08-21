package com.kwad.components.ad.splashscreen.widget;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.AnimationDrawable;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class c extends AnimationDrawable {
    private Bitmap FF;
    private Bitmap FG;
    private Bitmap FH;
    private Bitmap FI;
    private Bitmap FJ;
    private Bitmap FK;
    private int FL;
    private RectF FM;
    private Paint FN;
    private Paint FO;
    private PorterDuffXfermode FP;
    private final int FQ;
    private final int FR;
    private float FS;
    private float FT;
    private RectF FU;
    private Paint FV;
    private int FW;
    private int FX;
    private ValueAnimator FY;
    private final float FZ = 6.0f;
    private final float Ga = 11.0f;
    private float Gb;
    private float Gc;
    private int Gd;
    private Context mContext;

    public c(Context context, int i) {
        this.mContext = context;
        this.FQ = com.kwad.sdk.d.a.a.a(context, 51.0f);
        this.FR = com.kwad.sdk.d.a.a.a(context, 61.0f);
        this.Gd = i;
        init();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(float f) {
        if (f <= 6.0f) {
            float f2 = f / 6.0f;
            int i = this.Gd;
            if (i == 0) {
                this.FU.top = this.FX * (1.0f - f2);
                this.FM.offsetTo(this.FU.left + this.FT, this.FU.top + this.FS);
                this.Gc = (f2 * 30.0f) + 290.0f;
                return;
            }
            if (i == 1) {
                float f3 = 1.0f - f2;
                this.FU.left = this.FW * f3;
                this.FM.offsetTo(this.FU.left + this.FT, this.FU.top + this.FS);
                this.Gc = f3 * 30.0f;
                return;
            }
            if (i != 2) {
                return;
            }
            this.FU.right = this.FW * f2;
            this.FM.offsetTo(this.FU.right + this.FT, this.FU.top + this.FS);
            this.Gc = (f2 * 30.0f) + 330.0f;
        }
    }

    private void init() {
        float f;
        float f2;
        Matrix matrix;
        float f3;
        this.FF = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_hand);
        this.FG = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_hand_lt);
        this.FH = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_hand_lb);
        this.FI = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_hand_rt);
        this.FJ = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_hand_rb);
        Bitmap bitmapDecodeResource = BitmapFactory.decodeResource(this.mContext.getResources(), R.drawable.ksad_splash_side_bg);
        int i = this.Gd;
        if (i != 0) {
            if (i == 1) {
                matrix = new Matrix();
                f3 = 270.0f;
            } else if (i == 2) {
                matrix = new Matrix();
                f3 = 90.0f;
            }
            matrix.postRotate(f3);
            this.FK = Bitmap.createBitmap(bitmapDecodeResource, 0, 0, bitmapDecodeResource.getWidth(), bitmapDecodeResource.getHeight(), matrix, true);
        } else {
            this.FK = bitmapDecodeResource;
        }
        this.FL = com.kwad.sdk.d.a.a.a(this.mContext, 10.0f);
        this.FV = new Paint(1);
        int i2 = this.Gd;
        if (i2 == 0) {
            this.FX = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgh);
            int dimension = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgw);
            this.FW = dimension;
            this.FS = (-this.FR) * 0.22f;
            f = dimension;
            f2 = 0.08f;
        } else {
            if (i2 != 1) {
                if (i2 == 2) {
                    this.FX = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgw);
                    this.FW = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgh);
                    this.FS = this.FX * 0.09f;
                    f = -this.FQ;
                    f2 = 0.5f;
                }
                this.FU = new RectF(0.0f, 0.0f, this.FW, this.FX);
                this.FN = new Paint(3);
                Paint paint = new Paint(3);
                this.FO = paint;
                paint.setDither(true);
                this.FM = new RectF(this.FU.right - this.FQ, 0.0f, this.FU.right, this.FR);
                this.FP = new PorterDuffXfermode(PorterDuff.Mode.DST_OUT);
                ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 6.0f, 11.0f);
                this.FY = valueAnimatorOfFloat;
                valueAnimatorOfFloat.setDuration(1100L);
                this.FY.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.splashscreen.widget.c.1
                    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                        c.this.Gb = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                        c cVar = c.this;
                        cVar.c(cVar.Gb);
                        c.this.invalidateSelf();
                    }
                });
                this.FY.setRepeatCount(-1);
            }
            this.FX = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgw);
            this.FW = (int) this.mContext.getResources().getDimension(R.dimen.ksad_splash_hand_bgh);
            this.FS = this.FX * 0.09f;
            f = -this.FQ;
            f2 = 0.2f;
        }
        this.FT = f * f2;
        this.FU = new RectF(0.0f, 0.0f, this.FW, this.FX);
        this.FN = new Paint(3);
        Paint paint2 = new Paint(3);
        this.FO = paint2;
        paint2.setDither(true);
        this.FM = new RectF(this.FU.right - this.FQ, 0.0f, this.FU.right, this.FR);
        this.FP = new PorterDuffXfermode(PorterDuff.Mode.DST_OUT);
        ValueAnimator valueAnimatorOfFloat2 = ValueAnimator.ofFloat(0.0f, 6.0f, 11.0f);
        this.FY = valueAnimatorOfFloat2;
        valueAnimatorOfFloat2.setDuration(1100L);
        this.FY.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.splashscreen.widget.c.1
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                c.this.Gb = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                c cVar = c.this;
                cVar.c(cVar.Gb);
                c.this.invalidateSelf();
            }
        });
        this.FY.setRepeatCount(-1);
    }

    @Override // android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Bitmap bitmap;
        if (this.FU == null) {
            return;
        }
        canvas.save();
        canvas.translate((getIntrinsicWidth() - this.FW) / 2, (getIntrinsicHeight() - this.FX) / 2);
        float f = this.Gb;
        if (f <= 6.0f) {
            this.FV.setAlpha((int) ((f * 255.0f) / 6.0f));
            this.FO.setAlpha(255);
        } else {
            int i = (int) ((1.0f - ((f - 6.0f) / 5.0f)) * 255.0f);
            this.FV.setAlpha(i);
            this.FO.setAlpha(i);
        }
        int iSave = canvas.save();
        int iSaveLayer = canvas.saveLayer(this.FU, this.FV, 31);
        canvas.drawBitmap(this.FK, (Rect) null, this.FU, this.FV);
        canvas.rotate(this.Gc, this.FM.centerX(), this.FM.centerY());
        this.FN.setXfermode(this.FP);
        int i2 = this.Gd;
        if (i2 != 0) {
            if (i2 == 1) {
                canvas.drawBitmap(this.FG, (Rect) null, this.FM, this.FN);
                bitmap = this.FH;
            }
            canvas.drawBitmap(this.FF, (Rect) null, this.FM, this.FN);
            canvas.restoreToCount(iSaveLayer);
            canvas.rotate(this.Gc, this.FM.centerX(), this.FM.centerY());
            canvas.drawBitmap(this.FF, (Rect) null, this.FM, this.FO);
            canvas.restoreToCount(iSave);
            canvas.restore();
        }
        canvas.drawBitmap(this.FI, (Rect) null, this.FM, this.FN);
        bitmap = this.FJ;
        canvas.drawBitmap(bitmap, (Rect) null, this.FM, this.FN);
        canvas.drawBitmap(this.FF, (Rect) null, this.FM, this.FN);
        canvas.restoreToCount(iSaveLayer);
        canvas.rotate(this.Gc, this.FM.centerX(), this.FM.centerY());
        canvas.drawBitmap(this.FF, (Rect) null, this.FM, this.FO);
        canvas.restoreToCount(iSave);
        canvas.restore();
    }

    @Override // android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.FX + this.FR + this.FL;
    }

    @Override // android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.FW + this.FQ;
    }

    @Override // android.graphics.drawable.DrawableContainer, android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -2;
    }

    @Override // android.graphics.drawable.AnimationDrawable, android.graphics.drawable.Animatable
    public final boolean isRunning() {
        ValueAnimator valueAnimator = this.FY;
        if (valueAnimator != null) {
            return valueAnimator.isRunning();
        }
        return false;
    }

    @Override // android.graphics.drawable.AnimationDrawable, android.graphics.drawable.Animatable
    public final void start() {
        ValueAnimator valueAnimator = this.FY;
        if (valueAnimator != null) {
            valueAnimator.start();
        }
    }

    @Override // android.graphics.drawable.AnimationDrawable, android.graphics.drawable.Animatable
    public final void stop() {
        ValueAnimator valueAnimator = this.FY;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
    }
}
