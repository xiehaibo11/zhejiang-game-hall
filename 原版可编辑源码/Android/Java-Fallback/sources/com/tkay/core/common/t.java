package com.tkay.core.common;

public class t {
    public static final java.lang.String a = null;
    private static volatile com.tkay.core.common.t b;
    private java.util.Map<java.lang.String, com.tkay.core.common.f.v> c;
    private java.util.List<com.tkay.core.common.f.v> d;
    private java.util.List<java.lang.String> e;
    private final int f;
    private final int g;


    static {
            java.lang.Class<com.tkay.core.common.t> r0 = com.tkay.core.common.t.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.t.a = r0
            return
    }

    private t() {
            r2 = this;
            r2.<init>()
            r0 = 5
            r2.f = r0
            r0 = 500(0x1f4, float:7.0E-43)
            r2.g = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 8
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r2.e = r0
            return
    }

    public static com.tkay.core.common.t a() {
            com.tkay.core.common.t r0 = com.tkay.core.common.t.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.t> r0 = com.tkay.core.common.t.class
            monitor-enter(r0)
            com.tkay.core.common.t r1 = com.tkay.core.common.t.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.t r1 = new com.tkay.core.common.t     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.t.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.t r0 = com.tkay.core.common.t.b
            return r0
    }

    static java.util.List a(com.tkay.core.common.t r0) {
            java.util.List<java.lang.String> r0 = r0.e
            return r0
    }

    private synchronized void a(com.tkay.core.common.f.v r3) {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = "delete: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = r3.a()     // Catch: java.lang.Throwable -> L30
            r0.append(r1)     // Catch: java.lang.Throwable -> L30
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r2.c     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = r3.a     // Catch: java.lang.Throwable -> L30
            r0.remove(r1)     // Catch: java.lang.Throwable -> L30
            java.util.List<com.tkay.core.common.f.v> r0 = r2.d     // Catch: java.lang.Throwable -> L30
            r0.remove(r3)     // Catch: java.lang.Throwable -> L30
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L30
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L30
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Throwable -> L30
            com.tkay.core.common.c.i r0 = com.tkay.core.common.c.i.a(r0)     // Catch: java.lang.Throwable -> L30
            r0.b(r3)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r2)
            return
        L30:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private synchronized void a(com.tkay.core.common.f.v r5, boolean r6) {
            r4 = this;
            monitor-enter(r4)
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Laa
            long r2 = r5.f     // Catch: java.lang.Throwable -> Laa
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = "resendNoticeUrl: do nothing because offer is out date: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a()     // Catch: java.lang.Throwable -> Laa
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            java.util.List<java.lang.String> r0 = r4.e     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> Laa
            r0.remove(r1)     // Catch: java.lang.Throwable -> Laa
            if (r6 == 0) goto L25
            r4.a(r5)     // Catch: java.lang.Throwable -> Laa
        L25:
            monitor-exit(r4)
            return
        L27:
            java.util.List<java.lang.String> r0 = r4.e     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> Laa
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> Laa
            if (r0 == 0) goto L41
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            java.lang.String r0 = "resendNoticeUrl: do nothing because it is loading... "
            r6.<init>(r0)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r5 = r5.a()     // Catch: java.lang.Throwable -> Laa
            r6.append(r5)     // Catch: java.lang.Throwable -> Laa
            monitor-exit(r4)
            return
        L41:
            java.util.List<java.lang.String> r0 = r4.e     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> Laa
            r0.add(r1)     // Catch: java.lang.Throwable -> Laa
            r0 = 5
            if (r6 == 0) goto L6b
            int r1 = r5.g     // Catch: java.lang.Throwable -> Laa
            int r1 = r1 + 1
            r5.g = r1     // Catch: java.lang.Throwable -> Laa
            int r1 = r5.g     // Catch: java.lang.Throwable -> Laa
            if (r1 < r0) goto L67
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = "resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a()     // Catch: java.lang.Throwable -> Laa
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            r4.a(r5)     // Catch: java.lang.Throwable -> Laa
            goto L8c
        L67:
            r4.b(r5)     // Catch: java.lang.Throwable -> Laa
            goto L8c
        L6b:
            int r1 = r5.g     // Catch: java.lang.Throwable -> Laa
            int r1 = r1 + 1
            r5.g = r1     // Catch: java.lang.Throwable -> Laa
            int r1 = r5.g     // Catch: java.lang.Throwable -> Laa
            if (r1 < r0) goto L8c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            java.lang.String r0 = "resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: "
            r6.<init>(r0)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r0 = r5.a()     // Catch: java.lang.Throwable -> Laa
            r6.append(r0)     // Catch: java.lang.Throwable -> Laa
            java.util.List<java.lang.String> r6 = r4.e     // Catch: java.lang.Throwable -> Laa
            java.lang.String r5 = r5.a     // Catch: java.lang.Throwable -> Laa
            r6.remove(r5)     // Catch: java.lang.Throwable -> Laa
            monitor-exit(r4)
            return
        L8c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = "resendNoticeUrl: start to send notice: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r5.a()     // Catch: java.lang.Throwable -> Laa
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            com.tkay.core.common.h.m r0 = new com.tkay.core.common.h.m     // Catch: java.lang.Throwable -> Laa
            r0.<init>(r5)     // Catch: java.lang.Throwable -> Laa
            r1 = 0
            com.tkay.core.common.t$1 r2 = new com.tkay.core.common.t$1     // Catch: java.lang.Throwable -> Laa
            r2.<init>(r4, r5, r6)     // Catch: java.lang.Throwable -> Laa
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> Laa
            monitor-exit(r4)
            return
        Laa:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    static void a(com.tkay.core.common.t r0, com.tkay.core.common.f.v r1) {
            r0.a(r1)
            return
    }

    public static boolean a(int r3) {
            r0 = 1
            switch(r3) {
                case -1003: goto L6;
                case -1002: goto L6;
                case -1001: goto L6;
                case -1000: goto L6;
                default: goto L4;
            }
        L4:
            r1 = 0
            goto L7
        L6:
            r1 = r0
        L7:
            if (r1 != 0) goto L16
            r2 = -99
            if (r3 < r2) goto L11
            r2 = 200(0xc8, float:2.8E-43)
            if (r3 < r2) goto L17
        L11:
            r2 = 400(0x190, float:5.6E-43)
            if (r3 < r2) goto L16
            goto L17
        L16:
            r0 = r1
        L17:
            return r0
    }

    private synchronized void b(com.tkay.core.common.f.v r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r4.a     // Catch: java.lang.Throwable -> L82
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L82
            if (r0 == 0) goto L34
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L82
            r4.e = r0     // Catch: java.lang.Throwable -> L82
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r0.<init>()     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> L82
            r0.append(r1)     // Catch: java.lang.Throwable -> L82
            long r1 = r4.e     // Catch: java.lang.Throwable -> L82
            r0.append(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L82
            java.lang.String r0 = com.tkay.core.common.l.f.a(r0)     // Catch: java.lang.Throwable -> L82
            r4.a = r0     // Catch: java.lang.Throwable -> L82
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r3.c     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = r4.a     // Catch: java.lang.Throwable -> L82
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L82
            java.util.List<com.tkay.core.common.f.v> r0 = r3.d     // Catch: java.lang.Throwable -> L82
            r0.add(r4)     // Catch: java.lang.Throwable -> L82
        L34:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = "insertOrUpdate: "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L82
            java.lang.String r1 = r4.a()     // Catch: java.lang.Throwable -> L82
            r0.append(r1)     // Catch: java.lang.Throwable -> L82
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L82
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L82
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Throwable -> L82
            com.tkay.core.common.c.i r0 = com.tkay.core.common.c.i.a(r0)     // Catch: java.lang.Throwable -> L82
            r0.a(r4)     // Catch: java.lang.Throwable -> L82
            java.util.List<com.tkay.core.common.f.v> r0 = r3.d     // Catch: java.lang.Throwable -> L82
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L82
            r1 = 500(0x1f4, float:7.0E-43)
            if (r0 <= r1) goto L80
            java.util.List<com.tkay.core.common.f.v> r0 = r3.d     // Catch: java.lang.Throwable -> L82
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L82
            com.tkay.core.common.f.v r0 = (com.tkay.core.common.f.v) r0     // Catch: java.lang.Throwable -> L82
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "insertOrUpdate,  exceeded the maximum number of records, start to delete: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r4.a()     // Catch: java.lang.Throwable -> L82
            r1.append(r2)     // Catch: java.lang.Throwable -> L82
            java.util.List<java.lang.String> r1 = r3.e     // Catch: java.lang.Throwable -> L82
            java.lang.String r4 = r4.a     // Catch: java.lang.Throwable -> L82
            r1.remove(r4)     // Catch: java.lang.Throwable -> L82
            r3.a(r0)     // Catch: java.lang.Throwable -> L82
        L80:
            monitor-exit(r3)
            return
        L82:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static void b(com.tkay.core.common.t r0, com.tkay.core.common.f.v r1) {
            r0.b(r1)
            return
    }

    private synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r2.c     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L2a
            java.util.List<com.tkay.core.common.f.v> r0 = r2.d     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L2a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L26
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.i r0 = com.tkay.core.common.c.i.a(r0)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.i$a r0 = r0.c()     // Catch: java.lang.Throwable -> L26
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r1 = r0.b     // Catch: java.lang.Throwable -> L26
            r2.c = r1     // Catch: java.lang.Throwable -> L26
            java.util.List<com.tkay.core.common.f.v> r0 = r0.a     // Catch: java.lang.Throwable -> L26
            r2.d = r0     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L46
        L2a:
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r2.c     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto L35
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            r2.c = r0     // Catch: java.lang.Throwable -> L46
        L35:
            java.util.List<com.tkay.core.common.f.v> r0 = r2.d     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto L44
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.util.List r0 = java.util.Collections.synchronizedList(r0)     // Catch: java.lang.Throwable -> L46
            r2.d = r0     // Catch: java.lang.Throwable -> L46
        L44:
            monitor-exit(r2)
            return
        L46:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, long r5) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.f.v r0 = new com.tkay.core.common.f.v     // Catch: java.lang.Throwable -> L23
            r0.<init>()     // Catch: java.lang.Throwable -> L23
            r1 = 2
            r0.b = r1     // Catch: java.lang.Throwable -> L23
            r0.d = r3     // Catch: java.lang.Throwable -> L23
            r0.c = r4     // Catch: java.lang.Throwable -> L23
            r0.f = r5     // Catch: java.lang.Throwable -> L23
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = "reSendNow: "
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = r0.a()     // Catch: java.lang.Throwable -> L23
            r3.append(r4)     // Catch: java.lang.Throwable -> L23
            r3 = 0
            r2.a(r0, r3)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)
            return
        L23:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void b() {
            r4 = this;
            monitor-enter(r4)
            r4.c()     // Catch: java.lang.Throwable -> L3c
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3c
            java.util.List<com.tkay.core.common.f.v> r1 = r4.d     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3c
            java.util.List r0 = java.util.Collections.synchronizedList(r0)     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L3a
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L3c
            if (r1 <= 0) goto L3a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3c
        L1b:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3c
            com.tkay.core.common.f.v r1 = (com.tkay.core.common.f.v) r1     // Catch: java.lang.Throwable -> L3c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "tryToReSendNoticeUrl: "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L3c
            r2.append(r3)     // Catch: java.lang.Throwable -> L3c
            r2 = 1
            r4.a(r1, r2)     // Catch: java.lang.Throwable -> L3c
            goto L1b
        L3a:
            monitor-exit(r4)
            return
        L3c:
            monitor-exit(r4)
            return
    }
}
