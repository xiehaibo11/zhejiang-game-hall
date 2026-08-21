package com.ss.android.socialbase.downloader.depend;

public interface IDownloadAidlFileProvider extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider {
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
        public android.net.Uri getUriForFile(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider";
        static final int TRANSACTION_getUriForFile = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider {
            public static com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider"
                    return r0
            }

            @Override
            public android.net.Uri getUriForFile(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4c
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L4c
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L4c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L4c
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L4c
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    android.net.Uri r6 = r2.getUriForFile(r6, r7)     // Catch: java.lang.Throwable -> L4c
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L4c
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L4c
                    if (r6 == 0) goto L44
                    android.os.Parcelable$Creator r6 = android.net.Uri.CREATOR     // Catch: java.lang.Throwable -> L4c
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L4c
                    android.net.Uri r6 = (android.net.Uri) r6     // Catch: java.lang.Throwable -> L4c
                    goto L45
                L44:
                    r6 = 0
                L45:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L4c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r0 = (com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider"
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
                java.lang.String r4 = r5.readString()
                java.lang.String r5 = r5.readString()
                android.net.Uri r4 = r3.getUriForFile(r4, r5)
                r6.writeNoException()
                if (r4 == 0) goto L2e
                r6.writeInt(r0)
                r4.writeToParcel(r6, r0)
                goto L32
            L2e:
                r4 = 0
                r6.writeInt(r4)
            L32:
                return r0
        }
    }

    android.net.Uri getUriForFile(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;
}
