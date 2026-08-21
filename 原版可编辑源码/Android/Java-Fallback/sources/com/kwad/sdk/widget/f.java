package com.kwad.sdk.widget;

public final class f implements android.view.GestureDetector.OnGestureListener, android.view.View.OnTouchListener {
    private android.view.GestureDetector Gn;
    private android.view.MotionEvent aMj;
    private com.kwad.sdk.widget.c fb;
    private android.view.View mView;

    public f(android.content.Context r1, android.view.View r2, com.kwad.sdk.widget.c r3) {
            r0 = this;
            r0.<init>()
            r0.mView = r2
            r2.setOnTouchListener(r0)
            android.view.GestureDetector r2 = new android.view.GestureDetector
            r2.<init>(r1, r0)
            r0.Gn = r2
            r0.fb = r3
            return
    }

    public f(android.view.View r2, com.kwad.sdk.widget.c r3) {
            r1 = this;
            r1.<init>()
            if (r2 != 0) goto L6
            return
        L6:
            r1.mView = r2
            r2.setOnTouchListener(r1)
            android.view.GestureDetector r0 = new android.view.GestureDetector
            android.content.Context r2 = r2.getContext()
            r0.<init>(r2, r1)
            r1.Gn = r0
            r1.fb = r3
            return
    }

    private static boolean a(android.view.MotionEvent r4, android.view.MotionEvent r5) {
            float r0 = r4.getX()
            float r1 = r5.getX()
            float r0 = r0 - r1
            float r0 = java.lang.Math.abs(r0)
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r2 = 1
            r3 = 0
            if (r0 <= 0) goto L17
            r0 = r2
            goto L18
        L17:
            r0 = r3
        L18:
            float r4 = r4.getY()
            float r5 = r5.getY()
            float r4 = r4 - r5
            float r4 = java.lang.Math.abs(r4)
            int r4 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r4 <= 0) goto L2b
            r4 = r2
            goto L2c
        L2b:
            r4 = r3
        L2c:
            if (r0 != 0) goto L32
            if (r4 == 0) goto L31
            goto L32
        L31:
            return r3
        L32:
            return r2
    }

    private boolean a(android.view.View r4, android.view.MotionEvent r5) {
            r3 = this;
            int r0 = r5.getAction()
            r1 = 0
            if (r0 != 0) goto Lc
            android.view.MotionEvent r4 = android.view.MotionEvent.obtain(r5)
            goto L22
        Lc:
            r2 = 1
            if (r0 != r2) goto L24
            android.view.MotionEvent r0 = r3.aMj
            if (r0 == 0) goto L21
            boolean r5 = a(r0, r5)
            if (r5 == 0) goto L21
            com.kwad.sdk.widget.c r5 = r3.fb
            if (r5 == 0) goto L20
            r5.b(r4)
        L20:
            r1 = r2
        L21:
            r4 = 0
        L22:
            r3.aMj = r4
        L24:
            return r1
    }

    @Override
    public final boolean onDown(android.view.MotionEvent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final boolean onFling(android.view.MotionEvent r1, android.view.MotionEvent r2, float r3, float r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final void onLongPress(android.view.MotionEvent r1) {
            r0 = this;
            return
    }

    @Override
    public final boolean onScroll(android.view.MotionEvent r1, android.view.MotionEvent r2, float r3, float r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final void onShowPress(android.view.MotionEvent r1) {
            r0 = this;
            return
    }

    @Override
    public final boolean onSingleTapUp(android.view.MotionEvent r2) {
            r1 = this;
            com.kwad.sdk.widget.c r2 = r1.fb
            if (r2 == 0) goto Lb
            android.view.View r0 = r1.mView
            r2.a(r0)
            r2 = 1
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @Override
    public final boolean onTouch(android.view.View r4, android.view.MotionEvent r5) {
            r3 = this;
            android.view.GestureDetector r0 = r3.Gn
            boolean r0 = r0.onTouchEvent(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "onTouch, "
            r1.<init>(r2)
            int r2 = r5.getAction()
            r1.append(r2)
            java.lang.String r2 = "， handled： "
            r1.append(r2)
            r1.append(r0)
            if (r0 == 0) goto L20
            r4 = 1
            return r4
        L20:
            boolean r4 = r3.a(r4, r5)
            return r4
    }
}
