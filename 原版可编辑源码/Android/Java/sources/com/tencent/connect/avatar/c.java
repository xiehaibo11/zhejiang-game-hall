package com.tencent.connect.avatar;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.graphics.PointF;
import android.graphics.Rect;
import android.view.MotionEvent;
import android.view.animation.Animation;
import android.view.animation.ScaleAnimation;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;

public class c extends ImageView {
    final String a;
    public boolean b;
    private Matrix c;
    private Matrix d;
    private int e;
    private float f;
    private float g;
    private Bitmap h;
    private boolean i;
    private float j;
    private float k;
    private PointF l;
    private PointF m;
    private float n;
    private float o;
    private Rect p;

    private void a() {
    }

    public c(Context context) {
        super(context);
        this.c = new Matrix();
        this.d = new Matrix();
        this.e = 0;
        this.f = 1.0f;
        this.g = 1.0f;
        this.i = false;
        this.a = "TouchView";
        this.l = new PointF();
        this.m = new PointF();
        this.n = 1.0f;
        this.o = 0.0f;
        this.b = false;
        Rect rect = new Rect();
        this.p = rect;
        getDrawingRect(rect);
        a();
    }

    @Override
    public void setImageBitmap(Bitmap bitmap) {
        super.setImageBitmap(bitmap);
        this.h = bitmap;
        if (bitmap != null) {
            this.h = bitmap;
        }
    }

    private float a(MotionEvent motionEvent) {
        if (motionEvent.getPointerCount() < 2) {
            return 0.0f;
        }
        float x = motionEvent.getX(0) - motionEvent.getX(1);
        float y = motionEvent.getY(0) - motionEvent.getY(1);
        return (float) Math.sqrt((x * x) + (y * y));
    }

    public void a(Rect rect) {
        this.p = rect;
        if (this.h != null) {
            c();
        }
    }

    private void a(PointF pointF) {
        if (this.h == null) {
            return;
        }
        float[] fArr = new float[9];
        this.c.getValues(fArr);
        float f = fArr[2];
        float f2 = fArr[5];
        float f3 = fArr[0];
        float width = this.h.getWidth() * f3;
        float height = this.h.getHeight() * f3;
        float f4 = this.p.left - f;
        if (f4 <= 1.0f) {
            f4 = 1.0f;
        }
        float f5 = (f + width) - this.p.right;
        if (f5 <= 1.0f) {
            f5 = 1.0f;
        }
        float fWidth = ((this.p.width() * f4) / (f5 + f4)) + this.p.left;
        float f6 = this.p.top - f2;
        float f7 = (f2 + height) - this.p.bottom;
        if (f6 <= 1.0f) {
            f6 = 1.0f;
        }
        pointF.set(fWidth, ((this.p.height() * f6) / ((f7 > 1.0f ? f7 : 1.0f) + f6)) + this.p.top);
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x008b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.i) {
            return true;
        }
        int action = motionEvent.getAction() & 255;
        if (action == 0) {
            this.c.set(getImageMatrix());
            this.d.set(this.c);
            this.l.set(motionEvent.getX(), motionEvent.getY());
            this.e = 1;
        } else if (action == 1) {
            b();
            this.e = 0;
        } else if (action == 2) {
            int i = this.e;
            if (i == 1) {
                this.c.set(this.d);
                this.c.postTranslate(motionEvent.getX() - this.l.x, motionEvent.getY() - this.l.y);
                setImageMatrix(this.c);
            } else if (i == 2) {
                Matrix matrix = this.c;
                matrix.set(matrix);
                float fA = a(motionEvent);
                if (fA > 10.0f) {
                    this.c.set(this.d);
                    float f = fA / this.n;
                    this.c.postScale(f, f, this.m.x, this.m.y);
                }
                setImageMatrix(this.c);
            }
        } else if (action == 5) {
            float fA2 = a(motionEvent);
            this.n = fA2;
            if (fA2 > 10.0f) {
                this.d.set(this.c);
                a(this.m);
                this.e = 2;
            }
        } else if (action == 6) {
        }
        this.b = true;
        return true;
    }

    private void b() {
        if (this.h == null) {
            return;
        }
        float fWidth = this.p.width();
        float fHeight = this.p.height();
        float[] fArr = new float[9];
        this.c.getValues(fArr);
        float f = fArr[2];
        float f2 = fArr[5];
        boolean z = false;
        float f3 = fArr[0];
        Animation translateAnimation = null;
        float f4 = this.f;
        if (f3 > f4) {
            float f5 = f4 / f3;
            this.o = f5;
            this.c.postScale(f5, f5, this.m.x, this.m.y);
            setImageMatrix(this.c);
            float f6 = this.o;
            translateAnimation = new ScaleAnimation(1.0f / f6, 1.0f, 1.0f / f6, 1.0f, this.m.x, this.m.y);
        } else {
            float f7 = this.g;
            if (f3 < f7) {
                float f8 = f7 / f3;
                this.o = f8;
                this.c.postScale(f8, f8, this.m.x, this.m.y);
                float f9 = this.o;
                translateAnimation = new ScaleAnimation(1.0f, f9, 1.0f, f9, this.m.x, this.m.y);
            } else {
                float width = this.h.getWidth() * f3;
                float height = this.h.getHeight() * f3;
                float f10 = this.p.left - f;
                float f11 = this.p.top - f2;
                if (f10 < 0.0f) {
                    f = this.p.left;
                    z = true;
                }
                if (f11 < 0.0f) {
                    f2 = this.p.top;
                    z = true;
                }
                float f12 = height - f11;
                if (width - f10 < fWidth) {
                    f = this.p.left - (width - fWidth);
                    z = true;
                }
                if (f12 < fHeight) {
                    f2 = this.p.top - (height - fHeight);
                    z = true;
                }
                if (z) {
                    float f13 = fArr[2] - f;
                    float f14 = fArr[5] - f2;
                    fArr[2] = f;
                    fArr[5] = f2;
                    this.c.setValues(fArr);
                    setImageMatrix(this.c);
                    translateAnimation = new TranslateAnimation(f13, 0.0f, f14, 0.0f);
                } else {
                    setImageMatrix(this.c);
                }
            }
        }
        if (translateAnimation != null) {
            this.i = true;
            translateAnimation.setDuration(300L);
            startAnimation(translateAnimation);
            new Thread(new Runnable() {
                @Override
                public void run() {
                    try {
                        Thread.sleep(300L);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    c.this.post(new Runnable() {
                        @Override
                        public void run() {
                            c.this.clearAnimation();
                            c.this.b();
                        }
                    });
                    c.this.i = false;
                }
            }).start();
        }
    }

    private void c() {
        if (this.h == null) {
            return;
        }
        float[] fArr = {fMax, 0.0f, this.j, 0.0f, fMax, height, 0.0f, 0.0f, 0.0f};
        this.c.getValues(fArr);
        float fMax = Math.max(this.p.width() / this.h.getWidth(), this.p.height() / this.h.getHeight());
        this.j = this.p.left - (((this.h.getWidth() * fMax) - this.p.width()) / 2.0f);
        float height = this.p.top - (((this.h.getHeight() * fMax) - this.p.height()) / 2.0f);
        this.k = height;
        this.c.setValues(fArr);
        float fMin = Math.min(2048.0f / this.h.getWidth(), 2048.0f / this.h.getHeight());
        this.f = fMin;
        this.g = fMax;
        if (fMin < fMax) {
            this.f = fMax;
        }
        setImageMatrix(this.c);
    }
}
