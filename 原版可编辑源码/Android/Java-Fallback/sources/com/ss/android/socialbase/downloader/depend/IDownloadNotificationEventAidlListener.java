package com.ss.android.socialbase.downloader.depend;

public interface IDownloadNotificationEventAidlListener extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener {
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
        public java.lang.String getNotifyProcessName() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean interceptAfterNotificationSuccess(boolean r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void onNotificationEvent(int r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener";
        static final int TRANSACTION_getNotifyProcessName = 3;
        static final int TRANSACTION_interceptAfterNotificationSuccess = 2;
        static final int TRANSACTION_onNotificationEvent = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener {
            public static com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                    return r0
            }

            @Override
            public java.lang.String getNotifyProcessName() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    java.lang.String r2 = r2.getNotifyProcessName()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L3a
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
            public boolean interceptAfterNotificationSuccess(boolean r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L47
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L13
                    r4 = r2
                    goto L14
                L13:
                    r4 = r3
                L14:
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L47
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L47
                    r5 = 2
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L47
                    if (r4 != 0) goto L35
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r4 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L47
                    if (r4 == 0) goto L35
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L47
                    boolean r7 = r2.interceptAfterNotificationSuccess(r7)     // Catch: java.lang.Throwable -> L47
                    r1.recycle()
                    r0.recycle()
                    return r7
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L47
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L47
                    if (r7 == 0) goto L3f
                    goto L40
                L3f:
                    r2 = r3
                L40:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L47:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public void onNotificationEvent(int r6, com.ss.android.socialbase.downloader.model.DownloadInfo r7, java.lang.String r8, java.lang.String r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4a
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L4a
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L1b
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4a
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4a
                    goto L1e
                L1b:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4a
                L1e:
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L4a
                    r0.writeString(r9)     // Catch: java.lang.Throwable -> L4a
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L4a
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L4a
                    if (r2 != 0) goto L40
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    if (r2 == 0) goto L40
                    com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r2 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4a
                    r2.onNotificationEvent(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4a
                    r1.recycle()
                    r0.recycle()
                    return
                L40:
                    r1.readException()     // Catch: java.lang.Throwable -> L4a
                    r1.recycle()
                    r0.recycle()
                    return
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
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r0 = (com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r0 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener r0 = com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener.Stub.Proxy.sDefaultImpl = r1
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
                r0 = 1
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener"
                if (r4 == r0) goto L3e
                r2 = 2
                if (r4 == r2) goto L27
                r2 = 3
                if (r4 == r2) goto L19
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L15
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L15:
                r6.writeString(r1)
                return r0
            L19:
                r5.enforceInterface(r1)
                java.lang.String r4 = r3.getNotifyProcessName()
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L27:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                if (r4 == 0) goto L32
                r4 = r0
                goto L33
            L32:
                r4 = 0
            L33:
                boolean r4 = r3.interceptAfterNotificationSuccess(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L3e:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                int r7 = r5.readInt()
                if (r7 == 0) goto L54
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r7 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r7 = r7.createFromParcel(r5)
                com.ss.android.socialbase.downloader.model.DownloadInfo r7 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r7
                goto L55
            L54:
                r7 = 0
            L55:
                java.lang.String r1 = r5.readString()
                java.lang.String r5 = r5.readString()
                r3.onNotificationEvent(r4, r7, r1, r5)
                r6.writeNoException()
                return r0
        }
    }

    java.lang.String getNotifyProcessName() throws android.os.RemoteException;

    boolean interceptAfterNotificationSuccess(boolean r1) throws android.os.RemoteException;

    void onNotificationEvent(int r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException;
}
