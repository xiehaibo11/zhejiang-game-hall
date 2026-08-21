package com.huawei.updatesdk.b.f;

public final class c {
    private static com.huawei.updatesdk.b.f.c a;
    private static com.huawei.updatesdk.b.f.a b;

    static class a implements com.huawei.updatesdk.b.f.a {
        private final java.util.List<com.huawei.updatesdk.b.f.b> a;

        a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
                return
        }

        @Override
        public void a(int r4, com.huawei.updatesdk.a.b.b.b r5) {
                r3 = this;
                java.util.List<com.huawei.updatesdk.b.f.b> r0 = r3.a
                monitor-enter(r0)
                java.util.List<com.huawei.updatesdk.b.f.b> r1 = r3.a     // Catch: java.lang.Throwable -> L1b
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1b
            L9:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1b
                if (r2 == 0) goto L19
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1b
                com.huawei.updatesdk.b.f.b r2 = (com.huawei.updatesdk.b.f.b) r2     // Catch: java.lang.Throwable -> L1b
                r2.a(r4, r5)     // Catch: java.lang.Throwable -> L1b
                goto L9
            L19:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
                return
            L1b:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
                throw r4
        }

        @Override
        public void a(com.huawei.updatesdk.b.f.b r3) {
                r2 = this;
                java.util.List<com.huawei.updatesdk.b.f.b> r0 = r2.a
                monitor-enter(r0)
                if (r3 != 0) goto L7
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return
            L7:
                java.util.List<com.huawei.updatesdk.b.f.b> r1 = r2.a     // Catch: java.lang.Throwable -> L29
                boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L29
                if (r1 != 0) goto L27
                java.util.List<com.huawei.updatesdk.b.f.b> r1 = r2.a     // Catch: java.lang.IllegalArgumentException -> L15 java.lang.ClassCastException -> L1d java.lang.UnsupportedOperationException -> L22 java.lang.Throwable -> L29
                r1.add(r3)     // Catch: java.lang.IllegalArgumentException -> L15 java.lang.ClassCastException -> L1d java.lang.UnsupportedOperationException -> L22 java.lang.Throwable -> L29
                goto L27
            L15:
                java.lang.String r3 = "InstallObserverManager"
                java.lang.String r1 = "registerObserver IllegalArgumentException"
            L19:
                com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r1)     // Catch: java.lang.Throwable -> L29
                goto L27
            L1d:
                java.lang.String r3 = "InstallObserverManager"
                java.lang.String r1 = "registerObserver ClassCastException"
                goto L19
            L22:
                java.lang.String r3 = "InstallObserverManager"
                java.lang.String r1 = "registerObserver UnsupportedOperationException"
                goto L19
            L27:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return
            L29:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                throw r3
        }

        @Override
        public void b(com.huawei.updatesdk.b.f.b r3) {
                r2 = this;
                java.util.List<com.huawei.updatesdk.b.f.b> r0 = r2.a
                monitor-enter(r0)
                java.util.List<com.huawei.updatesdk.b.f.b> r1 = r2.a     // Catch: java.lang.Throwable -> L9 java.lang.UnsupportedOperationException -> Lb
                r1.remove(r3)     // Catch: java.lang.Throwable -> L9 java.lang.UnsupportedOperationException -> Lb
                goto L12
            L9:
                r3 = move-exception
                goto L14
            Lb:
                java.lang.String r3 = "InstallObserverManager"
                java.lang.String r1 = "unRegisterObserver UnsupportedOperationException"
                com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r1)     // Catch: java.lang.Throwable -> L9
            L12:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
                return
            L14:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
                throw r3
        }
    }

    static {
            com.huawei.updatesdk.b.f.c r0 = new com.huawei.updatesdk.b.f.c
            r0.<init>()
            com.huawei.updatesdk.b.f.c.a = r0
            com.huawei.updatesdk.b.f.c$a r0 = new com.huawei.updatesdk.b.f.c$a
            r0.<init>()
            com.huawei.updatesdk.b.f.c.b = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.updatesdk.b.f.a a() {
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.b
            return r0
    }

    public static com.huawei.updatesdk.b.f.c b() {
            com.huawei.updatesdk.b.f.c r0 = com.huawei.updatesdk.b.f.c.a
            return r0
    }

    public void a(com.huawei.updatesdk.a.b.b.b r3) {
            r2 = this;
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.b
            r1 = 1
            r0.a(r1, r3)
            return
    }

    public void b(com.huawei.updatesdk.a.b.b.b r3) {
            r2 = this;
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.b
            r1 = 0
            r0.a(r1, r3)
            return
    }

    public void c(com.huawei.updatesdk.a.b.b.b r3) {
            r2 = this;
            com.huawei.updatesdk.b.f.a r0 = com.huawei.updatesdk.b.f.c.b
            r1 = 2
            r0.a(r1, r3)
            return
    }
}
