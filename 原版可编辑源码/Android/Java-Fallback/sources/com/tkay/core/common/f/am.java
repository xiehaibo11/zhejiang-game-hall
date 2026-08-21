package com.tkay.core.common.f;

public final class am {
    static final java.lang.String e = "reqId";
    static final java.lang.String f = "reqDatetime";
    static final java.lang.String g = "fillOffers";
    static final java.lang.String h = "bidResps";
    static final java.lang.String i = "adSourceId";
    static final java.lang.String j = "price";
    static final java.lang.String k = "networkFirmId";
    static final java.lang.String l = "demandType";
    static final java.lang.String m = "tp_bid_id";
    java.lang.String a;
    long b;
    java.util.List<com.tkay.core.common.f.am.a> c;
    java.util.List<com.tkay.core.common.f.am.a> d;


    public static class a {
        public int a;
        public java.lang.String b;
        public int c;
        public double d;
        public java.lang.String e;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public a(com.tkay.core.common.f.aj r7) {
                r6 = this;
                r6.<init>()
                java.lang.String r0 = r7.t()
                r6.b = r0
                com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
                com.tkay.core.common.f.l r0 = r0.a(r7)
                if (r0 == 0) goto L29
                boolean r1 = r7.Z()
                if (r1 == 0) goto L1e
                double r1 = r0.o
                r6.d = r1
                goto L2f
            L1e:
                boolean r1 = r7.j()
                if (r1 == 0) goto L2f
                double r1 = r0.price
                r6.d = r1
                goto L2f
            L29:
                double r1 = r7.x()
                r6.d = r1
            L2f:
                int r1 = r7.c()
                r6.c = r1
                int r1 = r7.l()
                r2 = 1
                r3 = 2
                if (r1 == 0) goto L58
                if (r1 == r2) goto L55
                r4 = 3
                if (r1 == r3) goto L52
                r5 = 4
                if (r1 == r4) goto L4f
                if (r1 == r5) goto L55
                r4 = 7
                if (r1 == r4) goto L55
                r4 = 8
                if (r1 == r4) goto L58
                goto L5a
            L4f:
                r6.a = r5
                goto L5a
            L52:
                r6.a = r4
                goto L5a
            L55:
                r6.a = r3
                goto L5a
            L58:
                r6.a = r2
            L5a:
                r1 = 35
                int r7 = r7.c()
                if (r1 != r7) goto L64
                r6.a = r3
            L64:
                if (r0 == 0) goto L69
                java.lang.String r7 = r0.g
                goto L6b
            L69:
                java.lang.String r7 = ""
            L6b:
                r6.e = r7
                return
        }

        public final synchronized org.json.JSONObject a() {
                r4 = this;
                monitor-enter(r4)
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L30
                r0.<init>()     // Catch: java.lang.Throwable -> L30
                java.lang.String r1 = "adSourceId"
                java.lang.String r2 = r4.b     // Catch: java.lang.Throwable -> L2a
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
                java.lang.String r1 = "price"
                double r2 = r4.d     // Catch: java.lang.Throwable -> L2a
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
                java.lang.String r1 = "networkFirmId"
                int r2 = r4.c     // Catch: java.lang.Throwable -> L2a
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
                java.lang.String r1 = "demandType"
                int r2 = r4.a     // Catch: java.lang.Throwable -> L2a
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
                java.lang.String r1 = "tp_bid_id"
                java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> L2a
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L2a
                goto L2e
            L2a:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L30
            L2e:
                monitor-exit(r4)
                return r0
            L30:
                r0 = move-exception
                monitor-exit(r4)
                throw r0
        }
    }

    public am() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 3
            r0.<init>(r1)
            r2.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            r2.d = r0
            return
    }

    public static com.tkay.core.common.f.am a(java.lang.String r4) {
            com.tkay.core.common.f.am r0 = new com.tkay.core.common.f.am
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L37
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = "reqId"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L37
            r0.b(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = "reqDatetime"
            long r2 = r1.getLong(r4)     // Catch: java.lang.Throwable -> L37
            r0.a(r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = "fillOffers"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L37
            java.util.List r4 = r0.c(r4)     // Catch: java.lang.Throwable -> L37
            r0.a(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r4 = "bidResps"
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L37
            java.util.List r4 = r0.c(r4)     // Catch: java.lang.Throwable -> L37
            r0.b(r4)     // Catch: java.lang.Throwable -> L37
            goto L3b
        L37:
            r4 = move-exception
            r4.printStackTrace()
        L3b:
            return r0
    }

    private synchronized void a(java.util.List<com.tkay.core.common.f.am.a> r1) {
            r0 = this;
            monitor-enter(r0)
            r0.c = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized void a(java.util.List<com.tkay.core.common.f.am.a> r8, com.tkay.core.common.f.am.a r9) {
            r7 = this;
            monitor-enter(r7)
            if (r9 == 0) goto L37
            int r0 = r8.size()     // Catch: java.lang.Throwable -> L34
            if (r0 != 0) goto Le
            r8.add(r9)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r7)
            return
        Le:
            r0 = 0
        Lf:
            int r1 = r8.size()     // Catch: java.lang.Throwable -> L34
            r2 = -1
            if (r0 >= r1) goto L28
            double r3 = r9.d     // Catch: java.lang.Throwable -> L34
            java.lang.Object r1 = r8.get(r0)     // Catch: java.lang.Throwable -> L34
            com.tkay.core.common.f.am$a r1 = (com.tkay.core.common.f.am.a) r1     // Catch: java.lang.Throwable -> L34
            double r5 = r1.d     // Catch: java.lang.Throwable -> L34
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 <= 0) goto L25
            goto L29
        L25:
            int r0 = r0 + 1
            goto Lf
        L28:
            r0 = r2
        L29:
            if (r0 == r2) goto L30
            r8.add(r0, r9)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r7)
            return
        L30:
            r8.add(r9)     // Catch: java.lang.Throwable -> L34
            goto L37
        L34:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
        L37:
            monitor-exit(r7)
            return
    }

    private synchronized void b(java.util.List<com.tkay.core.common.f.am.a> r1) {
            r0 = this;
            monitor-enter(r0)
            r0.d = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized long c() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.b     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private synchronized java.util.List<com.tkay.core.common.f.am.a> c(java.lang.String r9) {
            r8 = this;
            monitor-enter(r8)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6b
            r0.<init>()     // Catch: java.lang.Throwable -> L6b
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L65
            if (r1 != 0) goto L69
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L65
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L65
            int r9 = r1.length()     // Catch: java.lang.Throwable -> L65
            r2 = 0
        L16:
            if (r2 >= r9) goto L5c
            com.tkay.core.common.f.am$a r3 = new com.tkay.core.common.f.am$a     // Catch: java.lang.Throwable -> L65
            r3.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = r1.optString(r2)     // Catch: java.lang.Throwable -> L65
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L65
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "adSourceId"
            java.lang.String r4 = r5.getString(r4)     // Catch: java.lang.Throwable -> L65
            r3.b = r4     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "price"
            double r6 = r5.getDouble(r4)     // Catch: java.lang.Throwable -> L65
            r3.d = r6     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "networkFirmId"
            int r4 = r5.getInt(r4)     // Catch: java.lang.Throwable -> L65
            r3.c = r4     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "demandType"
            int r4 = r5.getInt(r4)     // Catch: java.lang.Throwable -> L65
            r3.a = r4     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "tp_bid_id"
            boolean r4 = r5.has(r4)     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L56
            java.lang.String r4 = "tp_bid_id"
            java.lang.String r4 = r5.getString(r4)     // Catch: java.lang.Throwable -> L65
            r3.e = r4     // Catch: java.lang.Throwable -> L65
        L56:
            r0.add(r3)     // Catch: java.lang.Throwable -> L65
            int r2 = r2 + 1
            goto L16
        L5c:
            com.tkay.core.common.f.am$1 r9 = new com.tkay.core.common.f.am$1     // Catch: java.lang.Throwable -> L65
            r9.<init>(r8)     // Catch: java.lang.Throwable -> L65
            java.util.Collections.sort(r0, r9)     // Catch: java.lang.Throwable -> L65
            goto L69
        L65:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L6b
        L69:
            monitor-exit(r8)
            return r0
        L6b:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    private synchronized org.json.JSONArray c(java.util.List<com.tkay.core.common.f.am.a> r3) {
            r2 = this;
            monitor-enter(r2)
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L27
            r0.<init>()     // Catch: java.lang.Throwable -> L27
            if (r3 == 0) goto L25
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L27
        Lc:
            boolean r1 = r3.hasNext()     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L25
            java.lang.Object r1 = r3.next()     // Catch: java.lang.Throwable -> L27
            com.tkay.core.common.f.am$a r1 = (com.tkay.core.common.f.am.a) r1     // Catch: java.lang.Throwable -> L27
            org.json.JSONObject r1 = r1.a()     // Catch: java.lang.Throwable -> L20
            r0.put(r1)     // Catch: java.lang.Throwable -> L20
            goto Lc
        L20:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L27
            goto Lc
        L25:
            monitor-exit(r2)
            return r0
        L27:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private synchronized org.json.JSONArray d() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.am$a> r0 = r1.c     // Catch: java.lang.Throwable -> L9
            org.json.JSONArray r0 = r1.c(r0)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized org.json.JSONArray e() {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.am$a> r0 = r1.d     // Catch: java.lang.Throwable -> L9
            org.json.JSONArray r0 = r1.c(r0)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized org.json.JSONObject a() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "reqId"
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L27
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "reqDatetime"
            long r2 = r4.b     // Catch: java.lang.Throwable -> L27
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "fillOffers"
            org.json.JSONArray r2 = r4.d()     // Catch: java.lang.Throwable -> L27
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "bidResps"
            org.json.JSONArray r2 = r4.e()     // Catch: java.lang.Throwable -> L27
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L2d
        L2b:
            monitor-exit(r4)
            return r0
        L2d:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final synchronized void a(long r1) {
            r0 = this;
            monitor-enter(r0)
            r0.b = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized void a(com.tkay.core.common.f.am.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.am$a> r0 = r1.c     // Catch: java.lang.Throwable -> L8
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.lang.String b() {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.a     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void b(com.tkay.core.common.f.am.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.core.common.f.am$a> r0 = r1.d     // Catch: java.lang.Throwable -> L8
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void b(java.lang.String r1) {
            r0 = this;
            monitor-enter(r0)
            r0.a = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
