package com.tkay.core.b;

public final class i extends com.tkay.core.b.b {
    boolean A;
    java.lang.String w;
    java.util.List<com.tkay.core.common.f.aj> x;
    java.util.List<com.tkay.core.common.f.aj> y;
    boolean z;

    public i(com.tkay.core.common.f.ag r6) {
            r5 = this;
            r5.<init>(r6)
            int r0 = r6.f
            android.content.Context r1 = r6.b
            java.lang.String r2 = r5.i
            java.lang.String r3 = r5.j
            r4 = 0
            org.json.JSONObject r0 = com.tkay.core.common.l.g.a(r1, r2, r3, r0, r4)
            java.lang.String r0 = r0.toString()
            r5.w = r0
            java.util.List<com.tkay.core.common.f.aj> r0 = r6.k
            if (r0 != 0) goto L2b
            java.util.ArrayList r6 = new java.util.ArrayList
            r0 = 4
            r6.<init>(r0)
            r5.x = r6
            java.util.ArrayList r6 = new java.util.ArrayList
            r0 = 1
            r6.<init>(r0)
            r5.y = r6
            return
        L2b:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.tkay.core.common.f.aj> r1 = r6.k
            r0.<init>(r1)
            r5.x = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.tkay.core.common.f.aj> r6 = r6.k
            r0.<init>(r6)
            r5.y = r0
            return
    }

    private void a(java.lang.String r14, java.lang.String r15) {
            r13 = this;
            com.tkay.core.common.f.ag r0 = r13.a
            android.content.Context r0 = r0.b
            com.tkay.core.common.w r0 = com.tkay.core.common.w.a(r0)
            com.tkay.core.common.f.ag r1 = r13.a
            java.lang.String r1 = r1.e
            int r0 = r0.b(r1)
            com.tkay.core.common.f.ag r1 = r13.a
            com.tkay.core.common.f.ae r1 = r1.y
            r2 = 0
            if (r1 == 0) goto L30
            com.tkay.core.common.f.ag r1 = r13.a
            com.tkay.core.common.f.ae r1 = r1.y
            java.lang.Boolean r1 = r1.c()
            com.tkay.core.common.f.ag r3 = r13.a
            com.tkay.core.common.f.ae r3 = r3.y
            java.lang.String r3 = r3.a()
            com.tkay.core.common.f.ag r4 = r13.a
            com.tkay.core.common.f.ae r4 = r4.y
            boolean r4 = r4.b()
            goto L34
        L30:
            java.lang.String r3 = ""
            r4 = 1
            r1 = r2
        L34:
            com.tkay.core.common.f.ag r5 = r13.a
            com.tkay.core.common.f.d r5 = r5.t
            com.tkay.core.common.f.ag r6 = r13.a
            com.tkay.core.common.j r6 = r6.c
            int r6 = r6.d
            com.tkay.core.common.f.ag r7 = r13.a
            int r7 = r7.v
            boolean r8 = r13.z
            boolean r9 = r13.A
            com.tkay.core.common.f.ag r10 = r13.a
            android.content.Context r10 = r10.b
            boolean r10 = com.tkay.core.common.l.h.a(r10)
            com.tkay.core.common.f.g r11 = new com.tkay.core.common.f.g
            java.lang.String r12 = r5.Y()
            r11.<init>(r12, r2)
            java.lang.String r2 = "1004684"
            r11.a = r2
            java.lang.String r2 = r5.X()
            r11.b = r2
            java.lang.String r2 = r5.W()
            r11.d = r2
            java.lang.String r2 = java.lang.String.valueOf(r6)
            r11.k = r2
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r11.m = r0
            java.lang.String r0 = r5.Y()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r11.n = r0
            java.lang.String r0 = "1"
            java.lang.String r2 = "2"
            if (r4 == 0) goto L85
            r4 = r0
            goto L86
        L85:
            r4 = r2
        L86:
            r11.o = r4
            java.lang.String r4 = java.lang.String.valueOf(r7)
            r11.p = r4
            boolean r4 = android.text.TextUtils.isEmpty(r15)
            if (r4 != 0) goto L96
            r11.q = r15
        L96:
            boolean r15 = android.text.TextUtils.isEmpty(r14)
            if (r15 != 0) goto L9e
            r11.r = r14
        L9e:
            if (r1 != 0) goto La3
            java.lang.String r14 = "0"
            goto Lac
        La3:
            boolean r14 = r1.booleanValue()
            if (r14 == 0) goto Lab
            r14 = r0
            goto Lac
        Lab:
            r14 = r2
        Lac:
            r11.s = r14
            r11.t = r3
            if (r8 == 0) goto Lb4
            r14 = r0
            goto Lb5
        Lb4:
            r14 = r2
        Lb5:
            r11.u = r14
            if (r9 == 0) goto Lbb
            r14 = r0
            goto Lbc
        Lbb:
            r14 = r2
        Lbc:
            r11.v = r14
            java.lang.String r14 = java.lang.String.valueOf(r6)
            r11.w = r14
            if (r10 == 0) goto Lc7
            goto Lc8
        Lc7:
            r0 = r2
        Lc8:
            r11.x = r0
            com.tkay.core.common.k.c.b(r11)
            return
    }

    private void a(org.json.JSONArray r5) {
            r4 = this;
            com.tkay.core.common.f.ag r0 = r4.a
            java.util.List<com.tkay.core.common.f.aj> r0 = r0.j
            if (r0 == 0) goto L32
            com.tkay.core.common.f.ag r0 = r4.a
            java.util.List<com.tkay.core.common.f.aj> r0 = r0.j
            int r0 = r0.size()
            r1 = 0
        Lf:
            if (r1 >= r0) goto L32
            com.tkay.core.common.f.ag r2 = r4.a
            java.util.List<com.tkay.core.common.f.aj> r2 = r2.j
            java.lang.Object r2 = r2.get(r1)
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            java.lang.String r3 = r4.j
            boolean r3 = com.tkay.core.common.l.t.a(r3, r2)
            if (r3 == 0) goto L2f
            com.tkay.core.common.f.am$a r3 = new com.tkay.core.common.f.am$a
            r3.<init>(r2)
            org.json.JSONObject r2 = r3.a()
            r5.put(r2)
        L2f:
            int r1 = r1 + 1
            goto Lf
        L32:
            return
    }

    private void a(org.json.JSONArray r9, org.json.JSONArray r10) {
            r8 = this;
            java.util.List<com.tkay.core.common.f.aj> r0 = r8.x
            if (r0 == 0) goto L49
            int r1 = r0.size()
            r2 = 0
        L9:
            if (r2 >= r1) goto L49
            java.lang.Object r3 = r0.get(r2)
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L42
            r4.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "ad_source_id"
            java.lang.String r6 = r3.t()     // Catch: java.lang.Throwable -> L42
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "price"
            double r6 = r3.x()     // Catch: java.lang.Throwable -> L42
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.l r5 = r3.M()     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L35
            java.lang.String r6 = "tp_bid_id"
            java.lang.String r5 = r5.g     // Catch: java.lang.Throwable -> L42
            r4.put(r6, r5)     // Catch: java.lang.Throwable -> L42
        L35:
            java.lang.String r5 = "s_pty"
            double r6 = r3.af()     // Catch: java.lang.Throwable -> L42
            r4.put(r5, r6)     // Catch: java.lang.Throwable -> L42
            r10.put(r4)     // Catch: java.lang.Throwable -> L42
            goto L46
        L42:
            r3 = move-exception
            r3.printStackTrace()
        L46:
            int r2 = r2 + 1
            goto L9
        L49:
            java.util.List<com.tkay.core.common.f.aj> r10 = r8.y
            if (r10 == 0) goto L72
            java.util.Iterator r10 = r10.iterator()
        L51:
            boolean r0 = r10.hasNext()
            if (r0 == 0) goto L72
            java.lang.Object r0 = r10.next()
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            java.lang.String r1 = r8.j
            boolean r1 = com.tkay.core.common.l.t.a(r1, r0)
            if (r1 == 0) goto L51
            com.tkay.core.common.f.am$a r1 = new com.tkay.core.common.f.am$a
            r1.<init>(r0)
            org.json.JSONObject r0 = r1.a()
            r9.put(r0)
            goto L51
        L72:
            return
    }

    private java.lang.String f() {
            r4 = this;
            com.tkay.core.common.f.ag r0 = r4.a
            boolean r0 = r0.n
            if (r0 == 0) goto L33
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            com.tkay.core.common.f.l r1 = r4.n
            if (r1 == 0) goto L2e
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "ad_source_id"
            com.tkay.core.common.f.l r3 = r4.n     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r3.k     // Catch: java.lang.Throwable -> L27
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "tp_bid_id"
            com.tkay.core.common.f.l r3 = r4.n     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r3.g     // Catch: java.lang.Throwable -> L27
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r2 = move-exception
            r2.printStackTrace()
        L2b:
            r0.put(r1)
        L2e:
            java.lang.String r0 = r0.toString()
            goto L35
        L33:
            java.lang.String r0 = "[]"
        L35:
            return r0
    }

    @Override
    protected final void a(com.tkay.core.common.f.aj r1, com.tkay.core.common.f.k r2, long r3) {
            r0 = this;
            super.a(r1, r2, r3)
            boolean r2 = r1.Z()
            if (r2 != 0) goto Lf
            java.util.List<com.tkay.core.common.f.aj> r2 = r0.x
            r3 = 0
            com.tkay.core.common.l.g.a(r2, r1, r3)
        Lf:
            return
    }

    @Override
    protected final void a(java.util.List<org.json.JSONObject> r18, com.tkay.core.common.h.k r19) {
            r17 = this;
            r0 = r17
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            r0.a(r1, r2)
            r0.a(r1)
            com.tkay.core.b.a.b r3 = new com.tkay.core.b.a.b
            r3.<init>()
            java.lang.String r4 = r0.w
            r3.a = r4
            java.lang.String r2 = r2.toString()
            r3.b = r2
            java.lang.String r2 = r17.f()
            r3.c = r2
            com.tkay.core.common.f.ag r2 = r0.a
            com.tkay.core.c.d r2 = r2.o
            int r2 = r2.as()
            r3.f = r2
            int r2 = r1.length()
            java.lang.String r4 = ""
            if (r2 <= 0) goto L3e
            java.lang.String r1 = r1.toString()
            goto L3f
        L3e:
            r1 = r4
        L3f:
            com.tkay.core.common.f.ag r2 = r0.a
            com.tkay.core.common.f.am r2 = r2.x
            if (r2 == 0) goto L54
            com.tkay.core.common.f.ag r2 = r0.a
            com.tkay.core.common.f.am r2 = r2.x
            org.json.JSONObject r2 = r2.a()
            java.lang.String r2 = r2.toString()
            r3.d = r2
            goto L55
        L54:
            r2 = r4
        L55:
            r3.e = r1
            com.tkay.core.common.f.ag r5 = r0.a
            com.tkay.core.c.d r5 = r5.o
            java.lang.String r5 = r5.f()
            r3.g = r5
            com.tkay.core.common.f.ag r5 = r0.a
            android.content.Context r5 = r5.b
            com.tkay.core.common.w r5 = com.tkay.core.common.w.a(r5)
            com.tkay.core.common.f.ag r6 = r0.a
            java.lang.String r6 = r6.e
            int r5 = r5.b(r6)
            r6 = 1
            com.tkay.core.common.f.ag r7 = r0.a
            com.tkay.core.common.f.ae r7 = r7.y
            r8 = 0
            if (r7 == 0) goto L92
            com.tkay.core.common.f.ag r4 = r0.a
            com.tkay.core.common.f.ae r4 = r4.y
            java.lang.Boolean r4 = r4.c()
            com.tkay.core.common.f.ag r6 = r0.a
            com.tkay.core.common.f.ae r6 = r6.y
            java.lang.String r6 = r6.a()
            com.tkay.core.common.f.ag r7 = r0.a
            com.tkay.core.common.f.ae r7 = r7.y
            boolean r7 = r7.b()
            goto L95
        L92:
            r7 = r6
            r6 = r4
            r4 = r8
        L95:
            com.tkay.core.common.f.ag r9 = r0.a
            com.tkay.core.common.f.d r9 = r9.t
            com.tkay.core.common.f.ag r10 = r0.a
            com.tkay.core.common.j r10 = r10.c
            int r10 = r10.d
            com.tkay.core.common.f.ag r11 = r0.a
            int r11 = r11.v
            boolean r12 = r0.z
            boolean r13 = r0.A
            com.tkay.core.common.f.ag r14 = r0.a
            android.content.Context r14 = r14.b
            boolean r14 = com.tkay.core.common.l.h.a(r14)
            com.tkay.core.common.f.g r15 = new com.tkay.core.common.f.g
            r16 = r3
            java.lang.String r3 = r9.Y()
            r15.<init>(r3, r8)
            java.lang.String r3 = "1004684"
            r15.a = r3
            java.lang.String r3 = r9.X()
            r15.b = r3
            java.lang.String r3 = r9.W()
            r15.d = r3
            java.lang.String r3 = java.lang.String.valueOf(r10)
            r15.k = r3
            java.lang.String r3 = java.lang.String.valueOf(r5)
            r15.m = r3
            java.lang.String r3 = r9.Y()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r15.n = r3
            java.lang.String r3 = "1"
            java.lang.String r5 = "2"
            if (r7 == 0) goto Le8
            r7 = r3
            goto Le9
        Le8:
            r7 = r5
        Le9:
            r15.o = r7
            java.lang.String r7 = java.lang.String.valueOf(r11)
            r15.p = r7
            boolean r7 = android.text.TextUtils.isEmpty(r1)
            if (r7 != 0) goto Lf9
            r15.q = r1
        Lf9:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L101
            r15.r = r2
        L101:
            if (r4 != 0) goto L106
            java.lang.String r1 = "0"
            goto L10f
        L106:
            boolean r1 = r4.booleanValue()
            if (r1 == 0) goto L10e
            r1 = r3
            goto L10f
        L10e:
            r1 = r5
        L10f:
            r15.s = r1
            r15.t = r6
            if (r12 == 0) goto L117
            r1 = r3
            goto L118
        L117:
            r1 = r5
        L118:
            r15.u = r1
            if (r13 == 0) goto L11e
            r1 = r3
            goto L11f
        L11e:
            r1 = r5
        L11f:
            r15.v = r1
            java.lang.String r1 = java.lang.String.valueOf(r10)
            r15.w = r1
            if (r14 == 0) goto L12a
            goto L12b
        L12a:
            r3 = r5
        L12b:
            r15.x = r3
            com.tkay.core.common.k.c.b(r15)
            com.tkay.core.b.a.a r1 = new com.tkay.core.b.a.a
            java.lang.String r5 = r0.k
            java.lang.String r6 = r0.j
            java.lang.String r7 = r0.i
            r9 = 0
            r4 = r1
            r8 = r18
            r4.<init>(r5, r6, r7, r8, r9)
            r2 = r16
            r1.a(r2)
            r2 = 0
            r3 = r19
            r1.a(r2, r3)
            return
    }

    @Override
    protected final synchronized void a(java.util.List<org.json.JSONObject> r4, java.util.Map<java.lang.String, com.tkay.core.common.f.aj> r5) {
            r3 = this;
            monitor-enter(r3)
            super.a(r4, r5)     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.f.ag r4 = r3.a     // Catch: java.lang.Throwable -> L4c
            android.content.Context r4 = r4.b     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.w r4 = com.tkay.core.common.w.a(r4)     // Catch: java.lang.Throwable -> L4c
            com.tkay.core.common.f.ag r0 = r3.a     // Catch: java.lang.Throwable -> L4c
            java.lang.String r0 = r0.e     // Catch: java.lang.Throwable -> L4c
            r4.a(r0)     // Catch: java.lang.Throwable -> L4c
            r4 = 0
            r3.z = r4     // Catch: java.lang.Throwable -> L4c
            r3.A = r4     // Catch: java.lang.Throwable -> L4c
            java.util.Set r4 = r5.entrySet()     // Catch: java.lang.Throwable -> L4a
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L4a
        L20:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L4a
            if (r5 == 0) goto L48
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L4a
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> L20
            com.tkay.core.common.f.aj r5 = (com.tkay.core.common.f.aj) r5     // Catch: java.lang.Throwable -> L20
            int r0 = r5.c()     // Catch: java.lang.Throwable -> L20
            r1 = 66
            r2 = 1
            if (r0 != r1) goto L3e
            r3.z = r2     // Catch: java.lang.Throwable -> L20
            goto L20
        L3e:
            int r5 = r5.c()     // Catch: java.lang.Throwable -> L20
            r0 = 6
            if (r5 != r0) goto L20
            r3.A = r2     // Catch: java.lang.Throwable -> L20
            goto L20
        L48:
            monitor-exit(r3)
            return
        L4a:
            monitor-exit(r3)
            return
        L4c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    protected final java.lang.String e() {
            r1 = this;
            com.tkay.core.common.f.ag r0 = r1.a
            java.lang.String r0 = r0.m
            return r0
    }
}
