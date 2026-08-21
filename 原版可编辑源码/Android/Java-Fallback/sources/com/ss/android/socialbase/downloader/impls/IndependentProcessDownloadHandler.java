package com.ss.android.socialbase.downloader.impls;

public class IndependentProcessDownloadHandler implements com.ss.android.socialbase.downloader.downloader.IDownloadProxy, com.ss.android.socialbase.downloader.downloader.IDownloadServiceConnectionListener {
    private static final java.lang.String TAG = null;
    private volatile com.ss.android.socialbase.downloader.downloader.IDownloadAidlService aidlService;
    private com.ss.android.socialbase.downloader.downloader.IDownloadProxy downloadProxy;
    private com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> downloadServiceHandler;


    static {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler> r0 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG = r0
            return
    }

    public IndependentProcessDownloadHandler() {
            r1 = this;
            r1.<init>()
            com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler r0 = new com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler
            r0.<init>()
            r1.downloadProxy = r0
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentDownloadServiceHandler()
            r1.downloadServiceHandler = r0
            r0.setServiceConnectionListener(r1)
            return
    }

    @Override
    public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.addDownloadChunk(r2)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.addDownloadChunk(r2)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void addDownloadListener(int r8, int r9, com.ss.android.socialbase.downloader.depend.IDownloadListener r10, com.ss.android.socialbase.downloader.constants.ListenerType r11, boolean r12) {
            r7 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r7.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = r7.aidlService     // Catch: android.os.RemoteException -> L1d
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: android.os.RemoteException -> L1d
            if (r11 != r0) goto Ld
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r4 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerToAidl(r10, r0)     // Catch: android.os.RemoteException -> L1d
            int r5 = r11.ordinal()     // Catch: android.os.RemoteException -> L1d
            r2 = r8
            r3 = r9
            r6 = r12
            r1.addDownloadListener(r2, r3, r4, r5, r6)     // Catch: android.os.RemoteException -> L1d
            goto L21
        L1d:
            r8 = move-exception
            r8.printStackTrace()
        L21:
            return
    }

    @Override
    public void addDownloadListener(int r9, int r10, com.ss.android.socialbase.downloader.depend.IDownloadListener r11, com.ss.android.socialbase.downloader.constants.ListenerType r12, boolean r13, boolean r14) {
            r8 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r8.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = r8.aidlService     // Catch: android.os.RemoteException -> L1e
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: android.os.RemoteException -> L1e
            if (r12 != r0) goto Ld
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r4 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerToAidl(r11, r0)     // Catch: android.os.RemoteException -> L1e
            int r5 = r12.ordinal()     // Catch: android.os.RemoteException -> L1e
            r2 = r9
            r3 = r10
            r6 = r13
            r7 = r14
            r1.addDownloadListener1(r2, r3, r4, r5, r6, r7)     // Catch: android.os.RemoteException -> L1e
            goto L22
        L1e:
            r9 = move-exception
            r9.printStackTrace()
        L22:
            return
    }

    @Override
    public void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessCallback r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L12
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Le
            com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertProcessCallbackToAidl(r2)     // Catch: android.os.RemoteException -> Le
            r0.addProcessCallback(r2)     // Catch: android.os.RemoteException -> Le
            goto L12
        Le:
            r2 = move-exception
            r2.printStackTrace()
        L12:
            return
    }

    @Override
    public boolean canResume(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService     // Catch: android.os.RemoteException -> Ld
            boolean r3 = r0.canResume(r3)     // Catch: android.os.RemoteException -> Ld
            return r3
        Ld:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    @Override
    public void cancel(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.cancel(r2, r3)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void clearData() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.clearData()
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.clearData()     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r0 = move-exception
            r0.printStackTrace()
        L14:
            return
    }

    @Override
    public void clearDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.clearDownloadData(r2, r3)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.clearDownloadData(r2, r3)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void dispatchProcessCallback(int r2, int r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto Le
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> La
            r0.dispatchProcessCallback(r2, r3)     // Catch: android.os.RemoteException -> La
            goto Le
        La:
            r2 = move-exception
            r2.printStackTrace()
        Le:
            return
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.forceDownloadIngoreRecommendSize(r2)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.forceDownloadIngoreRecommendSize(r2)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r0 = r0.getAllDownloadInfo()
            return r0
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r0 = r0.getAllDownloadInfo()     // Catch: android.os.RemoteException -> L12
            return r0
        L12:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    @Override
    public long getCurBytes(int r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService
            r1 = 0
            if (r0 != 0) goto L7
            return r1
        L7:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService     // Catch: android.os.RemoteException -> Le
            long r0 = r0.getCurBytes(r4)     // Catch: android.os.RemoteException -> Le
            return r0
        Le:
            r4 = move-exception
            r4.printStackTrace()
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r2 = r0.getDownloadChunk(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r2 = r0.getDownloadChunk(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider getDownloadFileUriProvider(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L13
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = r0.getDownloadFileUriProvider(r2)     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertFileProviderFromAidl(r2)     // Catch: android.os.RemoteException -> Lf
            return r2
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            r2 = 0
            return r2
    }

    @Override
    public int getDownloadId(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1, r2)
            return r1
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r0.getDownloadInfo(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = r0.getDownloadId(r1, r2)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r0.getDownloadInfo(r1)
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r2 = r0.getDownloadInfoList(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r2 = r0.getDownloadInfoList(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener getDownloadNotificationEventListener(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L13
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = r0.getDownloadNotificationEventListener(r2)     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadNotificationEventListenerFromAidl(r2)     // Catch: android.os.RemoteException -> Lf
            return r2
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            r2 = 0
            return r2
    }

    @Override
    public int getDownloadWithIndependentProcessStatus(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Ld
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            int r2 = r0.getDownloadWithIndependentProcessStatusInner(r2)
            return r2
        Ld:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L14
            int r2 = r0.getDownloadWithIndependentProcessStatus(r2)     // Catch: android.os.RemoteException -> L14
            return r2
        L14:
            r2 = move-exception
            r2.printStackTrace()
            r2 = -1
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto Lf
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            java.util.List r2 = r0.getDownloadingDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> Lb
            return r2
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r2 = r0.getFailedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public com.ss.android.socialbase.downloader.depend.INotificationClickCallback getNotificationClickCallback(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L13
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = r0.getNotificationClickCallback(r2)     // Catch: android.os.RemoteException -> Lf
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r2 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertNotificationClickCallbackFromAidl(r2)     // Catch: android.os.RemoteException -> Lf
            return r2
        Lf:
            r2 = move-exception
            r2.printStackTrace()
        L13:
            r2 = 0
            return r2
    }

    @Override
    public int getStatus(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService     // Catch: android.os.RemoteException -> Ld
            int r3 = r0.getStatus(r3)     // Catch: android.os.RemoteException -> Ld
            return r3
        Ld:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r2 = r0.getSuccessedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            java.util.List r2 = r0.getUnCompletedDownloadInfosWithMimeType(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            boolean r0 = r0.isDownloadCacheSyncSuccess()
            return r0
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            boolean r0 = r0.isDownloadCacheSyncSuccess()     // Catch: android.os.RemoteException -> L12
            return r0
        L12:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            boolean r2 = r0.isDownloadSuccessAndFileNotExist(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L11
            r0.isDownloadSuccessAndFileNotExist(r2)     // Catch: android.os.RemoteException -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            r2 = 0
            return r2
    }

    @Override
    public boolean isDownloading(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService     // Catch: android.os.RemoteException -> Ld
            boolean r3 = r0.isDownloading(r3)     // Catch: android.os.RemoteException -> Ld
            return r3
        Ld:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    @Override
    public boolean isHttpServiceInit() {
            r1 = this;
            boolean r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.isHttpServiceInit()
            return r0
    }

    @Override
    public boolean isServiceAlive() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public boolean isServiceForeground() {
            r3 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService
            r1 = 0
            if (r0 != 0) goto Ld
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.String r2 = "isServiceForeground, aidlService is null"
            com.ss.android.socialbase.downloader.logger.Logger.w(r0, r2)
            return r1
        Ld:
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.String r2 = "aidlService.isServiceForeground"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r2)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService     // Catch: android.os.RemoteException -> L1b
            boolean r0 = r0.isServiceForeground()     // Catch: android.os.RemoteException -> L1b
            return r0
        L1b:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    @Override
    public void onServiceConnection(android.os.IBinder r1) {
            r0 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.asInterface(r1)
            r0.aidlService = r1
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainProcess()
            if (r1 == 0) goto L14
            com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler$1 r1 = new com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler$1
            r1.<init>(r0)
            r0.addProcessCallback(r1)
        L14:
            return
    }

    @Override
    public void onServiceDisConnection() {
            r1 = this;
            r0 = 0
            r1.aidlService = r0
            return
    }

    @Override
    public void pause(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.pause(r2)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void pauseAll() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.pauseAll()     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    @Override
    public void removeAllDownloadChunk(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.removeAllDownloadChunk(r2)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.removeAllDownloadChunk(r2)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public boolean removeDownloadInfo(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            boolean r2 = r0.removeDownloadInfo(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            boolean r2 = r0.removeDownloadInfo(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public void removeDownloadListener(int r8, int r9, com.ss.android.socialbase.downloader.depend.IDownloadListener r10, com.ss.android.socialbase.downloader.constants.ListenerType r11, boolean r12) {
            r7 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r7.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = r7.aidlService     // Catch: android.os.RemoteException -> L1d
            com.ss.android.socialbase.downloader.constants.ListenerType r0 = com.ss.android.socialbase.downloader.constants.ListenerType.SUB     // Catch: android.os.RemoteException -> L1d
            if (r11 != r0) goto Ld
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r4 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertListenerToAidl(r10, r0)     // Catch: android.os.RemoteException -> L1d
            int r5 = r11.ordinal()     // Catch: android.os.RemoteException -> L1d
            r2 = r8
            r3 = r9
            r6 = r12
            r1.removeDownloadListener(r2, r3, r4, r5, r6)     // Catch: android.os.RemoteException -> L1d
            goto L21
        L1d:
            r8 = move-exception
            r8.printStackTrace()
        L21:
            return
    }

    @Override
    public boolean removeDownloadTaskData(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            boolean r2 = r0.removeDownloadTaskData(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            boolean r2 = r0.removeDownloadTaskData(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public void resetDownloadData(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.resetDownloadData(r2, r3)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.resetDownloadData(r2, r3)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void restart(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.restart(r2)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.restartAllFailedDownloadTasks(r2)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.restartAllFailedDownloadTasks(r2)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.restartAllPauseReserveOnWifiDownloadTasks(r2)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void resume(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.resume(r2)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public boolean retryDelayStart(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r2.aidlService     // Catch: android.os.RemoteException -> Ld
            boolean r3 = r0.retryDelayStart(r3)     // Catch: android.os.RemoteException -> Ld
            return r3
        Ld:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    @Override
    public void setDownloadNotificationEventListener(int r2, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 == 0) goto L12
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Le
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r3 = com.ss.android.socialbase.downloader.utils.IPCUtils.convertDownloadNotificationEventListenerToAidl(r3)     // Catch: android.os.RemoteException -> Le
            r0.setDownloadNotificationEventListener(r2, r3)     // Catch: android.os.RemoteException -> Le
            goto L12
        Le:
            r2 = move-exception
            r2.printStackTrace()
        L12:
            return
    }

    @Override
    public void setDownloadWithIndependentProcessStatus(int r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.setDownloadWithIndependentProcessStatus(r2, r3)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void setLogLevel(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r0 = r1.downloadServiceHandler
            if (r0 == 0) goto L7
            r0.setLogLevel(r2)
        L7:
            return
    }

    @Override
    public void setThrottleNetSpeed(int r2, long r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.setThrottleNetSpeed(r2, r3)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void startForeground(int r4, android.app.Notification r5) {
            r3 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService
            if (r0 != 0) goto Lc
            java.lang.String r4 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.String r5 = "startForeground, aidlService is null"
            com.ss.android.socialbase.downloader.logger.Logger.w(r4, r5)
            goto L2c
        Lc:
            java.lang.String r0 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "aidlService.startForeground, id = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r3.aidlService     // Catch: android.os.RemoteException -> L28
            r0.startForeground(r4, r5)     // Catch: android.os.RemoteException -> L28
            goto L2c
        L28:
            r4 = move-exception
            r4.printStackTrace()
        L2c:
            return
    }

    @Override
    public void startService() {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r0 = r1.downloadServiceHandler
            if (r0 == 0) goto L7
            r0.startService()
        L7:
            return
    }

    @Override
    public void stopForeground(boolean r2, boolean r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = r1.aidlService
            if (r2 != 0) goto Lc
            java.lang.String r2 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.String r3 = "stopForeground, aidlService is null"
            com.ss.android.socialbase.downloader.logger.Logger.w(r2, r3)
            goto L1d
        Lc:
            java.lang.String r2 = com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler.TAG
            java.lang.String r0 = "aidlService.stopForeground"
            com.ss.android.socialbase.downloader.logger.Logger.i(r2, r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = r1.aidlService     // Catch: android.os.RemoteException -> L19
            r2.stopForeground(r3)     // Catch: android.os.RemoteException -> L19
            goto L1d
        L19:
            r2 = move-exception
            r2.printStackTrace()
        L1d:
            return
    }

    @Override
    public void syncDownloadChunks(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto L5
            return
        L5:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> Lb
            r0.syncDownloadChunks(r2, r3)     // Catch: android.os.RemoteException -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            return
    }

    @Override
    public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            r0 = this;
            return
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int r2, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.syncDownloadInfoFromOtherCache(r2, r3)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.syncDownloadInfoFromOtherCache(r2, r3)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadTask r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r0 = r1.downloadServiceHandler
            if (r0 == 0) goto La
            r0.tryDownload(r2)
        La:
            return
    }

    @Override
    public void tryDownloadWithEngine(com.ss.android.socialbase.downloader.model.DownloadTask r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler<com.ss.android.socialbase.downloader.downloader.IndependentProcessDownloadService> r0 = r1.downloadServiceHandler
            if (r0 == 0) goto La
            r0.tryDownloadWithEngine(r2)
        La:
            return
    }

    @Override
    public void updateDownloadChunk(int r2, int r3, long r4) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.updateDownloadChunk(r2, r3, r4)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.updateDownloadChunk(r2, r3, r4)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }

    @Override
    public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto Lb
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            boolean r2 = r0.updateDownloadInfo(r2)
            return r2
        Lb:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L12
            boolean r2 = r0.updateDownloadInfo(r2)     // Catch: android.os.RemoteException -> L12
            return r2
        L12:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    @Override
    public void updateSubDownloadChunk(int r9, int r10, int r11, long r12) {
            r8 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r8.aidlService
            if (r0 != 0) goto Le
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = r8.downloadProxy
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r1.updateSubDownloadChunk(r2, r3, r4, r5)
            goto L1c
        Le:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = r8.aidlService     // Catch: android.os.RemoteException -> L18
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r2.updateSubDownloadChunk(r3, r4, r5, r6)     // Catch: android.os.RemoteException -> L18
            goto L1c
        L18:
            r9 = move-exception
            r9.printStackTrace()
        L1c:
            return
    }

    @Override
    public void updateSubDownloadChunkIndex(int r2, int r3, int r4, int r5) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService
            if (r0 != 0) goto La
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = r1.downloadProxy
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)
            goto L14
        La:
            com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = r1.aidlService     // Catch: android.os.RemoteException -> L10
            r0.updateSubDownloadChunkIndex(r2, r3, r4, r5)     // Catch: android.os.RemoteException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return
    }
}
