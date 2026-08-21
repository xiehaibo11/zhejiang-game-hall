package com.alipay.sdk.tid;

public class b {
    public static final java.lang.String a = "alipay_tid_storage";
    public static final java.lang.String b = "tidinfo";
    public static final java.lang.String c = "upgraded_from_db";
    public static final java.lang.String d = "tid";
    public static final java.lang.String e = "client_key";
    public static final java.lang.String f = "timestamp";
    public static final java.lang.String g = "vimei";
    public static final java.lang.String h = "vimsi";
    private static android.content.Context i;
    private static com.alipay.sdk.tid.b o;
    private java.lang.String j;
    private java.lang.String k;
    private long l;
    private java.lang.String m;
    private java.lang.String n;
    private boolean p;

    public static class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        private static java.lang.String a() {
                java.lang.String r0 = "!@#23457"
                return r0
        }

        public static java.lang.String a(java.lang.String r6, java.lang.String r7, boolean r8) {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r2 = 0
                android.content.SharedPreferences r0 = r0.getSharedPreferences(r6, r2)
                java.lang.String r0 = r0.getString(r7, r1)
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                java.lang.String r3 = "TidStorage"
                if (r1 != 0) goto L57
                if (r8 == 0) goto L57
                java.lang.String r8 = b()
                java.lang.String r1 = com.alipay.sdk.encrypt.b.b(r0, r8)
                boolean r4 = android.text.TextUtils.isEmpty(r1)
                r5 = 1
                if (r4 == 0) goto L3f
                java.lang.String r1 = a()
                java.lang.String r1 = com.alipay.sdk.encrypt.b.b(r0, r1)
                boolean r4 = android.text.TextUtils.isEmpty(r1)
                if (r4 != 0) goto L3f
                a(r6, r7, r1, r5)
            L3f:
                boolean r6 = android.text.TextUtils.isEmpty(r1)
                if (r6 == 0) goto L58
                r6 = 2
                java.lang.Object[] r6 = new java.lang.Object[r6]
                r6[r2] = r0
                r6[r5] = r8
                java.lang.String r7 = "LocalPreference::getLocalPreferences failed %s，%s"
                java.lang.String.format(r7, r6)
                java.lang.String r6 = "TidStorage.save LocalPreference::getLocalPreferences failed"
                com.alipay.sdk.util.c.b(r3, r6)
                goto L58
            L57:
                r1 = r0
            L58:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r7 = "TidStorage.save LocalPreference::getLocalPreferences value "
                r6.append(r7)
                r6.append(r0)
                java.lang.String r6 = r6.toString()
                com.alipay.sdk.util.c.b(r3, r6)
                return r1
        }

        public static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                r0 = 1
                a(r1, r2, r3, r0)
                return
        }

        public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                if (r0 != 0) goto L7
                return
            L7:
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r1 = 0
                android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)
                if (r6 == 0) goto L2e
                java.lang.String r6 = b()
                java.lang.String r0 = com.alipay.sdk.encrypt.b.a(r5, r6)
                boolean r2 = android.text.TextUtils.isEmpty(r0)
                if (r2 == 0) goto L2d
                r2 = 2
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r2[r1] = r5
                r5 = 1
                r2[r5] = r6
                java.lang.String r5 = "LocalPreference::putLocalPreferences failed %s，%s"
                java.lang.String.format(r5, r2)
            L2d:
                r5 = r0
            L2e:
                android.content.SharedPreferences$Editor r3 = r3.edit()
                android.content.SharedPreferences$Editor r3 = r3.putString(r4, r5)
                r3.apply()
                return
        }

        public static boolean a(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                boolean r2 = r2.contains(r3)
                return r2
        }

        private static java.lang.String b() {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()     // Catch: java.lang.Throwable -> Ld
                android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> Ld
                java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> Ld
                goto L13
            Ld:
                r0 = move-exception
                com.alipay.sdk.util.c.a(r0)
                java.lang.String r0 = ""
            L13:
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto L1b
                java.lang.String r0 = "unknow"
            L1b:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = "00000000"
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r1 = 0
                r2 = 8
                java.lang.String r0 = r0.substring(r1, r2)
                return r0
        }

        public static void b(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                if (r0 != 0) goto L7
                return
            L7:
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r1 = 0
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                android.content.SharedPreferences$Editor r2 = r2.edit()
                android.content.SharedPreferences$Editor r2 = r2.remove(r3)
                r2.apply()
                return
        }

        public static java.lang.String c(java.lang.String r1, java.lang.String r2) {
                r0 = 1
                java.lang.String r1 = a(r1, r2, r0)
                return r1
        }

        public static boolean d(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.tid.b.j()
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                boolean r2 = r2.contains(r3)
                return r2
        }
    }

    static {
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.p = r0
            return
    }

    public static synchronized com.alipay.sdk.tid.b a(android.content.Context r3) {
            java.lang.Class<com.alipay.sdk.tid.b> r0 = com.alipay.sdk.tid.b.class
            monitor-enter(r0)
            com.alipay.sdk.tid.b r1 = com.alipay.sdk.tid.b.o     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L15
            java.lang.String r1 = "TidStorage"
            java.lang.String r2 = "getInstance"
            com.alipay.sdk.util.c.b(r1, r2)     // Catch: java.lang.Throwable -> L22
            com.alipay.sdk.tid.b r1 = new com.alipay.sdk.tid.b     // Catch: java.lang.Throwable -> L22
            r1.<init>()     // Catch: java.lang.Throwable -> L22
            com.alipay.sdk.tid.b.o = r1     // Catch: java.lang.Throwable -> L22
        L15:
            android.content.Context r1 = com.alipay.sdk.tid.b.i     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L1e
            com.alipay.sdk.tid.b r1 = com.alipay.sdk.tid.b.o     // Catch: java.lang.Throwable -> L22
            r1.b(r3)     // Catch: java.lang.Throwable -> L22
        L1e:
            com.alipay.sdk.tid.b r3 = com.alipay.sdk.tid.b.o     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)
            return r3
        L22:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.Long r6) {
            r1 = this;
            boolean r0 = r1.a(r2, r3, r4, r5)
            if (r0 == 0) goto L7
            return
        L7:
            r1.j = r2
            r1.k = r3
            r1.m = r4
            r1.n = r5
            if (r6 != 0) goto L18
            long r2 = java.lang.System.currentTimeMillis()
            r1.l = r2
            goto L1e
        L18:
            long r2 = r6.longValue()
            r1.l = r2
        L1e:
            r1.p()
            return
    }

    private boolean a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L19
            goto L1b
        L19:
            r1 = 0
            goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    private void b(android.content.Context r3) {
            r2 = this;
            if (r3 == 0) goto Lf
            java.lang.String r0 = "TidStorage"
            java.lang.String r1 = "TidStorage.initialize context != null"
            com.alipay.sdk.util.c.b(r0, r1)
            android.content.Context r3 = r3.getApplicationContext()
            com.alipay.sdk.tid.b.i = r3
        Lf:
            boolean r3 = r2.p
            if (r3 == 0) goto L14
            return
        L14:
            r3 = 1
            r2.p = r3
            r2.k()
            r2.l()
            return
    }

    static android.content.Context j() {
            android.content.Context r0 = com.alipay.sdk.tid.b.i
            return r0
    }

    private void k() {
            r10 = this;
            android.content.Context r0 = com.alipay.sdk.tid.b.i
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = "upgraded_from_db"
            java.lang.String r2 = "alipay_tid_storage"
            boolean r3 = com.alipay.sdk.tid.b.a.d(r2, r1)
            java.lang.String r4 = "TidStorage"
            if (r3 == 0) goto L17
            java.lang.String r0 = "transferTidFromOldDb: already migrated. returning"
            com.alipay.sdk.util.c.b(r4, r0)
            return
        L17:
            r3 = 0
            java.lang.String r5 = "transferTidFromOldDb: tid from db: "
            com.alipay.sdk.util.c.b(r4, r5)     // Catch: java.lang.Throwable -> L6b
            com.alipay.sdk.tid.a r5 = new com.alipay.sdk.tid.a     // Catch: java.lang.Throwable -> L6b
            r5.<init>(r0)     // Catch: java.lang.Throwable -> L6b
            com.alipay.sdk.util.a r3 = com.alipay.sdk.util.a.a(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = r3.b()     // Catch: java.lang.Throwable -> L69
            com.alipay.sdk.util.a r6 = com.alipay.sdk.util.a.a(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r6 = r6.a()     // Catch: java.lang.Throwable -> L69
            java.lang.String r7 = r5.a(r3, r6)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = r5.b(r3, r6)     // Catch: java.lang.Throwable -> L69
            boolean r6 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L69
            if (r6 != 0) goto L65
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L69
            if (r6 != 0) goto L65
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r6.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.String r8 = "transferTidFromOldDb: tid from db is "
            r6.append(r8)     // Catch: java.lang.Throwable -> L69
            r6.append(r7)     // Catch: java.lang.Throwable -> L69
            java.lang.String r8 = ", "
            r6.append(r8)     // Catch: java.lang.Throwable -> L69
            r6.append(r3)     // Catch: java.lang.Throwable -> L69
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L69
            com.alipay.sdk.util.c.b(r4, r6)     // Catch: java.lang.Throwable -> L69
            r10.a(r7, r3)     // Catch: java.lang.Throwable -> L69
        L65:
            r5.close()
            goto L75
        L69:
            r3 = move-exception
            goto L6f
        L6b:
            r5 = move-exception
            r9 = r5
            r5 = r3
            r3 = r9
        L6f:
            com.alipay.sdk.util.c.a(r3)     // Catch: java.lang.Throwable -> La0
            if (r5 == 0) goto L75
            goto L65
        L75:
            java.lang.String r3 = "transferTidFromOldDb: removing database table"
            com.alipay.sdk.util.c.b(r4, r3)     // Catch: java.lang.Throwable -> L89
            com.alipay.sdk.tid.a r3 = new com.alipay.sdk.tid.a     // Catch: java.lang.Throwable -> L89
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L89
            r3.a()     // Catch: java.lang.Throwable -> L86
            r3.close()
            goto L92
        L86:
            r0 = move-exception
            r5 = r3
            goto L8a
        L89:
            r0 = move-exception
        L8a:
            com.alipay.sdk.util.c.a(r0)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L92
            r5.close()
        L92:
            r0 = 0
            java.lang.String r3 = "updated"
            com.alipay.sdk.tid.b.a.a(r2, r1, r3, r0)
            return
        L99:
            r0 = move-exception
            if (r5 == 0) goto L9f
            r5.close()
        L9f:
            throw r0
        La0:
            r0 = move-exception
            if (r5 == 0) goto La6
            r5.close()
        La6:
            goto La8
        La7:
            throw r0
        La8:
            goto La7
    }

    private void l() {
            r9 = this;
            java.lang.String r0 = ""
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 0
            java.lang.String r3 = "alipay_tid_storage"
            java.lang.String r4 = "tidinfo"
            r5 = 1
            java.lang.String r3 = com.alipay.sdk.tid.b.a.a(r3, r4, r5)     // Catch: java.lang.Exception -> L52
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L52
            if (r4 != 0) goto L4e
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L52
            r4.<init>(r3)     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = "tid"
            java.lang.String r3 = r4.optString(r3, r0)     // Catch: java.lang.Exception -> L52
            java.lang.String r5 = "client_key"
            java.lang.String r5 = r4.optString(r5, r0)     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = "timestamp"
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L48
            long r6 = r4.optLong(r6, r7)     // Catch: java.lang.Exception -> L48
            java.lang.Long r1 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L48
            java.lang.String r6 = "vimei"
            java.lang.String r6 = r4.optString(r6, r0)     // Catch: java.lang.Exception -> L48
            java.lang.String r7 = "vimsi"
            java.lang.String r0 = r4.optString(r7, r0)     // Catch: java.lang.Exception -> L46
            goto L5a
        L46:
            r0 = move-exception
            goto L56
        L48:
            r0 = move-exception
            r6 = r2
            goto L56
        L4b:
            r0 = move-exception
            r5 = r2
            goto L55
        L4e:
            r0 = r2
            r5 = r0
            r6 = r5
            goto L5b
        L52:
            r0 = move-exception
            r3 = r2
            r5 = r3
        L55:
            r6 = r5
        L56:
            com.alipay.sdk.util.c.a(r0)
            r0 = r2
        L5a:
            r2 = r3
        L5b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "TidStorage.load "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = " "
            r3.append(r4)
            r3.append(r5)
            r3.append(r4)
            r3.append(r1)
            r3.append(r4)
            r3.append(r6)
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "TidStorage"
            com.alipay.sdk.util.c.b(r4, r3)
            boolean r3 = r9.a(r2, r5, r6, r0)
            if (r3 == 0) goto L95
            r9.m()
            goto La3
        L95:
            r9.j = r2
            r9.k = r5
            long r1 = r1.longValue()
            r9.l = r1
            r9.m = r6
            r9.n = r0
        La3:
            return
    }

    private void m() {
            r2 = this;
            java.lang.String r0 = ""
            r2.j = r0
            java.lang.String r0 = r2.f()
            r2.k = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.l = r0
            java.lang.String r0 = r2.n()
            r2.m = r0
            java.lang.String r0 = r2.n()
            r2.n = r0
            java.lang.String r0 = "alipay_tid_storage"
            java.lang.String r1 = "tidinfo"
            com.alipay.sdk.tid.b.a.b(r0, r1)
            return
    }

    private java.lang.String n() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r0 = 9000(0x2328, float:1.2612E-41)
            int r0 = r1.nextInt(r0)
            int r0 = r0 + 1000
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    private void o() {
            r0 = this;
            return
    }

    private void p() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L35
            r0.<init>()     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "tid"
            java.lang.String r2 = r4.j     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "client_key"
            java.lang.String r2 = r4.k     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "timestamp"
            long r2 = r4.l     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "vimei"
            java.lang.String r2 = r4.m     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "vimsi"
            java.lang.String r2 = r4.n     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "alipay_tid_storage"
            java.lang.String r2 = "tidinfo"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L35
            r3 = 1
            com.alipay.sdk.tid.b.a.a(r1, r2, r0, r3)     // Catch: java.lang.Exception -> L35
            goto L39
        L35:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L39:
            return
    }

    public java.lang.String a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TidStorage.getTid "
            r0.append(r1)
            java.lang.String r1 = r2.j
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            java.lang.String r0 = r2.j
            return r0
    }

    public void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "tid="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ",clientKey="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TidStorage.save "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L4c
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L3c
            goto L4c
        L3c:
            r3.j = r4
            r3.k = r5
            long r4 = java.lang.System.currentTimeMillis()
            r3.l = r4
            r3.p()
            r3.o()
        L4c:
            return
    }

    public java.lang.String b() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TidStorage.getClientKey "
            r0.append(r1)
            java.lang.String r1 = r2.k
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            java.lang.String r0 = r2.k
            return r0
    }

    public java.lang.String c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TidStorage.getVirtualImei "
            r0.append(r1)
            java.lang.String r1 = r2.m
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            java.lang.String r0 = r2.m
            return r0
    }

    public java.lang.String d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TidStorage.getVirtualImsi "
            r0.append(r1)
            java.lang.String r1 = r2.n
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            java.lang.String r0 = r2.n
            return r0
    }

    public boolean e() {
            r1 = this;
            java.lang.String r0 = r1.j
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.n
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L23
        L21:
            r0 = 0
            goto L24
        L23:
            r0 = 1
        L24:
            return r0
    }

    public java.lang.String f() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            int r1 = r0.length()
            r2 = 10
            if (r1 <= r2) goto L19
            int r1 = r0.length()
            int r1 = r1 - r2
            java.lang.String r0 = r0.substring(r1)
        L19:
            return r0
    }

    public void g() {
            r3 = this;
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.j
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.k
            r2 = 1
            r0[r2] = r1
            long r1 = r3.l
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = r3.m
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = r3.n
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "TidStorage::delete > %s，%s，%s，%s，%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TidStorage.delete "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "TidStorage"
            com.alipay.sdk.util.c.b(r1, r0)
            r3.m()
            return
    }

    public boolean h() {
            r1 = this;
            boolean r0 = r1.e()
            return r0
    }

    public java.lang.Long i() {
            r2 = this;
            long r0 = r2.l
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }
}
