package com.ss.android.socialbase.downloader.db;

public interface ISqlCacheLoadCompleteCallbackAidl extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl {
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
        public void callback(java.util.Map r1, java.util.Map r2) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl";
        static final int TRANSACTION_callback = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl {
            public static com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl sDefaultImpl;
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
            public void callback(java.util.Map r6, java.util.Map r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    r0.writeMap(r6)     // Catch: java.lang.Throwable -> L3b
                    r0.writeMap(r7)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L31
                    com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r2 = com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L31
                    com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r2 = com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    r2.callback(r6, r7)     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return
                L31:
                    r1.readException()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return
                L3b:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = (com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl getDefaultImpl() {
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r1) {
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r0 = com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl"
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
                java.lang.Class r4 = r3.getClass()
                java.lang.ClassLoader r4 = r4.getClassLoader()
                java.util.HashMap r7 = r5.readHashMap(r4)
                java.util.HashMap r4 = r5.readHashMap(r4)
                r3.callback(r7, r4)
                r6.writeNoException()
                return r0
        }
    }

    void callback(java.util.Map r1, java.util.Map r2) throws android.os.RemoteException;
}
