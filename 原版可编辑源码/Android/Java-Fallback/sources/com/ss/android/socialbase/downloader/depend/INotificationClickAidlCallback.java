package com.ss.android.socialbase.downloader.depend;

public interface INotificationClickAidlCallback extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback {
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
        public boolean onClickWhenInstalled(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean onClickWhenSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean onClickWhenUnSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback";
        static final int TRANSACTION_onClickWhenInstalled = 3;
        static final int TRANSACTION_onClickWhenSuccess = 2;
        static final int TRANSACTION_onClickWhenUnSuccess = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback {
            public static com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                    return r0
            }

            @Override
            public boolean onClickWhenInstalled(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4b
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4b
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4b
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4b
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4b
                    r5 = 3
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4b
                    if (r4 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r4 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    if (r4 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    boolean r7 = r2.onClickWhenInstalled(r7)     // Catch: java.lang.Throwable -> L4b
                    r1.recycle()
                    r0.recycle()
                    return r7
                L39:
                    r1.readException()     // Catch: java.lang.Throwable -> L4b
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4b
                    if (r7 == 0) goto L43
                    goto L44
                L43:
                    r2 = r3
                L44:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4b:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public boolean onClickWhenSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4b
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4b
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4b
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4b
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4b
                    r5 = 2
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4b
                    if (r4 != 0) goto L39
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r4 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    if (r4 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    boolean r7 = r2.onClickWhenSuccess(r7)     // Catch: java.lang.Throwable -> L4b
                    r1.recycle()
                    r0.recycle()
                    return r7
                L39:
                    r1.readException()     // Catch: java.lang.Throwable -> L4b
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4b
                    if (r7 == 0) goto L43
                    goto L44
                L43:
                    r2 = r3
                L44:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4b:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public boolean onClickWhenUnSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4a
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4a
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4a
                L1b:
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    boolean r4 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L4a
                    if (r4 != 0) goto L38
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r4 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r4 == 0) goto L38
                    com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r2 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    boolean r6 = r2.onClickWhenUnSuccess(r6)     // Catch: java.lang.Throwable -> L4a
                    r1.recycle()
                    r0.recycle()
                    return r6
                L38:
                    r1.readException()     // Catch: java.lang.Throwable -> L4a
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L4a
                    if (r6 == 0) goto L42
                    goto L43
                L42:
                    r2 = r3
                L43:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4a:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r0 = (com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r0 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r1) {
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback r0 = com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback.Stub.Proxy.sDefaultImpl = r1
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
        public boolean onTransact(int r5, android.os.Parcel r6, android.os.Parcel r7, int r8) throws android.os.RemoteException {
                r4 = this;
                r0 = 0
                r1 = 1
                java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback"
                if (r5 == r1) goto L54
                r3 = 2
                if (r5 == r3) goto L37
                r3 = 3
                if (r5 == r3) goto L1a
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r5 == r0) goto L16
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L16:
                r7.writeString(r2)
                return r1
            L1a:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L2c
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L2c:
                boolean r5 = r4.onClickWhenInstalled(r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L37:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L49
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L49:
                boolean r5 = r4.onClickWhenSuccess(r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L54:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L66
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L66:
                boolean r5 = r4.onClickWhenUnSuccess(r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
        }
    }

    boolean onClickWhenInstalled(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    boolean onClickWhenSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    boolean onClickWhenUnSuccess(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;
}
