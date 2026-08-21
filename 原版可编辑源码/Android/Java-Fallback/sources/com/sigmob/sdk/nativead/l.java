package com.sigmob.sdk.nativead;

public class l extends android.view.View {
    private com.sigmob.sdk.nativead.y a;
    private boolean b;
    private boolean c;
    private com.sigmob.sdk.nativead.l.a d;
    private int e;
    private long f;
    private int g;
    private int h;
    private boolean i;
    private boolean j;


    public interface a {
        void a(boolean r1);

        void f();

        void g();

        void h();

        void i();
    }

    public l(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public l(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public l(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.b = r1
            r2 = 1
            r0.c = r2
            r2 = 0
            r0.f = r2
            r0.g = r1
            r2 = -1
            r0.h = r2
            r0.i = r1
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r2.<init>(r1, r1)
            r0.setLayoutParams(r2)
            return
    }

    static com.sigmob.sdk.nativead.l.a a(com.sigmob.sdk.nativead.l r0) {
            com.sigmob.sdk.nativead.l$a r0 = r0.d
            return r0
    }

    private void b() {
            r9 = this;
            boolean r0 = r9.a()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L10
            boolean r0 = r9.e()
            if (r0 == 0) goto L10
            r0 = r1
            goto L11
        L10:
            r0 = r2
        L11:
            r3 = 0
            if (r0 == 0) goto La7
            android.view.ViewParent r0 = r9.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r5 = r9.a(r0)
            int r6 = r0.getHeight()
            int r0 = r0.getWidth()
            int r6 = r6 * r0
            if (r6 <= 0) goto L39
            float r0 = (float) r5
            int r7 = r9.e
            float r7 = (float) r7
            r8 = 1120403456(0x42c80000, float:100.0)
            float r7 = r7 / r8
            float r6 = (float) r6
            float r7 = r7 * r6
            int r0 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r0 < 0) goto L39
            r0 = r1
            goto L3a
        L39:
            r0 = r2
        L3a:
            if (r5 <= 0) goto L46
            r9.i = r1
            com.sigmob.sdk.nativead.l$a r6 = r9.d
            if (r6 == 0) goto L51
            r6.i()
            goto L51
        L46:
            r9.i = r2
            r9.f = r3
            com.sigmob.sdk.nativead.l$a r6 = r9.d
            if (r6 == 0) goto L51
            r6.h()
        L51:
            if (r5 <= 0) goto L9b
            if (r0 == 0) goto L8c
            boolean r0 = r9.i
            if (r0 == 0) goto L8c
            long r5 = r9.f
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 != 0) goto L65
            long r5 = java.lang.System.currentTimeMillis()
            r9.f = r5
        L65:
            long r5 = r9.f
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 <= 0) goto L7c
            long r3 = java.lang.System.currentTimeMillis()
            long r5 = r9.f
            long r3 = r3 - r5
            int r0 = r9.g
            int r0 = r0 * 1000
            long r5 = (long) r0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L7c
            goto L7d
        L7c:
            r1 = r2
        L7d:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto L84
            r0.g()
        L84:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto Lb6
            r0.a(r1)
            goto Lb6
        L8c:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto L93
            r0.f()
        L93:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto Lb4
            r0.a(r2)
            goto Lb4
        L9b:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto Lb6
            boolean r1 = r9.i
            if (r1 == 0) goto Lb6
            r0.h()
            goto Lb6
        La7:
            com.sigmob.sdk.nativead.l$a r0 = r9.d
            if (r0 == 0) goto Lb2
            boolean r1 = r9.i
            if (r1 == 0) goto Lb2
            r0.h()
        Lb2:
            r9.i = r2
        Lb4:
            r9.f = r3
        Lb6:
            return
    }

    static void b(com.sigmob.sdk.nativead.l r0) {
            r0.b()
            return
    }

    private void c() {
            r1 = this;
            r1.f()
            r0 = 0
            r1.a = r0
            return
    }

    private void d() {
            r2 = this;
            com.sigmob.sdk.nativead.y r0 = r2.a
            if (r0 == 0) goto L1c
            boolean r0 = r0.b()
            if (r0 != 0) goto Lb
            goto L1c
        Lb:
            com.sigmob.sdk.nativead.y r0 = r2.a
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.sigmob.sdk.nativead.y r0 = r2.a
            r0.a()
            com.sigmob.sdk.nativead.y r0 = r2.a
            r1 = 0
            r0.a(r1)
        L1c:
            return
    }

    private boolean e() {
            r1 = this;
            boolean r0 = r1.b
            if (r0 == 0) goto Le
            int r0 = r1.h
            if (r0 != 0) goto Le
            boolean r0 = r1.c
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private void f() {
            r2 = this;
            r2.b()
            com.sigmob.sdk.nativead.y r0 = r2.a
            if (r0 == 0) goto L1a
            boolean r0 = r0.b()
            if (r0 == 0) goto Le
            goto L1a
        Le:
            com.sigmob.sdk.nativead.y r0 = r2.a
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            com.sigmob.sdk.nativead.y r0 = r2.a
            r1 = 1
            r0.a(r1)
        L1a:
            return
    }

    public int a(android.view.View r2) {
            r1 = this;
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            boolean r2 = r2.getGlobalVisibleRect(r0)
            if (r2 != 0) goto Ld
            r2 = 0
            return r2
        Ld:
            int r2 = r0.height()
            int r0 = r0.width()
            int r2 = r2 * r0
            return r2
    }

    public void a(int r3, int r4) {
            r2 = this;
            r0 = 1
            r2.c = r0
            com.sigmob.sdk.nativead.y r1 = r2.a
            if (r1 == 0) goto La
            r2.c()
        La:
            r2.c = r0
            r2.e = r3
            r2.g = r4
            com.sigmob.sdk.nativead.l$1 r3 = new com.sigmob.sdk.nativead.l$1
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r3.<init>(r2, r4)
            r2.a = r3
            r2.d()
            return
    }

    public boolean a() {
            r1 = this;
            int r0 = r1.getVisibility()
            if (r0 != 0) goto Lf
            android.view.ViewParent r0 = r1.getParent()
            if (r0 != 0) goto Ld
            goto Lf
        Ld:
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.b = r0
            r1.d()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.b = r0
            r1.f()
            return
    }

    @Override
    public void onFinishTemporaryDetach() {
            r0 = this;
            super.onFinishTemporaryDetach()
            r0.d()
            return
    }

    @Override
    public void onStartTemporaryDetach() {
            r0 = this;
            super.onStartTemporaryDetach()
            r0.f()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1) {
            r0 = this;
            super.onWindowFocusChanged(r1)
            r0.c = r1
            boolean r1 = r0.i
            if (r1 == 0) goto Lc
            r0.b()
        Lc:
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r1) {
            r0 = this;
            super.onWindowVisibilityChanged(r1)
            r0.h = r1
            if (r1 != 0) goto Lb
            r0.d()
            goto Le
        Lb:
            r0.f()
        Le:
            return
    }

    public void setAdVisibilityStatusChangeListener(com.sigmob.sdk.nativead.l.a r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
