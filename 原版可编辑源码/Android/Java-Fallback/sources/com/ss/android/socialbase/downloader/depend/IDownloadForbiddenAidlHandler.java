package com.ss.android.socialbase.downloader.depend;

public interface IDownloadForbiddenAidlHandler extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler {
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
        public boolean onForbidden(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler";
        static final int TRANSACTION_onForbidden = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler {
            public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler"
                    return r0
            }

            @Override
            public boolean onForbidden(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L48
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L48
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L48
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L48
                    r3 = 0
                    r4 = 1
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L48
                    if (r2 != 0) goto L37
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L48
                    if (r2 == 0) goto L37
                    com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r2 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L48
                    boolean r6 = r2.onForbidden(r6)     // Catch: java.lang.Throwable -> L48
                    r1.recycle()
                    r0.recycle()
                    return r6
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L48
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L48
                    if (r6 == 0) goto L41
                    r3 = r4
                L41:
                    r1.recycle()
                    r0.recycle()
                    return r3
                L48:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r0 = (com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlHandler"
                if (r4 == r0) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto Lf
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            Lf:
                r6.writeString(r1)
                return r0
            L13:
                r5.enforceInterface(r1)
                android.os.IBinder r4 = r5.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r4 = com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback.Stub.asInterface(r4)
                boolean r4 = r3.onForbidden(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
        }
    }

    boolean onForbidden(com.ss.android.socialbase.downloader.depend.IDownloadForbiddenAidlCallback r1) throws android.os.RemoteException;
}
