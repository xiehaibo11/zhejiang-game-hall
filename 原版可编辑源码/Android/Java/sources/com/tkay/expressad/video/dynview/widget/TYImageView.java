package com.tkay.expressad.video.dynview.widget;

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

public class TYImageView extends ImageView {
    private static final String a = "MBridgeImageView";
    private Xfermode b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private float[] l;
    private float[] m;
    private RectF n;
    private RectF o;
    private boolean p;
    private boolean q;
    private Path r;
    private Paint s;

    public TYImageView(Context context) {
        this(context, null);
    }

    public TYImageView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TYImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.r = new Path();
        this.s = new Paint();
        this.l = new float[8];
        this.m = new float[8];
        this.o = new RectF();
        this.n = new RectF();
        this.b = new PorterDuffXfermode(PorterDuff.Mode.DST_IN);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        int i7;
        super.onSizeChanged(i, i2, i3, i4);
        this.c = i;
        this.d = i2;
        int i8 = 0;
        if (this.q) {
            try {
                if (this.l != null && this.m != null) {
                    while (true) {
                        i5 = 2;
                        if (i8 >= 2) {
                            break;
                        }
                        this.l[i8] = this.f;
                        this.m[i8] = this.f - (this.j / 2.0f);
                        i8++;
                    }
                    while (true) {
                        i6 = 4;
                        if (i5 >= 4) {
                            break;
                        }
                        this.l[i5] = this.g;
                        this.m[i5] = this.g - (this.j / 2.0f);
                        i5++;
                    }
                    while (true) {
                        if (i6 >= 6) {
                            break;
                        }
                        this.l[i6] = this.h;
                        this.m[i6] = this.h - (this.j / 2.0f);
                        i6++;
                    }
                    for (i7 = 6; i7 < 8; i7++) {
                        this.l[i7] = this.i;
                        this.m[i7] = this.i - (this.j / 2.0f);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else if (this.l != null && this.m != null) {
            while (i8 < this.l.length) {
                try {
                    this.l[i8] = this.e;
                    this.m[i8] = this.e - (this.j / 2.0f);
                    i8++;
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
        }
        RectF rectF = this.o;
        if (rectF != null) {
            int i9 = this.j;
            rectF.set(i9 / 2.0f, i9 / 2.0f, this.c - (i9 / 2.0f), this.d - (i9 / 2.0f));
        }
        RectF rectF2 = this.n;
        if (rectF2 != null) {
            rectF2.set(0.0f, 0.0f, this.c, this.d);
        }
    }

    @Override
    protected void onDraw(Canvas canvas) {
        if (canvas == null) {
            return;
        }
        try {
            canvas.saveLayer(this.n, null, 31);
            canvas.scale(((this.c - (this.j * 2)) * 1.0f) / this.c, ((this.d - (this.j * 2)) * 1.0f) / this.d, this.c / 2.0f, this.d / 2.0f);
            super.onDraw(canvas);
            if (this.s != null) {
                this.s.reset();
                this.s.setAntiAlias(true);
                this.s.setStyle(Paint.Style.FILL);
                this.s.setXfermode(this.b);
            }
            if (this.r != null) {
                this.r.reset();
                this.r.addRoundRect(this.n, this.m, Path.Direction.CCW);
            }
            canvas.drawPath(this.r, this.s);
            if (this.s != null) {
                this.s.setXfermode(null);
            }
            canvas.restore();
            if (this.p) {
                a(canvas, this.j, this.k, this.o, this.l);
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void setCornerRadius(int i) {
        this.e = i;
    }

    public void setBorder(int i, int i2, int i3) {
        this.p = true;
        this.j = i2;
        this.k = i3;
        this.e = i;
    }

    public void setCustomBorder(int i, int i2, int i3, int i4, int i5, int i6) {
        this.p = true;
        this.q = true;
        this.j = i5;
        this.k = i6;
        this.f = i;
        this.h = i3;
        this.g = i2;
        this.i = i4;
    }

    private void a(Canvas canvas) {
        a(canvas, this.j, this.k, this.o, this.l);
    }

    private void a(Canvas canvas, int i, int i2, RectF rectF, float[] fArr) {
        try {
            a(i, i2);
            if (this.r != null) {
                this.r.addRoundRect(rectF, fArr, Path.Direction.CCW);
            }
            if (canvas != null) {
                canvas.drawPath(this.r, this.s);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void a(int i, int i2) {
        Path path = this.r;
        if (path != null) {
            path.reset();
        }
        Paint paint = this.s;
        if (paint != null) {
            paint.setStrokeWidth(i);
            this.s.setColor(i2);
            this.s.setStyle(Paint.Style.STROKE);
        }
    }

    private void a() {
        if (this.l == null || this.m == null) {
            return;
        }
        for (int i = 0; i < this.l.length; i++) {
            try {
                this.l[i] = this.e;
                this.m[i] = this.e - (this.j / 2.0f);
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
    }

    private void b() {
        int i;
        int i2;
        int i3;
        try {
            if (this.l == null || this.m == null) {
                return;
            }
            int i4 = 0;
            while (true) {
                i = 2;
                if (i4 >= 2) {
                    break;
                }
                this.l[i4] = this.f;
                this.m[i4] = this.f - (this.j / 2.0f);
                i4++;
            }
            while (true) {
                i2 = 4;
                if (i >= 4) {
                    break;
                }
                this.l[i] = this.g;
                this.m[i] = this.g - (this.j / 2.0f);
                i++;
            }
            while (true) {
                if (i2 >= 6) {
                    break;
                }
                this.l[i2] = this.h;
                this.m[i2] = this.h - (this.j / 2.0f);
                i2++;
            }
            for (i3 = 6; i3 < 8; i3++) {
                this.l[i3] = this.i;
                this.m[i3] = this.i - (this.j / 2.0f);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void c() {
        RectF rectF = this.o;
        if (rectF != null) {
            int i = this.j;
            rectF.set(i / 2.0f, i / 2.0f, this.c - (i / 2.0f), this.d - (i / 2.0f));
        }
    }

    private void d() {
        RectF rectF = this.n;
        if (rectF != null) {
            rectF.set(0.0f, 0.0f, this.c, this.d);
        }
    }
}
