package com.kwad.framework.filedownloader.f;

public class b {
    private static volatile java.util.concurrent.ThreadPoolExecutor aeF;

    static class a implements java.util.concurrent.ThreadFactory {
        private static final java.util.concurrent.atomic.AtomicInteger aeG = null;
        private final java.lang.ThreadGroup group;
        private final java.lang.String namePrefix;
        private final java.util.concurrent.atomic.AtomicInteger threadNumber;

        static {
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                com.kwad.framework.filedownloader.f.b.a.aeG = r0
                return
        }

        a(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.threadNumber = r0
                java.lang.Thread r0 = java.lang.Thread.currentThread()
                java.lang.ThreadGroup r0 = r0.getThreadGroup()
                r2.group = r0
                java.lang.String r3 = com.kwad.framework.filedownloader.f.f.bs(r3)
                r2.namePrefix = r3
                return
        }

        @Override
        public final java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.group
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r2 = "ksad-"
                r0.<init>(r2)
                java.lang.String r2 = r7.namePrefix
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.threadNumber
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2e
                r8 = 0
                r6.setDaemon(r8)
            L2e:
                int r8 = r6.getPriority()
                r0 = 5
                if (r8 == r0) goto L38
                r6.setPriority(r0)
            L38:
                return r6
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static java.util.concurrent.ThreadPoolExecutor a(int r9, java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r10, java.lang.String r11) {
            boolean r0 = vK()
            if (r0 == 0) goto Lb
            java.util.concurrent.ThreadPoolExecutor r9 = vL()
            return r9
        Lb:
            com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
            r3 = 15
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            com.kwad.framework.filedownloader.f.b$a r7 = new com.kwad.framework.filedownloader.f.b$a
            r7.<init>(r11)
            r0 = r8
            r1 = r9
            r2 = r9
            r6 = r10
            r0.<init>(r1, r2, r3, r5, r6, r7)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "ksad-"
            r9.<init>(r10)
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            com.kwad.sdk.core.threads.c.a(r8, r9)
            r9 = 1
            r8.allowCoreThreadTimeOut(r9)
            return r8
    }

    @java.lang.Deprecated
    public static java.util.concurrent.ThreadPoolExecutor bl(java.lang.String r9) {
            boolean r0 = vK()
            if (r0 == 0) goto Lb
            java.util.concurrent.ThreadPoolExecutor r9 = vL()
            return r9
        Lb:
            com.kwad.sdk.core.threads.a.b r8 = new com.kwad.sdk.core.threads.a.b
            r1 = 0
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 15
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.SynchronousQueue r6 = new java.util.concurrent.SynchronousQueue
            r6.<init>()
            com.kwad.framework.filedownloader.f.b$a r7 = new com.kwad.framework.filedownloader.f.b$a
            r7.<init>(r9)
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ksad-"
            r0.<init>(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            com.kwad.sdk.core.threads.c.a(r8, r9)
            return r8
    }

    @java.lang.Deprecated
    public static java.util.concurrent.ThreadPoolExecutor j(int r1, java.lang.String r2) {
            boolean r0 = vK()
            if (r0 == 0) goto Lb
            java.util.concurrent.ThreadPoolExecutor r1 = vL()
            return r1
        Lb:
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            java.util.concurrent.ThreadPoolExecutor r1 = a(r1, r0, r2)
            return r1
    }

    private static boolean vK() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 == 0) goto Lf
            boolean r0 = r0.vK()
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    private static java.util.concurrent.ThreadPoolExecutor vL() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.aeF
            if (r0 != 0) goto L2f
            java.lang.Class<com.kwad.framework.filedownloader.f.b> r0 = com.kwad.framework.filedownloader.f.b.class
            monitor-enter(r0)
            java.util.concurrent.ThreadPoolExecutor r1 = com.kwad.framework.filedownloader.f.b.aeF     // Catch: java.lang.Throwable -> L2c
            if (r1 != 0) goto L2a
            com.kwad.sdk.core.threads.a.b r1 = new com.kwad.sdk.core.threads.a.b     // Catch: java.lang.Throwable -> L2c
            r3 = 5
            r4 = 5
            r5 = 60
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L2c
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L2c
            r8.<init>()     // Catch: java.lang.Throwable -> L2c
            com.kwad.framework.filedownloader.f.b$a r9 = new com.kwad.framework.filedownloader.f.b$a     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = ""
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L2c
            com.kwad.framework.filedownloader.f.b.aeF = r1     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = "ksad-filedownload-default"
            com.kwad.sdk.core.threads.c.a(r1, r2)     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r1
        L2f:
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.aeF
            return r0
    }
}
