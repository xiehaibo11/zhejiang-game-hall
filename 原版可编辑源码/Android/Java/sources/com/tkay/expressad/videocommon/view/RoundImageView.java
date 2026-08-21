package com.tkay.expressad.videocommon.view;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.TypedValue;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.widget.TYImageView;

public class RoundImageView extends TYImageView {
    private static final String a = "RoundImageView";
    private static final int c = 0;
    private static final int d = 1;
    private static final int e = 5;
    private static final String m = "state_instance";
    private static final String n = "state_type";
    private static final String o = "state_border_radius";
    private int b;
    private int f;
    private Paint g;
    private int h;
    private Matrix i;
    private BitmapShader j;
    private int k;
    private RectF l;

    public RoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.i = new Matrix();
        Paint paint = new Paint();
        this.g = paint;
        paint.setAntiAlias(true);
        this.f = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.b = 1;
    }

    public RoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.i = new Matrix();
        Paint paint = new Paint();
        this.g = paint;
        paint.setAntiAlias(true);
        this.f = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.b = 1;
    }

    public RoundImageView(Context context) {
        super(context);
        this.i = new Matrix();
        Paint paint = new Paint();
        this.g = paint;
        paint.setAntiAlias(true);
        this.f = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.b = 1;
    }

    @Override
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        if (this.b == 0) {
            int iMin = Math.min(getMeasuredWidth(), getMeasuredHeight());
            this.k = iMin;
            this.h = iMin / 2;
            setMeasuredDimension(iMin, iMin);
        }
    }

    @Override
    protected void onDraw(Canvas canvas) {
        Bitmap bitmapA;
        try {
            if (getDrawable() == null) {
                return;
            }
            try {
                Drawable drawable = getDrawable();
                if (drawable != null && (bitmapA = a(drawable)) != null && !bitmapA.isRecycled()) {
                    Shader.TileMode tileMode = Shader.TileMode.CLAMP;
                    this.j = new BitmapShader(bitmapA, tileMode, tileMode);
                    float fMax = 1.0f;
                    if (this.b == 0) {
                        fMax = (this.k * 1.0f) / Math.min(bitmapA.getWidth(), bitmapA.getHeight());
                    } else if (this.b == 1) {
                        fMax = Math.max((getWidth() * 1.0f) / bitmapA.getWidth(), (getHeight() * 1.0f) / bitmapA.getHeight());
                    }
                    this.i.setScale(fMax, fMax);
                    this.j.setLocalMatrix(this.i);
                    this.g.setShader(this.j);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
            if (this.b == 1) {
                canvas.drawRoundRect(this.l, this.f, this.f, this.g);
            } else {
                canvas.drawCircle(this.h, this.h, this.h, this.g);
            }
        } catch (Throwable th2) {
            th2.getMessage();
        }
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        if (this.b == 1) {
            this.l = new RectF(0.0f, 0.0f, getWidth(), getHeight());
        }
    }

    @Override
    protected Parcelable onSaveInstanceState() {
        Bundle bundle = new Bundle();
        bundle.putParcelable(m, super.onSaveInstanceState());
        bundle.putInt(n, this.b);
        bundle.putInt(o, this.f);
        return bundle;
    }

    @Override
    protected void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof Bundle) {
            Bundle bundle = (Bundle) parcelable;
            super.onRestoreInstanceState(bundle.getParcelable(m));
            this.b = bundle.getInt(n);
            this.f = bundle.getInt(o);
            return;
        }
        super.onRestoreInstanceState(parcelable);
    }

    public void setBorderRadius(int i) {
        int iB = t.b(getContext(), i);
        if (this.f != iB) {
            this.f = iB;
            invalidate();
        }
    }

    public void setType(int i) {
        if (this.b != i) {
            this.b = i;
            if (i != 1 && i != 0) {
                this.b = 0;
            }
            requestLayout();
        }
    }

    private void a() {
        Bitmap bitmapA;
        try {
            Drawable drawable = getDrawable();
            if (drawable == null || (bitmapA = a(drawable)) == null || bitmapA.isRecycled()) {
                return;
            }
            Shader.TileMode tileMode = Shader.TileMode.CLAMP;
            this.j = new BitmapShader(bitmapA, tileMode, tileMode);
            float fMax = 1.0f;
            if (this.b == 0) {
                fMax = (this.k * 1.0f) / Math.min(bitmapA.getWidth(), bitmapA.getHeight());
            } else if (this.b == 1) {
                fMax = Math.max((getWidth() * 1.0f) / bitmapA.getWidth(), (getHeight() * 1.0f) / bitmapA.getHeight());
            }
            this.i.setScale(fMax, fMax);
            this.j.setLocalMatrix(this.i);
            this.g.setShader(this.j);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static Bitmap a(Drawable drawable) {
        try {
            if (drawable instanceof BitmapDrawable) {
                return ((BitmapDrawable) drawable).getBitmap();
            }
            int intrinsicWidth = drawable.getIntrinsicWidth();
            int intrinsicHeight = drawable.getIntrinsicHeight();
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(intrinsicWidth, intrinsicHeight, Bitmap.Config.ARGB_4444);
            Canvas canvas = new Canvas(bitmapCreateBitmap);
            drawable.setBounds(0, 0, intrinsicWidth, intrinsicHeight);
            drawable.draw(canvas);
            return bitmapCreateBitmap;
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }
}
