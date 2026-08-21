package com.mbridge.msdk.dycreator.baseview.cusview;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.graphics.Xfermode;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.foundation.tools.z;

public class MBridgeImageView extends ImageView {
    private Xfermode a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private float[] k;
    private float[] l;
    private RectF m;
    private RectF n;
    private boolean o;
    private boolean p;
    private Path q;
    private Paint r;

    public MBridgeImageView(Context context) {
        this(context, null);
    }

    public MBridgeImageView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBridgeImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.q = new Path();
        this.r = new Paint();
        this.k = new float[8];
        this.l = new float[8];
        this.n = new RectF();
        this.m = new RectF();
        this.a = new PorterDuffXfermode(PorterDuff.Mode.DST_IN);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        int i7;
        super.onSizeChanged(i, i2, i3, i4);
        this.b = i;
        this.c = i2;
        int i8 = 0;
        if (this.p) {
            try {
                if (this.k != null && this.l != null) {
                    while (true) {
                        i5 = 2;
                        if (i8 >= 2) {
                            break;
                        }
                        this.k[i8] = this.e;
                        this.l[i8] = this.e - (this.i / 2.0f);
                        i8++;
                    }
                    while (true) {
                        i6 = 4;
                        if (i5 >= 4) {
                            break;
                        }
                        this.k[i5] = this.f;
                        this.l[i5] = this.f - (this.i / 2.0f);
                        i5++;
                    }
                    while (true) {
                        if (i6 >= 6) {
                            break;
                        }
                        this.k[i6] = this.g;
                        this.l[i6] = this.g - (this.i / 2.0f);
                        i6++;
                    }
                    for (i7 = 6; i7 < 8; i7++) {
                        this.k[i7] = this.h;
                        this.l[i7] = this.h - (this.i / 2.0f);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else if (this.k != null && this.l != null) {
            while (i8 < this.k.length) {
                try {
                    this.k[i8] = this.d;
                    this.l[i8] = this.d - (this.i / 2.0f);
                    i8++;
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        }
        RectF rectF = this.n;
        if (rectF != null) {
            int i9 = this.i;
            rectF.set(i9 / 2.0f, i9 / 2.0f, this.b - (i9 / 2.0f), this.c - (i9 / 2.0f));
        }
        RectF rectF2 = this.m;
        if (rectF2 != null) {
            rectF2.set(0.0f, 0.0f, this.b, this.c);
        }
    }

    @Override
    protected void onDraw(Canvas canvas) {
        if (canvas == null) {
            return;
        }
        try {
            canvas.saveLayer(this.m, null, 31);
            canvas.scale(((this.b - (this.i * 2)) * 1.0f) / this.b, ((this.c - (this.i * 2)) * 1.0f) / this.c, this.b / 2.0f, this.c / 2.0f);
            super.onDraw(canvas);
            if (this.r != null) {
                this.r.reset();
                this.r.setAntiAlias(true);
                this.r.setStyle(Paint.Style.FILL);
                this.r.setXfermode(this.a);
            }
            if (this.q != null) {
                this.q.reset();
                this.q.addRoundRect(this.m, this.l, Path.Direction.CCW);
            }
            canvas.drawPath(this.q, this.r);
            if (this.r != null) {
                this.r.setXfermode(null);
            }
            canvas.restore();
            if (this.o) {
                int i = this.i;
                int i2 = this.j;
                RectF rectF = this.n;
                float[] fArr = this.k;
                try {
                    if (this.q != null) {
                        this.q.reset();
                    }
                    if (this.r != null) {
                        this.r.setStrokeWidth(i);
                        this.r.setColor(i2);
                        this.r.setStyle(Paint.Style.STROKE);
                    }
                    if (this.q != null) {
                        this.q.addRoundRect(rectF, fArr, Path.Direction.CCW);
                    }
                    if (canvas != null) {
                        canvas.drawPath(this.q, this.r);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        } catch (Exception e2) {
            z.a("MBridgeImageView", e2.getMessage());
        }
    }

    public void setCornerRadius(int i) {
        this.d = i;
    }

    public void setBorder(int i, int i2, int i3) {
        this.o = true;
        this.i = i2;
        this.j = i3;
        this.d = i;
    }

    public void setCustomBorder(int i, int i2, int i3, int i4, int i5, int i6) {
        this.o = true;
        this.p = true;
        this.i = i5;
        this.j = i6;
        this.e = i;
        this.g = i3;
        this.f = i2;
        this.h = i4;
    }
}
