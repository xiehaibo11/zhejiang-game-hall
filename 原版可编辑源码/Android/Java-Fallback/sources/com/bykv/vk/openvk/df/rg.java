package com.bykv.vk.openvk.df;

public class rg {
    private static volatile com.bykv.vk.openvk.df.rg df;
    private volatile java.util.concurrent.ThreadPoolExecutor rg;


    public static class rg implements java.util.concurrent.ThreadFactory {
        private final java.util.concurrent.atomic.AtomicInteger df;
        private final java.lang.String q;
        private final java.lang.ThreadGroup rg;

        rg() {
                r1 = this;
                java.lang.String r0 = "csj_g_pl_mgr"
                r1.<init>(r0)
                return
        }

        rg(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.df = r0
                java.lang.ThreadGroup r0 = new java.lang.ThreadGroup
                java.lang.String r1 = "csj_g_pl_mgr"
                r0.<init>(r1)
                r2.rg = r0
                r2.q = r3
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.rg
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r7.q
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.df
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2c
                r8 = 0
                r6.setDaemon(r8)
            L2c:
                int r8 = r6.getPriority()
                r0 = 5
                if (r8 == r0) goto L36
                r6.setPriority(r0)
            L36:
                return r6
        }
    }

    public rg() {
            r10 = this;
            r10.<init>()
            java.util.concurrent.ThreadPoolExecutor r9 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.bykv.vk.openvk.df.rg$rg r7 = new com.bykv.vk.openvk.df.rg$rg
            r7.<init>()
            com.bykv.vk.openvk.df.rg$1 r8 = new com.bykv.vk.openvk.df.rg$1
            r8.<init>(r10)
            r1 = 3
            r2 = 3
            r3 = 5
            r0 = r9
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            r10.rg = r9
            java.util.concurrent.ThreadPoolExecutor r0 = r10.rg
            r1 = 1
            r0.allowCoreThreadTimeOut(r1)
            return
    }

    public static com.bykv.vk.openvk.df.rg rg() {
            com.bykv.vk.openvk.df.rg r0 = com.bykv.vk.openvk.df.rg.df
            if (r0 != 0) goto L13
            java.lang.Class<com.bykv.vk.openvk.df.rg> r0 = com.bykv.vk.openvk.df.rg.class
            monitor-enter(r0)
            com.bykv.vk.openvk.df.rg r1 = new com.bykv.vk.openvk.df.rg     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.bykv.vk.openvk.df.rg.df = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            com.bykv.vk.openvk.df.rg r0 = com.bykv.vk.openvk.df.rg.df
            return r0
    }

    public void rg(java.lang.Runnable r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            java.util.concurrent.ThreadPoolExecutor r0 = r1.rg     // Catch: java.lang.Throwable -> L8
            r0.execute(r2)     // Catch: java.lang.Throwable -> L8
            goto Lc
        L8:
            r2 = move-exception
            r2.printStackTrace()
        Lc:
            return
    }
}
