package com.tkay.core.common.l.a;

public final class f {
    final int a;
    final android.view.ViewTreeObserver.OnPreDrawListener b;
    private int c;
    private final java.util.ArrayList<android.view.View> d;
    private long e;
    private final java.util.Map<android.view.View, com.tkay.core.common.l.a.f.a> f;
    private final com.tkay.core.common.l.a.f.b g;
    private com.tkay.core.common.l.a.f.d h;
    private final com.tkay.core.common.l.a.f.c i;
    private final android.os.Handler j;
    private boolean k;


    static class a {
        int a;
        int b;
        long c;
        android.view.View d;
        java.lang.Integer e;

        a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class b {
        private final android.graphics.Rect a;

        public b() {
                r1 = this;
                r1.<init>()
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r1.a = r0
                return
        }

        private static boolean a(long r2, int r4) {
                long r0 = android.os.SystemClock.uptimeMillis()
                long r0 = r0 - r2
                long r2 = (long) r4
                int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r2 < 0) goto Lc
                r2 = 1
                return r2
            Lc:
                r2 = 0
                return r2
        }

        public final boolean a(android.view.View r8, android.view.View r9, int r10, java.lang.Integer r11) {
                r7 = this;
                r0 = 0
                if (r9 == 0) goto L5e
                boolean r1 = r9.isShown()
                if (r1 == 0) goto L5e
                android.view.ViewParent r8 = r8.getParent()
                if (r8 == 0) goto L5e
                int r8 = r9.getWindowVisibility()
                if (r8 == 0) goto L16
                goto L5e
            L16:
                android.graphics.Rect r8 = r7.a
                boolean r8 = r9.getGlobalVisibleRect(r8)
                if (r8 != 0) goto L1f
                return r0
            L1f:
                android.graphics.Rect r8 = r7.a
                int r8 = r8.height()
                long r1 = (long) r8
                android.graphics.Rect r8 = r7.a
                int r8 = r8.width()
                long r3 = (long) r8
                long r1 = r1 * r3
                int r8 = r9.getHeight()
                long r3 = (long) r8
                int r8 = r9.getWidth()
                long r8 = (long) r8
                long r3 = r3 * r8
                r8 = 0
                int r8 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
                if (r8 > 0) goto L40
                return r0
            L40:
                r8 = 1
                if (r11 == 0) goto L54
                int r9 = r11.intValue()
                if (r9 <= 0) goto L54
                int r9 = r11.intValue()
                long r9 = (long) r9
                int r9 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
                if (r9 < 0) goto L53
                return r8
            L53:
                return r0
            L54:
                r5 = 100
                long r1 = r1 * r5
                long r9 = (long) r10
                long r9 = r9 * r3
                int r9 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
                if (r9 < 0) goto L5e
                return r8
            L5e:
                return r0
        }
    }

    class c implements java.lang.Runnable {
        final com.tkay.core.common.l.a.f a;
        private final java.util.ArrayList<android.view.View> b;
        private final java.util.ArrayList<android.view.View> c;

        c(com.tkay.core.common.l.a.f r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.c = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.b = r1
                return
        }

        @Override
        public final void run() {
                r7 = this;
                com.tkay.core.common.l.a.f r0 = r7.a
                java.util.Map r0 = com.tkay.core.common.l.a.f.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L70
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r2 = r1.getKey()
                android.view.View r2 = (android.view.View) r2
                java.lang.Object r3 = r1.getValue()
                com.tkay.core.common.l.a.f$a r3 = (com.tkay.core.common.l.a.f.a) r3
                int r3 = r3.a
                java.lang.Object r4 = r1.getValue()
                com.tkay.core.common.l.a.f$a r4 = (com.tkay.core.common.l.a.f.a) r4
                int r4 = r4.b
                java.lang.Object r5 = r1.getValue()
                com.tkay.core.common.l.a.f$a r5 = (com.tkay.core.common.l.a.f.a) r5
                java.lang.Integer r5 = r5.e
                java.lang.Object r1 = r1.getValue()
                com.tkay.core.common.l.a.f$a r1 = (com.tkay.core.common.l.a.f.a) r1
                android.view.View r1 = r1.d
                com.tkay.core.common.l.a.f r6 = r7.a
                com.tkay.core.common.l.a.f$b r6 = com.tkay.core.common.l.a.f.b(r6)
                boolean r3 = r6.a(r1, r2, r3, r5)
                if (r3 == 0) goto L5d
                java.util.ArrayList<android.view.View> r1 = r7.b
                r1.add(r2)
                android.view.ViewTreeObserver r1 = r2.getViewTreeObserver()     // Catch: java.lang.Throwable -> Le
                com.tkay.core.common.l.a.f r2 = r7.a     // Catch: java.lang.Throwable -> Le
                android.view.ViewTreeObserver$OnPreDrawListener r2 = r2.b     // Catch: java.lang.Throwable -> Le
                r1.removeOnPreDrawListener(r2)     // Catch: java.lang.Throwable -> Le
                goto Le
            L5d:
                com.tkay.core.common.l.a.f r3 = r7.a
                com.tkay.core.common.l.a.f$b r3 = com.tkay.core.common.l.a.f.b(r3)
                r5 = 0
                boolean r1 = r3.a(r1, r2, r4, r5)
                if (r1 != 0) goto Le
                java.util.ArrayList<android.view.View> r1 = r7.c
                r1.add(r2)
                goto Le
            L70:
                com.tkay.core.common.l.a.f r0 = r7.a
                com.tkay.core.common.l.a.f$d r0 = com.tkay.core.common.l.a.f.c(r0)
                if (r0 == 0) goto L83
                com.tkay.core.common.l.a.f r0 = r7.a
                com.tkay.core.common.l.a.f$d r0 = com.tkay.core.common.l.a.f.c(r0)
                java.util.ArrayList<android.view.View> r1 = r7.b
                r0.a(r1)
            L83:
                java.util.ArrayList<android.view.View> r0 = r7.b
                r0.clear()
                java.util.ArrayList<android.view.View> r0 = r7.c
                r0.clear()
                com.tkay.core.common.l.a.f r0 = r7.a
                com.tkay.core.common.l.a.f.d(r0)
                return
        }
    }

    interface d {
        void a(java.util.List<android.view.View> r1);
    }

    public f() {
            r4 = this;
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r1 = 10
            r0.<init>(r1)
            com.tkay.core.common.l.a.f$b r1 = new com.tkay.core.common.l.a.f$b
            r1.<init>()
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r3)
            r4.<init>(r0, r1, r2)
            return
    }

    public f(int r5) {
            r4 = this;
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r1 = 10
            r0.<init>(r1)
            com.tkay.core.common.l.a.f$b r1 = new com.tkay.core.common.l.a.f$b
            r1.<init>()
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r3)
            r4.<init>(r0, r1, r2)
            r4.c = r5
            return
    }

    private f(java.util.Map<android.view.View, com.tkay.core.common.l.a.f.a> r4, com.tkay.core.common.l.a.f.b r5, android.os.Handler r6) {
            r3 = this;
            r3.<init>()
            r0 = 100
            r3.c = r0
            r0 = 50
            r3.a = r0
            r1 = 0
            r3.e = r1
            r3.f = r4
            r3.g = r5
            r3.j = r6
            com.tkay.core.common.l.a.f$c r4 = new com.tkay.core.common.l.a.f$c
            r4.<init>(r3)
            r3.i = r4
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>(r0)
            r3.d = r4
            com.tkay.core.common.l.a.f$1 r4 = new com.tkay.core.common.l.a.f$1
            r4.<init>(r3)
            r3.b = r4
            return
    }

    static java.util.Map a(com.tkay.core.common.l.a.f r0) {
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r0 = r0.f
            return r0
    }

    private void a(long r5) {
            r4 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r0 = r4.f
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            com.tkay.core.common.l.a.f$a r2 = (com.tkay.core.common.l.a.f.a) r2
            long r2 = r2.c
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 >= 0) goto La
            java.util.ArrayList<android.view.View> r2 = r4.d
            java.lang.Object r1 = r1.getKey()
            android.view.View r1 = (android.view.View) r1
            r2.add(r1)
            goto La
        L2e:
            java.util.ArrayList<android.view.View> r5 = r4.d
            java.util.Iterator r5 = r5.iterator()
        L34:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L44
            java.lang.Object r6 = r5.next()
            android.view.View r6 = (android.view.View) r6
            r4.a(r6)
            goto L34
        L44:
            java.util.ArrayList<android.view.View> r5 = r4.d
            r5.clear()
            return
    }

    private void a(android.view.View r7, int r8, java.lang.Integer r9) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r7
            r3 = r8
            r4 = r8
            r5 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void a(android.view.View r7, android.view.View r8, int r9, java.lang.Integer r10) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r9
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private static boolean a(android.content.Context r3, android.view.View r4) {
            boolean r0 = r3 instanceof android.app.Activity
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            r2 = 0
            if (r0 != 0) goto La
            r3 = r2
            goto L18
        La:
            android.app.Activity r3 = (android.app.Activity) r3
            android.view.Window r3 = r3.getWindow()
            android.view.View r3 = r3.getDecorView()
            android.view.View r3 = r3.findViewById(r1)
        L18:
            if (r4 != 0) goto L1b
            goto L2a
        L1b:
            android.view.View r4 = r4.getRootView()
            if (r4 != 0) goto L22
            goto L2a
        L22:
            android.view.View r2 = r4.findViewById(r1)
            if (r2 == 0) goto L29
            goto L2a
        L29:
            r2 = r4
        L2a:
            if (r3 == 0) goto L2d
            goto L2e
        L2d:
            r3 = r2
        L2e:
            r4 = 0
            if (r3 != 0) goto L32
            return r4
        L32:
            android.view.ViewTreeObserver r3 = r3.getViewTreeObserver()
            boolean r3 = r3.isAlive()
            if (r3 != 0) goto L3d
            return r4
        L3d:
            r3 = 1
            return r3
    }

    static com.tkay.core.common.l.a.f.b b(com.tkay.core.common.l.a.f r0) {
            com.tkay.core.common.l.a.f$b r0 = r0.g
            return r0
    }

    static com.tkay.core.common.l.a.f.d c(com.tkay.core.common.l.a.f r0) {
            com.tkay.core.common.l.a.f$d r0 = r0.h
            return r0
    }

    static boolean d(com.tkay.core.common.l.a.f r1) {
            r0 = 0
            r1.k = r0
            return r0
    }

    final void a() {
            r2 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r0 = r2.f
            r0.clear()
            android.os.Handler r0 = r2.j
            r1 = 0
            r0.removeMessages(r1)
            r2.k = r1
            return
    }

    final void a(android.view.View r2) {
            r1 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r0 = r1.f
            r0.remove(r2)
            return
    }

    final void a(android.view.View r5, android.view.View r6, int r7, int r8, java.lang.Integer r9) {
            r4 = this;
            android.content.Context r0 = r6.getContext()     // Catch: java.lang.Throwable -> L50
            boolean r0 = a(r0, r6)     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto Lb
            return
        Lb:
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r0 = r4.f     // Catch: java.lang.Throwable -> L50
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L50
            com.tkay.core.common.l.a.f$a r0 = (com.tkay.core.common.l.a.f.a) r0     // Catch: java.lang.Throwable -> L50
            if (r0 != 0) goto L22
            com.tkay.core.common.l.a.f$a r0 = new com.tkay.core.common.l.a.f$a     // Catch: java.lang.Throwable -> L50
            r0.<init>()     // Catch: java.lang.Throwable -> L50
            java.util.Map<android.view.View, com.tkay.core.common.l.a.f$a> r1 = r4.f     // Catch: java.lang.Throwable -> L50
            r1.put(r6, r0)     // Catch: java.lang.Throwable -> L50
            r4.c()     // Catch: java.lang.Throwable -> L50
        L22:
            int r8 = java.lang.Math.min(r8, r7)     // Catch: java.lang.Throwable -> L50
            r0.d = r5     // Catch: java.lang.Throwable -> L50
            r0.a = r7     // Catch: java.lang.Throwable -> L50
            r0.b = r8     // Catch: java.lang.Throwable -> L50
            long r7 = r4.e     // Catch: java.lang.Throwable -> L50
            r0.c = r7     // Catch: java.lang.Throwable -> L50
            r0.e = r9     // Catch: java.lang.Throwable -> L50
            android.view.ViewTreeObserver r5 = r6.getViewTreeObserver()     // Catch: java.lang.Throwable -> L50
            android.view.ViewTreeObserver$OnPreDrawListener r6 = r4.b     // Catch: java.lang.Throwable -> L50
            r5.addOnPreDrawListener(r6)     // Catch: java.lang.Throwable -> L50
            long r5 = r4.e     // Catch: java.lang.Throwable -> L50
            r7 = 1
            long r5 = r5 + r7
            r4.e = r5     // Catch: java.lang.Throwable -> L50
            r7 = 50
            long r0 = r5 % r7
            r2 = 0
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 != 0) goto L50
            long r5 = r5 - r7
            r4.a(r5)     // Catch: java.lang.Throwable -> L50
        L50:
            return
    }

    final void a(com.tkay.core.common.l.a.f.d r1) {
            r0 = this;
            r0.h = r1
            return
    }

    final void b() {
            r1 = this;
            r1.a()
            r0 = 0
            r1.h = r0
            return
    }

    final void c() {
            r4 = this;
            boolean r0 = r4.k
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.k = r0
            android.os.Handler r0 = r4.j
            com.tkay.core.common.l.a.f$c r1 = r4.i
            int r2 = r4.c
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
            return
    }
}
