package com.ss.android.socialbase.downloader.depend;

public interface IDownloadAidlDepend extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend {
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
        public void monitorLogSend(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2, int r3) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend";
        static final int TRANSACTION_monitorLogSend = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend {
            public static com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend sDefaultImpl;
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
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend"
                    return r0
            }

            @Override
            public void monitorLogSend(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.exception.BaseException r7, int r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L50
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L50
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L50
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L50
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L50
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L50
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L50
                L27:
                    r0.writeInt(r8)     // Catch: java.lang.Throwable -> L50
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L50
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L50
                    if (r2 != 0) goto L46
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L50
                    if (r2 == 0) goto L46
                    com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r2 = com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L50
                    r2.monitorLogSend(r6, r7, r8)     // Catch: java.lang.Throwable -> L50
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r1.readException()     // Catch: java.lang.Throwable -> L50
                    r1.recycle()
                    r0.recycle()
                    return
                L50:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r0 = (com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r1) {
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend r0 = com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IDownloadAidlDepend"
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
                int r4 = r5.readInt()
                r7 = 0
                if (r4 == 0) goto L26
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.model.DownloadInfo> r4 = com.ss.android.socialbase.downloader.model.DownloadInfo.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r4
                goto L27
            L26:
                r4 = r7
            L27:
                int r1 = r5.readInt()
                if (r1 == 0) goto L35
                android.os.Parcelable$Creator<com.ss.android.socialbase.downloader.exception.BaseException> r7 = com.ss.android.socialbase.downloader.exception.BaseException.CREATOR
                java.lang.Object r7 = r7.createFromParcel(r5)
                com.ss.android.socialbase.downloader.exception.BaseException r7 = (com.ss.android.socialbase.downloader.exception.BaseException) r7
            L35:
                int r5 = r5.readInt()
                r3.monitorLogSend(r4, r7, r5)
                r6.writeNoException()
                return r0
        }
    }

    void monitorLogSend(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.exception.BaseException r2, int r3) throws android.os.RemoteException;
}
