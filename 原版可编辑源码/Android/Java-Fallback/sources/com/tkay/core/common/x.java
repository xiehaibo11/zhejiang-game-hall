package com.tkay.core.common;

public class x {
    private static volatile com.tkay.core.common.x a;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x.a> b;
    private final java.lang.String c;

    class a {
        java.lang.String a;
        java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x.a.a> b;
        final com.tkay.core.common.x c;

        class a {
            com.tkay.core.c.d a;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> b;
            boolean c;
            final com.tkay.core.common.x.a d;

            a(com.tkay.core.common.x.a r1) {
                    r0 = this;
                    r0.d = r1
                    r0.<init>()
                    return
            }

            private java.util.List<com.tkay.core.common.f.aj> a() {
                    r1 = this;
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r1.b
                    return r0
            }

            private synchronized void a(com.tkay.core.common.f.aj r3) {
                    r2 = this;
                    monitor-enter(r2)
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r2.b     // Catch: java.lang.Throwable -> L9
                    r1 = 1
                    com.tkay.core.common.l.g.a(r0, r3, r1)     // Catch: java.lang.Throwable -> L9
                    monitor-exit(r2)
                    return
                L9:
                    r3 = move-exception
                    monitor-exit(r2)
                    throw r3
            }

            static void a(com.tkay.core.common.x.a.a r0) {
                    r0.b()
                    return
            }

            static void a(com.tkay.core.common.x.a.a r0, com.tkay.core.common.f.aj r1) {
                    r0.a(r1)
                    return
            }

            static void a(com.tkay.core.common.x.a.a r0, java.util.List r1) {
                    r0.a(r1)
                    return
            }

            private synchronized void a(java.util.List<com.tkay.core.common.f.aj> r2) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r1.b     // Catch: java.lang.Throwable -> L14
                    if (r0 == 0) goto L12
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r1.b     // Catch: java.lang.Throwable -> L14
                    int r0 = r0.size()     // Catch: java.lang.Throwable -> L14
                    if (r0 <= 0) goto L12
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r1.b     // Catch: java.lang.Throwable -> L14
                    r0.removeAll(r2)     // Catch: java.lang.Throwable -> L14
                L12:
                    monitor-exit(r1)
                    return
                L14:
                    r2 = move-exception
                    monitor-exit(r1)
                    throw r2
            }

            private static java.util.List b(com.tkay.core.common.x.a.a r0) {
                    java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r0.b
                    return r0
            }

            private synchronized void b() {
                    r1 = this;
                    monitor-enter(r1)
                    boolean r0 = r1.c     // Catch: java.lang.Throwable -> Lc
                    if (r0 == 0) goto L7
                    monitor-exit(r1)
                    return
                L7:
                    r0 = 1
                    r1.c = r0     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r1)
                    return
                Lc:
                    r0 = move-exception
                    monitor-exit(r1)
                    throw r0
            }

            private boolean c() {
                    r1 = this;
                    boolean r0 = r1.c
                    return r0
            }

            private static boolean c(com.tkay.core.common.x.a.a r0) {
                    boolean r0 = r0.c
                    return r0
            }
        }

        a(com.tkay.core.common.x r1) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>()
                r0.b = r1
                return
        }

        private java.util.List<com.tkay.core.common.f.aj> a(java.lang.String r2) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r1.b
                java.lang.Object r2 = r0.get(r2)
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2
                if (r2 == 0) goto Ld
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r2 = r2.b
                return r2
            Ld:
                r2 = 0
                return r2
        }

        static void a(com.tkay.core.common.x.a r0, java.lang.String r1) {
                r0.d(r1)
                return
        }

        private static void a(com.tkay.core.common.x.a r1, java.lang.String r2, com.tkay.core.c.d r3, java.util.List r4) {
                com.tkay.core.common.x$a$a r0 = new com.tkay.core.common.x$a$a
                r0.<init>(r1)
                r0.a = r3
                java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
                r3.<init>()
                r3.addAll(r4)
                r0.b = r3
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r1 = r1.b
                r1.put(r2, r0)
                return
        }

        private static void a(com.tkay.core.common.x.a r0, java.lang.String r1, com.tkay.core.common.f.aj r2) {
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r0.b
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.x$a$a r0 = (com.tkay.core.common.x.a.a) r0
                if (r0 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r0, r2)
            Ld:
                return
        }

        static void a(com.tkay.core.common.x.a r0, java.lang.String r1, java.util.List r2) {
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r0.b
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.x$a$a r0 = (com.tkay.core.common.x.a.a) r0
                if (r0 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r0, r2)
            Ld:
                return
        }

        private void a(java.lang.String r2, com.tkay.core.c.d r3, java.util.List<com.tkay.core.common.f.aj> r4) {
                r1 = this;
                com.tkay.core.common.x$a$a r0 = new com.tkay.core.common.x$a$a
                r0.<init>(r1)
                r0.a = r3
                java.util.concurrent.CopyOnWriteArrayList r3 = new java.util.concurrent.CopyOnWriteArrayList
                r3.<init>()
                r3.addAll(r4)
                r0.b = r3
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r3 = r1.b
                r3.put(r2, r0)
                return
        }

        private void a(java.lang.String r2, com.tkay.core.common.f.aj r3) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r1.b
                java.lang.Object r2 = r0.get(r2)
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2
                if (r2 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r2, r3)
            Ld:
                return
        }

        private void a(java.lang.String r2, java.util.List<com.tkay.core.common.f.aj> r3) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r1.b
                java.lang.Object r2 = r0.get(r2)
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2
                if (r2 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r2, r3)
            Ld:
                return
        }

        static void b(com.tkay.core.common.x.a r0, java.lang.String r1) {
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r0.b
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.x$a$a r0 = (com.tkay.core.common.x.a.a) r0
                if (r0 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r0)
            Ld:
                return
        }

        private boolean b(java.lang.String r2) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r1.b
                java.lang.Object r2 = r0.get(r2)
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2
                if (r2 == 0) goto Ld
                boolean r2 = r2.c
                return r2
            Ld:
                r2 = 0
                return r2
        }

        static java.util.List c(com.tkay.core.common.x.a r0, java.lang.String r1) {
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r0.b
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.x$a$a r0 = (com.tkay.core.common.x.a.a) r0
                if (r0 == 0) goto Ld
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.aj> r0 = r0.b
                return r0
            Ld:
                r0 = 0
                return r0
        }

        private void c(java.lang.String r2) {
                r1 = this;
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r1.b
                java.lang.Object r2 = r0.get(r2)
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2
                if (r2 == 0) goto Ld
                com.tkay.core.common.x.a.a.a(r2)
            Ld:
                return
        }

        private synchronized void d(java.lang.String r4) {
                r3 = this;
                monitor-enter(r3)
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r3.b     // Catch: java.lang.Throwable -> L39
                java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L39
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L39
            Lb:
                boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L39
                if (r1 == 0) goto L37
                java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L39
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L39
                java.lang.Object r1 = r1.getKey()     // Catch: java.lang.Throwable -> L39
                if (r1 == 0) goto Lb
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L39
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r2 = r3.b     // Catch: java.lang.Throwable -> L39
                java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L39
                com.tkay.core.common.x$a$a r2 = (com.tkay.core.common.x.a.a) r2     // Catch: java.lang.Throwable -> L39
                boolean r2 = r2.c     // Catch: java.lang.Throwable -> L39
                if (r2 == 0) goto Lb
                boolean r1 = android.text.TextUtils.equals(r4, r1)     // Catch: java.lang.Throwable -> L39
                if (r1 != 0) goto Lb
                r0.remove()     // Catch: java.lang.Throwable -> L39
                goto Lb
            L37:
                monitor-exit(r3)
                return
            L39:
                r4 = move-exception
                monitor-exit(r3)
                throw r4
        }

        private static boolean d(com.tkay.core.common.x.a r0, java.lang.String r1) {
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r0 = r0.b
                java.lang.Object r0 = r0.get(r1)
                com.tkay.core.common.x$a$a r0 = (com.tkay.core.common.x.a.a) r0
                if (r0 == 0) goto Ld
                boolean r0 = r0.c
                return r0
            Ld:
                r0 = 0
                return r0
        }
    }

    private x() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Waterfall_Final"
            r1.c = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public static com.tkay.core.common.x a() {
            com.tkay.core.common.x r0 = com.tkay.core.common.x.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.x> r0 = com.tkay.core.common.x.class
            monitor-enter(r0)
            com.tkay.core.common.x r1 = com.tkay.core.common.x.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.x r1 = new com.tkay.core.common.x     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.x.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.x r0 = com.tkay.core.common.x.a
            return r0
    }

    public final java.util.List<com.tkay.core.common.f.aj> a(java.lang.String r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r3.b
            java.lang.Object r0 = r0.get(r4)
            com.tkay.core.common.x$a r0 = (com.tkay.core.common.x.a) r0
            r1 = 0
            if (r0 == 0) goto L12
            java.lang.String r2 = r0.a
            java.util.List r0 = com.tkay.core.common.x.a.c(r0, r2)
            goto L13
        L12:
            r0 = r1
        L13:
            if (r0 != 0) goto L2d
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r4 = r0.a(r4)
            if (r4 == 0) goto L2c
            java.util.List r4 = r4.G()
            return r4
        L2c:
            return r1
        L2d:
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r4.addAll(r0)
            return r4
    }

    public final synchronized void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r1.b     // Catch: java.lang.Throwable -> L12
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L12
            com.tkay.core.common.x$a r2 = (com.tkay.core.common.x.a) r2     // Catch: java.lang.Throwable -> L12
            if (r2 != 0) goto Ld
            monitor-exit(r1)
            return
        Ld:
            com.tkay.core.common.x.a.b(r2, r3)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r1)
            return
        L12:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized void a(java.lang.String r4, java.lang.String r5, com.tkay.core.c.d r6, java.util.List<com.tkay.core.common.f.aj> r7) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r3.b     // Catch: java.lang.Throwable -> L45
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> L45
            com.tkay.core.common.x$a r0 = (com.tkay.core.common.x.a) r0     // Catch: java.lang.Throwable -> L45
            if (r0 != 0) goto L10
            com.tkay.core.common.x$a r0 = new com.tkay.core.common.x$a     // Catch: java.lang.Throwable -> L45
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L45
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r1 = r0.b     // Catch: java.lang.Throwable -> L45
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L45
            com.tkay.core.common.x$a$a r1 = (com.tkay.core.common.x.a.a) r1     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L1d
            boolean r1 = r1.c     // Catch: java.lang.Throwable -> L45
            goto L1e
        L1d:
            r1 = 0
        L1e:
            com.tkay.core.common.x$a$a r2 = new com.tkay.core.common.x$a$a     // Catch: java.lang.Throwable -> L45
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L45
            r2.a = r6     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.CopyOnWriteArrayList r6 = new java.util.concurrent.CopyOnWriteArrayList     // Catch: java.lang.Throwable -> L45
            r6.<init>()     // Catch: java.lang.Throwable -> L45
            r6.addAll(r7)     // Catch: java.lang.Throwable -> L45
            r2.b = r6     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r6 = r0.b     // Catch: java.lang.Throwable -> L45
            r6.put(r5, r2)     // Catch: java.lang.Throwable -> L45
            r0.a = r5     // Catch: java.lang.Throwable -> L45
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r6 = r3.b     // Catch: java.lang.Throwable -> L45
            r6.put(r4, r0)     // Catch: java.lang.Throwable -> L45
            com.tkay.core.common.x.a.a(r0, r5)     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L43
            com.tkay.core.common.x.a.b(r0, r5)     // Catch: java.lang.Throwable -> L45
        L43:
            monitor-exit(r3)
            return
        L45:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, com.tkay.core.common.f.aj r5) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r2.b     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L1b
            com.tkay.core.common.x$a r3 = (com.tkay.core.common.x.a) r3     // Catch: java.lang.Throwable -> L1b
            if (r3 != 0) goto Ld
            monitor-exit(r2)
            return
        Ld:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1b
            r1 = 2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1b
            r0.add(r5)     // Catch: java.lang.Throwable -> L1b
            com.tkay.core.common.x.a.a(r3, r4, r0)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r2)
            return
        L1b:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4, java.util.List<com.tkay.core.common.f.aj> r5) {
            r2 = this;
            monitor-enter(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r2.b     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.x$a r3 = (com.tkay.core.common.x.a) r3     // Catch: java.lang.Throwable -> L2d
            if (r3 != 0) goto Ld
            monitor-exit(r2)
            return
        Ld:
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L2d
        L11:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0     // Catch: java.lang.Throwable -> L2d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a$a> r1 = r3.b     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L2d
            com.tkay.core.common.x$a$a r1 = (com.tkay.core.common.x.a.a) r1     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L11
            com.tkay.core.common.x.a.a.a(r1, r0)     // Catch: java.lang.Throwable -> L2d
            goto L11
        L2b:
            monitor-exit(r2)
            return
        L2d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final java.lang.String b(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.x$a r2 = (com.tkay.core.common.x.a) r2
            if (r2 == 0) goto Ld
            java.lang.String r2 = r2.a
            return r2
        Ld:
            java.lang.String r2 = ""
            return r2
    }

    public final java.util.List<com.tkay.core.common.f.aj> b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r1.b
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.x$a r2 = (com.tkay.core.common.x.a) r2
            if (r2 == 0) goto Lf
            java.util.List r2 = com.tkay.core.common.x.a.c(r2, r3)
            return r2
        Lf:
            r2 = 0
            return r2
    }

    public final synchronized void b(java.lang.String r2, java.lang.String r3, java.util.List<com.tkay.core.common.f.aj> r4) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.x$a> r0 = r1.b     // Catch: java.lang.Throwable -> L15
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L15
            com.tkay.core.common.x$a r0 = (com.tkay.core.common.x.a) r0     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto Ld
            monitor-exit(r1)
            return
        Ld:
            com.tkay.core.common.x.a.a(r0, r3, r4)     // Catch: java.lang.Throwable -> L15
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
