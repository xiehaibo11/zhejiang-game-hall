package com.tkay.china.common;

public final class c implements com.tkay.china.api.CustomAdapterDownloadListener {
    com.tkay.core.api.TYBaseAdAdapter a;
    com.tkay.core.api.BaseAd b;
    com.tkay.core.api.TYAdInfo c;
    java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> d;
    long e;
    boolean f;
    boolean g;


    public c(com.tkay.core.api.TYBaseAdAdapter r1, com.tkay.core.api.BaseAd r2, com.tkay.core.api.TYEventInterface r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            if (r3 == 0) goto L16
            boolean r1 = r3 instanceof com.tkay.china.api.TYAppDownloadListener
            if (r1 == 0) goto L16
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            com.tkay.china.api.TYAppDownloadListener r3 = (com.tkay.china.api.TYAppDownloadListener) r3
            r1.<init>(r3)
            r0.d = r1
        L16:
            return
    }

    private void a() {
            r1 = this;
            com.tkay.core.api.BaseAd r0 = r1.b
            if (r0 == 0) goto Lb
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            r1.c = r0
            return
        Lb:
            com.tkay.core.api.TYBaseAdAdapter r0 = r1.a
            com.tkay.core.common.b.i r0 = com.tkay.core.common.b.i.a(r0)
            r1.c = r0
            return
    }

    private void a(int r9, long r10, java.lang.String r12) {
            r8 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.china.common.c$1 r7 = new com.tkay.china.common.c$1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r12
            r5 = r10
            r1.<init>(r2, r3, r4, r5)
            r0.a(r7)
            return
    }

    @Override
    public final void onDownloadFail(long r10, long r12, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            com.tkay.core.api.TYAdInfo r0 = r9.c
            if (r0 != 0) goto L7
            r9.a()
        L7:
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r9.d
            if (r0 == 0) goto L12
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L13
        L12:
            r0 = 0
        L13:
            r1 = r0
            if (r1 == 0) goto L1f
            com.tkay.core.api.TYAdInfo r2 = r9.c
            r3 = r10
            r5 = r12
            r7 = r14
            r8 = r15
            r1.onDownloadFail(r2, r3, r5, r7, r8)
        L1f:
            return
    }

    @Override
    public final void onDownloadFinish(long r8, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            com.tkay.core.api.TYAdInfo r0 = r7.c
            if (r0 != 0) goto L7
            r7.a()
        L7:
            long r0 = r7.e
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L22
            boolean r0 = r7.g
            if (r0 != 0) goto L22
            r0 = 1
            r7.g = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r7.e
            long r0 = r0 - r2
            r2 = 19
            r7.a(r2, r0, r11)
        L22:
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r7.d
            if (r0 == 0) goto L2d
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L2e
        L2d:
            r0 = 0
        L2e:
            r1 = r0
            if (r1 == 0) goto L39
            com.tkay.core.api.TYAdInfo r2 = r7.c
            r3 = r8
            r5 = r10
            r6 = r11
            r1.onDownloadFinish(r2, r3, r5, r6)
        L39:
            return
    }

    @Override
    public final void onDownloadPause(long r10, long r12, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            com.tkay.core.api.TYAdInfo r0 = r9.c
            if (r0 != 0) goto L7
            r9.a()
        L7:
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r9.d
            if (r0 == 0) goto L12
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L13
        L12:
            r0 = 0
        L13:
            r1 = r0
            if (r1 == 0) goto L1f
            com.tkay.core.api.TYAdInfo r2 = r9.c
            r3 = r10
            r5 = r12
            r7 = r14
            r8 = r15
            r1.onDownloadPause(r2, r3, r5, r7, r8)
        L1f:
            return
    }

    @Override
    public final void onDownloadStart(long r10, long r12, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            com.tkay.core.api.TYAdInfo r0 = r9.c
            if (r0 != 0) goto L7
            r9.a()
        L7:
            long r0 = android.os.SystemClock.elapsedRealtime()
            r9.e = r0
            r0 = 18
            r1 = 0
            r9.a(r0, r1, r15)
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r9.d
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L20
        L1f:
            r0 = 0
        L20:
            r1 = r0
            if (r1 == 0) goto L2c
            com.tkay.core.api.TYAdInfo r2 = r9.c
            r3 = r10
            r5 = r12
            r7 = r14
            r8 = r15
            r1.onDownloadStart(r2, r3, r5, r7, r8)
        L2c:
            return
    }

    @Override
    public final void onDownloadUpdate(long r10, long r12, java.lang.String r14, java.lang.String r15) {
            r9 = this;
            com.tkay.core.api.TYAdInfo r0 = r9.c
            if (r0 != 0) goto L7
            r9.a()
        L7:
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r9.d
            if (r0 == 0) goto L12
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L13
        L12:
            r0 = 0
        L13:
            r1 = r0
            if (r1 == 0) goto L1f
            com.tkay.core.api.TYAdInfo r2 = r9.c
            r3 = r10
            r5 = r12
            r7 = r14
            r8 = r15
            r1.onDownloadUpdate(r2, r3, r5, r7, r8)
        L1f:
            return
    }

    @Override
    public final void onInstalled(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.tkay.core.api.TYAdInfo r0 = r3.c
            if (r0 != 0) goto L7
            r3.a()
        L7:
            boolean r0 = r3.f
            if (r0 != 0) goto L15
            r0 = 1
            r3.f = r0
            r0 = 20
            r1 = 0
            r3.a(r0, r1, r5)
        L15:
            java.lang.ref.WeakReference<com.tkay.china.api.TYAppDownloadListener> r0 = r3.d
            if (r0 == 0) goto L20
            java.lang.Object r0 = r0.get()
            com.tkay.china.api.TYAppDownloadListener r0 = (com.tkay.china.api.TYAppDownloadListener) r0
            goto L21
        L20:
            r0 = 0
        L21:
            if (r0 == 0) goto L28
            com.tkay.core.api.TYAdInfo r1 = r3.c
            r0.onInstalled(r1, r4, r5)
        L28:
            return
    }
}
