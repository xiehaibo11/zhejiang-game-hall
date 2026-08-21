package com.bykv.vk.openvk;

public class TTAppContextHolder {
    private static volatile android.content.Context rg;

    private static class rg {
        private static volatile android.app.Application rg;

        static {
                java.lang.String r0 = "MyApplication"
                java.lang.Object r1 = df()     // Catch: java.lang.Throwable -> L23
                java.lang.Class r2 = r1.getClass()     // Catch: java.lang.Throwable -> L23
                java.lang.String r3 = "getApplication"
                r4 = 0
                java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L23
                java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L23
                java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L23
                java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.Throwable -> L23
                android.app.Application r1 = (android.app.Application) r1     // Catch: java.lang.Throwable -> L23
                com.bykv.vk.openvk.TTAppContextHolder.rg.rg = r1     // Catch: java.lang.Throwable -> L23
                java.lang.String r1 = "application get success"
                com.bykv.vk.openvk.api.rg.pt(r0, r1)     // Catch: java.lang.Throwable -> L23
                goto L29
            L23:
                r1 = move-exception
                java.lang.String r2 = "application get failed"
                com.bykv.vk.openvk.api.rg.df(r0, r2, r1)
            L29:
                return
        }

        private static java.lang.Object df() {
                r0 = 0
                java.lang.String r1 = "android.app.ActivityThread"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L1b
                java.lang.String r2 = "currentActivityThread"
                r3 = 0
                java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L1b
                java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L1b
                r2 = 1
                r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L1b
                java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L1b
                java.lang.Object r0 = r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L1b
                goto L23
            L1b:
                r1 = move-exception
                java.lang.String r2 = "MyApplication"
                java.lang.String r3 = "ActivityThread get error, maybe api level <= 4.2.2"
                com.bykv.vk.openvk.api.rg.df(r2, r3, r1)
            L23:
                return r0
        }

        public static android.app.Application rg() {
                android.app.Application r0 = com.bykv.vk.openvk.TTAppContextHolder.rg.rg
                return r0
        }
    }

    public TTAppContextHolder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.bykv.vk.openvk.TTAppContextHolder.rg
            if (r0 != 0) goto L8
            r0 = 0
            setContext(r0)
        L8:
            android.content.Context r0 = com.bykv.vk.openvk.TTAppContextHolder.rg
            return r0
    }

    public static synchronized void setContext(android.content.Context r2) {
            java.lang.Class<com.bykv.vk.openvk.TTAppContextHolder> r0 = com.bykv.vk.openvk.TTAppContextHolder.class
            monitor-enter(r0)
            android.content.Context r1 = com.bykv.vk.openvk.TTAppContextHolder.rg     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto L23
            if (r2 == 0) goto L11
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25
            com.bykv.vk.openvk.TTAppContextHolder.rg = r2     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)
            return
        L11:
            android.app.Application r2 = com.bykv.vk.openvk.TTAppContextHolder.rg.rg()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L23
            android.app.Application r2 = com.bykv.vk.openvk.TTAppContextHolder.rg.rg()     // Catch: java.lang.Throwable -> L23
            com.bykv.vk.openvk.TTAppContextHolder.rg = r2     // Catch: java.lang.Throwable -> L23
            android.content.Context r2 = com.bykv.vk.openvk.TTAppContextHolder.rg     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L23
            monitor-exit(r0)
            return
        L23:
            monitor-exit(r0)
            return
        L25:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
