package com.mbridge.msdk.mbbanner.common.b;

public class e implements com.mbridge.msdk.mbbanner.common.b.c {
    private static final java.lang.String a = null;
    private com.mbridge.msdk.mbbanner.common.b.c b;
    private com.mbridge.msdk.c.d c;
    private boolean d;

    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.b.e> r0 = com.mbridge.msdk.mbbanner.common.b.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.b.e.a = r0
            return
    }

    public e(com.mbridge.msdk.mbbanner.common.b.c r2, com.mbridge.msdk.c.d r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.c = r3
            r1.b = r2
            return
    }

    @Override
    public final void a() {
            r2 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r2.b
            if (r0 == 0) goto Lb
            boolean r1 = r2.d
            if (r1 != 0) goto Lb
            r0.a()
        Lb:
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, boolean r3) {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r3 = r1.b
            if (r3 == 0) goto L9
            boolean r0 = r1.d
            r3.a(r2, r0)
        L9:
            return
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7) {
            r6 = this;
            if (r7 == 0) goto L5b
            int r0 = r7.size()     // Catch: java.lang.Exception -> L53
            if (r0 <= 0) goto L5b
            com.mbridge.msdk.c.d r0 = r6.c     // Catch: java.lang.Exception -> L53
            r1 = 0
            java.lang.Object r2 = r7.get(r1)     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2     // Catch: java.lang.Exception -> L53
            boolean r2 = r2.isBidCampaign()     // Catch: java.lang.Exception -> L53
            if (r2 == 0) goto L18
            goto L38
        L18:
            if (r0 == 0) goto L38
            double r2 = r0.e()     // Catch: java.lang.Exception -> L53
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L25
            goto L38
        L25:
            double r2 = r0.e()     // Catch: java.lang.Exception -> L53
            java.util.Random r0 = new java.util.Random     // Catch: java.lang.Exception -> L53
            r0.<init>()     // Catch: java.lang.Exception -> L53
            double r4 = r0.nextDouble()     // Catch: java.lang.Exception -> L53
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L38
            r0 = 1
            r1 = r0
        L38:
            r6.d = r1     // Catch: java.lang.Exception -> L53
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.b.e.a     // Catch: java.lang.Exception -> L53
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L53
            r1.<init>()     // Catch: java.lang.Exception -> L53
            boolean r2 = r6.d     // Catch: java.lang.Exception -> L53
            r1.append(r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r2 = ""
            r1.append(r2)     // Catch: java.lang.Exception -> L53
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L53
            goto L5b
        L53:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.mbbanner.common.b.e.a
            java.lang.String r2 = "Exception"
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L5b:
            com.mbridge.msdk.mbbanner.common.b.c r0 = r6.b
            if (r0 == 0) goto L62
            r0.a(r7)
        L62:
            return
    }

    @Override
    public final void a(boolean r2) {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public final void b() {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    @Override
    public final void c() {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    @Override
    public final void d() {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }

    @Override
    public final void e() {
            r1 = this;
            com.mbridge.msdk.mbbanner.common.b.c r0 = r1.b
            if (r0 == 0) goto L7
            r0.e()
        L7:
            return
    }
}
