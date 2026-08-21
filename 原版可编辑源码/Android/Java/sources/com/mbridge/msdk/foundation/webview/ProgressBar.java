package com.mbridge.msdk.foundation.webview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Handler;
import android.os.Looper;
import android.util.AttributeSet;
import android.view.View;
import com.mbridge.msdk.foundation.webview.c;
import com.tkay.expressad.foundation.h.i;

public class ProgressBar extends View implements c {
    Runnable a;
    private Rect b;
    private float c;
    private float d;
    private long e;
    private float f;
    private boolean g;
    private float h;
    private float i;
    private float j;
    private long k;
    private int l;
    private int m;
    private int n;
    private int o;
    private long p;
    private Drawable q;
    private Drawable r;
    private Drawable s;
    private Drawable t;
    private boolean u;
    private c.a v;
    private Handler w;
    private boolean x;
    private boolean y;

    @Override
    public Bitmap getDrawingCache(boolean z) {
        return null;
    }

    public ProgressBar(Context context) {
        super(context);
        this.b = new Rect();
        this.d = 0.95f;
        this.p = 25L;
        this.u = false;
        this.w = new Handler(Looper.getMainLooper());
        this.a = new Runnable() {
            @Override
            public final void run() {
                ProgressBar.this.invalidate();
            }
        };
        this.y = false;
        setWillNotDraw(false);
    }

    public ProgressBar(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = new Rect();
        this.d = 0.95f;
        this.p = 25L;
        this.u = false;
        this.w = new Handler(Looper.getMainLooper());
        this.a = new Runnable() {
            @Override
            public final void run() {
                ProgressBar.this.invalidate();
            }
        };
        this.y = false;
        setWillNotDraw(false);
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0055  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x005b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void draw(Canvas canvas) {
        Drawable drawable;
        Drawable drawable2;
        if (!this.u) {
            this.u = true;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = this.y ? 0L : jCurrentTimeMillis - this.e;
        this.f = Math.abs(j / 1000.0f);
        this.e = jCurrentTimeMillis;
        long j2 = this.k + j;
        this.k = j2;
        float f = 0.4f;
        if (this.g) {
            if (this.x) {
            }
        } else if (j2 >= 2000) {
            f = 0.05f;
        } else if (this.n == 1) {
            if (this.x) {
                f = 1.0f;
            }
        } else {
            if (this.m == 1) {
                if (!this.x) {
                }
            } else if (this.x) {
            }
            f = 0.2f;
        }
        this.j = f;
        float f2 = this.i + (f * this.f);
        this.i = f2;
        if (!this.g) {
            float f3 = this.d;
            if (f2 > f3) {
                this.i = f3;
            }
        }
        this.b.right = (int) (this.i * this.c);
        this.w.removeCallbacksAndMessages(null);
        this.w.postDelayed(this.a, this.p);
        super.draw(canvas);
        float f4 = this.f;
        if (this.g) {
            int i = (int) ((1.0f - (this.h / (this.c * 0.5f))) * 255.0f);
            if (i < 0) {
                i = 0;
            }
            if (this.h > this.c * 0.5f) {
                setVisible(false);
            }
            Drawable drawable3 = this.r;
            if (drawable3 != null) {
                drawable3.setAlpha(i);
            }
            Drawable drawable4 = this.s;
            if (drawable4 != null) {
                drawable4.setAlpha(i);
            }
            Drawable drawable5 = this.q;
            if (drawable5 != null) {
                drawable5.setAlpha(i);
            }
            canvas.save();
            canvas.translate(this.h, 0.0f);
        }
        if (this.r != null && this.q != null) {
            Drawable drawable6 = this.r;
            drawable6.setBounds(0, 0, (int) (this.b.width() - (this.q.getIntrinsicWidth() * 0.05f)), drawable6.getIntrinsicHeight());
            this.r.draw(canvas);
        }
        if (this.g && (drawable2 = this.s) != null && this.q != null) {
            int intrinsicWidth = drawable2.getIntrinsicWidth();
            Drawable drawable7 = this.s;
            drawable7.setBounds(0, 0, intrinsicWidth, drawable7.getIntrinsicHeight());
            canvas.save();
            canvas.translate(-intrinsicWidth, 0.0f);
            this.s.draw(canvas);
            canvas.restore();
        }
        if (this.q != null) {
            canvas.save();
            canvas.translate(this.b.width() - getWidth(), 0.0f);
            this.q.draw(canvas);
            canvas.restore();
        }
        if (!this.g && Math.abs(this.i - this.d) < 1.0E-5f && (drawable = this.t) != null) {
            int i2 = (int) (this.l + (f4 * 0.2f * this.c));
            this.l = i2;
            if (i2 + drawable.getIntrinsicWidth() >= this.b.width()) {
                this.l = -this.t.getIntrinsicWidth();
            }
            canvas.save();
            canvas.translate(this.l, 0.0f);
            this.t.draw(canvas);
            canvas.restore();
        }
        if (this.g) {
            canvas.restore();
        }
    }

    public void onThemeChange() {
        if (this.u) {
            initResource(true);
        }
    }

    public void initResource(boolean z) {
        if (z || (this.t == null && this.q == null && this.r == null && this.s == null)) {
            Drawable drawable = getResources().getDrawable(getResources().getIdentifier("mbridge_cm_highlight", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
            this.t = drawable;
            if (drawable != null) {
                drawable.setBounds(0, 0, drawable.getIntrinsicWidth(), this.t.getIntrinsicHeight());
            }
            Drawable drawable2 = getResources().getDrawable(getResources().getIdentifier("mbridge_cm_head", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
            this.q = drawable2;
            if (drawable2 != null) {
                drawable2.setBounds(0, 0, drawable2.getIntrinsicWidth(), this.q.getIntrinsicHeight());
            }
            this.r = getResources().getDrawable(getResources().getIdentifier("mbridge_cm_tail", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
            this.s = getResources().getDrawable(getResources().getIdentifier("mbridge_cm_end_animation", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        }
    }

    @Override
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        Drawable drawable = this.t;
        if (drawable != null) {
            drawable.setBounds(0, 0, (int) (((double) drawable.getIntrinsicWidth()) * 1.5d), getHeight());
        }
        Drawable drawable2 = this.q;
        if (drawable2 != null) {
            drawable2.setBounds(0, 0, getWidth(), getHeight());
        }
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
    }

    public void startEndAnimation() {
        if (this.g) {
            return;
        }
        this.g = true;
        this.h = 0.0f;
    }

    public void setProgress(float f, boolean z) {
        if (!z || f < 1.0f) {
            return;
        }
        startEndAnimation();
    }

    public void setVisible(boolean z) {
        if (z) {
            this.x = true;
            this.e = System.currentTimeMillis();
            this.f = 0.0f;
            this.k = 0L;
            this.g = false;
            this.h = 0.0f;
            this.i = 0.0f;
            this.c = getMeasuredWidth();
            this.y = false;
            this.m = 0;
            this.n = 0;
            this.o = 0;
            Drawable drawable = this.t;
            if (drawable != null) {
                this.l = -drawable.getIntrinsicWidth();
            } else {
                this.l = 0;
            }
            Drawable drawable2 = this.r;
            if (drawable2 != null) {
                drawable2.setAlpha(255);
            }
            Drawable drawable3 = this.s;
            if (drawable3 != null) {
                drawable3.setAlpha(255);
            }
            Drawable drawable4 = this.q;
            if (drawable4 != null) {
                drawable4.setAlpha(255);
            }
            setVisibility(0);
            invalidate();
            return;
        }
        setVisibility(4);
    }

    public float getProgress() {
        return this.i;
    }

    public void setProgressBarListener(c.a aVar) {
        this.v = aVar;
    }

    @Override
    public void setVisibility(int i) {
        super.setVisibility(i);
        if (i == 0) {
            c.a aVar = this.v;
            if (aVar != null) {
                aVar.a(true);
                return;
            }
            return;
        }
        c.a aVar2 = this.v;
        if (aVar2 != null) {
            aVar2.a(false);
        }
    }

    public void setProgressState(int i) {
        if (i == 5) {
            this.m = 1;
            this.n = 0;
            this.o = 0;
            this.k = 0L;
            return;
        }
        if (i == 6) {
            this.n = 1;
            if (this.o == 1) {
                startEndAnimation();
            }
            this.k = 0L;
            return;
        }
        if (i == 7) {
            startEndAnimation();
        } else {
            if (i != 8) {
                return;
            }
            this.o = 1;
            if (this.n == 1) {
                startEndAnimation();
            }
        }
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.c = getMeasuredWidth();
    }

    public void setPaused(boolean z) {
        this.y = z;
        if (z) {
            return;
        }
        this.e = System.currentTimeMillis();
    }
}
