package com.huawei.hms.adapter.sysobs;

public final class SystemManager {
    public static com.huawei.hms.adapter.sysobs.SystemManager a;
    public static final java.lang.Object b = null;
    public static com.huawei.hms.adapter.sysobs.SystemNotifier c;

    public static class a implements com.huawei.hms.adapter.sysobs.SystemNotifier {
        public final java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> a;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
                return
        }

        @Override
        public void notifyNoticeObservers(int r4) {
                r3 = this;
                java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.a()
                monitor-enter(r0)
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r1 = r3.a     // Catch: java.lang.Throwable -> L23
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L23
            Lb:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto L21
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L23
                com.huawei.hms.adapter.sysobs.SystemObserver r2 = (com.huawei.hms.adapter.sysobs.SystemObserver) r2     // Catch: java.lang.Throwable -> L23
                boolean r2 = r2.onNoticeResult(r4)     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto Lb
                r1.remove()     // Catch: java.lang.Throwable -> L23
                goto Lb
            L21:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                return
            L23:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                throw r4
        }

        @Override
        public void notifyObservers(int r4) {
                r3 = this;
                java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.a()
                monitor-enter(r0)
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r1 = r3.a     // Catch: java.lang.Throwable -> L23
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L23
            Lb:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto L21
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L23
                com.huawei.hms.adapter.sysobs.SystemObserver r2 = (com.huawei.hms.adapter.sysobs.SystemObserver) r2     // Catch: java.lang.Throwable -> L23
                boolean r2 = r2.onUpdateResult(r4)     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto Lb
                r1.remove()     // Catch: java.lang.Throwable -> L23
                goto Lb
            L21:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                return
            L23:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                throw r4
        }

        @Override
        public void notifyObservers(android.content.Intent r4, java.lang.String r5) {
                r3 = this;
                java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.a()
                monitor-enter(r0)
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r1 = r3.a     // Catch: java.lang.Throwable -> L23
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L23
            Lb:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto L21
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L23
                com.huawei.hms.adapter.sysobs.SystemObserver r2 = (com.huawei.hms.adapter.sysobs.SystemObserver) r2     // Catch: java.lang.Throwable -> L23
                boolean r2 = r2.onSolutionResult(r4, r5)     // Catch: java.lang.Throwable -> L23
                if (r2 == 0) goto Lb
                r1.remove()     // Catch: java.lang.Throwable -> L23
                goto Lb
            L21:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                return
            L23:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
                throw r4
        }

        @Override
        public void registerObserver(com.huawei.hms.adapter.sysobs.SystemObserver r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r0 = r2.a
                boolean r0 = r0.contains(r3)
                if (r0 != 0) goto L1a
                java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.a()
                monitor-enter(r0)
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r1 = r2.a     // Catch: java.lang.Throwable -> L17
                r1.add(r3)     // Catch: java.lang.Throwable -> L17
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
                goto L1a
            L17:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
                throw r3
            L1a:
                return
        }

        @Override
        public void unRegisterObserver(com.huawei.hms.adapter.sysobs.SystemObserver r3) {
                r2 = this;
                java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.a()
                monitor-enter(r0)
                java.util.List<com.huawei.hms.adapter.sysobs.SystemObserver> r1 = r2.a     // Catch: java.lang.Throwable -> Lc
                r1.remove(r3)     // Catch: java.lang.Throwable -> Lc
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                return
            Lc:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                throw r3
        }
    }

    static {
            com.huawei.hms.adapter.sysobs.SystemManager r0 = new com.huawei.hms.adapter.sysobs.SystemManager
            r0.<init>()
            com.huawei.hms.adapter.sysobs.SystemManager.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.adapter.sysobs.SystemManager.b = r0
            com.huawei.hms.adapter.sysobs.SystemManager$a r0 = new com.huawei.hms.adapter.sysobs.SystemManager$a
            r0.<init>()
            com.huawei.hms.adapter.sysobs.SystemManager.c = r0
            return
    }

    public SystemManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Object a() {
            java.lang.Object r0 = com.huawei.hms.adapter.sysobs.SystemManager.b
            return r0
    }

    public static com.huawei.hms.adapter.sysobs.SystemManager getInstance() {
            com.huawei.hms.adapter.sysobs.SystemManager r0 = com.huawei.hms.adapter.sysobs.SystemManager.a
            return r0
    }

    public static com.huawei.hms.adapter.sysobs.SystemNotifier getSystemNotifier() {
            com.huawei.hms.adapter.sysobs.SystemNotifier r0 = com.huawei.hms.adapter.sysobs.SystemManager.c
            return r0
    }

    public void notifyNoticeResult(int r2) {
            r1 = this;
            com.huawei.hms.adapter.sysobs.SystemNotifier r0 = com.huawei.hms.adapter.sysobs.SystemManager.c
            r0.notifyNoticeObservers(r2)
            return
    }

    public void notifyResolutionResult(android.content.Intent r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.adapter.sysobs.SystemNotifier r0 = com.huawei.hms.adapter.sysobs.SystemManager.c
            r0.notifyObservers(r2, r3)
            return
    }

    public void notifyUpdateResult(int r2) {
            r1 = this;
            com.huawei.hms.adapter.sysobs.SystemNotifier r0 = com.huawei.hms.adapter.sysobs.SystemManager.c
            r0.notifyObservers(r2)
            return
    }
}
