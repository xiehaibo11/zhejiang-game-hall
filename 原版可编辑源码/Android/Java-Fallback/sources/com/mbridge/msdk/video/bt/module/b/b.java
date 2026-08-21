package com.mbridge.msdk.video.bt.module.b;

public final class b extends com.mbridge.msdk.video.bt.module.b.c {
    private com.mbridge.msdk.video.bt.module.b.h a;
    private com.mbridge.msdk.videocommon.d.c b;
    private java.lang.String c;
    private java.lang.String d;
    private boolean e;
    private android.content.Context f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;

    public b(android.content.Context r2, boolean r3, com.mbridge.msdk.videocommon.d.c r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, com.mbridge.msdk.video.bt.module.b.h r6, java.lang.String r7, java.lang.String r8) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.h = r0
            r1.i = r0
            r1.j = r0
            r1.k = r0
            r1.a = r6
            boolean r5 = r1.a(r4, r5)
            r1.g = r5
            r1.b = r4
            r1.c = r8
            r1.d = r7
            r1.e = r3
            r1.f = r2
            return
    }

    private boolean a(int r6) {
            r5 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r5.b
            r1 = 0
            r2 = 1
            r3 = 4
            if (r0 == 0) goto L26
            com.mbridge.msdk.videocommon.b.c r0 = r0.z()
            if (r0 == 0) goto L26
            int r4 = r0.a()
            if (r4 != 0) goto L17
            if (r6 <= r3) goto L16
            return r1
        L16:
            return r2
        L17:
            java.util.List r0 = r0.b()
            if (r0 == 0) goto L26
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            boolean r6 = r0.contains(r6)
            return r6
        L26:
            if (r6 <= r3) goto L29
            return r1
        L29:
            return r2
    }

    private boolean a(com.mbridge.msdk.videocommon.d.c r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            r7 = this;
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L79
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L79
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L79
            r3 = 0
            if (r2 != 0) goto L2d
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.c.a r1 = r2.b(r1)     // Catch: java.lang.Exception -> L79
            if (r1 != 0) goto L23
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.c.a r1 = r1.b()     // Catch: java.lang.Exception -> L79
        L23:
            if (r1 == 0) goto L2d
            long r1 = r1.W()     // Catch: java.lang.Exception -> L79
            r5 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r5
            goto L2e
        L2d:
            r1 = r3
        L2e:
            com.mbridge.msdk.videocommon.d.b r5 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.videocommon.d.a r5 = r5.b()     // Catch: java.lang.Exception -> L79
            if (r5 == 0) goto L3c
            long r3 = r5.e()     // Catch: java.lang.Exception -> L79
        L3c:
            r5 = 1
            if (r9 == 0) goto L59
            boolean r1 = r9.isSpareOffer(r3, r1)     // Catch: java.lang.Exception -> L79
            if (r1 == 0) goto L56
            r9.setSpareOfferFlag(r5)     // Catch: java.lang.Exception -> L79
            int r8 = r8.C()     // Catch: java.lang.Exception -> L79
            if (r8 != r5) goto L52
            r9.setCbt(r5)     // Catch: java.lang.Exception -> L79
            return r5
        L52:
            r9.setCbt(r0)     // Catch: java.lang.Exception -> L79
            return r0
        L56:
            r9.setSpareOfferFlag(r0)     // Catch: java.lang.Exception -> L79
        L59:
            if (r9 == 0) goto L6e
            boolean r1 = r9.isBidCampaign()     // Catch: java.lang.Exception -> L79
            if (r1 != 0) goto L6e
            if (r8 == 0) goto L6e
            int r8 = r8.d()     // Catch: java.lang.Exception -> L79
            r9.setCbt(r8)     // Catch: java.lang.Exception -> L79
            if (r8 != r5) goto L6d
            r0 = r5
        L6d:
            return r0
        L6e:
            if (r9 == 0) goto L79
            boolean r8 = r9.isBidCampaign()     // Catch: java.lang.Exception -> L79
            if (r8 == 0) goto L79
            r9.setCbt(r0)     // Catch: java.lang.Exception -> L79
        L79:
            return r0
    }

    private boolean a(boolean r5) {
            r4 = this;
            r0 = 0
            com.mbridge.msdk.videocommon.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.videocommon.d.c r1 = r4.b     // Catch: java.lang.Throwable -> L26
            int r1 = r1.A()     // Catch: java.lang.Throwable -> L26
            r2 = 1
            if (r1 == r2) goto L25
            r3 = 2
            if (r1 == r3) goto L1b
            r5 = 3
            if (r1 == r5) goto L16
            goto L2e
        L16:
            boolean r5 = r4.d()     // Catch: java.lang.Throwable -> L26
            return r5
        L1b:
            if (r5 == 0) goto L24
            boolean r5 = r4.d()     // Catch: java.lang.Throwable -> L26
            if (r5 == 0) goto L24
            r0 = r2
        L24:
            return r0
        L25:
            return r5
        L26:
            r5 = move-exception
            java.lang.String r1 = "DeductionShowRewardListener"
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r5)
        L2e:
            return r0
    }

    private int c() {
            r1 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r1.b
            if (r0 == 0) goto Lf
            com.mbridge.msdk.videocommon.b.c r0 = r0.z()
            if (r0 == 0) goto Lf
            int r0 = r0.a()
            return r0
        Lf:
            r0 = 1
            return r0
    }

    private boolean d() {
            r5 = this;
            r0 = 0
            com.mbridge.msdk.videocommon.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L6
            return r0
        L6:
            com.mbridge.msdk.videocommon.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L22
            double r1 = r1.B()     // Catch: java.lang.Throwable -> L22
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L13
            return r0
        L13:
            java.util.Random r3 = new java.util.Random     // Catch: java.lang.Throwable -> L22
            r3.<init>()     // Catch: java.lang.Throwable -> L22
            double r3 = r3.nextDouble()     // Catch: java.lang.Throwable -> L22
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto L21
            r0 = 1
        L21:
            return r0
        L22:
            r1 = move-exception
            java.lang.String r2 = "DeductionShowRewardListener"
            java.lang.String r3 = ""
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r1)
            return r0
    }

    @Override
    public final void a() {
            r5 = this;
            super.a()
            com.mbridge.msdk.video.bt.module.b.h r0 = r5.a
            if (r0 == 0) goto L29
            boolean r0 = r5.h
            if (r0 != 0) goto L29
            boolean r0 = r5.g
            r1 = 1
            if (r0 == 0) goto L18
            if (r0 == 0) goto L1d
            boolean r0 = r5.a(r1)
            if (r0 != 0) goto L1d
        L18:
            com.mbridge.msdk.video.bt.module.b.h r0 = r5.a
            r0.a()
        L1d:
            com.mbridge.msdk.video.bt.module.b.h r0 = r5.a
            r2 = 2
            java.lang.String r3 = r5.d
            java.lang.String r4 = r5.c
            r0.a(r2, r3, r4)
            r5.h = r1
        L29:
            return
    }

    @Override
    public final void a(java.lang.String r5) {
            r4 = this;
            super.a(r5)
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            if (r0 == 0) goto L29
            boolean r0 = r4.i
            if (r0 != 0) goto L29
            boolean r0 = r4.g
            r1 = 1
            if (r0 == 0) goto L18
            if (r0 == 0) goto L1d
            boolean r0 = r4.a(r1)
            if (r0 != 0) goto L1d
        L18:
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            r0.a(r5)
        L1d:
            com.mbridge.msdk.video.bt.module.b.h r5 = r4.a
            r0 = 4
            java.lang.String r2 = r4.d
            java.lang.String r3 = r4.c
            r5.a(r0, r2, r3)
            r4.i = r1
        L29:
            return
    }

    @Override
    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            super.a(r3, r4)
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            if (r0 == 0) goto L19
            boolean r0 = r2.g
            if (r0 == 0) goto L14
            if (r0 == 0) goto L19
            r0 = 2
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto L19
        L14:
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            r0.a(r3, r4)
        L19:
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            if (r0 == 0) goto L21
            r1 = 5
            r0.a(r1, r3, r4)
        L21:
            return
    }

    @Override
    public final void a(boolean r3, int r4) {
            r2 = this;
            super.a(r3, r4)
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            if (r0 == 0) goto L33
            boolean r1 = r2.j
            if (r1 != 0) goto L33
            boolean r1 = r2.g
            if (r1 != 0) goto L13
            r0.a(r3, r4)
            return
        L13:
            r0 = 5
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto L33
            int r0 = r2.c()
            if (r0 != 0) goto L2e
            r0 = 1
            boolean r0 = r2.a(r0)
            if (r0 == 0) goto L2e
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            java.lang.String r1 = ""
            r0.a(r1)
        L2e:
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            r0.a(r3, r4)
        L33:
            return
    }

    @Override
    public final void a(boolean r5, com.mbridge.msdk.videocommon.b.d r6) {
            r4 = this;
            super.a(r5, r6)
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            if (r0 == 0) goto L44
            boolean r1 = r4.j
            if (r1 != 0) goto L44
            r1 = 7
            java.lang.String r2 = r4.d
            java.lang.String r3 = r4.c
            r0.a(r1, r2, r3)
            boolean r0 = r4.g
            r1 = 1
            if (r0 != 0) goto L20
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            r0.a(r5, r6)
            r4.j = r1
            return
        L20:
            r0 = 5
            boolean r0 = r4.a(r0)
            if (r0 != 0) goto L40
            int r0 = r4.c()
            if (r0 != 0) goto L3a
            boolean r0 = r4.a(r1)
            if (r0 == 0) goto L3a
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            java.lang.String r2 = ""
            r0.a(r2)
        L3a:
            com.mbridge.msdk.video.bt.module.b.h r0 = r4.a
            r0.a(r5, r6)
            goto L42
        L40:
            r4.k = r1
        L42:
            r4.j = r1
        L44:
            return
    }

    @Override
    public final void a(boolean r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            super.a(r2, r3, r4)
            com.mbridge.msdk.video.bt.module.b.h r0 = r1.a
            if (r0 == 0) goto L1f
            boolean r0 = r1.g
            if (r0 == 0) goto L14
            if (r0 == 0) goto L1f
            r0 = 4
            boolean r0 = r1.a(r0)
            if (r0 != 0) goto L1f
        L14:
            boolean r0 = r1.a(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.video.bt.module.b.h r0 = r1.a
            r0.a(r2, r3, r4)
        L1f:
            return
    }

    @Override
    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            super.b(r3, r4)
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            if (r0 == 0) goto L19
            boolean r0 = r2.g
            if (r0 == 0) goto L14
            if (r0 == 0) goto L19
            r0 = 3
            boolean r0 = r2.a(r0)
            if (r0 != 0) goto L19
        L14:
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            r0.b(r3, r4)
        L19:
            com.mbridge.msdk.video.bt.module.b.h r0 = r2.a
            if (r0 == 0) goto L21
            r1 = 6
            r0.a(r1, r3, r4)
        L21:
            return
    }

    @Override
    public final boolean b() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }
}
