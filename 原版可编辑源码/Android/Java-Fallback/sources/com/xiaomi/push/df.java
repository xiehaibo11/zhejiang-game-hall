package com.xiaomi.push;

public class df {
    private static volatile com.xiaomi.push.df a;
    private android.content.Context a;
    private final java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df.b> a;

    class a extends com.xiaomi.push.df.b {
        final com.xiaomi.push.df a;

        a(com.xiaomi.push.df r1) {
                r0 = this;
                r0.a = r1
                r0.<init>(r1)
                return
        }

        @Override
        public void b() {
                r1 = this;
                com.xiaomi.push.df r0 = r1.a
                com.xiaomi.push.df.a(r0)
                return
        }
    }

    class b extends com.xiaomi.push.ao.b {
        long a;
        final com.xiaomi.push.df b;

        b(com.xiaomi.push.df r3) {
                r2 = this;
                r2.b = r3
                r2.<init>()
                long r0 = java.lang.System.currentTimeMillis()
                r2.a = r0
                return
        }

        public boolean a() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public void b() {
                r0 = this;
                return
        }

        final boolean b() {
                r4 = this;
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r4.a
                long r0 = r0 - r2
                r2 = 172800000(0xa4cb800, double:8.53745436E-316)
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 <= 0) goto L10
                r0 = 1
                goto L11
            L10:
                r0 = 0
            L11:
                return r0
        }
    }

    class c extends com.xiaomi.push.df.b {
        int a;
        final com.xiaomi.push.df a;
        java.io.File a;
        java.lang.String a;
        boolean a;
        java.lang.String b;
        boolean b;

        c(com.xiaomi.push.df r1, java.lang.String r2, java.lang.String r3, java.io.File r4, boolean r5) {
                r0 = this;
                r0.a = r1
                r0.<init>(r1)
                r0.a = r2
                r0.b = r3
                r0.a = r4
                r0.b = r5
                return
        }

        private boolean c() {
                r12 = this;
                java.lang.String r0 = "times"
                java.lang.String r1 = "time"
                com.xiaomi.push.df r2 = r12.a
                android.content.Context r2 = com.xiaomi.push.df.a(r2)
                r3 = 0
                java.lang.String r4 = "log.timestamp"
                android.content.SharedPreferences r2 = r2.getSharedPreferences(r4, r3)
                java.lang.String r4 = "log.requst"
                java.lang.String r5 = ""
                java.lang.String r5 = r2.getString(r4, r5)
                long r6 = java.lang.System.currentTimeMillis()
                org.json.JSONObject r8 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2b
                r8.<init>(r5)     // Catch: org.json.JSONException -> L2b
                long r6 = r8.getLong(r1)     // Catch: org.json.JSONException -> L2b
                int r5 = r8.getInt(r0)     // Catch: org.json.JSONException -> L2b
                goto L2c
            L2b:
                r5 = r3
            L2c:
                long r8 = java.lang.System.currentTimeMillis()
                long r8 = r8 - r6
                r10 = 86400000(0x5265c00, double:4.2687272E-316)
                int r8 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
                if (r8 >= 0) goto L3f
                r8 = 10
                if (r5 <= r8) goto L3d
                return r3
            L3d:
                r3 = r5
                goto L43
            L3f:
                long r6 = java.lang.System.currentTimeMillis()
            L43:
                org.json.JSONObject r5 = new org.json.JSONObject
                r5.<init>()
                r8 = 1
                r5.put(r1, r6)     // Catch: org.json.JSONException -> L60
                int r3 = r3 + r8
                r5.put(r0, r3)     // Catch: org.json.JSONException -> L60
                android.content.SharedPreferences$Editor r0 = r2.edit()     // Catch: org.json.JSONException -> L60
                java.lang.String r1 = r5.toString()     // Catch: org.json.JSONException -> L60
                android.content.SharedPreferences$Editor r0 = r0.putString(r4, r1)     // Catch: org.json.JSONException -> L60
                r0.commit()     // Catch: org.json.JSONException -> L60
                goto L79
            L60:
                r0 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "JSONException on put "
                r1.append(r2)
                java.lang.String r0 = r0.getMessage()
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                com.xiaomi.channel.commonutils.logger.b.c(r0)
            L79:
                return r8
        }

        @Override
        public boolean a() {
                r1 = this;
                com.xiaomi.push.df r0 = r1.a
                android.content.Context r0 = com.xiaomi.push.df.a(r0)
                boolean r0 = com.xiaomi.push.bj.e(r0)
                if (r0 != 0) goto L1f
                boolean r0 = r1.b
                if (r0 == 0) goto L1d
                com.xiaomi.push.df r0 = r1.a
                android.content.Context r0 = com.xiaomi.push.df.a(r0)
                boolean r0 = com.xiaomi.push.bj.b(r0)
                if (r0 == 0) goto L1d
                goto L1f
            L1d:
                r0 = 0
                goto L20
            L1f:
                r0 = 1
            L20:
                return r0
        }

        @Override
        public void b() {
                r4 = this;
                boolean r0 = r4.c()     // Catch: java.io.IOException -> L36
                if (r0 == 0) goto L33
                java.util.HashMap r0 = new java.util.HashMap     // Catch: java.io.IOException -> L36
                r0.<init>()     // Catch: java.io.IOException -> L36
                java.lang.String r1 = "uid"
                java.lang.String r2 = com.xiaomi.push.service.bv.a()     // Catch: java.io.IOException -> L36
                r0.put(r1, r2)     // Catch: java.io.IOException -> L36
                java.lang.String r1 = "token"
                java.lang.String r2 = r4.b     // Catch: java.io.IOException -> L36
                r0.put(r1, r2)     // Catch: java.io.IOException -> L36
                java.lang.String r1 = "net"
                com.xiaomi.push.df r2 = r4.a     // Catch: java.io.IOException -> L36
                android.content.Context r2 = com.xiaomi.push.df.a(r2)     // Catch: java.io.IOException -> L36
                java.lang.String r2 = com.xiaomi.push.bj.a(r2)     // Catch: java.io.IOException -> L36
                r0.put(r1, r2)     // Catch: java.io.IOException -> L36
                java.lang.String r1 = r4.a     // Catch: java.io.IOException -> L36
                java.io.File r2 = r4.a     // Catch: java.io.IOException -> L36
                java.lang.String r3 = "file"
                com.xiaomi.push.bj.a(r1, r0, r2, r3)     // Catch: java.io.IOException -> L36
            L33:
                r0 = 1
                r4.a = r0     // Catch: java.io.IOException -> L36
            L36:
                return
        }

        @Override
        public void c() {
                r3 = this;
                boolean r0 = r3.a
                r1 = 3
                r2 = 1
                if (r0 != 0) goto L16
                int r0 = r3.a
                int r0 = r0 + r2
                r3.a = r0
                if (r0 >= r1) goto L16
                com.xiaomi.push.df r0 = r3.a
                java.util.concurrent.ConcurrentLinkedQueue r0 = com.xiaomi.push.df.a(r0)
                r0.add(r3)
            L16:
                boolean r0 = r3.a
                if (r0 != 0) goto L1e
                int r0 = r3.a
                if (r0 < r1) goto L23
            L1e:
                java.io.File r0 = r3.a
                r0.delete()
            L23:
                com.xiaomi.push.df r0 = r3.a
                int r1 = r3.a
                int r1 = r2 << r1
                int r1 = r1 * 1000
                long r1 = (long) r1
                com.xiaomi.push.df.a(r0, r1)
                return
        }
    }

    static {
            return
    }

    private df(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentLinkedQueue r0 = new java.util.concurrent.ConcurrentLinkedQueue
            r0.<init>()
            r2.a = r0
            r2.a = r3
            com.xiaomi.push.df$a r3 = new com.xiaomi.push.df$a
            r3.<init>(r2)
            r0.add(r3)
            r0 = 0
            r2.b(r0)
            return
    }

    static android.content.Context a(com.xiaomi.push.df r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.xiaomi.push.df a(android.content.Context r2) {
            com.xiaomi.push.df r0 = com.xiaomi.push.df.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.df> r0 = com.xiaomi.push.df.class
            monitor-enter(r0)
            com.xiaomi.push.df r1 = com.xiaomi.push.df.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.df r1 = new com.xiaomi.push.df     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.df.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.df r0 = com.xiaomi.push.df.a
            r0.a = r2
            com.xiaomi.push.df r2 = com.xiaomi.push.df.a
            return r2
    }

    static java.util.concurrent.ConcurrentLinkedQueue a(com.xiaomi.push.df r0) {
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r0 = r0.a
            return r0
    }

    private void a(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r0 = r1.a
            java.lang.Object r0 = r0.peek()
            com.xiaomi.push.df$b r0 = (com.xiaomi.push.df.b) r0
            if (r0 == 0) goto L13
            boolean r0 = r0.a()
            if (r0 == 0) goto L13
            r1.b(r2)
        L13:
            return
    }

    static void a(com.xiaomi.push.df r0) {
            r0.b()
            return
    }

    static void a(com.xiaomi.push.df r0, long r1) {
            r0.a(r1)
            return
    }

    private void b() {
            r4 = this;
            boolean r0 = com.xiaomi.push.ad.b()
            if (r0 != 0) goto L46
            boolean r0 = com.xiaomi.push.ad.a()
            if (r0 == 0) goto Ld
            goto L46
        Ld:
            java.io.File r0 = new java.io.File     // Catch: java.lang.NullPointerException -> L46
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NullPointerException -> L46
            r1.<init>()     // Catch: java.lang.NullPointerException -> L46
            android.content.Context r2 = r4.a     // Catch: java.lang.NullPointerException -> L46
            r3 = 0
            java.io.File r2 = r2.getExternalFilesDir(r3)     // Catch: java.lang.NullPointerException -> L46
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L46
            java.lang.String r2 = "/.logcache"
            r1.append(r2)     // Catch: java.lang.NullPointerException -> L46
            java.lang.String r1 = r1.toString()     // Catch: java.lang.NullPointerException -> L46
            r0.<init>(r1)     // Catch: java.lang.NullPointerException -> L46
            boolean r1 = r0.exists()     // Catch: java.lang.NullPointerException -> L46
            if (r1 == 0) goto L46
            boolean r1 = r0.isDirectory()     // Catch: java.lang.NullPointerException -> L46
            if (r1 == 0) goto L46
            java.io.File[] r0 = r0.listFiles()     // Catch: java.lang.NullPointerException -> L46
            int r1 = r0.length     // Catch: java.lang.NullPointerException -> L46
            r2 = 0
        L3c:
            if (r2 >= r1) goto L46
            r3 = r0[r2]     // Catch: java.lang.NullPointerException -> L46
            r3.delete()     // Catch: java.lang.NullPointerException -> L46
            int r2 = r2 + 1
            goto L3c
        L46:
            return
    }

    private void b(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r0 = r1.a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L10
            com.xiaomi.push.dh r0 = new com.xiaomi.push.dh
            r0.<init>(r1)
            com.xiaomi.push.gz.a(r0, r2)
        L10:
            return
    }

    private void c() {
            r3 = this;
        L0:
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r0 = r3.a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2c
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r0 = r3.a
            java.lang.Object r0 = r0.peek()
            com.xiaomi.push.df$b r0 = (com.xiaomi.push.df.b) r0
            if (r0 == 0) goto L0
            boolean r1 = r0.b()
            if (r1 != 0) goto L21
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r1 = r3.a
            int r1 = r1.size()
            r2 = 6
            if (r1 <= r2) goto L2c
        L21:
            java.lang.String r1 = "remove Expired task"
            com.xiaomi.channel.commonutils.logger.b.c(r1)
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r1 = r3.a
            r1.remove(r0)
            goto L0
        L2c:
            return
    }

    public void a() {
            r2 = this;
            r2.c()
            r0 = 0
            r2.a(r0)
            return
    }

    public void a(java.lang.String r12, java.lang.String r13, java.util.Date r14, java.util.Date r15, int r16, boolean r17) {
            r11 = this;
            r8 = r11
            java.util.concurrent.ConcurrentLinkedQueue<com.xiaomi.push.df$b> r9 = r8.a
            com.xiaomi.push.dg r10 = new com.xiaomi.push.dg
            r0 = r10
            r1 = r11
            r2 = r16
            r3 = r14
            r4 = r15
            r5 = r12
            r6 = r13
            r7 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r9.add(r10)
            r0 = 0
            r11.b(r0)
            return
    }
}
