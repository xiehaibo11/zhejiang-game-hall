package com.tkay.core.b;

public abstract class a {
    protected com.tkay.core.common.f.ag a;
    protected boolean b;
    protected java.util.concurrent.atomic.AtomicBoolean c;
    private final java.lang.String d;

    public a(com.tkay.core.common.f.ag r3) {
            r2 = this;
            r2.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.d = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.c = r0
            r2.a = r3
            return
    }

    protected static org.json.JSONArray a(java.util.List<com.tkay.core.common.f.aj> r5) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L4c
        L9:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Exception -> L4c
            if (r1 == 0) goto L4c
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Exception -> L4c
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1     // Catch: java.lang.Exception -> L4c
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4c
            r2.<init>()     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "network_firm_id"
            int r4 = r1.c()     // Catch: java.lang.Exception -> L4c
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "ad_source_id"
            java.lang.String r4 = r1.t()     // Catch: java.lang.Exception -> L4c
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = "content"
            java.lang.String r4 = r1.g()     // Catch: java.lang.Exception -> L4c
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L4c
            java.lang.String r3 = r1.z()     // Catch: java.lang.Exception -> L4c
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L4c
            if (r3 != 0) goto L48
            java.lang.String r3 = "error"
            java.lang.String r1 = r1.z()     // Catch: java.lang.Exception -> L4c
            r2.put(r3, r1)     // Catch: java.lang.Exception -> L4c
        L48:
            r0.put(r2)     // Catch: java.lang.Exception -> L4c
            goto L9
        L4c:
            return r0
    }

    protected static void a(com.tkay.core.common.f.aj r0, java.lang.String r1, long r2, int r4) {
            r0.a(r2)
            r2 = 0
            r0.a(r2)
            r0.d(r2)
            r0.g(r4)
            r0.b()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L1d
            java.lang.String r1 = "bid error"
            r0.h(r1)
            return
        L1d:
            r0.h(r1)
            return
    }

    protected static org.json.JSONArray b(java.util.List<org.json.JSONObject> r6) {
            java.lang.String r0 = "unit_ids"
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L34
        Lb:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Exception -> L34
            if (r2 == 0) goto L34
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Exception -> L34
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Exception -> L34
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L34
            r3.<init>()     // Catch: java.lang.Exception -> L34
            java.lang.String r4 = "network_firm_id"
            r5 = 67
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L34
            boolean r4 = r2.has(r0)     // Catch: java.lang.Exception -> L34
            if (r4 == 0) goto L30
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L34
            r3.put(r0, r2)     // Catch: java.lang.Exception -> L34
        L30:
            r1.put(r3)     // Catch: java.lang.Exception -> L34
            goto Lb
        L34:
            return r1
    }

    protected final double a(double r3, com.tkay.core.common.f.aj r5) {
            r2 = this;
            com.tkay.core.api.TYAdConst$CURRENCY r0 = r5.ac()
            if (r0 != 0) goto L7
            return r3
        L7:
            com.tkay.core.api.TYAdConst$CURRENCY r0 = r5.ac()
            com.tkay.core.api.TYAdConst$CURRENCY r1 = com.tkay.core.api.TYAdConst.CURRENCY.RMB
            if (r0 != r1) goto L19
            com.tkay.core.common.f.ag r5 = r2.a
            com.tkay.core.c.d r5 = r5.o
            double r0 = r5.q()
        L17:
            double r3 = r3 * r0
            goto L2d
        L19:
            com.tkay.core.api.TYAdConst$CURRENCY r5 = r5.ac()
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
            if (r5 != r0) goto L2d
            r0 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r3 = r3 / r0
            com.tkay.core.common.f.ag r5 = r2.a
            com.tkay.core.c.d r5 = r5.o
            double r0 = r5.q()
            goto L17
        L2d:
            return r3
    }

    protected final double a(com.tkay.core.common.f.aj r6) {
            r5 = this;
            com.tkay.core.api.TYAdConst$CURRENCY r0 = r6.ac()
            r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            if (r0 != 0) goto L9
            return r1
        L9:
            com.tkay.core.api.TYAdConst$CURRENCY r0 = r6.ac()
            com.tkay.core.api.TYAdConst$CURRENCY r3 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
            if (r0 != r3) goto L1e
            com.tkay.core.common.f.ag r6 = r5.a
            com.tkay.core.c.d r6 = r6.o
            double r3 = r6.q()
            double r1 = r1 / r3
            r3 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r1 = r1 * r3
            goto L2f
        L1e:
            com.tkay.core.api.TYAdConst$CURRENCY r6 = r6.ac()
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.RMB
            if (r6 != r0) goto L2f
            com.tkay.core.common.f.ag r6 = r5.a
            com.tkay.core.c.d r6 = r6.o
            double r3 = r6.q()
            double r1 = r1 / r3
        L2f:
            return r1
    }

    protected final void a(int r7, com.tkay.core.common.f.k r8, double r9) {
            r6 = this;
            r0 = 28
            if (r7 == r0) goto L5
            return
        L5:
            r0 = 4606732058837280358(0x3fee666666666666, double:0.95)
            com.tkay.core.common.f.ag r2 = r6.a
            com.tkay.core.c.d r2 = r2.o
            org.json.JSONObject r2 = r2.g()
            if (r2 == 0) goto L29
            java.lang.String r7 = java.lang.String.valueOf(r7)
            double r2 = r2.optDouble(r7)
            r4 = 0
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 <= 0) goto L29
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 > 0) goto L29
            r0 = r2
        L29:
            double r2 = r8.originPrice
            double r2 = r2 * r0
            java.util.ArrayList r7 = new java.util.ArrayList
            r0 = 5
            r7.<init>(r0)
            com.tkay.core.common.x r0 = com.tkay.core.common.x.a()
            com.tkay.core.common.f.ag r1 = r6.a
            java.lang.String r1 = r1.e
            com.tkay.core.common.f.ag r4 = r6.a
            java.lang.String r4 = r4.d
            java.util.List r0 = r0.b(r1, r4)
            if (r0 == 0) goto L47
            r7.addAll(r0)
        L47:
            java.util.Iterator r7 = r7.iterator()
        L4b:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L65
            java.lang.Object r0 = r7.next()
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            double r0 = com.tkay.core.common.l.g.a(r0)
            double r4 = r8.originPrice
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 >= 0) goto L4b
            double r2 = java.lang.Math.max(r2, r0)
        L65:
            double r9 = java.lang.Math.max(r2, r9)
            double r0 = r8.originPrice
            double r0 = r0 - r9
            double r2 = java.lang.Math.random()
            double r2 = r2 * r0
            double r9 = r9 + r2
            r8.setPrice(r9)
            r8.setSortPrice(r9)
            return
    }

    protected abstract void a(com.tkay.core.b.b.a r1);

    protected abstract void a(com.tkay.core.common.f.aj r1, com.tkay.core.common.f.k r2, long r3);

    protected final void a(com.tkay.core.common.f.aj r22, com.tkay.core.common.f.l r23) {
            r21 = this;
            r1 = r21
            r2 = r22
            r3 = r23
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r4 = r0.a(r2)
            r0 = 0
            r5 = 0
            r6 = 1
            r7 = 0
            if (r4 == 0) goto Lb8
            boolean r9 = r23.d()
            if (r9 == 0) goto L5c
            java.lang.String r9 = r4.g
            boolean r10 = android.text.TextUtils.isEmpty(r9)
            if (r10 != 0) goto L53
            com.tkay.core.b.c r10 = com.tkay.core.b.c.a()
            java.lang.String r11 = r4.g
            java.lang.String r12 = r4.k
            com.tkay.core.b.j r10 = r10.b(r11, r12)
            com.tkay.core.b.c r11 = com.tkay.core.b.c.a()
            java.lang.String r12 = r3.g
            java.lang.String r13 = r3.k
            com.tkay.core.b.j r11 = r11.b(r12, r13)
            if (r10 == 0) goto L4c
            if (r11 == 0) goto L4c
            double r7 = r11.c
            com.tkay.core.b.c r10 = com.tkay.core.b.c.a()
            java.lang.String r11 = r4.k
            r10.c(r9, r11)
            goto Ld3
        L4c:
            if (r10 == 0) goto L50
            double r7 = r10.c
        L50:
            r9 = r5
            goto Ld4
        L53:
            java.lang.String r9 = "tkay_bidding"
            java.lang.String r10 = "TpBidId is empty, price = 0...."
            android.util.Log.e(r9, r10)
            goto Ld3
        L5c:
            boolean r7 = r4.a()
            if (r7 != 0) goto L74
            double r8 = r23.getSortPrice()
            double r10 = r4.getSortPrice()
            int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r8 <= 0) goto L6f
            goto L74
        L6f:
            double r7 = r4.getSortPrice()
            goto L50
        L74:
            double r8 = r23.getSortPrice()
            if (r7 == 0) goto Lb6
            com.tkay.core.common.f.ag r7 = r1.a
            java.lang.String r10 = r7.d
            com.tkay.core.common.f.ag r7 = r1.a
            java.lang.String r11 = r7.e
            com.tkay.core.common.f.ag r7 = r1.a
            com.tkay.core.c.d r13 = r7.o
            r15 = 1
            r16 = 0
            r17 = 0
            com.tkay.core.common.f.ag r7 = r1.a
            com.tkay.core.common.j r7 = r7.c
            if (r7 == 0) goto L9a
            com.tkay.core.common.f.ag r7 = r1.a
            com.tkay.core.common.j r7 = r7.c
            java.util.Map<java.lang.String, java.lang.Object> r7 = r7.g
            r18 = r7
            goto L9c
        L9a:
            r18 = r0
        L9c:
            java.lang.String r12 = ""
            java.lang.String r14 = ""
            com.tkay.core.common.f.d r7 = com.tkay.core.common.l.s.a(r10, r11, r12, r13, r14, r15, r16, r17, r18)
            com.tkay.core.common.f.q r10 = new com.tkay.core.common.f.q
            r10.<init>()
            r10.a = r6
            r10.b = r8
            r10.e = r7
            r10.c = r2
            r10.d = r2
            r4.a(r10, r6)
        Lb6:
            r7 = r8
            goto Ld3
        Lb8:
            boolean r9 = r23.d()
            if (r9 == 0) goto Lcf
            com.tkay.core.b.c r9 = com.tkay.core.b.c.a()
            java.lang.String r10 = r3.g
            java.lang.String r11 = r3.k
            com.tkay.core.b.j r9 = r9.b(r10, r11)
            if (r9 == 0) goto Ld3
            double r7 = r9.c
            goto Ld3
        Lcf:
            double r7 = r23.getSortPrice()
        Ld3:
            r9 = r6
        Ld4:
            r10 = 3
            r11 = 2
            if (r9 == 0) goto L144
            if (r4 == 0) goto L119
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L115
            java.lang.String r12 = r9.d     // Catch: java.lang.Throwable -> L115
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L115
            java.lang.String r13 = r9.e     // Catch: java.lang.Throwable -> L115
            java.lang.String r14 = ""
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L115
            com.tkay.core.c.d r15 = r9.o     // Catch: java.lang.Throwable -> L115
            java.lang.String r16 = ""
            r17 = 1
            r18 = 0
            r19 = 0
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L115
            com.tkay.core.common.j r9 = r9.c     // Catch: java.lang.Throwable -> L115
            if (r9 == 0) goto Lfc
            com.tkay.core.common.f.ag r0 = r1.a     // Catch: java.lang.Throwable -> L115
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L115
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.g     // Catch: java.lang.Throwable -> L115
        Lfc:
            r20 = r0
            com.tkay.core.common.f.d r0 = com.tkay.core.common.l.s.a(r12, r13, r14, r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L115
            com.tkay.core.common.f.q r9 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L115
            r9.<init>()     // Catch: java.lang.Throwable -> L115
            r9.a = r11     // Catch: java.lang.Throwable -> L115
            r9.b = r7     // Catch: java.lang.Throwable -> L115
            r9.e = r0     // Catch: java.lang.Throwable -> L115
            r9.c = r2     // Catch: java.lang.Throwable -> L115
            r9.d = r2     // Catch: java.lang.Throwable -> L115
            r4.a(r9, r6)     // Catch: java.lang.Throwable -> L115
            goto L119
        L115:
            r0 = move-exception
            r0.printStackTrace()
        L119:
            r2.a(r3, r11, r5, r6)
            int r0 = r22.K()
            if (r0 == r11) goto L191
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> r0 = r0.a
            java.lang.String r4 = r22.t()
            r0.put(r4, r3)
            int r0 = r22.l()
            if (r0 == r10) goto L13c
            int r0 = r22.l()
            r4 = 7
            if (r0 != r4) goto L143
        L13c:
            java.lang.String r0 = r22.t()
            com.tkay.core.b.c.a(r0, r3)
        L143:
            return
        L144:
            if (r3 == 0) goto L18e
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L18a
            java.lang.String r12 = r9.d     // Catch: java.lang.Throwable -> L18a
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L18a
            java.lang.String r13 = r9.e     // Catch: java.lang.Throwable -> L18a
            java.lang.String r14 = ""
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L18a
            com.tkay.core.c.d r15 = r9.o     // Catch: java.lang.Throwable -> L18a
            java.lang.String r16 = ""
            r17 = 1
            r18 = 0
            r19 = 0
            com.tkay.core.common.f.ag r9 = r1.a     // Catch: java.lang.Throwable -> L18a
            com.tkay.core.common.j r9 = r9.c     // Catch: java.lang.Throwable -> L18a
            if (r9 == 0) goto L168
            com.tkay.core.common.f.ag r0 = r1.a     // Catch: java.lang.Throwable -> L18a
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L18a
            java.util.Map<java.lang.String, java.lang.Object> r0 = r0.g     // Catch: java.lang.Throwable -> L18a
        L168:
            r20 = r0
            com.tkay.core.common.f.d r0 = com.tkay.core.common.l.s.a(r12, r13, r14, r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L18a
            com.tkay.core.common.f.q r9 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L18a
            r9.<init>()     // Catch: java.lang.Throwable -> L18a
            r9.b = r7     // Catch: java.lang.Throwable -> L18a
            r9.e = r0     // Catch: java.lang.Throwable -> L18a
            r9.c = r2     // Catch: java.lang.Throwable -> L18a
            r9.d = r2     // Catch: java.lang.Throwable -> L18a
            boolean r0 = r23.d()     // Catch: java.lang.Throwable -> L18a
            if (r0 == 0) goto L184
            r9.a = r10     // Catch: java.lang.Throwable -> L18a
            goto L186
        L184:
            r9.a = r11     // Catch: java.lang.Throwable -> L18a
        L186:
            r3.a(r9, r5)     // Catch: java.lang.Throwable -> L18a
            goto L18e
        L18a:
            r0 = move-exception
            r0.printStackTrace()
        L18e:
            r2.a(r4, r6, r5, r6)
        L191:
            return
    }

    protected void a(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final boolean a() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.c
            boolean r0 = r0.get()
            return r0
    }

    protected final boolean a(com.tkay.core.common.f.aj r2, java.lang.String r3, int r4) {
            r1 = this;
            r0 = 0
            boolean r2 = r1.a(r2, r3, r4, r0)
            return r2
    }

    protected final boolean a(com.tkay.core.common.f.aj r16, java.lang.String r17, int r18, int r19) {
            r15 = this;
            r1 = r15
            r0 = r16
            com.tkay.core.b.c r2 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r2 = r2.a(r0)
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L21
            boolean r5 = r2.a()
            if (r5 == 0) goto L16
            goto L21
        L16:
            r5 = r18
            r6 = r19
            r0.a(r2, r3, r5, r6)
            r16.h(r17)
            return r4
        L21:
            if (r2 == 0) goto L64
            com.tkay.core.common.f.ag r5 = r1.a     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = r5.d     // Catch: java.lang.Throwable -> L60
            com.tkay.core.common.f.ag r5 = r1.a     // Catch: java.lang.Throwable -> L60
            java.lang.String r7 = r5.e     // Catch: java.lang.Throwable -> L60
            java.lang.String r8 = ""
            com.tkay.core.common.f.ag r5 = r1.a     // Catch: java.lang.Throwable -> L60
            com.tkay.core.c.d r9 = r5.o     // Catch: java.lang.Throwable -> L60
            java.lang.String r10 = ""
            r11 = 1
            r12 = 0
            r13 = 0
            com.tkay.core.common.f.ag r5 = r1.a     // Catch: java.lang.Throwable -> L60
            com.tkay.core.common.j r5 = r5.c     // Catch: java.lang.Throwable -> L60
            if (r5 == 0) goto L43
            com.tkay.core.common.f.ag r5 = r1.a     // Catch: java.lang.Throwable -> L60
            com.tkay.core.common.j r5 = r5.c     // Catch: java.lang.Throwable -> L60
            java.util.Map<java.lang.String, java.lang.Object> r5 = r5.g     // Catch: java.lang.Throwable -> L60
            goto L44
        L43:
            r5 = 0
        L44:
            r14 = r5
            com.tkay.core.common.f.d r5 = com.tkay.core.common.l.s.a(r6, r7, r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> L60
            com.tkay.core.common.f.q r6 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L60
            r6.<init>()     // Catch: java.lang.Throwable -> L60
            r6.a = r4     // Catch: java.lang.Throwable -> L60
            double r7 = r2.getSortPrice()     // Catch: java.lang.Throwable -> L60
            r6.b = r7     // Catch: java.lang.Throwable -> L60
            r6.e = r5     // Catch: java.lang.Throwable -> L60
            r6.c = r0     // Catch: java.lang.Throwable -> L60
            r6.d = r0     // Catch: java.lang.Throwable -> L60
            r2.a(r6, r4)     // Catch: java.lang.Throwable -> L60
            goto L64
        L60:
            r0 = move-exception
            r0.printStackTrace()
        L64:
            return r3
    }

    protected abstract void b();
}
