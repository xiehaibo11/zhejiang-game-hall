package com.ta.utdid2.b.a;

public class d {
    private static final java.lang.Object b = null;
    private java.io.File a;
    private final java.lang.Object a;
    private java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d.a> a;

    private static final class a implements com.ta.utdid2.b.a.b {
        private static final java.lang.Object c = null;
        private java.util.Map a;
        private java.util.WeakHashMap<com.ta.utdid2.b.a.b.b, java.lang.Object> a;
        private final int b;
        private final java.io.File b;
        private final java.io.File c;
        private boolean g;

        public final class a implements com.ta.utdid2.b.a.b.a {
            final com.ta.utdid2.b.a.d.a a;
            private final java.util.Map<java.lang.String, java.lang.Object> b;
            private boolean h;

            public a(com.ta.utdid2.b.a.d.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    java.util.HashMap r1 = new java.util.HashMap
                    r1.<init>()
                    r0.b = r1
                    r1 = 0
                    r0.h = r1
                    return
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> L8
                    r0.put(r2, r1)     // Catch: java.lang.Throwable -> L8
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
                    return r1
                L8:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2, float r3) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> Lc
                    java.lang.Float r3 = java.lang.Float.valueOf(r3)     // Catch: java.lang.Throwable -> Lc
                    r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    return r1
                Lc:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2, int r3) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> Lc
                    java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lc
                    r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    return r1
                Lc:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2, long r3) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> Lc
                    java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> Lc
                    r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    return r1
                Lc:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2, java.lang.String r3) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> L8
                    r0.put(r2, r3)     // Catch: java.lang.Throwable -> L8
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
                    return r1
                L8:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L8
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a a(java.lang.String r2, boolean r3) {
                    r1 = this;
                    monitor-enter(r1)
                    java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> Lc
                    java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> Lc
                    r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    return r1
                Lc:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> Lc
                    throw r2
            }

            @Override
            public com.ta.utdid2.b.a.b.a b() {
                    r1 = this;
                    monitor-enter(r1)
                    r0 = 1
                    r1.h = r0     // Catch: java.lang.Throwable -> L6
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L6
                    return r1
                L6:
                    r0 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L6
                    throw r0
            }

            @Override
            public boolean commit() {
                    r9 = this;
                    java.lang.Object r0 = com.ta.utdid2.b.a.d.a()
                    monitor-enter(r0)
                    com.ta.utdid2.b.a.d$a r1 = r9.a     // Catch: java.lang.Throwable -> Lbc
                    java.util.WeakHashMap r1 = com.ta.utdid2.b.a.d.a.a(r1)     // Catch: java.lang.Throwable -> Lbc
                    int r1 = r1.size()     // Catch: java.lang.Throwable -> Lbc
                    r2 = 0
                    r3 = 1
                    if (r1 <= 0) goto L15
                    r1 = 1
                    goto L16
                L15:
                    r1 = 0
                L16:
                    r4 = 0
                    if (r1 == 0) goto L2e
                    java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lbc
                    r4.<init>()     // Catch: java.lang.Throwable -> Lbc
                    java.util.HashSet r5 = new java.util.HashSet     // Catch: java.lang.Throwable -> Lbc
                    com.ta.utdid2.b.a.d$a r6 = r9.a     // Catch: java.lang.Throwable -> Lbc
                    java.util.WeakHashMap r6 = com.ta.utdid2.b.a.d.a.a(r6)     // Catch: java.lang.Throwable -> Lbc
                    java.util.Set r6 = r6.keySet()     // Catch: java.lang.Throwable -> Lbc
                    r5.<init>(r6)     // Catch: java.lang.Throwable -> Lbc
                    goto L2f
                L2e:
                    r5 = r4
                L2f:
                    monitor-enter(r9)     // Catch: java.lang.Throwable -> Lbc
                    boolean r6 = r9.h     // Catch: java.lang.Throwable -> Lb9
                    if (r6 == 0) goto L3f
                    com.ta.utdid2.b.a.d$a r6 = r9.a     // Catch: java.lang.Throwable -> Lb9
                    java.util.Map r6 = com.ta.utdid2.b.a.d.a.a(r6)     // Catch: java.lang.Throwable -> Lb9
                    r6.clear()     // Catch: java.lang.Throwable -> Lb9
                    r9.h = r2     // Catch: java.lang.Throwable -> Lb9
                L3f:
                    java.util.Map<java.lang.String, java.lang.Object> r2 = r9.b     // Catch: java.lang.Throwable -> Lb9
                    java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> Lb9
                    java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Lb9
                L49:
                    boolean r6 = r2.hasNext()     // Catch: java.lang.Throwable -> Lb9
                    if (r6 == 0) goto L7a
                    java.lang.Object r6 = r2.next()     // Catch: java.lang.Throwable -> Lb9
                    java.util.Map$Entry r6 = (java.util.Map.Entry) r6     // Catch: java.lang.Throwable -> Lb9
                    java.lang.Object r7 = r6.getKey()     // Catch: java.lang.Throwable -> Lb9
                    java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> Lb9
                    java.lang.Object r6 = r6.getValue()     // Catch: java.lang.Throwable -> Lb9
                    if (r6 != r9) goto L6b
                    com.ta.utdid2.b.a.d$a r6 = r9.a     // Catch: java.lang.Throwable -> Lb9
                    java.util.Map r6 = com.ta.utdid2.b.a.d.a.a(r6)     // Catch: java.lang.Throwable -> Lb9
                    r6.remove(r7)     // Catch: java.lang.Throwable -> Lb9
                    goto L74
                L6b:
                    com.ta.utdid2.b.a.d$a r8 = r9.a     // Catch: java.lang.Throwable -> Lb9
                    java.util.Map r8 = com.ta.utdid2.b.a.d.a.a(r8)     // Catch: java.lang.Throwable -> Lb9
                    r8.put(r7, r6)     // Catch: java.lang.Throwable -> Lb9
                L74:
                    if (r1 == 0) goto L49
                    r4.add(r7)     // Catch: java.lang.Throwable -> Lb9
                    goto L49
                L7a:
                    java.util.Map<java.lang.String, java.lang.Object> r2 = r9.b     // Catch: java.lang.Throwable -> Lb9
                    r2.clear()     // Catch: java.lang.Throwable -> Lb9
                    monitor-exit(r9)     // Catch: java.lang.Throwable -> Lb9
                    com.ta.utdid2.b.a.d$a r2 = r9.a     // Catch: java.lang.Throwable -> Lbc
                    boolean r2 = com.ta.utdid2.b.a.d.a.a(r2)     // Catch: java.lang.Throwable -> Lbc
                    if (r2 == 0) goto L8d
                    com.ta.utdid2.b.a.d$a r6 = r9.a     // Catch: java.lang.Throwable -> Lbc
                    r6.a(r3)     // Catch: java.lang.Throwable -> Lbc
                L8d:
                    monitor-exit(r0)     // Catch: java.lang.Throwable -> Lbc
                    if (r1 == 0) goto Lb8
                    int r0 = r4.size()
                    int r0 = r0 - r3
                L95:
                    if (r0 < 0) goto Lb8
                    java.lang.Object r1 = r4.get(r0)
                    java.lang.String r1 = (java.lang.String) r1
                    java.util.Iterator r3 = r5.iterator()
                La1:
                    boolean r6 = r3.hasNext()
                    if (r6 == 0) goto Lb5
                    java.lang.Object r6 = r3.next()
                    com.ta.utdid2.b.a.b$b r6 = (com.ta.utdid2.b.a.b.b) r6
                    if (r6 == 0) goto La1
                    com.ta.utdid2.b.a.d$a r7 = r9.a
                    r6.a(r7, r1)
                    goto La1
                Lb5:
                    int r0 = r0 + (-1)
                    goto L95
                Lb8:
                    return r2
                Lb9:
                    r1 = move-exception
                    monitor-exit(r9)     // Catch: java.lang.Throwable -> Lb9
                    throw r1     // Catch: java.lang.Throwable -> Lbc
                Lbc:
                    r1 = move-exception
                    monitor-exit(r0)     // Catch: java.lang.Throwable -> Lbc
                    goto Lc0
                Lbf:
                    throw r1
                Lc0:
                    goto Lbf
            }
        }

        static {
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                com.ta.utdid2.b.a.d.a.c = r0
                return
        }

        a(java.io.File r2, int r3, java.util.Map r4) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.g = r0
                r1.b = r2
                java.io.File r2 = com.ta.utdid2.b.a.d.b(r2)
                r1.c = r2
                r1.b = r3
                if (r4 == 0) goto L13
                goto L18
            L13:
                java.util.HashMap r4 = new java.util.HashMap
                r4.<init>()
            L18:
                r1.a = r4
                java.util.WeakHashMap r2 = new java.util.WeakHashMap
                r2.<init>()
                r1.a = r2
                return
        }

        private java.io.FileOutputStream a(java.io.File r3) {
                r2 = this;
                r0 = 0
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L7
                r1.<init>(r3)     // Catch: java.io.FileNotFoundException -> L7
                goto L1a
            L7:
                java.io.File r1 = r3.getParentFile()
                boolean r1 = r1.mkdir()
                if (r1 != 0) goto L13
                return r0
            L13:
                java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L19
                r1.<init>(r3)     // Catch: java.io.FileNotFoundException -> L19
                goto L1a
            L19:
                r1 = r0
            L1a:
                return r1
        }

        static java.util.Map a(com.ta.utdid2.b.a.d.a r0) {
                java.util.Map r0 = r0.a
                return r0
        }

        static java.util.WeakHashMap a(com.ta.utdid2.b.a.d.a r0) {
                java.util.WeakHashMap<com.ta.utdid2.b.a.b$b, java.lang.Object> r0 = r0.a
                return r0
        }

        static boolean a(com.ta.utdid2.b.a.d.a r0) {
                boolean r0 = r0.d()
                return r0
        }

        private boolean d() {
                r3 = this;
                java.io.File r0 = r3.b
                boolean r0 = r0.exists()
                r1 = 0
                if (r0 == 0) goto L21
                java.io.File r0 = r3.c
                boolean r0 = r0.exists()
                if (r0 != 0) goto L1c
                java.io.File r0 = r3.b
                java.io.File r2 = r3.c
                boolean r0 = r0.renameTo(r2)
                if (r0 != 0) goto L21
                return r1
            L1c:
                java.io.File r0 = r3.b
                r0.delete()
            L21:
                java.io.File r0 = r3.b     // Catch: java.lang.Exception -> L39
                java.io.FileOutputStream r0 = r3.a(r0)     // Catch: java.lang.Exception -> L39
                if (r0 != 0) goto L2a
                return r1
            L2a:
                java.util.Map r2 = r3.a     // Catch: java.lang.Exception -> L39
                com.ta.utdid2.b.a.e.a(r2, r0)     // Catch: java.lang.Exception -> L39
                r0.close()     // Catch: java.lang.Exception -> L39
                java.io.File r0 = r3.c     // Catch: java.lang.Exception -> L39
                r0.delete()     // Catch: java.lang.Exception -> L39
                r0 = 1
                return r0
            L39:
                java.io.File r0 = r3.b
                boolean r0 = r0.exists()
                if (r0 == 0) goto L47
                java.io.File r0 = r3.b
                r0.delete()
            L47:
                return r1
        }

        @Override
        public com.ta.utdid2.b.a.b.a a() {
                r1 = this;
                com.ta.utdid2.b.a.d$a$a r0 = new com.ta.utdid2.b.a.d$a$a
                r0.<init>(r1)
                return r0
        }

        public void a(java.util.Map r1) {
                r0 = this;
                if (r1 == 0) goto La
                monitor-enter(r0)
                r0.a = r1     // Catch: java.lang.Throwable -> L7
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
                goto La
            L7:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
                throw r1
            La:
                return
        }

        public void a(boolean r1) {
                r0 = this;
                monitor-enter(r0)
                r0.g = r1     // Catch: java.lang.Throwable -> L5
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L5
                return
            L5:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L5
                throw r1
        }

        @Override
        public boolean a() {
                r2 = this;
                java.io.File r0 = r2.b
                if (r0 == 0) goto L15
                java.io.File r1 = new java.io.File
                java.lang.String r0 = r0.getAbsolutePath()
                r1.<init>(r0)
                boolean r0 = r1.exists()
                if (r0 == 0) goto L15
                r0 = 1
                return r0
            L15:
                r0 = 0
                return r0
        }

        public boolean c() {
                r1 = this;
                monitor-enter(r1)
                boolean r0 = r1.g     // Catch: java.lang.Throwable -> L5
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L5
                return r0
            L5:
                r0 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L5
                throw r0
        }

        @Override
        public java.util.Map<java.lang.String, ?> getAll() {
                r2 = this;
                monitor-enter(r2)
                java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> La
                java.util.Map r1 = r2.a     // Catch: java.lang.Throwable -> La
                r0.<init>(r1)     // Catch: java.lang.Throwable -> La
                monitor-exit(r2)     // Catch: java.lang.Throwable -> La
                return r0
            La:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> La
                throw r0
        }

        @Override
        public long getLong(java.lang.String r2, long r3) {
                r1 = this;
                monitor-enter(r1)
                java.util.Map r0 = r1.a     // Catch: java.lang.Throwable -> L11
                java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L11
                java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L11
                if (r2 == 0) goto Lf
                long r3 = r2.longValue()     // Catch: java.lang.Throwable -> L11
            Lf:
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L11
                return r3
            L11:
                r2 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> L11
                throw r2
        }

        @Override
        public java.lang.String getString(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                monitor-enter(r1)
                java.util.Map r0 = r1.a     // Catch: java.lang.Throwable -> Lf
                java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lf
                java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lf
                if (r2 == 0) goto Lc
                goto Ld
            Lc:
                r2 = r3
            Ld:
                monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf
                return r2
            Lf:
                r2 = move-exception
                monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf
                throw r2
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.ta.utdid2.b.a.d.b = r0
            return
    }

    public d(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            if (r2 == 0) goto L21
            int r0 = r2.length()
            if (r0 <= 0) goto L21
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.a = r0
            return
        L21:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "Directory can not be empty"
            r2.<init>(r0)
            throw r2
    }

    private java.io.File a() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            java.io.File r1 = r2.a     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    private static java.io.File a(java.io.File r2) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getPath()
            r1.append(r2)
            java.lang.String r2 = ".bak"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            return r0
    }

    private java.io.File a(java.io.File r3, java.lang.String r4) {
            r2 = this;
            char r0 = java.io.File.separatorChar
            int r0 = r4.indexOf(r0)
            if (r0 >= 0) goto Le
            java.io.File r0 = new java.io.File
            r0.<init>(r3, r4)
            return r0
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "File "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " contains a path separator"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    static java.lang.Object a() {
            java.lang.Object r0 = com.ta.utdid2.b.a.d.b
            return r0
    }

    static java.io.File b(java.io.File r0) {
            java.io.File r0 = a(r0)
            return r0
    }

    private java.io.File b(java.lang.String r3) {
            r2 = this;
            java.io.File r0 = r2.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ".xml"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.io.File r3 = r2.a(r0, r3)
            return r3
    }

    public com.ta.utdid2.b.a.b a(java.lang.String r5, int r6) {
            r4 = this;
            java.io.File r5 = r4.b(r5)
            java.lang.Object r0 = com.ta.utdid2.b.a.d.b
            monitor-enter(r0)
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r1 = r4.a     // Catch: java.lang.Throwable -> La6
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> La6
            com.ta.utdid2.b.a.d$a r1 = (com.ta.utdid2.b.a.d.a) r1     // Catch: java.lang.Throwable -> La6
            if (r1 == 0) goto L19
            boolean r2 = r1.c()     // Catch: java.lang.Throwable -> La6
            if (r2 != 0) goto L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            return r1
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            java.io.File r0 = a(r5)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L2a
            r5.delete()
            r0.renameTo(r5)
        L2a:
            boolean r0 = r5.exists()
            r2 = 0
            if (r0 == 0) goto L83
            boolean r0 = r5.canRead()
            if (r0 == 0) goto L83
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e org.xmlpull.v1.XmlPullParserException -> L52
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e org.xmlpull.v1.XmlPullParserException -> L52
            java.util.HashMap r2 = com.ta.utdid2.b.a.e.a(r0)     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L4a org.xmlpull.v1.XmlPullParserException -> L53
            r0.close()     // Catch: java.lang.Throwable -> L47 java.lang.Exception -> L4a org.xmlpull.v1.XmlPullParserException -> L53
        L43:
            r0.close()     // Catch: java.lang.Throwable -> L83
            goto L83
        L47:
            r5 = move-exception
            r2 = r0
            goto L74
        L4a:
            goto L4f
        L4c:
            r5 = move-exception
            goto L74
        L4e:
            r0 = r2
        L4f:
            if (r0 == 0) goto L83
            goto L43
        L52:
            r0 = r2
        L53:
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L6c java.lang.Exception -> L7a
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L6c java.lang.Exception -> L7a
            int r0 = r3.available()     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
            r3.read(r0)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6a
        L61:
            r3.close()     // Catch: java.lang.Throwable -> L65
            goto L7e
        L65:
            goto L7e
        L67:
            r5 = move-exception
            r2 = r3
            goto L6e
        L6a:
            goto L7b
        L6c:
            r5 = move-exception
            r2 = r0
        L6e:
            if (r2 == 0) goto L73
            r2.close()     // Catch: java.lang.Throwable -> L73
        L73:
            throw r5     // Catch: java.lang.Throwable -> L4c
        L74:
            if (r2 == 0) goto L79
            r2.close()     // Catch: java.lang.Throwable -> L79
        L79:
            throw r5
        L7a:
            r3 = r0
        L7b:
            if (r3 == 0) goto L7e
            goto L61
        L7e:
            if (r3 == 0) goto L83
            r3.close()     // Catch: java.lang.Throwable -> L83
        L83:
            java.lang.Object r3 = com.ta.utdid2.b.a.d.b
            monitor-enter(r3)
            if (r1 == 0) goto L8c
            r1.a(r2)     // Catch: java.lang.Throwable -> La3
            goto La1
        L8c:
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r0 = r4.a     // Catch: java.lang.Throwable -> La3
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> La3
            r1 = r0
            com.ta.utdid2.b.a.d$a r1 = (com.ta.utdid2.b.a.d.a) r1     // Catch: java.lang.Throwable -> La3
            if (r1 != 0) goto La1
            com.ta.utdid2.b.a.d$a r1 = new com.ta.utdid2.b.a.d$a     // Catch: java.lang.Throwable -> La3
            r1.<init>(r5, r6, r2)     // Catch: java.lang.Throwable -> La3
            java.util.HashMap<java.io.File, com.ta.utdid2.b.a.d$a> r6 = r4.a     // Catch: java.lang.Throwable -> La3
            r6.put(r5, r1)     // Catch: java.lang.Throwable -> La3
        La1:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> La3
            return r1
        La3:
            r5 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> La3
            throw r5
        La6:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La6
            goto Laa
        La9:
            throw r5
        Laa:
            goto La9
    }
}
