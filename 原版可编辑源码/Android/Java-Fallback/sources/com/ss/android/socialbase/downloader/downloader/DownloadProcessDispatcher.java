package com.ss.android.socialbase.downloader.downloader;

public class DownloadProcessDispatcher {
    private static volatile com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher instance;
    private volatile android.util.SparseArray<java.lang.Boolean> independentMap;
    private android.os.Handler mainThreadHandler;
    private volatile java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> processConnectedListeners;


    static {
            return
    }

    public DownloadProcessDispatcher() {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.independentMap = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mainThreadHandler = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.processConnectedListeners = r0
            return
    }

    private com.ss.android.socialbase.downloader.downloader.IDownloadProxy getDownloadHandler(com.ss.android.socialbase.downloader.model.DownloadTask r7) {
            r6 = this;
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r7.getDownloadInfo()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            boolean r0 = r1.isNeedIndependentProcess()
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            r3 = 1
            if (r2 != 0) goto L1c
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            if (r2 != 0) goto L1d
        L1c:
            r0 = r3
        L1d:
            int r2 = r1.getId()
            int r2 = r6.getDownloadWithIndependentProcessStatus(r2)
            r4 = 0
            if (r2 < 0) goto Lb3
            if (r2 == r0) goto Lb3
            if (r2 != r3) goto L76
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            r7.pause(r2)     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.model.DownloadInfo r7 = r7.getDownloadInfo(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto L52
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r4)     // Catch: java.lang.Throwable -> Lb3
            r2.syncDownloadInfo(r7)     // Catch: java.lang.Throwable -> Lb3
        L52:
            int r7 = r7.getChunkCount()     // Catch: java.lang.Throwable -> Lb3
            if (r7 <= r3) goto Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            java.util.List r7 = r7.getDownloadChunk(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto Lb3
            java.util.List r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parseHostChunkList(r7)     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r4)     // Catch: java.lang.Throwable -> Lb3
            int r5 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            r2.syncDownloadChunks(r5, r7)     // Catch: java.lang.Throwable -> Lb3
            goto Lb3
        L76:
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()     // Catch: java.lang.Throwable -> Lb3
            if (r2 == 0) goto La5
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r4)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            r7.pause(r2)     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r4)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            java.util.List r7 = r7.getDownloadChunk(r2)     // Catch: java.lang.Throwable -> Lb3
            if (r7 == 0) goto Lb3
            java.util.List r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.parseHostChunkList(r7)     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)     // Catch: java.lang.Throwable -> Lb3
            int r5 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            r2.syncDownloadChunks(r5, r7)     // Catch: java.lang.Throwable -> Lb3
            goto Lb3
        La5:
            r7.setNeedDelayForCacheSync(r3)     // Catch: java.lang.Throwable -> Lb3
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)     // Catch: java.lang.Throwable -> Lb3
            int r2 = r1.getId()     // Catch: java.lang.Throwable -> Lb3
            r7.dispatchProcessCallback(r3, r2)     // Catch: java.lang.Throwable -> Lb3
        Lb3:
            int r7 = r1.getId()
            if (r0 != r3) goto Lbb
            r1 = r3
            goto Lbc
        Lbb:
            r1 = r4
        Lbc:
            r6.setDownloadWithIndependentProcessStatus(r7, r1)
            if (r0 != r3) goto Lc2
            goto Lc3
        Lc2:
            r3 = r4
        Lc3:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r7 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            return r7
    }

    public static com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher getInstance() {
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.instance
            if (r0 != 0) goto L13
            java.lang.Class<com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher> r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.class
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r1 = new com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.instance = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.instance
            return r0
    }

    private java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> handleDownloadInfos(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r4, java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r5, android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r6) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r4 == 0) goto L2b
            java.util.Iterator r4 = r4.iterator()
        Lb:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r4.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r1
            if (r1 == 0) goto Lb
            int r2 = r1.getId()
            java.lang.Object r2 = r6.get(r2)
            if (r2 != 0) goto Lb
            int r2 = r1.getId()
            r6.put(r2, r1)
            goto Lb
        L2b:
            if (r5 == 0) goto L51
            java.util.Iterator r4 = r5.iterator()
        L31:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L51
            java.lang.Object r5 = r4.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r5
            if (r5 == 0) goto L31
            int r1 = r5.getId()
            java.lang.Object r1 = r6.get(r1)
            if (r1 != 0) goto L31
            int r1 = r5.getId()
            r6.put(r1, r5)
            goto L31
        L51:
            r4 = 0
        L52:
            int r5 = r6.size()
            if (r4 >= r5) goto L68
            int r5 = r6.keyAt(r4)
            java.lang.Object r5 = r6.get(r5)
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r5
            r0.add(r5)
            int r4 = r4 + 1
            goto L52
        L68:
            return r0
    }

    public void addDownloadListener(int r7, com.ss.android.socialbase.downloader.depend.IDownloadListener r8, com.ss.android.socialbase.downloader.constants.ListenerType r9, boolean r10) {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r6.getDownloadHandler(r7)
            if (r0 != 0) goto L7
            return
        L7:
            int r2 = r8.hashCode()
            r1 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.addDownloadListener(r1, r2, r3, r4, r5)
            return
    }

    public void addDownloadListener(int r8, com.ss.android.socialbase.downloader.depend.IDownloadListener r9, com.ss.android.socialbase.downloader.constants.ListenerType r10, boolean r11, boolean r12) {
            r7 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r7.getDownloadHandler(r8)
            if (r0 != 0) goto L7
            return
        L7:
            int r2 = r9.hashCode()
            r1 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r0.addDownloadListener(r1, r2, r3, r4, r5, r6)
            return
    }

    public boolean canResume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            boolean r2 = r0.canResume(r2)
            return r2
    }

    public void cancel(int r4, boolean r5) {
            r3 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            r1 = 1
            if (r0 == 0) goto L36
            r0 = 8388608(0x800000, float:1.1754944E-38)
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode.isSwitchEnable(r0)
            r2 = 0
            if (r0 == 0) goto L23
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            if (r0 == 0) goto L19
            r0.cancel(r4, r5)
        L19:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r2)
            if (r0 == 0) goto L47
            r0.cancel(r4, r5)
            goto L47
        L23:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r2)
            if (r0 == 0) goto L2c
            r0.cancel(r4, r5)
        L2c:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            if (r0 == 0) goto L47
            r0.cancel(r4, r5)
            goto L47
        L36:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r3.getDownloadHandler(r4)
            if (r0 == 0) goto L3f
            r0.cancel(r4, r5)
        L3f:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r5 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r0 = 2
            r5.dispatchProcessCallback(r0, r4)
        L47:
            return
    }

    public void clearDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.clearDownloadData(r2, r3)
            return
    }

    public void dispatchDownloaderProcessConnectedEvent() {
            r3 = this;
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r0 = r3.processConnectedListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r1 = r3.processConnectedListeners     // Catch: java.lang.Throwable -> L1d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1d
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1d
            com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r2 = (com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener) r2     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L9
            r2.onConnected()     // Catch: java.lang.Throwable -> L1d
            goto L9
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            return
        L1d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
            throw r1
    }

    public void forceDownloadIngoreRecommendSize(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.forceDownloadIngoreRecommendSize(r2)
            return
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r4 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r2 = 0
            if (r1 == 0) goto L12
            java.util.List r1 = r1.getAllDownloadInfo()
            goto L13
        L12:
            r1 = r2
        L13:
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L1e
            java.util.List r2 = r3.getAllDownloadInfo()
        L1e:
            java.util.List r0 = r4.handleDownloadInfos(r1, r2, r0)
            return r0
    }

    public long getCurBytes(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r2.getDownloadHandler(r3)
            if (r0 != 0) goto L9
            r0 = 0
            return r0
        L9:
            long r0 = r0.getCurBytes(r3)
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = r0.getDownloadFileUriProvider(r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.downloader.IDownloadProxy getDownloadHandler(int r2) {
            r1 = this;
            int r2 = r1.getDownloadWithIndependentProcessStatus(r2)
            r0 = 1
            if (r2 != r0) goto Le
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r2 != 0) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            return r2
    }

    public int getDownloadId(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1, r2)
            return r1
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = r0.getDownloadId(r1, r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = r0.getDownloadHandler(r1)
            if (r2 != 0) goto Lc
            r1 = 0
            return r1
        Lc:
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r2.getDownloadInfo(r1)
            return r1
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r3) {
            r2 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            java.util.List r0 = r0.getDownloadInfoList(r3)
            r1 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            java.util.List r3 = r1.getDownloadInfoList(r3)
            if (r0 != 0) goto L18
            if (r3 != 0) goto L18
            r3 = 0
            return r3
        L18:
            if (r0 == 0) goto L25
            if (r3 == 0) goto L25
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r1.addAll(r3)
            return r1
        L25:
            if (r0 == 0) goto L28
            goto L29
        L28:
            r0 = r3
        L29:
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r0.getDownloadNotificationEventListener(r2)
            return r2
    }

    public int getDownloadWithIndependentProcessStatus(int r3) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.supportMultiProc()
            if (r0 != 0) goto L8
            r3 = -1
            return r3
        L8:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r0 != 0) goto L22
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            boolean r1 = r1.isServiceAlive()
            if (r1 == 0) goto L22
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            int r3 = r0.getDownloadWithIndependentProcessStatus(r3)
            return r3
        L22:
            int r3 = r2.getDownloadWithIndependentProcessStatusInner(r3)
            return r3
    }

    public synchronized int getDownloadWithIndependentProcessStatusInner(int r2) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.lang.Boolean> r0 = r1.independentMap     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto Lc
            r2 = -1
            monitor-exit(r1)
            return r2
        Lc:
            android.util.SparseArray<java.lang.Boolean> r0 = r1.independentMap     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1a
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Throwable -> L1a
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r1)
            return r2
        L1a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r2 = 0
            if (r1 == 0) goto L12
            java.util.List r1 = r1.getDownloadingDownloadInfosWithMimeType(r5)
            goto L13
        L12:
            r1 = r2
        L13:
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L1e
            java.util.List r2 = r3.getDownloadingDownloadInfosWithMimeType(r5)
        L1e:
            java.util.List r5 = r4.handleDownloadInfos(r1, r2, r0)
            return r5
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r2 = 0
            if (r1 == 0) goto L12
            java.util.List r1 = r1.getFailedDownloadInfosWithMimeType(r5)
            goto L13
        L12:
            r1 = r2
        L13:
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L1e
            java.util.List r2 = r3.getFailedDownloadInfosWithMimeType(r5)
        L1e:
            java.util.List r5 = r4.handleDownloadInfos(r1, r2, r0)
            return r5
    }

    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = r0.getNotificationClickCallback(r2)
            return r2
    }

    public int getStatus(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            int r2 = r0.getStatus(r2)
            return r2
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r2 = 0
            if (r1 == 0) goto L12
            java.util.List r1 = r1.getSuccessedDownloadInfosWithMimeType(r5)
            goto L13
        L12:
            r1 = r2
        L13:
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L1e
            java.util.List r2 = r3.getSuccessedDownloadInfosWithMimeType(r5)
        L1e:
            java.util.List r5 = r4.handleDownloadInfos(r1, r2, r0)
            return r5
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r5) {
            r4 = this;
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r1 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r1)
            r2 = 0
            if (r1 == 0) goto L12
            java.util.List r1 = r1.getUnCompletedDownloadInfosWithMimeType(r5)
            goto L13
        L12:
            r1 = r2
        L13:
            r3 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r3 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r3)
            if (r3 == 0) goto L1e
            java.util.List r2 = r3.getUnCompletedDownloadInfosWithMimeType(r5)
        L1e:
            java.util.List r5 = r4.handleDownloadInfos(r1, r2, r0)
            return r5
    }

    public boolean isDownloadCacheSyncSuccess() {
            r2 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r1 == 0) goto Lb
            boolean r0 = r1.isDownloadCacheSyncSuccess()
        Lb:
            return r0
    }

    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = r3.getId()
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = r2.getDownloadHandler(r1)
            if (r1 != 0) goto Lf
            return r0
        Lf:
            boolean r3 = r1.isDownloadSuccessAndFileNotExist(r3)
            return r3
    }

    public boolean isDownloading(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            boolean r2 = r0.isDownloading(r2)
            return r2
    }

    public boolean isHttpServiceInit() {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isHttpServiceInit()
            return r0
    }

    public void pause(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.pause(r2)
            return
    }

    public void pauseAll() {
            r1 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto La
            r0.pauseAll()
        La:
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L14
            r0.pauseAll()
        L14:
            return
    }

    public void recordTaskProcessIndependent(int r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            boolean r0 = r0.booleanValue()
            r1.setDownloadIndependentProcessStatus(r2, r0)
            r2 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r2 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r2)
            if (r2 != 0) goto L14
            return
        L14:
            r2.startService()
            return
    }

    public void registerDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.registerDownloadCacheSyncListener(r1)
            return
    }

    public void registerDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r0 == 0) goto Ld
            r3.onConnected()
            return
        Ld:
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            boolean r0 = r0.isServiceAlive()
            if (r0 == 0) goto L1b
            r3.onConnected()
        L1b:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r0 = r2.processConnectedListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r1 = r2.processConnectedListeners     // Catch: java.lang.Throwable -> L2d
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L2b
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r1 = r2.processConnectedListeners     // Catch: java.lang.Throwable -> L2d
            r1.add(r3)     // Catch: java.lang.Throwable -> L2d
        L2b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return
        L2d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            throw r3
    }

    public void removeDownloadListener(int r7, com.ss.android.socialbase.downloader.depend.IDownloadListener r8, com.ss.android.socialbase.downloader.constants.ListenerType r9, boolean r10) {
            r6 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r6.getDownloadHandler(r7)
            if (r0 != 0) goto L7
            return
        L7:
            if (r8 != 0) goto Lb
            r1 = 0
            goto Lf
        Lb:
            int r1 = r8.hashCode()
        Lf:
            r2 = r1
            r1 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.removeDownloadListener(r1, r2, r3, r4, r5)
            return
    }

    public void restart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.restart(r2)
            return
    }

    public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto La
            r0.restartAllFailedDownloadTasks(r2)
        La:
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L14
            r0.restartAllFailedDownloadTasks(r2)
        L14:
            return
    }

    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto La
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
        La:
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L14
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
        L14:
            return
    }

    public void resume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.resume(r2)
            return
    }

    public boolean retryDelayStart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            boolean r2 = r0.retryDelayStart(r2)
            return r2
    }

    public synchronized void setDownloadIndependentProcessStatus(int r2, boolean r3) {
            r1 = this;
            monitor-enter(r1)
            android.util.SparseArray<java.lang.Boolean> r0 = r1.independentMap     // Catch: java.lang.Throwable -> Lf
            if (r3 == 0) goto L8
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lf
            goto La
        L8:
            java.lang.Boolean r3 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> Lf
        La:
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.setDownloadNotificationEventListener(r2, r3)
            return
    }

    public void setDownloadWithIndependentProcessStatus(int r3, boolean r4) {
            r2 = this;
            r2.setDownloadIndependentProcessStatus(r3, r4)
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.supportMultiProc()
            if (r0 == 0) goto L21
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r0 != 0) goto L21
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            boolean r1 = r1.isServiceAlive()
            if (r1 == 0) goto L21
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            r0.setDownloadWithIndependentProcessStatus(r3, r4)
        L21:
            boolean r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isDownloadInMultiProcess()
            if (r4 != 0) goto L54
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isDownloaderProcess()
            if (r4 != 0) goto L54
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            if (r4 != 0) goto L54
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.Throwable -> L50
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L50
            java.lang.Class<com.ss.android.socialbase.downloader.impls.DownloadHandleService> r1 = com.ss.android.socialbase.downloader.impls.DownloadHandleService.class
            r4.<init>(r0, r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = "com.ss.android.downloader.action.PROCESS_NOTIFY"
            r4.setAction(r0)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = "extra_download_id"
            r4.putExtra(r0, r3)     // Catch: java.lang.Throwable -> L50
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L50
            r3.startService(r4)     // Catch: java.lang.Throwable -> L50
            goto L54
        L50:
            r3 = move-exception
            r3.printStackTrace()
        L54:
            return
    }

    public void setLogLevel(int r2) {
            r1 = this;
            r0 = 0
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto La
            r0.setLogLevel(r2)
        La:
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L14
            r0.setLogLevel(r2)
        L14:
            return
    }

    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.getDownloadHandler(r2)
            if (r0 != 0) goto L7
            return
        L7:
            r0.setThrottleNetSpeed(r2, r3)
            return
    }

    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r6) {
            r5 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r5.getDownloadHandler(r6)
            if (r0 != 0) goto L2d
            if (r6 == 0) goto L2c
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r0 = r6.getMonitorDepend()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r6.getDownloadInfo()
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r4 = "tryDownload but getDownloadHandler failed"
            r2.<init>(r3, r4)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r6.getDownloadInfo()
            if (r3 == 0) goto L28
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r6.getDownloadInfo()
            int r6 = r6.getStatus()
            goto L29
        L28:
            r6 = 0
        L29:
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r0, r1, r2, r6)
        L2c:
            return
        L2d:
            boolean r1 = r6.isNeedDelayForCacheSync()
            if (r1 == 0) goto L40
            android.os.Handler r1 = r5.mainThreadHandler
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher$1 r2 = new com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher$1
            r2.<init>(r5, r0, r6)
            r3 = 500(0x1f4, double:2.47E-321)
            r1.postDelayed(r2, r3)
            goto L43
        L40:
            r0.tryDownload(r6)
        L43:
            return
    }

    public void unRegisterDownloadCacheSyncListener(com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.unRegisterDownloadCacheSyncListener(r1)
            return
    }

    public void unRegisterDownloaderProcessConnectedListener(com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r0 = r2.processConnectedListeners
            monitor-enter(r0)
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r1 = r2.processConnectedListeners     // Catch: java.lang.Throwable -> L15
            boolean r1 = r1.contains(r3)     // Catch: java.lang.Throwable -> L15
            if (r1 == 0) goto L13
            java.util.List<com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener> r1 = r2.processConnectedListeners     // Catch: java.lang.Throwable -> L15
            r1.remove(r3)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r3
    }
}
