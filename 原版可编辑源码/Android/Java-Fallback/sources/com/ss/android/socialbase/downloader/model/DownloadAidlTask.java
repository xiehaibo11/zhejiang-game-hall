package com.ss.android.socialbase.downloader.model;

public interface DownloadAidlTask extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.model.DownloadAidlTask {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator getChunkStrategy() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend getDepend() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler getDiskSpaceHandler() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler getDownloadCompleteAidlHandlerByIndex(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getDownloadCompleteHandlerSize() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getDownloadListenerByIndex(int r1, int r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getDownloadListenerSize(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getFileProvider() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler getForbiddenHandler() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor getInterceptor() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend getMonitorDepend() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator getRetryDelayTimeCalculator() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getSingleDownloadListener(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.model.DownloadAidlTask {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.model.DownloadAidlTask";
        static final int TRANSACTION_getChunkStrategy = 2;
        static final int TRANSACTION_getDepend = 9;
        static final int TRANSACTION_getDiskSpaceHandler = 12;
        static final int TRANSACTION_getDownloadCompleteAidlHandlerByIndex = 16;
        static final int TRANSACTION_getDownloadCompleteHandlerSize = 15;
        static final int TRANSACTION_getDownloadInfo = 1;
        static final int TRANSACTION_getDownloadListenerByIndex = 4;
        static final int TRANSACTION_getDownloadListenerSize = 3;
        static final int TRANSACTION_getDownloadNotificationEventListener = 6;
        static final int TRANSACTION_getFileProvider = 14;
        static final int TRANSACTION_getForbiddenHandler = 10;
        static final int TRANSACTION_getInterceptor = 8;
        static final int TRANSACTION_getMonitorDepend = 13;
        static final int TRANSACTION_getNotificationClickCallback = 7;
        static final int TRANSACTION_getRetryDelayTimeCalculator = 11;
        static final int TRANSACTION_getSingleDownloadListener = 5;

        private static class Proxy implements com.ss.android.socialbase.downloader.model.DownloadAidlTask {
            public static com.ss.android.socialbase.downloader.model.DownloadAidlTask sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator getChunkStrategy() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator r2 = r2.getChunkStrategy()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator r2 = com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend getDepend() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r2 = r2.getDepend()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler getDiskSpaceHandler() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 12
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r2 = r2.getDiskSpaceHandler()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler getDownloadCompleteAidlHandlerByIndex(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 16
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L30
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L30
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r6 = r2.getDownloadCompleteAidlHandlerByIndex(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L42
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r6 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L42
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
            public int getDownloadCompleteHandlerSize() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 15
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    int r2 = r2.getDownloadCompleteHandlerSize()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3b
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3b:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3e
                    android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r2 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR     // Catch: java.lang.Throwable -> L46
                    java.lang.Object r2 = r2.createFromParcel(r1)     // Catch: java.lang.Throwable -> L46
                    com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2     // Catch: java.lang.Throwable -> L46
                    goto L3f
                L3e:
                    r2 = 0
                L3f:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L46:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getDownloadListenerByIndex(int r6, int r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L44
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L44
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L44
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L44
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L44
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L44
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L44
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r6 = r2.getDownloadListenerByIndex(r6, r7)     // Catch: java.lang.Throwable -> L44
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L44
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L44
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r6 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L44
                    r1.recycle()
                    r0.recycle()
                    return r6
                L44:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int getDownloadListenerSize(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    int r6 = r2.getDownloadListenerSize(r6)     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3d
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3d:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = r2.getDownloadNotificationEventListener()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getFileProvider() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 14
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = r2.getFileProvider()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler getForbiddenHandler() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r2 = r2.getForbiddenHandler()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor getInterceptor() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 8
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor r2 = r2.getInterceptor()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    return r0
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend getMonitorDepend() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 13
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend r2 = r2.getMonitorDepend()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = r2.getNotificationClickCallback()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3e
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator getRetryDelayTimeCalculator() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 11
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r2 = r2.getRetryDelayTimeCalculator()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r2 = com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getSingleDownloadListener(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L2f
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L2f
                    com.ss.android.socialbase.downloader.model.DownloadAidlTask r2 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r6 = r2.getSingleDownloadListener(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L41
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r6 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.model.DownloadAidlTask asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.model.DownloadAidlTask
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.model.DownloadAidlTask r0 = (com.ss.android.socialbase.downloader.model.DownloadAidlTask) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.model.DownloadAidlTask$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.model.DownloadAidlTask$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.model.DownloadAidlTask getDefaultImpl() {
                com.ss.android.socialbase.downloader.model.DownloadAidlTask r0 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.model.DownloadAidlTask r1) {
                com.ss.android.socialbase.downloader.model.DownloadAidlTask r0 = com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.model.DownloadAidlTask.Stub.Proxy.sDefaultImpl = r1
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
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r1 = 1
                java.lang.String r2 = "com.ss.android.socialbase.downloader.model.DownloadAidlTask"
                if (r4 == r0) goto L15d
                r0 = 0
                switch(r4) {
                    case 1: goto L145;
                    case 2: goto L131;
                    case 3: goto L11f;
                    case 4: goto L103;
                    case 5: goto Leb;
                    case 6: goto Ld7;
                    case 7: goto Lc3;
                    case 8: goto Laf;
                    case 9: goto L9b;
                    case 10: goto L87;
                    case 11: goto L73;
                    case 12: goto L5f;
                    case 13: goto L4b;
                    case 14: goto L37;
                    case 15: goto L29;
                    case 16: goto L11;
                    default: goto Lc;
                }
            Lc:
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L11:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r4 = r3.getDownloadCompleteAidlHandlerByIndex(r4)
                r6.writeNoException()
                if (r4 == 0) goto L25
                android.os.IBinder r0 = r4.asBinder()
            L25:
                r6.writeStrongBinder(r0)
                return r1
            L29:
                r5.enforceInterface(r2)
                int r4 = r3.getDownloadCompleteHandlerSize()
                r6.writeNoException()
                r6.writeInt(r4)
                return r1
            L37:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r4 = r3.getFileProvider()
                r6.writeNoException()
                if (r4 == 0) goto L47
                android.os.IBinder r0 = r4.asBinder()
            L47:
                r6.writeStrongBinder(r0)
                return r1
            L4b:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend r4 = r3.getMonitorDepend()
                r6.writeNoException()
                if (r4 == 0) goto L5b
                android.os.IBinder r0 = r4.asBinder()
            L5b:
                r6.writeStrongBinder(r0)
                return r1
            L5f:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r4 = r3.getDiskSpaceHandler()
                r6.writeNoException()
                if (r4 == 0) goto L6f
                android.os.IBinder r0 = r4.asBinder()
            L6f:
                r6.writeStrongBinder(r0)
                return r1
            L73:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r4 = r3.getRetryDelayTimeCalculator()
                r6.writeNoException()
                if (r4 == 0) goto L83
                android.os.IBinder r0 = r4.asBinder()
            L83:
                r6.writeStrongBinder(r0)
                return r1
            L87:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r4 = r3.getForbiddenHandler()
                r6.writeNoException()
                if (r4 == 0) goto L97
                android.os.IBinder r0 = r4.asBinder()
            L97:
                r6.writeStrongBinder(r0)
                return r1
            L9b:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r4 = r3.getDepend()
                r6.writeNoException()
                if (r4 == 0) goto Lab
                android.os.IBinder r0 = r4.asBinder()
            Lab:
                r6.writeStrongBinder(r0)
                return r1
            Laf:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor r4 = r3.getInterceptor()
                r6.writeNoException()
                if (r4 == 0) goto Lbf
                android.os.IBinder r0 = r4.asBinder()
            Lbf:
                r6.writeStrongBinder(r0)
                return r1
            Lc3:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r4 = r3.getNotificationClickCallback()
                r6.writeNoException()
                if (r4 == 0) goto Ld3
                android.os.IBinder r0 = r4.asBinder()
            Ld3:
                r6.writeStrongBinder(r0)
                return r1
            Ld7:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r4 = r3.getDownloadNotificationEventListener()
                r6.writeNoException()
                if (r4 == 0) goto Le7
                android.os.IBinder r0 = r4.asBinder()
            Le7:
                r6.writeStrongBinder(r0)
                return r1
            Leb:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r4 = r3.getSingleDownloadListener(r4)
                r6.writeNoException()
                if (r4 == 0) goto Lff
                android.os.IBinder r0 = r4.asBinder()
            Lff:
                r6.writeStrongBinder(r0)
                return r1
            L103:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                int r5 = r5.readInt()
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r4 = r3.getDownloadListenerByIndex(r4, r5)
                r6.writeNoException()
                if (r4 == 0) goto L11b
                android.os.IBinder r0 = r4.asBinder()
            L11b:
                r6.writeStrongBinder(r0)
                return r1
            L11f:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                int r4 = r3.getDownloadListenerSize(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r1
            L131:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator r4 = r3.getChunkStrategy()
                r6.writeNoException()
                if (r4 == 0) goto L141
                android.os.IBinder r0 = r4.asBinder()
            L141:
                r6.writeStrongBinder(r0)
                return r1
            L145:
                r5.enforceInterface(r2)
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r3.getDownloadInfo()
                r6.writeNoException()
                if (r4 == 0) goto L158
                r6.writeInt(r1)
                r4.writeToParcel(r6, r1)
                goto L15c
            L158:
                r4 = 0
                r6.writeInt(r4)
            L15c:
                return r1
            L15d:
                r6.writeString(r2)
                return r1
        }
    }

    com.ss.android.socialbase.downloader.depend.IChunkCntAidlCalculator getChunkStrategy() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend getDepend() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler getDiskSpaceHandler() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler getDownloadCompleteAidlHandlerByIndex(int r1) throws android.os.RemoteException;

    int getDownloadCompleteHandlerSize() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getDownloadListenerByIndex(int r1, int r2) throws android.os.RemoteException;

    int getDownloadListenerSize(int r1) throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDownloadNotificationEventListener() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getFileProvider() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler getForbiddenHandler() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlInterceptor getInterceptor() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlMonitorDepend getMonitorDepend() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getNotificationClickCallback() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator getRetryDelayTimeCalculator() throws android.os.RemoteException;

    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getSingleDownloadListener(int r1) throws android.os.RemoteException;
}
