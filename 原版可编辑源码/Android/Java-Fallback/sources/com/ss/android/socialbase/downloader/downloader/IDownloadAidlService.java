package com.ss.android.socialbase.downloader.downloader;

public interface IDownloadAidlService extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.downloader.IDownloadAidlService {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void addDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void addDownloadListener1(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5, boolean r6) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean canResume(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void cancel(int r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void clearData() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void clearDownloadData(int r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void dispatchProcessCallback(int r1, int r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void forceDownloadIngoreRecommendSize(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public long getCurBytes(int r3) throws android.os.RemoteException {
                r2 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getDownloadFileUriProvider(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getDownloadId(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfoByUrlAndPath(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getDownloadWithIndependentProcessStatus(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getStatus(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean isDownloading(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean isHttpServiceInit() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean isServiceForeground() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void pause(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void pauseAll() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void removeAllDownloadChunk(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean removeDownloadInfo(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void removeDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean removeDownloadTaskData(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void resetDownloadData(int r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void restart(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void resume(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean retryDelayStart(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void setDownloadNotificationEventListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void setDownloadWithIndependentProcessStatus(int r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void setLogLevel(int r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void setThrottleNetSpeed(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void startForeground(int r1, android.app.Notification r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void stopForeground(boolean r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadAidlTask r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void updateDownloadChunk(int r1, int r2, long r3) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void updateSubDownloadChunk(int r1, int r2, int r3, long r4) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.downloader.IDownloadAidlService {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService";
        static final int TRANSACTION_addDownloadChunk = 38;
        static final int TRANSACTION_addDownloadListener = 26;
        static final int TRANSACTION_addDownloadListener1 = 27;
        static final int TRANSACTION_addProcessCallback = 49;
        static final int TRANSACTION_canResume = 4;
        static final int TRANSACTION_cancel = 3;
        static final int TRANSACTION_clearData = 46;
        static final int TRANSACTION_clearDownloadData = 22;
        static final int TRANSACTION_dispatchProcessCallback = 50;
        static final int TRANSACTION_forceDownloadIngoreRecommendSize = 24;
        static final int TRANSACTION_getAllDownloadInfo = 19;
        static final int TRANSACTION_getCurBytes = 8;
        static final int TRANSACTION_getDownloadChunk = 13;
        static final int TRANSACTION_getDownloadFileUriProvider = 54;
        static final int TRANSACTION_getDownloadId = 14;
        static final int TRANSACTION_getDownloadInfo = 11;
        static final int TRANSACTION_getDownloadInfoByUrlAndPath = 15;
        static final int TRANSACTION_getDownloadInfoList = 12;
        static final int TRANSACTION_getDownloadNotificationEventListener = 51;
        static final int TRANSACTION_getDownloadWithIndependentProcessStatus = 37;
        static final int TRANSACTION_getDownloadingDownloadInfosWithMimeType = 18;
        static final int TRANSACTION_getFailedDownloadInfosWithMimeType = 16;
        static final int TRANSACTION_getNotificationClickCallback = 52;
        static final int TRANSACTION_getStatus = 9;
        static final int TRANSACTION_getSuccessedDownloadInfosWithMimeType = 17;
        static final int TRANSACTION_getUnCompletedDownloadInfosWithMimeType = 32;
        static final int TRANSACTION_isDownloadCacheSyncSuccess = 35;
        static final int TRANSACTION_isDownloadSuccessAndFileNotExist = 28;
        static final int TRANSACTION_isDownloading = 10;
        static final int TRANSACTION_isHttpServiceInit = 31;
        static final int TRANSACTION_isServiceForeground = 55;
        static final int TRANSACTION_pause = 2;
        static final int TRANSACTION_pauseAll = 7;
        static final int TRANSACTION_removeAllDownloadChunk = 41;
        static final int TRANSACTION_removeDownloadInfo = 40;
        static final int TRANSACTION_removeDownloadListener = 25;
        static final int TRANSACTION_removeDownloadTaskData = 45;
        static final int TRANSACTION_resetDownloadData = 23;
        static final int TRANSACTION_restart = 6;
        static final int TRANSACTION_restartAllFailedDownloadTasks = 20;
        static final int TRANSACTION_restartAllPauseReserveOnWifiDownloadTasks = 21;
        static final int TRANSACTION_resume = 5;
        static final int TRANSACTION_retryDelayStart = 33;
        static final int TRANSACTION_setDownloadNotificationEventListener = 53;
        static final int TRANSACTION_setDownloadWithIndependentProcessStatus = 36;
        static final int TRANSACTION_setLogLevel = 34;
        static final int TRANSACTION_setThrottleNetSpeed = 56;
        static final int TRANSACTION_startForeground = 29;
        static final int TRANSACTION_stopForeground = 30;
        static final int TRANSACTION_syncDownloadChunks = 48;
        static final int TRANSACTION_syncDownloadInfoFromOtherCache = 47;
        static final int TRANSACTION_tryDownload = 1;
        static final int TRANSACTION_updateDownloadChunk = 42;
        static final int TRANSACTION_updateDownloadInfo = 39;
        static final int TRANSACTION_updateSubDownloadChunk = 43;
        static final int TRANSACTION_updateSubDownloadChunkIndex = 44;

        private static class Proxy implements com.ss.android.socialbase.downloader.downloader.IDownloadAidlService {
            public static com.ss.android.socialbase.downloader.downloader.IDownloadAidlService sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L43
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L43
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L43
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r4 = 38
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.addDownloadChunk(r6)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return
                L43:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void addDownloadListener(int r10, int r11, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r12, int r13, boolean r14) throws android.os.RemoteException {
                    r9 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r10)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r11)     // Catch: java.lang.Throwable -> L57
                    if (r12 == 0) goto L1a
                    android.os.IBinder r2 = r12.asBinder()     // Catch: java.lang.Throwable -> L57
                    goto L1b
                L1a:
                    r2 = 0
                L1b:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r13)     // Catch: java.lang.Throwable -> L57
                    r2 = 0
                    if (r14 == 0) goto L26
                    r3 = 1
                    goto L27
                L26:
                    r3 = r2
                L27:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L57
                    android.os.IBinder r3 = r9.mRemote     // Catch: java.lang.Throwable -> L57
                    r4 = 26
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L57
                    if (r2 != 0) goto L4d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    if (r2 == 0) goto L4d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r3 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    r4 = r10
                    r5 = r11
                    r6 = r12
                    r7 = r13
                    r8 = r14
                    r3.addDownloadListener(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L57
                    r1.recycle()
                    r0.recycle()
                    return
                L4d:
                    r1.readException()     // Catch: java.lang.Throwable -> L57
                    r1.recycle()
                    r0.recycle()
                    return
                L57:
                    r10 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r10
            }

            @Override
            public void addDownloadListener1(int r12, int r13, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r14, int r15, boolean r16, boolean r17) throws android.os.RemoteException {
                    r11 = this;
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    android.os.Parcel r2 = android.os.Parcel.obtain()
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r1.writeInterfaceToken(r0)     // Catch: java.lang.Throwable -> L68
                    r0 = r12
                    r1.writeInt(r12)     // Catch: java.lang.Throwable -> L68
                    r5 = r13
                    r1.writeInt(r13)     // Catch: java.lang.Throwable -> L68
                    if (r14 == 0) goto L1c
                    android.os.IBinder r3 = r14.asBinder()     // Catch: java.lang.Throwable -> L68
                    goto L1d
                L1c:
                    r3 = 0
                L1d:
                    r1.writeStrongBinder(r3)     // Catch: java.lang.Throwable -> L68
                    r7 = r15
                    r1.writeInt(r15)     // Catch: java.lang.Throwable -> L68
                    r3 = 1
                    r4 = 0
                    if (r16 == 0) goto L2a
                    r6 = r3
                    goto L2b
                L2a:
                    r6 = r4
                L2b:
                    r1.writeInt(r6)     // Catch: java.lang.Throwable -> L68
                    if (r17 == 0) goto L31
                    goto L32
                L31:
                    r3 = r4
                L32:
                    r1.writeInt(r3)     // Catch: java.lang.Throwable -> L68
                    r10 = r11
                    android.os.IBinder r3 = r10.mRemote     // Catch: java.lang.Throwable -> L66
                    r6 = 27
                    boolean r3 = r3.transact(r6, r1, r2, r4)     // Catch: java.lang.Throwable -> L66
                    if (r3 != 0) goto L5c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r3 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L66
                    if (r3 == 0) goto L5c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r3 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L66
                    r4 = r12
                    r5 = r13
                    r6 = r14
                    r7 = r15
                    r8 = r16
                    r9 = r17
                    r3.addDownloadListener1(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L66
                    r2.recycle()
                    r1.recycle()
                    return
                L5c:
                    r2.readException()     // Catch: java.lang.Throwable -> L66
                    r2.recycle()
                    r1.recycle()
                    return
                L66:
                    r0 = move-exception
                    goto L6a
                L68:
                    r0 = move-exception
                    r10 = r11
                L6a:
                    r2.recycle()
                    r1.recycle()
                    throw r0
            }

            @Override
            public void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L41
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 49
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.addProcessCallback(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public boolean canResume(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    boolean r6 = r2.canResume(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L39
                    r4 = 1
                L39:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void cancel(int r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r4 = 3
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    r2.cancel(r6, r7)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void clearData() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L36
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L36
                    r3 = 46
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L36
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    r2.clearData()     // Catch: java.lang.Throwable -> L36
                    r1.recycle()
                    r0.recycle()
                    return
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L36
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void clearDownloadData(int r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r4 = 22
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.clearDownloadData(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void dispatchProcessCallback(int r6, int r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 50
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    r2.dispatchProcessCallback(r6, r7)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void forceDownloadIngoreRecommendSize(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 24
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    r2.forceDownloadIngoreRecommendSize(r6)     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 19
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    java.util.List r2 = r2.getAllDownloadInfo()     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3d
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L3d
                    java.util.ArrayList r2 = r1.createTypedArrayList(r2)     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3d:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public long getCurBytes(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 8
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r2.getCurBytes(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    long r2 = r1.readLong()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 13
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getDownloadChunk(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r6 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getDownloadFileUriProvider(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 54
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r6 = r2.getDownloadFileUriProvider(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r6 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L42:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int getDownloadId(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 14
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    int r6 = r2.getDownloadId(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L33:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    r3 = 11
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.getDownloadInfo(r6)     // Catch: java.lang.Throwable -> L4a
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L4a
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L4a
                    if (r6 == 0) goto L42
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L4a
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r6     // Catch: java.lang.Throwable -> L4a
                    goto L43
                L42:
                    r6 = 0
                L43:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L4a:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfoByUrlAndPath(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 15
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.getDownloadInfoByUrlAndPath(r6, r7)     // Catch: java.lang.Throwable -> L4d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L33:
                    r1.readException()     // Catch: java.lang.Throwable -> L4d
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L4d
                    if (r6 == 0) goto L45
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L4d
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r6     // Catch: java.lang.Throwable -> L4d
                    goto L46
                L45:
                    r6 = 0
                L46:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L4d:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 12
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getDownloadInfoList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 51
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r6 = r2.getDownloadNotificationEventListener(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r6 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L42:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int getDownloadWithIndependentProcessStatus(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 37
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r2.getDownloadWithIndependentProcessStatus(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 18
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getDownloadingDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 16
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getFailedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    return r0
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 52
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r6 = r2.getNotificationClickCallback(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r6 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L42:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int getStatus(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r2.getStatus(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 17
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getSuccessedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 32
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    java.util.List r6 = r2.getUnCompletedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L40
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 35
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r2.isDownloadCacheSyncSuccess()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L37
                    r4 = 1
                L37:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4c
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4c
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4c
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4c
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4c
                    r5 = 28
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4c
                    if (r4 != 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    if (r4 == 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    boolean r7 = r2.isDownloadSuccessAndFileNotExist(r7)     // Catch: java.lang.Throwable -> L4c
                    r1.recycle()
                    r0.recycle()
                    return r7
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L4c
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4c
                    if (r7 == 0) goto L44
                    goto L45
                L44:
                    r2 = r3
                L45:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4c:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public boolean isDownloading(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.isDownloading(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean isHttpServiceInit() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 31
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r2.isHttpServiceInit()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L37
                    r4 = 1
                L37:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public boolean isServiceForeground() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 55
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r2.isServiceForeground()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L37
                    r4 = 1
                L37:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void pause(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.pause(r6)     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L2e:
                    r1.readException()     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void pauseAll() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L35
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L35
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L35
                    if (r2 != 0) goto L2b
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    if (r2 == 0) goto L2b
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    r2.pauseAll()     // Catch: java.lang.Throwable -> L35
                    r1.recycle()
                    r0.recycle()
                    return
                L2b:
                    r1.readException()     // Catch: java.lang.Throwable -> L35
                    r1.recycle()
                    r0.recycle()
                    return
                L35:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void removeAllDownloadChunk(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 41
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    r2.removeAllDownloadChunk(r6)     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean removeDownloadInfo(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 40
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.removeDownloadInfo(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void removeDownloadListener(int r10, int r11, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r12, int r13, boolean r14) throws android.os.RemoteException {
                    r9 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r10)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r11)     // Catch: java.lang.Throwable -> L57
                    if (r12 == 0) goto L1a
                    android.os.IBinder r2 = r12.asBinder()     // Catch: java.lang.Throwable -> L57
                    goto L1b
                L1a:
                    r2 = 0
                L1b:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r13)     // Catch: java.lang.Throwable -> L57
                    r2 = 0
                    if (r14 == 0) goto L26
                    r3 = 1
                    goto L27
                L26:
                    r3 = r2
                L27:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L57
                    android.os.IBinder r3 = r9.mRemote     // Catch: java.lang.Throwable -> L57
                    r4 = 25
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L57
                    if (r2 != 0) goto L4d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    if (r2 == 0) goto L4d
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r3 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    r4 = r10
                    r5 = r11
                    r6 = r12
                    r7 = r13
                    r8 = r14
                    r3.removeDownloadListener(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L57
                    r1.recycle()
                    r0.recycle()
                    return
                L4d:
                    r1.readException()     // Catch: java.lang.Throwable -> L57
                    r1.recycle()
                    r0.recycle()
                    return
                L57:
                    r10 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r10
            }

            @Override
            public boolean removeDownloadTaskData(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 45
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.removeDownloadTaskData(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void resetDownloadData(int r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r4 = 23
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.resetDownloadData(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void restart(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.restart(r6)     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L2e:
                    r1.readException()     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeStringList(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 20
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    r2.restartAllFailedDownloadTasks(r6)     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeStringList(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 21
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    r2.restartAllPauseReserveOnWifiDownloadTasks(r6)     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void resume(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.resume(r6)     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L2e:
                    r1.readException()     // Catch: java.lang.Throwable -> L38
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean retryDelayStart(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 33
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.retryDelayStart(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void setDownloadNotificationEventListener(int r6, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L44
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L44
                    if (r7 == 0) goto L17
                    android.os.IBinder r2 = r7.asBinder()     // Catch: java.lang.Throwable -> L44
                    goto L18
                L17:
                    r2 = 0
                L18:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L44
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L44
                    r3 = 53
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L44
                    if (r2 != 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L44
                    if (r2 == 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L44
                    r2.setDownloadNotificationEventListener(r6, r7)     // Catch: java.lang.Throwable -> L44
                    r1.recycle()
                    r0.recycle()
                    return
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L44
                    r1.recycle()
                    r0.recycle()
                    return
                L44:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void setDownloadWithIndependentProcessStatus(int r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r4 = 36
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.setDownloadWithIndependentProcessStatus(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void setLogLevel(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 34
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    r2.setLogLevel(r6)     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L39
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void setThrottleNetSpeed(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 56
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    r2.setThrottleNetSpeed(r6, r7)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void startForeground(int r6, android.app.Notification r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L3a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3a
                    r1 = 1
                    r2 = 0
                    if (r7 == 0) goto L17
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L3a
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L3a
                    goto L1a
                L17:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L3a
                L1a:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 29
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L3a
                    if (r1 != 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r1 == 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    r1.startForeground(r6, r7)     // Catch: java.lang.Throwable -> L3a
                    r0.recycle()
                    return
                L36:
                    r0.recycle()
                    return
                L3a:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public void stopForeground(boolean r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L32
                    r1 = 1
                    if (r6 == 0) goto Le
                    r2 = r1
                    goto Lf
                Le:
                    r2 = 0
                Lf:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L32
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L32
                    r3 = 30
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L32
                    if (r1 != 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L32
                    if (r1 == 0) goto L2e
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L32
                    r1.stopForeground(r6)     // Catch: java.lang.Throwable -> L32
                    r0.recycle()
                    return
                L2e:
                    r0.recycle()
                    return
                L32:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public void syncDownloadChunks(int r6, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeTypedList(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 48
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    r2.syncDownloadChunks(r6, r7)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void syncDownloadInfoFromOtherCache(int r6, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeTypedList(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 47
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    r2.syncDownloadInfoFromOtherCache(r6, r7)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void tryDownload(com.ss.android.socialbase.downloader.model.DownloadAidlTask r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L40
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L36
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    r2.tryDownload(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void updateDownloadChunk(int r6, int r7, long r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L3f
                    r0.writeLong(r8)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 42
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L35
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L35
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    r2.updateDownloadChunk(r6, r7, r8)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L3f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4c
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4c
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4c
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4c
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4c
                    r5 = 39
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4c
                    if (r4 != 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r4 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    if (r4 == 0) goto L3a
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    boolean r7 = r2.updateDownloadInfo(r7)     // Catch: java.lang.Throwable -> L4c
                    r1.recycle()
                    r0.recycle()
                    return r7
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L4c
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4c
                    if (r7 == 0) goto L44
                    goto L45
                L44:
                    r2 = r3
                L45:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4c:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public void updateSubDownloadChunk(int r10, int r11, int r12, long r13) throws android.os.RemoteException {
                    r9 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r10)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r11)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r12)     // Catch: java.lang.Throwable -> L46
                    r0.writeLong(r13)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r2 = r9.mRemote     // Catch: java.lang.Throwable -> L46
                    r3 = 43
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r3 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    r4 = r10
                    r5 = r11
                    r6 = r12
                    r7 = r13
                    r3.updateSubDownloadChunk(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r10 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r10
            }

            @Override
            public void updateSubDownloadChunkIndex(int r6, int r7, int r8, int r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r8)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r9)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 44
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r2 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.updateSubDownloadChunkIndex(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return
                L42:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.downloader.IDownloadAidlService asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.downloader.IDownloadAidlService
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = (com.ss.android.socialbase.downloader.downloader.IDownloadAidlService) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.downloader.IDownloadAidlService$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.downloader.IDownloadAidlService$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.downloader.IDownloadAidlService getDefaultImpl() {
                com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r1) {
                com.ss.android.socialbase.downloader.downloader.IDownloadAidlService r0 = com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.downloader.IDownloadAidlService.Stub.Proxy.sDefaultImpl = r1
                r1 = 1
                return r1
            La:
                r1 = 0
                return r1
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r13, android.os.Parcel r14, android.os.Parcel r15, int r16) throws android.os.RemoteException {
                r12 = this;
                r7 = r12
                r0 = r13
                r1 = r14
                r8 = r15
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r9 = 1
                java.lang.String r3 = "com.ss.android.socialbase.downloader.downloader.IDownloadAidlService"
                if (r0 == r2) goto L49b
                r2 = 0
                r4 = 0
                switch(r0) {
                    case 1: goto L489;
                    case 2: goto L47b;
                    case 3: goto L466;
                    case 4: goto L454;
                    case 5: goto L446;
                    case 6: goto L438;
                    case 7: goto L42e;
                    case 8: goto L41c;
                    case 9: goto L40a;
                    case 10: goto L3f8;
                    case 11: goto L3dd;
                    case 12: goto L3cb;
                    case 13: goto L3b9;
                    case 14: goto L3a3;
                    case 15: goto L384;
                    case 16: goto L372;
                    case 17: goto L360;
                    case 18: goto L34e;
                    case 19: goto L340;
                    case 20: goto L332;
                    case 21: goto L324;
                    case 22: goto L30f;
                    case 23: goto L2fa;
                    case 24: goto L2ec;
                    case 25: goto L2bf;
                    case 26: goto L292;
                    case 27: goto L25b;
                    case 28: goto L23e;
                    case 29: goto L224;
                    case 30: goto L216;
                    case 31: goto L208;
                    case 32: goto L1f6;
                    case 33: goto L1e4;
                    case 34: goto L1d6;
                    case 35: goto L1c8;
                    case 36: goto L1b3;
                    case 37: goto L1a1;
                    case 38: goto L188;
                    case 39: goto L16b;
                    case 40: goto L159;
                    case 41: goto L14b;
                    case 42: goto L135;
                    case 43: goto L116;
                    case 44: goto Lfc;
                    case 45: goto Lea;
                    case 46: goto Le0;
                    case 47: goto Lcc;
                    case 48: goto Lb8;
                    case 49: goto La6;
                    case 50: goto L94;
                    case 51: goto L7c;
                    case 52: goto L64;
                    case 53: goto L4e;
                    case 54: goto L36;
                    case 55: goto L28;
                    case 56: goto L16;
                    default: goto L11;
                }
            L11:
                boolean r0 = super.onTransact(r13, r14, r15, r16)
                return r0
            L16:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                long r1 = r14.readLong()
                r12.setThrottleNetSpeed(r0, r1)
                r15.writeNoException()
                return r9
            L28:
                r14.enforceInterface(r3)
                boolean r0 = r12.isServiceForeground()
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L36:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r0 = r12.getDownloadFileUriProvider(r0)
                r15.writeNoException()
                if (r0 == 0) goto L4a
                android.os.IBinder r2 = r0.asBinder()
            L4a:
                r15.writeStrongBinder(r2)
                return r9
            L4e:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                android.os.IBinder r1 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r1 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.asInterface(r1)
                r12.setDownloadNotificationEventListener(r0, r1)
                r15.writeNoException()
                return r9
            L64:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r0 = r12.getNotificationClickCallback(r0)
                r15.writeNoException()
                if (r0 == 0) goto L78
                android.os.IBinder r2 = r0.asBinder()
            L78:
                r15.writeStrongBinder(r2)
                return r9
            L7c:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r0 = r12.getDownloadNotificationEventListener(r0)
                r15.writeNoException()
                if (r0 == 0) goto L90
                android.os.IBinder r2 = r0.asBinder()
            L90:
                r15.writeStrongBinder(r2)
                return r9
            L94:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r1 = r14.readInt()
                r12.dispatchProcessCallback(r0, r1)
                r15.writeNoException()
                return r9
            La6:
                r14.enforceInterface(r3)
                android.os.IBinder r0 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r0 = com.ss.android.socialbase.downloader.depend.ProcessAidlCallback.Stub.asInterface(r0)
                r12.addProcessCallback(r0)
                r15.writeNoException()
                return r9
            Lb8:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r2 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.util.ArrayList r1 = r14.createTypedArrayList(r2)
                r12.syncDownloadChunks(r0, r1)
                r15.writeNoException()
                return r9
            Lcc:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r2 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.util.ArrayList r1 = r14.createTypedArrayList(r2)
                r12.syncDownloadInfoFromOtherCache(r0, r1)
                r15.writeNoException()
                return r9
            Le0:
                r14.enforceInterface(r3)
                r12.clearData()
                r15.writeNoException()
                return r9
            Lea:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                boolean r0 = r12.removeDownloadTaskData(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            Lfc:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r2 = r14.readInt()
                int r3 = r14.readInt()
                int r1 = r14.readInt()
                r12.updateSubDownloadChunkIndex(r0, r2, r3, r1)
                r15.writeNoException()
                return r9
            L116:
                r14.enforceInterface(r3)
                int r2 = r14.readInt()
                int r3 = r14.readInt()
                int r4 = r14.readInt()
                long r5 = r14.readLong()
                r0 = r12
                r1 = r2
                r2 = r3
                r3 = r4
                r4 = r5
                r0.updateSubDownloadChunk(r1, r2, r3, r4)
                r15.writeNoException()
                return r9
            L135:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r2 = r14.readInt()
                long r3 = r14.readLong()
                r12.updateDownloadChunk(r0, r2, r3)
                r15.writeNoException()
                return r9
            L14b:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.removeAllDownloadChunk(r0)
                r15.writeNoException()
                return r9
            L159:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                boolean r0 = r12.removeDownloadInfo(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L16b:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                if (r0 == 0) goto L17d
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r0 = r0.createFromParcel(r14)
                r2 = r0
                com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2
            L17d:
                boolean r0 = r12.updateDownloadInfo(r2)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L188:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                if (r0 == 0) goto L19a
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r0 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.lang.Object r0 = r0.createFromParcel(r14)
                r2 = r0
                com.ss.android.socialbase.downloader.model.DownloadChunk r2 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r2
            L19a:
                r12.addDownloadChunk(r2)
                r15.writeNoException()
                return r9
            L1a1:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r0 = r12.getDownloadWithIndependentProcessStatus(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L1b3:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r1 = r14.readInt()
                if (r1 == 0) goto L1c1
                r4 = r9
            L1c1:
                r12.setDownloadWithIndependentProcessStatus(r0, r4)
                r15.writeNoException()
                return r9
            L1c8:
                r14.enforceInterface(r3)
                boolean r0 = r12.isDownloadCacheSyncSuccess()
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L1d6:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.setLogLevel(r0)
                r15.writeNoException()
                return r9
            L1e4:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                boolean r0 = r12.retryDelayStart(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L1f6:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.util.List r0 = r12.getUnCompletedDownloadInfosWithMimeType(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L208:
                r14.enforceInterface(r3)
                boolean r0 = r12.isHttpServiceInit()
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L216:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                if (r0 == 0) goto L220
                r4 = r9
            L220:
                r12.stopForeground(r4)
                return r9
            L224:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r3 = r14.readInt()
                if (r3 == 0) goto L23a
                android.os.Parcelable$Creator r2 = android.app.Notification.CREATOR
                java.lang.Object r1 = r2.createFromParcel(r14)
                r2 = r1
                android.app.Notification r2 = (android.app.Notification) r2
            L23a:
                r12.startForeground(r0, r2)
                return r9
            L23e:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                if (r0 == 0) goto L250
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r0 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r0 = r0.createFromParcel(r14)
                r2 = r0
                com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2
            L250:
                boolean r0 = r12.isDownloadSuccessAndFileNotExist(r2)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L25b:
                r14.enforceInterface(r3)
                int r2 = r14.readInt()
                int r3 = r14.readInt()
                android.os.IBinder r0 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r5 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.asInterface(r0)
                int r6 = r14.readInt()
                int r0 = r14.readInt()
                if (r0 == 0) goto L27a
                r10 = r9
                goto L27b
            L27a:
                r10 = r4
            L27b:
                int r0 = r14.readInt()
                if (r0 == 0) goto L283
                r11 = r9
                goto L284
            L283:
                r11 = r4
            L284:
                r0 = r12
                r1 = r2
                r2 = r3
                r3 = r5
                r4 = r6
                r5 = r10
                r6 = r11
                r0.addDownloadListener1(r1, r2, r3, r4, r5, r6)
                r15.writeNoException()
                return r9
            L292:
                r14.enforceInterface(r3)
                int r2 = r14.readInt()
                int r3 = r14.readInt()
                android.os.IBinder r0 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r5 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.asInterface(r0)
                int r6 = r14.readInt()
                int r0 = r14.readInt()
                if (r0 == 0) goto L2b1
                r10 = r9
                goto L2b2
            L2b1:
                r10 = r4
            L2b2:
                r0 = r12
                r1 = r2
                r2 = r3
                r3 = r5
                r4 = r6
                r5 = r10
                r0.addDownloadListener(r1, r2, r3, r4, r5)
                r15.writeNoException()
                return r9
            L2bf:
                r14.enforceInterface(r3)
                int r2 = r14.readInt()
                int r3 = r14.readInt()
                android.os.IBinder r0 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r5 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.asInterface(r0)
                int r6 = r14.readInt()
                int r0 = r14.readInt()
                if (r0 == 0) goto L2de
                r10 = r9
                goto L2df
            L2de:
                r10 = r4
            L2df:
                r0 = r12
                r1 = r2
                r2 = r3
                r3 = r5
                r4 = r6
                r5 = r10
                r0.removeDownloadListener(r1, r2, r3, r4, r5)
                r15.writeNoException()
                return r9
            L2ec:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.forceDownloadIngoreRecommendSize(r0)
                r15.writeNoException()
                return r9
            L2fa:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r1 = r14.readInt()
                if (r1 == 0) goto L308
                r4 = r9
            L308:
                r12.resetDownloadData(r0, r4)
                r15.writeNoException()
                return r9
            L30f:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r1 = r14.readInt()
                if (r1 == 0) goto L31d
                r4 = r9
            L31d:
                r12.clearDownloadData(r0, r4)
                r15.writeNoException()
                return r9
            L324:
                r14.enforceInterface(r3)
                java.util.ArrayList r0 = r14.createStringArrayList()
                r12.restartAllPauseReserveOnWifiDownloadTasks(r0)
                r15.writeNoException()
                return r9
            L332:
                r14.enforceInterface(r3)
                java.util.ArrayList r0 = r14.createStringArrayList()
                r12.restartAllFailedDownloadTasks(r0)
                r15.writeNoException()
                return r9
            L340:
                r14.enforceInterface(r3)
                java.util.List r0 = r12.getAllDownloadInfo()
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L34e:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.util.List r0 = r12.getDownloadingDownloadInfosWithMimeType(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L360:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.util.List r0 = r12.getSuccessedDownloadInfosWithMimeType(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L372:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.util.List r0 = r12.getFailedDownloadInfosWithMimeType(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L384:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.lang.String r1 = r14.readString()
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r12.getDownloadInfoByUrlAndPath(r0, r1)
                r15.writeNoException()
                if (r0 == 0) goto L39f
                r15.writeInt(r9)
                r0.writeToParcel(r15, r9)
                goto L3a2
            L39f:
                r15.writeInt(r4)
            L3a2:
                return r9
            L3a3:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.lang.String r1 = r14.readString()
                int r0 = r12.getDownloadId(r0, r1)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L3b9:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                java.util.List r0 = r12.getDownloadChunk(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L3cb:
                r14.enforceInterface(r3)
                java.lang.String r0 = r14.readString()
                java.util.List r0 = r12.getDownloadInfoList(r0)
                r15.writeNoException()
                r15.writeTypedList(r0)
                return r9
            L3dd:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r12.getDownloadInfo(r0)
                r15.writeNoException()
                if (r0 == 0) goto L3f4
                r15.writeInt(r9)
                r0.writeToParcel(r15, r9)
                goto L3f7
            L3f4:
                r15.writeInt(r4)
            L3f7:
                return r9
            L3f8:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                boolean r0 = r12.isDownloading(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L40a:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r0 = r12.getStatus(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L41c:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                long r0 = r12.getCurBytes(r0)
                r15.writeNoException()
                r15.writeLong(r0)
                return r9
            L42e:
                r14.enforceInterface(r3)
                r12.pauseAll()
                r15.writeNoException()
                return r9
            L438:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.restart(r0)
                r15.writeNoException()
                return r9
            L446:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.resume(r0)
                r15.writeNoException()
                return r9
            L454:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                boolean r0 = r12.canResume(r0)
                r15.writeNoException()
                r15.writeInt(r0)
                return r9
            L466:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                int r1 = r14.readInt()
                if (r1 == 0) goto L474
                r4 = r9
            L474:
                r12.cancel(r0, r4)
                r15.writeNoException()
                return r9
            L47b:
                r14.enforceInterface(r3)
                int r0 = r14.readInt()
                r12.pause(r0)
                r15.writeNoException()
                return r9
            L489:
                r14.enforceInterface(r3)
                android.os.IBinder r0 = r14.readStrongBinder()
                com.ss.android.socialbase.downloader.model.DownloadAidlTask r0 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.asInterface(r0)
                r12.tryDownload(r0)
                r15.writeNoException()
                return r9
            L49b:
                r15.writeString(r3)
                return r9
        }
    }

    void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException;

    void addDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5) throws android.os.RemoteException;

    void addDownloadListener1(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5, boolean r6) throws android.os.RemoteException;

    void addProcessCallback(com.ss.android.socialbase.downloader.depend.ProcessAidlCallback r1) throws android.os.RemoteException;

    boolean canResume(int r1) throws android.os.RemoteException;

    void cancel(int r1, boolean r2) throws android.os.RemoteException;

    void clearData() throws android.os.RemoteException;

    void clearDownloadData(int r1, boolean r2) throws android.os.RemoteException;

    void dispatchProcessCallback(int r1, int r2) throws android.os.RemoteException;

    void forceDownloadIngoreRecommendSize(int r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException;

    long getCurBytes(int r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getDownloadFileUriProvider(int r1) throws android.os.RemoteException;

    int getDownloadId(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfoByUrlAndPath(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener(int r1) throws android.os.RemoteException;

    int getDownloadWithIndependentProcessStatus(int r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadingDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback(int r1) throws android.os.RemoteException;

    int getStatus(int r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException;

    boolean isDownloadSuccessAndFileNotExist(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    boolean isDownloading(int r1) throws android.os.RemoteException;

    boolean isHttpServiceInit() throws android.os.RemoteException;

    boolean isServiceForeground() throws android.os.RemoteException;

    void pause(int r1) throws android.os.RemoteException;

    void pauseAll() throws android.os.RemoteException;

    void removeAllDownloadChunk(int r1) throws android.os.RemoteException;

    boolean removeDownloadInfo(int r1) throws android.os.RemoteException;

    void removeDownloadListener(int r1, int r2, com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r3, int r4, boolean r5) throws android.os.RemoteException;

    boolean removeDownloadTaskData(int r1) throws android.os.RemoteException;

    void resetDownloadData(int r1, boolean r2) throws android.os.RemoteException;

    void restart(int r1) throws android.os.RemoteException;

    void restartAllFailedDownloadTasks(java.util.List<java.lang.String> r1) throws android.os.RemoteException;

    void restartAllPauseReserveOnWifiDownloadTasks(java.util.List<java.lang.String> r1) throws android.os.RemoteException;

    void resume(int r1) throws android.os.RemoteException;

    boolean retryDelayStart(int r1) throws android.os.RemoteException;

    void setDownloadNotificationEventListener(int r1, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2) throws android.os.RemoteException;

    void setDownloadWithIndependentProcessStatus(int r1, boolean r2) throws android.os.RemoteException;

    void setLogLevel(int r1) throws android.os.RemoteException;

    void setThrottleNetSpeed(int r1, long r2) throws android.os.RemoteException;

    void startForeground(int r1, android.app.Notification r2) throws android.os.RemoteException;

    void stopForeground(boolean r1) throws android.os.RemoteException;

    void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException;

    void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException;

    void tryDownload(com.ss.android.socialbase.downloader.model.DownloadAidlTask r1) throws android.os.RemoteException;

    void updateDownloadChunk(int r1, int r2, long r3) throws android.os.RemoteException;

    boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void updateSubDownloadChunk(int r1, int r2, int r3, long r4) throws android.os.RemoteException;

    void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4) throws android.os.RemoteException;
}
