package com.ss.android.socialbase.downloader.depend;

public interface IDownloadForbiddenAidlCallback extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback {
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
        public boolean hasCallback() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void onCallback(java.util.List<java.lang.String> r1) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback";
        static final int TRANSACTION_hasCallback = 2;
        static final int TRANSACTION_onCallback = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback {
            public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                    return r0
            }

            @Override
            public boolean hasCallback() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2c
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    boolean r2 = r2.hasCallback()     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3d
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L36
                    r4 = 1
                L36:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L3d:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void onCallback(java.util.List<java.lang.String> r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeStringList(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.onCallback(r6)     // Catch: java.lang.Throwable -> L38
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
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r0 = (com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r0 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r0 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback"
                if (r4 == r0) goto L24
                r2 = 2
                if (r4 == r2) goto L16
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L12
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L12:
                r6.writeString(r1)
                return r0
            L16:
                r5.enforceInterface(r1)
                boolean r4 = r3.hasCallback()
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L24:
                r5.enforceInterface(r1)
                java.util.ArrayList r4 = r5.createStringArrayList()
                r3.onCallback(r4)
                r6.writeNoException()
                return r0
        }
    }

    boolean hasCallback() throws android.os.RemoteException;

    void onCallback(java.util.List<java.lang.String> r1) throws android.os.RemoteException;
}
