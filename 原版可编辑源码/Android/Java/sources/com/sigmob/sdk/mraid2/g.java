package com.sigmob.sdk.mraid2;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.HorizontalScrollView;
import com.sigmob.sdk.mraid2.b;

public class g extends HorizontalScrollView implements i {
    public static final float c = 1000.0f;
    private static final String d = "PageScrollView";
    private static final int e = 1000;
    public final int a;
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
        this.a = i2;
        this.b = i2 / 2;
        this.i = 0;
    }

    private boolean a(int i) {
        int i2 = this.a;
        int i3 = i % i2;
        Log.d(d, i3 + ":-----goPage------:" + (i / i2));
        float fCurrentTimeMillis = (float) (((long) (i * 1000)) / (System.currentTimeMillis() - this.g));
        if (fCurrentTimeMillis < 1000.0f && fCurrentTimeMillis > -1000.0f) {
            int i4 = this.b;
            if (i3 < i4) {
                return false;
            }
            if (i3 > this.a - i4) {
            }
        }
        return true;
    }

    @Override
    public void a(int i, int i2) {
        this.f = i;
        this.g = System.currentTimeMillis();
        Log.d(d, this.i + "--------onTouchStart--------" + this.f);
    }

    @Override
    public void a(final e eVar, int i, int i2) {
        final int i3 = this.f - i;
        Log.d(d, this.i + "-----------onTouchEnd--------:" + i3);
        final boolean zA = a(i3);
        final int width = getChildAt(0).getWidth();
        Log.d(d, width + "------是否翻页----" + zA);
        post(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:15:0x0044  */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public void run() {
                int i4;
                g gVar;
                int i5;
                if (zA) {
                    if (i3 > 0) {
                        i4 = 1;
                        if (g.this.i + g.this.a < width) {
                            gVar = g.this;
                            i5 = gVar.i + g.this.a;
                            gVar.i = i5;
                        }
                        if (g.this.h != null) {
                            g.this.h.a(eVar, i4, g.this.i / g.this.a);
                        }
                    } else {
                        i4 = 2;
                        if (g.this.i > 0) {
                            gVar = g.this;
                            i5 = gVar.i - g.this.a;
                            gVar.i = i5;
                        }
                        if (g.this.h != null) {
                        }
                    }
                }
                g gVar2 = g.this;
                gVar2.smoothScrollTo(gVar2.i, 0);
            }
        });
    }

    @Override
    public void b(int i, int i2) {
        final int i3 = this.f - i;
        final int width = getChildAt(0).getWidth();
        post(new Runnable() {
            @Override
            public void run() {
                g gVar;
                int iAbs;
                if (i3 > 0) {
                    if (g.this.i + g.this.a >= width) {
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

    @Override
    public void fling(int i) {
        super.fling(0);
    }

    @Override
    public ViewGroup getView() {
        return this;
    }

    @Override
    public void setPageChangedListener(b.c cVar) {
        this.h = cVar;
    }
}
