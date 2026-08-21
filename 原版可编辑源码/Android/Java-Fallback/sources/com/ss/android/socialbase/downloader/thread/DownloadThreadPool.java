package com.ss.android.socialbase.downloader.thread;

public class DownloadThreadPool {
    private static java.util.concurrent.ExecutorService executorService;
    private int clearTimes;
    private volatile android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> downloadRunnablePool;

    static {
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.ss.android.socialbase.downloader.thread.DefaultThreadFactory r7 = new com.ss.android.socialbase.downloader.thread.DefaultThreadFactory
            java.lang.String r0 = "Download_OP_Thread"
            r7.<init>(r0)
            r1 = 2
            r2 = 2
            r3 = 60
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            com.ss.android.socialbase.downloader.thread.DownloadThreadPool.executorService = r8
            return
    }

    public DownloadThreadPool() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.clearTimes = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1.downloadRunnablePool = r0
            return
    }

    private void clearRunnableNotAlive() {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4c
            r0.<init>()     // Catch: java.lang.Throwable -> L4c
            r1 = 0
            r2 = r1
        L7:
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r3 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L4c
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L4c
            if (r2 >= r3) goto L2d
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r3 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L4c
            int r3 = r3.keyAt(r2)     // Catch: java.lang.Throwable -> L4c
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r4 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L4c
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L4c
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r4 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r4     // Catch: java.lang.Throwable -> L4c
            boolean r4 = r4.isAlive()     // Catch: java.lang.Throwable -> L4c
            if (r4 != 0) goto L2a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L4c
            r0.add(r3)     // Catch: java.lang.Throwable -> L4c
        L2a:
            int r2 = r2 + 1
            goto L7
        L2d:
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L4c
            if (r1 >= r2) goto L50
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L49
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L45
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r3 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L45
            r3.remove(r2)     // Catch: java.lang.Throwable -> L45
            goto L49
        L45:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L4c
        L49:
            int r1 = r1 + 1
            goto L2d
        L4c:
            r0 = move-exception
            r0.printStackTrace()
        L50:
            return
    }

    public static void executeOP(java.lang.Runnable r1) {
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.executorService
            r0.execute(r1)
            return
    }

    private void removeFromThreadPool(com.ss.android.socialbase.downloader.thread.DownloadRunnable r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixDefaultThreadExecutor()     // Catch: java.lang.Exception -> L52
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r4.getDownloadTask()     // Catch: java.lang.Exception -> L52
            if (r1 == 0) goto L2b
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r1.getDownloadInfo()     // Catch: java.lang.Exception -> L52
            if (r2 == 0) goto L2b
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo()     // Catch: java.lang.Exception -> L52
            int r1 = r1.getExecutorGroup()     // Catch: java.lang.Exception -> L52
            r2 = 3
            if (r1 == r2) goto L27
            r2 = 4
            if (r1 == r2) goto L22
            goto L2b
        L22:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixApkThreadExecutor()     // Catch: java.lang.Exception -> L52
            goto L2b
        L27:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixFrequentThreadExecutor()     // Catch: java.lang.Exception -> L52
        L2b:
            if (r0 == 0) goto L56
            boolean r1 = r0 instanceof java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Exception -> L52
            if (r1 == 0) goto L56
            java.util.concurrent.ThreadPoolExecutor r0 = (java.util.concurrent.ThreadPoolExecutor) r0     // Catch: java.lang.Exception -> L52
            r0.remove(r4)     // Catch: java.lang.Exception -> L52
            int r0 = r4.getDownloadId()     // Catch: java.lang.Exception -> L52
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = "pause_with_interrupt"
            r2 = 0
            boolean r0 = r0.optBugFix(r1, r2)     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L56
            java.util.concurrent.Future r4 = r4.getFuture()     // Catch: java.lang.Exception -> L52
            if (r4 == 0) goto L56
            r0 = 1
            r4.cancel(r0)     // Catch: java.lang.Exception -> L52
            goto L56
        L52:
            r4 = move-exception
            r4.printStackTrace()
        L56:
            return
    }

    public com.ss.android.socialbase.downloader.thread.DownloadRunnable cancel(int r4) {
            r3 = this;
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            r3.clearRunnableNotAlive()     // Catch: java.lang.Throwable -> L20
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r3.downloadRunnablePool     // Catch: java.lang.Throwable -> L20
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L20
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r1 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r1     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L1d
            r1.cancel()     // Catch: java.lang.Throwable -> L20
            r3.removeFromThreadPool(r1)     // Catch: java.lang.Throwable -> L20
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r2 = r3.downloadRunnablePool     // Catch: java.lang.Throwable -> L20
            r2.remove(r4)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return r1
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            r4 = 0
            return r4
        L20:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r4
    }

    public boolean containsTask(int r4) {
            r3 = this;
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r3.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            r2 = 0
            if (r1 == 0) goto L24
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r3.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L26
            if (r1 > 0) goto L11
            goto L24
        L11:
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r3.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.Throwable -> L26
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r4 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r4     // Catch: java.lang.Throwable -> L26
            if (r4 == 0) goto L22
            boolean r4 = r4.isAlive()     // Catch: java.lang.Throwable -> L26
            if (r4 == 0) goto L22
            r2 = 1
        L22:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return r2
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return r2
        L26:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r4
    }

    public void execute(com.ss.android.socialbase.downloader.thread.DownloadRunnable r9) {
            r8 = this;
            r9.prepareDownload()
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            int r1 = r8.clearTimes     // Catch: java.lang.Throwable -> L10b
            r2 = 500(0x1f4, float:7.0E-43)
            r3 = 1
            r4 = 0
            if (r1 < r2) goto L14
            r8.clearRunnableNotAlive()     // Catch: java.lang.Throwable -> L10b
            r8.clearTimes = r4     // Catch: java.lang.Throwable -> L10b
            goto L19
        L14:
            int r1 = r8.clearTimes     // Catch: java.lang.Throwable -> L10b
            int r1 = r1 + r3
            r8.clearTimes = r1     // Catch: java.lang.Throwable -> L10b
        L19:
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r8.downloadRunnablePool     // Catch: java.lang.Throwable -> L10b
            int r2 = r9.getDownloadId()     // Catch: java.lang.Throwable -> L10b
            r1.put(r2, r9)     // Catch: java.lang.Throwable -> L10b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10b
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r9.getDownloadTask()
            r1 = 1003(0x3eb, float:1.406E-42)
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixDefaultThreadExecutor()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r0 == 0) goto L76
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r5 == 0) goto L76
            java.lang.String r5 = "mime_type_plg"
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            java.lang.String r6 = r6.getMimeType()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            boolean r5 = r5.equals(r6)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            r6 = 3
            if (r5 == 0) goto L5f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            java.lang.String r7 = "divide_plugin"
            int r5 = r5.optInt(r7, r3)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r5 != r3) goto L5f
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            java.lang.String r5 = "executor_group"
            java.lang.Integer r7 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            r3.safePutToDBJsonData(r5, r7)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
        L5f:
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            int r3 = r3.getExecutorGroup()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r3 == r6) goto L72
            r5 = 4
            if (r3 == r5) goto L6d
            goto L76
        L6d:
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixApkThreadExecutor()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            goto L76
        L72:
            java.util.concurrent.ExecutorService r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getMixFrequentThreadExecutor()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
        L76:
            if (r2 == 0) goto L96
            int r3 = r9.getDownloadId()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            java.lang.String r5 = "pause_with_interrupt"
            boolean r3 = r3.optBugFix(r5, r4)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r3 == 0) goto L91
            java.util.concurrent.Future r2 = r2.submit(r9)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            r9.setFuture(r2)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            goto L10a
        L91:
            r2.execute(r9)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            goto L10a
        L96:
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r9 = r0.getMonitorDepend()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            com.ss.android.socialbase.downloader.exception.BaseException r3 = new com.ss.android.socialbase.downloader.exception.BaseException     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            java.lang.String r5 = "execute failed cpu thread executor service is null"
            r3.<init>(r1, r5)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            if (r5 == 0) goto Lb4
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.getDownloadInfo()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            int r5 = r5.getStatus()     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            goto Lb5
        Lb4:
            r5 = r4
        Lb5:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r9, r2, r3, r5)     // Catch: java.lang.OutOfMemoryError -> Lb9 java.lang.Exception -> Le0
            goto L10a
        Lb9:
            r9 = move-exception
            if (r0 == 0) goto Ldc
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r2 = r0.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()
            com.ss.android.socialbase.downloader.exception.BaseException r5 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r6 = "execute OOM"
            r5.<init>(r1, r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo()
            if (r1 == 0) goto Ld9
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo()
            int r4 = r0.getStatus()
        Ld9:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r2, r3, r5, r4)
        Ldc:
            r9.printStackTrace()
            goto L10a
        Le0:
            r9 = move-exception
            if (r0 == 0) goto L107
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r2 = r0.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.getDownloadInfo()
            com.ss.android.socialbase.downloader.exception.BaseException r5 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r6 = "DownloadThreadPoolExecute"
            java.lang.String r6 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r9, r6)
            r5.<init>(r1, r6)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo()
            if (r1 == 0) goto L104
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo()
            int r4 = r0.getStatus()
        L104:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r2, r3, r5, r4)
        L107:
            r9.printStackTrace()
        L10a:
            return
        L10b:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10b
            throw r9
    }

    public java.util.List<java.lang.Integer> getAllAliveDownloadIds() {
            r5 = this;
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            r5.clearRunnableNotAlive()     // Catch: java.lang.Throwable -> L34
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L34
            r1.<init>()     // Catch: java.lang.Throwable -> L34
            r2 = 0
        Lc:
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r3 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L34
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L34
            if (r2 >= r3) goto L32
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r3 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L34
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r4 = r5.downloadRunnablePool     // Catch: java.lang.Throwable -> L34
            int r4 = r4.keyAt(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L34
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r3 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r3     // Catch: java.lang.Throwable -> L34
            if (r3 == 0) goto L2f
            int r3 = r3.getDownloadId()     // Catch: java.lang.Throwable -> L34
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L34
            r1.add(r3)     // Catch: java.lang.Throwable -> L34
        L2f:
            int r2 = r2 + 1
            goto Lc
        L32:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return r1
        L34:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r1
    }

    public void pause(int r3) {
            r2 = this;
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            r2.clearRunnableNotAlive()     // Catch: java.lang.Throwable -> L1d
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r2.downloadRunnablePool     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r1 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r1     // Catch: java.lang.Throwable -> L1d
            if (r1 == 0) goto L1b
            r1.pause()     // Catch: java.lang.Throwable -> L1d
            r2.removeFromThreadPool(r1)     // Catch: java.lang.Throwable -> L1d
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r2.downloadRunnablePool     // Catch: java.lang.Throwable -> L1d
            r1.remove(r3)     // Catch: java.lang.Throwable -> L1d
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r3
    }

    public void removeUnAliveDownloadRunnable(com.ss.android.socialbase.downloader.thread.DownloadRunnable r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.Class<com.ss.android.socialbase.downloader.thread.DownloadThreadPool> r0 = com.ss.android.socialbase.downloader.thread.DownloadThreadPool.class
            monitor-enter(r0)
            r1 = 524288(0x80000, float:7.34684E-40)
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r1)     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L1c
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r2.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            int r3 = r1.indexOfValue(r3)     // Catch: java.lang.Throwable -> L26
            if (r3 < 0) goto L2a
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r2.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            r1.removeAt(r3)     // Catch: java.lang.Throwable -> L26
            goto L2a
        L1c:
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r1 = r2.downloadRunnablePool     // Catch: java.lang.Throwable -> L26
            int r3 = r3.getDownloadId()     // Catch: java.lang.Throwable -> L26
            r1.remove(r3)     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L2c
        L2a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            return
        L2c:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r3
    }

    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            android.util.SparseArray<com.ss.android.socialbase.downloader.thread.DownloadRunnable> r0 = r1.downloadRunnablePool
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.socialbase.downloader.thread.DownloadRunnable r2 = (com.ss.android.socialbase.downloader.thread.DownloadRunnable) r2
            if (r2 == 0) goto Ld
            r2.setThrottleNetSpeed(r3)
        Ld:
            return
    }
}
