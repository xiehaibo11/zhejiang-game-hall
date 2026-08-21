package com.tkay.expressad.exoplayer.j.a;

public final class m implements com.tkay.expressad.exoplayer.j.a.a {
    private static final java.lang.String a = "SimpleCache";
    private static final java.util.HashSet<java.io.File> b = null;
    private static boolean c;
    private final java.io.File d;
    private final com.tkay.expressad.exoplayer.j.a.d e;
    private final com.tkay.expressad.exoplayer.j.a.h f;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a.b>> g;
    private long h;
    private boolean i;


    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.tkay.expressad.exoplayer.j.a.m.b = r0
            return
    }

    private m(java.io.File r3, com.tkay.expressad.exoplayer.j.a.d r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    private m(java.io.File r2, com.tkay.expressad.exoplayer.j.a.d r3, com.tkay.expressad.exoplayer.j.a.h r4) {
            r1 = this;
            r1.<init>()
            boolean r0 = c(r2)
            if (r0 == 0) goto L29
            r1.d = r2
            r1.e = r3
            r1.f = r4
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.g = r2
            android.os.ConditionVariable r2 = new android.os.ConditionVariable
            r2.<init>()
            com.tkay.expressad.exoplayer.j.a.m$1 r3 = new com.tkay.expressad.exoplayer.j.a.m$1
            java.lang.String r4 = "SimpleCache.initialize()"
            r3.<init>(r1, r4, r2)
            r3.start()
            r2.block()
            return
        L29:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r4 = "Another SimpleCache instance uses the folder: "
            java.lang.String r2 = r4.concat(r2)
            r3.<init>(r2)
            throw r3
    }

    private m(java.io.File r2, com.tkay.expressad.exoplayer.j.a.d r3, byte[] r4) {
            r1 = this;
            if (r4 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            r1.<init>(r2, r3, r4, r0)
            return
    }

    private m(java.io.File r2, com.tkay.expressad.exoplayer.j.a.d r3, byte[] r4, boolean r5) {
            r1 = this;
            com.tkay.expressad.exoplayer.j.a.h r0 = new com.tkay.expressad.exoplayer.j.a.h
            r0.<init>(r2, r4, r5)
            r1.<init>(r2, r3, r0)
            return
    }

    private void a(com.tkay.expressad.exoplayer.j.a.e r6, boolean r7) {
            r5 = this;
            com.tkay.expressad.exoplayer.j.a.h r0 = r5.f
            java.lang.String r1 = r6.a
            com.tkay.expressad.exoplayer.j.a.g r0 = r0.b(r1)
            if (r0 == 0) goto L2f
            boolean r1 = r0.a(r6)
            if (r1 != 0) goto L11
            goto L2f
        L11:
            long r1 = r5.h
            long r3 = r6.c
            long r1 = r1 - r3
            r5.h = r1
            if (r7 == 0) goto L2c
            com.tkay.expressad.exoplayer.j.a.h r7 = r5.f     // Catch: java.lang.Throwable -> L27
            java.lang.String r0 = r0.b     // Catch: java.lang.Throwable -> L27
            r7.d(r0)     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.exoplayer.j.a.h r7 = r5.f     // Catch: java.lang.Throwable -> L27
            r7.b()     // Catch: java.lang.Throwable -> L27
            goto L2c
        L27:
            r7 = move-exception
            r5.c(r6)
            throw r7
        L2c:
            r5.c(r6)
        L2f:
            return
    }

    static void a(com.tkay.expressad.exoplayer.j.a.m r8) {
            java.io.File r0 = r8.d
            boolean r0 = r0.exists()
            if (r0 != 0) goto Le
            java.io.File r8 = r8.d
            r8.mkdirs()
            return
        Le:
            com.tkay.expressad.exoplayer.j.a.h r0 = r8.f
            r0.a()
            java.io.File r0 = r8.d
            java.io.File[] r0 = r0.listFiles()
            if (r0 == 0) goto L5e
            int r1 = r0.length
            r2 = 0
        L1d:
            if (r2 >= r1) goto L4b
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "cached_content_index.exi"
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L48
            long r4 = r3.length()
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L3e
            com.tkay.expressad.exoplayer.j.a.h r4 = r8.f
            com.tkay.expressad.exoplayer.j.a.n r4 = com.tkay.expressad.exoplayer.j.a.n.a(r3, r4)
            goto L3f
        L3e:
            r4 = 0
        L3f:
            if (r4 == 0) goto L45
            r8.a(r4)
            goto L48
        L45:
            r3.delete()
        L48:
            int r2 = r2 + 1
            goto L1d
        L4b:
            com.tkay.expressad.exoplayer.j.a.h r0 = r8.f
            r0.d()
            com.tkay.expressad.exoplayer.j.a.h r8 = r8.f     // Catch: com.tkay.expressad.exoplayer.j.a.a.a -> L56
            r8.b()     // Catch: com.tkay.expressad.exoplayer.j.a.a.a -> L56
            return
        L56:
            r8 = move-exception
            java.lang.String r0 = "SimpleCache"
            java.lang.String r1 = "Storing index file failed"
            android.util.Log.e(r0, r1, r8)
        L5e:
            return
    }

    private void a(com.tkay.expressad.exoplayer.j.a.n r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.j.a.h r0 = r4.f
            java.lang.String r1 = r5.a
            com.tkay.expressad.exoplayer.j.a.g r0 = r0.a(r1)
            r0.a(r5)
            long r0 = r4.h
            long r2 = r5.c
            long r0 = r0 + r2
            r4.h = r0
            r4.b(r5)
            return
    }

    static com.tkay.expressad.exoplayer.j.a.d b(com.tkay.expressad.exoplayer.j.a.m r0) {
            com.tkay.expressad.exoplayer.j.a.d r0 = r0.e
            return r0
    }

    private void b(com.tkay.expressad.exoplayer.j.a.n r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r1.g
            java.lang.String r2 = r2.a
            java.lang.Object r2 = r0.get(r2)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 == 0) goto L1a
            int r0 = r2.size()
            int r0 = r0 + (-1)
        L12:
            if (r0 < 0) goto L1a
            r2.get(r0)
            int r0 = r0 + (-1)
            goto L12
        L1a:
            return
    }

    private static synchronized boolean b(java.io.File r2) {
            java.lang.Class<com.tkay.expressad.exoplayer.j.a.m> r0 = com.tkay.expressad.exoplayer.j.a.m.class
            monitor-enter(r0)
            java.util.HashSet<java.io.File> r1 = com.tkay.expressad.exoplayer.j.a.m.b     // Catch: java.lang.Throwable -> Lf
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> Lf
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void c(com.tkay.expressad.exoplayer.j.a.e r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r1.g
            java.lang.String r2 = r2.a
            java.lang.Object r2 = r0.get(r2)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 == 0) goto L1a
            int r0 = r2.size()
            int r0 = r0 + (-1)
        L12:
            if (r0 < 0) goto L1a
            r2.get(r0)
            int r0 = r0 + (-1)
            goto L12
        L1a:
            return
    }

    private void c(com.tkay.expressad.exoplayer.j.a.n r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r1.g
            java.lang.String r2 = r2.a
            java.lang.Object r2 = r0.get(r2)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 == 0) goto L1a
            int r0 = r2.size()
            int r0 = r0 + (-1)
        L12:
            if (r0 < 0) goto L1a
            r2.get(r0)
            int r0 = r0 + (-1)
            goto L12
        L1a:
            return
    }

    private static synchronized boolean c(java.io.File r2) {
            java.lang.Class<com.tkay.expressad.exoplayer.j.a.m> r0 = com.tkay.expressad.exoplayer.j.a.m.class
            monitor-enter(r0)
            boolean r1 = com.tkay.expressad.exoplayer.j.a.m.c     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto La
            r2 = 1
            monitor-exit(r0)
            return r2
        La:
            java.util.HashSet<java.io.File> r1 = com.tkay.expressad.exoplayer.j.a.m.b     // Catch: java.lang.Throwable -> L16
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> L16
            boolean r2 = r1.add(r2)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    @java.lang.Deprecated
    private static synchronized void d() {
            java.lang.Class<com.tkay.expressad.exoplayer.j.a.m> r0 = com.tkay.expressad.exoplayer.j.a.m.class
            monitor-enter(r0)
            r1 = 1
            com.tkay.expressad.exoplayer.j.a.m.c = r1     // Catch: java.lang.Throwable -> Ld
            java.util.HashSet<java.io.File> r1 = com.tkay.expressad.exoplayer.j.a.m.b     // Catch: java.lang.Throwable -> Ld
            r1.clear()     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static synchronized void d(java.io.File r2) {
            java.lang.Class<com.tkay.expressad.exoplayer.j.a.m> r0 = com.tkay.expressad.exoplayer.j.a.m.class
            monitor-enter(r0)
            boolean r1 = com.tkay.expressad.exoplayer.j.a.m.c     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto L10
            java.util.HashSet<java.io.File> r1 = com.tkay.expressad.exoplayer.j.a.m.b     // Catch: java.lang.Throwable -> L12
            java.io.File r2 = r2.getAbsoluteFile()     // Catch: java.lang.Throwable -> L12
            r1.remove(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private synchronized com.tkay.expressad.exoplayer.j.a.n e(java.lang.String r2, long r3) {
            r1 = this;
            monitor-enter(r1)
        L1:
            com.tkay.expressad.exoplayer.j.a.n r0 = r1.f(r2, r3)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L9
            monitor-exit(r1)
            return r0
        L9:
            r1.wait()     // Catch: java.lang.Throwable -> Ld
            goto L1
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void e() {
            r8 = this;
            java.io.File r0 = r8.d
            boolean r0 = r0.exists()
            if (r0 != 0) goto Le
            java.io.File r0 = r8.d
            r0.mkdirs()
            return
        Le:
            com.tkay.expressad.exoplayer.j.a.h r0 = r8.f
            r0.a()
            java.io.File r0 = r8.d
            java.io.File[] r0 = r0.listFiles()
            if (r0 != 0) goto L1c
            return
        L1c:
            int r1 = r0.length
            r2 = 0
        L1e:
            if (r2 >= r1) goto L4c
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "cached_content_index.exi"
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L49
            long r4 = r3.length()
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L3f
            com.tkay.expressad.exoplayer.j.a.h r4 = r8.f
            com.tkay.expressad.exoplayer.j.a.n r4 = com.tkay.expressad.exoplayer.j.a.n.a(r3, r4)
            goto L40
        L3f:
            r4 = 0
        L40:
            if (r4 == 0) goto L46
            r8.a(r4)
            goto L49
        L46:
            r3.delete()
        L49:
            int r2 = r2 + 1
            goto L1e
        L4c:
            com.tkay.expressad.exoplayer.j.a.h r0 = r8.f
            r0.d()
            com.tkay.expressad.exoplayer.j.a.h r0 = r8.f     // Catch: com.tkay.expressad.exoplayer.j.a.a.a -> L57
            r0.b()     // Catch: com.tkay.expressad.exoplayer.j.a.a.a -> L57
            return
        L57:
            r0 = move-exception
            java.lang.String r1 = "SimpleCache"
            java.lang.String r2 = "Storing index file failed"
            android.util.Log.e(r1, r2, r0)
            return
    }

    private synchronized com.tkay.expressad.exoplayer.j.a.n f(java.lang.String r5, long r6) {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.i     // Catch: java.lang.Throwable -> L6b
            r1 = 1
            if (r0 != 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.j.a.h r0 = r4.f     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.j.a.g r0 = r0.b(r5)     // Catch: java.lang.Throwable -> L6b
            if (r0 != 0) goto L19
            com.tkay.expressad.exoplayer.j.a.n r6 = com.tkay.expressad.exoplayer.j.a.n.b(r5, r6)     // Catch: java.lang.Throwable -> L6b
            goto L2e
        L19:
            com.tkay.expressad.exoplayer.j.a.n r2 = r0.a(r6)     // Catch: java.lang.Throwable -> L6b
            boolean r3 = r2.d     // Catch: java.lang.Throwable -> L6b
            if (r3 == 0) goto L2d
            java.io.File r3 = r2.e     // Catch: java.lang.Throwable -> L6b
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L6b
            if (r3 != 0) goto L2d
            r4.f()     // Catch: java.lang.Throwable -> L6b
            goto L19
        L2d:
            r6 = r2
        L2e:
            boolean r7 = r6.d     // Catch: java.lang.Throwable -> L6b
            if (r7 == 0) goto L57
            com.tkay.expressad.exoplayer.j.a.h r7 = r4.f     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.j.a.g r5 = r7.b(r5)     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.j.a.n r5 = r5.b(r6)     // Catch: java.lang.Throwable -> L6b
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r7 = r4.g     // Catch: java.lang.Throwable -> L6b
            java.lang.String r6 = r6.a     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r6 = r7.get(r6)     // Catch: java.lang.Throwable -> L6b
            java.util.ArrayList r6 = (java.util.ArrayList) r6     // Catch: java.lang.Throwable -> L6b
            if (r6 == 0) goto L55
            int r7 = r6.size()     // Catch: java.lang.Throwable -> L6b
            int r7 = r7 - r1
        L4d:
            if (r7 < 0) goto L55
            r6.get(r7)     // Catch: java.lang.Throwable -> L6b
            int r7 = r7 + (-1)
            goto L4d
        L55:
            monitor-exit(r4)
            return r5
        L57:
            com.tkay.expressad.exoplayer.j.a.h r7 = r4.f     // Catch: java.lang.Throwable -> L6b
            com.tkay.expressad.exoplayer.j.a.g r5 = r7.a(r5)     // Catch: java.lang.Throwable -> L6b
            boolean r7 = r5.b()     // Catch: java.lang.Throwable -> L6b
            if (r7 != 0) goto L68
            r5.a(r1)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r4)
            return r6
        L68:
            r5 = 0
            monitor-exit(r4)
            return r5
        L6b:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    private void f() {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.exoplayer.j.a.h r1 = r5.f
            java.util.Collection r1 = r1.c()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.j.a.g r2 = (com.tkay.expressad.exoplayer.j.a.g) r2
            java.util.TreeSet r2 = r2.c()
            java.util.Iterator r2 = r2.iterator()
        L23:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Lf
            java.lang.Object r3 = r2.next()
            com.tkay.expressad.exoplayer.j.a.e r3 = (com.tkay.expressad.exoplayer.j.a.e) r3
            java.io.File r4 = r3.e
            boolean r4 = r4.exists()
            if (r4 != 0) goto L23
            r0.add(r3)
            goto L23
        L3b:
            r1 = 0
            r2 = r1
        L3d:
            int r3 = r0.size()
            if (r2 >= r3) goto L4f
            java.lang.Object r3 = r0.get(r2)
            com.tkay.expressad.exoplayer.j.a.e r3 = (com.tkay.expressad.exoplayer.j.a.e) r3
            r5.a(r3, r1)
            int r2 = r2 + 1
            goto L3d
        L4f:
            com.tkay.expressad.exoplayer.j.a.h r0 = r5.f
            r0.d()
            com.tkay.expressad.exoplayer.j.a.h r0 = r5.f
            r0.b()
            return
    }

    private com.tkay.expressad.exoplayer.j.a.n g(java.lang.String r3, long r4) {
            r2 = this;
            com.tkay.expressad.exoplayer.j.a.h r0 = r2.f
            com.tkay.expressad.exoplayer.j.a.g r0 = r0.b(r3)
            if (r0 != 0) goto Ld
            com.tkay.expressad.exoplayer.j.a.n r3 = com.tkay.expressad.exoplayer.j.a.n.b(r3, r4)
            return r3
        Ld:
            com.tkay.expressad.exoplayer.j.a.n r3 = r0.a(r4)
            boolean r1 = r3.d
            if (r1 == 0) goto L21
            java.io.File r1 = r3.e
            boolean r1 = r1.exists()
            if (r1 != 0) goto L21
            r2.f()
            goto Ld
        L21:
            return r3
    }

    @Override
    public final com.tkay.expressad.exoplayer.j.a.e a(java.lang.String r1, long r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.j.a.n r1 = r0.e(r1, r2)
            return r1
    }

    @Override
    public final synchronized java.util.NavigableSet<com.tkay.expressad.exoplayer.j.a.e> a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.i     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L2c
            com.tkay.expressad.exoplayer.j.a.h r0 = r1.f     // Catch: java.lang.Throwable -> L2c
            com.tkay.expressad.exoplayer.j.a.g r2 = r0.b(r2)     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L25
            boolean r0 = r2.d()     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L1a
            goto L25
        L1a:
            java.util.TreeSet r0 = new java.util.TreeSet     // Catch: java.lang.Throwable -> L2c
            java.util.TreeSet r2 = r2.c()     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r1)
            return r0
        L25:
            java.util.TreeSet r2 = new java.util.TreeSet     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r1)
            return r2
        L2c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized java.util.NavigableSet<com.tkay.expressad.exoplayer.j.a.e> a(java.lang.String r3, com.tkay.expressad.exoplayer.j.a.a.b r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L28
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r2.g     // Catch: java.lang.Throwable -> L28
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L28
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L1f
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L28
            r0.<init>()     // Catch: java.lang.Throwable -> L28
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r1 = r2.g     // Catch: java.lang.Throwable -> L28
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L28
        L1f:
            r0.add(r4)     // Catch: java.lang.Throwable -> L28
            java.util.NavigableSet r3 = r2.a(r3)     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)
            return r3
        L28:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void a() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.i     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L7
            monitor-exit(r3)
            return
        L7:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r3.g     // Catch: java.lang.Throwable -> L22
            r0.clear()     // Catch: java.lang.Throwable -> L22
            r0 = 1
            r3.f()     // Catch: java.lang.Throwable -> L19
            java.io.File r1 = r3.d     // Catch: java.lang.Throwable -> L22
            d(r1)     // Catch: java.lang.Throwable -> L22
            r3.i = r0     // Catch: java.lang.Throwable -> L22
            monitor-exit(r3)
            return
        L19:
            r1 = move-exception
            java.io.File r2 = r3.d     // Catch: java.lang.Throwable -> L22
            d(r2)     // Catch: java.lang.Throwable -> L22
            r3.i = r0     // Catch: java.lang.Throwable -> L22
            throw r1     // Catch: java.lang.Throwable -> L22
        L22:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    @Override
    public final synchronized void a(com.tkay.expressad.exoplayer.j.a.e r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = r1
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.j.a.h r0 = r2.f     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.j.a.g r3 = r0.b(r3)     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.k.a.a(r3)     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r3.b()     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L2d
            r3.a(r1)     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.j.a.h r0 = r2.f     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r3.b     // Catch: java.lang.Throwable -> L2d
            r0.d(r3)     // Catch: java.lang.Throwable -> L2d
            r2.notifyAll()     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r2)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void a(java.io.File r10) {
            r9 = this;
            monitor-enter(r9)
            boolean r0 = r9.i     // Catch: java.lang.Throwable -> L6d
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.j.a.h r0 = r9.f     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.j.a.n r0 = com.tkay.expressad.exoplayer.j.a.n.a(r10, r0)     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L17
            r3 = r1
            goto L18
        L17:
            r3 = r2
        L18:
            com.tkay.expressad.exoplayer.k.a.b(r3)     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.j.a.h r3 = r9.f     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = r0.a     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.j.a.g r3 = r3.b(r4)     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.k.a.a(r3)     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r3.b()     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.k.a.b(r4)     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r10.exists()     // Catch: java.lang.Throwable -> L6d
            if (r4 != 0) goto L35
            monitor-exit(r9)
            return
        L35:
            long r4 = r10.length()     // Catch: java.lang.Throwable -> L6d
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L44
            r10.delete()     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r9)
            return
        L44:
            com.tkay.expressad.exoplayer.j.a.i r10 = r3.a()     // Catch: java.lang.Throwable -> L6d
            long r3 = com.tkay.expressad.exoplayer.j.a.j.a(r10)     // Catch: java.lang.Throwable -> L6d
            r5 = -1
            int r10 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r10 == 0) goto L60
            long r5 = r0.b     // Catch: java.lang.Throwable -> L6d
            long r7 = r0.c     // Catch: java.lang.Throwable -> L6d
            long r5 = r5 + r7
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 > 0) goto L5c
            goto L5d
        L5c:
            r1 = r2
        L5d:
            com.tkay.expressad.exoplayer.k.a.b(r1)     // Catch: java.lang.Throwable -> L6d
        L60:
            r9.a(r0)     // Catch: java.lang.Throwable -> L6d
            com.tkay.expressad.exoplayer.j.a.h r10 = r9.f     // Catch: java.lang.Throwable -> L6d
            r10.b()     // Catch: java.lang.Throwable -> L6d
            r9.notifyAll()     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r9)
            return
        L6d:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    @Override
    public final synchronized void a(java.lang.String r2, com.tkay.expressad.exoplayer.j.a.k r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.i     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L17
            com.tkay.expressad.exoplayer.j.a.h r0 = r1.f     // Catch: java.lang.Throwable -> L17
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L17
            com.tkay.expressad.exoplayer.j.a.h r2 = r1.f     // Catch: java.lang.Throwable -> L17
            r2.b()     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized boolean a(java.lang.String r4, long r5, long r7) {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.i     // Catch: java.lang.Throwable -> L21
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = r2
        La:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.exoplayer.j.a.h r0 = r3.f     // Catch: java.lang.Throwable -> L21
            com.tkay.expressad.exoplayer.j.a.g r4 = r0.b(r4)     // Catch: java.lang.Throwable -> L21
            if (r4 == 0) goto L1f
            long r4 = r4.a(r5, r7)     // Catch: java.lang.Throwable -> L21
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 < 0) goto L1f
            monitor-exit(r3)
            return r1
        L1f:
            monitor-exit(r3)
            return r2
        L21:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public final synchronized long b(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.expressad.exoplayer.j.a.i r3 = r2.c(r3)     // Catch: java.lang.Throwable -> Lb
            long r0 = com.tkay.expressad.exoplayer.j.a.j.a(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r2)
            return r0
        Lb:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized long b(java.lang.String r2, long r3, long r5) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.i     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L1c
            com.tkay.expressad.exoplayer.j.a.h r0 = r1.f     // Catch: java.lang.Throwable -> L1c
            com.tkay.expressad.exoplayer.j.a.g r2 = r0.b(r2)     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L19
            long r2 = r2.a(r3, r5)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r1)
            return r2
        L19:
            long r2 = -r5
            monitor-exit(r1)
            return r2
        L1c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.j.a.e b(java.lang.String r1, long r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.j.a.n r1 = r0.f(r1, r2)
            return r1
    }

    @Override
    public final synchronized java.util.Set<java.lang.String> b() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L18
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> L18
            com.tkay.expressad.exoplayer.j.a.h r1 = r2.f     // Catch: java.lang.Throwable -> L18
            java.util.Set r1 = r1.e()     // Catch: java.lang.Throwable -> L18
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void b(com.tkay.expressad.exoplayer.j.a.e r3) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L11
            r1 = 1
            if (r0 != 0) goto L8
            r0 = r1
            goto L9
        L8:
            r0 = 0
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L11
            r2.a(r3, r1)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r2)
            return
        L11:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void b(java.lang.String r2, com.tkay.expressad.exoplayer.j.a.a.b r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.i     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r0 = r1.g     // Catch: java.lang.Throwable -> L21
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L21
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L1f
            r0.remove(r3)     // Catch: java.lang.Throwable -> L21
            boolean r3 = r0.isEmpty()     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L1f
            java.util.HashMap<java.lang.String, java.util.ArrayList<com.tkay.expressad.exoplayer.j.a.a$b>> r3 = r1.g     // Catch: java.lang.Throwable -> L21
            r3.remove(r2)     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r1)
            return
        L21:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized long c() {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> Lf
            long r0 = r2.h     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)
            return r0
        Lf:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized com.tkay.expressad.exoplayer.j.a.i c(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.i     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L13
            com.tkay.expressad.exoplayer.j.a.h r0 = r1.f     // Catch: java.lang.Throwable -> L13
            com.tkay.expressad.exoplayer.j.a.i r2 = r0.e(r2)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)
            return r2
        L13:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final synchronized java.io.File c(java.lang.String r7, long r8) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.i     // Catch: java.lang.Throwable -> L3a
            if (r0 != 0) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L3a
            com.tkay.expressad.exoplayer.j.a.h r0 = r6.f     // Catch: java.lang.Throwable -> L3a
            com.tkay.expressad.exoplayer.j.a.g r7 = r0.b(r7)     // Catch: java.lang.Throwable -> L3a
            com.tkay.expressad.exoplayer.k.a.a(r7)     // Catch: java.lang.Throwable -> L3a
            boolean r0 = r7.b()     // Catch: java.lang.Throwable -> L3a
            com.tkay.expressad.exoplayer.k.a.b(r0)     // Catch: java.lang.Throwable -> L3a
            java.io.File r0 = r6.d     // Catch: java.lang.Throwable -> L3a
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L3a
            if (r0 != 0) goto L2b
            java.io.File r0 = r6.d     // Catch: java.lang.Throwable -> L3a
            r0.mkdirs()     // Catch: java.lang.Throwable -> L3a
            r6.f()     // Catch: java.lang.Throwable -> L3a
        L2b:
            java.io.File r0 = r6.d     // Catch: java.lang.Throwable -> L3a
            int r1 = r7.a     // Catch: java.lang.Throwable -> L3a
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3a
            r2 = r8
            java.io.File r7 = com.tkay.expressad.exoplayer.j.a.n.a(r0, r1, r2, r4)     // Catch: java.lang.Throwable -> L3a
            monitor-exit(r6)
            return r7
        L3a:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    @Override
    public final synchronized void d(java.lang.String r2, long r3) {
            r1 = this;
            monitor-enter(r1)
            com.tkay.expressad.exoplayer.j.a.k r0 = new com.tkay.expressad.exoplayer.j.a.k     // Catch: java.lang.Throwable -> Le
            r0.<init>()     // Catch: java.lang.Throwable -> Le
            com.tkay.expressad.exoplayer.j.a.j.a(r0, r3)     // Catch: java.lang.Throwable -> Le
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
