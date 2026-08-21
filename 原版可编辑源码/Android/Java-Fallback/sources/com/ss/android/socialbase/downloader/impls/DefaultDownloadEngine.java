package com.ss.android.socialbase.downloader.impls;

public class DefaultDownloadEngine extends com.ss.android.socialbase.downloader.impls.AbsDownloadEngine {
    private static final java.lang.String TAG = "DefaultDownloadEngine";
    private static com.ss.android.socialbase.downloader.thread.DownloadThreadPool downloadThreadPool;

    public DefaultDownloadEngine() {
            r1 = this;
            r1.<init>()
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = new com.ss.android.socialbase.downloader.thread.DownloadThreadPool
            r0.<init>()
            com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool = r0
            return
    }

    public static java.util.List<java.util.concurrent.Future> executeFutureTasks(java.util.List<java.lang.Runnable> r3) {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkDownloadThreadExecutorService()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r3.size()
            r1.<init>(r2)
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r3.next()
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            java.util.concurrent.Future r2 = r0.submit(r2)
            r1.add(r2)
            goto L11
        L25:
            return r1
    }

    public static java.lang.Runnable getUnstartedTask(java.util.List<java.util.concurrent.Future> r5) {
            r0 = 0
            if (r5 == 0) goto L5f
            boolean r1 = r5.isEmpty()
            if (r1 == 0) goto La
            goto L5f
        La:
            java.util.concurrent.ExecutorService r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkDownloadThreadExecutorService()     // Catch: java.lang.Throwable -> L44
            boolean r2 = r1 instanceof java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L5f
            java.util.concurrent.ThreadPoolExecutor r1 = (java.util.concurrent.ThreadPoolExecutor) r1     // Catch: java.lang.Throwable -> L44
            java.util.concurrent.BlockingQueue r1 = r1.getQueue()     // Catch: java.lang.Throwable -> L44
            if (r1 == 0) goto L5f
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> L44
            if (r2 != 0) goto L5f
            java.util.Iterator r2 = r5.iterator()     // Catch: java.lang.Throwable -> L44
        L24:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L3d
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L44
            java.util.concurrent.Future r3 = (java.util.concurrent.Future) r3     // Catch: java.lang.Throwable -> L44
            boolean r4 = r3 instanceof java.lang.Runnable     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L24
            boolean r4 = r1.remove(r3)     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L24
            java.lang.Runnable r3 = (java.lang.Runnable) r3     // Catch: java.lang.Throwable -> L44
            goto L3e
        L3d:
            r3 = r0
        L3e:
            if (r3 == 0) goto L5f
            r5.remove(r3)     // Catch: java.lang.Throwable -> L44
            return r3
        L44:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getUnstartedTask() error: "
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = "DefaultDownloadEngine"
            com.ss.android.socialbase.downloader.logger.Logger.w(r1, r5)
        L5f:
            return r0
    }

    public static void invokeFutureTasks(java.util.List<java.util.concurrent.Callable<java.lang.Object>> r1) throws java.lang.InterruptedException {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getChunkDownloadThreadExecutorService()
            if (r0 == 0) goto L9
            r0.invokeAll(r1)
        L9:
            return
    }

    @Override
    protected com.ss.android.socialbase.downloader.thread.DownloadRunnable doCancel(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r2 = r0.cancel(r2)
            return r2
    }

    @Override
    public void doDownload(int r3, com.ss.android.socialbase.downloader.model.DownloadTask r4) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "start doDownload for task : "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "DownloadTask"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r3)
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r3 = new com.ss.android.socialbase.downloader.thread.DownloadRunnable
            com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r0 = r2.mainHandler
            r3.<init>(r4, r0)
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r4 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            r4.execute(r3)
            return
    }

    @Override
    public void doPause(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            if (r0 != 0) goto L5
            return
        L5:
            r0.pause(r2)
            return
    }

    @Override
    public void doSetThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            if (r0 != 0) goto L5
            return
        L5:
            r0.setThrottleNetSpeed(r2, r3)
            return
    }

    @Override
    public java.util.List<java.lang.Integer> getAllAliveDownloadIds() {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            java.util.List r0 = r0.getAllAliveDownloadIds()
            return r0
    }

    @Override
    public boolean isDownloading(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = r0.containsTask(r3)
            if (r0 != 0) goto Ld
            return r1
        Ld:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.getDownloadInfo(r3)
            if (r0 != 0) goto L14
            return r1
        L14:
            int r0 = r0.getStatus()
            boolean r0 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r0)
            if (r0 != 0) goto L22
            r2.doPause(r3)
            return r1
        L22:
            r3 = 1
            return r3
    }

    @Override
    public void removeDownloadRunnable(com.ss.android.socialbase.downloader.thread.DownloadRunnable r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool r0 = com.ss.android.socialbase.downloader.impls.DefaultDownloadEngine.downloadThreadPool
            if (r0 != 0) goto L5
            return
        L5:
            r0.removeUnAliveDownloadRunnable(r2)
            return
    }
}
