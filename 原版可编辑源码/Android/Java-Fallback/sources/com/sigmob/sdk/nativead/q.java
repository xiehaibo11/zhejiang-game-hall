package com.sigmob.sdk.nativead;

public class q implements com.sigmob.sdk.nativead.p {
    private java.lang.ref.WeakReference<com.sigmob.sdk.videoplayer.g> a;
    private com.sigmob.sdk.nativead.h b;

    public q(com.sigmob.sdk.videoplayer.g r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            return
    }

    private com.sigmob.sdk.videoplayer.g k() {
            r1 = this;
            java.lang.ref.WeakReference<com.sigmob.sdk.videoplayer.g> r0 = r1.a
            java.lang.Object r0 = r0.get()
            com.sigmob.sdk.videoplayer.g r0 = (com.sigmob.sdk.videoplayer.g) r0
            return r0
    }

    @Override
    public void a() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.D()
        L9:
            return
    }

    public void a(int r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.setHolderImageResource(r2)
        L9:
            return
    }

    @Override
    public void a(com.sigmob.sdk.nativead.h r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void a(boolean r2) {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.setSoundChange(r2)
        L9:
            return
    }

    @Override
    public void b() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.C()
        L9:
            return
    }

    @Override
    public void c() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.C()
        L9:
            return
    }

    @Override
    public void d() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.E()
        L9:
            return
    }

    @Override
    public int e() {
            r6 = this;
            com.sigmob.sdk.videoplayer.g r0 = r6.k()
            r1 = 0
            if (r0 == 0) goto L1a
            long r2 = r0.getDuration()
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L12
            goto L1a
        L12:
            long r0 = r0.getDuration()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            int r1 = (int) r0
        L1a:
            return r1
    }

    @Override
    public int f() {
            r6 = this;
            com.sigmob.sdk.videoplayer.g r0 = r6.k()
            r1 = 0
            if (r0 == 0) goto L1f
            long r2 = r0.getCurrentPositionWhenPlaying()
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L12
            goto L1f
        L12:
            long r1 = r0.getCurrentPositionWhenPlaying()
            r3 = 100
            long r1 = r1 * r3
            long r3 = r0.getDuration()
            long r1 = r1 / r3
            int r1 = (int) r1
        L1f:
            return r1
    }

    @Override
    public com.sigmob.sdk.nativead.h g() {
            r1 = this;
            com.sigmob.sdk.nativead.h r0 = r1.b
            return r0
    }

    @Override
    public void h() {
            r1 = this;
            com.sigmob.sdk.videoplayer.g r0 = r1.k()
            if (r0 == 0) goto L9
            r0.d()
        L9:
            return
    }

    @Override
    public void i() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public int j() {
            r4 = this;
            com.sigmob.sdk.videoplayer.g r0 = r4.k()
            if (r0 == 0) goto Lf
            long r0 = r0.getCurrentPositionWhenPlaying()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            int r0 = (int) r0
            return r0
        Lf:
            r0 = 0
            return r0
    }
}
