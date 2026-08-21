package com.mbridge.msdk.mbbid.common.a;

public final class b {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private android.content.Context d;
    private com.mbridge.msdk.mbbid.out.BidListennning e;
    private com.mbridge.msdk.mbbid.common.BidResponsedEx f;
    private int g;
    private boolean h;
    private long i;
    private long j;
    private boolean k;
    private int l;


    public b(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.h = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            r1.d = r2
            return
    }

    static android.content.Context a(com.mbridge.msdk.mbbid.common.a.b r0) {
            android.content.Context r0 = r0.d
            return r0
    }

    static com.mbridge.msdk.mbbid.common.BidResponsedEx a(com.mbridge.msdk.mbbid.common.a.b r0, com.mbridge.msdk.mbbid.common.BidResponsedEx r1) {
            r0.f = r1
            return r1
    }

    static void a(com.mbridge.msdk.mbbid.common.a.b r0, com.mbridge.msdk.mbbid.out.BidResponsed r1) {
            com.mbridge.msdk.mbbid.out.BidListennning r0 = r0.e
            if (r0 == 0) goto L7
            r0.onSuccessed(r1)
        L7:
            return
    }

    static void a(com.mbridge.msdk.mbbid.common.a.b r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.mbbid.out.BidListennning r0 = r1.e
            if (r0 == 0) goto L7
            r0.onFailed(r2)
        L7:
            return
    }

    static boolean a(com.mbridge.msdk.mbbid.common.a.b r0, boolean r1) {
            r0.h = r1
            return r1
    }

    static java.lang.String b(com.mbridge.msdk.mbbid.common.a.b r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(com.mbridge.msdk.mbbid.out.BidListennning r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void b(long r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void b(boolean r15) {
            r14 = this;
            java.lang.String r0 = "orientation"
            java.lang.String r1 = ""
            boolean r2 = r14.h     // Catch: java.lang.Throwable -> L1cb
            if (r2 != 0) goto L1c5
            r2 = 1
            r14.h = r2     // Catch: java.lang.Throwable -> L1cb
            android.content.Context r3 = r14.d     // Catch: java.lang.Throwable -> L1cb
            if (r3 != 0) goto L14
            java.lang.String r3 = "context is null"
            r14.a(r3)     // Catch: java.lang.Throwable -> L1cb
        L14:
            com.mbridge.msdk.mbbid.common.b.a r3 = new com.mbridge.msdk.mbbid.common.b.a     // Catch: java.lang.Throwable -> L1cb
            android.content.Context r4 = r14.d     // Catch: java.lang.Throwable -> L1cb
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L1cb
            com.mbridge.msdk.foundation.same.net.g.d r4 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Throwable -> L1cb
            r4.<init>()     // Catch: java.lang.Throwable -> L1cb
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r5.k()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "app_id"
            r4.a(r6, r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r6.<init>()     // Catch: java.lang.Throwable -> L1cb
            r6.append(r5)     // Catch: java.lang.Throwable -> L1cb
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r5.l()     // Catch: java.lang.Throwable -> L1cb
            r6.append(r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = "sign"
            r4.a(r6, r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "unit_id"
            java.lang.String r6 = r14.b     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r14.a     // Catch: java.lang.Throwable -> L1cb
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L1cb
            if (r5 != 0) goto L63
            java.lang.String r5 = "placement_id"
            java.lang.String r6 = r14.a     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L1cb
        L63:
            java.lang.String r5 = "bid_floor"
            java.lang.String r6 = r14.c     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.d.c     // Catch: java.lang.Throwable -> L1cb
            android.content.Context r6 = r14.d     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r7 = r14.b     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ae.b(r6, r7)     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "install_ids"
            r6 = 0
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.ae.a(r6)     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.d.b     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r7 = r14.b     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.d.a(r7, r1)     // Catch: java.lang.Throwable -> L1cb
            r4.a(r5, r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = "req_type"
            boolean r7 = r14.k     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r8 = "1"
            if (r7 == 0) goto L96
            r7 = r8
            goto L98
        L96:
            java.lang.String r7 = "2"
        L98:
            r4.a(r5, r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r5.<init>()     // Catch: java.lang.Throwable -> L1cb
            android.content.Context r7 = r14.d     // Catch: java.lang.Throwable -> L1cb
            int r7 = com.mbridge.msdk.foundation.tools.v.t(r7)     // Catch: java.lang.Throwable -> L1cb
            r5.append(r7)     // Catch: java.lang.Throwable -> L1cb
            r5.append(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L1cb
            r4.a(r0, r5)     // Catch: java.lang.Throwable -> L1cb
            int r5 = r14.g     // Catch: java.lang.Throwable -> L1cb
            r7 = 296(0x128, float:4.15E-43)
            java.lang.String r9 = "bid required param is missing or error"
            java.lang.String r10 = "x"
            java.lang.String r11 = "unit_size"
            r12 = 0
            if (r5 != r7) goto L126
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L122
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L122
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r15.<init>()     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            r15.append(r10)     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L1cb
            r4.a(r11, r15)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r15 = "com.mbridge.msdk.mbbanner.common.util.BannerUtils"
            java.lang.Class r15 = java.lang.Class.forName(r15)     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.String r0 = "getCloseIds"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r5[r6] = r7     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.reflect.Method r15 = r15.getMethod(r0, r5)     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.String r5 = r14.b     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            r0[r6] = r5     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            r5 = 0
            java.lang.Object r0 = r15.invoke(r5, r0)     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            boolean r0 = r0 instanceof java.lang.String     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            if (r0 == 0) goto L1a6
            java.lang.String r0 = "close_id"
            java.lang.Object[] r7 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.String r8 = r14.b     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            r7[r6] = r8     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.Object r15 = r15.invoke(r5, r7)     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            r4.a(r0, r15)     // Catch: java.lang.Exception -> L11c java.lang.Throwable -> L1cb
            goto L1a6
        L11c:
            java.lang.String r15 = "banner module is miss"
            r14.a(r15)     // Catch: java.lang.Throwable -> L1cb
            return
        L122:
            r14.a(r9)     // Catch: java.lang.Throwable -> L1cb
            return
        L126:
            int r5 = r14.g     // Catch: java.lang.Throwable -> L1cb
            r7 = 297(0x129, float:4.16E-43)
            if (r5 != r7) goto L16c
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L166
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L166
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r15.<init>()     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            r15.append(r10)     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L1cb
            r4.a(r11, r15)     // Catch: java.lang.Throwable -> L1cb
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r15.<init>()     // Catch: java.lang.Throwable -> L1cb
            int r5 = r14.l     // Catch: java.lang.Throwable -> L1cb
            r15.append(r5)     // Catch: java.lang.Throwable -> L1cb
            r15.append(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L1cb
            r4.a(r0, r15)     // Catch: java.lang.Throwable -> L1cb
            goto L1a6
        L166:
            java.lang.String r15 = "ad display area is too small"
            r14.a(r15)     // Catch: java.lang.Throwable -> L1cb
            return
        L16c:
            int r0 = r14.g     // Catch: java.lang.Throwable -> L1cb
            r5 = 298(0x12a, float:4.18E-43)
            if (r0 != r5) goto L19c
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L198
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            int r15 = (r7 > r12 ? 1 : (r7 == r12 ? 0 : -1))
            if (r15 <= 0) goto L198
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1cb
            r15.<init>()     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.j     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            r15.append(r10)     // Catch: java.lang.Throwable -> L1cb
            long r7 = r14.i     // Catch: java.lang.Throwable -> L1cb
            r15.append(r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L1cb
            r4.a(r11, r15)     // Catch: java.lang.Throwable -> L1cb
            goto L1a6
        L198:
            r14.a(r9)     // Catch: java.lang.Throwable -> L1cb
            return
        L19c:
            java.lang.String r0 = "rw_plus"
            if (r15 == 0) goto L1a1
            goto L1a3
        L1a1:
            java.lang.String r8 = "0"
        L1a3:
            r4.a(r0, r8)     // Catch: java.lang.Throwable -> L1cb
        L1a6:
            com.mbridge.msdk.mbbid.common.a.b$1 r15 = new com.mbridge.msdk.mbbid.common.a.b$1     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r0 = r14.a     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r5 = r14.b     // Catch: java.lang.Throwable -> L1cb
            r15.<init>(r14, r0, r5)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r0 = r14.b     // Catch: java.lang.Throwable -> L1cb
            r15.setUnitId(r0)     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r0 = r14.a     // Catch: java.lang.Throwable -> L1cb
            r15.setPlacementId(r0)     // Catch: java.lang.Throwable -> L1cb
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L1cb
            java.lang.String r0 = r0.a(r6, r1)     // Catch: java.lang.Throwable -> L1cb
            r3.get(r2, r0, r4, r15)     // Catch: java.lang.Throwable -> L1cb
            goto L1d3
        L1c5:
            java.lang.String r15 = "current unit is biding"
            r14.a(r15)     // Catch: java.lang.Throwable -> L1cb
            return
        L1cb:
            r15 = move-exception
            java.lang.String r15 = r15.getMessage()
            r14.a(r15)
        L1d3:
            return
    }
}
