package com.ss.android.downloadlib;

public class pt {
    private java.util.concurrent.ExecutorService df;
    private java.util.concurrent.ScheduledExecutorService q;
    private java.util.concurrent.ExecutorService rg;


    private static class rg {
        private static com.ss.android.downloadlib.pt rg;

        static {
                com.ss.android.downloadlib.pt r0 = new com.ss.android.downloadlib.pt
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.pt.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.pt rg() {
                com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg.rg
                return r0
        }
    }

    private pt() {
            r0 = this;
            r0.<init>()
            return
    }

    pt(com.ss.android.downloadlib.pt.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.downloadlib.pt rg() {
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg.rg()
            return r0
    }

    public java.util.concurrent.ExecutorService df() {
            r11 = this;
            java.util.concurrent.ExecutorService r0 = r11.rg
            if (r0 != 0) goto L41
            java.lang.Class<com.ss.android.downloadlib.pt> r0 = com.ss.android.downloadlib.pt.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = r11.rg     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L3c
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L3e
            r3 = 0
            r4 = 2147483647(0x7fffffff, float:NaN)
            r5 = 30
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L3e
            java.util.concurrent.SynchronousQueue r8 = new java.util.concurrent.SynchronousQueue     // Catch: java.lang.Throwable -> L3e
            r8.<init>()     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.Class<com.ss.android.downloadlib.ux> r10 = com.ss.android.downloadlib.ux.class
            java.lang.String r10 = r10.getName()     // Catch: java.lang.Throwable -> L3e
            r2.append(r10)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r10 = "-CPUThreadPool"
            r2.append(r10)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3e
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L3e
            r11.rg = r1     // Catch: java.lang.Throwable -> L3e
        L3c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            goto L41
        L3e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r1
        L41:
            java.util.concurrent.ExecutorService r0 = r11.rg
            return r0
    }

    public void df(java.lang.Runnable r2) {
            r1 = this;
            r0 = 0
            r1.df(r2, r0)
            return
    }

    public void df(java.lang.Runnable r1, boolean r2) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            if (r2 == 0) goto Lf
            boolean r2 = com.ss.android.downloadlib.utils.b.rg()
            if (r2 != 0) goto Lf
            r1.run()
            goto L16
        Lf:
            java.util.concurrent.ExecutorService r2 = r0.q()
            r2.execute(r1)
        L16:
            return
    }

    public void pp() {
            r1 = this;
            com.ss.android.downloadlib.pt$1 r0 = new com.ss.android.downloadlib.pt$1
            r0.<init>(r1)
            r1.rg(r0)
            return
    }

    public java.util.concurrent.ScheduledExecutorService pt() {
            r6 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r6.q
            if (r0 != 0) goto L34
            java.lang.Class<com.ss.android.downloadlib.pt> r0 = com.ss.android.downloadlib.pt.class
            monitor-enter(r0)
            java.util.concurrent.ScheduledExecutorService r1 = r6.q     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L2f
            java.util.concurrent.ScheduledThreadPoolExecutor r1 = new java.util.concurrent.ScheduledThreadPoolExecutor     // Catch: java.lang.Throwable -> L31
            r2 = 0
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r3 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L31
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r4.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.Class<com.ss.android.downloadlib.ux> r5 = com.ss.android.downloadlib.ux.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L31
            r4.append(r5)     // Catch: java.lang.Throwable -> L31
            java.lang.String r5 = "-ScheduledThreadPool"
            r4.append(r5)     // Catch: java.lang.Throwable -> L31
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L31
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L31
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L31
            r6.q = r1     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            goto L34
        L31:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            throw r1
        L34:
            java.util.concurrent.ScheduledExecutorService r0 = r6.q
            return r0
    }

    public java.util.concurrent.ExecutorService q() {
            r11 = this;
            java.util.concurrent.ExecutorService r0 = r11.df
            if (r0 != 0) goto L41
            java.lang.Class<com.ss.android.downloadlib.pt> r0 = com.ss.android.downloadlib.pt.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = r11.df     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L3c
            java.util.concurrent.ThreadPoolExecutor r1 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L3e
            r3 = 0
            r4 = 2147483647(0x7fffffff, float:NaN)
            r5 = 30
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L3e
            java.util.concurrent.SynchronousQueue r8 = new java.util.concurrent.SynchronousQueue     // Catch: java.lang.Throwable -> L3e
            r8.<init>()     // Catch: java.lang.Throwable -> L3e
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r9 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory     // Catch: java.lang.Throwable -> L3e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.Class<com.ss.android.downloadlib.ux> r10 = com.ss.android.downloadlib.ux.class
            java.lang.String r10 = r10.getName()     // Catch: java.lang.Throwable -> L3e
            r2.append(r10)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r10 = "-IOThreadPool"
            r2.append(r10)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3e
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            r2 = r1
            r2.<init>(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L3e
            r11.df = r1     // Catch: java.lang.Throwable -> L3e
        L3c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            goto L41
        L3e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r1
        L41:
            java.util.concurrent.ExecutorService r0 = r11.df
            return r0
    }

    public void rg(java.lang.Runnable r2) {
            r1 = this;
            r0 = 0
            r1.rg(r2, r0)
            return
    }

    public void rg(java.lang.Runnable r3, long r4) {
            r2 = this;
            java.util.concurrent.ScheduledExecutorService r0 = r2.pt()     // Catch: java.lang.Throwable -> La
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> La
            r0.schedule(r3, r4, r1)     // Catch: java.lang.Throwable -> La
            goto Le
        La:
            r3 = move-exception
            r3.printStackTrace()
        Le:
            return
    }

    public void rg(java.lang.Runnable r1, boolean r2) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            if (r2 == 0) goto Lf
            boolean r2 = com.ss.android.downloadlib.utils.b.rg()
            if (r2 != 0) goto Lf
            r1.run()
            goto L16
        Lf:
            java.util.concurrent.ExecutorService r2 = r0.df()
            r2.execute(r1)
        L16:
            return
    }
}
