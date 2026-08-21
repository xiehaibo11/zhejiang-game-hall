package com.meizu.cloud.pushsdk.c.e;

public class d extends android.os.Handler {
    private final java.lang.ref.WeakReference<com.meizu.cloud.pushsdk.c.d.a> a;

    public d(com.meizu.cloud.pushsdk.c.d.a r2) {
            r1 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r1.<init>(r0)
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            return
    }

    @Override
    public void handleMessage(android.os.Message r6) {
            r5 = this;
            java.lang.ref.WeakReference<com.meizu.cloud.pushsdk.c.d.a> r0 = r5.a
            java.lang.Object r0 = r0.get()
            com.meizu.cloud.pushsdk.c.d.a r0 = (com.meizu.cloud.pushsdk.c.d.a) r0
            int r1 = r6.what
            r2 = 1
            if (r1 != r2) goto L1b
            if (r0 == 0) goto L1e
            java.lang.Object r6 = r6.obj
            com.meizu.cloud.pushsdk.c.f.a r6 = (com.meizu.cloud.pushsdk.c.f.a) r6
            long r1 = r6.a
            long r3 = r6.b
            r0.a(r1, r3)
            goto L1e
        L1b:
            super.handleMessage(r6)
        L1e:
            return
    }
}
