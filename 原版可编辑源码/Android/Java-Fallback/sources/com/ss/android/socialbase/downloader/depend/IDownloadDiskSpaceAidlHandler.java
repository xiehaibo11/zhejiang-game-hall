package com.ss.android.socialbase.downloader.depend;

public interface IDownloadDiskSpaceAidlHandler extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler {
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
        public boolean cleanUpDisk(long r1, long r3, com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback r5) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler";
        static final int TRANSACTION_cleanUpDisk = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler {
            public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler sDefaultImpl;
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
            public boolean cleanUpDisk(long r10, long r12, com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback r14) throws android.os.RemoteException {
                    r9 = this;
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    android.os.Parcel r2 = android.os.Parcel.obtain()
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"
                    r1.writeInterfaceToken(r0)     // Catch: java.lang.Throwable -> L51
                    r1.writeLong(r10)     // Catch: java.lang.Throwable -> L51
                    r1.writeLong(r12)     // Catch: java.lang.Throwable -> L51
                    if (r14 == 0) goto L1a
                    android.os.IBinder r0 = r14.asBinder()     // Catch: java.lang.Throwable -> L51
                    goto L1b
                L1a:
                    r0 = 0
                L1b:
                    r1.writeStrongBinder(r0)     // Catch: java.lang.Throwable -> L51
                    android.os.IBinder r0 = r9.mRemote     // Catch: java.lang.Throwable -> L51
                    r3 = 0
                    r8 = 1
                    boolean r0 = r0.transact(r8, r1, r2, r3)     // Catch: java.lang.Throwable -> L51
                    if (r0 != 0) goto L40
                    com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L51
                    if (r0 == 0) goto L40
                    com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r3 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L51
                    r4 = r10
                    r6 = r12
                    r8 = r14
                    boolean r0 = r3.cleanUpDisk(r4, r6, r8)     // Catch: java.lang.Throwable -> L51
                    r2.recycle()
                    r1.recycle()
                    return r0
                L40:
                    r2.readException()     // Catch: java.lang.Throwable -> L51
                    int r0 = r2.readInt()     // Catch: java.lang.Throwable -> L51
                    if (r0 == 0) goto L4a
                    r3 = r8
                L4a:
                    r2.recycle()
                    r1.recycle()
                    return r3
                L51:
                    r0 = move-exception
                    r2.recycle()
                    r1.recycle()
                    throw r0
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r0 = (com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler r0 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler.Stub.Proxy.sDefaultImpl = r1
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
        public boolean onTransact(int r8, android.os.Parcel r9, android.os.Parcel r10, int r11) throws android.os.RemoteException {
                r7 = this;
                r0 = 1
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlHandler"
                if (r8 == r0) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r8 == r2) goto Lf
                boolean r8 = super.onTransact(r8, r9, r10, r11)
                return r8
            Lf:
                r10.writeString(r1)
                return r0
            L13:
                r9.enforceInterface(r1)
                long r2 = r9.readLong()
                long r4 = r9.readLong()
                android.os.IBinder r8 = r9.readStrongBinder()
                com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback r6 = com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback.Stub.asInterface(r8)
                r1 = r7
                boolean r8 = r1.cleanUpDisk(r2, r4, r6)
                r10.writeNoException()
                r10.writeInt(r8)
                return r0
        }
    }

    boolean cleanUpDisk(long r1, long r3, com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceAidlCallback r5) throws android.os.RemoteException;
}
