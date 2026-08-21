package com.qq.e.ads.hybrid;

public class HybridAD extends com.qq.e.ads.AbstractAD<com.qq.e.comm.pi.HADI> implements com.qq.e.comm.pi.HADI {
    private com.qq.e.ads.hybrid.HybridADListener f;
    private java.util.concurrent.CountDownLatch g;
    private com.qq.e.ads.hybrid.HybridADSetting h;


    public HybridAD(android.content.Context r3, com.qq.e.ads.hybrid.HybridADSetting r4, com.qq.e.ads.hybrid.HybridADListener r5) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r1 = 1
            r0.<init>(r1)
            r2.g = r0
            r2.h = r4
            r2.f = r5
            java.lang.String r4 = "NO_POS_ID"
            r2.a(r3, r4)
            return
    }

    static java.util.concurrent.CountDownLatch a(com.qq.e.ads.hybrid.HybridAD r0) {
            java.util.concurrent.CountDownLatch r0 = r0.g
            return r0
    }

    static void a(com.qq.e.ads.hybrid.HybridAD r0, int r1) {
            r0.a(r1)
            return
    }

    static void b(com.qq.e.ads.hybrid.HybridAD r0, int r1) {
            r0.a(r1)
            return
    }

    static boolean b(com.qq.e.ads.hybrid.HybridAD r0) {
            boolean r0 = r0.b()
            return r0
    }

    static java.lang.Object c(com.qq.e.ads.hybrid.HybridAD r0) {
            T r0 = r0.a
            return r0
    }

    static java.lang.Object d(com.qq.e.ads.hybrid.HybridAD r0) {
            T r0 = r0.a
            return r0
    }

    protected com.qq.e.comm.pi.HADI a(com.qq.e.comm.pi.POFactory r3) {
            r2 = this;
            com.qq.e.ads.hybrid.HybridADSetting r0 = r2.h
            com.qq.e.ads.hybrid.HybridADListener r1 = r2.f
            com.qq.e.comm.pi.HADI r3 = r3.getHybridAD(r0, r1)
            return r3
    }

    @Override
    protected com.qq.e.comm.pi.HADI a(android.content.Context r1, com.qq.e.comm.pi.POFactory r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            com.qq.e.comm.pi.HADI r1 = r0.a(r2)
            return r1
    }

    @Override
    protected void a(com.qq.e.comm.pi.HADI r1) {
            r0 = this;
            com.qq.e.comm.pi.HADI r1 = (com.qq.e.comm.pi.HADI) r1
            r0.c()
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.hybrid.HybridADListener r0 = r1.f
            if (r0 == 0) goto Lb
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onError(r2)
        Lb:
            java.util.concurrent.CountDownLatch r2 = r1.g
            r2.countDown()
            return
    }

    protected void c() {
            r1 = this;
            java.util.concurrent.CountDownLatch r0 = r1.g
            r0.countDown()
            return
    }

    @Override
    public void loadUrl(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r2.b()
            if (r0 == 0) goto L1d
            T r0 = r2.a
            if (r0 == 0) goto L17
            com.qq.e.comm.pi.HADI r0 = (com.qq.e.comm.pi.HADI) r0
            r0.loadUrl(r3)
            goto L2a
        L17:
            java.lang.String r3 = "loadUrl"
            r2.a(r3)
            goto L2a
        L1d:
            java.lang.Thread r0 = new java.lang.Thread
            com.qq.e.ads.hybrid.HybridAD$1 r1 = new com.qq.e.ads.hybrid.HybridAD$1
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
        L2a:
            return
    }
}
