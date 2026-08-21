package com.oppo.oiface.engine;

public interface IOIfaceService extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements com.oppo.oiface.engine.IOIfaceService {
        private static final java.lang.String DESCRIPTOR = "com.oppo.oiface.IOIfaceService";
        static final int TRANSACTION_REGISTER_ENGINE_CLIENT = 154;
        static final int TRANSACTION_getMemoryUsage = 109;
        static final int TRANSACTION_getOifaceversion = 105;
        static final int TRANSACTION_onAppRegister = 104;
        static final int TRANSACTION_updateGameEngineInfo = 155;

        private static class Proxy implements com.oppo.oiface.engine.IOIfaceService {
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
                    java.lang.String r0 = "com.oppo.oiface.IOIfaceService"
                    return r0
            }

            @Override
            public int getMemoryUsage(int r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r5 = android.os.Parcel.obtain()
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.oppo.oiface.IOIfaceService"
                    r5.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L20
                    android.os.IBinder r1 = r4.mRemote     // Catch: java.lang.Throwable -> L20
                    r2 = 109(0x6d, float:1.53E-43)
                    r3 = 0
                    r1.transact(r2, r5, r0, r3)     // Catch: java.lang.Throwable -> L20
                    int r1 = r0.readInt()     // Catch: java.lang.Throwable -> L20
                    r0.recycle()
                    r5.recycle()
                    return r1
                L20:
                    r1 = move-exception
                    r0.recycle()
                    r5.recycle()
                    throw r1
            }

            @Override
            public java.lang.String getOifaceVersion() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.oppo.oiface.IOIfaceService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L23
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L23
                    r3 = 105(0x69, float:1.47E-43)
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L23
                    r1.readException()     // Catch: java.lang.Throwable -> L23
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L23
                    r1.recycle()
                    r0.recycle()
                    return r2
                L23:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void onAppRegister() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.oppo.oiface.IOIfaceService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L1f
                    r3 = 104(0x68, float:1.46E-43)
                    r4 = 1
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1f
                    r1.readException()     // Catch: java.lang.Throwable -> L1f
                    r1.recycle()
                    r0.recycle()
                    return
                L1f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void registerEngineClient(com.oppo.oiface.engine.IOIfaceNotifier r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.oppo.oiface.IOIfaceService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2a
                    if (r5 == 0) goto L14
                    android.os.IBinder r5 = r5.asBinder()     // Catch: java.lang.Throwable -> L2a
                    goto L15
                L14:
                    r5 = 0
                L15:
                    r0.writeStrongBinder(r5)     // Catch: java.lang.Throwable -> L2a
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L2a
                    r2 = 154(0x9a, float:2.16E-43)
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L2a
                    r1.readException()     // Catch: java.lang.Throwable -> L2a
                    r1.recycle()
                    r0.recycle()
                    return
                L2a:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public void updateGameEngineInfo(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.oppo.oiface.IOIfaceService"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L19
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L19
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L19
                    r1 = 155(0x9b, float:2.17E-43)
                    r2 = 0
                    r3 = 1
                    r5.transact(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L19
                    r0.recycle()
                    return
                L19:
                    r5 = move-exception
                    r0.recycle()
                    throw r5
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.oppo.oiface.IOIfaceService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.oppo.oiface.engine.IOIfaceService asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.oppo.oiface.IOIfaceService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.oppo.oiface.engine.IOIfaceService
                if (r1 == 0) goto L13
                com.oppo.oiface.engine.IOIfaceService r0 = (com.oppo.oiface.engine.IOIfaceService) r0
                return r0
            L13:
                com.oppo.oiface.engine.IOIfaceService$Stub$Proxy r0 = new com.oppo.oiface.engine.IOIfaceService$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r1, android.os.Parcel r2, android.os.Parcel r3, int r4) throws android.os.RemoteException {
                r0 = this;
                boolean r1 = super.onTransact(r1, r2, r3, r4)
                return r1
        }
    }

    int getMemoryUsage(int r1) throws android.os.RemoteException;

    java.lang.String getOifaceVersion() throws android.os.RemoteException;

    void onAppRegister() throws android.os.RemoteException;

    void registerEngineClient(com.oppo.oiface.engine.IOIfaceNotifier r1) throws android.os.RemoteException;

    void updateGameEngineInfo(java.lang.String r1) throws android.os.RemoteException;
}
