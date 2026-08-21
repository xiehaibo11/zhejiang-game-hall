package com.tkay.expressad.videocommon.b;

public class c {
    private static final java.lang.String a = "DownLoadManager";
    private static com.tkay.expressad.videocommon.b.c b;
    private java.util.concurrent.ThreadPoolExecutor c;
    private boolean d;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> e;
    private java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> f;
    private java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> g;
    private java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> h;

    private c() {
            r9 = this;
            r9.<init>()
            r0 = 0
            r9.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r9.e = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingDeque r7 = new java.util.concurrent.LinkedBlockingDeque
            r7.<init>()
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r8 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r8.<init>()
            r2 = 5
            r3 = 15
            r4 = 15
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            r9.c = r0
            r1 = 1
            r0.allowCoreThreadTimeOut(r1)
            return
    }

    public static com.tkay.expressad.videocommon.b.c a() {
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.videocommon.b.c> r0 = com.tkay.expressad.videocommon.b.c.class
            monitor-enter(r0)
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.videocommon.b.c r1 = new com.tkay.expressad.videocommon.b.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.videocommon.b.c.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.b
            return r0
    }

    private com.tkay.expressad.videocommon.b.n a(java.lang.String r3, com.tkay.expressad.foundation.d.c r4, int r5, com.tkay.expressad.videocommon.d.b r6) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L44
            if (r4 != 0) goto L9
            goto L44
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L31
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            java.lang.Object r3 = r0.get(r3)
            com.tkay.expressad.videocommon.b.n r3 = (com.tkay.expressad.videocommon.b.n) r3
            r0 = 94
            if (r5 == r0) goto L26
            r0 = 287(0x11f, float:4.02E-43)
            if (r5 != r0) goto L22
            goto L26
        L22:
            r3.a(r6)
            goto L2d
        L26:
            java.lang.String r5 = r4.Z()
            r3.a(r5, r6)
        L2d:
            r3.a(r4)
            goto L43
        L31:
            com.tkay.expressad.videocommon.b.n r0 = new com.tkay.expressad.videocommon.b.n
            java.util.concurrent.ThreadPoolExecutor r1 = r2.c
            r0.<init>(r4, r1, r3, r5)
            if (r6 == 0) goto L3d
            r0.a(r6)
        L3d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r4 = r2.e
            r4.put(r3, r0)
            r3 = r0
        L43:
            return r3
        L44:
            r3 = 0
            return r3
    }

    private static void a(com.tkay.expressad.videocommon.b.n r3, java.lang.String r4) {
            r0 = 2
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = r2.e()     // Catch: java.lang.Exception -> L22
            com.tkay.expressad.videocommon.e.d r1 = r1.a(r2, r4)     // Catch: java.lang.Exception -> L22
            if (r1 != 0) goto L14
            return
        L14:
            int r1 = r1.F()     // Catch: java.lang.Exception -> L22
            if (r1 != r0) goto L1e
            r3.c()     // Catch: java.lang.Exception -> L22
            return
        L1e:
            r3.a()     // Catch: java.lang.Exception -> L22
            return
        L22:
            r1 = move-exception
            r1.getMessage()
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L4f
            if (r1 != 0) goto L4e
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L4f
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L4f
            java.lang.String r1 = r1.e()     // Catch: java.lang.Exception -> L4f
            com.tkay.expressad.d.c r1 = com.tkay.expressad.d.b.c(r1, r4)     // Catch: java.lang.Exception -> L4f
            if (r1 != 0) goto L41
            com.tkay.expressad.d.c r1 = com.tkay.expressad.d.c.d(r4)     // Catch: java.lang.Exception -> L4f
        L41:
            int r4 = r1.m()     // Catch: java.lang.Exception -> L4f
            if (r4 != r0) goto L4b
            r3.c()     // Catch: java.lang.Exception -> L4f
            return
        L4b:
            r3.a()     // Catch: java.lang.Exception -> L4f
        L4e:
            return
        L4f:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private com.tkay.expressad.videocommon.b.a b(int r1, java.lang.String r2, boolean r3) {
            r0 = this;
            com.tkay.expressad.videocommon.b.n r2 = r0.c(r2)
            if (r2 == 0) goto Lb
            com.tkay.expressad.videocommon.b.a r1 = r2.b(r1, r3)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    private void b(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.videocommon.b.n r1 = r0.c(r1)
            if (r1 == 0) goto L9
            r1.b(r2)     // Catch: java.lang.Exception -> L9
        L9:
            return
    }

    private void d() {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            if (r0 == 0) goto L24
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.tkay.expressad.videocommon.b.n r1 = (com.tkay.expressad.videocommon.b.n) r1
            if (r1 == 0) goto Lc
            r1.b()
            goto Lc
        L24:
            return
    }

    private java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> e(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r0 = r1.f
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r0 = r1.f
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    private void f(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.videocommon.b.n r1 = r0.c(r1)
            if (r1 == 0) goto L9
            r1.d()
        L9:
            return
    }

    public final com.tkay.expressad.videocommon.b.a a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.tkay.expressad.videocommon.b.n r1 = r0.c(r1)
            if (r1 == 0) goto Lb
            com.tkay.expressad.videocommon.b.a r1 = r1.a(r2)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public final com.tkay.expressad.videocommon.b.n a(java.lang.String r3, java.util.List<com.tkay.expressad.foundation.d.c> r4, int r5, com.tkay.expressad.videocommon.d.b r6) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L51
            if (r4 == 0) goto L51
            int r0 = r4.size()
            if (r0 != 0) goto Lf
            goto L51
        Lf:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            java.lang.Object r3 = r0.get(r3)
            com.tkay.expressad.videocommon.b.n r3 = (com.tkay.expressad.videocommon.b.n) r3
            r0 = 94
            if (r5 == r0) goto L2c
            r0 = 287(0x11f, float:4.02E-43)
            if (r5 != r0) goto L28
            goto L2c
        L28:
            r3.a(r6)
            goto L3a
        L2c:
            r5 = 0
            java.lang.Object r5 = r4.get(r5)
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5
            java.lang.String r5 = r5.Z()
            r3.a(r5, r6)
        L3a:
            r3.a(r4)
            goto L50
        L3e:
            com.tkay.expressad.videocommon.b.n r0 = new com.tkay.expressad.videocommon.b.n
            java.util.concurrent.ThreadPoolExecutor r1 = r2.c
            r0.<init>(r4, r1, r3, r5)
            if (r6 == 0) goto L4a
            r0.a(r6)
        L4a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r4 = r2.e
            r4.put(r3, r0)
            r3 = r0
        L50:
            return r3
        L51:
            r3 = 0
            return r3
    }

    public final java.util.List<com.tkay.expressad.foundation.d.c> a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r0 = r1.g
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r0 = r1.g
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    public final void a(boolean r2) {
            r1 = this;
            if (r2 == 0) goto L7
            boolean r2 = r1.d
            if (r2 == 0) goto La
            return
        L7:
            r2 = 0
            r1.d = r2
        La:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r2 = r1.e
            if (r2 == 0) goto L2c
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L16:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r2.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getValue()
            com.tkay.expressad.videocommon.b.n r0 = (com.tkay.expressad.videocommon.b.n) r0
            r0.a()
            goto L16
        L2c:
            return
    }

    public final boolean a(int r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r0 = 0
            com.tkay.expressad.videocommon.b.n r3 = r1.c(r3)     // Catch: java.lang.Exception -> L10
            if (r3 == 0) goto L18
            com.tkay.expressad.videocommon.b.a r2 = r3.a(r2, r4)     // Catch: java.lang.Exception -> L10
            if (r2 != 0) goto Le
            goto L18
        Le:
            r0 = 1
            goto L18
        L10:
            r2 = move-exception
            boolean r3 = com.tkay.expressad.b.a
            if (r3 == 0) goto L18
            r2.printStackTrace()
        L18:
            return r0
    }

    public final boolean a(java.lang.String r1, boolean r2, int r3, boolean r4, int r5, java.util.List<com.tkay.expressad.foundation.d.c> r6) {
            r0 = this;
            boolean r1 = r0.b(r1, r2, r3, r4, r5, r6)
            return r1
    }

    public final java.util.List<com.tkay.expressad.videocommon.b.a> b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r0 = r1.h
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r0 = r1.h
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    public final void b() {
            r2 = this;
            r0 = 0
            r2.d = r0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r2.e
            if (r0 == 0) goto L27
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.tkay.expressad.videocommon.b.n r1 = (com.tkay.expressad.videocommon.b.n) r1
            if (r1 == 0) goto Lf
            r1.c()
            goto Lf
        L27:
            return
    }

    public final boolean b(java.lang.String r9, boolean r10, int r11, boolean r12, int r13, java.util.List<com.tkay.expressad.foundation.d.c> r14) {
            r8 = this;
            r0 = 0
            if (r14 == 0) goto L235
            int r1 = r14.size()     // Catch: java.lang.Exception -> L22d
            if (r1 != 0) goto Lb
            goto L235
        Lb:
            com.tkay.expressad.videocommon.b.n r1 = r8.c(r9)     // Catch: java.lang.Exception -> L22d
            if (r1 == 0) goto L235
            java.util.List r10 = r1.a(r10, r14)     // Catch: java.lang.Exception -> L22d
            r1 = 1
            if (r10 == 0) goto L175
            int r2 = r10.size()     // Catch: java.lang.Exception -> L22d
            if (r2 != 0) goto L20
            goto L175
        L20:
            if (r12 == 0) goto L117
            int r12 = r14.size()     // Catch: java.lang.Exception -> L22d
            if (r12 <= 0) goto L50
            java.lang.Object r12 = r14.get(r0)     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.foundation.d.c r12 = (com.tkay.expressad.foundation.d.c) r12     // Catch: java.lang.Exception -> L22d
            if (r12 == 0) goto L50
            java.util.ArrayList r2 = r12.aB()     // Catch: java.lang.Exception -> L22d
            if (r2 == 0) goto L50
            java.util.ArrayList r2 = r12.aB()     // Catch: java.lang.Exception -> L22d
            int r2 = r2.size()     // Catch: java.lang.Exception -> L22d
            if (r2 <= 0) goto L50
            java.util.ArrayList r12 = r12.aB()     // Catch: java.lang.Exception -> L22d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L22d
            boolean r12 = r12.contains(r2)     // Catch: java.lang.Exception -> L22d
            if (r12 == 0) goto L50
            r12 = r1
            goto L51
        L50:
            r12 = r0
        L51:
            if (r13 != 0) goto Lb5
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> L113
            r11.<init>()     // Catch: java.lang.Exception -> L113
            java.util.Iterator r13 = r10.iterator()     // Catch: java.lang.Exception -> L113
        L5c:
            boolean r0 = r13.hasNext()     // Catch: java.lang.Exception -> L113
            if (r0 == 0) goto Laa
            java.lang.Object r0 = r13.next()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.videocommon.b.a r0 = (com.tkay.expressad.videocommon.b.a) r0     // Catch: java.lang.Exception -> L113
            java.util.Iterator r2 = r14.iterator()     // Catch: java.lang.Exception -> L113
        L6c:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L113
            if (r3 == 0) goto L5c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Exception -> L113
            if (r0 == 0) goto L6c
            com.tkay.expressad.foundation.d.c r4 = r0.n()     // Catch: java.lang.Exception -> L113
            if (r4 == 0) goto L6c
            if (r3 == 0) goto L6c
            java.lang.String r4 = r3.aZ()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r5 = r0.n()     // Catch: java.lang.Exception -> L113
            java.lang.String r5 = r5.aZ()     // Catch: java.lang.Exception -> L113
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L113
            if (r4 == 0) goto L6c
            java.lang.String r3 = r3.Z()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r4 = r0.n()     // Catch: java.lang.Exception -> L113
            java.lang.String r4 = r4.Z()     // Catch: java.lang.Exception -> L113
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L113
            if (r3 == 0) goto L6c
            r11.add(r0)     // Catch: java.lang.Exception -> L113
            goto L6c
        Laa:
            int r11 = r11.size()     // Catch: java.lang.Exception -> L113
            if (r11 <= 0) goto Lb2
            goto L174
        Lb2:
            r0 = r12
            goto L175
        Lb5:
            java.util.ArrayList r13 = new java.util.ArrayList     // Catch: java.lang.Exception -> L113
            r13.<init>()     // Catch: java.lang.Exception -> L113
            java.util.Iterator r2 = r10.iterator()     // Catch: java.lang.Exception -> L113
        Lbe:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L113
            if (r3 == 0) goto L10c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.videocommon.b.a r3 = (com.tkay.expressad.videocommon.b.a) r3     // Catch: java.lang.Exception -> L113
            java.util.Iterator r4 = r14.iterator()     // Catch: java.lang.Exception -> L113
        Lce:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Exception -> L113
            if (r5 == 0) goto Lbe
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5     // Catch: java.lang.Exception -> L113
            if (r3 == 0) goto Lce
            com.tkay.expressad.foundation.d.c r6 = r3.n()     // Catch: java.lang.Exception -> L113
            if (r6 == 0) goto Lce
            if (r5 == 0) goto Lce
            java.lang.String r6 = r5.aZ()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r7 = r3.n()     // Catch: java.lang.Exception -> L113
            java.lang.String r7 = r7.aZ()     // Catch: java.lang.Exception -> L113
            boolean r6 = r6.equals(r7)     // Catch: java.lang.Exception -> L113
            if (r6 == 0) goto Lce
            java.lang.String r5 = r5.Z()     // Catch: java.lang.Exception -> L113
            com.tkay.expressad.foundation.d.c r6 = r3.n()     // Catch: java.lang.Exception -> L113
            java.lang.String r6 = r6.Z()     // Catch: java.lang.Exception -> L113
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Exception -> L113
            if (r5 == 0) goto Lce
            r13.add(r3)     // Catch: java.lang.Exception -> L113
            goto Lce
        L10c:
            int r12 = r13.size()     // Catch: java.lang.Exception -> L113
            if (r12 < r11) goto L175
            goto L174
        L113:
            r9 = move-exception
            r0 = r12
            goto L22e
        L117:
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> L22d
            r11.<init>()     // Catch: java.lang.Exception -> L22d
            java.util.Iterator r12 = r10.iterator()     // Catch: java.lang.Exception -> L22d
        L120:
            boolean r13 = r12.hasNext()     // Catch: java.lang.Exception -> L22d
            if (r13 == 0) goto L16e
            java.lang.Object r13 = r12.next()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.videocommon.b.a r13 = (com.tkay.expressad.videocommon.b.a) r13     // Catch: java.lang.Exception -> L22d
            java.util.Iterator r2 = r14.iterator()     // Catch: java.lang.Exception -> L22d
        L130:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L22d
            if (r3 == 0) goto L120
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3     // Catch: java.lang.Exception -> L22d
            if (r13 == 0) goto L130
            com.tkay.expressad.foundation.d.c r4 = r13.n()     // Catch: java.lang.Exception -> L22d
            if (r4 == 0) goto L130
            if (r3 == 0) goto L130
            java.lang.String r4 = r3.aZ()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.foundation.d.c r5 = r13.n()     // Catch: java.lang.Exception -> L22d
            java.lang.String r5 = r5.aZ()     // Catch: java.lang.Exception -> L22d
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L22d
            if (r4 == 0) goto L130
            java.lang.String r3 = r3.Z()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.foundation.d.c r4 = r13.n()     // Catch: java.lang.Exception -> L22d
            java.lang.String r4 = r4.Z()     // Catch: java.lang.Exception -> L22d
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L22d
            if (r3 == 0) goto L130
            r11.add(r13)     // Catch: java.lang.Exception -> L22d
            goto L130
        L16e:
            int r11 = r11.size()     // Catch: java.lang.Exception -> L22d
            if (r11 <= 0) goto L175
        L174:
            r0 = r1
        L175:
            if (r0 == 0) goto L235
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r11 = r8.f     // Catch: java.lang.Exception -> L22d
            if (r11 != 0) goto L183
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Exception -> L22d
            r11.<init>()     // Catch: java.lang.Exception -> L22d
            r8.f = r11     // Catch: java.lang.Exception -> L22d
            goto L190
        L183:
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r11 = r8.f     // Catch: java.lang.Exception -> L22d
            boolean r11 = r11.containsKey(r9)     // Catch: java.lang.Exception -> L22d
            if (r11 == 0) goto L190
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r11 = r8.f     // Catch: java.lang.Exception -> L22d
            r11.remove(r9)     // Catch: java.lang.Exception -> L22d
        L190:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r11 = r8.h     // Catch: java.lang.Exception -> L22d
            if (r11 != 0) goto L19c
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Exception -> L22d
            r11.<init>()     // Catch: java.lang.Exception -> L22d
            r8.h = r11     // Catch: java.lang.Exception -> L22d
            goto L1a9
        L19c:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r11 = r8.h     // Catch: java.lang.Exception -> L22d
            boolean r11 = r11.containsKey(r9)     // Catch: java.lang.Exception -> L22d
            if (r11 == 0) goto L1a9
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r11 = r8.h     // Catch: java.lang.Exception -> L22d
            r11.remove(r9)     // Catch: java.lang.Exception -> L22d
        L1a9:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r11 = r8.g     // Catch: java.lang.Exception -> L22d
            if (r11 != 0) goto L1b5
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Exception -> L22d
            r11.<init>()     // Catch: java.lang.Exception -> L22d
            r8.g = r11     // Catch: java.lang.Exception -> L22d
            goto L1c2
        L1b5:
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r11 = r8.g     // Catch: java.lang.Exception -> L22d
            boolean r11 = r11.containsKey(r9)     // Catch: java.lang.Exception -> L22d
            if (r11 == 0) goto L1c2
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r11 = r8.g     // Catch: java.lang.Exception -> L22d
            r11.remove(r9)     // Catch: java.lang.Exception -> L22d
        L1c2:
            if (r10 == 0) goto L235
            int r11 = r10.size()     // Catch: java.lang.Exception -> L22d
            if (r11 <= 0) goto L235
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Exception -> L22d
            r11.<init>()     // Catch: java.lang.Exception -> L22d
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: java.lang.Exception -> L22d
            r12.<init>()     // Catch: java.lang.Exception -> L22d
            java.util.ArrayList r13 = new java.util.ArrayList     // Catch: java.lang.Exception -> L22d
            r13.<init>()     // Catch: java.lang.Exception -> L22d
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Exception -> L22d
        L1dd:
            boolean r14 = r10.hasNext()     // Catch: java.lang.Exception -> L22d
            if (r14 == 0) goto L21d
            java.lang.Object r14 = r10.next()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.videocommon.b.a r14 = (com.tkay.expressad.videocommon.b.a) r14     // Catch: java.lang.Exception -> L22d
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Exception -> L22d
            r1.<init>()     // Catch: java.lang.Exception -> L22d
            com.tkay.expressad.foundation.d.c r2 = r14.n()     // Catch: java.lang.Exception -> L22d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22d
            r3.<init>()     // Catch: java.lang.Exception -> L22d
            java.lang.String r4 = r2.aZ()     // Catch: java.lang.Exception -> L22d
            r3.append(r4)     // Catch: java.lang.Exception -> L22d
            java.lang.String r4 = r2.S()     // Catch: java.lang.Exception -> L22d
            r3.append(r4)     // Catch: java.lang.Exception -> L22d
            java.lang.String r4 = r2.B()     // Catch: java.lang.Exception -> L22d
            r3.append(r4)     // Catch: java.lang.Exception -> L22d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L22d
            r1.put(r3, r14)     // Catch: java.lang.Exception -> L22d
            r11.add(r1)     // Catch: java.lang.Exception -> L22d
            r12.add(r2)     // Catch: java.lang.Exception -> L22d
            r13.add(r14)     // Catch: java.lang.Exception -> L22d
            goto L1dd
        L21d:
            java.util.Map<java.lang.String, java.util.List<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>>> r10 = r8.f     // Catch: java.lang.Exception -> L22d
            r10.put(r9, r11)     // Catch: java.lang.Exception -> L22d
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.foundation.d.c>> r10 = r8.g     // Catch: java.lang.Exception -> L22d
            r10.put(r9, r12)     // Catch: java.lang.Exception -> L22d
            java.util.Map<java.lang.String, java.util.List<com.tkay.expressad.videocommon.b.a>> r10 = r8.h     // Catch: java.lang.Exception -> L22d
            r10.put(r9, r13)     // Catch: java.lang.Exception -> L22d
            goto L235
        L22d:
            r9 = move-exception
        L22e:
            boolean r10 = com.tkay.expressad.b.a
            if (r10 == 0) goto L235
            r9.printStackTrace()
        L235:
            return r0
    }

    public final com.tkay.expressad.videocommon.b.n c(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r1.e
            if (r0 == 0) goto L13
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r1.e
            java.lang.Object r2 = r0.get(r2)
            com.tkay.expressad.videocommon.b.n r2 = (com.tkay.expressad.videocommon.b.n) r2
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    public final void c() {
            r6 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.b.n> r0 = r6.e
            if (r0 == 0) goto L78
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L78
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.tkay.expressad.videocommon.b.n r2 = (com.tkay.expressad.videocommon.b.n) r2
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r3 = 2
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L46
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = r5.e()     // Catch: java.lang.Exception -> L46
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r5, r1)     // Catch: java.lang.Exception -> L46
            if (r4 != 0) goto L38
            goto Lc
        L38:
            int r4 = r4.F()     // Catch: java.lang.Exception -> L46
            if (r4 != r3) goto L42
            r2.c()     // Catch: java.lang.Exception -> L46
            goto Lc
        L42:
            r2.a()     // Catch: java.lang.Exception -> L46
            goto Lc
        L46:
            r4 = move-exception
            r4.getMessage()
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L73
            if (r4 != 0) goto Lc
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L73
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L73
            java.lang.String r4 = r4.e()     // Catch: java.lang.Exception -> L73
            com.tkay.expressad.d.c r4 = com.tkay.expressad.d.b.c(r4, r1)     // Catch: java.lang.Exception -> L73
            if (r4 != 0) goto L65
            com.tkay.expressad.d.c r4 = com.tkay.expressad.d.c.d(r1)     // Catch: java.lang.Exception -> L73
        L65:
            int r1 = r4.m()     // Catch: java.lang.Exception -> L73
            if (r1 != r3) goto L6f
            r2.c()     // Catch: java.lang.Exception -> L73
            goto Lc
        L6f:
            r2.a()     // Catch: java.lang.Exception -> L73
            goto Lc
        L73:
            r1 = move-exception
            r1.getMessage()
            goto Lc
        L78:
            return
    }

    public final void d(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.videocommon.b.n r1 = r0.c(r1)
            if (r1 == 0) goto L9
            r1.a()
        L9:
            return
    }
}
