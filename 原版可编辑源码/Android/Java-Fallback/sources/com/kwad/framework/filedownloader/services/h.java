package com.kwad.framework.filedownloader.services;

final class h {
    private final java.lang.String aeA;
    private int aeB;
    private int aeC;
    private android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> aey;
    private java.util.concurrent.ThreadPoolExecutor aez;

    h(int r3) {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.aey = r0
            java.lang.String r0 = "Network"
            r2.aeA = r0
            r1 = 0
            r2.aeC = r1
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.j(r3, r0)
            r2.aez = r0
            r2.aeB = r3
            return
    }

    private synchronized void vG() {
            r6 = this;
            monitor-enter(r6)
            android.util.SparseArray r0 = new android.util.SparseArray     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r1 = r6.aey     // Catch: java.lang.Throwable -> L2d
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2d
            r2 = 0
        Ld:
            if (r2 >= r1) goto L29
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r3 = r6.aey     // Catch: java.lang.Throwable -> L2d
            int r3 = r3.keyAt(r2)     // Catch: java.lang.Throwable -> L2d
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r4 = r6.aey     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L2d
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r4 = (com.kwad.framework.filedownloader.download.DownloadLaunchRunnable) r4     // Catch: java.lang.Throwable -> L2d
            boolean r5 = r4.isAlive()     // Catch: java.lang.Throwable -> L2d
            if (r5 == 0) goto L26
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L2d
        L26:
            int r2 = r2 + 1
            goto Ld
        L29:
            r6.aey = r0     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r6)
            return
        L2d:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final void a(com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r3) {
            r2 = this;
            r3.uz()
            monitor-enter(r2)
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r0 = r2.aey     // Catch: java.lang.Throwable -> L23
            int r1 = r3.getId()     // Catch: java.lang.Throwable -> L23
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            java.util.concurrent.ThreadPoolExecutor r0 = r2.aez
            r0.execute(r3)
            int r3 = r2.aeC
            r0 = 600(0x258, float:8.41E-43)
            if (r3 < r0) goto L20
            r2.vG()
            r3 = 0
        L1d:
            r2.aeC = r3
            return
        L20:
            int r3 = r3 + 1
            goto L1d
        L23:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            throw r3
    }

    public final boolean bF(int r2) {
            r1 = this;
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r0 = r1.aey
            java.lang.Object r2 = r0.get(r2)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r2 = (com.kwad.framework.filedownloader.download.DownloadLaunchRunnable) r2
            if (r2 == 0) goto L12
            boolean r2 = r2.isAlive()
            if (r2 == 0) goto L12
            r2 = 1
            return r2
        L12:
            r2 = 0
            return r2
    }

    public final synchronized boolean bs(int r6) {
            r5 = this;
            monitor-enter(r5)
            int r0 = r5.vH()     // Catch: java.lang.Throwable -> L59
            r1 = 0
            if (r0 <= 0) goto L11
            java.lang.String r6 = "Can't change the max network thread count, because the  network thread pool isn't in IDLE, please try again after all running tasks are completed or invoking FileDownloader#pauseAll directly."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L59
            com.kwad.framework.filedownloader.f.d.d(r5, r6, r0)     // Catch: java.lang.Throwable -> L59
            monitor-exit(r5)
            return r1
        L11:
            int r6 = com.kwad.framework.filedownloader.f.e.bG(r6)     // Catch: java.lang.Throwable -> L59
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L59
            r2 = 1
            if (r0 == 0) goto L30
            java.lang.String r0 = "change the max network thread count, from %d to %d"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L59
            int r4 = r5.aeB     // Catch: java.lang.Throwable -> L59
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L59
            r3[r1] = r4     // Catch: java.lang.Throwable -> L59
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L59
            r3[r2] = r4     // Catch: java.lang.Throwable -> L59
            com.kwad.framework.filedownloader.f.d.c(r5, r0, r3)     // Catch: java.lang.Throwable -> L59
        L30:
            java.util.concurrent.ThreadPoolExecutor r0 = r5.aez     // Catch: java.lang.Throwable -> L59
            java.util.List r0 = r0.shutdownNow()     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "Network"
            java.util.concurrent.ThreadPoolExecutor r3 = com.kwad.framework.filedownloader.f.b.j(r6, r3)     // Catch: java.lang.Throwable -> L59
            r5.aez = r3     // Catch: java.lang.Throwable -> L59
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L59
            if (r3 <= 0) goto L55
            java.lang.String r3 = "recreate the network thread pool and discard %d tasks"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L59
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L59
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L59
            r4[r1] = r0     // Catch: java.lang.Throwable -> L59
            com.kwad.framework.filedownloader.f.d.d(r5, r3, r4)     // Catch: java.lang.Throwable -> L59
        L55:
            r5.aeB = r6     // Catch: java.lang.Throwable -> L59
            monitor-exit(r5)
            return r2
        L59:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final void cancel(int r6) {
            r5 = this;
            r5.vG()
            monitor-enter(r5)
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r0 = r5.aey     // Catch: java.lang.Throwable -> L38
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L38
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r0 = (com.kwad.framework.filedownloader.download.DownloadLaunchRunnable) r0     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L31
            r0.pause()     // Catch: java.lang.Throwable -> L38
            java.util.concurrent.ThreadPoolExecutor r1 = r5.aez     // Catch: java.lang.Throwable -> L38
            boolean r0 = r1.remove(r0)     // Catch: java.lang.Throwable -> L38
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L31
            java.lang.String r1 = "successful cancel %d %B"
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L38
            r3 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L38
            r2[r3] = r4     // Catch: java.lang.Throwable -> L38
            r3 = 1
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> L38
            r2[r3] = r0     // Catch: java.lang.Throwable -> L38
            com.kwad.framework.filedownloader.f.d.c(r5, r1, r2)     // Catch: java.lang.Throwable -> L38
        L31:
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r0 = r5.aey     // Catch: java.lang.Throwable -> L38
            r0.remove(r6)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L38
            return
        L38:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L38
            throw r6
    }

    public final int l(java.lang.String r6, int r7) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r1 = r5.aey
            int r1 = r1.size()
            r2 = r0
        Lb:
            if (r2 >= r1) goto L35
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r3 = r5.aey
            java.lang.Object r3 = r3.valueAt(r2)
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r3 = (com.kwad.framework.filedownloader.download.DownloadLaunchRunnable) r3
            if (r3 == 0) goto L32
            boolean r4 = r3.isAlive()
            if (r4 == 0) goto L32
            int r4 = r3.getId()
            if (r4 == r7) goto L32
            java.lang.String r4 = r3.uE()
            boolean r4 = r6.equals(r4)
            if (r4 == 0) goto L32
            int r6 = r3.getId()
            return r6
        L32:
            int r2 = r2 + 1
            goto Lb
        L35:
            return r0
    }

    public final synchronized int vH() {
            r1 = this;
            monitor-enter(r1)
            r1.vG()     // Catch: java.lang.Throwable -> Lc
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r0 = r1.aey     // Catch: java.lang.Throwable -> Lc
            int r0 = r0.size()     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r1)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized java.util.List<java.lang.Integer> vI() {
            r4 = this;
            monitor-enter(r4)
            r4.vG()     // Catch: java.lang.Throwable -> L30
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L30
            r0.<init>()     // Catch: java.lang.Throwable -> L30
            r1 = 0
        La:
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r2 = r4.aey     // Catch: java.lang.Throwable -> L30
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L30
            if (r1 >= r2) goto L2e
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r2 = r4.aey     // Catch: java.lang.Throwable -> L30
            android.util.SparseArray<com.kwad.framework.filedownloader.download.DownloadLaunchRunnable> r3 = r4.aey     // Catch: java.lang.Throwable -> L30
            int r3 = r3.keyAt(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L30
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r2 = (com.kwad.framework.filedownloader.download.DownloadLaunchRunnable) r2     // Catch: java.lang.Throwable -> L30
            int r2 = r2.getId()     // Catch: java.lang.Throwable -> L30
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L30
            r0.add(r2)     // Catch: java.lang.Throwable -> L30
            int r1 = r1 + 1
            goto La
        L2e:
            monitor-exit(r4)
            return r0
        L30:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
