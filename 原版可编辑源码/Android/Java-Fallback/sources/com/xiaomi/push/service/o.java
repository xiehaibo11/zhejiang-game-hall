package com.xiaomi.push.service;

public class o {
    private static volatile com.xiaomi.push.service.o a;
    private int a;
    private long a;
    private final android.content.Context a;
    private final android.content.SharedPreferences a;
    private java.lang.String a;
    private final java.util.concurrent.atomic.AtomicInteger a;
    private volatile boolean a;
    private java.lang.String b;
    private final java.util.concurrent.atomic.AtomicInteger b;
    private final boolean b;
    private final java.util.concurrent.atomic.AtomicInteger c;
    private final boolean c;

    class a {
        public static java.lang.String a() {
                java.lang.String r0 = "support_wifi_digest"
                return r0
        }

        public static java.lang.String a(java.lang.String r2) {
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r2
                java.lang.String r2 = "HB_%s"
                java.lang.String r2 = java.lang.String.format(r2, r0)
                return r2
        }

        public static java.lang.String b() {
                java.lang.String r0 = "record_support_wifi_digest_reported"
                return r0
        }

        public static java.lang.String b(java.lang.String r2) {
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                r0[r1] = r2
                java.lang.String r2 = "HB_dead_time_%s"
                java.lang.String r2 = java.lang.String.format(r2, r0)
                return r2
        }

        public static java.lang.String c() {
                java.lang.String r0 = "record_hb_count_start"
                return r0
        }

        public static java.lang.String d() {
                java.lang.String r0 = "record_short_hb_count"
                return r0
        }

        public static java.lang.String e() {
                java.lang.String r0 = "record_long_hb_count"
                return r0
        }

        public static java.lang.String f() {
                java.lang.String r0 = "record_hb_change"
                return r0
        }

        public static java.lang.String g() {
                java.lang.String r0 = "record_mobile_ptc"
                return r0
        }

        public static java.lang.String h() {
                java.lang.String r0 = "record_wifi_ptc"
                return r0
        }

        public static java.lang.String i() {
                java.lang.String r0 = "record_ptc_start"
                return r0
        }

        public static java.lang.String j() {
                java.lang.String r0 = "keep_short_hb_effective_time"
                return r0
        }
    }

    private o(android.content.Context r8) {
            r7 = this;
            r7.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            r7.a = r0
            r0 = 0
            r7.a = r0
            r7.a = r1
            r7.b = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r7.b = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>(r1)
            r7.c = r0
            r0 = -1
            r7.a = r0
            r7.a = r8
            boolean r8 = com.xiaomi.push.m.a(r8)
            r7.c = r8
            android.content.Context r8 = r7.a
            com.xiaomi.push.service.ba r8 = com.xiaomi.push.service.ba.a(r8)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.bg
            int r0 = r0.a()
            r2 = 1
            boolean r8 = r8.a(r0, r2)
            r7.b = r8
            android.content.Context r8 = r7.a
            java.lang.String r0 = "hb_record"
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r0, r1)
            r7.a = r8
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences r8 = r7.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.c()
            r3 = -1
            long r5 = r8.getLong(r2, r3)
            int r8 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r8 != 0) goto L6d
            android.content.SharedPreferences r8 = r7.a
            android.content.SharedPreferences$Editor r8 = r8.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.c()
            android.content.SharedPreferences$Editor r8 = r8.putLong(r2, r0)
            r8.apply()
        L6d:
            android.content.SharedPreferences r8 = r7.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.i()
            long r5 = r8.getLong(r2, r3)
            r7.a = r5
            int r8 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r8 != 0) goto L90
            r7.a = r0
            android.content.SharedPreferences r8 = r7.a
            android.content.SharedPreferences$Editor r8 = r8.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.i()
            android.content.SharedPreferences$Editor r8 = r8.putLong(r2, r0)
            r8.apply()
        L90:
            return
    }

    private int a() {
            r3 = this;
            java.lang.String r0 = r3.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = -1
            if (r0 != 0) goto L15
            android.content.SharedPreferences r0 = r3.a     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = r3.a     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = com.xiaomi.push.service.o.a.a(r2)     // Catch: java.lang.Throwable -> L15
            int r1 = r0.getInt(r2, r1)     // Catch: java.lang.Throwable -> L15
        L15:
            return r1
    }

    public static com.xiaomi.push.service.o a(android.content.Context r2) {
            com.xiaomi.push.service.o r0 = com.xiaomi.push.service.o.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.service.o> r0 = com.xiaomi.push.service.o.class
            monitor-enter(r0)
            com.xiaomi.push.service.o r1 = com.xiaomi.push.service.o.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.service.o r1 = new com.xiaomi.push.service.o     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.service.o.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.service.o r2 = com.xiaomi.push.service.o.a
            return r2
    }

    private void a(java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            r3 = this;
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r4)
            java.lang.String r4 = "hb_name"
            r0.c(r4)
            java.lang.String r4 = "hb_channel"
            r0.a(r4)
            r1 = 1
            r0.a(r1)
            r0.b(r5)
            r4 = 0
            r0.a(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.b(r1)
            android.content.Context r5 = r3.a
            java.lang.String r5 = r5.getPackageName()
            r0.g(r5)
            java.lang.String r5 = "com.xiaomi.xmsf"
            r0.e(r5)
            if (r6 != 0) goto L3a
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
        L3a:
            r5 = 0
            android.content.Context r1 = r3.a
            com.xiaomi.push.service.t r1 = com.xiaomi.push.service.u.a(r1)
            if (r1 == 0) goto L58
            java.lang.String r2 = r1.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L58
            java.lang.String r1 = r1.a
            java.lang.String r2 = "@"
            java.lang.String[] r1 = r1.split(r2)
            int r2 = r1.length
            if (r2 <= 0) goto L58
            r5 = r1[r4]
        L58:
            java.lang.String r4 = "uuid"
            r6.put(r4, r5)
            java.lang.String r4 = android.os.Build.MODEL
            java.lang.String r5 = "model"
            r6.put(r5, r4)
            android.content.Context r4 = r3.a
            java.lang.String r5 = r4.getPackageName()
            int r4 = com.xiaomi.push.h.a(r4, r5)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "avc"
            r6.put(r5, r4)
            r4 = 40090(0x9c9a, float:5.6178E-41)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "pvc"
            r6.put(r5, r4)
            r4 = 48
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r5 = "cvc"
            r6.put(r5, r4)
            r0.a(r6)
            android.content.Context r4 = r3.a
            com.xiaomi.push.hg r4 = com.xiaomi.push.hg.a(r4)
            if (r4 == 0) goto La2
            android.content.Context r5 = r3.a
            java.lang.String r5 = r5.getPackageName()
            r4.a(r0, r5)
        La2:
            return
    }

    private void a(boolean r9) {
            r8 = this;
            boolean r0 = r8.c()
            if (r0 != 0) goto L7
            return
        L7:
            if (r9 == 0) goto Lc
            java.util.concurrent.atomic.AtomicInteger r0 = r8.b
            goto Le
        Lc:
            java.util.concurrent.atomic.AtomicInteger r0 = r8.c
        Le:
            int r0 = r0.incrementAndGet()
            r1 = 2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = "short"
            java.lang.String r4 = "long"
            if (r9 == 0) goto L1d
            r5 = r3
            goto L1e
        L1d:
            r5 = r4
        L1e:
            r6 = 0
            r2[r6] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r0)
            r7 = 1
            r2[r7] = r5
            java.lang.String r5 = "[HB] %s ping interval count: %s"
            java.lang.String r2 = java.lang.String.format(r5, r2)
            com.xiaomi.channel.commonutils.logger.b.b(r2)
            r2 = 5
            if (r0 < r2) goto L74
            if (r9 == 0) goto L3b
            java.lang.String r2 = com.xiaomi.push.service.o.a.d()
            goto L3f
        L3b:
            java.lang.String r2 = com.xiaomi.push.service.o.a.e()
        L3f:
            android.content.SharedPreferences r5 = r8.a
            int r5 = r5.getInt(r2, r6)
            int r5 = r5 + r0
            android.content.SharedPreferences r0 = r8.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putInt(r2, r5)
            r0.apply()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            if (r9 == 0) goto L58
            goto L59
        L58:
            r3 = r4
        L59:
            r0[r6] = r3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            r0[r7] = r1
            java.lang.String r1 = "[HB] accumulate %s hb count(%s) and write to file. "
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            if (r9 == 0) goto L6f
            java.util.concurrent.atomic.AtomicInteger r9 = r8.b
            goto L71
        L6f:
            java.util.concurrent.atomic.AtomicInteger r9 = r8.c
        L71:
            r9.set(r6)
        L74:
            return
    }

    private boolean a() {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.bi
            int r1 = r1.a()
            r2 = 5
            int r0 = r0.a(r1, r2)
            r1 = 3
            int r0 = java.lang.Math.max(r0, r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r3.a
            int r1 = r1.get()
            if (r1 < r0) goto L20
            r0 = 1
            return r0
        L20:
            r0 = 0
            return r0
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "W-"
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = "M-"
            boolean r3 = r3.startsWith(r0)
            if (r3 == 0) goto L19
            goto L1a
        L19:
            return r1
        L1a:
            r3 = 1
            return r3
    }

    private long b() {
            r4 = this;
            android.content.SharedPreferences r0 = r4.a
            java.lang.String r1 = com.xiaomi.push.service.o.a.j()
            r2 = -1
            long r0 = r0.getLong(r1, r2)
            return r0
    }

    private void b(java.lang.String r10) {
            r9 = this;
            java.lang.String r0 = "WIFI-ID-UNKNOWN"
            boolean r0 = r0.equals(r10)
            if (r0 == 0) goto L16
            java.lang.String r10 = r9.a
            if (r10 == 0) goto L15
            java.lang.String r0 = "W-"
            boolean r10 = r10.startsWith(r0)
            if (r10 == 0) goto L15
            goto L18
        L15:
            r10 = 0
        L16:
            r9.a = r10
        L18:
            android.content.SharedPreferences r10 = r9.a
            java.lang.String r0 = r9.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.a(r0)
            r1 = -1
            int r10 = r10.getInt(r0, r1)
            android.content.SharedPreferences r0 = r9.a
            java.lang.String r2 = r9.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.b(r2)
            r3 = -1
            long r5 = r0.getLong(r2, r3)
            long r7 = java.lang.System.currentTimeMillis()
            if (r10 == r1) goto L75
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 != 0) goto L56
            android.content.SharedPreferences r10 = r9.a
            android.content.SharedPreferences$Editor r10 = r10.edit()
            java.lang.String r0 = r9.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.b(r0)
            long r2 = r9.c()
            long r7 = r7 + r2
            android.content.SharedPreferences$Editor r10 = r10.putLong(r0, r7)
        L52:
            r10.apply()
            goto L75
        L56:
            int r10 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r10 <= 0) goto L75
            android.content.SharedPreferences r10 = r9.a
            android.content.SharedPreferences$Editor r10 = r10.edit()
            java.lang.String r0 = r9.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.a(r0)
            android.content.SharedPreferences$Editor r10 = r10.remove(r0)
            java.lang.String r0 = r9.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.b(r0)
            android.content.SharedPreferences$Editor r10 = r10.remove(r0)
            goto L52
        L75:
            java.util.concurrent.atomic.AtomicInteger r10 = r9.a
            r0 = 0
            r10.getAndSet(r0)
            java.lang.String r10 = r9.a
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            r2 = 1
            if (r10 != 0) goto L8e
            int r10 = r9.a()
            if (r10 == r1) goto L8b
            goto L8e
        L8b:
            r9.a = r2
            goto L90
        L8e:
            r9.a = r0
        L90:
            r10 = 2
            java.lang.Object[] r10 = new java.lang.Object[r10]
            java.lang.String r1 = r9.a
            r10[r0] = r1
            boolean r0 = r9.a
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r10[r2] = r0
            java.lang.String r0 = "[HB] network changed, netid:%s, %s"
            java.lang.String r10 = java.lang.String.format(r0, r10)
            com.xiaomi.channel.commonutils.logger.b.a(r10)
            return
    }

    private boolean b() {
            r3 = this;
            java.lang.String r0 = r3.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.a
            java.lang.String r2 = "M-"
            boolean r0 = r0.startsWith(r2)
            if (r0 == 0) goto L27
            android.content.Context r0 = r3.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r2 = com.xiaomi.push.ho.bj
            int r2 = r2.a()
            boolean r0 = r0.a(r2, r1)
            if (r0 != 0) goto L27
            r0 = 1
            return r0
        L27:
            return r1
    }

    private long c() {
            r4 = this;
            android.content.Context r0 = r4.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.br
            int r1 = r1.a()
            r2 = 777600000(0x2e593c00, double:3.84185446E-315)
            long r0 = r0.a(r1, r2)
            return r0
    }

    private void c(java.lang.String r6) {
            r5 = this;
            boolean r0 = r5.a(r6)
            if (r0 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences r0 = r5.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r6 = com.xiaomi.push.service.o.a.a(r6)
            r1 = 235000(0x395f8, float:3.29305E-40)
            android.content.SharedPreferences$Editor r6 = r0.putInt(r6, r1)
            r6.apply()
            android.content.SharedPreferences r6 = r5.a
            android.content.SharedPreferences$Editor r6 = r6.edit()
            java.lang.String r0 = r5.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.b(r0)
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.c()
            long r1 = r1 + r3
            android.content.SharedPreferences$Editor r6 = r6.putLong(r0, r1)
            r6.apply()
            return
    }

    private boolean c() {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.bh
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            boolean r1 = r3.d()
            if (r1 == 0) goto L30
            if (r0 == 0) goto L30
            com.xiaomi.push.q r0 = com.xiaomi.push.q.a
            java.lang.String r0 = r0.name()
            android.content.Context r1 = r3.a
            com.xiaomi.push.service.a r1 = com.xiaomi.push.service.a.a(r1)
            java.lang.String r1 = r1.a()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L30
            goto L31
        L30:
            r2 = 0
        L31:
            return r2
    }

    private void d(java.lang.String r7) {
            r6 = this;
            boolean r0 = r6.c()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto Le
            return
        Le:
            java.lang.String r0 = "W-"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L19
            java.lang.String r0 = "W"
            goto L23
        L19:
            java.lang.String r0 = "M-"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L90
            java.lang.String r0 = "M"
        L23:
            r1 = 235000(0x395f8, float:3.29305E-40)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r7)
            java.lang.String r7 = ":::"
            r3.append(r7)
            r3.append(r0)
            r3.append(r7)
            r3.append(r1)
            r3.append(r7)
            r3.append(r2)
            android.content.SharedPreferences r7 = r6.a
            java.lang.String r0 = com.xiaomi.push.service.o.a.f()
            r1 = 0
            java.lang.String r7 = r7.getString(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L67
            java.lang.String r7 = r3.toString()
            goto L7f
        L67:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            java.lang.String r7 = "###"
            r0.append(r7)
            java.lang.String r7 = r3.toString()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
        L7f:
            android.content.SharedPreferences r0 = r6.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = com.xiaomi.push.service.o.a.f()
            android.content.SharedPreferences$Editor r7 = r0.putString(r1, r7)
            r7.apply()
        L90:
            return
    }

    private boolean d() {
            r4 = this;
            long r0 = r4.b()
            long r2 = java.lang.System.currentTimeMillis()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 < 0) goto L10
            r0 = r1
            goto L11
        L10:
            r0 = r2
        L11:
            boolean r3 = r4.c
            if (r3 == 0) goto L1c
            boolean r3 = r4.b
            if (r3 != 0) goto L1d
            if (r0 == 0) goto L1c
            goto L1d
        L1c:
            r1 = r2
        L1d:
            return r1
    }

    private void e() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            java.lang.String r1 = com.xiaomi.push.service.o.a.a()
            r2 = 0
            boolean r0 = r0.getBoolean(r1, r2)
            if (r0 != 0) goto L1f
            android.content.SharedPreferences r0 = r3.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = com.xiaomi.push.service.o.a.a()
            r2 = 1
            android.content.SharedPreferences$Editor r0 = r0.putBoolean(r1, r2)
            r0.apply()
        L1f:
            return
    }

    private boolean e() {
            r7 = this;
            android.content.SharedPreferences r0 = r7.a
            java.lang.String r1 = com.xiaomi.push.service.o.a.c()
            r2 = -1
            long r0 = r0.getLong(r1, r2)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            if (r2 != 0) goto L12
            return r3
        L12:
            long r4 = java.lang.System.currentTimeMillis()
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r6 = 1
            if (r2 <= 0) goto L1c
            return r6
        L1c:
            long r4 = r4 - r0
            r0 = 259200000(0xf731400, double:1.280618154E-315)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L25
            return r6
        L25:
            return r3
    }

    private void f() {
            r6 = this;
            int r0 = r6.a
            r1 = 1
            if (r0 == 0) goto Le
            if (r0 == r1) goto L9
            r0 = 0
            goto L12
        L9:
            java.lang.String r0 = com.xiaomi.push.service.o.a.h()
            goto L12
        Le:
            java.lang.String r0 = com.xiaomi.push.service.o.a.g()
        L12:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L56
            android.content.SharedPreferences r2 = r6.a
            java.lang.String r3 = com.xiaomi.push.service.o.a.i()
            r4 = -1
            long r2 = r2.getLong(r3, r4)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L41
            long r2 = java.lang.System.currentTimeMillis()
            r6.a = r2
            android.content.SharedPreferences r2 = r6.a
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r3 = com.xiaomi.push.service.o.a.i()
            long r4 = r6.a
            android.content.SharedPreferences$Editor r2 = r2.putLong(r3, r4)
            r2.apply()
        L41:
            android.content.SharedPreferences r2 = r6.a
            r3 = 0
            int r2 = r2.getInt(r0, r3)
            android.content.SharedPreferences r3 = r6.a
            android.content.SharedPreferences$Editor r3 = r3.edit()
            int r2 = r2 + r1
            android.content.SharedPreferences$Editor r0 = r3.putInt(r0, r2)
            r0.apply()
        L56:
            return
    }

    private boolean f() {
            r7 = this;
            long r0 = r7.a
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r7.a
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            r6 = 1
            if (r0 <= 0) goto L16
            return r6
        L16:
            long r2 = r2 - r4
            r4 = 259200000(0xf731400, double:1.280618154E-315)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 < 0) goto L1f
            return r6
        L1f:
            return r1
    }

    private void g() {
            r17 = this;
            r0 = r17
            boolean r1 = r17.c()
            if (r1 == 0) goto L25c
            android.content.SharedPreferences r1 = r0.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.f()
            r3 = 0
            java.lang.String r1 = r1.getString(r2, r3)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r4 = "interval"
            java.lang.String r5 = "category_hb_change"
            java.lang.String r6 = "timestamp"
            java.lang.String r7 = "model"
            java.lang.String r8 = "net_type"
            r9 = 1
            java.lang.String r10 = "event"
            r11 = 0
            if (r2 != 0) goto L8f
            java.lang.String r2 = "###"
            java.lang.String[] r1 = r1.split(r2)
            if (r1 == 0) goto L8f
            r2 = r11
        L30:
            int r12 = r1.length
            if (r2 >= r12) goto L7e
            r12 = r1[r2]
            boolean r12 = android.text.TextUtils.isEmpty(r12)
            if (r12 != 0) goto L79
            r12 = r1[r2]
            java.lang.String r13 = ":::"
            java.lang.String[] r12 = r12.split(r13)
            if (r12 == 0) goto L79
            int r13 = r12.length
            r14 = 4
            if (r13 < r14) goto L79
            r13 = r12[r11]
            r14 = r12[r9]
            r15 = 2
            r15 = r12[r15]
            r16 = 3
            r12 = r12[r16]
            java.util.HashMap r9 = new java.util.HashMap
            r9.<init>()
            java.lang.String r11 = "change"
            r9.put(r10, r11)
            java.lang.String r11 = android.os.Build.MODEL
            r9.put(r7, r11)
            r9.put(r8, r14)
            java.lang.String r11 = "net_name"
            r9.put(r11, r13)
            r9.put(r4, r15)
            r9.put(r6, r12)
            r0.a(r5, r3, r9)
            java.lang.String r9 = "[HB] report hb changed events."
            com.xiaomi.channel.commonutils.logger.b.a(r9)
        L79:
            int r2 = r2 + 1
            r9 = 1
            r11 = 0
            goto L30
        L7e:
            android.content.SharedPreferences r1 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.f()
            android.content.SharedPreferences$Editor r1 = r1.remove(r2)
            r1.apply()
        L8f:
            android.content.SharedPreferences r1 = r0.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.a()
            r9 = 0
            boolean r1 = r1.getBoolean(r2, r9)
            if (r1 == 0) goto Ldf
            android.content.SharedPreferences r1 = r0.a
            java.lang.String r2 = com.xiaomi.push.service.o.a.b()
            boolean r1 = r1.getBoolean(r2, r9)
            if (r1 != 0) goto Ldf
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = "support"
            r1.put(r10, r2)
            java.lang.String r2 = android.os.Build.MODEL
            r1.put(r7, r2)
            long r11 = java.lang.System.currentTimeMillis()
            r13 = 1000(0x3e8, double:4.94E-321)
            long r11 = r11 / r13
            java.lang.String r2 = java.lang.String.valueOf(r11)
            r1.put(r6, r2)
            r0.a(r5, r3, r1)
            java.lang.String r1 = "[HB] report support wifi digest events."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            android.content.SharedPreferences r1 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.b()
            r3 = 1
            android.content.SharedPreferences$Editor r1 = r1.putBoolean(r2, r3)
            r1.apply()
        Ldf:
            boolean r1 = r17.e()
            java.lang.String r2 = "end_time"
            java.lang.String r3 = "start_time"
            if (r1 == 0) goto L189
            android.content.SharedPreferences r1 = r0.a
            java.lang.String r5 = com.xiaomi.push.service.o.a.d()
            r6 = 0
            int r1 = r1.getInt(r5, r6)
            android.content.SharedPreferences r5 = r0.a
            java.lang.String r7 = com.xiaomi.push.service.o.a.e()
            int r5 = r5.getInt(r7, r6)
            if (r1 > 0) goto L102
            if (r5 <= 0) goto L163
        L102:
            android.content.SharedPreferences r6 = r0.a
            java.lang.String r7 = com.xiaomi.push.service.o.a.c()
            r11 = -1
            long r6 = r6.getLong(r7, r11)
            r9 = 235000(0x395f8, float:3.29305E-40)
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r6 = java.lang.String.valueOf(r6)
            long r11 = java.lang.System.currentTimeMillis()
            java.lang.String r7 = java.lang.String.valueOf(r11)
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L163
            r11.<init>()     // Catch: java.lang.Throwable -> L163
            r11.put(r4, r9)     // Catch: java.lang.Throwable -> L163
            java.lang.String r4 = "c_short"
            java.lang.String r9 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L163
            r11.put(r4, r9)     // Catch: java.lang.Throwable -> L163
            java.lang.String r4 = "c_long"
            java.lang.String r9 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L163
            r11.put(r4, r9)     // Catch: java.lang.Throwable -> L163
            java.lang.String r4 = "count"
            int r1 = r1 + r5
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L163
            r11.put(r4, r1)     // Catch: java.lang.Throwable -> L163
            r11.put(r3, r6)     // Catch: java.lang.Throwable -> L163
            r11.put(r2, r7)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = r11.toString()     // Catch: java.lang.Throwable -> L163
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L163
            r4.<init>()     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = "long_and_short_hb_count"
            r4.put(r10, r5)     // Catch: java.lang.Throwable -> L163
            java.lang.String r5 = "category_hb_count"
            r0.a(r5, r1, r4)     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = "[HB] report short/long hb count events."
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L163
        L163:
            long r4 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences r1 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.lang.String r6 = com.xiaomi.push.service.o.a.d()
            r7 = 0
            android.content.SharedPreferences$Editor r1 = r1.putInt(r6, r7)
            java.lang.String r6 = com.xiaomi.push.service.o.a.e()
            android.content.SharedPreferences$Editor r1 = r1.putInt(r6, r7)
            java.lang.String r6 = com.xiaomi.push.service.o.a.c()
            android.content.SharedPreferences$Editor r1 = r1.putLong(r6, r4)
            r1.apply()
        L189:
            boolean r1 = r17.f()
            if (r1 == 0) goto L25c
            long r4 = r0.a
            java.lang.String r1 = java.lang.String.valueOf(r4)
            long r4 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            android.content.SharedPreferences r5 = r0.a
            java.lang.String r6 = com.xiaomi.push.service.o.a.g()
            r7 = 0
            int r5 = r5.getInt(r6, r7)
            java.lang.String r6 = "category_lc_ptc"
            java.lang.String r7 = "ptc_event"
            java.lang.String r9 = "ptc"
            if (r5 <= 0) goto L1fd
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1ea
            r11.<init>()     // Catch: java.lang.Throwable -> L1ea
            java.lang.String r12 = "M"
            r11.put(r8, r12)     // Catch: java.lang.Throwable -> L1ea
            r11.put(r9, r5)     // Catch: java.lang.Throwable -> L1ea
            r11.put(r3, r1)     // Catch: java.lang.Throwable -> L1ea
            r11.put(r2, r4)     // Catch: java.lang.Throwable -> L1ea
            java.lang.String r5 = r11.toString()     // Catch: java.lang.Throwable -> L1ea
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1ea
            r11.<init>()     // Catch: java.lang.Throwable -> L1ea
            r11.put(r10, r7)     // Catch: java.lang.Throwable -> L1ea
            r0.a(r6, r5, r11)     // Catch: java.lang.Throwable -> L1ea
            java.lang.String r5 = "[HB] report ping timeout count events of mobile network."
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L1ea
            android.content.SharedPreferences r5 = r0.a
            android.content.SharedPreferences$Editor r5 = r5.edit()
            java.lang.String r11 = com.xiaomi.push.service.o.a.g()
            r12 = 0
            android.content.SharedPreferences$Editor r5 = r5.putInt(r11, r12)
            r5.apply()
            goto L1fd
        L1ea:
            android.content.SharedPreferences r5 = r0.a
            android.content.SharedPreferences$Editor r5 = r5.edit()
            java.lang.String r11 = com.xiaomi.push.service.o.a.g()
            r12 = 0
            android.content.SharedPreferences$Editor r5 = r5.putInt(r11, r12)
            r5.apply()
            goto L1fe
        L1fd:
            r12 = 0
        L1fe:
            android.content.SharedPreferences r5 = r0.a
            java.lang.String r11 = com.xiaomi.push.service.o.a.h()
            int r5 = r5.getInt(r11, r12)
            if (r5 <= 0) goto L243
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L231
            r11.<init>()     // Catch: java.lang.Throwable -> L231
            java.lang.String r12 = "W"
            r11.put(r8, r12)     // Catch: java.lang.Throwable -> L231
            r11.put(r9, r5)     // Catch: java.lang.Throwable -> L231
            r11.put(r3, r1)     // Catch: java.lang.Throwable -> L231
            r11.put(r2, r4)     // Catch: java.lang.Throwable -> L231
            java.lang.String r1 = r11.toString()     // Catch: java.lang.Throwable -> L231
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L231
            r2.<init>()     // Catch: java.lang.Throwable -> L231
            r2.put(r10, r7)     // Catch: java.lang.Throwable -> L231
            r0.a(r6, r1, r2)     // Catch: java.lang.Throwable -> L231
            java.lang.String r1 = "[HB] report ping timeout count events of wifi network."
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L231
        L231:
            android.content.SharedPreferences r1 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.h()
            r3 = 0
            android.content.SharedPreferences$Editor r1 = r1.putInt(r2, r3)
            r1.apply()
        L243:
            long r1 = java.lang.System.currentTimeMillis()
            r0.a = r1
            android.content.SharedPreferences r1 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.i()
            long r3 = r0.a
            android.content.SharedPreferences$Editor r1 = r1.putLong(r2, r3)
            r1.apply()
        L25c:
            return
    }

    public long a() {
            r8 = this;
            int r0 = com.xiaomi.push.gc.b()
            long r0 = (long) r0
            boolean r2 = r8.c
            r3 = 1
            if (r2 == 0) goto L36
            boolean r2 = r8.b()
            if (r2 != 0) goto L36
            android.content.Context r2 = r8.a
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a(r2)
            com.xiaomi.push.ho r4 = com.xiaomi.push.ho.bg
            int r4 = r4.a()
            boolean r2 = r2.a(r4, r3)
            if (r2 != 0) goto L2e
            long r4 = r8.b()
            long r6 = java.lang.System.currentTimeMillis()
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 < 0) goto L36
        L2e:
            int r2 = r8.a()
            r4 = -1
            if (r2 == r4) goto L36
            long r0 = (long) r2
        L36:
            java.lang.String r2 = r8.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L58
            java.lang.String r2 = r8.a
            java.lang.String r4 = "WIFI-ID-UNKNOWN"
            boolean r2 = r4.equals(r2)
            if (r2 != 0) goto L58
            int r2 = r8.a
            if (r2 != r3) goto L58
            r4 = 300000(0x493e0, double:1.482197E-318)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 >= 0) goto L54
            goto L55
        L54:
            r3 = 0
        L55:
            r8.a(r3)
        L58:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "[HB] ping interval:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return r0
    }

    public void a() {
            r0 = this;
            return
    }

    public void a(int r5) {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            int r5 = r5 * 1000
            long r2 = (long) r5
            long r0 = r0 + r2
            android.content.SharedPreferences r5 = r4.a
            android.content.SharedPreferences$Editor r5 = r5.edit()
            java.lang.String r2 = com.xiaomi.push.service.o.a.j()
            android.content.SharedPreferences$Editor r5 = r5.putLong(r2, r0)
            r5.apply()
            return
    }

    public synchronized void a(android.net.NetworkInfo r5) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.d()     // Catch: java.lang.Throwable -> L5e
            if (r0 == 0) goto L5c
            r0 = -1
            r1 = 0
            if (r5 == 0) goto L58
            int r2 = r5.getType()     // Catch: java.lang.Throwable -> L5e
            if (r2 != 0) goto L3b
            java.lang.String r5 = r5.getSubtypeName()     // Catch: java.lang.Throwable -> L5e
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5e
            if (r0 != 0) goto L34
            java.lang.String r0 = "UNKNOWN"
            boolean r0 = r0.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L5e
            if (r0 != 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r0.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = "M-"
            r0.append(r1)     // Catch: java.lang.Throwable -> L5e
            r0.append(r5)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Throwable -> L5e
        L34:
            r4.b(r1)     // Catch: java.lang.Throwable -> L5e
            r5 = 0
            r4.a = r5     // Catch: java.lang.Throwable -> L5e
            goto L5c
        L3b:
            int r2 = r5.getType()     // Catch: java.lang.Throwable -> L5e
            r3 = 1
            if (r2 == r3) goto L50
            int r5 = r5.getType()     // Catch: java.lang.Throwable -> L5e
            r2 = 6
            if (r5 != r2) goto L4a
            goto L50
        L4a:
            r4.b(r1)     // Catch: java.lang.Throwable -> L5e
        L4d:
            r4.a = r0     // Catch: java.lang.Throwable -> L5e
            goto L5c
        L50:
            java.lang.String r5 = "WIFI-ID-UNKNOWN"
            r4.b(r5)     // Catch: java.lang.Throwable -> L5e
            r4.a = r3     // Catch: java.lang.Throwable -> L5e
            goto L5c
        L58:
            r4.b(r1)     // Catch: java.lang.Throwable -> L5e
            goto L4d
        L5c:
            monitor-exit(r4)
            return
        L5e:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public synchronized void a(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto La
            r2.e()     // Catch: java.lang.Throwable -> L2c
        La:
            boolean r0 = r2.d()     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r0.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "W-"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2c
            r0.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2c
            r2.b(r3)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r2)
            return
        L2c:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public void b() {
            r2 = this;
            boolean r0 = r2.d()
            if (r0 == 0) goto L68
            r2.f()
            boolean r0 = r2.a
            if (r0 == 0) goto L68
            java.lang.String r0 = r2.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L68
            java.lang.String r0 = r2.a
            java.lang.String r1 = r2.b
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L68
            java.util.concurrent.atomic.AtomicInteger r0 = r2.a
            r0.getAndIncrement()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[HB] ping timeout count:"
            r0.append(r1)
            java.util.concurrent.atomic.AtomicInteger r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            boolean r0 = r2.a()
            if (r0 == 0) goto L68
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[HB] change hb interval for net:"
            r0.append(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = r2.a
            r2.c(r0)
            r0 = 0
            r2.a = r0
            java.util.concurrent.atomic.AtomicInteger r1 = r2.a
            r1.getAndSet(r0)
            java.lang.String r0 = r2.a
            r2.d(r0)
        L68:
            return
    }

    public void c() {
            r1 = this;
            boolean r0 = r1.d()
            if (r0 == 0) goto La
            java.lang.String r0 = r1.a
            r1.b = r0
        La:
            return
    }

    public void d() {
            r2 = this;
            boolean r0 = r2.d()
            if (r0 == 0) goto L13
            r2.g()
            boolean r0 = r2.a
            if (r0 == 0) goto L13
            java.util.concurrent.atomic.AtomicInteger r0 = r2.a
            r1 = 0
            r0.getAndSet(r1)
        L13:
            return
    }
}
