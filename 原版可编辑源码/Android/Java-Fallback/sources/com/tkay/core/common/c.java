package com.tkay.core.common;

public class c {
    public static java.lang.String a;
    private static volatile com.tkay.core.common.c f;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> b;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> c;
    java.util.Map<java.lang.String, com.tkay.core.common.c.a> d;
    java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.Long>> e;

    public static class a {
        java.lang.String a;
        long b;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.common.c> r0 = com.tkay.core.common.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.c.a = r0
            return
    }

    private c() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 5
            r0.<init>(r1)
            r2.d = r0
            return
    }

    public static com.tkay.core.common.c a() {
            com.tkay.core.common.c r0 = com.tkay.core.common.c.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.c> r0 = com.tkay.core.common.c.class
            monitor-enter(r0)
            com.tkay.core.common.c r1 = com.tkay.core.common.c.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.c r1 = new com.tkay.core.common.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.c.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.c r0 = com.tkay.core.common.c.f
            return r0
    }

    private void b(java.lang.String r2, long r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r1.c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r10) {
            r9 = this;
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 3
            r0.<init>(r1)
            r9.e = r0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L48
            r0.<init>(r10)     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r10 = r0.keys()     // Catch: java.lang.Throwable -> L48
        L11:
            boolean r2 = r10.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L48
            java.lang.Object r2 = r10.next()     // Catch: java.lang.Throwable -> L11
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L11
            org.json.JSONObject r3 = r0.optJSONObject(r2)     // Catch: java.lang.Throwable -> L11
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L11
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L11
            java.util.Iterator r5 = r3.keys()     // Catch: java.lang.Throwable -> L11
        L2a:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L11
            if (r6 == 0) goto L42
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L2a
            long r7 = r3.getLong(r6)     // Catch: java.lang.Throwable -> L2a
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L2a
            r4.put(r6, r7)     // Catch: java.lang.Throwable -> L2a
            goto L2a
        L42:
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.Long>> r3 = r9.e     // Catch: java.lang.Throwable -> L11
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L11
            goto L11
        L48:
            return
    }

    public final void a(java.lang.String r2, long r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r1.b
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r3, long r4, com.tkay.core.api.AdError r6) {
            r2 = this;
            java.lang.String r0 = r6.getCode()
            java.lang.String r1 = "4001"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.Map<java.lang.String, com.tkay.core.common.c$a> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            com.tkay.core.common.c$a r0 = (com.tkay.core.common.c.a) r0
            if (r0 != 0) goto L1c
            com.tkay.core.common.c$a r0 = new com.tkay.core.common.c$a
            r0.<init>()
        L1c:
            java.lang.String r6 = r6.getPlatformCode()
            r0.a = r6
            r0.b = r4
            java.util.Map<java.lang.String, com.tkay.core.common.c$a> r4 = r2.d
            r4.put(r3, r0)
            return
    }

    public final boolean a(int r6, com.tkay.core.c.d r7, com.tkay.core.common.f.aj r8) {
            r5 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.Long>> r0 = r5.e
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.List r7 = r7.c()
            int r0 = r7.size()
            if (r0 != 0) goto L11
            return r1
        L11:
            java.lang.String r0 = r8.t()
            java.util.Map<java.lang.String, com.tkay.core.common.c$a> r2 = r5.d
            java.lang.Object r0 = r2.get(r0)
            com.tkay.core.common.c$a r0 = (com.tkay.core.common.c.a) r0
            if (r0 != 0) goto L20
            return r1
        L20:
            r2 = 1
            switch(r6) {
                case 1: goto L28;
                case 2: goto L24;
                case 3: goto L28;
                case 4: goto L28;
                case 5: goto L28;
                case 6: goto L28;
                case 7: goto L28;
                case 8: goto L26;
                default: goto L24;
            }
        L24:
            r6 = r2
            goto L29
        L26:
            r6 = 2
            goto L29
        L28:
            r6 = 3
        L29:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
            boolean r7 = r7.contains(r3)
            if (r7 != 0) goto L43
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r8 = "The current load mode is: "
            r7.<init>(r8)
            r7.append(r6)
            java.lang.String r6 = ", no need to filter"
            r7.append(r6)
            return r1
        L43:
            int r6 = r8.c()
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.lang.Long>> r7 = r5.e
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.Object r6 = r7.get(r6)
            java.util.Map r6 = (java.util.Map) r6
            if (r6 != 0) goto L56
            return r1
        L56:
            java.lang.String r7 = r0.a
            java.lang.Object r6 = r6.get(r7)
            java.lang.Long r6 = (java.lang.Long) r6
            if (r6 != 0) goto L61
            return r1
        L61:
            long r7 = r0.b
            long r3 = r6.longValue()
            long r7 = r7 + r3
            long r3 = java.lang.System.currentTimeMillis()
            int r6 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r6 >= 0) goto L71
            return r1
        L71:
            return r2
    }

    public final boolean a(com.tkay.core.common.f.aj r7) {
            r6 = this;
            long r0 = r7.G()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r6.b
            java.lang.String r4 = r7.t()
            java.lang.Object r0 = r0.get(r4)
            if (r0 == 0) goto L28
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r6.b
            java.lang.String r2 = r7.t()
            java.lang.Object r0 = r0.get(r2)
            java.lang.Long r0 = (java.lang.Long) r0
            long r2 = r0.longValue()
        L28:
            long r4 = r7.G()
            long r2 = r2 + r4
            long r4 = java.lang.System.currentTimeMillis()
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 >= 0) goto L36
            return r1
        L36:
            r7 = 1
            return r7
    }

    public final boolean b(com.tkay.core.common.f.aj r7) {
            r6 = this;
            int r0 = r7.l()
            r1 = 0
            r2 = 7
            if (r0 != r2) goto L9
            return r1
        L9:
            long r2 = r7.H()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L14
            return r1
        L14:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r6.c
            java.lang.String r2 = r7.t()
            java.lang.Object r0 = r0.get(r2)
            if (r0 == 0) goto L30
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r0 = r6.c
            java.lang.String r2 = r7.t()
            java.lang.Object r0 = r0.get(r2)
            java.lang.Long r0 = (java.lang.Long) r0
            long r4 = r0.longValue()
        L30:
            long r2 = r7.H()
            long r4 = r4 + r2
            long r2 = java.lang.System.currentTimeMillis()
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 >= 0) goto L3e
            return r1
        L3e:
            r7 = 1
            return r7
    }
}
