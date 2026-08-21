package com.alipay.sdk.m.k;

public class a {

    public static final class a {
        public static final java.lang.String a = "RecordPref";
        public static final java.lang.String b = "alipay_cashier_statistic_record";

        public static final class a {
            public final java.util.LinkedHashMap<java.lang.String, java.lang.String> a;

            public a() {
                    r1 = this;
                    r1.<init>()
                    java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
                    r0.<init>()
                    r1.a = r0
                    return
            }

            public a(java.lang.String r7) {
                    r6 = this;
                    r6.<init>()
                    java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
                    r0.<init>()
                    r6.a = r0
                    org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L2c
                    r0.<init>(r7)     // Catch: java.lang.Throwable -> L2c
                    r7 = 0
                    r1 = 0
                L11:
                    int r2 = r0.length()     // Catch: java.lang.Throwable -> L2c
                    if (r1 >= r2) goto L30
                    org.json.JSONArray r2 = r0.getJSONArray(r1)     // Catch: java.lang.Throwable -> L2c
                    java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r6.a     // Catch: java.lang.Throwable -> L2c
                    java.lang.String r4 = r2.getString(r7)     // Catch: java.lang.Throwable -> L2c
                    r5 = 1
                    java.lang.String r2 = r2.getString(r5)     // Catch: java.lang.Throwable -> L2c
                    r3.put(r4, r2)     // Catch: java.lang.Throwable -> L2c
                    int r1 = r1 + 1
                    goto L11
                L2c:
                    r7 = move-exception
                    com.alipay.sdk.m.u.e.a(r7)
                L30:
                    return
            }

            public java.lang.String a() {
                    r5 = this;
                    org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L38
                    r0.<init>()     // Catch: java.lang.Throwable -> L38
                    java.util.LinkedHashMap<java.lang.String, java.lang.String> r1 = r5.a     // Catch: java.lang.Throwable -> L38
                    java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L38
                    java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L38
                Lf:
                    boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L33
                    java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L38
                    java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L38
                    org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L38
                    r3.<init>()     // Catch: java.lang.Throwable -> L38
                    java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L38
                    org.json.JSONArray r4 = r3.put(r4)     // Catch: java.lang.Throwable -> L38
                    java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L38
                    r4.put(r2)     // Catch: java.lang.Throwable -> L38
                    r0.put(r3)     // Catch: java.lang.Throwable -> L38
                    goto Lf
                L33:
                    java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L38
                    return r0
                L38:
                    r0 = move-exception
                    com.alipay.sdk.m.u.e.a(r0)
                    org.json.JSONArray r0 = new org.json.JSONArray
                    r0.<init>()
                    java.lang.String r0 = r0.toString()
                    return r0
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static synchronized int a(android.content.Context r6, java.lang.String r7) {
                java.lang.Class<com.alipay.sdk.m.k.a$a> r0 = com.alipay.sdk.m.k.a.a.class
                monitor-enter(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
                r1.<init>()     // Catch: java.lang.Throwable -> L93
                java.lang.String r2 = "stat remove "
                r1.append(r2)     // Catch: java.lang.Throwable -> L93
                r1.append(r7)     // Catch: java.lang.Throwable -> L93
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L93
                java.lang.String r2 = "RecordPref"
                com.alipay.sdk.m.u.e.b(r2, r1)     // Catch: java.lang.Throwable -> L93
                r1 = 0
                if (r6 == 0) goto L91
                boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L93
                if (r2 == 0) goto L23
                goto L91
            L23:
                com.alipay.sdk.m.k.a$a$a r2 = a(r6)     // Catch: java.lang.Throwable -> L93
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r2.a     // Catch: java.lang.Throwable -> L93
                boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L93
                if (r3 == 0) goto L31
                monitor-exit(r0)
                return r1
            L31:
                java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L7d
                r1.<init>()     // Catch: java.lang.Throwable -> L7d
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r2.a     // Catch: java.lang.Throwable -> L7d
                java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Throwable -> L7d
                java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L7d
            L40:
                boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L7d
                if (r4 == 0) goto L5e
                java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L7d
                java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L7d
                java.lang.Object r5 = r4.getValue()     // Catch: java.lang.Throwable -> L7d
                boolean r5 = r7.equals(r5)     // Catch: java.lang.Throwable -> L7d
                if (r5 == 0) goto L40
                java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Throwable -> L7d
                r1.add(r4)     // Catch: java.lang.Throwable -> L7d
                goto L40
            L5e:
                java.util.Iterator r7 = r1.iterator()     // Catch: java.lang.Throwable -> L7d
            L62:
                boolean r3 = r7.hasNext()     // Catch: java.lang.Throwable -> L7d
                if (r3 == 0) goto L74
                java.lang.Object r3 = r7.next()     // Catch: java.lang.Throwable -> L7d
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7d
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r4 = r2.a     // Catch: java.lang.Throwable -> L7d
                r4.remove(r3)     // Catch: java.lang.Throwable -> L7d
                goto L62
            L74:
                a(r6, r2)     // Catch: java.lang.Throwable -> L7d
                int r6 = r1.size()     // Catch: java.lang.Throwable -> L7d
                monitor-exit(r0)
                return r6
            L7d:
                r7 = move-exception
                com.alipay.sdk.m.u.e.a(r7)     // Catch: java.lang.Throwable -> L93
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r7 = r2.a     // Catch: java.lang.Throwable -> L93
                int r7 = r7.size()     // Catch: java.lang.Throwable -> L93
                com.alipay.sdk.m.k.a$a$a r1 = new com.alipay.sdk.m.k.a$a$a     // Catch: java.lang.Throwable -> L93
                r1.<init>()     // Catch: java.lang.Throwable -> L93
                a(r6, r1)     // Catch: java.lang.Throwable -> L93
                monitor-exit(r0)
                return r7
            L91:
                monitor-exit(r0)
                return r1
            L93:
                r6 = move-exception
                monitor-exit(r0)
                goto L97
            L96:
                throw r6
            L97:
                goto L96
        }

        public static synchronized com.alipay.sdk.m.k.a.a.a a(android.content.Context r3) {
                java.lang.Class<com.alipay.sdk.m.k.a$a> r0 = com.alipay.sdk.m.k.a.a.class
                monitor-enter(r0)
                java.lang.String r1 = "alipay_cashier_statistic_record"
                r2 = 0
                java.lang.String r3 = com.alipay.sdk.m.u.j.a(r2, r3, r1, r2)     // Catch: java.lang.Throwable -> L1e
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1e
                if (r1 == 0) goto L17
                com.alipay.sdk.m.k.a$a$a r3 = new com.alipay.sdk.m.k.a$a$a     // Catch: java.lang.Throwable -> L1e
                r3.<init>()     // Catch: java.lang.Throwable -> L1e
                monitor-exit(r0)
                return r3
            L17:
                com.alipay.sdk.m.k.a$a$a r1 = new com.alipay.sdk.m.k.a$a$a     // Catch: java.lang.Throwable -> L1e
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L1e
                monitor-exit(r0)
                return r1
            L1e:
                r3 = move-exception
                com.alipay.sdk.m.u.e.a(r3)     // Catch: java.lang.Throwable -> L29
                com.alipay.sdk.m.k.a$a$a r3 = new com.alipay.sdk.m.k.a$a$a     // Catch: java.lang.Throwable -> L29
                r3.<init>()     // Catch: java.lang.Throwable -> L29
                monitor-exit(r0)
                return r3
            L29:
                r3 = move-exception
                monitor-exit(r0)
                throw r3
        }

        public static synchronized java.lang.String a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
                java.lang.Class<com.alipay.sdk.m.k.a$a> r0 = com.alipay.sdk.m.k.a.a.class
                monitor-enter(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
                r1.<init>()     // Catch: java.lang.Throwable -> L58
                java.lang.String r2 = "stat append "
                r1.append(r2)     // Catch: java.lang.Throwable -> L58
                r1.append(r6)     // Catch: java.lang.Throwable -> L58
                java.lang.String r2 = " , "
                r1.append(r2)     // Catch: java.lang.Throwable -> L58
                r1.append(r5)     // Catch: java.lang.Throwable -> L58
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L58
                java.lang.String r2 = "RecordPref"
                com.alipay.sdk.m.u.e.b(r2, r1)     // Catch: java.lang.Throwable -> L58
                if (r4 == 0) goto L55
                boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L58
                if (r1 == 0) goto L2a
                goto L55
            L2a:
                boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L58
                if (r1 == 0) goto L38
                java.util.UUID r6 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L58
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L58
            L38:
                com.alipay.sdk.m.k.a$a$a r1 = a(r4)     // Catch: java.lang.Throwable -> L58
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Throwable -> L58
                int r2 = r2.size()     // Catch: java.lang.Throwable -> L58
                r3 = 20
                if (r2 <= r3) goto L4b
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Throwable -> L58
                r2.clear()     // Catch: java.lang.Throwable -> L58
            L4b:
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r2 = r1.a     // Catch: java.lang.Throwable -> L58
                r2.put(r6, r5)     // Catch: java.lang.Throwable -> L58
                a(r4, r1)     // Catch: java.lang.Throwable -> L58
                monitor-exit(r0)
                return r6
            L55:
                r4 = 0
                monitor-exit(r0)
                return r4
            L58:
                r4 = move-exception
                monitor-exit(r0)
                throw r4
        }

        public static synchronized void a(android.content.Context r3, com.alipay.sdk.m.k.a.a.a r4) {
                java.lang.Class<com.alipay.sdk.m.k.a$a> r0 = com.alipay.sdk.m.k.a.a.class
                monitor-enter(r0)
                if (r4 != 0) goto La
                com.alipay.sdk.m.k.a$a$a r4 = new com.alipay.sdk.m.k.a$a$a     // Catch: java.lang.Throwable -> L15
                r4.<init>()     // Catch: java.lang.Throwable -> L15
            La:
                java.lang.String r4 = r4.a()     // Catch: java.lang.Throwable -> L15
                r1 = 0
                java.lang.String r2 = "alipay_cashier_statistic_record"
                com.alipay.sdk.m.u.j.b(r1, r3, r2, r4)     // Catch: java.lang.Throwable -> L15
                goto L19
            L15:
                r3 = move-exception
                com.alipay.sdk.m.u.e.a(r3)     // Catch: java.lang.Throwable -> L1b
            L19:
                monitor-exit(r0)
                return
            L1b:
                r3 = move-exception
                monitor-exit(r0)
                throw r3
        }

        public static synchronized java.lang.String b(android.content.Context r3) {
                java.lang.Class<com.alipay.sdk.m.k.a$a> r0 = com.alipay.sdk.m.k.a.a.class
                monitor-enter(r0)
                java.lang.String r1 = "RecordPref"
                java.lang.String r2 = "stat peek"
                com.alipay.sdk.m.u.e.b(r1, r2)     // Catch: java.lang.Throwable -> L3b
                r1 = 0
                if (r3 != 0) goto Lf
                monitor-exit(r0)
                return r1
            Lf:
                com.alipay.sdk.m.k.a$a$a r3 = a(r3)     // Catch: java.lang.Throwable -> L3b
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r2 = r3.a     // Catch: java.lang.Throwable -> L3b
                boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L3b
                if (r2 == 0) goto L1d
                monitor-exit(r0)
                return r1
            L1d:
                java.util.LinkedHashMap<java.lang.String, java.lang.String> r3 = r3.a     // Catch: java.lang.Throwable -> L35
                java.util.Set r3 = r3.entrySet()     // Catch: java.lang.Throwable -> L35
                java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L35
                java.lang.Object r3 = r3.next()     // Catch: java.lang.Throwable -> L35
                java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L35
                java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L35
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L35
                monitor-exit(r0)
                return r3
            L35:
                r3 = move-exception
                com.alipay.sdk.m.u.e.a(r3)     // Catch: java.lang.Throwable -> L3b
                monitor-exit(r0)
                return r1
            L3b:
                r3 = move-exception
                monitor-exit(r0)
                throw r3
        }
    }

    public static final class b {

        public static class a implements java.lang.Runnable {
            public final java.lang.String a;
            public final android.content.Context b;

            public a(java.lang.String r1, android.content.Context r2) {
                    r0 = this;
                    r0.a = r1
                    r0.b = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r3 = this;
                    java.lang.String r0 = r3.a
                    boolean r0 = android.text.TextUtils.isEmpty(r0)
                    if (r0 != 0) goto L13
                    android.content.Context r0 = r3.b
                    java.lang.String r1 = r3.a
                    boolean r0 = com.alipay.sdk.m.k.a.b.a(r0, r1)
                    if (r0 != 0) goto L13
                    return
                L13:
                    r0 = 0
                L14:
                    r1 = 4
                    if (r0 >= r1) goto L30
                    android.content.Context r1 = r3.b
                    java.lang.String r1 = com.alipay.sdk.m.k.a.a.b(r1)
                    boolean r2 = android.text.TextUtils.isEmpty(r1)
                    if (r2 == 0) goto L24
                    goto L30
                L24:
                    android.content.Context r2 = r3.b
                    boolean r1 = com.alipay.sdk.m.k.a.b.a(r2, r1)
                    if (r1 != 0) goto L2d
                    goto L30
                L2d:
                    int r0 = r0 + 1
                    goto L14
                L30:
                    return
            }
        }

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public static synchronized void a(android.content.Context r2) {
                java.lang.Class<com.alipay.sdk.m.k.a$b> r0 = com.alipay.sdk.m.k.a.b.class
                monitor-enter(r0)
                r1 = 0
                a(r2, r1, r1)     // Catch: java.lang.Throwable -> L9
                monitor-exit(r0)
                return
            L9:
                r2 = move-exception
                monitor-exit(r0)
                throw r2
        }

        public static synchronized void a(android.content.Context r1, com.alipay.sdk.m.k.b r2, java.lang.String r3, java.lang.String r4) {
                java.lang.Class<com.alipay.sdk.m.k.a$b> r0 = com.alipay.sdk.m.k.a.b.class
                monitor-enter(r0)
                if (r1 == 0) goto L16
                if (r2 == 0) goto L16
                if (r3 != 0) goto La
                goto L16
            La:
                java.lang.String r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L13
                a(r1, r2, r4)     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)
                return
            L13:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
            L16:
                monitor-exit(r0)
                return
        }

        public static synchronized void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
                java.lang.Class<com.alipay.sdk.m.k.a$b> r0 = com.alipay.sdk.m.k.a.b.class
                monitor-enter(r0)
                if (r2 != 0) goto L7
                monitor-exit(r0)
                return
            L7:
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1f
                if (r1 != 0) goto L10
                com.alipay.sdk.m.k.a.a.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L1f
            L10:
                java.lang.Thread r4 = new java.lang.Thread     // Catch: java.lang.Throwable -> L1f
                com.alipay.sdk.m.k.a$b$a r1 = new com.alipay.sdk.m.k.a$b$a     // Catch: java.lang.Throwable -> L1f
                r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1f
                r4.<init>(r1)     // Catch: java.lang.Throwable -> L1f
                r4.start()     // Catch: java.lang.Throwable -> L1f
                monitor-exit(r0)
                return
            L1f:
                r2 = move-exception
                monitor-exit(r0)
                throw r2
        }

        public static boolean a(android.content.Context r0, java.lang.String r1) {
                boolean r0 = b(r0, r1)
                return r0
        }

        public static synchronized boolean b(android.content.Context r4, java.lang.String r5) {
                java.lang.Class<com.alipay.sdk.m.k.a$b> r0 = com.alipay.sdk.m.k.a.b.class
                monitor-enter(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L44
                r1.<init>()     // Catch: java.lang.Throwable -> L44
                java.lang.String r2 = "stat sub "
                r1.append(r2)     // Catch: java.lang.Throwable -> L44
                r1.append(r5)     // Catch: java.lang.Throwable -> L44
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L44
                java.lang.String r2 = "mspl"
                com.alipay.sdk.m.u.e.b(r2, r1)     // Catch: java.lang.Throwable -> L44
                com.alipay.sdk.m.m.a r1 = com.alipay.sdk.m.m.a.D()     // Catch: java.lang.Throwable -> L44
                boolean r1 = r1.e()     // Catch: java.lang.Throwable -> L44
                if (r1 == 0) goto L29
                com.alipay.sdk.m.q.d r1 = new com.alipay.sdk.m.q.d     // Catch: java.lang.Throwable -> L44
                r1.<init>()     // Catch: java.lang.Throwable -> L44
                goto L2e
            L29:
                com.alipay.sdk.m.q.e r1 = new com.alipay.sdk.m.q.e     // Catch: java.lang.Throwable -> L44
                r1.<init>()     // Catch: java.lang.Throwable -> L44
            L2e:
                r2 = 0
                r3 = 0
                com.alipay.sdk.m.p.b r1 = r1.a(r2, r4, r5)     // Catch: java.lang.Throwable -> L3e
                if (r1 == 0) goto L3c
                com.alipay.sdk.m.k.a.a.a(r4, r5)     // Catch: java.lang.Throwable -> L3e
                r4 = 1
                monitor-exit(r0)
                return r4
            L3c:
                monitor-exit(r0)
                return r3
            L3e:
                r4 = move-exception
                com.alipay.sdk.m.u.e.a(r4)     // Catch: java.lang.Throwable -> L44
                monitor-exit(r0)
                return r3
            L44:
                r4 = move-exception
                monitor-exit(r0)
                throw r4
        }
    }

    public static final class c {
        public static final java.lang.String a = "alipay_cashier_ap_seq_v";

        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        public static synchronized long a(android.content.Context r3) {
                java.lang.Class<com.alipay.sdk.m.k.a$c> r0 = com.alipay.sdk.m.k.a.c.class
                monitor-enter(r0)
                java.lang.String r1 = "alipay_cashier_ap_seq_v"
                long r1 = com.alipay.sdk.m.k.a.d.a(r3, r1)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r0)
                return r1
            Lb:
                r3 = move-exception
                monitor-exit(r0)
                throw r3
        }
    }

    public static final class d {
        public d() {
                r0 = this;
                r0.<init>()
                return
        }

        public static synchronized long a(android.content.Context r6, java.lang.String r7) {
                java.lang.Class<com.alipay.sdk.m.k.a$d> r0 = com.alipay.sdk.m.k.a.d.class
                monitor-enter(r0)
                r1 = 0
                java.lang.String r2 = com.alipay.sdk.m.u.j.a(r1, r6, r7, r1)     // Catch: java.lang.Throwable -> L13
                boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13
                if (r3 != 0) goto L13
                long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> L13
                goto L15
            L13:
                r2 = 0
            L15:
                r4 = 1
                long r2 = r2 + r4
                java.lang.String r4 = java.lang.Long.toString(r2)     // Catch: java.lang.Throwable -> L1f
                com.alipay.sdk.m.u.j.b(r1, r6, r7, r4)     // Catch: java.lang.Throwable -> L1f
            L1f:
                monitor-exit(r0)
                return r2
        }
    }

    public static final class e {
        public static final java.lang.String a = "alipay_cashier_statistic_v";

        public e() {
                r0 = this;
                r0.<init>()
                return
        }

        public static synchronized long a(android.content.Context r3) {
                java.lang.Class<com.alipay.sdk.m.k.a$e> r0 = com.alipay.sdk.m.k.a.e.class
                monitor-enter(r0)
                java.lang.String r1 = "alipay_cashier_statistic_v"
                long r1 = com.alipay.sdk.m.k.a.d.a(r3, r1)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r0)
                return r1
            Lb:
                r3 = move-exception
                monitor-exit(r0)
                throw r3
        }
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized void a(android.content.Context r1) {
            java.lang.Class<com.alipay.sdk.m.k.a> r0 = com.alipay.sdk.m.k.a.class
            monitor-enter(r0)
            com.alipay.sdk.m.k.a.b.a(r1)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r0)
            return
        L8:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized void a(android.content.Context r1, com.alipay.sdk.m.s.a r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.alipay.sdk.m.k.a> r0 = com.alipay.sdk.m.k.a.class
            monitor-enter(r0)
            if (r1 == 0) goto L1b
            if (r2 != 0) goto L8
            goto L1b
        L8:
            com.alipay.sdk.m.k.b r2 = r2.l     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = r2.a(r3)     // Catch: java.lang.Throwable -> L12
            com.alipay.sdk.m.k.a.a.a(r1, r2, r4)     // Catch: java.lang.Throwable -> L12
            goto L16
        L12:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)
            return
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L1b:
            monitor-exit(r0)
            return
    }

    public static void a(com.alipay.sdk.m.s.a r0, java.lang.String r1, java.lang.String r2) {
            if (r0 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.k.b r0 = r0.l
            r0.a(r1, r2)
            return
    }

    public static void a(com.alipay.sdk.m.s.a r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            if (r0 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.k.b r0 = r0.l
            r0.a(r1, r2, r3)
            return
    }

    public static void a(com.alipay.sdk.m.s.a r0, java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            if (r0 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.k.b r0 = r0.l
            r0.a(r1, r2, r3)
            return
    }

    public static void a(com.alipay.sdk.m.s.a r0, java.lang.String r1, java.lang.String r2, java.lang.Throwable r3, java.lang.String r4) {
            if (r0 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.k.b r0 = r0.l
            r0.a(r1, r2, r3, r4)
            return
    }

    public static void a(com.alipay.sdk.m.s.a r1, java.lang.String r2, java.lang.Throwable r3) {
            if (r1 == 0) goto L18
            if (r3 == 0) goto L18
            java.lang.Class r0 = r3.getClass()
            if (r0 != 0) goto Lb
            goto L18
        Lb:
            com.alipay.sdk.m.k.b r1 = r1.l
            java.lang.Class r0 = r3.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a(r2, r0, r3)
        L18:
            return
    }

    public static synchronized void b(android.content.Context r1, com.alipay.sdk.m.s.a r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.alipay.sdk.m.k.a> r0 = com.alipay.sdk.m.k.a.class
            monitor-enter(r0)
            if (r1 == 0) goto L12
            if (r2 != 0) goto L8
            goto L12
        L8:
            com.alipay.sdk.m.k.b r2 = r2.l     // Catch: java.lang.Throwable -> Lf
            com.alipay.sdk.m.k.a.b.a(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L12:
            monitor-exit(r0)
            return
    }

    public static void b(com.alipay.sdk.m.s.a r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            if (r0 != 0) goto L3
            return
        L3:
            com.alipay.sdk.m.k.b r0 = r0.l
            r0.b(r1, r2, r3)
            return
    }
}
