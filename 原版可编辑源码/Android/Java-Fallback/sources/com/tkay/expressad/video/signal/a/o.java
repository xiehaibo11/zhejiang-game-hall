package com.tkay.expressad.video.signal.a;

public final class o extends com.tkay.expressad.video.signal.a.e {
    private android.app.Activity n;
    private com.tkay.expressad.video.module.TkayContainerView o;

    private o(android.app.Activity r1, com.tkay.expressad.video.module.TkayContainerView r2) {
            r0 = this;
            r0.<init>()
            r0.n = r1
            r0.o = r2
            return
    }

    @Override
    public final void a(int r2, java.lang.String r3) {
            r1 = this;
            super.a(r2, r3)
            r0 = 1
            if (r2 == r0) goto L12
            r3 = 2
            if (r2 == r3) goto La
            goto L28
        La:
            android.app.Activity r2 = r1.n
            if (r2 == 0) goto L28
            r2.finish()
            goto L28
        L12:
            com.tkay.expressad.video.module.TkayContainerView r2 = r1.o
            if (r2 == 0) goto L28
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L1f
            int r0 = r2.intValue()     // Catch: java.lang.Throwable -> L1f
            goto L23
        L1f:
            r2 = move-exception
            r2.printStackTrace()
        L23:
            com.tkay.expressad.video.module.TkayContainerView r2 = r1.o
            r2.showVideoClickView(r0)
        L28:
            return
    }
}
