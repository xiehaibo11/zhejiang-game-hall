package com.huawei.hms.framework.network.grs.a;

public class a {
    private static final java.lang.String a = "a";
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>>> b;
    private java.util.Map<java.lang.String, java.lang.Long> c;
    private com.huawei.hms.framework.network.grs.a.c d;
    private com.huawei.hms.framework.network.grs.a.c e;
    private com.huawei.hms.framework.network.grs.c.m f;

    public a(com.huawei.hms.framework.network.grs.a.c r3, com.huawei.hms.framework.network.grs.a.c r4, com.huawei.hms.framework.network.grs.c.m r5) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r1)
            r2.c = r0
            r2.e = r4
            r2.d = r3
            r2.f = r5
            r5.a(r2)
            return
    }

    private void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r5, com.huawei.hms.framework.network.grs.a.b r6, android.content.Context r7, java.lang.String r8) {
            r4 = this;
            r0 = 1
            r1 = 0
            java.lang.String r1 = r5.getGrsParasKey(r1, r0, r7)
            java.util.Map<java.lang.String, java.lang.Long> r2 = r4.c
            java.lang.Object r1 = r2.get(r1)
            java.lang.Long r1 = (java.lang.Long) r1
            boolean r2 = com.huawei.hms.framework.network.grs.d.e.a(r1)
            if (r2 == 0) goto L19
            r5 = 2
            r6.a(r5)
            return
        L19:
            r2 = 300000(0x493e0, double:1.482197E-318)
            boolean r1 = com.huawei.hms.framework.network.grs.d.e.a(r1, r2)
            if (r1 == 0) goto L2f
            com.huawei.hms.framework.network.grs.c.b.c r1 = new com.huawei.hms.framework.network.grs.c.b.c
            r1.<init>(r5, r7)
            com.huawei.hms.framework.network.grs.c.m r5 = r4.f
            com.huawei.hms.framework.network.grs.a.c r7 = r4.e
            r2 = 0
            r5.a(r1, r2, r8, r7)
        L2f:
            r6.a(r0)
            return
    }

    private void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r3, java.lang.String r4, android.content.Context r5) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Long> r0 = r2.c
            java.lang.Object r4 = r0.get(r4)
            java.lang.Long r4 = (java.lang.Long) r4
            r0 = 300000(0x493e0, double:1.482197E-318)
            boolean r4 = com.huawei.hms.framework.network.grs.d.e.a(r4, r0)
            if (r4 == 0) goto L1e
            com.huawei.hms.framework.network.grs.c.b.c r4 = new com.huawei.hms.framework.network.grs.c.b.c
            r4.<init>(r3, r5)
            com.huawei.hms.framework.network.grs.c.m r3 = r2.f
            com.huawei.hms.framework.network.grs.a.c r5 = r2.e
            r0 = 0
            r3.a(r4, r0, r0, r5)
        L1e:
            return
    }

    public com.huawei.hms.framework.network.grs.a.c a() {
            r1 = this;
            com.huawei.hms.framework.network.grs.a.c r0 = r1.d
            return r0
    }

    public java.lang.String a(com.huawei.hms.framework.network.grs.GrsBaseInfo r1, java.lang.String r2, java.lang.String r3, com.huawei.hms.framework.network.grs.a.b r4, android.content.Context r5) {
            r0 = this;
            java.util.Map r1 = r0.a(r1, r2, r4, r5)
            if (r1 != 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.Object r1 = r1.get(r3)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    public java.util.Map<java.lang.String, java.lang.String> a(com.huawei.hms.framework.network.grs.GrsBaseInfo r3, java.lang.String r4, com.huawei.hms.framework.network.grs.a.b r5, android.content.Context r6) {
            r2 = this;
            r0 = 0
            r1 = 1
            java.lang.String r0 = r3.getGrsParasKey(r0, r1, r6)
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>>> r1 = r2.b
            java.lang.Object r0 = r1.get(r0)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 == 0) goto L21
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L17
            goto L21
        L17:
            r2.a(r3, r5, r6, r4)
            java.lang.Object r3 = r0.get(r4)
            java.util.Map r3 = (java.util.Map) r3
            return r3
        L21:
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            return r3
    }

    public void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r4, android.content.Context r5) {
            r3 = this;
            r0 = 0
            r1 = 1
            java.lang.String r4 = r4.getGrsParasKey(r0, r1, r5)
            com.huawei.hms.framework.network.grs.a.c r5 = r3.d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r1 = "time"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "0"
            r5.b(r0, r2)
            java.util.Map<java.lang.String, java.lang.Long> r5 = r3.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.remove(r0)
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>>> r5 = r3.b
            r5.remove(r4)
            com.huawei.hms.framework.network.grs.c.m r5 = r3.f
            r5.a(r4)
            return
    }

    public void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r3, com.huawei.hms.framework.network.grs.c.f r4, android.content.Context r5, com.huawei.hms.framework.network.grs.c.b.c r6) {
            r2 = this;
            int r0 = r4.e()
            r1 = 2
            if (r0 != r1) goto Lf
            java.lang.String r3 = com.huawei.hms.framework.network.grs.a.a.a
            java.lang.String r4 = "update cache from server failed"
            com.huawei.hms.framework.common.Logger.w(r3, r4)
            return
        Lf:
            java.util.Set r6 = r6.d()
            int r6 = r6.size()
            if (r6 != 0) goto L61
            r6 = 0
            r0 = 1
            java.lang.String r3 = r3.getGrsParasKey(r6, r0, r5)
            com.huawei.hms.framework.network.grs.a.c r5 = r2.d
            java.lang.String r6 = r4.i()
            r5.b(r3, r6)
            com.huawei.hms.framework.network.grs.a.c r5 = r2.d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            java.lang.String r0 = "time"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = r4.a()
            r5.b(r6, r0)
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>>> r5 = r2.b
            java.lang.String r6 = r4.i()
            java.util.Map r6 = com.huawei.hms.framework.network.grs.a.a(r6)
            r5.put(r3, r6)
            java.util.Map<java.lang.String, java.lang.Long> r5 = r2.c
            java.lang.String r4 = r4.a()
            long r0 = java.lang.Long.parseLong(r4)
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            r5.put(r3, r4)
            goto L77
        L61:
            com.huawei.hms.framework.network.grs.a.c r3 = r2.d
            java.lang.String r5 = r4.i()
            java.lang.String r6 = "geoipCountryCode"
            r3.b(r6, r5)
            com.huawei.hms.framework.network.grs.a.c r3 = r2.d
            java.lang.String r4 = r4.a()
            java.lang.String r5 = "geoipCountryCodetime"
            r3.b(r5, r4)
        L77:
            return
    }

    public com.huawei.hms.framework.network.grs.c.m b() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.m r0 = r1.f
            return r0
    }

    public void b(com.huawei.hms.framework.network.grs.GrsBaseInfo r8, android.content.Context r9) {
            r7 = this;
            r0 = 0
            r1 = 1
            java.lang.String r0 = r8.getGrsParasKey(r0, r1, r9)
            com.huawei.hms.framework.network.grs.a.c r1 = r7.d
            java.lang.String r2 = ""
            java.lang.String r1 = r1.a(r0, r2)
            com.huawei.hms.framework.network.grs.a.c r2 = r7.d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r4 = "time"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "0"
            java.lang.String r2 = r2.a(r3, r4)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            if (r3 != 0) goto L44
            java.lang.String r3 = "\\d+"
            boolean r3 = r2.matches(r3)
            if (r3 == 0) goto L44
            long r4 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L3c
            goto L44
        L3c:
            r2 = move-exception
            java.lang.String r3 = com.huawei.hms.framework.network.grs.a.a.a
            java.lang.String r6 = "convert urlParamKey from String to Long catch NumberFormatException."
            com.huawei.hms.framework.common.Logger.w(r3, r6, r2)
        L44:
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.String>>> r2 = r7.b
            java.util.Map r1 = com.huawei.hms.framework.network.grs.a.a(r1)
            r2.put(r0, r1)
            java.util.Map<java.lang.String, java.lang.Long> r1 = r7.c
            java.lang.Long r2 = java.lang.Long.valueOf(r4)
            r1.put(r0, r2)
            r7.a(r8, r0, r9)
            return
    }

    public com.huawei.hms.framework.network.grs.a.c c() {
            r1 = this;
            com.huawei.hms.framework.network.grs.a.c r0 = r1.e
            return r0
    }
}
