package com.mbridge.msdk.mbbanner.common.c;

public class a {
    private static final java.lang.String a = null;
    private static volatile com.mbridge.msdk.mbbanner.common.c.a h;
    private android.content.Context b;
    private com.mbridge.msdk.mbbanner.common.util.a c;
    private java.util.Map<java.lang.String, com.mbridge.msdk.mbbanner.common.a.c> d;
    private java.util.Map<java.lang.String, java.lang.Boolean> e;
    private java.util.Map<java.lang.String, android.os.Handler> f;
    private java.util.Map<java.lang.String, java.lang.Integer> g;



    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.c.a> r0 = com.mbridge.msdk.mbbanner.common.c.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.c.a.a = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1.b = r0
            com.mbridge.msdk.mbbanner.common.util.a r0 = new com.mbridge.msdk.mbbanner.common.util.a
            r0.<init>()
            r1.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.e = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.f = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.g = r0
            return
    }

    public static com.mbridge.msdk.mbbanner.common.c.a a() {
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.h
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.mbbanner.common.c.a> r0 = com.mbridge.msdk.mbbanner.common.c.a.class
            monitor-enter(r0)
            com.mbridge.msdk.mbbanner.common.c.a r1 = com.mbridge.msdk.mbbanner.common.c.a.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.mbbanner.common.c.a r1 = new com.mbridge.msdk.mbbanner.common.c.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.mbbanner.common.c.a.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.mbbanner.common.c.a r0 = com.mbridge.msdk.mbbanner.common.c.a.h
            return r0
    }

    static java.util.Map a(com.mbridge.msdk.mbbanner.common.c.a r0) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r0.e
            return r0
    }

    static java.util.Map b(com.mbridge.msdk.mbbanner.common.c.a r0) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r0.g
            return r0
    }

    static com.mbridge.msdk.mbbanner.common.util.a c(com.mbridge.msdk.mbbanner.common.c.a r0) {
            com.mbridge.msdk.mbbanner.common.util.a r0 = r0.c
            return r0
    }

    static java.lang.String c() {
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.c.a.a
            return r0
    }

    public final void a(int r8, java.lang.String r9, java.lang.String r10, com.mbridge.msdk.mbbanner.common.a.b r11, com.mbridge.msdk.mbbanner.common.b.b r12) {
            r7 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            boolean r0 = r0.containsKey(r10)
            r1 = 0
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            java.lang.Object r0 = r0.get(r10)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            goto L17
        L16:
            r0 = r1
        L17:
            r2 = 0
            r3 = 1
            if (r8 == r3) goto L7f
            r4 = 2
            if (r8 == r4) goto L60
            r5 = 3
            r6 = 4
            if (r8 == r5) goto L4f
            if (r8 == r6) goto L26
            goto L9b
        L26:
            if (r0 != 0) goto L32
            java.util.Map<java.lang.String, java.lang.Integer> r8 = r7.g
            java.lang.Integer r9 = java.lang.Integer.valueOf(r1)
            r8.put(r10, r9)
            goto L9b
        L32:
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            boolean r9 = r9.containsKey(r10)
            if (r9 == 0) goto L45
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            java.lang.Object r9 = r9.get(r10)
            android.os.Handler r9 = (android.os.Handler) r9
            r9.removeCallbacksAndMessages(r2)
        L45:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r9.put(r10, r8)
            goto L9b
        L4f:
            if (r0 == r4) goto L53
            if (r0 != r6) goto L9b
        L53:
            java.util.Map<java.lang.String, java.lang.Integer> r8 = r7.g
            java.lang.Integer r0 = java.lang.Integer.valueOf(r3)
            r8.put(r10, r0)
            r7.b(r9, r10, r11, r12)
            goto L9b
        L60:
            if (r0 != r3) goto L9b
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            boolean r9 = r9.containsKey(r10)
            if (r9 == 0) goto L75
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            java.lang.Object r9 = r9.get(r10)
            android.os.Handler r9 = (android.os.Handler) r9
            r9.removeCallbacksAndMessages(r2)
        L75:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r9.put(r10, r8)
            goto L9b
        L7f:
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            boolean r9 = r9.containsKey(r10)
            if (r9 == 0) goto L92
            java.util.Map<java.lang.String, android.os.Handler> r9 = r7.f
            java.lang.Object r9 = r9.get(r10)
            android.os.Handler r9 = (android.os.Handler) r9
            r9.removeCallbacksAndMessages(r2)
        L92:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r9.put(r10, r8)
        L9b:
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, android.os.Handler> r0 = r2.f
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L19
            java.util.Map<java.lang.String, android.os.Handler> r0 = r2.f
            java.lang.Object r0 = r0.get(r3)
            android.os.Handler r0 = (android.os.Handler) r0
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            java.util.Map<java.lang.String, android.os.Handler> r0 = r2.f
            r0.remove(r3)
        L19:
            return
    }

    public final void a(java.lang.String r5, java.lang.String r6, com.mbridge.msdk.mbbanner.common.a.b r7, com.mbridge.msdk.mbbanner.common.b.b r8) {
            r4 = this;
            android.content.Context r0 = r4.b
            if (r0 != 0) goto Lc
            com.mbridge.msdk.mbbanner.common.util.a r5 = r4.c
            java.lang.String r7 = "Banner Context == null!"
            r5.a(r8, r7, r6)
            return
        Lc:
            if (r7 == 0) goto L88
            if (r8 != 0) goto L12
            goto L88
        L12:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r4.e
            if (r0 == 0) goto L32
            boolean r0 = r0.containsKey(r6)
            if (r0 == 0) goto L32
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r4.e
            java.lang.Object r0 = r0.get(r6)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L32
            com.mbridge.msdk.mbbanner.common.util.a r5 = r4.c
            java.lang.String r7 = "Current unit is loading!"
            r5.a(r8, r7, r6)
            return
        L32:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r4.e
            r1 = 1
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)
            r0.put(r6, r2)
            java.util.Map<java.lang.String, com.mbridge.msdk.mbbanner.common.a.c> r0 = r4.d
            boolean r0 = r0.containsKey(r6)
            if (r0 == 0) goto L4d
            java.util.Map<java.lang.String, com.mbridge.msdk.mbbanner.common.a.c> r0 = r4.d
            java.lang.Object r0 = r0.get(r6)
            com.mbridge.msdk.mbbanner.common.a.c r0 = (com.mbridge.msdk.mbbanner.common.a.c) r0
            goto L76
        L4d:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.d r0 = r2.e(r0, r6)
            if (r0 != 0) goto L63
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r6)
        L63:
            int r0 = r0.v()
            int r0 = r0 * r1
            com.mbridge.msdk.mbbanner.common.a.c r1 = new com.mbridge.msdk.mbbanner.common.a.c
            r2 = 0
            java.lang.String r3 = ""
            r1.<init>(r6, r3, r2, r0)
            java.util.Map<java.lang.String, com.mbridge.msdk.mbbanner.common.a.c> r0 = r4.d
            r0.put(r6, r1)
            r0 = r1
        L76:
            com.mbridge.msdk.mbbanner.common.c.b r1 = new com.mbridge.msdk.mbbanner.common.c.b
            android.content.Context r2 = r4.b
            com.mbridge.msdk.mbbanner.common.util.a r3 = r4.c
            r1.<init>(r2, r0, r8, r3)
            com.mbridge.msdk.mbbanner.common.c.a$1 r8 = new com.mbridge.msdk.mbbanner.common.c.a$1
            r8.<init>(r4, r7)
            r1.a(r5, r6, r7, r8)
            return
        L88:
            com.mbridge.msdk.mbbanner.common.util.a r5 = r4.c
            java.lang.String r7 = "Banner request parameters or callback empty!"
            r5.a(r8, r7, r6)
            return
    }

    public final void b() {
            r3 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.mbbanner.common.a.c> r0 = r3.d
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r3.e
            if (r0 == 0) goto Le
            r0.clear()
        Le:
            java.util.Map<java.lang.String, android.os.Handler> r0 = r3.f
            if (r0 == 0) goto L3c
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L1a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            if (r2 == 0) goto L1a
            java.lang.Object r1 = r1.getValue()
            android.os.Handler r1 = (android.os.Handler) r1
            r2 = 0
            r1.removeCallbacksAndMessages(r2)
            goto L1a
        L37:
            java.util.Map<java.lang.String, android.os.Handler> r0 = r3.f
            r0.clear()
        L3c:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r3.g
            if (r0 == 0) goto L43
            r0.clear()
        L43:
            return
    }

    public final void b(java.lang.String r9, java.lang.String r10, com.mbridge.msdk.mbbanner.common.a.b r11, com.mbridge.msdk.mbbanner.common.b.b r12) {
            r8 = this;
            if (r11 == 0) goto L3c
            int r0 = r11.b()
            if (r0 > 0) goto L9
            goto L3c
        L9:
            java.util.Map<java.lang.String, android.os.Handler> r0 = r8.f
            boolean r0 = r0.containsKey(r10)
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, android.os.Handler> r0 = r8.f
            java.lang.Object r0 = r0.get(r10)
            android.os.Handler r0 = (android.os.Handler) r0
            goto L24
        L1a:
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            java.util.Map<java.lang.String, android.os.Handler> r1 = r8.f
            r1.put(r10, r0)
        L24:
            com.mbridge.msdk.mbbanner.common.c.a$2 r7 = new com.mbridge.msdk.mbbanner.common.c.a$2
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r12
            r5 = r9
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r9 = 0
            r0.removeCallbacksAndMessages(r9)
            int r9 = r11.b()
            long r9 = (long) r9
            r0.postDelayed(r7, r9)
            return
        L3c:
            java.lang.String r9 = com.mbridge.msdk.mbbanner.common.c.a.a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "doUnitRotation: Illegal banner request parameters! && unitId="
            r11.append(r12)
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            com.mbridge.msdk.foundation.tools.z.d(r9, r10)
            return
    }
}
