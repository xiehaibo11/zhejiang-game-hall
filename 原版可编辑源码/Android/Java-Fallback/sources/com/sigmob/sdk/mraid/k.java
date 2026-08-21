package com.sigmob.sdk.mraid;

public class k {
    private final android.content.Context a;
    private final android.graphics.Rect b;
    private final android.graphics.Rect c;
    private final android.graphics.Rect d;
    private final android.graphics.Rect e;
    private final android.graphics.Rect f;
    private final android.graphics.Rect g;
    private final android.graphics.Rect h;
    private final android.graphics.Rect i;
    private final float j;

    public k(android.content.Context r1, float r2) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
            r0.j = r2
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.b = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.c = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.d = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.e = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.f = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.g = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.h = r1
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.i = r1
            return
    }

    private void a(android.graphics.Rect r5, android.graphics.Rect r6) {
            r4 = this;
            int r0 = r5.left
            float r0 = (float) r0
            android.content.Context r1 = r4.a
            int r0 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r0, r1)
            int r1 = r5.top
            float r1 = (float) r1
            android.content.Context r2 = r4.a
            int r1 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r1, r2)
            int r2 = r5.right
            float r2 = (float) r2
            android.content.Context r3 = r4.a
            int r2 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r2, r3)
            int r5 = r5.bottom
            float r5 = (float) r5
            android.content.Context r3 = r4.a
            int r5 = com.czhj.sdk.common.utils.Dips.pixelsToIntDips(r5, r3)
            r6.set(r0, r1, r2, r5)
            return
    }

    public float a() {
            r1 = this;
            float r0 = r1.j
            return r0
    }

    public void a(int r3, int r4) {
            r2 = this;
            android.graphics.Rect r0 = r2.b
            r1 = 0
            r0.set(r1, r1, r3, r4)
            android.graphics.Rect r3 = r2.b
            android.graphics.Rect r4 = r2.c
            r2.a(r3, r4)
            return
    }

    public void a(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.d
            int r4 = r4 + r2
            int r5 = r5 + r3
            r0.set(r2, r3, r4, r5)
            android.graphics.Rect r2 = r1.d
            android.graphics.Rect r3 = r1.e
            r1.a(r2, r3)
            return
    }

    android.graphics.Rect b() {
            r1 = this;
            android.graphics.Rect r0 = r1.b
            return r0
    }

    public void b(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.f
            int r4 = r4 + r2
            int r5 = r5 + r3
            r0.set(r2, r3, r4, r5)
            android.graphics.Rect r2 = r1.f
            android.graphics.Rect r3 = r1.g
            r1.a(r2, r3)
            return
    }

    public android.graphics.Rect c() {
            r1 = this;
            android.graphics.Rect r0 = r1.c
            return r0
    }

    public void c(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.h
            int r4 = r4 + r2
            int r5 = r5 + r3
            r0.set(r2, r3, r4, r5)
            android.graphics.Rect r2 = r1.h
            android.graphics.Rect r3 = r1.i
            r1.a(r2, r3)
            return
    }

    android.graphics.Rect d() {
            r1 = this;
            android.graphics.Rect r0 = r1.d
            return r0
    }

    public android.graphics.Rect e() {
            r1 = this;
            android.graphics.Rect r0 = r1.e
            return r0
    }

    android.graphics.Rect f() {
            r1 = this;
            android.graphics.Rect r0 = r1.f
            return r0
    }

    public android.graphics.Rect g() {
            r1 = this;
            android.graphics.Rect r0 = r1.g
            return r0
    }

    android.graphics.Rect h() {
            r1 = this;
            android.graphics.Rect r0 = r1.h
            return r0
    }

    public android.graphics.Rect i() {
            r1 = this;
            android.graphics.Rect r0 = r1.i
            return r0
    }
}
