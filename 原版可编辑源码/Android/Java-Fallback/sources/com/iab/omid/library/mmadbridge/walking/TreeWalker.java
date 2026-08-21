package com.iab.omid.library.mmadbridge.walking;

public class TreeWalker implements com.iab.omid.library.mmadbridge.processor.a.a {
    private static com.iab.omid.library.mmadbridge.walking.TreeWalker i;
    private static android.os.Handler j;
    private static android.os.Handler k;
    private static final java.lang.Runnable l = null;
    private static final java.lang.Runnable m = null;
    private java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerTimeLogger> a;
    private int b;
    private boolean c;
    private final java.util.List<com.iab.omid.library.mmadbridge.weakreference.a> d;
    private com.iab.omid.library.mmadbridge.processor.b e;
    private com.iab.omid.library.mmadbridge.walking.a f;
    private com.iab.omid.library.mmadbridge.walking.b g;
    private long h;

    public interface TreeWalkerNanoTimeLogger extends com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerTimeLogger {
        void onTreeProcessedNano(int r1, long r2);
    }

    public interface TreeWalkerTimeLogger {
        void onTreeProcessed(int r1, long r2);
    }

    class a implements java.lang.Runnable {
        final com.iab.omid.library.mmadbridge.walking.TreeWalker a;

        a(com.iab.omid.library.mmadbridge.walking.TreeWalker r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = r1.a
                com.iab.omid.library.mmadbridge.walking.b r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.a(r0)
                r0.b()
                return
        }
    }

    class b implements java.lang.Runnable {
        b() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.getInstance()
                com.iab.omid.library.mmadbridge.walking.TreeWalker.b(r0)
                return
        }
    }

    class c implements java.lang.Runnable {
        c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.a()
                if (r0 == 0) goto L1e
                android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.a()
                java.lang.Runnable r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.b()
                r0.post(r1)
                android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.a()
                java.lang.Runnable r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.c()
                r2 = 200(0xc8, double:9.9E-322)
                r0.postDelayed(r1, r2)
            L1e:
                return
        }
    }

    static {
            com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = new com.iab.omid.library.mmadbridge.walking.TreeWalker
            r0.<init>()
            com.iab.omid.library.mmadbridge.walking.TreeWalker.i = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.iab.omid.library.mmadbridge.walking.TreeWalker.j = r0
            r0 = 0
            com.iab.omid.library.mmadbridge.walking.TreeWalker.k = r0
            com.iab.omid.library.mmadbridge.walking.TreeWalker$b r0 = new com.iab.omid.library.mmadbridge.walking.TreeWalker$b
            r0.<init>()
            com.iab.omid.library.mmadbridge.walking.TreeWalker.l = r0
            com.iab.omid.library.mmadbridge.walking.TreeWalker$c r0 = new com.iab.omid.library.mmadbridge.walking.TreeWalker$c
            r0.<init>()
            com.iab.omid.library.mmadbridge.walking.TreeWalker.m = r0
            return
    }

    TreeWalker() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.a = r0
            r0 = 0
            r2.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.d = r0
            com.iab.omid.library.mmadbridge.walking.a r0 = new com.iab.omid.library.mmadbridge.walking.a
            r0.<init>()
            r2.f = r0
            com.iab.omid.library.mmadbridge.processor.b r0 = new com.iab.omid.library.mmadbridge.processor.b
            r0.<init>()
            r2.e = r0
            com.iab.omid.library.mmadbridge.walking.b r0 = new com.iab.omid.library.mmadbridge.walking.b
            com.iab.omid.library.mmadbridge.walking.async.c r1 = new com.iab.omid.library.mmadbridge.walking.async.c
            r1.<init>()
            r0.<init>(r1)
            r2.g = r0
            return
    }

    static android.os.Handler a() {
            android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.k
            return r0
    }

    static com.iab.omid.library.mmadbridge.walking.b a(com.iab.omid.library.mmadbridge.walking.TreeWalker r0) {
            com.iab.omid.library.mmadbridge.walking.b r0 = r0.g
            return r0
    }

    private void a(long r6) {
            r5 = this;
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r5.a
            int r0 = r0.size()
            if (r0 <= 0) goto L31
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r5.a
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger r1 = (com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerTimeLogger) r1
            int r2 = r5.b
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.NANOSECONDS
            long r3 = r3.toMillis(r6)
            r1.onTreeProcessed(r2, r3)
            boolean r2 = r1 instanceof com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerNanoTimeLogger
            if (r2 == 0) goto Le
            com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerNanoTimeLogger r1 = (com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerNanoTimeLogger) r1
            int r2 = r5.b
            r1.onTreeProcessedNano(r2, r6)
            goto Le
        L31:
            return
    }

    private void a(android.view.View r7, com.iab.omid.library.mmadbridge.processor.a r8, org.json.JSONObject r9, com.iab.omid.library.mmadbridge.walking.c r10, boolean r11) {
            r6 = this;
            com.iab.omid.library.mmadbridge.walking.c r0 = com.iab.omid.library.mmadbridge.walking.c.a
            if (r10 != r0) goto L6
            r10 = 1
            goto L7
        L6:
            r10 = 0
        L7:
            r4 = r10
            r0 = r8
            r1 = r7
            r2 = r9
            r3 = r6
            r5 = r11
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void a(java.lang.String r3, android.view.View r4, org.json.JSONObject r5) {
            r2 = this;
            com.iab.omid.library.mmadbridge.processor.b r0 = r2.e
            com.iab.omid.library.mmadbridge.processor.a r0 = r0.b()
            com.iab.omid.library.mmadbridge.walking.a r1 = r2.f
            java.lang.String r1 = r1.b(r3)
            if (r1 == 0) goto L1b
            org.json.JSONObject r4 = r0.a(r4)
            com.iab.omid.library.mmadbridge.utils.c.a(r4, r3)
            com.iab.omid.library.mmadbridge.utils.c.b(r4, r1)
            com.iab.omid.library.mmadbridge.utils.c.a(r5, r4)
        L1b:
            return
    }

    private boolean a(android.view.View r2, org.json.JSONObject r3) {
            r1 = this;
            com.iab.omid.library.mmadbridge.walking.a r0 = r1.f
            com.iab.omid.library.mmadbridge.walking.a$a r2 = r0.c(r2)
            if (r2 == 0) goto Ld
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r2)
            r2 = 1
            return r2
        Ld:
            r2 = 0
            return r2
    }

    static java.lang.Runnable b() {
            java.lang.Runnable r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.l
            return r0
    }

    static void b(com.iab.omid.library.mmadbridge.walking.TreeWalker r0) {
            r0.l()
            return
    }

    private boolean b(android.view.View r2, org.json.JSONObject r3) {
            r1 = this;
            com.iab.omid.library.mmadbridge.walking.a r0 = r1.f
            java.lang.String r0 = r0.d(r2)
            if (r0 == 0) goto L1f
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r0)
            com.iab.omid.library.mmadbridge.walking.a r0 = r1.f
            boolean r2 = r0.f(r2)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            com.iab.omid.library.mmadbridge.utils.c.a(r3, r2)
            com.iab.omid.library.mmadbridge.walking.a r2 = r1.f
            r2.d()
            r2 = 1
            return r2
        L1f:
            r2 = 0
            return r2
    }

    static java.lang.Runnable c() {
            java.lang.Runnable r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.m
            return r0
    }

    private void d() {
            r4 = this;
            long r0 = com.iab.omid.library.mmadbridge.utils.f.b()
            long r2 = r4.h
            long r0 = r0 - r2
            r4.a(r0)
            return
    }

    private void e() {
            r2 = this;
            r0 = 0
            r2.b = r0
            java.util.List<com.iab.omid.library.mmadbridge.weakreference.a> r1 = r2.d
            r1.clear()
            r2.c = r0
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            boolean r1 = r1.e()
            if (r1 == 0) goto L16
            r0 = 1
            r2.c = r0
        L2b:
            long r0 = com.iab.omid.library.mmadbridge.utils.f.b()
            r2.h = r0
            return
    }

    public static com.iab.omid.library.mmadbridge.walking.TreeWalker getInstance() {
            com.iab.omid.library.mmadbridge.walking.TreeWalker r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.i
            return r0
    }

    private void i() {
            r4 = this;
            android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.k
            if (r0 != 0) goto L1d
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.iab.omid.library.mmadbridge.walking.TreeWalker.k = r0
            java.lang.Runnable r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.l
            r0.post(r1)
            android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.k
            java.lang.Runnable r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.m
            r2 = 200(0xc8, double:9.9E-322)
            r0.postDelayed(r1, r2)
        L1d:
            return
    }

    private void k() {
            r2 = this;
            android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.k
            if (r0 == 0) goto Lc
            java.lang.Runnable r1 = com.iab.omid.library.mmadbridge.walking.TreeWalker.m
            r0.removeCallbacks(r1)
            r0 = 0
            com.iab.omid.library.mmadbridge.walking.TreeWalker.k = r0
        Lc:
            return
    }

    private void l() {
            r0 = this;
            r0.e()
            r0.f()
            r0.d()
            return
    }

    @Override
    public void a(android.view.View r8, com.iab.omid.library.mmadbridge.processor.a r9, org.json.JSONObject r10, boolean r11) {
            r7 = this;
            boolean r0 = com.iab.omid.library.mmadbridge.utils.h.d(r8)
            if (r0 != 0) goto L7
            return
        L7:
            com.iab.omid.library.mmadbridge.walking.a r0 = r7.f
            com.iab.omid.library.mmadbridge.walking.c r5 = r0.e(r8)
            com.iab.omid.library.mmadbridge.walking.c r0 = com.iab.omid.library.mmadbridge.walking.c.c
            if (r5 != r0) goto L12
            return
        L12:
            org.json.JSONObject r4 = r9.a(r8)
            com.iab.omid.library.mmadbridge.utils.c.a(r10, r4)
            boolean r10 = r7.b(r8, r4)
            r0 = 1
            if (r10 != 0) goto L47
            boolean r10 = r7.a(r8, r4)
            if (r11 != 0) goto L2c
            if (r10 == 0) goto L29
            goto L2c
        L29:
            r10 = 0
            r6 = r10
            goto L2d
        L2c:
            r6 = r0
        L2d:
            boolean r10 = r7.c
            if (r10 == 0) goto L41
            com.iab.omid.library.mmadbridge.walking.c r10 = com.iab.omid.library.mmadbridge.walking.c.b
            if (r5 != r10) goto L41
            if (r6 != 0) goto L41
            java.util.List<com.iab.omid.library.mmadbridge.weakreference.a> r10 = r7.d
            com.iab.omid.library.mmadbridge.weakreference.a r11 = new com.iab.omid.library.mmadbridge.weakreference.a
            r11.<init>(r8)
            r10.add(r11)
        L41:
            r1 = r7
            r2 = r8
            r3 = r9
            r1.a(r2, r3, r4, r5, r6)
        L47:
            int r8 = r7.b
            int r8 = r8 + r0
            r7.b = r8
            return
    }

    public void addTimeLogger(com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerTimeLogger r2) {
            r1 = this;
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r1.a
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Ld
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r1.a
            r0.add(r2)
        Ld:
            return
    }

    void f() {
            r9 = this;
            com.iab.omid.library.mmadbridge.walking.a r0 = r9.f
            r0.e()
            long r0 = com.iab.omid.library.mmadbridge.utils.f.b()
            com.iab.omid.library.mmadbridge.processor.b r2 = r9.e
            com.iab.omid.library.mmadbridge.processor.a r5 = r2.a()
            com.iab.omid.library.mmadbridge.walking.a r2 = r9.f
            java.util.HashSet r2 = r2.b()
            int r2 = r2.size()
            r3 = 0
            if (r2 <= 0) goto L50
            com.iab.omid.library.mmadbridge.walking.a r2 = r9.f
            java.util.HashSet r2 = r2.b()
            java.util.Iterator r2 = r2.iterator()
        L26:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L50
            java.lang.Object r4 = r2.next()
            java.lang.String r4 = (java.lang.String) r4
            org.json.JSONObject r6 = r5.a(r3)
            com.iab.omid.library.mmadbridge.walking.a r7 = r9.f
            android.view.View r7 = r7.a(r4)
            r9.a(r4, r7, r6)
            com.iab.omid.library.mmadbridge.utils.c.b(r6)
            java.util.HashSet r7 = new java.util.HashSet
            r7.<init>()
            r7.add(r4)
            com.iab.omid.library.mmadbridge.walking.b r4 = r9.g
            r4.a(r6, r7, r0)
            goto L26
        L50:
            com.iab.omid.library.mmadbridge.walking.a r2 = r9.f
            java.util.HashSet r2 = r2.c()
            int r2 = r2.size()
            if (r2 <= 0) goto L99
            org.json.JSONObject r2 = r5.a(r3)
            com.iab.omid.library.mmadbridge.walking.c r7 = com.iab.omid.library.mmadbridge.walking.c.a
            r4 = 0
            r8 = 0
            r3 = r9
            r6 = r2
            r3.a(r4, r5, r6, r7, r8)
            com.iab.omid.library.mmadbridge.utils.c.b(r2)
            com.iab.omid.library.mmadbridge.walking.b r3 = r9.g
            com.iab.omid.library.mmadbridge.walking.a r4 = r9.f
            java.util.HashSet r4 = r4.c()
            r3.b(r2, r4, r0)
            boolean r0 = r9.c
            if (r0 == 0) goto L9e
            com.iab.omid.library.mmadbridge.internal.c r0 = com.iab.omid.library.mmadbridge.internal.c.c()
            java.util.Collection r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        L87:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L9e
            java.lang.Object r1 = r0.next()
            com.iab.omid.library.mmadbridge.adsession.a r1 = (com.iab.omid.library.mmadbridge.adsession.a) r1
            java.util.List<com.iab.omid.library.mmadbridge.weakreference.a> r2 = r9.d
            r1.a(r2)
            goto L87
        L99:
            com.iab.omid.library.mmadbridge.walking.b r0 = r9.g
            r0.b()
        L9e:
            com.iab.omid.library.mmadbridge.walking.a r0 = r9.f
            r0.a()
            return
    }

    public void g() {
            r0 = this;
            r0.k()
            return
    }

    public void h() {
            r0 = this;
            r0.i()
            return
    }

    public void j() {
            r2 = this;
            r2.g()
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r2.a
            r0.clear()
            android.os.Handler r0 = com.iab.omid.library.mmadbridge.walking.TreeWalker.j
            com.iab.omid.library.mmadbridge.walking.TreeWalker$a r1 = new com.iab.omid.library.mmadbridge.walking.TreeWalker$a
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    public void removeTimeLogger(com.iab.omid.library.mmadbridge.walking.TreeWalker.TreeWalkerTimeLogger r2) {
            r1 = this;
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r1.a
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto Ld
            java.util.List<com.iab.omid.library.mmadbridge.walking.TreeWalker$TreeWalkerTimeLogger> r0 = r1.a
            r0.remove(r2)
        Ld:
            return
    }
}
