package com.tkay.basead.a.b;

class d {
    public static final java.lang.String a = null;
    private static volatile com.tkay.basead.a.b.d b;
    private java.util.List<com.tkay.basead.a.b.d.a> c;

    public interface a {
        void a(java.lang.String r1, int r2);

        void a(java.lang.String r1, com.tkay.basead.c.e r2);
    }

    static {
            java.lang.Class<com.tkay.basead.a.b.d> r0 = com.tkay.basead.a.b.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.a.b.d.a = r0
            return
    }

    private d() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.c = r0
            return
    }

    public static com.tkay.basead.a.b.d a() {
            com.tkay.basead.a.b.d r0 = com.tkay.basead.a.b.d.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.a.b.d> r0 = com.tkay.basead.a.b.d.class
            monitor-enter(r0)
            com.tkay.basead.a.b.d r1 = com.tkay.basead.a.b.d.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.a.b.d r1 = new com.tkay.basead.a.b.d     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.a.b.d.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.basead.a.b.d r0 = com.tkay.basead.a.b.d.b
            return r0
    }

    public final synchronized void a(com.tkay.basead.a.b.d.a r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.List<com.tkay.basead.a.b.d$a> r0 = r1.c     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void a(java.lang.String r3, int r4) {
            r2 = this;
            java.util.List<com.tkay.basead.a.b.d$a> r0 = r2.c
            if (r0 == 0) goto L18
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.tkay.basead.a.b.d$a r1 = (com.tkay.basead.a.b.d.a) r1
            r1.a(r3, r4)
            goto L8
        L18:
            return
    }

    public final void a(java.lang.String r3, com.tkay.basead.c.e r4) {
            r2 = this;
            java.util.List<com.tkay.basead.a.b.d$a> r0 = r2.c
            if (r0 == 0) goto L18
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.tkay.basead.a.b.d$a r1 = (com.tkay.basead.a.b.d.a) r1
            r1.a(r3, r4)
            goto L8
        L18:
            return
    }

    public final synchronized void b(com.tkay.basead.a.b.d.a r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.List<com.tkay.basead.a.b.d$a> r0 = r4.c     // Catch: java.lang.Throwable -> L21
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L21
            r1 = 0
        L8:
            r2 = -1
            if (r1 >= r0) goto L17
            java.util.List<com.tkay.basead.a.b.d$a> r3 = r4.c     // Catch: java.lang.Throwable -> L21
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L21
            if (r5 != r3) goto L14
            goto L18
        L14:
            int r1 = r1 + 1
            goto L8
        L17:
            r1 = r2
        L18:
            if (r1 == r2) goto L1f
            java.util.List<com.tkay.basead.a.b.d$a> r5 = r4.c     // Catch: java.lang.Throwable -> L21
            r5.remove(r1)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r4)
            return
        L21:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}
