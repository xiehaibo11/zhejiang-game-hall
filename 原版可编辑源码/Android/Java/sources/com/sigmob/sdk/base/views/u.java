package com.sigmob.sdk.base.views;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.ColorFilter;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.view.View;

public class u extends Drawable {
    private static final int i = 1;
    private final Paint a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final int[] g;
    private RectF h;

    public static class a {
        private int e;
        private int f;
        private int a = 1;
        private int b = 12;
        private int c = Color.parseColor("#4d000000");
        private int d = 18;
        private int[] g = {0};

        a() {
            this.e = 0;
            this.f = 0;
            this.e = 0;
            this.f = 0;
        }

        a a(int i) {
            this.a = i;
            return this;
        }

        a a(int[] iArr) {
            this.g = iArr;
            return this;
        }

        u a() {
            return new u(this.a, this.g, this.b, this.c, this.d, this.e, this.f);
        }

        a b(int i) {
            this.b = i;
            return this;
        }

        a c(int i) {
            this.c = i;
            return this;
        }

        a d(int i) {
            this.d = i;
            return this;
        }

        a e(int i) {
            this.e = i;
            return this;
        }

        a f(int i) {
            this.f = i;
            return this;
        }

        a g(int i) {
            this.g[0] = i;
            return this;
        }
    }

    private u(int i2, int[] iArr, int i3, int i4, int i5, int i6, int i7) {
        this.c = i2;
        this.g = iArr;
        this.d = i3;
        this.b = i5;
        this.e = i6;
        this.f = i7;
        Paint paint = new Paint();
        this.a = paint;
        paint.setColor(0);
        this.a.setAntiAlias(true);
        this.a.setShadowLayer(i5, i6, i7, i4);
        this.a.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_ATOP));
    }

    public static void a(View view, int i2, int i3, int i4, int i5, int i6, int i7) {
        u uVarA = new a().g(i2).b(i3).c(i4).d(i5).e(i6).f(i7).a();
        view.setLayerType(1, null);
        if (Build.VERSION.SDK_INT >= 16) {
            view.setBackground(uVarA);
        } else {
            view.setBackgroundDrawable(uVarA);
        }
    }

    @Override
    public void draw(Canvas canvas) {
        Paint paint = new Paint();
        int[] iArr = this.g;
        if (iArr != null) {
            if (iArr.length == 1) {
                paint.setColor(iArr[0]);
            } else {
                paint.setShader(new LinearGradient(this.h.left, this.h.height() / 2.0f, this.h.right, this.h.height() / 2.0f, this.g, (float[]) null, Shader.TileMode.CLAMP));
            }
        }
        paint.setAntiAlias(true);
        if (this.c != 1) {
            canvas.drawCircle(this.h.centerX(), this.h.centerY(), Math.min(this.h.width(), this.h.height()) / 2.0f, this.a);
            canvas.drawCircle(this.h.centerX(), this.h.centerY(), Math.min(this.h.width(), this.h.height()) / 2.0f, paint);
            return;
        }
        RectF rectF = this.h;
        int i2 = this.d;
        canvas.drawRoundRect(rectF, i2, i2, this.a);
        RectF rectF2 = this.h;
        int i3 = this.d;
        canvas.drawRoundRect(rectF2, i3, i3, paint);
    }

    @Override
    public int getOpacity() {
        return -3;
    }

    @Override
    public void setAlpha(int i2) {
        this.a.setAlpha(i2);
    }

    @Override
    public void setBounds(int i2, int i3, int i4, int i5) {
        super.setBounds(i2, i3, i4, i5);
        int i6 = this.b;
        int i7 = this.e;
        int i8 = this.f;
        this.h = new RectF((i2 + i6) - i7, (i3 + i6) - i8, (i4 - i6) - i7, (i5 - i6) - i8);
    }

    @Override
    public void setColorFilter(ColorFilter colorFilter) {
        this.a.setColorFilter(colorFilter);
    }
}
