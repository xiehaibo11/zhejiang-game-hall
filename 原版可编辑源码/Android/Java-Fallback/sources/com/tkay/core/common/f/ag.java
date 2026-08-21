package com.tkay.core.common.f;

public class ag {
    public static final java.lang.String a = null;
    public android.content.Context b;
    public com.tkay.core.common.j c;
    public java.lang.String d;
    public java.lang.String e;
    public int f;
    public long g;
    public long h;
    public long i;
    public java.util.List<com.tkay.core.common.f.aj> j;
    public java.util.List<com.tkay.core.common.f.aj> k;
    public java.util.List<com.tkay.core.common.f.aj> l;
    public java.lang.String m;
    public boolean n;
    public com.tkay.core.c.d o;
    public java.lang.String p;
    public java.lang.String q;
    public java.util.Map<java.lang.String, java.lang.Object> r;
    public org.json.JSONObject s;
    public com.tkay.core.common.f.d t;
    public com.tkay.core.common.f.aj u;
    public int v;
    public double w;
    public com.tkay.core.common.f.am x;
    public com.tkay.core.common.f.ae y;
    public int z;

    static {
            java.lang.Class<com.tkay.core.common.f.ag> r0 = com.tkay.core.common.f.ag.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.f.ag.a = r0
            return
    }

    public ag() {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.v = r0
            r0 = 0
            r1.z = r0
            return
    }

    private com.tkay.core.common.f.ag d(java.util.List<com.tkay.core.common.f.aj> r6) {
            r5 = this;
            com.tkay.core.common.f.ag r0 = new com.tkay.core.common.f.ag
            r0.<init>()
            android.content.Context r1 = r5.b
            r0.b = r1
            java.lang.String r1 = r5.d
            r0.d = r1
            java.lang.String r1 = r5.e
            r0.e = r1
            int r1 = r5.f
            r0.f = r1
            long r1 = r5.h
            r0.h = r1
            java.util.List<com.tkay.core.common.f.aj> r1 = r5.k
            r0.k = r1
            com.tkay.core.c.d r1 = r5.o
            r0.o = r1
            long r1 = r5.g
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 >= 0) goto L2e
            r1 = 10000(0x2710, double:4.9407E-320)
            r0.g = r1
            goto L30
        L2e:
            r0.g = r1
        L30:
            boolean r1 = r5.n
            r0.n = r1
            java.lang.String r1 = r5.p
            r0.p = r1
            java.lang.String r1 = r5.q
            r0.q = r1
            r0.j = r6
            java.util.Map<java.lang.String, java.lang.Object> r6 = r5.r
            r0.r = r6
            long r1 = r5.i
            r0.i = r1
            com.tkay.core.common.j r6 = r5.c
            r0.c = r6
            com.tkay.core.common.f.d r6 = r5.t
            r0.t = r6
            int r6 = r5.v
            r0.v = r6
            com.tkay.core.common.f.aj r6 = r5.u
            r0.u = r6
            double r1 = r5.w
            r0.w = r1
            int r6 = r5.z
            r0.z = r6
            return r0
    }

    public final com.tkay.core.common.f.ag a(java.util.List<com.tkay.core.common.f.aj> r1) {
            r0 = this;
            com.tkay.core.common.f.ag r1 = r0.d(r1)
            return r1
    }

    public final com.tkay.core.common.f.ag a(java.util.List<com.tkay.core.common.f.aj> r11, java.util.List<com.tkay.core.common.f.aj> r12) {
            r10 = this;
            java.lang.String r0 = "size"
            com.tkay.core.common.f.ag r11 = r10.d(r11)
            java.lang.String r1 = r10.m
            r11.m = r1
            int r1 = r12.size()
            if (r1 <= 0) goto L13a
            java.util.List r12 = com.tkay.core.common.l.g.a(r12)
            r11.l = r12
            r1 = 0
            java.lang.Object r2 = r12.get(r1)
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.Iterator r12 = r12.iterator()
        L2b:
            boolean r5 = r12.hasNext()
            if (r5 == 0) goto L55
            java.lang.Object r5 = r12.next()
            com.tkay.core.common.f.aj r5 = (com.tkay.core.common.f.aj) r5
            int r6 = r5.l()
            r7 = 7
            if (r6 != r7) goto L2b
            java.lang.String r6 = r5.t()
            int r6 = java.lang.Integer.parseInt(r6)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r3.add(r6)
            java.lang.String r5 = r5.t()
            r4.add(r5)
            goto L2b
        L55:
            org.json.JSONObject r12 = new org.json.JSONObject
            r12.<init>()
            int r5 = r11.f
            java.lang.String r5 = java.lang.String.valueOf(r5)
            com.tkay.core.c.d r6 = r10.o
            com.tkay.core.api.TYBidRequestInfo.fillBaseCommonParams(r12, r5, r6, r2)
            int r5 = r11.f     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L134
            r6 = -1
            int r7 = r5.hashCode()     // Catch: java.lang.Throwable -> L134
            r8 = 50
            r9 = 1
            if (r7 == r8) goto L84
            r1 = 52
            if (r7 == r1) goto L7a
            goto L8d
        L7a:
            java.lang.String r1 = "4"
            boolean r1 = r5.equals(r1)     // Catch: java.lang.Throwable -> L134
            if (r1 == 0) goto L8d
            r1 = r9
            goto L8e
        L84:
            java.lang.String r7 = "2"
            boolean r5 = r5.equals(r7)     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L8d
            goto L8e
        L8d:
            r1 = r6
        L8e:
            r5 = 2
            java.lang.String r6 = "get_offer"
            if (r1 == 0) goto L9a
            if (r1 == r9) goto L96
            goto Lb5
        L96:
            r12.put(r6, r5)     // Catch: java.lang.Throwable -> L134
            goto Lb5
        L9a:
            com.tkay.core.c.d r1 = r11.o     // Catch: java.lang.Throwable -> L134
            java.lang.String r7 = r11.e     // Catch: java.lang.Throwable -> L134
            java.lang.String r8 = r11.d     // Catch: java.lang.Throwable -> L134
            java.util.Map r1 = r1.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L134
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L134
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L134
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L134
            if (r2 != 0) goto Lb5
            r12.put(r0, r1)     // Catch: java.lang.Throwable -> L134
        Lb5:
            int r0 = r11.z     // Catch: java.lang.Throwable -> L134
            java.util.List<com.tkay.core.common.f.aj> r1 = r11.l     // Catch: java.lang.Throwable -> L134
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L134
            if (r0 != r1) goto Lc2
            r12.put(r6, r5)     // Catch: java.lang.Throwable -> L134
        Lc2:
            android.content.Context r0 = r11.b     // Catch: java.lang.Throwable -> L134
            com.tkay.core.common.d.c r0 = com.tkay.core.common.d.c.a(r0)     // Catch: java.lang.Throwable -> L134
            java.util.List r0 = r0.a(r4)     // Catch: java.lang.Throwable -> L134
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L134
            if (r1 <= 0) goto L125
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L134
            r1.<init>()     // Catch: java.lang.Throwable -> L134
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L134
            r2.<init>()     // Catch: java.lang.Throwable -> L134
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L134
        Le0:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L134
            if (r4 == 0) goto L10f
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L134
            com.tkay.core.common.f.w r4 = (com.tkay.core.common.f.w) r4     // Catch: java.lang.Throwable -> L134
            int r5 = r4.d()     // Catch: java.lang.Throwable -> L134
            if (r5 <= 0) goto Lfd
            java.lang.String r5 = r4.a()     // Catch: java.lang.Throwable -> L134
            int r6 = r4.d()     // Catch: java.lang.Throwable -> L134
            r1.put(r5, r6)     // Catch: java.lang.Throwable -> L134
        Lfd:
            int r5 = r4.c()     // Catch: java.lang.Throwable -> L134
            if (r5 <= 0) goto Le0
            java.lang.String r5 = r4.a()     // Catch: java.lang.Throwable -> L134
            int r4 = r4.c()     // Catch: java.lang.Throwable -> L134
            r2.put(r5, r4)     // Catch: java.lang.Throwable -> L134
            goto Le0
        L10f:
            int r0 = r1.length()     // Catch: java.lang.Throwable -> L134
            if (r0 <= 0) goto L11a
            java.lang.String r0 = "o_cl"
            r12.put(r0, r1)     // Catch: java.lang.Throwable -> L134
        L11a:
            int r0 = r2.length()     // Catch: java.lang.Throwable -> L134
            if (r0 <= 0) goto L125
            java.lang.String r0 = "o_im"
            r12.put(r0, r2)     // Catch: java.lang.Throwable -> L134
        L125:
            java.lang.String r0 = "unit_ids"
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L134
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L134
            r12.put(r0, r1)     // Catch: java.lang.Throwable -> L134
            goto L138
        L134:
            r0 = move-exception
            r0.printStackTrace()
        L138:
            r11.s = r12
        L13a:
            com.tkay.core.common.f.am r12 = r10.x
            r11.x = r12
            com.tkay.core.common.f.ae r12 = r10.y
            r11.y = r12
            return r11
    }

    public final com.tkay.core.common.f.ag b(java.util.List<com.tkay.core.common.f.aj> r3) {
            r2 = this;
            com.tkay.core.common.f.ag r3 = r2.d(r3)
            java.lang.String r0 = r2.p
            r3.p = r0
            long r0 = r2.h
            r3.h = r0
            return r3
    }

    public final com.tkay.core.common.f.ag c(java.util.List<com.tkay.core.common.f.aj> r2) {
            r1 = this;
            com.tkay.core.common.f.ag r2 = r1.d(r2)
            java.lang.String r0 = r1.q
            r2.q = r0
            return r2
    }
}
