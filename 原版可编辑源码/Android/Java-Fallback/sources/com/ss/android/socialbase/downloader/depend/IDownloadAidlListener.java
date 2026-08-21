package com.ss.android.socialbase.downloader.depend;

public interface IDownloadAidlListener extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadAidlListener {
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
        public int getOriginHashCode() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onFirstStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onFirstSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onRetryDelay(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadAidlListener {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener";
        static final int TRANSACTION_getOriginHashCode = 1;
        static final int TRANSACTION_onCanceled = 8;
        static final int TRANSACTION_onFailed = 7;
        static final int TRANSACTION_onFirstStart = 9;
        static final int TRANSACTION_onFirstSuccess = 10;
        static final int TRANSACTION_onPause = 5;
        static final int TRANSACTION_onPrepare = 2;
        static final int TRANSACTION_onProgress = 4;
        static final int TRANSACTION_onRetry = 11;
        static final int TRANSACTION_onRetryDelay = 12;
        static final int TRANSACTION_onStart = 3;
        static final int TRANSACTION_onSuccessed = 6;
        static final int TRANSACTION_onWaitingDownloadCompleteHandler = 13;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadAidlListener {
            public static com.ss.android.socialbase.downloader.depend.IDownloadAidlListener sDefaultImpl;
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

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    return r0
            }

            @Override
            public int getOriginHashCode() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r2.getOriginHashCode()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3a:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
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
                    r4 = 8
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.onCanceled(r6)     // Catch: java.lang.Throwable -> L43
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
            public void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.exception.BaseException r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4e
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4e
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4e
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4e
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4e
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4e
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4e
                L27:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4e
                    r4 = 7
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L4e
                    if (r2 != 0) goto L44
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4e
                    if (r2 == 0) goto L44
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4e
                    r2.onFailed(r6, r7)     // Catch: java.lang.Throwable -> L4e
                    r1.recycle()
                    r0.recycle()
                    return
                L44:
                    r1.readException()     // Catch: java.lang.Throwable -> L4e
                    r1.recycle()
                    r0.recycle()
                    return
                L4e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void onFirstStart(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
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
                    r4 = 9
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.onFirstStart(r6)     // Catch: java.lang.Throwable -> L43
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
            public void onFirstSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
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
                    r4 = 10
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.onFirstSuccess(r6)     // Catch: java.lang.Throwable -> L43
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
            public void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 5
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.onPause(r6)     // Catch: java.lang.Throwable -> L42
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

            @Override
            public void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 2
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.onPrepare(r6)     // Catch: java.lang.Throwable -> L42
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

            @Override
            public void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 4
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.onProgress(r6)     // Catch: java.lang.Throwable -> L42
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

            @Override
            public void onRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.exception.BaseException r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4f
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4f
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4f
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4f
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4f
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4f
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4f
                L27:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4f
                    r4 = 11
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L4f
                    if (r2 != 0) goto L45
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    if (r2 == 0) goto L45
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    r2.onRetry(r6, r7)     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return
                L45:
                    r1.readException()     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return
                L4f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void onRetryDelay(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.exception.BaseException r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4f
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4f
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4f
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4f
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4f
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4f
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4f
                L27:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4f
                    r4 = 12
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L4f
                    if (r2 != 0) goto L45
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    if (r2 == 0) goto L45
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    r2.onRetryDelay(r6, r7)     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return
                L45:
                    r1.readException()     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return
                L4f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 3
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.onStart(r6)     // Catch: java.lang.Throwable -> L42
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

            @Override
            public void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 6
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.onSuccessed(r6)     // Catch: java.lang.Throwable -> L42
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

            @Override
            public void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
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
                    r4 = 13
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.onWaitingDownloadCompleteHandler(r6)     // Catch: java.lang.Throwable -> L43
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
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlListener asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadAidlListener
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r0 = (com.ss.android.socialbase.downloader.depend.IDownloadAidlListener) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadAidlListener$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlListener getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadAidlListener.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlListener"
                if (r4 == r0) goto L17b
                r0 = 0
                switch(r4) {
                    case 1: goto L16d;
                    case 2: goto L154;
                    case 3: goto L13b;
                    case 4: goto L122;
                    case 5: goto L109;
                    case 6: goto Lf0;
                    case 7: goto Lc7;
                    case 8: goto Lae;
                    case 9: goto L95;
                    case 10: goto L7c;
                    case 11: goto L53;
                    case 12: goto L2a;
                    case 13: goto L11;
                    default: goto Lc;
                }
            Lc:
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L11:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L23
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L23:
                r3.onWaitingDownloadCompleteHandler(r0)
                r6.writeNoException()
                return r1
            L2a:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L3c
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r4
                goto L3d
            L3c:
                r4 = r0
            L3d:
                int r7 = r5.readInt()
                if (r7 == 0) goto L4c
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.exception.BaseException> r7 = com.ss.android.socialbase.downloader.exception.BaseException.CREATOR
                java.lang.Object r5 = r7.createFromParcel(r5)
                r0 = r5
                com.ss.android.socialbase.downloader.exception.BaseException r0 = (com.ss.android.socialbase.downloader.exception.BaseException) r0
            L4c:
                r3.onRetryDelay(r4, r0)
                r6.writeNoException()
                return r1
            L53:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L65
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r4
                goto L66
            L65:
                r4 = r0
            L66:
                int r7 = r5.readInt()
                if (r7 == 0) goto L75
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.exception.BaseException> r7 = com.ss.android.socialbase.downloader.exception.BaseException.CREATOR
                java.lang.Object r5 = r7.createFromParcel(r5)
                r0 = r5
                com.ss.android.socialbase.downloader.exception.BaseException r0 = (com.ss.android.socialbase.downloader.exception.BaseException) r0
            L75:
                r3.onRetry(r4, r0)
                r6.writeNoException()
                return r1
            L7c:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L8e
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L8e:
                r3.onFirstSuccess(r0)
                r6.writeNoException()
                return r1
            L95:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto La7
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            La7:
                r3.onFirstStart(r0)
                r6.writeNoException()
                return r1
            Lae:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto Lc0
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            Lc0:
                r3.onCanceled(r0)
                r6.writeNoException()
                return r1
            Lc7:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto Ld9
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r4
                goto Lda
            Ld9:
                r4 = r0
            Lda:
                int r7 = r5.readInt()
                if (r7 == 0) goto Le9
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.exception.BaseException> r7 = com.ss.android.socialbase.downloader.exception.BaseException.CREATOR
                java.lang.Object r5 = r7.createFromParcel(r5)
                r0 = r5
                com.ss.android.socialbase.downloader.exception.BaseException r0 = (com.ss.android.socialbase.downloader.exception.BaseException) r0
            Le9:
                r3.onFailed(r4, r0)
                r6.writeNoException()
                return r1
            Lf0:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L102
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L102:
                r3.onSuccessed(r0)
                r6.writeNoException()
                return r1
            L109:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L11b
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L11b:
                r3.onPause(r0)
                r6.writeNoException()
                return r1
            L122:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L134
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L134:
                r3.onProgress(r0)
                r6.writeNoException()
                return r1
            L13b:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L14d
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L14d:
                r3.onStart(r0)
                r6.writeNoException()
                return r1
            L154:
                r5.enforceInterface(r2)
                int r4 = r5.readInt()
                if (r4 == 0) goto L166
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                r0 = r4
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L166:
                r3.onPrepare(r0)
                r6.writeNoException()
                return r1
            L16d:
                r5.enforceInterface(r2)
                int r4 = r3.getOriginHashCode()
                r6.writeNoException()
                r6.writeInt(r4)
                return r1
            L17b:
                r6.writeString(r2)
                return r1
        }
    }

    int getOriginHashCode() throws android.os.RemoteException;

    void onCanceled(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onFailed(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException;

    void onFirstStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onFirstSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onPause(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onPrepare(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onProgress(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onRetry(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException;

    void onRetryDelay(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2) throws android.os.RemoteException;

    void onStart(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onSuccessed(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    void onWaitingDownloadCompleteHandler(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;
}
