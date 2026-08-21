package com.huawei.hms.common.internal;

public class BindResolveClients {
    private static final java.lang.Object LOCK_INST = null;
    private java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> mClientList;

    static class 1 {
    }

    private static class SingletonManager {
        private static final com.huawei.hms.common.internal.BindResolveClients INSTANCE = null;

        static {
                com.huawei.hms.common.internal.BindResolveClients r0 = new com.huawei.hms.common.internal.BindResolveClients
                r1 = 0
                r0.<init>(r1)
                com.huawei.hms.common.internal.BindResolveClients.SingletonManager.INSTANCE = r0
                return
        }

        private SingletonManager() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.huawei.hms.common.internal.BindResolveClients access$100() {
                com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.SingletonManager.INSTANCE
                return r0
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.common.internal.BindResolveClients.LOCK_INST = r0
            return
    }

    private BindResolveClients() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mClientList = r0
            return
    }

    BindResolveClients(com.huawei.hms.common.internal.BindResolveClients.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.common.internal.BindResolveClients getInstance() {
            com.huawei.hms.common.internal.BindResolveClients r0 = com.huawei.hms.common.internal.BindResolveClients.SingletonManager.access$100()
            return r0
    }

    boolean isClientRegistered(com.huawei.hms.common.internal.ResolveClientBean r3) {
            r2 = this;
            java.lang.Object r0 = com.huawei.hms.common.internal.BindResolveClients.LOCK_INST
            monitor-enter(r0)
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r2.mClientList     // Catch: java.lang.Throwable -> Lb
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public void notifyClientReconnect() {
            r3 = this;
            java.lang.Object r0 = com.huawei.hms.common.internal.BindResolveClients.LOCK_INST
            monitor-enter(r0)
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r3.mClientList     // Catch: java.lang.Throwable -> L20
            java.util.ListIterator r1 = r1.listIterator()     // Catch: java.lang.Throwable -> L20
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L19
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L20
            com.huawei.hms.common.internal.ResolveClientBean r2 = (com.huawei.hms.common.internal.ResolveClientBean) r2     // Catch: java.lang.Throwable -> L20
            r2.clientReconnect()     // Catch: java.lang.Throwable -> L20
            goto L9
        L19:
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r3.mClientList     // Catch: java.lang.Throwable -> L20
            r1.clear()     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r1
    }

    void register(com.huawei.hms.common.internal.ResolveClientBean r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Object r0 = com.huawei.hms.common.internal.BindResolveClients.LOCK_INST
            monitor-enter(r0)
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r2.mClientList     // Catch: java.lang.Throwable -> L15
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r2.mClientList     // Catch: java.lang.Throwable -> L15
            r1.add(r3)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
    }

    void unRegister(com.huawei.hms.common.internal.ResolveClientBean r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.Object r0 = com.huawei.hms.common.internal.BindResolveClients.LOCK_INST
            monitor-enter(r0)
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r3.mClientList     // Catch: java.lang.Throwable -> L29
            boolean r1 = r1.contains(r4)     // Catch: java.lang.Throwable -> L29
            if (r1 == 0) goto L27
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r3.mClientList     // Catch: java.lang.Throwable -> L29
            java.util.ListIterator r1 = r1.listIterator()     // Catch: java.lang.Throwable -> L29
        L14:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L29
            boolean r2 = r4.equals(r2)     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L14
            r1.remove()     // Catch: java.lang.Throwable -> L29
        L27:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return
        L29:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r4
    }

    public void unRegisterAll() {
            r2 = this;
            java.lang.Object r0 = com.huawei.hms.common.internal.BindResolveClients.LOCK_INST
            monitor-enter(r0)
            java.util.ArrayList<com.huawei.hms.common.internal.ResolveClientBean> r1 = r2.mClientList     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }
}
