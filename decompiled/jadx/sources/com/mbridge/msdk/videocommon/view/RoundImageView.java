package com.mbridge.msdk.videocommon.view;

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
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.MBImageView;

/* JADX INFO: loaded from: classes3.dex */
public class RoundImageView extends MBImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4406a;
    private int b;
    private Paint c;
    private int d;
    private Matrix e;
    private BitmapShader f;
    private int g;
    private RectF h;

    public RoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.e = new Matrix();
        Paint paint = new Paint();
        this.c = paint;
        paint.setAntiAlias(true);
        this.b = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.f4406a = 1;
    }

    public RoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.e = new Matrix();
        Paint paint = new Paint();
        this.c = paint;
        paint.setAntiAlias(true);
        this.b = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.f4406a = 1;
    }

    public RoundImageView(Context context) {
        super(context);
        this.e = new Matrix();
        Paint paint = new Paint();
        this.c = paint;
        paint.setAntiAlias(true);
        this.b = (int) TypedValue.applyDimension(1, 5.0f, getResources().getDisplayMetrics());
        this.f4406a = 1;
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        if (this.f4406a == 0) {
            int iMin = Math.min(getMeasuredWidth(), getMeasuredHeight());
            this.g = iMin;
            this.d = iMin / 2;
            setMeasuredDimension(iMin, iMin);
        }
    }

    @Override // com.mbridge.msdk.widget.MBImageView, android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        Bitmap bitmapA;
        try {
            if (getDrawable() == null) {
                return;
            }
            try {
                Drawable drawable = getDrawable();
                if (drawable != null && (bitmapA = a(drawable)) != null && !bitmapA.isRecycled()) {
                    this.f = new BitmapShader(bitmapA, Shader.TileMode.CLAMP, Shader.TileMode.CLAMP);
                    float fMax = 1.0f;
                    if (this.f4406a == 0) {
                        fMax = (this.g * 1.0f) / Math.min(bitmapA.getWidth(), bitmapA.getHeight());
                    } else if (this.f4406a == 1) {
                        fMax = Math.max((getWidth() * 1.0f) / bitmapA.getWidth(), (getHeight() * 1.0f) / bitmapA.getHeight());
                    }
                    this.e.setScale(fMax, fMax);
                    this.f.setLocalMatrix(this.e);
                    this.c.setShader(this.f);
                }
            } catch (Throwable th) {
                z.d("RoundImageView", th.getMessage());
            }
            if (this.f4406a == 1) {
                canvas.drawRoundRect(this.h, this.b, this.b, this.c);
            } else {
                canvas.drawCircle(this.d, this.d, this.d, this.c);
            }
        } catch (Throwable th2) {
            z.d("RoundImageView", th2.getMessage());
        }
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        if (this.f4406a == 1) {
            this.h = new RectF(0.0f, 0.0f, getWidth(), getHeight());
        }
    }

    @Override // android.view.View
    protected Parcelable onSaveInstanceState() {
        Bundle bundle = new Bundle();
        bundle.putParcelable("state_instance", super.onSaveInstanceState());
        bundle.putInt("state_type", this.f4406a);
        bundle.putInt("state_border_radius", this.b);
        return bundle;
    }

    @Override // android.view.View
    protected void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof Bundle) {
            Bundle bundle = (Bundle) parcelable;
            super.onRestoreInstanceState(bundle.getParcelable("state_instance"));
            this.f4406a = bundle.getInt("state_type");
            this.b = bundle.getInt("state_border_radius");
            return;
        }
        super.onRestoreInstanceState(parcelable);
    }

    public void setBorderRadius(int i) {
        int iB = ae.b(getContext(), i);
        if (this.b != iB) {
            this.b = iB;
            invalidate();
        }
    }

    public void setType(int i) {
        if (this.f4406a != i) {
            this.f4406a = i;
            if (i != 1 && i != 0) {
                this.f4406a = 0;
            }
            requestLayout();
        }
    }

    private Bitmap a(Drawable drawable) {
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
            z.d("View", th.getMessage());
            return null;
        }
    }
}
