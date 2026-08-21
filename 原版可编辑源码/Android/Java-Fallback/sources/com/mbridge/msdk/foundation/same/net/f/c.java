package com.mbridge.msdk.foundation.same.net.f;

public final class c {
    private final java.lang.String a;
    private int b;
    private java.util.ArrayList<java.lang.Integer> c;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c.a> d;

    static class 1 {
    }

    private static class a {
        public long a;
        public int b;
        public java.lang.String c;

        public a(long r1, int r3, java.lang.String r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                r0.c = r4
                return
        }
    }

    private static class b {
        private static final com.mbridge.msdk.foundation.same.net.f.c a = null;

        static {
                com.mbridge.msdk.foundation.same.net.f.c r0 = new com.mbridge.msdk.foundation.same.net.f.c
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.same.net.f.c.b.a = r0
                return
        }

        static com.mbridge.msdk.foundation.same.net.f.c a() {
                com.mbridge.msdk.foundation.same.net.f.c r0 = com.mbridge.msdk.foundation.same.net.f.c.b.a
                return r0
        }
    }

    private c() {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "IDErrorUtil"
            r4.a = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.c = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r4.d = r1
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.a r1 = r1.b(r2)
            if (r1 != 0) goto L2f
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r1 = r1.b()
        L2f:
            int r2 = r1.aU()
            int r2 = r2 * 1000
            r4.b = r2
            java.util.ArrayList r2 = r1.aV()
            if (r2 == 0) goto L57
            java.util.ArrayList r2 = r1.aV()
            int r2 = r2.size()
            if (r2 <= 0) goto L57
            java.lang.String r2 = "Setting ercd not EMPTY will use setting."
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            java.util.ArrayList<java.lang.Integer> r0 = r4.c
            java.util.ArrayList r1 = r1.aV()
            r0.addAll(r1)
            goto L128
        L57:
            java.lang.String r1 = "Setting ercd is EMPTY and use default code list."
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            java.util.ArrayList<java.lang.Integer> r0 = r4.c
            r1 = 20
            java.lang.Integer[] r1 = new java.lang.Integer[r1]
            r2 = 0
            r3 = -1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 1
            r3 = -10
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 2
            r3 = -1201(0xfffffffffffffb4f, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 3
            r3 = -1202(0xfffffffffffffb4e, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 4
            r3 = -1203(0xfffffffffffffb4d, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 5
            r3 = -1205(0xfffffffffffffb4b, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 6
            r3 = -1206(0xfffffffffffffb4a, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 7
            r3 = -1208(0xfffffffffffffb48, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 8
            r3 = -1301(0xfffffffffffffaeb, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 9
            r3 = -1302(0xfffffffffffffaea, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 10
            r3 = -1305(0xfffffffffffffae7, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 11
            r3 = -1306(0xfffffffffffffae6, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 12
            r3 = -1307(0xfffffffffffffae5, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 13
            r3 = -1915(0xfffffffffffff885, float:NaN)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 14
            r3 = 10602(0x296a, float:1.4857E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 15
            r3 = 10603(0x296b, float:1.4858E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 16
            r3 = 10604(0x296c, float:1.486E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 17
            r3 = 10609(0x2971, float:1.4866E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 18
            r3 = 10610(0x2972, float:1.4868E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 19
            r3 = 10616(0x2978, float:1.4876E-41)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.addAll(r1)
        L128:
            return
    }

    c(com.mbridge.msdk.foundation.same.net.f.c.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private synchronized com.mbridge.msdk.foundation.same.net.f.c.a a(java.lang.String r8) {
            r7 = this;
            monitor-enter(r7)
            java.lang.String r0 = "IDErrorUtil"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            r1.<init>()     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = "getErrorInfo : "
            r1.append(r2)     // Catch: java.lang.Throwable -> La5
            r1.append(r8)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> La5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r0 = r7.d     // Catch: java.lang.Throwable -> La5
            boolean r0 = r0.containsKey(r8)     // Catch: java.lang.Throwable -> La5
            r1 = 0
            if (r0 == 0) goto La3
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r0 = r7.d     // Catch: java.lang.Throwable -> La5
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.same.net.f.c$a r0 = (com.mbridge.msdk.foundation.same.net.f.c.a) r0     // Catch: java.lang.Throwable -> La5
            if (r0 == 0) goto La3
            int r2 = r0.b     // Catch: java.lang.Throwable -> La5
            r3 = -1
            if (r2 != r3) goto L31
            monitor-exit(r7)
            return r0
        L31:
            long r2 = r0.a     // Catch: java.lang.Throwable -> La5
            int r4 = r7.b     // Catch: java.lang.Throwable -> La5
            long r4 = (long) r4     // Catch: java.lang.Throwable -> La5
            long r2 = r2 + r4
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 <= 0) goto L89
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r0 = r7.d     // Catch: java.lang.Throwable -> La5
            r0.remove(r8)     // Catch: java.lang.Throwable -> La5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r8 = r7.d     // Catch: java.lang.Throwable -> La5
            int r8 = r8.size()     // Catch: java.lang.Throwable -> La5
            if (r8 <= 0) goto L87
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r8 = r7.d     // Catch: java.lang.Throwable -> La5
            java.util.Set r8 = r8.entrySet()     // Catch: java.lang.Throwable -> La5
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> La5
        L56:
            boolean r0 = r8.hasNext()     // Catch: java.lang.Throwable -> La5
            if (r0 == 0) goto L87
            java.lang.String r0 = "IDErrorUtil"
            java.lang.String r2 = "getErrorInfo : delete timeout entry"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.Object r0 = r8.next()     // Catch: java.lang.Throwable -> La5
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> La5
            java.lang.Object r2 = r0.getValue()     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.same.net.f.c$a r2 = (com.mbridge.msdk.foundation.same.net.f.c.a) r2     // Catch: java.lang.Throwable -> La5
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La5
            long r5 = r2.a     // Catch: java.lang.Throwable -> La5
            long r3 = r3 - r5
            int r2 = r7.b     // Catch: java.lang.Throwable -> La5
            long r5 = (long) r2     // Catch: java.lang.Throwable -> La5
            int r2 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r2 <= 0) goto L56
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r2 = r7.d     // Catch: java.lang.Throwable -> La5
            java.lang.Object r0 = r0.getKey()     // Catch: java.lang.Throwable -> La5
            r2.remove(r0)     // Catch: java.lang.Throwable -> La5
            goto L56
        L87:
            monitor-exit(r7)
            return r1
        L89:
            java.lang.String r8 = "IDErrorUtil"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            r1.<init>()     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = "getErrorInfo : "
            r1.append(r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r0.c     // Catch: java.lang.Throwable -> La5
            r1.append(r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La5
            com.mbridge.msdk.foundation.tools.z.d(r8, r1)     // Catch: java.lang.Throwable -> La5
            monitor-exit(r7)
            return r0
        La3:
            monitor-exit(r7)
            return r1
        La5:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public static com.mbridge.msdk.foundation.same.net.f.c a() {
            com.mbridge.msdk.foundation.same.net.f.c r0 = com.mbridge.msdk.foundation.same.net.f.c.b.a()
            return r0
    }

    public final com.mbridge.msdk.foundation.same.net.k a(com.mbridge.msdk.foundation.same.net.g.d r11) {
            r10 = this;
            java.util.Map r0 = r11.b()
            java.lang.String r1 = "app_id"
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            java.util.Map r1 = r11.b()
            java.lang.String r2 = "placement_id"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map r2 = r11.b()
            java.lang.String r3 = "unit_id"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Map r3 = r11.b()
            java.lang.String r4 = "ad_type"
            java.lang.Object r3 = r3.get(r4)
            java.lang.String r3 = (java.lang.String) r3
            java.util.Map r11 = r11.b()
            java.lang.String r4 = "token"
            java.lang.Object r11 = r11.get(r4)
            java.lang.String r11 = (java.lang.String) r11
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r5 = "_"
            r4.append(r5)
            r4.append(r1)
            r4.append(r5)
            r4.append(r2)
            r4.append(r5)
            r4.append(r3)
            java.lang.String r1 = r4.toString()
            com.mbridge.msdk.foundation.same.net.f.c$a r4 = r10.a(r1)
            java.lang.String r5 = "IDErrorUtil"
            r6 = 0
            if (r4 == 0) goto Le5
            java.lang.String r7 = r4.c
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto Le5
            int r7 = r4.b     // Catch: java.lang.Exception -> Ldd
            r8 = -1
            r9 = 200(0xc8, float:2.8E-43)
            if (r7 == r8) goto L8b
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r4.c     // Catch: java.lang.Exception -> Ldd
            r11.<init>(r0)     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.foundation.same.net.e.c r0 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.lang.Exception -> Ldd
            java.lang.String r1 = r4.c     // Catch: java.lang.Exception -> Ldd
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Ldd
            r0.<init>(r9, r1, r6)     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.foundation.same.net.k r11 = com.mbridge.msdk.foundation.same.net.k.a(r11, r0)     // Catch: java.lang.Exception -> Ldd
            return r11
        L8b:
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Ldd
            if (r11 != 0) goto L92
            return r6
        L92:
            if (r3 == 0) goto Le5
            boolean r11 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Ldd
            if (r11 != 0) goto Le5
            int r11 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> Ldd
            r3 = 287(0x11f, float:4.02E-43)
            if (r11 == r3) goto Le5
            r3 = 94
            if (r11 == r3) goto Le5
            com.mbridge.msdk.c.b r11 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.c.d r11 = r11.d(r0, r2)     // Catch: java.lang.Exception -> Ldd
            int r11 = r11.w()     // Catch: java.lang.Exception -> Ldd
            int r11 = r11 * 1000
            long r2 = (long) r11     // Catch: java.lang.Exception -> Ldd
            long r7 = r4.a     // Catch: java.lang.Exception -> Ldd
            long r2 = r2 + r7
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ldd
            int r11 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r11 >= 0) goto Ld7
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ldd
            java.lang.String r0 = r4.c     // Catch: java.lang.Exception -> Ldd
            r11.<init>(r0)     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.foundation.same.net.e.c r0 = new com.mbridge.msdk.foundation.same.net.e.c     // Catch: java.lang.Exception -> Ldd
            java.lang.String r1 = r4.c     // Catch: java.lang.Exception -> Ldd
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Ldd
            r0.<init>(r9, r1, r6)     // Catch: java.lang.Exception -> Ldd
            com.mbridge.msdk.foundation.same.net.k r11 = com.mbridge.msdk.foundation.same.net.k.a(r11, r0)     // Catch: java.lang.Exception -> Ldd
            return r11
        Ld7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r11 = r10.d     // Catch: java.lang.Exception -> Ldd
            r11.remove(r1)     // Catch: java.lang.Exception -> Ldd
            return r6
        Ldd:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r11)
        Le5:
            java.lang.String r11 = "getErrorInfo RETURN NULL"
            com.mbridge.msdk.foundation.tools.z.d(r5, r11)
            return r6
    }

    public final synchronized void a(java.lang.String r4, int r5, java.lang.String r6, long r7) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r0 = r3.d     // Catch: java.lang.Throwable -> L49
            boolean r0 = r0.containsKey(r4)     // Catch: java.lang.Throwable -> L49
            if (r0 == 0) goto Lb
            monitor-exit(r3)
            return
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L49
            if (r0 == 0) goto L13
            monitor-exit(r3)
            return
        L13:
            java.util.ArrayList<java.lang.Integer> r0 = r3.c     // Catch: java.lang.Throwable -> L49
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L49
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L49
            if (r0 == 0) goto L47
            java.lang.String r0 = "IDErrorUtil"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49
            r1.<init>()     // Catch: java.lang.Throwable -> L49
            java.lang.String r2 = "addErrorInfo : "
            r1.append(r2)     // Catch: java.lang.Throwable -> L49
            r1.append(r4)     // Catch: java.lang.Throwable -> L49
            java.lang.String r2 = " "
            r1.append(r2)     // Catch: java.lang.Throwable -> L49
            r1.append(r6)     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L49
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L49
            com.mbridge.msdk.foundation.same.net.f.c$a r0 = new com.mbridge.msdk.foundation.same.net.f.c$a     // Catch: java.lang.Throwable -> L49
            r0.<init>(r7, r5, r6)     // Catch: java.lang.Throwable -> L49
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.foundation.same.net.f.c$a> r5 = r3.d     // Catch: java.lang.Throwable -> L49
            r5.put(r4, r0)     // Catch: java.lang.Throwable -> L49
        L47:
            monitor-exit(r3)
            return
        L49:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
