package com.sigmob.sdk.mraid2;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.HorizontalScrollView;
import com.sigmob.sdk.mraid2.b;

/* JADX INFO: loaded from: classes3.dex */
public class g extends HorizontalScrollView implements i {
    public static final float c = 1000.0f;
    private static final String d = "PageScrollView";
    private static final int e = 1000;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5070a;
    public final int b;
    private int f;
    private long g;
    private b.c h;
    private int i;

    public g(Context context) {
        this(context, null);
    }

    public g(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public g(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        int i2 = getResources().getDisplayMetrics().widthPixels;
        this.f5070a = i2;
        this.b = i2 / 2;
        this.i = 0;
    }

    private boolean a(int i) {
        int i2 = this.f5070a;
        int i3 = i % i2;
        Log.d(d, i3 + ":-----goPage------:" + (i / i2));
        float fCurrentTimeMillis = (float) (((long) (i * 1000)) / (System.currentTimeMillis() - this.g));
        if (fCurrentTimeMillis < 1000.0f && fCurrentTimeMillis > -1000.0f) {
            int i4 = this.b;
            if (i3 < i4) {
                return false;
            }
            if (i3 > this.f5070a - i4) {
            }
        }
        return true;
    }

    @Override // com.sigmob.sdk.mraid2.i
    public void a(int i, int i2) {
        this.f = i;
        this.g = System.currentTimeMillis();
        Log.d(d, this.i + "--------onTouchStart--------" + this.f);
    }

    @Override // com.sigmob.sdk.mraid2.i
    public void a(final e eVar, int i, int i2) {
        final int i3 = this.f - i;
        Log.d(d, this.i + "-----------onTouchEnd--------:" + i3);
        final boolean zA = a(i3);
        final int width = getChildAt(0).getWidth();
        Log.d(d, width + "------是否翻页----" + zA);
        post(new Runnable() { // from class: com.sigmob.sdk.mraid2.g.2
            /* JADX WARN: Removed duplicated region for block: B:15:0x0044  */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void run() {
                /*
                    r5 = this;
                    boolean r0 = r2
                    if (r0 == 0) goto L5a
                    int r0 = r3
                    if (r0 <= 0) goto L27
                    r0 = 1
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    int r1 = com.sigmob.sdk.mraid2.g.a(r1)
                    com.sigmob.sdk.mraid2.g r2 = com.sigmob.sdk.mraid2.g.this
                    int r2 = r2.f5070a
                    int r1 = r1 + r2
                    int r2 = r4
                    if (r1 >= r2) goto L3c
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    int r2 = com.sigmob.sdk.mraid2.g.a(r1)
                    com.sigmob.sdk.mraid2.g r3 = com.sigmob.sdk.mraid2.g.this
                    int r3 = r3.f5070a
                    int r2 = r2 + r3
                L23:
                    com.sigmob.sdk.mraid2.g.a(r1, r2)
                    goto L3c
                L27:
                    r0 = 2
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    int r1 = com.sigmob.sdk.mraid2.g.a(r1)
                    if (r1 <= 0) goto L3c
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    int r2 = com.sigmob.sdk.mraid2.g.a(r1)
                    com.sigmob.sdk.mraid2.g r3 = com.sigmob.sdk.mraid2.g.this
                    int r3 = r3.f5070a
                    int r2 = r2 - r3
                    goto L23
                L3c:
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    com.sigmob.sdk.mraid2.b$c r1 = com.sigmob.sdk.mraid2.g.b(r1)
                    if (r1 == 0) goto L5a
                    com.sigmob.sdk.mraid2.g r1 = com.sigmob.sdk.mraid2.g.this
                    com.sigmob.sdk.mraid2.b$c r1 = com.sigmob.sdk.mraid2.g.b(r1)
                    com.sigmob.sdk.mraid2.e r2 = r5
                    com.sigmob.sdk.mraid2.g r3 = com.sigmob.sdk.mraid2.g.this
                    int r3 = com.sigmob.sdk.mraid2.g.a(r3)
                    com.sigmob.sdk.mraid2.g r4 = com.sigmob.sdk.mraid2.g.this
                    int r4 = r4.f5070a
                    int r3 = r3 / r4
                    r1.a(r2, r0, r3)
                L5a:
                    com.sigmob.sdk.mraid2.g r0 = com.sigmob.sdk.mraid2.g.this
                    int r1 = com.sigmob.sdk.mraid2.g.a(r0)
                    r2 = 0
                    r0.smoothScrollTo(r1, r2)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.mraid2.g.AnonymousClass2.run():void");
            }
        });
    }

    @Override // com.sigmob.sdk.mraid2.i
    public void b(int i, int i2) {
        final int i3 = this.f - i;
        final int width = getChildAt(0).getWidth();
        post(new Runnable() { // from class: com.sigmob.sdk.mraid2.g.1
            @Override // java.lang.Runnable
            public void run() {
                g gVar;
                int iAbs;
                if (i3 > 0) {
                    if (g.this.i + g.this.f5070a >= width) {
                        return;
                    }
                    gVar = g.this;
                    iAbs = gVar.i + Math.abs(i3);
                } else {
                    if (g.this.i <= 0) {
                        return;
                    }
                    gVar = g.this;
                    iAbs = gVar.i - Math.abs(i3);
                }
                gVar.scrollTo(iAbs, 0);
            }
        });
    }

    @Override // android.widget.HorizontalScrollView
    public void fling(int i) {
        super.fling(0);
    }

    @Override // com.sigmob.sdk.mraid2.i
    public ViewGroup getView() {
        return this;
    }

    @Override // com.sigmob.sdk.mraid2.i
    public void setPageChangedListener(b.c cVar) {
        this.h = cVar;
    }
}
