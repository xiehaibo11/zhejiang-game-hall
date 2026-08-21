package com.mbridge.msdk.mbnative.a;

public abstract class b<K, V> {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final long a() {
            r4 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L1a
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1a:
            long r0 = r0.ag()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public V a(K r1, int r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    public final java.util.List<com.mbridge.msdk.out.Campaign> a(java.lang.String r7, java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r8, int r9) {
            r6 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            if (r0 != 0) goto L76
            if (r8 == 0) goto L76
            boolean r0 = r8.containsKey(r7)
            if (r0 == 0) goto L76
            java.lang.Object r7 = r8.get(r7)
            java.util.Map r7 = (java.util.Map) r7
            if (r7 == 0) goto L76
            int r8 = r7.size()
            if (r8 <= 0) goto L76
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L25:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L76
            java.lang.Object r8 = r7.next()
            java.util.Map$Entry r8 = (java.util.Map.Entry) r8
            java.lang.Object r0 = r8.getKey()
            java.lang.Long r0 = (java.lang.Long) r0
            long r2 = r0.longValue()
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            long r2 = r6.a()
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L4c
            r7.remove()
            return r1
        L4c:
            java.lang.Object r8 = r8.getValue()
            java.util.List r8 = (java.util.List) r8
            if (r8 == 0) goto L25
            int r0 = r8.size()
            if (r0 <= 0) goto L25
            if (r9 != 0) goto L68
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r9.addAll(r8)
            r7.remove()
            return r9
        L68:
            int r7 = r8.size()
            int r7 = java.lang.Math.min(r7, r9)
            r9 = 0
            java.util.List r7 = r8.subList(r9, r7)
            return r7
        L76:
            return r1
    }

    public abstract void a(K r1, V r2);

    public abstract void a(K r1, V r2, java.lang.String r3);

    public abstract void a(java.lang.String r1);

    public abstract void a(java.lang.String r1, com.mbridge.msdk.out.Campaign r2, java.lang.String r3);

    public final void a(java.lang.String r4, java.util.List<com.mbridge.msdk.out.Campaign> r5, java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r6) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L21
            if (r5 == 0) goto L21
            int r0 = r5.size()
            if (r0 <= 0) goto L21
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r1, r5)
            r6.put(r4, r0)
        L21:
            return
    }

    public final void a(java.lang.String r3, java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r4) {
            r2 = this;
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r3)     // Catch: java.lang.Exception -> L34
            if (r0 != 0) goto L33
            if (r4 == 0) goto L33
            boolean r0 = r4.containsKey(r3)     // Catch: java.lang.Exception -> L34
            if (r0 != 0) goto Lf
            goto L33
        Lf:
            java.util.Set r4 = r4.keySet()     // Catch: java.lang.Exception -> L34
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L34
        L17:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto L38
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Exception -> L34
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L34
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Exception -> L34
            if (r1 == 0) goto L17
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Exception -> L34
            if (r0 == 0) goto L17
            r4.remove()     // Catch: java.lang.Exception -> L34
            goto L17
        L33:
            return
        L34:
            r3 = move-exception
            r3.printStackTrace()
        L38:
            return
    }

    public abstract V b(K r1, int r2);
}
