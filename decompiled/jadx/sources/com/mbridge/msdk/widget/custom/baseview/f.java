package com.mbridge.msdk.widget.custom.baseview;

import android.graphics.drawable.GradientDrawable;

/* JADX INFO: compiled from: StrokeGradientDrawable.java */
/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4467a;
    private int b;
    private GradientDrawable c;

    public f(GradientDrawable gradientDrawable) {
        this.c = gradientDrawable;
    }

    public final void a(int i) {
        this.f4467a = i;
        this.c.setStroke(i, this.b);
    }

    public final void b(int i) {
        this.b = i;
        this.c.setStroke(this.f4467a, i);
    }

    public final GradientDrawable a() {
        return this.c;
    }
}
