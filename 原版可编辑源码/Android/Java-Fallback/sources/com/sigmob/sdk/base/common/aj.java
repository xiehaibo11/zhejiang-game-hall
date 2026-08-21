package com.sigmob.sdk.base.common;

public class aj extends android.view.GestureDetector {
    private final android.view.View a;
    private com.sigmob.sdk.base.common.b b;

    private aj(android.content.Context r1, android.view.View r2, com.sigmob.sdk.base.common.b r3) {
            r0 = this;
            r0.<init>(r1, r3)
            r0.b = r3
            r0.a = r2
            r1 = 0
            r0.setIsLongpressEnabled(r1)
            return
    }

    public aj(android.content.Context r2, android.view.View r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r1 = this;
            com.sigmob.sdk.base.common.b r0 = new com.sigmob.sdk.base.common.b
            r0.<init>(r3, r4)
            r1.<init>(r2, r3, r0)
            return
    }

    private boolean a(android.view.MotionEvent r5, android.view.View r6) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L2a
            if (r6 != 0) goto L6
            goto L2a
        L6:
            float r1 = r5.getX()
            float r5 = r5.getY()
            r2 = 0
            int r3 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r3 < 0) goto L2a
            int r3 = r6.getWidth()
            float r3 = (float) r3
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L2a
            int r1 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r1 < 0) goto L2a
            int r6 = r6.getHeight()
            float r6 = (float) r6
            int r5 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r5 > 0) goto L2a
            r0 = 1
        L2a:
            return r0
    }

    void a() {
            r1 = this;
            com.sigmob.sdk.base.common.b r0 = r1.b
            r0.b()
            return
    }

    public void b() {
            r1 = this;
            com.sigmob.sdk.base.common.b r0 = r1.b
            r0.c()
            return
    }

    public boolean c() {
            r1 = this;
            com.sigmob.sdk.base.common.b r0 = r1.b
            boolean r0 = r0.d()
            return r0
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            boolean r0 = super.onTouchEvent(r4)
            int r1 = r4.getAction()
            r2 = 1
            if (r1 == r2) goto L1b
            r2 = 2
            if (r1 == r2) goto Lf
            goto L20
        Lf:
            android.view.View r1 = r3.a
            boolean r4 = r3.a(r4, r1)
            if (r4 != 0) goto L20
            r3.a()
            goto L20
        L1b:
            com.sigmob.sdk.base.common.b r4 = r3.b
            r4.a()
        L20:
            return r0
    }
}
