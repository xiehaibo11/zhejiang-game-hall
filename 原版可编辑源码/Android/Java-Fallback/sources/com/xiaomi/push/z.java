package com.xiaomi.push;

final class z extends com.xiaomi.push.y {
    final java.lang.Runnable a;

    z(android.content.Context r1, java.io.File r2, java.lang.Runnable r3) {
            r0 = this;
            r0.a = r3
            r3 = 0
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void a(android.content.Context r1) {
            r0 = this;
            java.lang.Runnable r1 = r0.a
            if (r1 == 0) goto L7
            r1.run()
        L7:
            return
    }
}
