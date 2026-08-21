package com.tkay.core.common.res;

public class b {
    private static final java.lang.String b = "ImageLoader";
    private static volatile com.tkay.core.common.res.b c;
    android.content.Context a;
    private java.util.Map<java.lang.String, java.lang.Integer> d;
    private com.tkay.core.common.res.c<java.lang.String, java.lang.ref.SoftReference<android.graphics.Bitmap>> e;
    private final java.lang.Object f;
    private final java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b.a>> g;

    final class 1 implements java.lang.Runnable {
        final android.graphics.Bitmap a;
        final com.tkay.core.common.res.b.a b;
        final java.lang.String c;
        final com.tkay.core.common.res.b d;

        1(com.tkay.core.common.res.b r1, android.graphics.Bitmap r2, com.tkay.core.common.res.b.a r3, java.lang.String r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                android.graphics.Bitmap r0 = r3.a
                if (r0 == 0) goto Lc
                com.tkay.core.common.res.b$a r1 = r3.b
                java.lang.String r2 = r3.c
                r1.onSuccess(r2, r0)
                return
            Lc:
                com.tkay.core.common.res.b$a r0 = r3.b
                java.lang.String r1 = r3.c
                java.lang.String r2 = "Bitmap load fail"
                r0.onFail(r1, r2)
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final com.tkay.core.common.res.b.a a;
        final java.lang.String b;
        final java.lang.String c;
        final com.tkay.core.common.res.b d;

        2(com.tkay.core.common.res.b r1, com.tkay.core.common.res.b.a r2, java.lang.String r3, java.lang.String r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.core.common.res.b$a r0 = r3.a
                java.lang.String r1 = r3.b
                java.lang.String r2 = r3.c
                r0.onFail(r1, r2)
                return
        }
    }



    final class 5 implements com.tkay.core.common.res.image.a.a {
        final int a;
        final int b;
        final com.tkay.core.common.res.e c;
        final com.tkay.core.common.res.b d;

        5(com.tkay.core.common.res.b r1, int r2, int r3, com.tkay.core.common.res.e r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.core.common.res.e r4) {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Load Success:"
                r0.<init>(r1)
                java.lang.String r1 = r4.f
                r0.append(r1)
                com.tkay.core.common.res.b r0 = r3.d
                int r1 = r3.a
                int r2 = r3.b
                android.graphics.Bitmap r0 = r0.a(r4, r1, r2)
                if (r0 == 0) goto L1f
                com.tkay.core.common.res.b r1 = r3.d
                java.lang.String r4 = r4.f
                r1.a(r4, r0)
            L1f:
                com.tkay.core.common.res.b r4 = r3.d
                com.tkay.core.common.res.e r1 = r3.c
                java.lang.String r1 = r1.f
                com.tkay.core.common.res.b.a(r4, r1, r0)
                return
        }

        @Override
        public final void a(com.tkay.core.common.res.e r2, java.lang.String r3) {
                r1 = this;
                com.tkay.core.common.res.b r0 = r1.d
                java.lang.String r2 = r2.f
                com.tkay.core.common.res.b.a(r0, r2, r3)
                return
        }
    }

    public interface a {
        void onFail(java.lang.String r1, java.lang.String r2);

        void onSuccess(java.lang.String r1, android.graphics.Bitmap r2);
    }

    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.f = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.g = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.a = r3
            java.lang.Runtime r3 = java.lang.Runtime.getRuntime()
            long r0 = r3.maxMemory()
            int r3 = (int) r0
            int r3 = r3 / 5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ImageLoad init cache size: "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = "B"
            r0.append(r1)
            com.tkay.core.common.res.b$3 r0 = new com.tkay.core.common.res.b$3
            r0.<init>(r2, r3)
            r2.e = r0
            return
    }

    private android.graphics.Bitmap a(java.lang.String r2) {
            r1 = this;
            com.tkay.core.common.res.c<java.lang.String, java.lang.ref.SoftReference<android.graphics.Bitmap>> r0 = r1.e
            java.lang.Object r2 = r0.a(r2)
            java.lang.ref.SoftReference r2 = (java.lang.ref.SoftReference) r2
            if (r2 == 0) goto L11
            java.lang.Object r2 = r2.get()
            android.graphics.Bitmap r2 = (android.graphics.Bitmap) r2
            return r2
        L11:
            r2 = 0
            return r2
    }

    public static com.tkay.core.common.res.b a(android.content.Context r2) {
            com.tkay.core.common.res.b r0 = com.tkay.core.common.res.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.res.b> r0 = com.tkay.core.common.res.b.class
            monitor-enter(r0)
            com.tkay.core.common.res.b r1 = com.tkay.core.common.res.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.res.b r1 = new com.tkay.core.common.res.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.res.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.c
            return r2
    }

    static java.util.Map a(com.tkay.core.common.res.b r0) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r0.d
            return r0
    }

    static java.util.Map a(com.tkay.core.common.res.b r0, java.util.Map r1) {
            r0.d = r1
            return r1
    }

    private void a() {
            r1 = this;
            com.tkay.core.common.res.c<java.lang.String, java.lang.ref.SoftReference<android.graphics.Bitmap>> r0 = r1.e     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L9
            com.tkay.core.common.res.c<java.lang.String, java.lang.ref.SoftReference<android.graphics.Bitmap>> r0 = r1.e     // Catch: java.lang.Exception -> L12
            r0.a()     // Catch: java.lang.Exception -> L12
        L9:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r1.g     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L12
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r1.g     // Catch: java.lang.Exception -> L12
            r0.clear()     // Catch: java.lang.Exception -> L12
        L12:
            return
    }

    static void a(com.tkay.core.common.res.b r3, com.tkay.core.common.res.e r4, int r5, int r6, com.tkay.core.common.res.b.a r7) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r3.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L44
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L44
            if (r1 != 0) goto L2d
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L44
            r1.<init>()     // Catch: java.lang.Throwable -> L44
            r1.add(r7)     // Catch: java.lang.Throwable -> L44
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r7 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L44
            r7.put(r2, r1)     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.res.image.a r7 = new com.tkay.core.common.res.image.a     // Catch: java.lang.Throwable -> L44
            r7.<init>(r4)     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.res.b$5 r1 = new com.tkay.core.common.res.b$5     // Catch: java.lang.Throwable -> L44
            r1.<init>(r3, r5, r6, r4)     // Catch: java.lang.Throwable -> L44
            r7.a(r1)     // Catch: java.lang.Throwable -> L44
            r7.d()     // Catch: java.lang.Throwable -> L44
            goto L42
        L2d:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r3 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r4 = r4.f     // Catch: java.lang.Throwable -> L44
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L44
            java.util.LinkedList r3 = (java.util.LinkedList) r3     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L42
            boolean r4 = r3.contains(r7)     // Catch: java.lang.Throwable -> L44
            if (r4 != 0) goto L42
            r3.add(r7)     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        L44:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static void a(com.tkay.core.common.res.b r5, java.lang.String r6, android.graphics.Bitmap r7) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r5.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r5.g     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r1 = r1.remove(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.LinkedList r1 = (java.util.LinkedList) r1     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$a r2 = (com.tkay.core.common.res.b.a) r2     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L11
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$1 r4 = new com.tkay.core.common.res.b$1     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r5, r7, r2, r6)     // Catch: java.lang.Throwable -> L2e
            r3.a(r4)     // Catch: java.lang.Throwable -> L2e
            goto L11
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    static void a(com.tkay.core.common.res.b r5, java.lang.String r6, java.lang.String r7) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r5.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r5.g     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r1 = r1.remove(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.LinkedList r1 = (java.util.LinkedList) r1     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$a r2 = (com.tkay.core.common.res.b.a) r2     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L11
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$2 r4 = new com.tkay.core.common.res.b$2     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r5, r2, r6, r7)     // Catch: java.lang.Throwable -> L2e
            r3.a(r4)     // Catch: java.lang.Throwable -> L2e
            goto L11
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    private void a(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r5.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r5.g     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r1 = r1.remove(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.LinkedList r1 = (java.util.LinkedList) r1     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$a r2 = (com.tkay.core.common.res.b.a) r2     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L11
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$2 r4 = new com.tkay.core.common.res.b$2     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r5, r2, r6, r7)     // Catch: java.lang.Throwable -> L2e
            r3.a(r4)     // Catch: java.lang.Throwable -> L2e
            goto L11
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    static java.util.LinkedHashMap b(com.tkay.core.common.res.b r0) {
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r0.g
            return r0
    }

    private void b(com.tkay.core.common.res.e r4, int r5, int r6, com.tkay.core.common.res.b.a r7) {
            r3 = this;
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r3.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L44
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L44
            if (r1 != 0) goto L2d
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L44
            r1.<init>()     // Catch: java.lang.Throwable -> L44
            r1.add(r7)     // Catch: java.lang.Throwable -> L44
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r7 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L44
            r7.put(r2, r1)     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.res.image.a r7 = new com.tkay.core.common.res.image.a     // Catch: java.lang.Throwable -> L44
            r7.<init>(r4)     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.res.b$5 r1 = new com.tkay.core.common.res.b$5     // Catch: java.lang.Throwable -> L44
            r1.<init>(r3, r5, r6, r4)     // Catch: java.lang.Throwable -> L44
            r7.a(r1)     // Catch: java.lang.Throwable -> L44
            r7.d()     // Catch: java.lang.Throwable -> L44
            goto L42
        L2d:
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r5 = r3.g     // Catch: java.lang.Throwable -> L44
            java.lang.String r4 = r4.f     // Catch: java.lang.Throwable -> L44
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Throwable -> L44
            java.util.LinkedList r4 = (java.util.LinkedList) r4     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L42
            boolean r5 = r4.contains(r7)     // Catch: java.lang.Throwable -> L44
            if (r5 != 0) goto L42
            r4.add(r7)     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L44
            return
        L44:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private void b(java.lang.String r6, android.graphics.Bitmap r7) {
            r5 = this;
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r0 = r5.g
            monitor-enter(r0)
            java.util.LinkedHashMap<java.lang.String, java.util.List<com.tkay.core.common.res.b$a>> r1 = r5.g     // Catch: java.lang.Throwable -> L2e
            java.lang.Object r1 = r1.remove(r6)     // Catch: java.lang.Throwable -> L2e
            java.util.LinkedList r1 = (java.util.LinkedList) r1     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L2c
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$a r2 = (com.tkay.core.common.res.b.a) r2     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L11
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L2e
            com.tkay.core.common.res.b$1 r4 = new com.tkay.core.common.res.b$1     // Catch: java.lang.Throwable -> L2e
            r4.<init>(r5, r7, r2, r6)     // Catch: java.lang.Throwable -> L2e
            r3.a(r4)     // Catch: java.lang.Throwable -> L2e
            goto L11
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public final android.graphics.Bitmap a(com.tkay.core.common.res.e r5, int r6, int r7) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L57
            java.lang.String r1 = r5.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lc
            goto L57
        Lc:
            java.lang.String r1 = r5.f
            java.lang.String r1 = com.tkay.core.common.l.f.a(r1)
            if (r6 > 0) goto L20
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L2e
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L2e
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L2e
            int r6 = r2.widthPixels     // Catch: java.lang.Throwable -> L2e
        L20:
            if (r7 > 0) goto L2e
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L2e
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L2e
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L2e
            int r7 = r2.heightPixels     // Catch: java.lang.Throwable -> L2e
        L2e:
            java.lang.Object r2 = r4.f
            monitor-enter(r2)
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L54
            com.tkay.core.common.res.d r3 = com.tkay.core.common.res.d.a(r3)     // Catch: java.lang.Throwable -> L54
            int r5 = r5.e     // Catch: java.lang.Throwable -> L54
            java.io.FileInputStream r5 = r3.a(r5, r1)     // Catch: java.lang.Throwable -> L54
            if (r5 != 0) goto L41
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L54
            return r0
        L41:
            java.io.FileDescriptor r1 = r5.getFD()     // Catch: java.lang.Throwable -> L4f
            android.graphics.Bitmap r0 = com.tkay.core.common.l.b.a(r1, r6, r7)     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L52
        L4b:
            r5.close()     // Catch: java.lang.Exception -> L52 java.lang.Throwable -> L54
            goto L52
        L4f:
            if (r5 == 0) goto L52
            goto L4b
        L52:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L54
            return r0
        L54:
            r5 = move-exception
            monitor-exit(r2)
            throw r5
        L57:
            return r0
    }

    public final void a(com.tkay.core.common.res.e r9, int r10, int r11, com.tkay.core.common.res.b.a r12) {
            r8 = this;
            if (r9 == 0) goto L32
            java.lang.String r0 = r9.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
            java.lang.String r0 = r9.f
            android.graphics.Bitmap r0 = r8.a(r0)
            if (r0 == 0) goto L1f
            boolean r1 = r0.isRecycled()
            if (r1 != 0) goto L1f
            java.lang.String r9 = r9.f
            r12.onSuccess(r9, r0)
            return
        L1f:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.res.b$4 r7 = new com.tkay.core.common.res.b$4
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
        L32:
            if (r12 == 0) goto L3b
            java.lang.String r9 = ""
            java.lang.String r10 = "No url info."
            r12.onFail(r9, r10)
        L3b:
            return
    }

    public final void a(com.tkay.core.common.res.e r2, com.tkay.core.common.res.b.a r3) {
            r1 = this;
            r0 = -1
            r1.a(r2, r0, r0, r3)
            return
    }

    public final void a(java.lang.String r3, android.graphics.Bitmap r4) {
            r2 = this;
            android.graphics.Bitmap r0 = r2.a(r3)
            if (r0 != 0) goto L12
            if (r4 == 0) goto L12
            com.tkay.core.common.res.c<java.lang.String, java.lang.ref.SoftReference<android.graphics.Bitmap>> r0 = r2.e
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r4)
            r0.b(r3, r1)
        L12:
            return
    }
}
