package com.tencent.bugly.proguard;

public final class ag {
    private final java.text.SimpleDateFormat a;
    private final com.tencent.bugly.proguard.ad b;


    public static class a {
        private static final com.tencent.bugly.proguard.ag a = null;

        static {
                com.tencent.bugly.proguard.ag r0 = new com.tencent.bugly.proguard.ag
                r1 = 0
                r0.<init>(r1)
                com.tencent.bugly.proguard.ag.a.a = r0
                return
        }

        public static com.tencent.bugly.proguard.ag a() {
                com.tencent.bugly.proguard.ag r0 = com.tencent.bugly.proguard.ag.a.a
                return r0
        }
    }

    public static class b {
        java.lang.String a;
        public long b;
        public java.lang.String c;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "SLAData{uuid='"
                r0.<init>(r1)
                java.lang.String r1 = r4.a
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = ", time="
                r0.append(r2)
                long r2 = r4.b
                r0.append(r2)
                java.lang.String r2 = ", data='"
                r0.append(r2)
                java.lang.String r2 = r4.c
                r0.append(r2)
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public static class c {
        java.lang.String a;
        java.lang.String b;
        long c;
        boolean d;
        long e;
        java.lang.String f;
        java.lang.String g;

        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        public c(java.lang.String r1, java.lang.String r2, long r3, boolean r5, long r6, java.lang.String r8, java.lang.String r9) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r5
                r0.e = r6
                r0.f = r8
                r0.g = r9
                return
        }
    }

    private ag() {
            r3 = this;
            r3.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r2 = "yyyy-MM-dd HH:mm:ss:SSS"
            r0.<init>(r2, r1)
            r3.a = r0
            com.tencent.bugly.proguard.ad r0 = new com.tencent.bugly.proguard.ad
            r0.<init>()
            r3.b = r0
            return
    }

    ag(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r3, java.lang.Iterable<com.tencent.bugly.proguard.ag.b> r4) {
            java.util.Iterator r4 = r4.iterator()
            boolean r0 = r4.hasNext()
            if (r0 != 0) goto Ld
            java.lang.String r3 = ""
            return r3
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "'"
            r0.append(r1)
            java.lang.Object r2 = r4.next()
            com.tencent.bugly.proguard.ag$b r2 = (com.tencent.bugly.proguard.ag.b) r2
            java.lang.String r2 = r2.a
            r0.append(r2)
            r0.append(r1)
        L25:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L40
            r0.append(r3)
            r0.append(r1)
            java.lang.Object r2 = r4.next()
            com.tencent.bugly.proguard.ag$b r2 = (com.tencent.bugly.proguard.ag.b) r2
            java.lang.String r2 = r2.a
            r0.append(r2)
            r0.append(r1)
            goto L25
        L40:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.util.List<com.tencent.bugly.proguard.ag.b> a() {
            java.lang.String r0 = "_dt"
            java.lang.String r1 = "_tm"
            java.lang.String r2 = "_id"
            java.lang.String[] r5 = new java.lang.String[]{r2, r1, r0}
            com.tencent.bugly.proguard.w r3 = com.tencent.bugly.proguard.w.a()
            java.lang.String r7 = "_tm"
            java.lang.String r8 = "30"
            java.lang.String r4 = "t_sla"
            r6 = 0
            android.database.Cursor r3 = r3.a(r4, r5, r6, r7, r8)
            r4 = 0
            if (r3 != 0) goto L1d
            return r4
        L1d:
            int r5 = r3.getCount()
            if (r5 > 0) goto L27
            r3.close()
            return r4
        L27:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
        L2c:
            boolean r5 = r3.moveToNext()     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            if (r5 == 0) goto L63
            com.tencent.bugly.proguard.ag$b r5 = new com.tencent.bugly.proguard.ag$b     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r5.<init>()     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            int r6 = r3.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            java.lang.String r6 = r3.getString(r6)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r5.a = r6     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            int r6 = r3.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            long r6 = r3.getLong(r6)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r5.b = r6     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            int r6 = r3.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            java.lang.String r6 = r3.getString(r6)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r5.c = r6     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            java.lang.String r6 = r5.toString()     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r7 = 0
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            com.tencent.bugly.proguard.al.c(r6, r7)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            r4.add(r5)     // Catch: java.lang.Throwable -> L67 java.lang.Throwable -> L69
            goto L2c
        L63:
            r3.close()
            goto L6e
        L67:
            r0 = move-exception
            goto L6f
        L69:
            r0 = move-exception
            com.tencent.bugly.proguard.al.b(r0)     // Catch: java.lang.Throwable -> L67
            goto L63
        L6e:
            return r4
        L6f:
            r3.close()
            throw r0
    }

    private com.tencent.bugly.proguard.ag.b b(com.tencent.bugly.proguard.ag.c r8) {
            r7 = this;
            r0 = 0
            r1 = 0
            if (r8 == 0) goto L14a
            java.lang.String r2 = r8.b
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto Le
            goto L14a
        Le:
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.b()
            if (r2 != 0) goto L1c
            java.lang.Object[] r8 = new java.lang.Object[r1]
            java.lang.String r1 = "sla convert failed because ComInfoManager is null"
            com.tencent.bugly.proguard.al.d(r1, r8)
            return r0
        L1c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "&app_version="
            r0.<init>(r3)
            java.lang.String r3 = r2.o
            r0.append(r3)
            java.lang.String r3 = "&app_name="
            r0.append(r3)
            java.lang.String r3 = r2.q
            r0.append(r3)
            java.lang.String r3 = "&app_bundle_id="
            r0.append(r3)
            java.lang.String r3 = r2.c
            r0.append(r3)
            java.lang.String r3 = "&client_type=android&user_id="
            r0.append(r3)
            java.lang.String r3 = r2.f()
            r0.append(r3)
            java.lang.String r3 = "&sdk_version="
            r0.append(r3)
            java.lang.String r3 = r2.h
            r0.append(r3)
            java.lang.String r3 = "&event_code="
            r0.append(r3)
            java.lang.String r3 = r8.b
            r0.append(r3)
            java.lang.String r3 = "&event_result="
            r0.append(r3)
            boolean r3 = r8.d
            r0.append(r3)
            java.lang.String r3 = "&event_time="
            r0.append(r3)
            java.text.SimpleDateFormat r3 = r7.a
            java.util.Date r4 = new java.util.Date
            long r5 = r8.c
            r4.<init>(r5)
            java.lang.String r3 = r3.format(r4)
            r0.append(r3)
            java.lang.String r3 = "&event_cost="
            r0.append(r3)
            long r3 = r8.e
            r0.append(r3)
            java.lang.String r3 = "&device_id="
            r0.append(r3)
            java.lang.String r3 = r2.g()
            r0.append(r3)
            java.lang.String r3 = "&debug="
            r0.append(r3)
            boolean r3 = r2.D
            r0.append(r3)
            java.lang.String r3 = "&param_0="
            r0.append(r3)
            java.lang.String r3 = r8.f
            r0.append(r3)
            java.lang.String r3 = "&param_1="
            r0.append(r3)
            java.lang.String r3 = r8.a
            r0.append(r3)
            java.lang.String r3 = "&param_2="
            r0.append(r3)
            boolean r3 = r2.M
            if (r3 == 0) goto Lbb
            java.lang.String r3 = "rqd"
            goto Lbd
        Lbb:
            java.lang.String r3 = "ext"
        Lbd:
            r0.append(r3)
            java.lang.String r3 = "&param_4="
            r0.append(r3)
            java.lang.String r2 = r2.e()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = r8.g
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lee
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&param_3="
            r2.append(r0)
            java.lang.String r0 = r8.g
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        Lee:
            r2 = 7
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r3 = r8.a
            r2[r1] = r3
            r1 = 1
            java.lang.String r3 = r8.b
            r2[r1] = r3
            r1 = 2
            long r3 = r8.c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r1] = r3
            r1 = 3
            boolean r3 = r8.d
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2[r1] = r3
            r1 = 4
            long r3 = r8.e
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r1] = r3
            r1 = 5
            java.lang.String r3 = r8.f
            r2[r1] = r3
            r1 = 6
            java.lang.String r3 = r8.g
            r2[r1] = r3
            java.lang.String r1 = "sla convert eventId:%s eventType:%s, eventTime:%s success:%s cost:%s from:%s uploadMsg:"
            com.tencent.bugly.proguard.al.c(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r8.a
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            java.lang.String r2 = r8.b
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tencent.bugly.proguard.ag$b r2 = new com.tencent.bugly.proguard.ag$b
            r2.<init>()
            r2.a = r1
            long r3 = r8.c
            r2.b = r3
            r2.c = r0
            return r2
        L14a:
            java.lang.Object[] r8 = new java.lang.Object[r1]
            java.lang.String r1 = "sla convert event is null"
            com.tencent.bugly.proguard.al.d(r1, r8)
            return r0
    }

    static void c(java.util.List<com.tencent.bugly.proguard.ag.b> r5) {
            r0 = 0
            if (r5 == 0) goto L69
            boolean r1 = r5.isEmpty()
            if (r1 == 0) goto La
            goto L69
        La:
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            int r3 = r5.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2[r0] = r3
            java.lang.String r3 = "sla batch report list size:%s"
            com.tencent.bugly.proguard.al.c(r3, r2)
            int r2 = r5.size()
            r3 = 30
            if (r2 <= r3) goto L2a
            r2 = 29
            java.util.List r5 = r5.subList(r0, r2)
        L2a:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r3 = r5.iterator()
        L33:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L45
            java.lang.Object r4 = r3.next()
            com.tencent.bugly.proguard.ag$b r4 = (com.tencent.bugly.proguard.ag.b) r4
            java.lang.String r4 = r4.c
            r2.add(r4)
            goto L33
        L45:
            android.util.Pair r2 = com.tencent.bugly.proguard.ad.a(r2)
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Object r4 = r2.first
            r3[r0] = r4
            java.lang.Object r0 = r2.second
            r3[r1] = r0
            java.lang.String r0 = "sla batch report result, rspCode:%s rspMsg:%s"
            com.tencent.bugly.proguard.al.c(r0, r3)
            java.lang.Object r0 = r2.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 != r1) goto L68
            d(r5)
        L68:
            return
        L69:
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r0 = "sla batch report data is empty"
            com.tencent.bugly.proguard.al.c(r0, r5)
            return
    }

    public static void d(java.util.List<com.tencent.bugly.proguard.ag.b> r4) {
            r0 = 0
            if (r4 == 0) goto L4d
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto La
            goto L4d
        La:
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            int r3 = r4.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2[r0] = r3
            java.lang.String r3 = "sla batch delete list size:%s"
            com.tencent.bugly.proguard.al.c(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = "_id in ("
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L48
            java.lang.String r3 = ","
            java.lang.String r4 = a(r3, r4)     // Catch: java.lang.Throwable -> L48
            r2.append(r4)     // Catch: java.lang.Throwable -> L48
            java.lang.String r4 = ")"
            r2.append(r4)     // Catch: java.lang.Throwable -> L48
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "sla batch delete where:%s"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L48
            r1[r0] = r4     // Catch: java.lang.Throwable -> L48
            com.tencent.bugly.proguard.al.c(r2, r1)     // Catch: java.lang.Throwable -> L48
            com.tencent.bugly.proguard.w r0 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = "t_sla"
            r0.a(r1, r4)     // Catch: java.lang.Throwable -> L48
            return
        L48:
            r4 = move-exception
            com.tencent.bugly.proguard.al.b(r4)
            return
        L4d:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r0 = "sla batch delete list is null"
            com.tencent.bugly.proguard.al.c(r0, r4)
            return
    }

    private static void e(java.util.List<com.tencent.bugly.proguard.ag.b> r5) {
            java.util.Iterator r5 = r5.iterator()
        L4:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L59
            java.lang.Object r0 = r5.next()
            com.tencent.bugly.proguard.ag$b r0 = (com.tencent.bugly.proguard.ag.b) r0
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r0.a
            r1[r2] = r3
            r2 = 1
            long r3 = r0.b
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r1[r2] = r3
            r2 = 2
            java.lang.String r3 = r0.c
            r1[r2] = r3
            java.lang.String r2 = "sla save id:%s time:%s msg:%s"
            com.tencent.bugly.proguard.al.c(r2, r1)
            android.content.ContentValues r1 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "_id"
            java.lang.String r3 = r0.a     // Catch: java.lang.Throwable -> L54
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "_tm"
            long r3 = r0.b     // Catch: java.lang.Throwable -> L54
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L54
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "_dt"
            java.lang.String r0 = r0.c     // Catch: java.lang.Throwable -> L54
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L54
            com.tencent.bugly.proguard.w r0 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "t_sla"
            r3 = 0
            r0.a(r2, r1, r3)     // Catch: java.lang.Throwable -> L54
            goto L4
        L54:
            r0 = move-exception
            com.tencent.bugly.proguard.al.b(r0)
            goto L4
        L59:
            return
    }

    public final void a(com.tencent.bugly.proguard.ag.c r3) {
            r2 = this;
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto L11
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r0 = "sla report event is null"
            com.tencent.bugly.proguard.al.d(r0, r3)
            return
        L11:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "sla report single event"
            com.tencent.bugly.proguard.al.c(r1, r0)
            java.util.List r3 = java.util.Collections.singletonList(r3)
            r2.a(r3)
            return
    }

    public final void a(java.util.List<com.tencent.bugly.proguard.ag.c> r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L42
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto La
            goto L42
        La:
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = r4.size()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            java.lang.String r0 = "sla batch report event size:%s"
            com.tencent.bugly.proguard.al.c(r0, r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L25:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r4.next()
            com.tencent.bugly.proguard.ag$c r1 = (com.tencent.bugly.proguard.ag.c) r1
            com.tencent.bugly.proguard.ag$b r1 = r3.b(r1)
            if (r1 == 0) goto L25
            r0.add(r1)
            goto L25
        L3b:
            e(r0)
            r3.b(r0)
            return
        L42:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r0 = "sla batch report event is null"
            com.tencent.bugly.proguard.al.d(r0, r4)
            return
    }

    public final void b(java.util.List<com.tencent.bugly.proguard.ag.b> r3) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L17
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.ag$1 r1 = new com.tencent.bugly.proguard.ag$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
        L17:
            c(r3)
            return
    }
}
