package com.loc;

public abstract class ex<T> {
    public java.lang.String a;
    private java.io.File b;
    private boolean c;
    private java.util.Map<java.lang.String, com.loc.ex.a> d;
    private android.os.Handler e;
    private java.lang.String f;
    private boolean g;
    private java.lang.Runnable h;



    static class a {
        int a;
        long b;
        long c;

        public a(int r1, long r2, long r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r4
                return
        }
    }

    public ex(android.content.Context r2, java.lang.String r3, android.os.Handler r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.d = r0
            r0 = 0
            r1.f = r0
            com.loc.ex$2 r0 = new com.loc.ex$2
            r0.<init>(r1)
            r1.h = r0
            if (r2 != 0) goto L1a
            return
        L1a:
            r1.e = r4
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L24
            java.lang.String r3 = "unknow"
        L24:
            r1.a = r3
            java.lang.String r3 = com.loc.fz.l(r2)
            r1.f = r3
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getPath()
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = r1.a     // Catch: java.lang.Throwable -> L3e
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L3e
            r1.b = r3     // Catch: java.lang.Throwable -> L3e
            goto L42
        L3e:
            r2 = move-exception
            r2.printStackTrace()
        L42:
            r1.d()
            return
    }

    public static int a(long r1, long r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L6
            r1 = -1
            return r1
        L6:
            if (r0 != 0) goto La
            r1 = 0
            return r1
        La:
            r1 = 1
            return r1
    }

    static java.util.Map a(com.loc.ex r0) {
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r0.d
            return r0
    }

    private void b(T r11, long r12) {
            r10 = this;
            if (r11 == 0) goto L57
            long r0 = r10.d(r11)
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto Ld
            goto L57
        Ld:
            java.lang.String r0 = r10.b(r11)
            java.util.Map<java.lang.String, com.loc.ex$a> r1 = r10.d
            java.lang.Object r1 = r1.get(r0)
            com.loc.ex$a r1 = (com.loc.ex.a) r1
            r2 = 1
            if (r1 != 0) goto L36
            r10.a(r11, r12)
            java.util.Map<java.lang.String, com.loc.ex$a> r1 = r10.d
            com.loc.ex$a r9 = new com.loc.ex$a
            int r4 = r10.c(r11)
            long r5 = r10.d(r11)
            r3 = r9
            r7 = r12
            r3.<init>(r4, r5, r7)
            r1.put(r0, r9)
            r10.g = r2
            return
        L36:
            r1.c = r12
            int r0 = r1.a
            int r3 = r10.c(r11)
            if (r0 == r3) goto L52
            r10.a(r11, r12)
            int r12 = r10.c(r11)
            r1.a = r12
            long r11 = r10.d(r11)
            r1.b = r11
            r10.g = r2
            return
        L52:
            long r12 = r1.b
            r10.a(r11, r12)
        L57:
            return
    }

    static boolean b(com.loc.ex r0) {
            boolean r0 = r0.c
            return r0
    }

    static boolean c(com.loc.ex r0) {
            boolean r0 = r0.g
            return r0
    }

    private void d() {
            r12 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = "restore from：\n"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L7d
            java.io.File r1 = r12.b     // Catch: java.lang.Throwable -> L7d
            java.util.List r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L7d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L7d
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L7d
            if (r2 == 0) goto L7c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L6a
            byte[] r2 = com.loc.p.b(r2)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = r12.f     // Catch: java.lang.Throwable -> L6a
            byte[] r2 = com.loc.fg.b(r2, r4)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = "UTF-8"
            r3.<init>(r2, r4)     // Catch: java.lang.Throwable -> L6a
            r0.append(r3)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "\n"
            r0.append(r2)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = ","
            java.lang.String[] r2 = r3.split(r2)     // Catch: java.lang.Throwable -> L6a
            int r3 = r2.length     // Catch: java.lang.Throwable -> L6a
            r4 = 4
            if (r3 < r4) goto L48
            r3 = 3
            r3 = r2[r3]     // Catch: java.lang.Throwable -> L6a
            long r3 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Throwable -> L6a
            goto L4c
        L48:
            long r3 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L6a
        L4c:
            r9 = r3
            java.util.Map<java.lang.String, com.loc.ex$a> r3 = r12.d     // Catch: java.lang.Throwable -> L6a
            r4 = 0
            r4 = r2[r4]     // Catch: java.lang.Throwable -> L6a
            com.loc.ex$a r11 = new com.loc.ex$a     // Catch: java.lang.Throwable -> L6a
            r5 = 1
            r5 = r2[r5]     // Catch: java.lang.Throwable -> L6a
            int r6 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L6a
            r5 = 2
            r2 = r2[r5]     // Catch: java.lang.Throwable -> L6a
            long r7 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> L6a
            r5 = r11
            r5.<init>(r6, r7, r9)     // Catch: java.lang.Throwable -> L6a
            r3.put(r4, r11)     // Catch: java.lang.Throwable -> L6a
            goto L11
        L6a:
            r2 = move-exception
            java.io.File r3 = r12.b     // Catch: java.lang.Throwable -> L7d
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L7d
            if (r3 == 0) goto L78
            java.io.File r3 = r12.b     // Catch: java.lang.Throwable -> L7d
            r3.delete()     // Catch: java.lang.Throwable -> L7d
        L78:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L7d
            goto L11
        L7c:
            return
        L7d:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    static void d(com.loc.ex r0) {
            r0.e()
            return
    }

    private void e() {
            r8 = this;
            long r0 = r8.c()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L86
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r8.d
            r0.size()
            long r0 = r8.b()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L4d
            long r0 = com.loc.fz.b()
            java.util.Map<java.lang.String, com.loc.ex$a> r2 = r8.d
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L25:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L4d
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.util.Map<java.lang.String, com.loc.ex$a> r4 = r8.d
            java.lang.Object r3 = r3.getKey()
            java.lang.Object r3 = r4.get(r3)
            com.loc.ex$a r3 = (com.loc.ex.a) r3
            long r3 = r3.c
            long r3 = r0 - r3
            long r5 = r8.b()
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L25
            r2.remove()
            goto L25
        L4d:
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r8.d
            int r0 = r0.size()
            long r0 = (long) r0
            long r2 = r8.c()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L86
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.Map<java.lang.String, com.loc.ex$a> r1 = r8.d
            java.util.Set r1 = r1.keySet()
            r0.<init>(r1)
            com.loc.ex$1 r1 = new com.loc.ex$1
            r1.<init>(r8)
            java.util.Collections.sort(r0, r1)
            long r1 = r8.c()
            int r2 = (int) r1
        L74:
            int r1 = r0.size()
            if (r2 >= r1) goto L86
            java.util.Map<java.lang.String, com.loc.ex$a> r1 = r8.d
            java.lang.Object r3 = r0.get(r2)
            r1.remove(r3)
            int r2 = r2 + 1
            goto L74
        L86:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Map<java.lang.String, com.loc.ex$a> r1 = r8.d
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L95:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L109
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r4 = ","
            r3.append(r4)
            java.lang.Object r5 = r2.getValue()
            com.loc.ex$a r5 = (com.loc.ex.a) r5
            int r5 = r5.a
            r3.append(r5)
            r3.append(r4)
            java.lang.Object r5 = r2.getValue()
            com.loc.ex$a r5 = (com.loc.ex.a) r5
            long r5 = r5.b
            r3.append(r5)
            r3.append(r4)
            java.lang.Object r2 = r2.getValue()
            com.loc.ex$a r2 = (com.loc.ex.a) r2
            long r4 = r2.c
            r3.append(r4)
            java.lang.String r2 = r3.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L104
            r3.<init>()     // Catch: java.io.UnsupportedEncodingException -> L104
            java.lang.String r4 = "UTF-8"
            byte[] r2 = r2.getBytes(r4)     // Catch: java.io.UnsupportedEncodingException -> L104
            java.lang.String r4 = r8.f     // Catch: java.io.UnsupportedEncodingException -> L104
            byte[] r2 = com.loc.fg.a(r2, r4)     // Catch: java.io.UnsupportedEncodingException -> L104
            java.lang.String r2 = com.loc.p.b(r2)     // Catch: java.io.UnsupportedEncodingException -> L104
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L104
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L104
            java.lang.String r2 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L104
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L104
            goto L95
        L104:
            r2 = move-exception
            r2.printStackTrace()
            goto L95
        L109:
            java.lang.String r0 = r0.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L118
            java.io.File r1 = r8.b
            com.loc.fz.a(r1, r0)
        L118:
            return
    }

    static boolean e(com.loc.ex r1) {
            r0 = 0
            r1.g = r0
            return r0
    }

    static android.os.Handler f(com.loc.ex r0) {
            android.os.Handler r0 = r0.e
            return r0
    }

    static java.lang.Runnable g(com.loc.ex r0) {
            java.lang.Runnable r0 = r0.h
            return r0
    }

    public final void a() {
            r4 = this;
            boolean r0 = r4.c
            if (r0 != 0) goto L17
            android.os.Handler r0 = r4.e
            if (r0 == 0) goto L17
            java.lang.Runnable r1 = r4.h
            r0.removeCallbacks(r1)
            android.os.Handler r0 = r4.e
            java.lang.Runnable r1 = r4.h
            r2 = 60000(0xea60, double:2.9644E-319)
            r0.postDelayed(r1, r2)
        L17:
            r0 = 1
            r4.c = r0
            return
    }

    public final void a(T r3) {
            r2 = this;
            long r0 = com.loc.fz.b()
            r2.b(r3, r0)
            return
    }

    abstract void a(T r1, long r2);

    public final void a(java.util.List<T> r12) {
            r11 = this;
            long r6 = com.loc.fz.b()
            java.util.Iterator r0 = r12.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L16
            java.lang.Object r1 = r0.next()
            r11.b(r1, r6)
            goto L8
        L16:
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r11.d
            int r0 = r0.size()
            int r1 = r12.size()
            if (r0 < r1) goto L25
            r0 = 1
            r11.g = r0
        L25:
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r11.d
            int r0 = r0.size()
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r0 > r1) goto L39
            long r0 = r11.c()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L65
        L39:
            java.util.Map<java.lang.String, com.loc.ex$a> r0 = r11.d
            r0.clear()
            java.util.Iterator r12 = r12.iterator()
        L42:
            boolean r0 = r12.hasNext()
            if (r0 == 0) goto L65
            java.lang.Object r0 = r12.next()
            java.util.Map<java.lang.String, com.loc.ex$a> r8 = r11.d
            java.lang.String r9 = r11.b(r0)
            com.loc.ex$a r10 = new com.loc.ex$a
            int r1 = r11.c(r0)
            long r2 = r11.d(r0)
            r0 = r10
            r4 = r6
            r0.<init>(r1, r2, r4)
            r8.put(r9, r10)
            goto L42
        L65:
            return
    }

    public final void a(boolean r3) {
            r2 = this;
            android.os.Handler r0 = r2.e
            if (r0 == 0) goto L9
            java.lang.Runnable r1 = r2.h
            r0.removeCallbacks(r1)
        L9:
            if (r3 != 0) goto L10
            java.lang.Runnable r3 = r2.h
            r3.run()
        L10:
            r3 = 0
            r2.c = r3
            return
    }

    abstract long b();

    public abstract java.lang.String b(T r1);

    abstract int c(T r1);

    abstract long c();

    abstract long d(T r1);

    public final long e(T r5) {
            r4 = this;
            long r0 = com.loc.fz.b()
            long r2 = r4.d(r5)
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            return r0
    }
}
