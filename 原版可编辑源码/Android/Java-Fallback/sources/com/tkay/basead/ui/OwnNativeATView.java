package com.tkay.basead.ui;

public class OwnNativeATView extends android.widget.FrameLayout {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    private com.tkay.basead.ui.OwnNativeATView.a i;

    public interface a {
        void a();
    }

    public OwnNativeATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public OwnNativeATView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public OwnNativeATView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            int r0 = r3.getAction()
            if (r0 == 0) goto L2a
            r1 = 1
            if (r0 == r1) goto Ld
            r1 = 3
            if (r0 == r1) goto Ld
            goto L46
        Ld:
            float r0 = r3.getRawX()
            int r0 = (int) r0
            r2.c = r0
            float r0 = r3.getRawY()
            int r0 = (int) r0
            r2.d = r0
            float r0 = r3.getX()
            int r0 = (int) r0
            r2.g = r0
            float r0 = r3.getY()
            int r0 = (int) r0
            r2.h = r0
            goto L46
        L2a:
            float r0 = r3.getRawX()
            int r0 = (int) r0
            r2.a = r0
            float r0 = r3.getRawY()
            int r0 = (int) r0
            r2.b = r0
            float r0 = r3.getX()
            int r0 = (int) r0
            r2.e = r0
            float r0 = r3.getY()
            int r0 = (int) r0
            r2.f = r0
        L46:
            boolean r3 = super.dispatchTouchEvent(r3)
            return r3
    }

    public com.tkay.basead.c.a getAdClickRecord() {
            r2 = this;
            com.tkay.basead.c.a r0 = new com.tkay.basead.c.a
            r0.<init>()
            int r1 = r2.a
            r0.a = r1
            int r1 = r2.b
            r0.b = r1
            int r1 = r2.c
            r0.c = r1
            int r1 = r2.d
            r0.d = r1
            int r1 = r2.e
            r0.e = r1
            int r1 = r2.f
            r0.f = r1
            int r1 = r2.g
            r0.g = r1
            int r1 = r2.h
            r0.h = r1
            return r0
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    public void setWindowEventListener(com.tkay.basead.ui.OwnNativeATView.a r1) {
            r0 = this;
            r0.i = r1
            return
    }
}
