package com.enhance.gameservice;

public interface IGameTuningService extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements com.enhance.gameservice.IGameTuningService {
        private static final java.lang.String DESCRIPTOR = "com.enhance.gameservice.IGameTuningService";
        static final int TRANSACTION_boostUp = 3;
        static final int TRANSACTION_getAbstractTemperature = 4;
        static final int TRANSACTION_setFramePerSecond = 2;
        static final int TRANSACTION_setGamePowerSaving = 5;
        static final int TRANSACTION_setPreferredResolution = 1;

        private static class Proxy implements com.enhance.gameservice.IGameTuningService {
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
            public int boostUp(int r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.enhance.gameservice.IGameTuningService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeInt(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L25
                    r2 = 3
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    int r5 = r1.readInt()     // Catch: java.lang.Throwable -> L25
                    r1.recycle()
                    r0.recycle()
                    return r5
                L25:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public int getAbstractTemperature() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.enhance.gameservice.IGameTuningService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L22
                    r3 = 4
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22
                    r1.readException()     // Catch: java.lang.Throwable -> L22
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L22
                    r1.recycle()
                    r0.recycle()
                    return r2
                L22:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.enhance.gameservice.IGameTuningService"
                    return r0
            }

            @Override
            public int setFramePerSecond(int r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.enhance.gameservice.IGameTuningService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeInt(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L25
                    r2 = 2
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    int r5 = r1.readInt()     // Catch: java.lang.Throwable -> L25
                    r1.recycle()
                    r0.recycle()
                    return r5
                L25:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public int setGamePowerSaving(boolean r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.enhance.gameservice.IGameTuningService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2a
                    r2 = 0
                    if (r5 == 0) goto L12
                    r5 = 1
                    goto L13
                L12:
                    r5 = 0
                L13:
                    r0.writeInt(r5)     // Catch: java.lang.Throwable -> L2a
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L2a
                    r3 = 5
                    r5.transact(r3, r0, r1, r2)     // Catch: java.lang.Throwable -> L2a
                    r1.readException()     // Catch: java.lang.Throwable -> L2a
                    int r5 = r1.readInt()     // Catch: java.lang.Throwable -> L2a
                    r1.recycle()
                    r0.recycle()
                    return r5
                L2a:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public int setPreferredResolution(int r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.enhance.gameservice.IGameTuningService"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeInt(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.mRemote     // Catch: java.lang.Throwable -> L25
                    r2 = 1
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    int r5 = r1.readInt()     // Catch: java.lang.Throwable -> L25
                    r1.recycle()
                    r0.recycle()
                    return r5
                L25:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.enhance.gameservice.IGameTuningService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.enhance.gameservice.IGameTuningService asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.enhance.gameservice.IGameTuningService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.enhance.gameservice.IGameTuningService
                if (r1 == 0) goto L13
                com.enhance.gameservice.IGameTuningService r0 = (com.enhance.gameservice.IGameTuningService) r0
                return r0
            L13:
                com.enhance.gameservice.IGameTuningService$Stub$Proxy r0 = new com.enhance.gameservice.IGameTuningService$Stub$Proxy
                r0.<init>(r2)
                return r0
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
                java.lang.String r1 = "com.enhance.gameservice.IGameTuningService"
                if (r4 == r0) goto L68
                r2 = 2
                if (r4 == r2) goto L56
                r2 = 3
                if (r4 == r2) goto L44
                r2 = 4
                if (r4 == r2) goto L36
                r2 = 5
                if (r4 == r2) goto L1f
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L1b
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L1b:
                r6.writeString(r1)
                return r0
            L1f:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                if (r4 == 0) goto L2a
                r4 = 1
                goto L2b
            L2a:
                r4 = 0
            L2b:
                int r4 = r3.setGamePowerSaving(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L36:
                r5.enforceInterface(r1)
                int r4 = r3.getAbstractTemperature()
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L44:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                int r4 = r3.boostUp(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L56:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                int r4 = r3.setFramePerSecond(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L68:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                int r4 = r3.setPreferredResolution(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
        }
    }

    int boostUp(int r1) throws android.os.RemoteException;

    int getAbstractTemperature() throws android.os.RemoteException;

    int setFramePerSecond(int r1) throws android.os.RemoteException;

    int setGamePowerSaving(boolean r1) throws android.os.RemoteException;

    int setPreferredResolution(int r1) throws android.os.RemoteException;
}
