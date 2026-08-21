package com.tkay.expressad.mbbanner.a.d;

public class a {
    private static final java.lang.String a = null;
    private static volatile com.tkay.expressad.mbbanner.a.d.a h;
    private android.content.Context b;
    private com.tkay.expressad.mbbanner.a.e.a c;
    private java.util.Map<java.lang.String, com.tkay.expressad.mbbanner.a.b.e> d;
    private java.util.Map<java.lang.String, java.lang.Boolean> e;
    private java.util.Map<java.lang.String, android.os.Handler> f;
    private java.util.Map<java.lang.String, java.lang.Integer> g;


    static {
            java.lang.Class<com.tkay.expressad.mbbanner.a.d.a> r0 = com.tkay.expressad.mbbanner.a.d.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.mbbanner.a.d.a.a = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1.b = r0
            com.tkay.expressad.mbbanner.a.e.a r0 = new com.tkay.expressad.mbbanner.a.e.a
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

    public static com.tkay.expressad.mbbanner.a.d.a a() {
            com.tkay.expressad.mbbanner.a.d.a r0 = com.tkay.expressad.mbbanner.a.d.a.h
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.mbbanner.a.d.a> r0 = com.tkay.expressad.mbbanner.a.d.a.class
            monitor-enter(r0)
            com.tkay.expressad.mbbanner.a.d.a r1 = com.tkay.expressad.mbbanner.a.d.a.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.mbbanner.a.d.a r1 = new com.tkay.expressad.mbbanner.a.d.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.mbbanner.a.d.a.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.mbbanner.a.d.a r0 = com.tkay.expressad.mbbanner.a.d.a.h
            return r0
    }

    static java.util.Map a(com.tkay.expressad.mbbanner.a.d.a r0) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r0.e
            return r0
    }

    private void a(java.lang.String r3, com.tkay.expressad.mbbanner.a.b.d r4, com.tkay.expressad.mbbanner.a.c.b r5) {
            r2 = this;
            android.content.Context r0 = r2.b
            if (r0 != 0) goto Lc
            com.tkay.expressad.mbbanner.a.e.a r4 = r2.c
            java.lang.String r0 = "Banner Context == null!"
            r4.a(r5, r0, r3)
            return
        Lc:
            if (r4 == 0) goto L46
            if (r5 != 0) goto L11
            goto L46
        L11:
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r2.e
            if (r4 == 0) goto L31
            boolean r4 = r4.containsKey(r3)
            if (r4 == 0) goto L31
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r2.e
            java.lang.Object r4 = r4.get(r3)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L31
            com.tkay.expressad.mbbanner.a.e.a r4 = r2.c
            java.lang.String r0 = "Current unit is loading!"
            r4.a(r5, r0, r3)
            return
        L31:
            java.util.Map<java.lang.String, java.lang.Boolean> r4 = r2.e
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            r4.put(r3, r0)
            com.tkay.expressad.mbbanner.a.b.e r3 = r2.b(r3)
            com.tkay.expressad.mbbanner.a.d.b r4 = new com.tkay.expressad.mbbanner.a.d.b
            android.content.Context r0 = r2.b
            com.tkay.expressad.mbbanner.a.e.a r1 = r2.c
            r4.<init>(r0, r3, r5, r1)
            return
        L46:
            com.tkay.expressad.mbbanner.a.e.a r4 = r2.c
            java.lang.String r0 = "Banner request parameters or callback empty!"
            r4.a(r5, r0, r3)
            return
    }

    private com.tkay.expressad.mbbanner.a.b.e b(java.lang.String r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.tkay.expressad.mbbanner.a.b.e> r0 = r3.d
            boolean r0 = r0.containsKey(r4)
            if (r0 == 0) goto L11
            java.util.Map<java.lang.String, com.tkay.expressad.mbbanner.a.b.e> r0 = r3.d
            java.lang.Object r4 = r0.get(r4)
            com.tkay.expressad.mbbanner.a.b.e r4 = (com.tkay.expressad.mbbanner.a.b.e) r4
            goto L39
        L11:
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.b.c(r0, r4)
            if (r0 != 0) goto L26
            com.tkay.expressad.d.c r0 = com.tkay.expressad.d.c.c(r4)
        L26:
            int r0 = r0.t()
            int r0 = r0 * 1
            com.tkay.expressad.mbbanner.a.b.e r1 = new com.tkay.expressad.mbbanner.a.b.e
            java.lang.String r2 = ""
            r1.<init>(r4, r2, r0)
            java.util.Map<java.lang.String, com.tkay.expressad.mbbanner.a.b.e> r0 = r3.d
            r0.put(r4, r1)
            r4 = r1
        L39:
            return r4
    }

    public final void a(int r8, java.lang.String r9) {
            r7 = this;
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            boolean r0 = r0.containsKey(r9)
            r1 = 0
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            java.lang.Object r0 = r0.get(r9)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            goto L17
        L16:
            r0 = r1
        L17:
            r2 = 0
            r3 = 1
            if (r8 == r3) goto L7b
            r4 = 2
            if (r8 == r4) goto L5c
            r5 = 3
            r6 = 4
            if (r8 == r5) goto L4e
            if (r8 == r6) goto L25
            goto L7a
        L25:
            if (r0 != 0) goto L31
            java.util.Map<java.lang.String, java.lang.Integer> r8 = r7.g
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            r8.put(r9, r0)
            return
        L31:
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            boolean r0 = r0.containsKey(r9)
            if (r0 == 0) goto L44
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            java.lang.Object r0 = r0.get(r9)
            android.os.Handler r0 = (android.os.Handler) r0
            r0.removeCallbacksAndMessages(r2)
        L44:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r0.put(r9, r8)
            goto L7a
        L4e:
            if (r0 == r4) goto L52
            if (r0 != r6) goto L7a
        L52:
            java.util.Map<java.lang.String, java.lang.Integer> r8 = r7.g
            java.lang.Integer r0 = java.lang.Integer.valueOf(r3)
            r8.put(r9, r0)
            return
        L5c:
            if (r0 != r3) goto L7a
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            boolean r0 = r0.containsKey(r9)
            if (r0 == 0) goto L71
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            java.lang.Object r0 = r0.get(r9)
            android.os.Handler r0 = (android.os.Handler) r0
            r0.removeCallbacksAndMessages(r2)
        L71:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r0.put(r9, r8)
        L7a:
            return
        L7b:
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            boolean r0 = r0.containsKey(r9)
            if (r0 == 0) goto L8e
            java.util.Map<java.lang.String, android.os.Handler> r0 = r7.f
            java.lang.Object r0 = r0.get(r9)
            android.os.Handler r0 = (android.os.Handler) r0
            r0.removeCallbacksAndMessages(r2)
        L8e:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r7.g
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r0.put(r9, r8)
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

    public final void a(java.lang.String r6, com.tkay.expressad.foundation.d.d r7, com.tkay.expressad.mbbanner.a.c.b r8) {
            r5 = this;
            com.tkay.expressad.mbbanner.a.d.a r0 = a()
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r5.e     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L28
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r5.e     // Catch: java.lang.Throwable -> L46
            boolean r1 = r1.containsKey(r6)     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L28
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r5.e     // Catch: java.lang.Throwable -> L46
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Throwable -> L46
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L46
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L28
            com.tkay.expressad.mbbanner.a.e.a r7 = r5.c     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "Current unit is loading!"
            r7.a(r8, r1, r6)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            return
        L28:
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r5.e     // Catch: java.lang.Throwable -> L46
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L46
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.mbbanner.a.b.e r1 = r5.b(r6)     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.mbbanner.a.d.b r2 = new com.tkay.expressad.mbbanner.a.d.b     // Catch: java.lang.Throwable -> L46
            android.content.Context r3 = r5.b     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.mbbanner.a.e.a r4 = r5.c     // Catch: java.lang.Throwable -> L46
            r2.<init>(r3, r1, r8, r4)     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.mbbanner.a.d.a$1 r8 = new com.tkay.expressad.mbbanner.a.d.a$1     // Catch: java.lang.Throwable -> L46
            r8.<init>(r5)     // Catch: java.lang.Throwable -> L46
            r2.a(r6, r7, r8)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            return
        L46:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public final void b() {
            r3 = this;
            java.util.Map<java.lang.String, com.tkay.expressad.mbbanner.a.b.e> r0 = r3.d
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
}
