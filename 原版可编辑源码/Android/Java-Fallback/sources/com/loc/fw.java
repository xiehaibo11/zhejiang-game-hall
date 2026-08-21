package com.loc;

public final class fw {
    private static com.loc.fw f;
    private static long i;
    java.lang.String a;
    java.lang.String b;
    private java.util.LinkedHashMap<java.lang.String, java.lang.Long> c;
    private java.io.File d;
    private java.lang.String e;
    private android.content.Context g;
    private boolean h;

    static {
            return
    }

    private fw(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.c = r0
            r0 = 0
            r2.e = r0
            java.lang.String r1 = ""
            r2.a = r1
            r2.b = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.g = r3
            java.io.File r3 = r3.getFilesDir()
            java.lang.String r3 = r3.getPath()
            java.lang.String r0 = r2.e
            if (r0 != 0) goto L2d
            android.content.Context r0 = r2.g
            java.lang.String r0 = com.loc.fz.l(r0)
            r2.e = r0
        L2d:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "reportRecorder"
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> L37
            r2.d = r0     // Catch: java.lang.Throwable -> L37
            goto L3b
        L37:
            r3 = move-exception
            com.loc.ej.a(r3)
        L3b:
            r2.c()
            return
    }

    public static synchronized com.loc.fw a(android.content.Context r2) {
            java.lang.Class<com.loc.fw> r0 = com.loc.fw.class
            monitor-enter(r0)
            com.loc.fw r1 = com.loc.fw.f     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.loc.fw r1 = new com.loc.fw     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.loc.fw.f = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.loc.fw r2 = com.loc.fw.f     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private boolean b(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = r4.b
            java.lang.String r1 = "lastavedate"
            java.lang.String r2 = "pref"
            if (r0 != 0) goto L10
            java.lang.String r0 = "0"
            java.lang.String r0 = com.loc.fy.a(r5, r2, r1, r0)
            r4.b = r0
        L10:
            java.lang.String r0 = r4.b
            java.lang.String r3 = r4.a
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L1c
            r5 = 0
            return r5
        L1c:
            android.content.SharedPreferences$Editor r5 = com.loc.fy.a(r5, r2)
            java.lang.String r0 = r4.a
            com.loc.fy.a(r5, r1, r0)
            com.loc.fy.a(r5)
            java.lang.String r5 = r4.a
            r4.b = r5
            r5 = 1
            return r5
    }

    private synchronized void c() {
            r7 = this;
            monitor-enter(r7)
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r7.c     // Catch: java.lang.Throwable -> L7d
            if (r0 == 0) goto Lf
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r7.c     // Catch: java.lang.Throwable -> L7d
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L7d
            if (r0 <= 0) goto Lf
            monitor-exit(r7)
            return
        Lf:
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L77
            java.lang.String r1 = "yyyyMMdd"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L77
            java.util.Date r1 = new java.util.Date     // Catch: java.lang.Throwable -> L77
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L77
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L77
            java.lang.String r0 = r0.format(r1)     // Catch: java.lang.Throwable -> L77
            r7.a = r0     // Catch: java.lang.Throwable -> L77
            java.io.File r0 = r7.d     // Catch: java.lang.Throwable -> L77
            java.util.List r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> L77
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L77
        L2f:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L77
            if (r1 == 0) goto L75
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L77
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L77
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            byte[] r1 = com.loc.fg.b(r1, r3)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            java.lang.String r3 = "UTF-8"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            java.lang.String r1 = ","
            java.lang.String[] r1 = r2.split(r1)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            if (r1 == 0) goto L2f
            int r2 = r1.length     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            r3 = 1
            if (r2 <= r3) goto L2f
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r2 = r7.c     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            r4 = 0
            r4 = r1[r4]     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            long r5 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            java.lang.Long r1 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L6b java.io.UnsupportedEncodingException -> L70
            goto L2f
        L6b:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L77
            goto L2f
        L70:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L77
            goto L2f
        L75:
            monitor-exit(r7)
            return
        L77:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L7d
            monitor-exit(r7)
            return
        L7d:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    private void d() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
            r0.<init>()     // Catch: java.lang.Throwable -> L73
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r1 = r5.c     // Catch: java.lang.Throwable -> L73
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L73
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L73
        Lf:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L63
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L73
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r3.<init>()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.Object r4 = r2.getKey()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r3.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r4 = ","
            r3.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.Object r2 = r2.getValue()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r2 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r3.<init>()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r4 = "UTF-8"
            byte[] r2 = r2.getBytes(r4)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r4 = r5.e     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            byte[] r2 = com.loc.fg.a(r2, r4)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r2 = com.loc.p.b(r2)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            java.lang.String r2 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L5e java.lang.Throwable -> L73
            goto Lf
        L5e:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L73
            goto Lf
        L63:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L73
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L73
            if (r1 != 0) goto L72
            java.io.File r1 = r5.d     // Catch: java.lang.Throwable -> L73
            com.loc.fz.a(r1, r0)     // Catch: java.lang.Throwable -> L73
        L72:
            return
        L73:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public final synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.h     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lb
            r1.d()     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r1.h = r0     // Catch: java.lang.Throwable -> Ld
        Lb:
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized void a(com.amap.api.location.AMapLocation r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = r6.a     // Catch: java.lang.Throwable -> Ldd
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Ldd
            if (r0 != 0) goto L15
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r6.c     // Catch: java.lang.Throwable -> Ldd
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Ldd
            r1 = 8
            if (r0 >= r1) goto L29
        L15:
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = r6.a     // Catch: java.lang.Throwable -> Ldd
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Ldd
            if (r0 == 0) goto L75
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r6.c     // Catch: java.lang.Throwable -> Ldd
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Ldd
            r1 = 9
            if (r0 < r1) goto L75
        L29:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Ldd
            r0.<init>()     // Catch: java.lang.Throwable -> Ldd
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r1 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> Ldd
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Ldd
        L38:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Ldd
            if (r2 == 0) goto L5f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Ldd
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> Ldd
            java.lang.Object r2 = r2.getKey()     // Catch: java.lang.Throwable -> L5a
            r0.add(r2)     // Catch: java.lang.Throwable -> L5a
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L5a
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r3 = r6.c     // Catch: java.lang.Throwable -> L5a
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L5a
            int r3 = r3 + (-7)
            if (r2 != r3) goto L38
            goto L5f
        L5a:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> Ldd
            goto L38
        L5f:
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Ldd
        L63:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Ldd
            if (r1 == 0) goto L75
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Ldd
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r2 = r6.c     // Catch: java.lang.Throwable -> Ldd
            r2.remove(r1)     // Catch: java.lang.Throwable -> Ldd
            goto L63
        L75:
            int r0 = r7.getErrorCode()     // Catch: java.lang.Throwable -> Ldd
            if (r0 == 0) goto L7d
            monitor-exit(r6)
            return
        L7d:
            int r0 = r7.getLocationType()     // Catch: java.lang.Throwable -> Ldd
            r1 = 6
            if (r0 == r1) goto Ldb
            int r7 = r7.getLocationType()     // Catch: java.lang.Throwable -> Ldd
            r0 = 5
            if (r7 != r0) goto L8c
            goto Ldb
        L8c:
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r7 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r0 = r6.a     // Catch: java.lang.Throwable -> Ldd
            boolean r7 = r7.containsKey(r0)     // Catch: java.lang.Throwable -> Ldd
            r0 = 1
            if (r7 == 0) goto Lb5
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r7 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> Ldd
            java.lang.Object r7 = r7.get(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.Long r7 = (java.lang.Long) r7     // Catch: java.lang.Throwable -> Ldd
            long r2 = r7.longValue()     // Catch: java.lang.Throwable -> Ldd
            long r2 = r2 + r0
            com.loc.fw.i = r2     // Catch: java.lang.Throwable -> Ldd
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r7 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r0 = r6.a     // Catch: java.lang.Throwable -> Ldd
            java.lang.Long r1 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> Ldd
            r7.put(r0, r1)     // Catch: java.lang.Throwable -> Ldd
            goto Lc2
        Lb5:
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r7 = r6.c     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> Ldd
            java.lang.Long r3 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> Ldd
            r7.put(r2, r3)     // Catch: java.lang.Throwable -> Ldd
            com.loc.fw.i = r0     // Catch: java.lang.Throwable -> Ldd
        Lc2:
            long r0 = com.loc.fw.i     // Catch: java.lang.Throwable -> Ldd
            r2 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 == 0) goto Ld6
            long r0 = com.loc.fw.i     // Catch: java.lang.Throwable -> Ldd
            r4 = 100
            long r0 = r0 % r4
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 != 0) goto Ld6
            r6.a()     // Catch: java.lang.Throwable -> Ldd
        Ld6:
            r7 = 1
            r6.h = r7     // Catch: java.lang.Throwable -> Ldd
            monitor-exit(r6)
            return
        Ldb:
            monitor-exit(r6)
            return
        Ldd:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> Le3
            monitor-exit(r6)
            return
        Le3:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void b() {
            r5 = this;
            monitor-enter(r5)
            android.content.Context r0 = r5.g     // Catch: java.lang.Throwable -> L54
            boolean r0 = r5.b(r0)     // Catch: java.lang.Throwable -> L54
            if (r0 != 0) goto Lb
            monitor-exit(r5)
            return
        Lb:
            java.util.LinkedHashMap<java.lang.String, java.lang.Long> r0 = r5.c     // Catch: java.lang.Throwable -> L54
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L54
        L15:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L52
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L54
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = r5.a     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Throwable -> L4d
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L2e
            goto L15
        L2e:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4d
            r2.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "param_long_first"
            java.lang.Object r4 = r1.getKey()     // Catch: java.lang.Throwable -> L4d
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "param_long_second"
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L4d
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L4d
            android.content.Context r1 = r5.g     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "O023"
            com.loc.fx.a(r1, r3, r2)     // Catch: java.lang.Throwable -> L4d
            goto L15
        L4d:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L54
            goto L15
        L52:
            monitor-exit(r5)
            return
        L54:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r5)
            return
        L5a:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }
}
