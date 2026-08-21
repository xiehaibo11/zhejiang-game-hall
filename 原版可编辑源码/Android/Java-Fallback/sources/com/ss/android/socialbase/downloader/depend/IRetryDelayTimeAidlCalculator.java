package com.ss.android.socialbase.downloader.depend;

public interface IRetryDelayTimeAidlCalculator extends android.os.IInterface {

    public static class Default implements com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator {
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
        public long calculateRetryDelayTime(int r1, int r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator {
        private static final java.lang.String DESCRIPTOR = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator";
        static final int TRANSACTION_calculateRetryDelayTime = 1;

        private static class Proxy implements com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator {
            public static com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator sDefaultImpl;
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
            public long calculateRetryDelayTime(int r6, int r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L40
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L32
                    com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r2 = com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L32
                    com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r2 = com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    long r6 = r2.calculateRetryDelayTime(r6, r7)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    long r6 = r1.readLong()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator
                if (r1 == 0) goto L13
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r0 = (com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator) r0
                return r0
            L13:
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator$Stub$Proxy r0 = new com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator getDefaultImpl() {
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r0 = com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r1) {
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator r0 = com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.ss.android.socialbase.downloader.depend.IRetryDelayTimeAidlCalculator"
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
                int r5 = r5.readInt()
                long r4 = r3.calculateRetryDelayTime(r4, r5)
                r6.writeNoException()
                r6.writeLong(r4)
                return r0
        }
    }

    long calculateRetryDelayTime(int r1, int r2) throws android.os.RemoteException;
}
