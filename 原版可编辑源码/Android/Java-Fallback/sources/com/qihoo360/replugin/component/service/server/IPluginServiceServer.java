package com.qihoo360.replugin.component.service.server;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginServiceServer extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.replugin.component.service.server.IPluginServiceServer {
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
        public int bindService(android.content.Intent r1, com.qihoo360.loader2.mgr.IServiceConnection r2, int r3, android.os.Messenger r4) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.lang.String dump() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.content.ComponentName startService(android.content.Intent r1, android.os.Messenger r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int stopService(android.content.Intent r1, android.os.Messenger r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean unbindService(com.qihoo360.loader2.mgr.IServiceConnection r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.replugin.component.service.server.IPluginServiceServer {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.replugin.component.service.server.IPluginServiceServer";
        static final int TRANSACTION_bindService = 3;
        static final int TRANSACTION_dump = 5;
        static final int TRANSACTION_startService = 1;
        static final int TRANSACTION_stopService = 2;
        static final int TRANSACTION_unbindService = 4;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.replugin.component.service.server.IPluginServiceServer {
            public static com.qihoo360.replugin.component.service.server.IPluginServiceServer sDefaultImpl;
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
            public int bindService(android.content.Intent r6, com.qihoo360.loader2.mgr.IServiceConnection r7, int r8, android.os.Messenger r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L61
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L61
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L61
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L61
                L1b:
                    if (r7 == 0) goto L22
                    android.os.IBinder r4 = r7.asBinder()     // Catch: java.lang.Throwable -> L61
                    goto L23
                L22:
                    r4 = 0
                L23:
                    r0.writeStrongBinder(r4)     // Catch: java.lang.Throwable -> L61
                    r0.writeInt(r8)     // Catch: java.lang.Throwable -> L61
                    if (r9 == 0) goto L32
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L61
                    r9.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L61
                    goto L35
                L32:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L61
                L35:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L61
                    r4 = 3
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L61
                    if (r2 != 0) goto L53
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L61
                    if (r2 == 0) goto L53
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L61
                    int r6 = r2.bindService(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L61
                    r1.recycle()
                    r0.recycle()
                    return r6
                L53:
                    r1.readException()     // Catch: java.lang.Throwable -> L61
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L61
                    r1.recycle()
                    r0.recycle()
                    return r6
                L61:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.lang.String dump() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    java.lang.String r2 = r2.dump()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3a:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    return r0
            }

            @Override
            public android.content.ComponentName startService(android.content.Intent r6, android.os.Messenger r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L5e
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L5e
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L5e
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L5e
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L5e
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L5e
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L5e
                L27:
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L5e
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L5e
                    if (r2 != 0) goto L44
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5e
                    if (r2 == 0) goto L44
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5e
                    android.content.ComponentName r6 = r2.startService(r6, r7)     // Catch: java.lang.Throwable -> L5e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L44:
                    r1.readException()     // Catch: java.lang.Throwable -> L5e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L5e
                    if (r6 == 0) goto L56
                    android.os.Parcelable$Creator r6 = android.content.ComponentName.CREATOR     // Catch: java.lang.Throwable -> L5e
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L5e
                    android.content.ComponentName r6 = (android.content.ComponentName) r6     // Catch: java.lang.Throwable -> L5e
                    goto L57
                L56:
                    r6 = 0
                L57:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L5e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int stopService(android.content.Intent r6, android.os.Messenger r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L53
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L53
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L53
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L53
                L1b:
                    if (r7 == 0) goto L24
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L53
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L53
                    goto L27
                L24:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L53
                L27:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L53
                    r4 = 2
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L53
                    if (r2 != 0) goto L45
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L53
                    if (r2 == 0) goto L45
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L53
                    int r6 = r2.stopService(r6, r7)     // Catch: java.lang.Throwable -> L53
                    r1.recycle()
                    r0.recycle()
                    return r6
                L45:
                    r1.readException()     // Catch: java.lang.Throwable -> L53
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L53
                    r1.recycle()
                    r0.recycle()
                    return r6
                L53:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean unbindService(com.qihoo360.loader2.mgr.IServiceConnection r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L48
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L48
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L48
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L48
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L48
                    if (r2 != 0) goto L37
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L48
                    if (r2 == 0) goto L37
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L48
                    boolean r6 = r2.unbindService(r6)     // Catch: java.lang.Throwable -> L48
                    r1.recycle()
                    r0.recycle()
                    return r6
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L48
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L48
                    if (r6 == 0) goto L41
                    r4 = 1
                L41:
                    r1.recycle()
                    r0.recycle()
                    return r4
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
                java.lang.String r0 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.replugin.component.service.server.IPluginServiceServer asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.replugin.component.service.server.IPluginServiceServer
                if (r1 == 0) goto L13
                com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = (com.qihoo360.replugin.component.service.server.IPluginServiceServer) r0
                return r0
            L13:
                com.qihoo360.replugin.component.service.server.IPluginServiceServer$Stub$Proxy r0 = new com.qihoo360.replugin.component.service.server.IPluginServiceServer$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.replugin.component.service.server.IPluginServiceServer getDefaultImpl() {
                com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.replugin.component.service.server.IPluginServiceServer r1) {
                com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.Proxy.sDefaultImpl = r1
                r1 = 1
                return r1
            La:
                r1 = 0
                return r1
            Lc:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                java.lang.String r0 = "setDefaultImpl() called twice"
                r1.<init>(r0)
                throw r1
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
                java.lang.String r2 = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"
                if (r5 == r1) goto Laa
                r3 = 2
                if (r5 == r3) goto L7d
                r3 = 3
                if (r5 == r3) goto L44
                r0 = 4
                if (r5 == r0) goto L2e
                r0 = 5
                if (r5 == r0) goto L20
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r5 == r0) goto L1c
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L1c:
                r7.writeString(r2)
                return r1
            L20:
                r6.enforceInterface(r2)
                java.lang.String r5 = r4.dump()
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L2e:
                r6.enforceInterface(r2)
                android.os.IBinder r5 = r6.readStrongBinder()
                com.qihoo360.loader2.mgr.IServiceConnection r5 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.asInterface(r5)
                boolean r5 = r4.unbindService(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L44:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L56
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                android.content.Intent r5 = (android.content.Intent) r5
                goto L57
            L56:
                r5 = r0
            L57:
                android.os.IBinder r8 = r6.readStrongBinder()
                com.qihoo360.loader2.mgr.IServiceConnection r8 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.asInterface(r8)
                int r2 = r6.readInt()
                int r3 = r6.readInt()
                if (r3 == 0) goto L72
                android.os.Parcelable$Creator r0 = android.os.Messenger.CREATOR
                java.lang.Object r6 = r0.createFromParcel(r6)
                r0 = r6
                android.os.Messenger r0 = (android.os.Messenger) r0
            L72:
                int r5 = r4.bindService(r5, r8, r2, r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L7d:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L8f
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                android.content.Intent r5 = (android.content.Intent) r5
                goto L90
            L8f:
                r5 = r0
            L90:
                int r8 = r6.readInt()
                if (r8 == 0) goto L9f
                android.os.Parcelable$Creator r8 = android.os.Messenger.CREATOR
                java.lang.Object r6 = r8.createFromParcel(r6)
                r0 = r6
                android.os.Messenger r0 = (android.os.Messenger) r0
            L9f:
                int r5 = r4.stopService(r5, r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            Laa:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto Lbc
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                android.content.Intent r5 = (android.content.Intent) r5
                goto Lbd
            Lbc:
                r5 = r0
            Lbd:
                int r8 = r6.readInt()
                if (r8 == 0) goto Lcc
                android.os.Parcelable$Creator r8 = android.os.Messenger.CREATOR
                java.lang.Object r6 = r8.createFromParcel(r6)
                r0 = r6
                android.os.Messenger r0 = (android.os.Messenger) r0
            Lcc:
                android.content.ComponentName r5 = r4.startService(r5, r0)
                r7.writeNoException()
                if (r5 == 0) goto Ldc
                r7.writeInt(r1)
                r5.writeToParcel(r7, r1)
                goto Le0
            Ldc:
                r5 = 0
                r7.writeInt(r5)
            Le0:
                return r1
        }
    }

    int bindService(android.content.Intent r1, com.qihoo360.loader2.mgr.IServiceConnection r2, int r3, android.os.Messenger r4) throws android.os.RemoteException;

    java.lang.String dump() throws android.os.RemoteException;

    android.content.ComponentName startService(android.content.Intent r1, android.os.Messenger r2) throws android.os.RemoteException;

    int stopService(android.content.Intent r1, android.os.Messenger r2) throws android.os.RemoteException;

    boolean unbindService(com.qihoo360.loader2.mgr.IServiceConnection r1) throws android.os.RemoteException;
}
