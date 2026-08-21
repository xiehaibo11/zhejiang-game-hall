package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IServiceChannel extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.mobilesafe.svcmanager.IServiceChannel {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void addService(java.lang.String r1, android.os.IBinder r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void addServiceDelayed(java.lang.String r1, com.qihoo360.replugin.IBinderGetter r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.os.IBinder getPluginService(java.lang.String r1, java.lang.String r2, android.os.IBinder r3) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.os.IBinder getService(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void onPluginServiceRefReleased(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void removeService(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.mobilesafe.svcmanager.IServiceChannel {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel";
        static final int TRANSACTION_addService = 2;
        static final int TRANSACTION_addServiceDelayed = 3;
        static final int TRANSACTION_getPluginService = 5;
        static final int TRANSACTION_getService = 1;
        static final int TRANSACTION_onPluginServiceRefReleased = 6;
        static final int TRANSACTION_removeService = 4;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.mobilesafe.svcmanager.IServiceChannel {
            public static com.qihoo360.mobilesafe.svcmanager.IServiceChannel sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public void addService(java.lang.String r6, android.os.IBinder r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3b
                    r0.writeStrongBinder(r7)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L31
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L31
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    r2.addService(r6, r7)     // Catch: java.lang.Throwable -> L3b
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

            @Override
            public void addServiceDelayed(java.lang.String r6, com.qihoo360.replugin.IBinderGetter r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    if (r7 == 0) goto L17
                    android.os.IBinder r2 = r7.asBinder()     // Catch: java.lang.Throwable -> L43
                    goto L18
                L17:
                    r2 = 0
                L18:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.addServiceDelayed(r6, r7)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return
                L39:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return
                L43:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    return r0
            }

            @Override
            public android.os.IBinder getPluginService(java.lang.String r6, java.lang.String r7, android.os.IBinder r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L43
                    r0.writeStrongBinder(r8)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L35
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L35
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r6 = r2.getPluginService(r6, r7, r8)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L43:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public android.os.IBinder getService(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2f
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2f
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r6 = r2.getService(r6)     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3d:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void onPluginServiceRefReleased(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3b
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L31
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L31
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    r2.onPluginServiceRefReleased(r6, r7)     // Catch: java.lang.Throwable -> L3b
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

            @Override
            public void removeService(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L38
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L38
                    if (r2 != 0) goto L2e
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r2 == 0) goto L2e
                    com.qihoo360.mobilesafe.svcmanager.IServiceChannel r2 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r2.removeService(r6)     // Catch: java.lang.Throwable -> L38
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
                java.lang.String r0 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.mobilesafe.svcmanager.IServiceChannel asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.mobilesafe.svcmanager.IServiceChannel
                if (r1 == 0) goto L13
                com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = (com.qihoo360.mobilesafe.svcmanager.IServiceChannel) r0
                return r0
            L13:
                com.qihoo360.mobilesafe.svcmanager.IServiceChannel$Stub$Proxy r0 = new com.qihoo360.mobilesafe.svcmanager.IServiceChannel$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.mobilesafe.svcmanager.IServiceChannel getDefaultImpl() {
                com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.mobilesafe.svcmanager.IServiceChannel r1) {
                com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub.Proxy.sDefaultImpl = r1
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
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r1 = 1
                java.lang.String r2 = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"
                if (r4 == r0) goto L84
                switch(r4) {
                    case 1: goto L72;
                    case 2: goto L60;
                    case 3: goto L4a;
                    case 4: goto L3c;
                    case 5: goto L22;
                    case 6: goto L10;
                    default: goto Lb;
                }
            Lb:
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L10:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                java.lang.String r5 = r5.readString()
                r3.onPluginServiceRefReleased(r4, r5)
                r6.writeNoException()
                return r1
            L22:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                java.lang.String r7 = r5.readString()
                android.os.IBinder r5 = r5.readStrongBinder()
                android.os.IBinder r4 = r3.getPluginService(r4, r7, r5)
                r6.writeNoException()
                r6.writeStrongBinder(r4)
                return r1
            L3c:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                r3.removeService(r4)
                r6.writeNoException()
                return r1
            L4a:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                android.os.IBinder r5 = r5.readStrongBinder()
                com.qihoo360.replugin.IBinderGetter r5 = com.qihoo360.replugin.IBinderGetter.Stub.asInterface(r5)
                r3.addServiceDelayed(r4, r5)
                r6.writeNoException()
                return r1
            L60:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                android.os.IBinder r5 = r5.readStrongBinder()
                r3.addService(r4, r5)
                r6.writeNoException()
                return r1
            L72:
                r5.enforceInterface(r2)
                java.lang.String r4 = r5.readString()
                android.os.IBinder r4 = r3.getService(r4)
                r6.writeNoException()
                r6.writeStrongBinder(r4)
                return r1
            L84:
                r6.writeString(r2)
                return r1
        }
    }

    void addService(java.lang.String r1, android.os.IBinder r2) throws android.os.RemoteException;

    void addServiceDelayed(java.lang.String r1, com.qihoo360.replugin.IBinderGetter r2) throws android.os.RemoteException;

    android.os.IBinder getPluginService(java.lang.String r1, java.lang.String r2, android.os.IBinder r3) throws android.os.RemoteException;

    android.os.IBinder getService(java.lang.String r1) throws android.os.RemoteException;

    void onPluginServiceRefReleased(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    void removeService(java.lang.String r1) throws android.os.RemoteException;
}
