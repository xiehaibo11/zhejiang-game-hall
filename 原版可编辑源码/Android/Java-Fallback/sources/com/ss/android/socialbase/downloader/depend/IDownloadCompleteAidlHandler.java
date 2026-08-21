package com.ss.android.socialbase.downloader.depend;

public interface IDownloadCompleteAidlHandler extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler {
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
        public void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler";
        static final int TRANSACTION_handle = 1;
        static final int TRANSACTION_needHandle = 2;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler {
            public static com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
                    return r0
            }

            @Override
            public void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L41
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L41
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L41
                L1b:
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.handle(r6)     // Catch: java.lang.Throwable -> L41
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
            public boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
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
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r4 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    if (r4 == 0) goto L39
                    com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    boolean r7 = r2.needHandle(r7)     // Catch: java.lang.Throwable -> L4b
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
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r0 = (com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadCompleteAidlHandler"
                if (r5 == r1) goto L34
                r3 = 2
                if (r5 == r3) goto L17
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r5 == r0) goto L13
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L13:
                r7.writeString(r2)
                return r1
            L17:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L29
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L29:
                boolean r5 = r4.needHandle(r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L34:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L46
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r5 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.ss.android.socialbase.downloader.model.DownloadInfo r0 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r0
            L46:
                r4.handle(r0)
                r7.writeNoException()
                return r1
        }
    }

    void handle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;

    boolean needHandle(com.ss.android.socialbase.downloader.model.DownloadInfo r1) throws android.os.RemoteException;
}
