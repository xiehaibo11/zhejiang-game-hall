package com.tencent.open.log;

public final class e extends com.tencent.open.log.Tracer {
    public static final com.tencent.open.log.e a = null;

    static {
            com.tencent.open.log.e r0 = new com.tencent.open.log.e
            r0.<init>()
            com.tencent.open.log.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void doTrace(int r1, java.lang.Thread r2, long r3, java.lang.String r5, java.lang.String r6, java.lang.Throwable r7) {
            r0 = this;
            r2 = 1
            if (r1 == r2) goto L2a
            r2 = 2
            if (r1 == r2) goto L26
            r2 = 4
            if (r1 == r2) goto L22
            r2 = 8
            if (r1 == r2) goto L1e
            r2 = 16
            if (r1 == r2) goto L1a
            r2 = 32
            if (r1 == r2) goto L16
            goto L2d
        L16:
            android.util.Log.e(r5, r6, r7)
            goto L2d
        L1a:
            android.util.Log.e(r5, r6, r7)
            goto L2d
        L1e:
            android.util.Log.w(r5, r6, r7)
            goto L2d
        L22:
            android.util.Log.i(r5, r6, r7)
            goto L2d
        L26:
            android.util.Log.d(r5, r6, r7)
            goto L2d
        L2a:
            android.util.Log.v(r5, r6, r7)
        L2d:
            return
    }
}
