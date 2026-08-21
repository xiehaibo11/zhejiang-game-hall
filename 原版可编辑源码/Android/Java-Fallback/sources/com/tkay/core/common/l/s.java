package com.tkay.core.common.l;

public final class s {
    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.common.f.d a(com.tkay.core.api.TYBaseAdAdapter r1, com.tkay.core.common.f.d r2, com.tkay.core.common.f.aj r3) {
            r1.setUnitGroupInfo(r3)
            int r3 = r2.F()
            r0 = 1
            if (r3 != r0) goto Lb
            goto Lc
        Lb:
            r0 = 0
        Lc:
            r1.setRefresh(r0)
            java.lang.String r3 = r1.getNetworkSDKVersion()     // Catch: java.lang.Throwable -> L15
            r2.u = r3     // Catch: java.lang.Throwable -> L15
        L15:
            java.lang.String r3 = r2.T()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L26
            java.lang.String r3 = r1.getNetworkName()
            r2.v(r3)
        L26:
            java.lang.Class r3 = r1.getClass()
            java.lang.String r3 = r3.getName()
            r2.e(r3)
            r1.setTrackingInfo(r2)
            return r2
    }

    public static com.tkay.core.common.f.d a(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.tkay.core.c.d r4, java.lang.String r5, int r6, int r7, int r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            com.tkay.core.common.f.d r0 = new com.tkay.core.common.f.d
            r0.<init>()
            r0.x(r2)
            r0.y(r1)
            r0.p(r3)
            r0.m(r5)
            r0.s(r6)
            r0.t(r7)
            r1 = 0
            r0.r = r1
            r2 = 2
            r0.q = r2
            r0.s = r1
            a(r0, r4)
            r0.R()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            int r1 = r1.i()
            r0.C(r1)
            r0.D(r8)
            a(r9, r0)
            return r0
    }

    public static void a(android.content.Context r8, com.tkay.core.common.f.d r9) {
            long r0 = java.lang.System.currentTimeMillis()
            com.tkay.core.a.a r8 = com.tkay.core.a.a.a(r8)
            java.lang.String r2 = r9.Y()
            int r2 = java.lang.Integer.parseInt(r2)
            java.util.Map r8 = r8.a(r2)
            r2 = 0
            if (r8 == 0) goto L3f
            java.util.Collection r3 = r8.values()
            java.util.Iterator r3 = r3.iterator()
            r4 = r2
            r5 = r4
        L21:
            boolean r6 = r3.hasNext()
            if (r6 == 0) goto L34
            java.lang.Object r6 = r3.next()
            com.tkay.core.common.f.ad r6 = (com.tkay.core.common.f.ad) r6
            int r7 = r6.c
            int r4 = r4 + r7
            int r6 = r6.d
            int r5 = r5 + r6
            goto L21
        L34:
            java.lang.String r3 = r9.W()
            java.lang.Object r8 = r8.get(r3)
            com.tkay.core.common.f.ad r8 = (com.tkay.core.common.f.ad) r8
            goto L42
        L3f:
            r8 = 0
            r4 = r2
            r5 = r4
        L42:
            int r4 = r4 + 1
            r9.g(r4)
            int r5 = r5 + 1
            r9.h(r5)
            if (r8 == 0) goto L51
            int r3 = r8.c
            goto L52
        L51:
            r3 = r2
        L52:
            int r3 = r3 + 1
            r9.i(r3)
            if (r8 == 0) goto L5b
            int r2 = r8.d
        L5b:
            int r2 = r2 + 1
            r9.j(r2)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "Check cap waite time:"
            r8.<init>(r9)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            r8.append(r2)
            return
    }

    public static void a(com.tkay.core.common.f.d r3, com.tkay.core.c.d r4) {
            if (r3 == 0) goto L88
            if (r4 == 0) goto L88
            int r0 = r4.Y()
            java.lang.String r1 = "1"
            int r2 = java.lang.Integer.parseInt(r1)
            if (r0 != r2) goto L14
            r3.o(r1)
            goto L19
        L14:
            java.lang.String r0 = "0"
            r3.o(r0)
        L19:
            int r0 = r4.P()
            r3.E(r0)
            java.lang.String r0 = r4.V()
            r3.w(r0)
            int r0 = r4.af()
            r3.v(r0)
            int r0 = r4.Y()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r3.z(r0)
            java.lang.String r0 = r4.L()
            r3.j(r0)
            java.lang.String r0 = r4.K()
            r3.k(r0)
            double r0 = r4.y()
            r3.c(r0)
            java.lang.String r0 = r4.z()
            r3.d(r0)
            java.util.Map r0 = r4.J()
            r3.b(r0)
            com.tkay.core.api.TYRewardInfo r0 = r4.M()
            r3.a(r0)
            java.util.Map r0 = r4.N()
            r3.c(r0)
            int r0 = r4.l()
            r3.a(r0)
            int r0 = r4.m()
            r3.b(r0)
            java.lang.String r0 = r4.d()
            r3.t(r0)
            org.json.JSONObject r4 = r4.ax()
            if (r4 == 0) goto L88
            r3.a(r4)
        L88:
            return
    }

    public static void a(com.tkay.core.common.f.d r5, com.tkay.core.common.f.aj r6, int r7, boolean r8) {
            java.lang.String r0 = "0"
            if (r8 == 0) goto L1d
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()
            android.content.Context r8 = r8.f()
            com.tkay.core.a.a r8 = com.tkay.core.a.a.a(r8)
            java.lang.String r1 = r5.W()
            java.lang.String r2 = r6.t()
            com.tkay.core.common.f.ad$a r8 = r8.a(r1, r2)
            goto L1e
        L1d:
            r8 = 0
        L1e:
            int r1 = r6.l()
            r5.c(r1)
            int r1 = r6.c()
            r5.u(r1)
            java.lang.String r1 = r6.t()
            r5.l(r1)
            int r1 = r6.C()
            r5.l(r1)
            int r1 = r6.D()
            r5.m(r1)
            int r1 = r6.T()
            r5.f(r1)
            r5.o(r7)
            java.lang.String r7 = r6.g()
            r5.n(r7)
            r7 = 0
            if (r8 == 0) goto L58
            int r1 = r8.e
            goto L59
        L58:
            r1 = r7
        L59:
            r5.q(r1)
            if (r8 == 0) goto L60
            int r7 = r8.d
        L60:
            r5.r(r7)
            boolean r7 = r6.L()
            if (r7 == 0) goto L8f
            boolean r7 = r6.Z()
            if (r7 == 0) goto L80
            com.tkay.core.common.f.l r7 = r6.M()
            if (r7 == 0) goto L97
            double r1 = r7.o
            r5.d(r1)
            double r7 = r7.o
            r5.a(r7)
            goto L97
        L80:
            double r7 = r6.x()
            r5.d(r7)
            double r7 = r6.af()
            r5.a(r7)
            goto L97
        L8f:
            r7 = 0
            r5.d(r7)
            r5.a(r7)
        L97:
            boolean r7 = r6.j()
            if (r7 == 0) goto Ld2
            int r7 = r6.U()
            r8 = 2
            if (r7 == r8) goto Le8
            boolean r7 = r6.Z()
            if (r7 == 0) goto Lc0
            com.tkay.core.common.f.l r7 = r6.M()
            if (r7 == 0) goto Le8
            double r1 = r7.o
            double r3 = r5.g()
            double r1 = r1 * r3
            r5.b(r1)
            java.lang.String r7 = r7.p
            r5.i(r7)
            goto Le8
        Lc0:
            double r7 = r6.x()
            double r1 = r5.g()
            double r7 = r7 * r1
            r5.b(r7)
            java.lang.String r7 = "exact"
            r5.i(r7)
            goto Le8
        Ld2:
            double r7 = r6.I()
            r5.b(r7)
            java.lang.String r7 = r6.F()
            boolean r8 = android.text.TextUtils.isEmpty(r7)
            if (r8 == 0) goto Le5
            java.lang.String r7 = "publisher_defined"
        Le5:
            r5.i(r7)
        Le8:
            int r7 = r6.i()
            r5.n(r7)
            java.lang.String r7 = r6.y()
            r5.f(r7)
            java.lang.String r7 = r6.u()
            r5.ao = r7
            int r7 = r6.v()
            r5.ap = r7
            int r7 = r6.w()
            r5.aq = r7
            int r7 = r6.E()
            r5.k(r7)
            int r7 = r6.U()
            r5.e(r7)
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r8 = r6.g()     // Catch: java.lang.Throwable -> L1a9
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L1a9
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1a9
            r8.<init>()     // Catch: java.lang.Throwable -> L1a9
            r1 = 35
            int r2 = r6.c()     // Catch: java.lang.Throwable -> L1a9
            if (r1 != r2) goto L15c
            java.lang.String r1 = "my_oid"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L1a9
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L1a9
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L1a9
            com.tkay.core.c.e r2 = com.tkay.core.c.e.a(r2)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r3 = r5.W()     // Catch: java.lang.Throwable -> L1a9
            com.tkay.core.c.d r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L1a9
            if (r2 == 0) goto L15c
            com.tkay.core.common.f.r r2 = r2.e(r1)     // Catch: java.lang.Throwable -> L1a9
            if (r2 == 0) goto L15c
            java.lang.String r3 = "o_id"
            r8.put(r3, r1)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r1 = "c_id"
            java.lang.String r2 = r2.q()     // Catch: java.lang.Throwable -> L1a9
            r8.put(r1, r2)     // Catch: java.lang.Throwable -> L1a9
        L15c:
            java.lang.String r1 = r5.Y()     // Catch: java.lang.Throwable -> L1a9
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L1a9
            if (r1 == 0) goto L18d
            r1 = 3
            int r2 = r6.l()     // Catch: java.lang.Throwable -> L1a9
            if (r1 == r2) goto L174
            r1 = 7
            int r2 = r6.l()     // Catch: java.lang.Throwable -> L1a9
            if (r1 != r2) goto L18d
        L174:
            java.lang.String r1 = "layout_type"
            java.lang.String r7 = r7.optString(r1)     // Catch: java.lang.Throwable -> L1a9
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L1a9
            if (r1 != 0) goto L186
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> L1a9
            if (r0 == 0) goto L188
        L186:
            java.lang.String r7 = "2"
        L188:
            java.lang.String r0 = "tpl_type"
            r8.put(r0, r7)     // Catch: java.lang.Throwable -> L1a9
        L18d:
            r7 = 28
            int r0 = r6.c()     // Catch: java.lang.Throwable -> L1a9
            if (r7 != r0) goto L1a2
            com.tkay.core.common.f.l r7 = r6.M()     // Catch: java.lang.Throwable -> L1a9
            if (r7 == 0) goto L1a2
            java.lang.String r0 = "origin_price"
            double r1 = r7.originPrice     // Catch: java.lang.Throwable -> L1a9
            r8.put(r0, r1)     // Catch: java.lang.Throwable -> L1a9
        L1a2:
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L1a9
            r5.q(r7)     // Catch: java.lang.Throwable -> L1a9
        L1a9:
            com.tkay.core.common.f.l r7 = r6.M()
            if (r7 == 0) goto L1b2
            java.lang.String r7 = r7.g
            goto L1b4
        L1b2:
            java.lang.String r7 = ""
        L1b4:
            r5.c(r7)
            int r7 = r6.X()
            r5.w(r7)
            java.lang.String r6 = r6.d()
            r5.v(r6)
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.Object> r1, com.tkay.core.common.f.d r2) {
            if (r1 == 0) goto L26
            java.lang.String r0 = "cp_placement_id"
            java.lang.Object r0 = r1.get(r0)
            if (r0 == 0) goto L11
            java.lang.String r0 = r0.toString()
            r2.u(r0)
        L11:
            java.lang.String r0 = "cp_pre_md"
            java.lang.Object r1 = r1.get(r0)
            boolean r0 = r1 instanceof java.lang.Integer
            if (r0 == 0) goto L26
            java.lang.String r1 = r1.toString()
            int r1 = java.lang.Integer.parseInt(r1)
            r2.B(r1)
        L26:
            return
    }
}
