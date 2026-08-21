package com.tkay.expressad.videocommon.b;

public final class n {
    private static final java.lang.String c = "UnitCacheCtroller";
    com.tkay.expressad.d.c a;
    com.tkay.expressad.d.c b;
    private java.util.List<com.tkay.expressad.foundation.d.c> d;
    private boolean e;
    private com.tkay.expressad.videocommon.d.b f;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> g;
    private com.tkay.expressad.videocommon.b.d h;
    private java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> i;
    private android.content.Context j;
    private java.util.concurrent.ExecutorService k;
    private long l;
    private java.lang.String m;
    private com.tkay.expressad.videocommon.e.d n;
    private int o;
    private int p;
    private com.tkay.expressad.d.c q;



    public n(com.tkay.expressad.foundation.d.c r4, java.util.concurrent.ExecutorService r5, java.lang.String r6, int r7) {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.d = r0
            r0 = 1
            r3.e = r0
            com.tkay.expressad.videocommon.b.n$1 r1 = new com.tkay.expressad.videocommon.b.n$1
            r1.<init>(r3)
            r3.h = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r3.i = r1
            r1 = 3600(0xe10, double:1.7786E-320)
            r3.l = r1
            r1 = 2
            r3.o = r1
            r3.p = r0
            r0 = 0
            r3.a = r0
            r3.b = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r3.j = r0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.d
            if (r0 == 0) goto L3c
            if (r4 == 0) goto L3c
            r0.add(r4)
        L3c:
            r3.k = r5
            r3.m = r6
            r3.p = r7
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r3.d
            r3.b(r4)
            return
    }

    public n(java.util.List<com.tkay.expressad.foundation.d.c> r4, java.util.concurrent.ExecutorService r5, java.lang.String r6, int r7) {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.d = r0
            r0 = 1
            r3.e = r0
            com.tkay.expressad.videocommon.b.n$1 r1 = new com.tkay.expressad.videocommon.b.n$1
            r1.<init>(r3)
            r3.h = r1
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r3.i = r1
            r1 = 3600(0xe10, double:1.7786E-320)
            r3.l = r1
            r1 = 2
            r3.o = r1
            r3.p = r0
            r0 = 0
            r3.a = r0
            r3.b = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r3.j = r0
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r3.d
            if (r0 == 0) goto L3c
            if (r4 == 0) goto L3c
            r0.addAll(r4)
        L3c:
            r3.k = r5
            r3.m = r6
            r3.p = r7
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r3.d
            r3.b(r4)
            return
    }

    private static synchronized void a(com.tkay.expressad.videocommon.b.a r4) {
            java.lang.Class<com.tkay.expressad.videocommon.b.n> r0 = com.tkay.expressad.videocommon.b.n.class
            monitor-enter(r0)
            r1 = 0
            if (r4 == 0) goto Ld
            com.tkay.expressad.foundation.d.c r1 = r4.n()     // Catch: java.lang.Throwable -> Lb
            goto Ld
        Lb:
            r4 = move-exception
            goto L2a
        Ld:
            if (r1 != 0) goto L11
            monitor-exit(r0)
            return
        L11:
            int r2 = r1.w()     // Catch: java.lang.Throwable -> Lb
            r3 = 94
            if (r2 == r3) goto L21
            int r1 = r1.w()     // Catch: java.lang.Throwable -> Lb
            r2 = 287(0x11f, float:4.02E-43)
            if (r1 != r2) goto L28
        L21:
            java.lang.String r1 = c(r4)     // Catch: java.lang.Throwable -> Lb
            r4.a(r1)     // Catch: java.lang.Throwable -> Lb
        L28:
            monitor-exit(r0)
            return
        L2a:
            monitor-exit(r0)
            throw r4
    }

    private boolean a(com.tkay.expressad.foundation.d.c r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = r4.ar()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L39
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L39
            com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.m
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            java.lang.String r4 = r4.Z()
            r1.append(r4)
            r1.append(r2)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            boolean r4 = r0.d(r4)
            return r4
        L39:
            r4 = 1
            return r4
    }

    private static boolean a(com.tkay.expressad.videocommon.b.a r8, int r9) {
            long r0 = r8.p()
            long r2 = r8.f()
            java.lang.String r4 = r8.a()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r5 = 1
            if (r4 == 0) goto L14
            return r5
        L14:
            if (r9 != 0) goto L2e
            com.tkay.expressad.foundation.d.c r9 = r8.n()
            if (r9 == 0) goto L41
            com.tkay.expressad.foundation.d.c r9 = r8.n()
            java.lang.String r9 = r9.S()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L41
            a(r8)
            return r5
        L2e:
            r6 = 0
            int r4 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r4 <= 0) goto L41
            r6 = 100
            long r0 = r0 * r6
            long r6 = (long) r9
            long r2 = r2 * r6
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 < 0) goto L41
            a(r8)
            return r5
        L41:
            r8 = 0
            return r8
    }

    static boolean a(com.tkay.expressad.videocommon.b.n r1) {
            r0 = 1
            r1.e = r0
            return r0
    }

    private static boolean a(java.lang.String r3, com.tkay.expressad.foundation.d.c r4) {
            java.util.ArrayList r0 = r4.aB()     // Catch: java.lang.Throwable -> L3c
            r1 = 1
            if (r0 == 0) goto L21
            java.util.ArrayList r0 = r4.aB()     // Catch: java.lang.Throwable -> L3c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3c
            if (r0 <= 0) goto L21
            java.util.ArrayList r0 = r4.aB()     // Catch: java.lang.Throwable -> L3c
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L3c
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L21
            return r1
        L21:
            boolean r0 = r4.j()     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L2e
            boolean r0 = com.tkay.expressad.foundation.h.t.f(r3)     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L2e
            return r1
        L2e:
            boolean r0 = com.tkay.expressad.foundation.h.w.a(r3)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L35
            return r1
        L35:
            boolean r3 = b(r3, r4)     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L40
            return r1
        L3c:
            r3 = move-exception
            r3.getMessage()
        L40:
            r3 = 0
            return r3
    }

    private static boolean a(java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r3) {
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L34
        L4:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L3c
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Throwable -> L34
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L4
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L34
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L34
        L1a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L4
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L34
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L34
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L34
            com.tkay.expressad.videocommon.b.a r1 = (com.tkay.expressad.videocommon.b.a) r1     // Catch: java.lang.Throwable -> L34
            int r1 = r1.k()     // Catch: java.lang.Throwable -> L34
            r2 = 1
            if (r1 != r2) goto L1a
            return r2
        L34:
            r3 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L3c
            r3.printStackTrace()
        L3c:
            r3 = 0
            return r3
    }

    private int b(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            r0 = -1
            if (r3 == 0) goto L12
            int r1 = r3.ao()
            if (r1 == r0) goto Le
            int r0 = r3.ao()
            goto L12
        Le:
            int r0 = r2.d(r3)
        L12:
            return r0
    }

    static com.tkay.expressad.videocommon.d.b b(com.tkay.expressad.videocommon.b.n r0) {
            com.tkay.expressad.videocommon.d.b r0 = r0.f
            return r0
    }

    private static synchronized java.lang.String b(com.tkay.expressad.videocommon.b.a r1) {
            java.lang.Class<com.tkay.expressad.videocommon.b.n> r0 = com.tkay.expressad.videocommon.b.n.class
            monitor-enter(r0)
            java.lang.String r1 = c(r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private void b(java.util.List<com.tkay.expressad.foundation.d.c> r13) {
            r12 = this;
            if (r13 == 0) goto L1f0
            int r0 = r13.size()
            if (r0 != 0) goto La
            goto L1f0
        La:
            r12.f()
            r12.e()
            int r0 = r12.p
            r1 = 94
            r2 = 287(0x11f, float:4.02E-43)
            r3 = 1
            if (r0 == r3) goto Ld7
            if (r0 == r2) goto L95
            r4 = 298(0x12a, float:4.18E-43)
            if (r0 == r4) goto L59
            if (r0 == r1) goto L95
            r4 = 95
            if (r0 == r4) goto L27
            goto L110
        L27:
            java.lang.String r0 = r12.m     // Catch: java.lang.Exception -> L58
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L58
            if (r0 != 0) goto L110
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L58
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = r12.m     // Catch: java.lang.Exception -> L58
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.c(r0, r4)     // Catch: java.lang.Exception -> L58
            if (r0 != 0) goto L48
            java.lang.String r0 = r12.m     // Catch: java.lang.Exception -> L58
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.d(r0)     // Catch: java.lang.Exception -> L58
        L48:
            if (r0 == 0) goto L110
            long r4 = r0.i()     // Catch: java.lang.Exception -> L58
            r12.l = r4     // Catch: java.lang.Exception -> L58
            int r0 = r0.m()     // Catch: java.lang.Exception -> L58
            r12.o = r0     // Catch: java.lang.Exception -> L58
            goto L110
        L58:
            return
        L59:
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            java.lang.String r4 = r12.m
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.d(r0, r4)
            r12.b = r0
            if (r0 != 0) goto L81
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            java.lang.String r4 = r12.m
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.b(r0, r4)
            r12.b = r0
        L81:
            com.tkay.expressad.d.c r0 = r12.b
            if (r0 == 0) goto L110
            long r4 = r0.i()
            r12.l = r4
            com.tkay.expressad.d.c r0 = r12.b
            int r0 = r0.m()
            r12.o = r0
            goto L110
        L95:
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> Ld6
            com.tkay.expressad.videocommon.e.a r0 = r0.b()     // Catch: java.lang.Exception -> Ld6
            if (r0 != 0) goto La5
            com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> Ld6
            com.tkay.expressad.videocommon.e.c.c()     // Catch: java.lang.Exception -> Ld6
        La5:
            if (r0 == 0) goto Lad
            long r4 = r0.e()     // Catch: java.lang.Exception -> Ld6
            r12.l = r4     // Catch: java.lang.Exception -> Ld6
        Lad:
            java.lang.String r0 = r12.m     // Catch: java.lang.Exception -> Ld6
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ld6
            if (r0 != 0) goto Lc9
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> Ld6
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r4 = r4.e()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r5 = r12.m     // Catch: java.lang.Exception -> Ld6
            com.tkay.expressad.videocommon.e.d r0 = r0.a(r4, r5)     // Catch: java.lang.Exception -> Ld6
            r12.n = r0     // Catch: java.lang.Exception -> Ld6
        Lc9:
            com.tkay.expressad.videocommon.e.d r0 = r12.n     // Catch: java.lang.Exception -> Ld6
            if (r0 == 0) goto L110
            com.tkay.expressad.videocommon.e.d r0 = r12.n     // Catch: java.lang.Exception -> Ld6
            int r0 = r0.F()     // Catch: java.lang.Exception -> Ld6
            r12.o = r0     // Catch: java.lang.Exception -> Ld6
            goto L110
        Ld6:
            return
        Ld7:
            java.lang.String r0 = r12.m     // Catch: java.lang.Exception -> L1f0
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L1f0
            if (r0 != 0) goto L110
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Exception -> L1f0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Exception -> L1f0
            java.lang.String r0 = r0.e()     // Catch: java.lang.Exception -> L1f0
            java.lang.String r4 = r12.m     // Catch: java.lang.Exception -> L1f0
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.c(r0, r4)     // Catch: java.lang.Exception -> L1f0
            r12.a = r0     // Catch: java.lang.Exception -> L1f0
            if (r0 != 0) goto Lfc
            java.lang.String r0 = r12.m     // Catch: java.lang.Exception -> L1f0
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.c(r0)     // Catch: java.lang.Exception -> L1f0
            r12.a = r0     // Catch: java.lang.Exception -> L1f0
        Lfc:
            com.tkay.expressad.d.c r0 = r12.a     // Catch: java.lang.Exception -> L1f0
            if (r0 == 0) goto L110
            com.tkay.expressad.d.c r0 = r12.a     // Catch: java.lang.Exception -> L1f0
            long r4 = r0.i()     // Catch: java.lang.Exception -> L1f0
            r12.l = r4     // Catch: java.lang.Exception -> L1f0
            com.tkay.expressad.d.c r0 = r12.a     // Catch: java.lang.Exception -> L1f0
            int r0 = r0.m()     // Catch: java.lang.Exception -> L1f0
            r12.o = r0     // Catch: java.lang.Exception -> L1f0
        L110:
            r0 = 0
            r4 = r0
        L112:
            int r5 = r13.size()
            if (r4 >= r5) goto L1e1
            java.lang.Object r5 = r13.get(r4)
            com.tkay.expressad.foundation.d.c r5 = (com.tkay.expressad.foundation.d.c) r5
            if (r5 == 0) goto L1dd
            int r6 = r12.p
            if (r6 == r1) goto L146
            if (r6 != r2) goto L127
            goto L146
        L127:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r5.aZ()
            r6.append(r7)
            java.lang.String r7 = r5.S()
            r6.append(r7)
            java.lang.String r7 = r5.B()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            goto L164
        L146:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r5.Z()
            r6.append(r7)
            java.lang.String r7 = r5.aZ()
            r6.append(r7)
            java.lang.String r7 = r5.S()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
        L164:
            boolean r7 = c(r5)
            if (r7 != 0) goto L174
            java.lang.String r7 = r5.S()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L1dd
        L174:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r7 = r12.i
            if (r7 == 0) goto L1dd
            monitor-enter(r7)
            r8 = r0
        L17a:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r9 = r12.i     // Catch: java.lang.Throwable -> L1d8
            int r9 = r9.size()     // Catch: java.lang.Throwable -> L1d8
            if (r8 >= r9) goto L1b3
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r9 = r12.i     // Catch: java.lang.Throwable -> L1d8
            java.lang.Object r9 = r9.get(r8)     // Catch: java.lang.Throwable -> L1d8
            java.util.Map r9 = (java.util.Map) r9     // Catch: java.lang.Throwable -> L1d8
            if (r9 == 0) goto L1b0
            boolean r10 = r9.containsKey(r6)     // Catch: java.lang.Throwable -> L1d8
            if (r10 == 0) goto L1b0
            java.lang.Object r10 = r9.get(r6)     // Catch: java.lang.Throwable -> L1d8
            com.tkay.expressad.videocommon.b.a r10 = (com.tkay.expressad.videocommon.b.a) r10     // Catch: java.lang.Throwable -> L1d8
            r10.a(r5)     // Catch: java.lang.Throwable -> L1d8
            int r11 = r12.o     // Catch: java.lang.Throwable -> L1d8
            r10.a(r11)     // Catch: java.lang.Throwable -> L1d8
            r10.a(r0)     // Catch: java.lang.Throwable -> L1d8
            r9.remove(r6)     // Catch: java.lang.Throwable -> L1d8
            r9.put(r6, r10)     // Catch: java.lang.Throwable -> L1d8
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r10 = r12.i     // Catch: java.lang.Throwable -> L1d8
            r10.set(r8, r9)     // Catch: java.lang.Throwable -> L1d8
            r8 = r3
            goto L1b4
        L1b0:
            int r8 = r8 + 1
            goto L17a
        L1b3:
            r8 = r0
        L1b4:
            if (r8 != 0) goto L1d8
            com.tkay.expressad.videocommon.b.a r8 = new com.tkay.expressad.videocommon.b.a     // Catch: java.lang.Throwable -> L1d8
            android.content.Context r9 = r12.j     // Catch: java.lang.Throwable -> L1d8
            java.util.concurrent.ExecutorService r10 = r12.k     // Catch: java.lang.Throwable -> L1d8
            java.lang.String r11 = r12.m     // Catch: java.lang.Throwable -> L1d8
            r8.<init>(r9, r5, r10, r11)     // Catch: java.lang.Throwable -> L1d8
            int r5 = r12.o     // Catch: java.lang.Throwable -> L1d8
            r8.a(r5)     // Catch: java.lang.Throwable -> L1d8
            int r5 = r12.p     // Catch: java.lang.Throwable -> L1d8
            r8.e(r5)     // Catch: java.lang.Throwable -> L1d8
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Throwable -> L1d8
            r5.<init>()     // Catch: java.lang.Throwable -> L1d8
            r5.put(r6, r8)     // Catch: java.lang.Throwable -> L1d8
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r6 = r12.i     // Catch: java.lang.Throwable -> L1d8
            r6.add(r5)     // Catch: java.lang.Throwable -> L1d8
        L1d8:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L1da
            goto L1dd
        L1da:
            r13 = move-exception
            monitor-exit(r7)
            throw r13
        L1dd:
            int r4 = r4 + 1
            goto L112
        L1e1:
            java.util.List<com.tkay.expressad.foundation.d.c> r13 = r12.d
            if (r13 == 0) goto L1f0
            int r13 = r13.size()
            if (r13 <= 0) goto L1f0
            java.util.List<com.tkay.expressad.foundation.d.c> r13 = r12.d
            r13.clear()
        L1f0:
            return
    }

    private static boolean b(com.tkay.expressad.foundation.d.c r3, java.lang.String r4) {
            boolean r0 = r3.j()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.ArrayList r0 = r3.aB()
            if (r0 == 0) goto L27
            java.util.ArrayList r0 = r3.aB()
            int r0 = r0.size()
            if (r0 <= 0) goto L27
            java.util.ArrayList r0 = r3.aB()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L27
            return r1
        L27:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L51
            int r3 = r3.av()
            if (r3 != 0) goto L51
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "check template download state:"
            r3.<init>(r0)
            com.tkay.expressad.videocommon.b.g r0 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r0 = r0.c(r4)
            r3.append(r0)
            com.tkay.expressad.videocommon.b.g r3 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r3.c(r4)
            if (r3 != 0) goto L51
            r3 = 0
            return r3
        L51:
            return r1
    }

    private static boolean b(com.tkay.expressad.videocommon.b.a r0, int r1) {
            boolean r0 = a(r0, r1)
            return r0
    }

    private static boolean b(java.lang.String r2, com.tkay.expressad.foundation.d.c r3) {
            boolean r0 = r3.H()
            r1 = 1
            if (r0 != 0) goto L59
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            goto L59
        Le:
            int r0 = r3.av()
            if (r0 != r1) goto L1b
            boolean r0 = c(r3)
            if (r0 != 0) goto L1b
            return r1
        L1b:
            java.util.ArrayList r0 = r3.aB()
            if (r0 == 0) goto L3b
            java.util.ArrayList r0 = r3.aB()
            int r0 = r0.size()
            if (r0 <= 0) goto L3b
            java.util.ArrayList r3 = r3.aB()
            r0 = 2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            boolean r3 = r3.contains(r0)
            if (r3 == 0) goto L3b
            return r1
        L3b:
            com.tkay.expressad.videocommon.b.g r3 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r3 = r3.c(r2)
            boolean r3 = com.tkay.expressad.foundation.h.w.b(r3)
            if (r3 == 0) goto L4a
            return r1
        L4a:
            com.tkay.expressad.videocommon.b.h r3 = com.tkay.expressad.videocommon.b.h.a.a
            java.lang.String r2 = r3.b(r2)
            boolean r2 = com.tkay.expressad.foundation.h.w.b(r2)
            if (r2 == 0) goto L57
            return r1
        L57:
            r2 = 0
            return r2
        L59:
            return r1
    }

    private static synchronized java.lang.String c(com.tkay.expressad.videocommon.b.a r6) {
            java.lang.Class<com.tkay.expressad.videocommon.b.n> r0 = com.tkay.expressad.videocommon.b.n.class
            monitor-enter(r0)
            if (r6 != 0) goto L9
            java.lang.String r6 = ""
            monitor-exit(r0)
            return r6
        L9:
            com.tkay.expressad.foundation.d.c r1 = r6.n()     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r1.S()     // Catch: java.lang.Throwable -> L39
            int r2 = r6.k()     // Catch: java.lang.Throwable -> L33
            r3 = 5
            if (r2 != r3) goto L37
            java.lang.String r6 = r6.e()     // Catch: java.lang.Throwable -> L33
            boolean r2 = com.tkay.expressad.foundation.h.w.a(r6)     // Catch: java.lang.Throwable -> L33
            if (r2 != 0) goto L37
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L33
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L33
            long r2 = r2.length()     // Catch: java.lang.Throwable -> L33
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L37
            r1 = r6
            goto L37
        L33:
            r6 = move-exception
            r6.getMessage()     // Catch: java.lang.Throwable -> L39
        L37:
            monitor-exit(r0)
            return r1
        L39:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    static java.util.concurrent.ConcurrentHashMap c(com.tkay.expressad.videocommon.b.n r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r0 = r0.g
            return r0
    }

    private static boolean c(com.tkay.expressad.foundation.d.c r1) {
            if (r1 == 0) goto L13
            int r1 = r1.J()     // Catch: java.lang.Throwable -> Lb
            r0 = 2
            if (r1 != r0) goto L13
            r1 = 1
            return r1
        Lb:
            r1 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L13
            r1.printStackTrace()
        L13:
            r1 = 0
            return r1
    }

    private int d(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            int r0 = r4.w()     // Catch: java.lang.Throwable -> L53
            r1 = 298(0x12a, float:4.18E-43)
            if (r0 != r1) goto L26
            com.tkay.expressad.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L53
            if (r4 != 0) goto L1f
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L53
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = r4.e()     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r3.m     // Catch: java.lang.Throwable -> L53
            com.tkay.expressad.d.c r4 = com.tkay.expressad.d.b.a(r4, r0)     // Catch: java.lang.Throwable -> L53
            r3.b = r4     // Catch: java.lang.Throwable -> L53
        L1f:
            com.tkay.expressad.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L53
            int r4 = r4.f()     // Catch: java.lang.Throwable -> L53
            return r4
        L26:
            int r4 = r4.w()     // Catch: java.lang.Throwable -> L53
            r0 = 42
            if (r4 != r0) goto L33
            int r4 = r3.h()     // Catch: java.lang.Throwable -> L53
            return r4
        L33:
            com.tkay.expressad.videocommon.e.d r4 = r3.n     // Catch: java.lang.Throwable -> L53
            if (r4 != 0) goto L4c
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L53
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r3.m     // Catch: java.lang.Throwable -> L53
            r2 = 0
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L53
            r3.n = r4     // Catch: java.lang.Throwable -> L53
        L4c:
            com.tkay.expressad.videocommon.e.d r4 = r3.n     // Catch: java.lang.Throwable -> L53
            int r4 = r4.v()     // Catch: java.lang.Throwable -> L53
            return r4
        L53:
            r4 = move-exception
            r4.getMessage()
            r4 = 100
            return r4
    }

    private void e() {
            r13 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r13.i
            if (r0 == 0) goto L82
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L7e
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7b
            r3 = 0
        La:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r4 = r13.i     // Catch: java.lang.Throwable -> L7b
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L7b
            if (r3 >= r4) goto L79
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r4 = r13.i     // Catch: java.lang.Throwable -> L7b
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L7b
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L7b
            java.util.Set r5 = r4.entrySet()     // Catch: java.lang.Throwable -> L7b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L7b
        L22:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L7b
            if (r6 == 0) goto L76
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L7b
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6     // Catch: java.lang.Throwable -> L7b
            java.lang.Object r6 = r6.getValue()     // Catch: java.lang.Throwable -> L7b
            com.tkay.expressad.videocommon.b.a r6 = (com.tkay.expressad.videocommon.b.a) r6     // Catch: java.lang.Throwable -> L7b
            if (r6 == 0) goto L22
            long r7 = r6.c()     // Catch: java.lang.Throwable -> L7b
            long r7 = r1 - r7
            long r9 = r13.l     // Catch: java.lang.Throwable -> L7b
            r11 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 * r11
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            r8 = 1
            if (r7 <= 0) goto L5b
            int r7 = r6.k()     // Catch: java.lang.Throwable -> L7b
            if (r7 != r8) goto L5b
            r6.j()     // Catch: java.lang.Throwable -> L7b
            int r7 = r13.o     // Catch: java.lang.Throwable -> L7b
            r6.a(r7)     // Catch: java.lang.Throwable -> L7b
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r7 = r13.i     // Catch: java.lang.Throwable -> L7b
            r7.remove(r4)     // Catch: java.lang.Throwable -> L7b
            int r3 = r3 + (-1)
        L5b:
            int r7 = r6.k()     // Catch: java.lang.Throwable -> L7b
            if (r7 == r8) goto L22
            int r7 = r6.k()     // Catch: java.lang.Throwable -> L7b
            r8 = 5
            if (r7 == r8) goto L22
            int r6 = r6.k()     // Catch: java.lang.Throwable -> L7b
            if (r6 == 0) goto L22
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r6 = r13.i     // Catch: java.lang.Throwable -> L7b
            r6.remove(r4)     // Catch: java.lang.Throwable -> L7b
            int r3 = r3 + (-1)
            goto L22
        L76:
            int r3 = r3 + 1
            goto La
        L79:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7b
            return
        L7b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7e
            throw r1     // Catch: java.lang.Throwable -> L7e
        L7e:
            r0 = move-exception
            r0.printStackTrace()
        L82:
            return
    }

    private void f() {
            r6 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r6.i
            if (r0 == 0) goto L57
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L57
            r1 = 0
        L6:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r2 = r6.i     // Catch: java.lang.Throwable -> L54
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L54
            if (r1 >= r2) goto L52
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r2 = r6.i     // Catch: java.lang.Throwable -> L54
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L54
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L54
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L54
        L1e:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L54
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L54
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L54
            com.tkay.expressad.videocommon.b.a r4 = (com.tkay.expressad.videocommon.b.a) r4     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L1e
            com.tkay.expressad.foundation.d.c r5 = r4.n()     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L1e
            boolean r5 = r4.b()     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L1e
            boolean r5 = r4.d()     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L1e
            r4.o()     // Catch: java.lang.Throwable -> L54
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r4 = r6.i     // Catch: java.lang.Throwable -> L54
            r4.remove(r2)     // Catch: java.lang.Throwable -> L54
            int r1 = r1 + (-1)
            goto L1e
        L4f:
            int r1 = r1 + 1
            goto L6
        L52:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        L54:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L57
            throw r1     // Catch: java.lang.Throwable -> L57
        L57:
            return
    }

    private static boolean g() {
            r0 = 1
            return r0
    }

    private int h() {
            r2 = this;
            r0 = 100
            com.tkay.expressad.d.c r1 = r2.a     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto Lc
            com.tkay.expressad.d.c r1 = r2.a     // Catch: java.lang.Exception -> Lc
            int r0 = r1.f()     // Catch: java.lang.Exception -> Lc
        Lc:
            return r0
    }

    public final com.tkay.expressad.videocommon.b.a a(int r22, boolean r23) {
            r21 = this;
            r1 = r21
            r0 = r23
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "isReady unitID "
            r2.<init>(r3)
            java.lang.String r3 = r1.m
            r2.append(r3)
            java.lang.String r3 = " ad_type "
            r2.append(r3)
            int r3 = r1.p
            r2.append(r3)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r2 = r1.i
            if (r2 == 0) goto L204
            monitor-enter(r2)
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r6 = 0
        L24:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r7 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r6 >= r7) goto L200
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r7 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.Object r7 = r7.get(r6)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.Map r7 = (java.util.Map) r7     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.Set r8 = r7.entrySet()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
        L3c:
            boolean r9 = r8.hasNext()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r9 == 0) goto L1f4
            java.lang.Object r9 = r8.next()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.Map$Entry r9 = (java.util.Map.Entry) r9     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.Object r9 = r9.getValue()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            com.tkay.expressad.videocommon.b.a r9 = (com.tkay.expressad.videocommon.b.a) r9     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r9 == 0) goto L1f0
            com.tkay.expressad.foundation.d.c r10 = r9.n()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r10 != 0) goto L58
            goto L1f0
        L58:
            com.tkay.expressad.foundation.d.c r10 = r9.n()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r0 == 0) goto L64
            boolean r11 = r10.A()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r11 == 0) goto L6c
        L64:
            if (r0 != 0) goto L84
            boolean r11 = r10.A()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r11 == 0) goto L84
        L6c:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r11 = "UnitCache isReady ==== isBidCampaign = "
            r9.<init>(r11)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r9.append(r0)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r11 = " campaign.isBidCampaign() = "
            r9.append(r11)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r10 = r10.A()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r9.append(r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            goto L1f0
        L84:
            java.lang.String r11 = r10.I()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r12 = r10.S()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r13 = ""
            if (r10 == 0) goto L9e
            com.tkay.expressad.foundation.d.c$c r14 = r10.M()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r14 == 0) goto L9e
            com.tkay.expressad.foundation.d.c$c r13 = r10.M()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r13 = r13.e()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
        L9e:
            r10.M()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r14 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r15 = 287(0x11f, float:4.02E-43)
            r3 = 94
            if (r14 == r3) goto Lae
            r14 = r22
            if (r14 != r15) goto Le9
            goto Lb0
        Lae:
            r14 = r22
        Lb0:
            boolean r16 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r16 != 0) goto Lc4
            java.lang.String r15 = "cmpt=1"
            boolean r15 = r13.contains(r15)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r15 != 0) goto Lc4
            boolean r13 = b(r10, r13)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r13 == 0) goto L3c
        Lc4:
            boolean r13 = b(r11, r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r13 == 0) goto Le9
            boolean r13 = r9.b()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r13 == 0) goto Ld5
            r9.o()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            goto L3c
        Ld5:
            boolean r12 = com.tkay.expressad.foundation.h.w.a(r12)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r12 == 0) goto Ldd
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        Ldd:
            int r12 = r1.b(r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r12 = a(r9, r12)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r12 == 0) goto Le9
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        Le9:
            java.lang.String r12 = r9.m()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r13 = r9.k()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r15 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r3 = 298(0x12a, float:4.18E-43)
            if (r15 != r3) goto L107
            int r3 = r1.b(r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r3 = a(r9, r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L107
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L107:
            r3 = 5
            r15 = 95
            if (r13 != r3) goto L148
            boolean r3 = r9.b()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L11e
            r9.o()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r3 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r3.remove(r7)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
        L11a:
            int r6 = r6 + (-1)
            goto L3c
        L11e:
            if (r12 != 0) goto L13d
            r9.l()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r3 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 != r15) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r3 = "isready ==========done but isEffectivePath:"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r0.append(r12)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r3 = " is feed"
            r0.append(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r3 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r0.append(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L13d:
            boolean r0 = a(r11, r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r0 == 0) goto L145
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L145:
            monitor-exit(r2)
            r2 = 0
            return r2
        L148:
            long r17 = r9.c()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r3 = r9.k()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r12 = 1
            if (r3 != r12) goto L177
            long r17 = r4 - r17
            r3 = r13
            long r12 = r1.l     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r19 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r19
            int r12 = (r17 > r12 ? 1 : (r17 == r12 ? 0 : -1))
            if (r12 <= 0) goto L178
            r9.j()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r12 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r12.remove(r7)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r6 = r6 + (-1)
            int r12 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r13 = 1
            if (r12 == r13) goto L3c
            int r12 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r13 = 94
            if (r12 != r13) goto L178
            goto L3c
        L177:
            r3 = r13
        L178:
            int r12 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r12 != r15) goto L199
            boolean r3 = r9.b()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L18b
            r9.o()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r3 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r3.remove(r7)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            goto L11a
        L18b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r3 = "==========isready ad_type is :"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            int r3 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r0.append(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L199:
            r12 = 4
            if (r3 == r12) goto L1e9
            r12 = 2
            if (r3 != r12) goto L1a0
            goto L1e9
        L1a0:
            r12 = 1
            if (r3 != r12) goto L1cb
            boolean r3 = r9.b()     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 != 0) goto L3c
            boolean r3 = com.tkay.expressad.b.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 != 0) goto L1cb
            int r3 = r1.b(r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r3 = a(r9, r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L1cb
            boolean r3 = a(r11, r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L1cb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            java.lang.String r3 = "isready  IS_DOWANLOAD_FINSH_PLAY is :"
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r3 = com.tkay.expressad.b.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r0.append(r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L1cb:
            int r3 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r12 = 94
            if (r3 == r12) goto L1d7
            int r3 = r1.p     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r12 = 287(0x11f, float:4.02E-43)
            if (r3 != r12) goto L3c
        L1d7:
            int r3 = r1.b(r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            boolean r3 = a(r9, r3)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L3c
            boolean r3 = a(r11, r10)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            if (r3 == 0) goto L3c
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            return r9
        L1e9:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r3 = r1.i     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            r3.remove(r7)     // Catch: java.lang.Throwable -> L1fa java.lang.Exception -> L1fc
            goto L11a
        L1f0:
            r14 = r22
            goto L3c
        L1f4:
            r14 = r22
            int r6 = r6 + 1
            goto L24
        L1fa:
            r0 = move-exception
            goto L202
        L1fc:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1fa
        L200:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1fa
            goto L204
        L202:
            monitor-exit(r2)
            throw r0
        L204:
            r2 = 0
            return r2
    }

    public final com.tkay.expressad.videocommon.b.a a(java.lang.String r5) {
            r4 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r4.i
            if (r0 == 0) goto L2b
            monitor-enter(r0)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r4.i     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2a
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2a
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto Lb
            boolean r3 = r2.containsKey(r5)     // Catch: java.lang.Throwable -> L2a
            if (r3 == 0) goto Lb
            java.lang.Object r5 = r2.get(r5)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.videocommon.b.a r5 = (com.tkay.expressad.videocommon.b.a) r5     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return r5
        L27:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
        L2a:
            monitor-exit(r0)
        L2b:
            r5 = 0
            return r5
    }

    public final java.util.List<com.tkay.expressad.videocommon.b.a> a(boolean r22, java.util.List<com.tkay.expressad.foundation.d.c> r23) {
            r21 = this;
            r1 = r21
            r0 = r22
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r3 = r1.i
            if (r3 == 0) goto L1dc
            monitor-enter(r3)
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r7 = 0
        L13:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r8 = r1.i     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            int r8 = r8.size()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r7 >= r8) goto L1d8
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r8 = r1.i     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.Object r8 = r8.get(r7)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.Map r8 = (java.util.Map) r8     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.Set r9 = r8.entrySet()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
        L2b:
            boolean r10 = r9.hasNext()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r10 == 0) goto L1ca
            java.lang.Object r10 = r9.next()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.Object r10 = r10.getValue()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            com.tkay.expressad.videocommon.b.a r10 = (com.tkay.expressad.videocommon.b.a) r10     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r10 == 0) goto L1c2
            com.tkay.expressad.foundation.d.c r11 = r10.n()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r11 != 0) goto L47
            goto L1c2
        L47:
            com.tkay.expressad.foundation.d.c r11 = r10.n()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.Iterator r12 = r23.iterator()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r13 = 0
        L50:
            boolean r14 = r12.hasNext()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r14 == 0) goto L92
            java.lang.Object r14 = r12.next()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            com.tkay.expressad.foundation.d.c r14 = (com.tkay.expressad.foundation.d.c) r14     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r11 == 0) goto L50
            if (r14 == 0) goto L50
            java.lang.String r16 = r11.Z()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r16 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r16 != 0) goto L50
            java.lang.String r16 = r14.Z()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r16 = android.text.TextUtils.isEmpty(r16)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r16 != 0) goto L50
            java.lang.String r6 = r11.aZ()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r15 = r14.aZ()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r6 = r6.equals(r15)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r6 == 0) goto L50
            java.lang.String r6 = r11.Z()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r14 = r14.Z()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r6 = r6.equals(r14)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r6 == 0) goto L50
            r13 = 1
            goto L50
        L92:
            if (r13 == 0) goto L1c2
            if (r0 == 0) goto L9c
            boolean r6 = r11.A()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r6 == 0) goto La4
        L9c:
            if (r0 != 0) goto Lbc
            boolean r6 = r11.A()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r6 == 0) goto Lbc
        La4:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r10 = "UnitCache isReady ==== isBidCampaign = "
            r6.<init>(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r6.append(r0)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r10 = " campaign.isBidCampaign() = "
            r6.append(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r10 = r11.A()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r6.append(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        Lbc:
            java.lang.String r6 = r11.I()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r12 = r11.S()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r13 = ""
            if (r11 == 0) goto Ld6
            com.tkay.expressad.foundation.d.c$c r14 = r11.M()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r14 == 0) goto Ld6
            com.tkay.expressad.foundation.d.c$c r13 = r11.M()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r13 = r13.e()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
        Ld6:
            r11.M()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r14 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r14 != 0) goto Led
            java.lang.String r14 = "cmpt=1"
            boolean r14 = r13.contains(r14)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r14 != 0) goto Led
            boolean r13 = b(r11, r13)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r13 == 0) goto L1c2
        Led:
            boolean r13 = b(r6, r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r13 == 0) goto L118
            boolean r13 = r10.b()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r13 == 0) goto Lfe
            r10.o()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        Lfe:
            boolean r12 = com.tkay.expressad.foundation.h.w.a(r12)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r12 == 0) goto L109
            r2.add(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        L109:
            int r12 = r1.b(r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r12 = a(r10, r12)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r12 == 0) goto L118
            r2.add(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        L118:
            java.lang.String r12 = r10.m()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            int r13 = r10.k()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r14 = 5
            if (r13 != r14) goto L14e
            boolean r13 = r10.b()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r13 == 0) goto L139
            r10.o()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r6 = r1.i     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r6.remove(r8)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            int r7 = r7 + (-1)
            goto L2b
        L139:
            if (r12 != 0) goto L140
            r10.l()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        L140:
            boolean r6 = a(r6, r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r6 == 0) goto L14b
            r2.add(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c2
        L14b:
            r0 = 0
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1d2
            return r0
        L14e:
            long r14 = r10.c()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            int r12 = r10.k()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r0 = 1
            if (r12 != r0) goto L170
            long r14 = r4 - r14
            r17 = r4
            long r4 = r1.l     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r19 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r19
            int r0 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r0 <= 0) goto L172
            r10.j()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r1.i     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r0.remove(r8)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1bf
        L170:
            r17 = r4
        L172:
            r0 = 4
            if (r13 == r0) goto L1ba
            r0 = 2
            if (r13 != r0) goto L179
            goto L1ba
        L179:
            r0 = 1
            if (r13 != r0) goto L1a6
            boolean r0 = r10.b()     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 != 0) goto L1c4
            boolean r0 = com.tkay.expressad.b.p     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 != 0) goto L1a6
            int r0 = r1.b(r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r0 = a(r10, r0)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 == 0) goto L1a6
            boolean r0 = a(r6, r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 == 0) goto L1a6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            java.lang.String r4 = "isready  IS_DOWANLOAD_FINSH_PLAY is :"
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r4 = com.tkay.expressad.b.p     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r0.append(r4)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r2.add(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c4
        L1a6:
            int r0 = r1.b(r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            boolean r0 = a(r10, r0)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 == 0) goto L1c4
            boolean r0 = a(r6, r11)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            if (r0 == 0) goto L1c4
            r2.add(r10)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            goto L1c4
        L1ba:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r1.i     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
            r0.remove(r8)     // Catch: java.lang.Throwable -> L1d2 java.lang.Exception -> L1d4
        L1bf:
            int r7 = r7 + (-1)
            goto L1c4
        L1c2:
            r17 = r4
        L1c4:
            r0 = r22
            r4 = r17
            goto L2b
        L1ca:
            r17 = r4
            int r7 = r7 + 1
            r0 = r22
            goto L13
        L1d2:
            r0 = move-exception
            goto L1da
        L1d4:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1d2
        L1d8:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1d2
            goto L1dc
        L1da:
            monitor-exit(r3)
            throw r0
        L1dc:
            return r2
    }

    public final void a() {
            r16 = this;
            r1 = r16
            r16.e()
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r2 = r1.i
            if (r2 == 0) goto L1b7
            monitor-enter(r2)
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r1.i     // Catch: java.lang.Throwable -> L1b4
            boolean r0 = a(r0)     // Catch: java.lang.Throwable -> L1b4
            r3 = 1
            if (r0 != 0) goto L15
            r1.e = r3     // Catch: java.lang.Throwable -> L1b4
        L15:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r1.i     // Catch: java.lang.Throwable -> L1b4
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L1b4
        L1b:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L1b4
            if (r4 == 0) goto L1b2
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L1b4
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L1b4
            if (r4 == 0) goto L1b
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L1b4
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L1b4
        L31:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L1b4
            if (r5 == 0) goto L1b
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L1b4
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L1b4
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.videocommon.b.a r5 = (com.tkay.expressad.videocommon.b.a) r5     // Catch: java.lang.Throwable -> L1b4
            if (r5 == 0) goto L31
            boolean r6 = r5.b()     // Catch: java.lang.Throwable -> L1b4
            if (r6 != 0) goto L31
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            r7 = 95
            if (r6 != r7) goto L53
            r1.e = r3     // Catch: java.lang.Throwable -> L1b4
        L53:
            int r6 = r5.k()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.foundation.d.c r8 = r5.n()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.videocommon.b.n$2 r9 = new com.tkay.expressad.videocommon.b.n$2     // Catch: java.lang.Throwable -> L1b4
            r9.<init>(r1, r8)     // Catch: java.lang.Throwable -> L1b4
            r5.a(r9)     // Catch: java.lang.Throwable -> L1b4
            int r9 = r1.b(r8)     // Catch: java.lang.Throwable -> L1b4
            int r10 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r10 != r3) goto L7b
            com.tkay.expressad.d.c r9 = r1.a     // Catch: java.lang.Throwable -> L1b4
            if (r9 != 0) goto L77
            java.lang.String r9 = r1.m     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.d.c r9 = com.tkay.expressad.d.c.c(r9)     // Catch: java.lang.Throwable -> L1b4
            r1.a = r9     // Catch: java.lang.Throwable -> L1b4
        L77:
            int r9 = r16.h()     // Catch: java.lang.Throwable -> L1b4
        L7b:
            r5.d(r9)     // Catch: java.lang.Throwable -> L1b4
            int r10 = r1.p     // Catch: java.lang.Throwable -> L1b4
            r11 = 94
            r12 = 298(0x12a, float:4.18E-43)
            r13 = 287(0x11f, float:4.02E-43)
            if (r10 == r11) goto Lde
            int r10 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r10 == r13) goto Lde
            int r10 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r10 != r7) goto L91
            goto Lde
        L91:
            int r10 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r10 != r12) goto Lb7
            com.tkay.expressad.d.c r10 = r1.b     // Catch: java.lang.Throwable -> L1b4
            if (r10 != 0) goto Lac
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.foundation.b.b r10 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r10 = r10.e()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r15 = r1.m     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.d.c r10 = com.tkay.expressad.d.b.a(r10, r15)     // Catch: java.lang.Throwable -> L1b4
            r1.b = r10     // Catch: java.lang.Throwable -> L1b4
        Lac:
            com.tkay.expressad.d.c r10 = r1.b     // Catch: java.lang.Throwable -> L1b4
            if (r10 == 0) goto Lb7
            com.tkay.expressad.d.c r10 = r1.b     // Catch: java.lang.Throwable -> L1b4
            int r10 = r10.g()     // Catch: java.lang.Throwable -> L1b4
            goto Lb8
        Lb7:
            r10 = 0
        Lb8:
            int r15 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r15 != r3) goto L109
            com.tkay.expressad.d.c r15 = r1.a     // Catch: java.lang.Throwable -> L1b4
            if (r15 != 0) goto Ld3
            com.tkay.expressad.d.b.a()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.foundation.b.b r15 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r15 = r15.e()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r14 = r1.m     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.d.c r14 = com.tkay.expressad.d.b.a(r15, r14)     // Catch: java.lang.Throwable -> L1b4
            r1.a = r14     // Catch: java.lang.Throwable -> L1b4
        Ld3:
            com.tkay.expressad.d.c r14 = r1.a     // Catch: java.lang.Throwable -> L1b4
            if (r14 == 0) goto L109
            com.tkay.expressad.d.c r10 = r1.a     // Catch: java.lang.Throwable -> L1b4
            int r10 = r10.g()     // Catch: java.lang.Throwable -> L1b4
            goto L109
        Lde:
            com.tkay.expressad.videocommon.e.d r10 = r1.n     // Catch: java.lang.Throwable -> L1b4
            if (r10 != 0) goto Lfd
            com.tkay.expressad.videocommon.e.c r10 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.foundation.b.b r14 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r14 = r14.e()     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r15 = r1.m     // Catch: java.lang.Throwable -> L1b4
            int r7 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r7 != r13) goto Lf6
            r7 = r3
            goto Lf7
        Lf6:
            r7 = 0
        Lf7:
            com.tkay.expressad.videocommon.e.d r7 = r10.a(r14, r15, r7)     // Catch: java.lang.Throwable -> L1b4
            r1.n = r7     // Catch: java.lang.Throwable -> L1b4
        Lfd:
            com.tkay.expressad.videocommon.e.d r7 = r1.n     // Catch: java.lang.Throwable -> L1b4
            if (r7 == 0) goto L108
            com.tkay.expressad.videocommon.e.d r7 = r1.n     // Catch: java.lang.Throwable -> L1b4
            int r10 = r7.x()     // Catch: java.lang.Throwable -> L1b4
            goto L109
        L108:
            r10 = 0
        L109:
            r5.b(r10)     // Catch: java.lang.Throwable -> L1b4
            if (r8 == 0) goto L113
            int r7 = r8.aC()     // Catch: java.lang.Throwable -> L1b4
            goto L114
        L113:
            r7 = r3
        L114:
            r5.c(r7)     // Catch: java.lang.Throwable -> L1b4
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r15 = "ready_rate : "
            r14.<init>(r15)     // Catch: java.lang.Throwable -> L1b4
            r14.append(r9)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r15 = " cd_rate : "
            r14.append(r15)     // Catch: java.lang.Throwable -> L1b4
            r14.append(r10)     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r10 = " videoCtnType : "
            r14.append(r10)     // Catch: java.lang.Throwable -> L1b4
            r14.append(r7)     // Catch: java.lang.Throwable -> L1b4
            int r7 = r1.b(r8)     // Catch: java.lang.Throwable -> L1b4
            boolean r7 = a(r5, r7)     // Catch: java.lang.Throwable -> L1b4
            if (r7 == 0) goto L175
            com.tkay.expressad.videocommon.d.b r7 = r1.f     // Catch: java.lang.Throwable -> L1b4
            if (r7 == 0) goto L152
            int r7 = r1.p     // Catch: java.lang.Throwable -> L1b4
            r10 = 297(0x129, float:4.16E-43)
            if (r7 == r10) goto L149
            int r7 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r7 != r12) goto L152
        L149:
            com.tkay.expressad.videocommon.d.b r7 = r1.f     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r10 = r8.S()     // Catch: java.lang.Throwable -> L1b4
            r7.a(r10)     // Catch: java.lang.Throwable -> L1b4
        L152:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r7 = r1.g     // Catch: java.lang.Throwable -> L1b4
            if (r7 == 0) goto L175
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r7 = r1.g     // Catch: java.lang.Throwable -> L1b4
            int r7 = r7.size()     // Catch: java.lang.Throwable -> L1b4
            if (r7 <= 0) goto L175
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r7 = r1.g     // Catch: java.lang.Throwable -> L1b4
            java.lang.String r10 = r8.Z()     // Catch: java.lang.Throwable -> L1b4
            java.lang.Object r7 = r7.get(r10)     // Catch: java.lang.Throwable -> L1b4
            com.tkay.expressad.videocommon.d.b r7 = (com.tkay.expressad.videocommon.d.b) r7     // Catch: java.lang.Throwable -> L1b4
            if (r7 == 0) goto L175
            if (r8 == 0) goto L175
            java.lang.String r8 = r8.S()     // Catch: java.lang.Throwable -> L1b4
            r7.a(r8)     // Catch: java.lang.Throwable -> L1b4
        L175:
            if (r6 == r3) goto L31
            r7 = 5
            if (r6 == r7) goto L31
            r7 = 4
            if (r6 == r7) goto L31
            r7 = 2
            if (r6 == r7) goto L184
            boolean r6 = r1.e     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto L31
        L184:
            com.tkay.expressad.videocommon.b.d r6 = r1.h     // Catch: java.lang.Throwable -> L1b4
            r5.a(r6)     // Catch: java.lang.Throwable -> L1b4
            boolean r6 = a(r5, r9)     // Catch: java.lang.Throwable -> L1b4
            if (r6 == 0) goto L19c
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r6 == r11) goto L197
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r6 != r13) goto L31
        L197:
            r5.h()     // Catch: java.lang.Throwable -> L1b4
            goto L31
        L19c:
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r6 == r3) goto L1aa
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            r7 = 95
            if (r6 == r7) goto L1aa
            int r6 = r1.p     // Catch: java.lang.Throwable -> L1b4
            if (r6 != r12) goto L1ad
        L1aa:
            r6 = 0
            r1.e = r6     // Catch: java.lang.Throwable -> L1b4
        L1ad:
            r5.h()     // Catch: java.lang.Throwable -> L1b4
            goto L31
        L1b2:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b4
            return
        L1b4:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
        L1b7:
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.add(r2)
        L9:
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r1.d
            r1.b(r2)
            return
    }

    public final void a(com.tkay.expressad.videocommon.d.b r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(java.lang.String r2, com.tkay.expressad.videocommon.d.b r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r0 = r1.g
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.g = r0
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.expressad.videocommon.d.b> r0 = r1.g
            r0.put(r2, r3)
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.d
            if (r0 == 0) goto L9
            if (r2 == 0) goto L9
            r0.addAll(r2)
        L9:
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r1.d
            r1.b(r2)
            return
    }

    public final com.tkay.expressad.videocommon.b.a b(int r1, boolean r2) {
            r0 = this;
            com.tkay.expressad.videocommon.b.a r1 = r0.a(r1, r2)     // Catch: java.lang.Throwable -> L5
            return r1
        L5:
            r1 = move-exception
            r1.getMessage()
            r1 = 0
            return r1
    }

    public final void b() {
            r8 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r8.i     // Catch: java.lang.Throwable -> L5e
            if (r0 == 0) goto L5e
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r8.i     // Catch: java.lang.Throwable -> L5e
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L5e
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r8.i     // Catch: java.lang.Throwable -> L5b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L5b
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L59
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L5b
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto Ld
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> L5b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L5b
        L23:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L5b
            if (r3 == 0) goto Ld
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L5b
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L5b
            com.tkay.expressad.videocommon.b.a r3 = (com.tkay.expressad.videocommon.b.a) r3     // Catch: java.lang.Throwable -> L5b
            if (r3 == 0) goto L23
            int r4 = r3.k()     // Catch: java.lang.Throwable -> L5b
            r5 = 1
            if (r4 == r5) goto L23
            r5 = 5
            if (r4 == r5) goto L23
            int r5 = com.tkay.expressad.foundation.h.k.a()     // Catch: java.lang.Throwable -> L5b
            r6 = 9
            r7 = 2
            if (r5 == r6) goto L50
            int r5 = r8.o     // Catch: java.lang.Throwable -> L5b
            if (r5 != r7) goto L50
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5b
            return
        L50:
            if (r4 == r7) goto L54
            if (r4 != 0) goto L23
        L54:
            r3.h()     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5b
            return
        L59:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            return
        L5b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            throw r1     // Catch: java.lang.Throwable -> L5e
        L5e:
            return
    }

    public final void b(java.lang.String r6) {
            r5 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r5.i     // Catch: java.lang.Exception -> L56
            monitor-enter(r0)     // Catch: java.lang.Exception -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L53
            if (r1 != 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r5.i     // Catch: java.lang.Throwable -> L53
            if (r1 == 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r5.i     // Catch: java.lang.Throwable -> L53
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L53
            if (r1 <= 0) goto L51
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r5.i     // Catch: java.lang.Throwable -> L53
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L53
        L1b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L51
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L53
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L1b
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L53
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L53
        L31:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L1b
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L53
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L31
            java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Throwable -> L53
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4     // Catch: java.lang.Throwable -> L53
            boolean r4 = android.text.TextUtils.equals(r4, r6)     // Catch: java.lang.Throwable -> L53
            if (r4 == 0) goto L31
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r4 = r5.i     // Catch: java.lang.Throwable -> L53
            r4.remove(r2)     // Catch: java.lang.Throwable -> L53
            goto L31
        L51:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            return
        L53:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L56
            throw r6     // Catch: java.lang.Exception -> L56
        L56:
            return
    }

    public final void c() {
            r7 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r7.i
            if (r0 == 0) goto L4b
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L4b
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r7.i     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L48
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L46
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L48
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto Lb
            java.util.Set r3 = r2.entrySet()     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L48
        L21:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r4 == 0) goto Lb
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L48
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L48
            java.lang.Object r4 = r4.getValue()     // Catch: java.lang.Throwable -> L48
            com.tkay.expressad.videocommon.b.a r4 = (com.tkay.expressad.videocommon.b.a) r4     // Catch: java.lang.Throwable -> L48
            if (r4 == 0) goto L21
            int r5 = r4.k()     // Catch: java.lang.Throwable -> L48
            r6 = 1
            if (r5 != r6) goto L21
            r4.j()     // Catch: java.lang.Throwable -> L48
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r7.i     // Catch: java.lang.Throwable -> L48
            r1.remove(r2)     // Catch: java.lang.Throwable -> L48
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L48
            return
        L46:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4b
            return
        L48:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4b
            throw r1     // Catch: java.lang.Throwable -> L4b
        L4b:
            return
    }

    public final void d() {
            r4 = this;
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r0 = r4.i
            if (r0 == 0) goto L45
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r4.i     // Catch: java.lang.Throwable -> L42
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L42
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L42
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Throwable -> L42
            if (r2 != 0) goto L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            return
        L1b:
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> L42
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L42
        L23:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto Lb
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L42
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L42
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L42
            com.tkay.expressad.videocommon.b.a r3 = (com.tkay.expressad.videocommon.b.a) r3     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L23
            r3.o()     // Catch: java.lang.Throwable -> L42
            goto L23
        L3b:
            java.util.concurrent.CopyOnWriteArrayList<java.util.Map<java.lang.String, com.tkay.expressad.videocommon.b.a>> r1 = r4.i     // Catch: java.lang.Throwable -> L42
            r1.clear()     // Catch: java.lang.Throwable -> L42
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            goto L45
        L42:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L45
            throw r1     // Catch: java.lang.Throwable -> L45
        L45:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d
            if (r0 == 0) goto L54
            int r0 = r0.size()
            if (r0 <= 0) goto L54
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.d
            r0.clear()
        L54:
            return
    }
}
