package com.mbridge.msdk.widget.custom.baseview;

public final class f {
    private int a;
    private int b;
    private android.graphics.drawable.GradientDrawable c;

    public f(android.graphics.drawable.GradientDrawable r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            return
    }

    public final android.graphics.drawable.GradientDrawable a() {
            r1 = this;
            android.graphics.drawable.GradientDrawable r0 = r1.c
            return r0
    }

    public final void a(int r3) {
            r2 = this;
            r2.a = r3
            android.graphics.drawable.GradientDrawable r0 = r2.c
            int r1 = r2.b
            r0.setStroke(r3, r1)
            return
    }

    public final void b(int r3) {
            r2 = this;
            r2.b = r3
            android.graphics.drawable.GradientDrawable r0 = r2.c
            int r1 = r2.a
            r0.setStroke(r1, r3)
            return
    }
}
