package com.sigmob.sdk.base.common;

import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import com.sigmob.sdk.base.models.BaseAdUnit;

/* JADX INFO: loaded from: classes3.dex */
public class b extends GestureDetector.SimpleOnGestureListener {
    private static final int b = 4;
    private static final float c = 100.0f;
    private static final float d = 100.0f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f4815a;
    private final BaseAdUnit e;
    private float f;
    private float g;
    private boolean h;
    private boolean i;
    private int j;
    private float k;
    private a l = a.UNSET;
    private View m;

    /* JADX INFO: renamed from: com.sigmob.sdk.base.common.b$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4816a;

        static {
            int[] iArr = new int[a.values().length];
            f4816a = iArr;
            try {
                iArr[a.UNSET.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4816a[a.GOING_RIGHT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4816a[a.GOING_LEFT.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4816a[a.FAILED.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    enum a {
        UNSET,
        GOING_RIGHT,
        GOING_LEFT,
        FINISHED,
        FAILED
    }

    b(View view, BaseAdUnit baseAdUnit) {
        this.f = 100.0f;
        if (view != null && view.getWidth() > 0) {
            this.f = Math.min(100.0f, view.getWidth() / 3.0f);
        }
        this.f4815a = false;
        this.m = view;
        this.e = baseAdUnit;
    }

    private void a(float f) {
        if (f > this.k) {
            this.l = a.GOING_RIGHT;
        }
    }

    private boolean a(MotionEvent motionEvent, MotionEvent motionEvent2) {
        if (motionEvent == null || motionEvent2 == null) {
            return false;
        }
        return Math.abs(motionEvent2.getY() - motionEvent.getY()) > 100.0f;
    }

    private void b(float f) {
        if (d(f) && g(f)) {
            this.l = a.GOING_LEFT;
            this.k = f;
        }
    }

    private void c(float f) {
        if (e(f) && f(f)) {
            this.l = a.GOING_RIGHT;
            this.k = f;
        }
    }

    private boolean d(float f) {
        if (this.i) {
            return true;
        }
        if (f < this.k + this.f) {
            return false;
        }
        this.h = false;
        this.i = true;
        return true;
    }

    private void e() {
        int i = this.j + 1;
        this.j = i;
        if (i >= 4) {
            this.l = a.FINISHED;
        }
    }

    private boolean e(float f) {
        if (this.h) {
            return true;
        }
        if (f > this.k - this.f) {
            return false;
        }
        this.i = false;
        this.h = true;
        e();
        return true;
    }

    private boolean f(float f) {
        return f > this.g;
    }

    private boolean g(float f) {
        return f < this.g;
    }

    void a() {
        a aVar = a.FINISHED;
        b();
    }

    void b() {
        this.j = 0;
        this.l = a.UNSET;
    }

    void c() {
        this.f4815a = false;
    }

    boolean d() {
        return this.f4815a;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
        if (this.l == a.FINISHED) {
            return super.onScroll(motionEvent, motionEvent2, f, f2);
        }
        if (a(motionEvent, motionEvent2)) {
            this.l = a.FAILED;
        } else {
            int i = AnonymousClass1.f4816a[this.l.ordinal()];
            if (i == 1) {
                this.k = motionEvent.getX();
                a(motionEvent2.getX());
            } else if (i == 2) {
                b(motionEvent2.getX());
            } else if (i == 3) {
                c(motionEvent2.getX());
            }
            this.g = motionEvent2.getX();
        }
        return super.onScroll(motionEvent, motionEvent2, f, f2);
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public boolean onSingleTapUp(MotionEvent motionEvent) {
        this.f4815a = true;
        return super.onSingleTapUp(motionEvent);
    }
}
