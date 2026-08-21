package com.sigmob.sdk.mraid2;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.ScrollView;
import com.sigmob.sdk.mraid2.b;

public class l extends ScrollView implements i {
    public static final float c = 1000.0f;
    private static final String d = "PageScrollView";
    private static final int e = 1000;
    public final int a;
    public final int b;
    private int f;
    private long g;
    private b.c h;
    private int i;

    public l(Context context) {
        this(context, null);
    }

    public l(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public l(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        int i2 = getResources().getDisplayMetrics().heightPixels;
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
        this.f = i2;
        this.g = System.currentTimeMillis();
        Log.d(d, this.i + "--------onTouchStart--------" + this.f);
    }

    @Override
    public void a(final e eVar, int i, int i2) {
        final int i3 = this.f - i2;
        Log.d(d, this.i + "-----------onTouchEnd--------:" + i3);
        final boolean zA = a(i3);
        final int height = getChildAt(0).getHeight();
        post(new Runnable() {
            /* JADX WARN: Removed duplicated region for block: B:15:0x0044  */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public void run() {
                int i4;
                l lVar;
                int i5;
                if (zA) {
                    if (i3 > 0) {
                        i4 = 1;
                        if (l.this.i + l.this.a < height) {
                            lVar = l.this;
                            i5 = lVar.i + l.this.a;
                            lVar.i = i5;
                        }
                        if (l.this.h != null) {
                            l.this.h.a(eVar, i4, l.this.i / l.this.a);
                        }
                    } else {
                        i4 = 2;
                        if (l.this.i > 0) {
                            lVar = l.this;
                            i5 = lVar.i - l.this.a;
                            lVar.i = i5;
                        }
                        if (l.this.h != null) {
                        }
                    }
                }
                l lVar2 = l.this;
                lVar2.smoothScrollTo(0, lVar2.i);
            }
        });
    }

    @Override
    public void b(int i, int i2) {
        final int i3 = this.f - i2;
        final int height = getChildAt(0).getHeight();
        post(new Runnable() {
            @Override
            public void run() {
                l lVar;
                int iAbs;
                if (i3 > 0) {
                    if (l.this.i + l.this.a >= height) {
                        return;
                    }
                    lVar = l.this;
                    iAbs = lVar.i + Math.abs(i3);
                } else {
                    if (l.this.i <= 0) {
                        return;
                    }
                    lVar = l.this;
                    iAbs = lVar.i - Math.abs(i3);
                }
                lVar.scrollTo(0, iAbs);
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
