package com.meizu.cloud.pushsdk.d.e;

public abstract class a {
    private static final java.lang.String n = null;
    protected final java.lang.String a;
    protected com.meizu.cloud.pushsdk.d.b.a b;
    protected com.meizu.cloud.pushsdk.d.e.c c;
    protected com.meizu.cloud.pushsdk.d.e.b d;
    protected final java.lang.String e;
    protected final java.lang.String f;
    protected final boolean g;
    protected final com.meizu.cloud.pushsdk.d.f.b h;
    protected final boolean i;
    protected final long j;
    protected final int k;
    protected final java.util.concurrent.TimeUnit l;
    protected final java.util.concurrent.atomic.AtomicBoolean m;

    public class a {
        protected final com.meizu.cloud.pushsdk.d.b.a a;
        protected final java.lang.String b;
        protected final java.lang.String c;
        protected final android.content.Context d;
        protected com.meizu.cloud.pushsdk.d.e.c e;
        protected boolean f;
        protected com.meizu.cloud.pushsdk.d.f.b g;
        protected boolean h;
        protected long i;
        protected long j;
        protected long k;
        protected int l;
        protected java.util.concurrent.TimeUnit m;

        public a(com.meizu.cloud.pushsdk.d.b.a r3, java.lang.String r4, java.lang.String r5, android.content.Context r6, java.lang.Class<? extends com.meizu.cloud.pushsdk.d.e.a> r7) {
                r2 = this;
                r2.<init>()
                r7 = 0
                r2.e = r7
                r7 = 0
                r2.f = r7
                com.meizu.cloud.pushsdk.d.f.b r0 = com.meizu.cloud.pushsdk.d.f.b.a
                r2.g = r0
                r2.h = r7
                r0 = 600(0x258, double:2.964E-321)
                r2.i = r0
                r0 = 300(0x12c, double:1.48E-321)
                r2.j = r0
                r0 = 15
                r2.k = r0
                r7 = 10
                r2.l = r7
                java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
                r2.m = r7
                r2.a = r3
                r2.b = r4
                r2.c = r5
                r2.d = r6
                return
        }

        public com.meizu.cloud.pushsdk.d.e.a.a a(int r1) {
                r0 = this;
                r0.l = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.e.a.a a(com.meizu.cloud.pushsdk.d.e.c r1) {
                r0 = this;
                r0.e = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.e.a.a a(com.meizu.cloud.pushsdk.d.f.b r1) {
                r0 = this;
                r0.g = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.e.a.a a(java.lang.Boolean r1) {
                r0 = this;
                boolean r1 = r1.booleanValue()
                r0.f = r1
                return r0
        }
    }

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.e.a> r0 = com.meizu.cloud.pushsdk.d.e.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.e.a.n = r0
            return
    }

    public a(com.meizu.cloud.pushsdk.d.e.a.a r9) {
            r8 = this;
            r8.<init>()
            java.lang.String r0 = "4.1.4"
            r8.a = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 1
            r0.<init>(r1)
            r8.m = r0
            com.meizu.cloud.pushsdk.d.b.a r0 = r9.a
            r8.b = r0
            java.lang.String r0 = r9.c
            r8.f = r0
            boolean r0 = r9.f
            r8.g = r0
            java.lang.String r0 = r9.b
            r8.e = r0
            com.meizu.cloud.pushsdk.d.e.c r0 = r9.e
            r8.c = r0
            com.meizu.cloud.pushsdk.d.f.b r0 = r9.g
            r8.h = r0
            boolean r0 = r9.h
            r8.i = r0
            long r0 = r9.k
            r8.j = r0
            int r0 = r9.l
            r1 = 2
            if (r0 >= r1) goto L35
            goto L37
        L35:
            int r1 = r9.l
        L37:
            r8.k = r1
            java.util.concurrent.TimeUnit r0 = r9.m
            r8.l = r0
            boolean r0 = r8.i
            if (r0 == 0) goto L51
            com.meizu.cloud.pushsdk.d.e.b r0 = new com.meizu.cloud.pushsdk.d.e.b
            long r2 = r9.i
            long r4 = r9.j
            java.util.concurrent.TimeUnit r6 = r9.m
            android.content.Context r7 = r9.d
            r1 = r0
            r1.<init>(r2, r4, r6, r7)
            r8.d = r0
        L51:
            com.meizu.cloud.pushsdk.d.f.b r9 = r9.g
            com.meizu.cloud.pushsdk.d.f.c.a(r9)
            java.lang.String r9 = com.meizu.cloud.pushsdk.d.e.a.n
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Tracker created successfully."
            com.meizu.cloud.pushsdk.d.f.c.c(r9, r1, r0)
            return
    }

    private com.meizu.cloud.pushsdk.d.a.b a(java.util.List<com.meizu.cloud.pushsdk.d.a.b> r4) {
            r3 = this;
            boolean r0 = r3.i
            if (r0 == 0) goto Ld
            com.meizu.cloud.pushsdk.d.e.b r0 = r3.d
            com.meizu.cloud.pushsdk.d.a.b r0 = r0.a()
            r4.add(r0)
        Ld:
            com.meizu.cloud.pushsdk.d.e.c r0 = r3.c
            if (r0 == 0) goto L47
            java.util.Map r0 = r0.a()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L2b
            com.meizu.cloud.pushsdk.d.a.b r0 = new com.meizu.cloud.pushsdk.d.a.b
            com.meizu.cloud.pushsdk.d.e.c r1 = r3.c
            java.util.Map r1 = r1.a()
            java.lang.String r2 = "geolocation"
            r0.<init>(r2, r1)
            r4.add(r0)
        L2b:
            com.meizu.cloud.pushsdk.d.e.c r0 = r3.c
            java.util.Map r0 = r0.b()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L47
            com.meizu.cloud.pushsdk.d.a.b r0 = new com.meizu.cloud.pushsdk.d.a.b
            com.meizu.cloud.pushsdk.d.e.c r1 = r3.c
            java.util.Map r1 = r1.b()
            java.lang.String r2 = "mobileinfo"
            r0.<init>(r2, r1)
            r4.add(r0)
        L47:
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L50:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L64
            java.lang.Object r1 = r4.next()
            com.meizu.cloud.pushsdk.d.a.b r1 = (com.meizu.cloud.pushsdk.d.a.b) r1
            java.util.Map r1 = r1.a()
            r0.add(r1)
            goto L50
        L64:
            com.meizu.cloud.pushsdk.d.a.b r4 = new com.meizu.cloud.pushsdk.d.a.b
            java.lang.String r1 = "push_extra_info"
            r4.<init>(r1, r0)
            return r4
    }

    private void a(com.meizu.cloud.pushsdk.d.a.c r3, java.util.List<com.meizu.cloud.pushsdk.d.a.b> r4, boolean r5) {
            r2 = this;
            com.meizu.cloud.pushsdk.d.e.c r0 = r2.c
            if (r0 == 0) goto L1f
            java.util.HashMap r0 = new java.util.HashMap
            com.meizu.cloud.pushsdk.d.e.c r1 = r2.c
            java.util.Map r1 = r1.c()
            r0.<init>(r1)
            r3.a(r0)
            com.meizu.cloud.pushsdk.d.a.b r4 = r2.a(r4)
            java.util.Map r4 = r4.a()
            java.lang.String r0 = "et"
            r3.a(r0, r4)
        L1f:
            java.lang.String r4 = com.meizu.cloud.pushsdk.d.e.a.n
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "Adding new payload to event storage: %s"
            com.meizu.cloud.pushsdk.d.f.c.c(r4, r1, r0)
            com.meizu.cloud.pushsdk.d.b.a r4 = r2.b
            r4.a(r3, r5)
            return
    }

    public void a() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.m
            boolean r0 = r0.get()
            if (r0 != 0) goto L9
            return
        L9:
            com.meizu.cloud.pushsdk.d.b.a r0 = r1.b()
            r0.a()
            return
    }

    public void a(com.meizu.cloud.pushsdk.d.c.b r2, boolean r3) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.m
            boolean r0 = r0.get()
            if (r0 != 0) goto L9
            return
        L9:
            java.util.List r0 = r2.a()
            com.meizu.cloud.pushsdk.d.a.c r2 = r2.e()
            r1.a(r2, r0, r3)
            return
    }

    public void a(com.meizu.cloud.pushsdk.d.e.c r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public com.meizu.cloud.pushsdk.d.b.a b() {
            r1 = this;
            com.meizu.cloud.pushsdk.d.b.a r0 = r1.b
            return r0
    }
}
