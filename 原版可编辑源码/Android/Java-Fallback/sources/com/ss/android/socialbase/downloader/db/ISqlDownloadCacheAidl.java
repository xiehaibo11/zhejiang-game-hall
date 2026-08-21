package com.ss.android.socialbase.downloader.db;

public interface ISqlDownloadCacheAidl extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r1, long r2, java.lang.String r4, java.lang.String r5) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r1, long r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException {
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
        public boolean cacheExist(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void clearData() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean ensureDownloadCacheSyncSuccess() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException {
                r1 = this;
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
        public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1) throws android.os.RemoteException {
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
        public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException {
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
        public void init() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
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
        public boolean removeDownloadTaskData(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r1, int r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
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

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl";
        static final int TRANSACTION_OnDownloadTaskCancel = 28;
        static final int TRANSACTION_OnDownloadTaskCompleted = 26;
        static final int TRANSACTION_OnDownloadTaskConnected = 22;
        static final int TRANSACTION_OnDownloadTaskError = 24;
        static final int TRANSACTION_OnDownloadTaskIntercept = 30;
        static final int TRANSACTION_OnDownloadTaskPause = 27;
        static final int TRANSACTION_OnDownloadTaskPrepare = 29;
        static final int TRANSACTION_OnDownloadTaskProgress = 23;
        static final int TRANSACTION_OnDownloadTaskRetry = 25;
        static final int TRANSACTION_addDownloadChunk = 11;
        static final int TRANSACTION_addSubDownloadChunk = 12;
        static final int TRANSACTION_cacheExist = 2;
        static final int TRANSACTION_clearData = 20;
        static final int TRANSACTION_ensureDownloadCacheSyncSuccess = 32;
        static final int TRANSACTION_getAllDownloadInfo = 8;
        static final int TRANSACTION_getDownloadChunk = 9;
        static final int TRANSACTION_getDownloadInfo = 3;
        static final int TRANSACTION_getDownloadInfoList = 4;
        static final int TRANSACTION_getFailedDownloadInfosWithMimeType = 5;
        static final int TRANSACTION_getSuccessedDownloadInfosWithMimeType = 6;
        static final int TRANSACTION_getUnCompletedDownloadInfosWithMimeType = 7;
        static final int TRANSACTION_init = 1;
        static final int TRANSACTION_isDownloadCacheSyncSuccess = 31;
        static final int TRANSACTION_onDownloadTaskStart = 21;
        static final int TRANSACTION_removeAllDownloadChunk = 10;
        static final int TRANSACTION_removeDownloadInfo = 18;
        static final int TRANSACTION_removeDownloadTaskData = 19;
        static final int TRANSACTION_setInitCallback = 36;
        static final int TRANSACTION_syncDownloadChunks = 34;
        static final int TRANSACTION_syncDownloadInfo = 33;
        static final int TRANSACTION_syncDownloadInfoFromOtherCache = 35;
        static final int TRANSACTION_updateChunkCount = 16;
        static final int TRANSACTION_updateDownloadChunk = 13;
        static final int TRANSACTION_updateDownloadInfo = 17;
        static final int TRANSACTION_updateSubDownloadChunk = 14;
        static final int TRANSACTION_updateSubDownloadChunkIndex = 15;

        private static class Proxy implements com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl {
            public static com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 28
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskCancel(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 26
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskCompleted(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r10, long r11, java.lang.String r13, java.lang.String r14) throws android.os.RemoteException {
                    r9 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L57
                    r0.writeInt(r10)     // Catch: java.lang.Throwable -> L57
                    r0.writeLong(r11)     // Catch: java.lang.Throwable -> L57
                    r0.writeString(r13)     // Catch: java.lang.Throwable -> L57
                    r0.writeString(r14)     // Catch: java.lang.Throwable -> L57
                    android.os.IBinder r2 = r9.mRemote     // Catch: java.lang.Throwable -> L57
                    r3 = 22
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L57
                    if (r2 != 0) goto L3d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    if (r2 == 0) goto L3d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r3 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L57
                    r4 = r10
                    r5 = r11
                    r7 = r13
                    r8 = r14
                    com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r3.OnDownloadTaskConnected(r4, r5, r7, r8)     // Catch: java.lang.Throwable -> L57
                    r1.recycle()
                    r0.recycle()
                    return r10
                L3d:
                    r1.readException()     // Catch: java.lang.Throwable -> L57
                    int r10 = r1.readInt()     // Catch: java.lang.Throwable -> L57
                    if (r10 == 0) goto L4f
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r10 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L57
                    java.lang.Object r10 = r10.createFromParcel(r1)     // Catch: java.lang.Throwable -> L57
                    com.ss.android.socialbase.downloader.model.DownloadInfo r10 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r10     // Catch: java.lang.Throwable -> L57
                    goto L50
                L4f:
                    r10 = 0
                L50:
                    r1.recycle()
                    r0.recycle()
                    return r10
                L57:
                    r10 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r10
            }

            @Override
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 24
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskError(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    r3 = 30
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskIntercept(r6)     // Catch: java.lang.Throwable -> L4a
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 27
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskPause(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    r3 = 29
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskPrepare(r6)     // Catch: java.lang.Throwable -> L4a
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r6, long r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeLong(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 23
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskProgress(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    r3 = 25
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.OnDownloadTaskRetry(r6)     // Catch: java.lang.Throwable -> L4a
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
            public void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
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
                    r4 = 11
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
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
            public void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
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
                    r4 = 12
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.addSubDownloadChunk(r6)     // Catch: java.lang.Throwable -> L43
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
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public boolean cacheExist(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    boolean r6 = r2.cacheExist(r6)     // Catch: java.lang.Throwable -> L40
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
            public void clearData() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L36
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L36
                    r3 = 20
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L36
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
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
            public boolean ensureDownloadCacheSyncSuccess() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 32
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r2.ensureDownloadCacheSyncSuccess()     // Catch: java.lang.Throwable -> L3e
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
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 8
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
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
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L49
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L49
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L49
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L49
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.getDownloadInfo(r6)     // Catch: java.lang.Throwable -> L49
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L49
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L49
                    if (r6 == 0) goto L41
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L49
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L49
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r6     // Catch: java.lang.Throwable -> L49
                    goto L42
                L41:
                    r6 = 0
                L42:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L49:
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    java.util.List r6 = r2.getDownloadInfoList(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L3f
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3f:
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    java.util.List r6 = r2.getFailedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L3f
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    return r0
            }

            @Override
            public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    java.util.List r6 = r2.getSuccessedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L3f
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3f:
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    java.util.List r6 = r2.getUnCompletedDownloadInfosWithMimeType(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r6 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L3f
                    java.util.ArrayList r6 = r1.createTypedArrayList(r6)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void init() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L35
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L35
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L35
                    if (r2 != 0) goto L2b
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    if (r2 == 0) goto L2b
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    r2.init()     // Catch: java.lang.Throwable -> L35
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
            public boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 31
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    r3 = 21
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.onDownloadTaskStart(r6)     // Catch: java.lang.Throwable -> L4a
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
            public void removeAllDownloadChunk(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L39
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L39
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L39
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L39
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L39
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 18
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
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
            public boolean removeDownloadTaskData(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 19
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
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
            public void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L41
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 36
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.setInitCallback(r6)     // Catch: java.lang.Throwable -> L41
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
            public void syncDownloadChunks(int r6, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeTypedList(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 34
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
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
            public void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
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
                    r4 = 33
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.syncDownloadInfo(r6)     // Catch: java.lang.Throwable -> L43
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
            public void syncDownloadInfoFromOtherCache(int r6, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeTypedList(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 35
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
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
            public com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r6, int r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4d
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L4d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4d
                    r3 = 16
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4d
                    if (r2 != 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    if (r2 == 0) goto L33
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4d
                    com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r2.updateChunkCount(r6, r7)     // Catch: java.lang.Throwable -> L4d
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
            public void updateDownloadChunk(int r6, int r7, long r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L3f
                    r0.writeLong(r8)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 13
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L35
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L35
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
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
                    r5 = 17
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4c
                    if (r4 != 0) goto L3a
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r4 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    if (r4 == 0) goto L3a
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r10)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r11)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r12)     // Catch: java.lang.Throwable -> L46
                    r0.writeLong(r13)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r2 = r9.mRemote     // Catch: java.lang.Throwable -> L46
                    r3 = 14
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r3 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
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
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r8)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r9)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 15
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r2 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
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
                java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = (com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl getDefaultImpl() {
                com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r1) {
                com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl r0 = com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl.Stub.Proxy.sDefaultImpl = r1
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
        public boolean onTransact(int r11, android.os.Parcel r12, android.os.Parcel r13, int r14) throws android.os.RemoteException {
                r10 = this;
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r1 = 1
                java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlDownloadCacheAidl"
                if (r11 == r0) goto L344
                r0 = 0
                r3 = 0
                switch(r11) {
                    case 1: goto L33a;
                    case 2: goto L328;
                    case 3: goto L30d;
                    case 4: goto L2fb;
                    case 5: goto L2e9;
                    case 6: goto L2d7;
                    case 7: goto L2c5;
                    case 8: goto L2b7;
                    case 9: goto L2a5;
                    case 10: goto L297;
                    case 11: goto L27e;
                    case 12: goto L265;
                    case 13: goto L24f;
                    case 14: goto L234;
                    case 15: goto L21a;
                    case 16: goto L1fb;
                    case 17: goto L1de;
                    case 18: goto L1cc;
                    case 19: goto L1ba;
                    case 20: goto L1b0;
                    case 21: goto L195;
                    case 22: goto L16d;
                    case 23: goto L14e;
                    case 24: goto L12f;
                    case 25: goto L114;
                    case 26: goto Lf5;
                    case 27: goto Ld6;
                    case 28: goto Lb7;
                    case 29: goto L9c;
                    case 30: goto L81;
                    case 31: goto L73;
                    case 32: goto L65;
                    case 33: goto L4c;
                    case 34: goto L38;
                    case 35: goto L24;
                    case 36: goto L12;
                    default: goto Ld;
                }
            Ld:
                boolean r11 = super.onTransact(r11, r12, r13, r14)
                return r11
            L12:
                r12.enforceInterface(r2)
                android.os.IBinder r11 = r12.readStrongBinder()
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r11 = com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.asInterface(r11)
                r10.setInitCallback(r11)
                r13.writeNoException()
                return r1
            L24:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r14 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.util.ArrayList r12 = r12.createTypedArrayList(r14)
                r10.syncDownloadInfoFromOtherCache(r11, r12)
                r13.writeNoException()
                return r1
            L38:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r14 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.util.ArrayList r12 = r12.createTypedArrayList(r14)
                r10.syncDownloadChunks(r11, r12)
                r13.writeNoException()
                return r1
            L4c:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                if (r11 == 0) goto L5e
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r11 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r11 = r11.createFromParcel(r12)
                r0 = r11
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L5e:
                r10.syncDownloadInfo(r0)
                r13.writeNoException()
                return r1
            L65:
                r12.enforceInterface(r2)
                boolean r11 = r10.ensureDownloadCacheSyncSuccess()
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L73:
                r12.enforceInterface(r2)
                boolean r11 = r10.isDownloadCacheSyncSuccess()
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L81:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskIntercept(r11)
                r13.writeNoException()
                if (r11 == 0) goto L98
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L9b
            L98:
                r13.writeInt(r3)
            L9b:
                return r1
            L9c:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskPrepare(r11)
                r13.writeNoException()
                if (r11 == 0) goto Lb3
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto Lb6
            Lb3:
                r13.writeInt(r3)
            Lb6:
                return r1
            Lb7:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                long r4 = r12.readLong()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskCancel(r11, r4)
                r13.writeNoException()
                if (r11 == 0) goto Ld2
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto Ld5
            Ld2:
                r13.writeInt(r3)
            Ld5:
                return r1
            Ld6:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                long r4 = r12.readLong()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskPause(r11, r4)
                r13.writeNoException()
                if (r11 == 0) goto Lf1
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto Lf4
            Lf1:
                r13.writeInt(r3)
            Lf4:
                return r1
            Lf5:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                long r4 = r12.readLong()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskCompleted(r11, r4)
                r13.writeNoException()
                if (r11 == 0) goto L110
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L113
            L110:
                r13.writeInt(r3)
            L113:
                return r1
            L114:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskRetry(r11)
                r13.writeNoException()
                if (r11 == 0) goto L12b
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L12e
            L12b:
                r13.writeInt(r3)
            L12e:
                return r1
            L12f:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                long r4 = r12.readLong()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskError(r11, r4)
                r13.writeNoException()
                if (r11 == 0) goto L14a
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L14d
            L14a:
                r13.writeInt(r3)
            L14d:
                return r1
            L14e:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                long r4 = r12.readLong()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.OnDownloadTaskProgress(r11, r4)
                r13.writeNoException()
                if (r11 == 0) goto L169
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L16c
            L169:
                r13.writeInt(r3)
            L16c:
                return r1
            L16d:
                r12.enforceInterface(r2)
                int r5 = r12.readInt()
                long r6 = r12.readLong()
                java.lang.String r8 = r12.readString()
                java.lang.String r9 = r12.readString()
                r4 = r10
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r4.OnDownloadTaskConnected(r5, r6, r8, r9)
                r13.writeNoException()
                if (r11 == 0) goto L191
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L194
            L191:
                r13.writeInt(r3)
            L194:
                return r1
            L195:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.onDownloadTaskStart(r11)
                r13.writeNoException()
                if (r11 == 0) goto L1ac
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L1af
            L1ac:
                r13.writeInt(r3)
            L1af:
                return r1
            L1b0:
                r12.enforceInterface(r2)
                r10.clearData()
                r13.writeNoException()
                return r1
            L1ba:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                boolean r11 = r10.removeDownloadTaskData(r11)
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L1cc:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                boolean r11 = r10.removeDownloadInfo(r11)
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L1de:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                if (r11 == 0) goto L1f0
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r11 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r11 = r11.createFromParcel(r12)
                r0 = r11
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L1f0:
                boolean r11 = r10.updateDownloadInfo(r0)
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L1fb:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                int r12 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.updateChunkCount(r11, r12)
                r13.writeNoException()
                if (r11 == 0) goto L216
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L219
            L216:
                r13.writeInt(r3)
            L219:
                return r1
            L21a:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                int r14 = r12.readInt()
                int r0 = r12.readInt()
                int r12 = r12.readInt()
                r10.updateSubDownloadChunkIndex(r11, r14, r0, r12)
                r13.writeNoException()
                return r1
            L234:
                r12.enforceInterface(r2)
                int r3 = r12.readInt()
                int r4 = r12.readInt()
                int r5 = r12.readInt()
                long r6 = r12.readLong()
                r2 = r10
                r2.updateSubDownloadChunk(r3, r4, r5, r6)
                r13.writeNoException()
                return r1
            L24f:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                int r14 = r12.readInt()
                long r2 = r12.readLong()
                r10.updateDownloadChunk(r11, r14, r2)
                r13.writeNoException()
                return r1
            L265:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                if (r11 == 0) goto L277
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r11 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.lang.Object r11 = r11.createFromParcel(r12)
                r0 = r11
                com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0
            L277:
                r10.addSubDownloadChunk(r0)
                r13.writeNoException()
                return r1
            L27e:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                if (r11 == 0) goto L290
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadChunk> r11 = com.ss.android.socialbase.downloader.model.DownloadChunk.CREATOR
                java.lang.Object r11 = r11.createFromParcel(r12)
                r0 = r11
                com.ss.android.socialbase.downloader.model.DownloadChunk r0 = (com.ss.android.socialbase.downloader.model.DownloadChunk) r0
            L290:
                r10.addDownloadChunk(r0)
                r13.writeNoException()
                return r1
            L297:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                r10.removeAllDownloadChunk(r11)
                r13.writeNoException()
                return r1
            L2a5:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                java.util.List r11 = r10.getDownloadChunk(r11)
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L2b7:
                r12.enforceInterface(r2)
                java.util.List r11 = r10.getAllDownloadInfo()
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L2c5:
                r12.enforceInterface(r2)
                java.lang.String r11 = r12.readString()
                java.util.List r11 = r10.getUnCompletedDownloadInfosWithMimeType(r11)
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L2d7:
                r12.enforceInterface(r2)
                java.lang.String r11 = r12.readString()
                java.util.List r11 = r10.getSuccessedDownloadInfosWithMimeType(r11)
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L2e9:
                r12.enforceInterface(r2)
                java.lang.String r11 = r12.readString()
                java.util.List r11 = r10.getFailedDownloadInfosWithMimeType(r11)
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L2fb:
                r12.enforceInterface(r2)
                java.lang.String r11 = r12.readString()
                java.util.List r11 = r10.getDownloadInfoList(r11)
                r13.writeNoException()
                r13.writeTypedList(r11)
                return r1
            L30d:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                com.ss.android.socialbase.downloader.model.DownloadInfo r11 = r10.getDownloadInfo(r11)
                r13.writeNoException()
                if (r11 == 0) goto L324
                r13.writeInt(r1)
                r11.writeToParcel(r13, r1)
                goto L327
            L324:
                r13.writeInt(r3)
            L327:
                return r1
            L328:
                r12.enforceInterface(r2)
                int r11 = r12.readInt()
                boolean r11 = r10.cacheExist(r11)
                r13.writeNoException()
                r13.writeInt(r11)
                return r1
            L33a:
                r12.enforceInterface(r2)
                r10.init()
                r13.writeNoException()
                return r1
            L344:
                r13.writeString(r2)
                return r1
        }
    }

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r1, long r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r1, long r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r1, long r2, java.lang.String r4, java.lang.String r5) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r1, long r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r1, long r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r1, long r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r1) throws android.os.RemoteException;

    void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException;

    void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1) throws android.os.RemoteException;

    boolean cacheExist(int r1) throws android.os.RemoteException;

    void clearData() throws android.os.RemoteException;

    boolean ensureDownloadCacheSyncSuccess() throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo() throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1) throws android.os.RemoteException;

    void init() throws android.os.RemoteException;

    boolean isDownloadCacheSyncSuccess() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r1) throws android.os.RemoteException;

    void removeAllDownloadChunk(int r1) throws android.os.RemoteException;

    boolean removeDownloadInfo(int r1) throws android.os.RemoteException;

    boolean removeDownloadTaskData(int r1) throws android.os.RemoteException;

    void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r1) throws android.os.RemoteException;

    void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException;

    void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r1, int r2) throws android.os.RemoteException;

    void updateDownloadChunk(int r1, int r2, long r3) throws android.os.RemoteException;

    boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void updateSubDownloadChunk(int r1, int r2, int r3, long r4) throws android.os.RemoteException;

    void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4) throws android.os.RemoteException;
}
