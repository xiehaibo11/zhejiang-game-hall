package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginClient extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.loader2.IPluginClient {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.String allocActivityContainer(java.lang.String r1, int r2, java.lang.String r3, android.content.Intent r4) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.lang.String dumpActivities() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.lang.String dumpServices() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void onReceive(java.lang.String r1, java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public android.os.IBinder queryBinder(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void releaseBinder() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntent(android.content.Intent r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntentSync(android.content.Intent r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public int sumActivities() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.loader2.IPluginClient {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.loader2.IPluginClient";
        static final int TRANSACTION_allocActivityContainer = 1;
        static final int TRANSACTION_dumpActivities = 10;
        static final int TRANSACTION_dumpServices = 9;
        static final int TRANSACTION_fetchServiceServer = 7;
        static final int TRANSACTION_onReceive = 8;
        static final int TRANSACTION_queryBinder = 2;
        static final int TRANSACTION_releaseBinder = 3;
        static final int TRANSACTION_sendIntent = 4;
        static final int TRANSACTION_sendIntentSync = 5;
        static final int TRANSACTION_sumActivities = 6;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.loader2.IPluginClient {
            public static com.qihoo360.loader2.IPluginClient sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public java.lang.String allocActivityContainer(java.lang.String r6, int r7, java.lang.String r8, android.content.Intent r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L4f
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L4f
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L4f
                    r2 = 1
                    r3 = 0
                    if (r9 == 0) goto L21
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4f
                    r9.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4f
                    goto L24
                L21:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4f
                L24:
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L4f
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L4f
                    if (r2 != 0) goto L41
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    if (r2 == 0) goto L41
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4f
                    java.lang.String r6 = r2.allocActivityContainer(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L41:
                    r1.readException()     // Catch: java.lang.Throwable -> L4f
                    java.lang.String r6 = r1.readString()     // Catch: java.lang.Throwable -> L4f
                    r1.recycle()
                    r0.recycle()
                    return r6
                L4f:
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

            @Override
            public java.lang.String dumpActivities() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L2d
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L2d
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    java.lang.String r2 = r2.dumpActivities()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3b
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3b:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public java.lang.String dumpServices() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L2d
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L2d
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    java.lang.String r2 = r2.dumpServices()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3b
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L3b
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3b:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L2c
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L2c
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = r2.fetchServiceServer()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3e
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.loader2.IPluginClient"
                    return r0
            }

            @Override
            public void onReceive(java.lang.String r6, java.lang.String r7, android.content.Intent r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L49
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L49
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L49
                    r2 = 0
                    if (r8 == 0) goto L1e
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L49
                    r8.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L49
                    goto L21
                L1e:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L49
                L21:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L49
                    r4 = 8
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L49
                    if (r2 != 0) goto L3f
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    if (r2 == 0) goto L3f
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    r2.onReceive(r6, r7, r8)     // Catch: java.lang.Throwable -> L49
                    r1.recycle()
                    r0.recycle()
                    return
                L3f:
                    r1.readException()     // Catch: java.lang.Throwable -> L49
                    r1.recycle()
                    r0.recycle()
                    return
                L49:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public android.os.IBinder queryBinder(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L32
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L32
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r6 = r2.queryBinder(r6, r7)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void releaseBinder() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L35
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L35
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L35
                    if (r2 != 0) goto L2b
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    if (r2 == 0) goto L2b
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L35
                    r2.releaseBinder()     // Catch: java.lang.Throwable -> L35
                    r1.recycle()
                    r0.recycle()
                    return
                L2b:
                    r1.readException()     // Catch: java.lang.Throwable -> L35
                    r1.recycle()
                    r0.recycle()
                    return
                L35:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void sendIntent(android.content.Intent r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L36
                    r1 = 1
                    r2 = 0
                    if (r6 == 0) goto L14
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L36
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L36
                    goto L17
                L14:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L36
                L17:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L36
                    r3 = 4
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L36
                    if (r1 != 0) goto L32
                    com.qihoo360.loader2.IPluginClient r1 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    if (r1 == 0) goto L32
                    com.qihoo360.loader2.IPluginClient r1 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    r1.sendIntent(r6)     // Catch: java.lang.Throwable -> L36
                    r0.recycle()
                    return
                L32:
                    r0.recycle()
                    return
                L36:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public void sendIntentSync(android.content.Intent r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L42
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L42
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L42
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r4 = 5
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.sendIntentSync(r6)     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return
                L38:
                    r1.readException()     // Catch: java.lang.Throwable -> L42
                    r1.recycle()
                    r0.recycle()
                    return
                L42:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int sumActivities() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.qihoo360.loader2.IPluginClient r2 = com.qihoo360.loader2.IPluginClient.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r2.sumActivities()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3a:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.loader2.IPluginClient"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.loader2.IPluginClient asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.loader2.IPluginClient"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.loader2.IPluginClient
                if (r1 == 0) goto L13
                com.qihoo360.loader2.IPluginClient r0 = (com.qihoo360.loader2.IPluginClient) r0
                return r0
            L13:
                com.qihoo360.loader2.IPluginClient$Stub$Proxy r0 = new com.qihoo360.loader2.IPluginClient$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.loader2.IPluginClient getDefaultImpl() {
                com.qihoo360.loader2.IPluginClient r0 = com.qihoo360.loader2.IPluginClient.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.loader2.IPluginClient r1) {
                com.qihoo360.loader2.IPluginClient r0 = com.qihoo360.loader2.IPluginClient.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.loader2.IPluginClient.Stub.Proxy.sDefaultImpl = r1
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
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                r1 = 1
                java.lang.String r2 = "com.qihoo360.loader2.IPluginClient"
                if (r5 == r0) goto Le8
                r0 = 0
                switch(r5) {
                    case 1: goto Lbf;
                    case 2: goto La9;
                    case 3: goto L9f;
                    case 4: goto L89;
                    case 5: goto L70;
                    case 6: goto L62;
                    case 7: goto L4e;
                    case 8: goto L2d;
                    case 9: goto L1f;
                    case 10: goto L11;
                    default: goto Lc;
                }
            Lc:
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L11:
                r6.enforceInterface(r2)
                java.lang.String r5 = r4.dumpActivities()
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L1f:
                r6.enforceInterface(r2)
                java.lang.String r5 = r4.dumpServices()
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L2d:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r8 = r6.readString()
                int r2 = r6.readInt()
                if (r2 == 0) goto L47
                android.os.Parcelable$Creator r0 = android.content.Intent.CREATOR
                java.lang.Object r6 = r0.createFromParcel(r6)
                r0 = r6
                android.content.Intent r0 = (android.content.Intent) r0
            L47:
                r4.onReceive(r5, r8, r0)
                r7.writeNoException()
                return r1
            L4e:
                r6.enforceInterface(r2)
                com.qihoo360.replugin.component.service.server.IPluginServiceServer r5 = r4.fetchServiceServer()
                r7.writeNoException()
                if (r5 == 0) goto L5e
                android.os.IBinder r0 = r5.asBinder()
            L5e:
                r7.writeStrongBinder(r0)
                return r1
            L62:
                r6.enforceInterface(r2)
                int r5 = r4.sumActivities()
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L70:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L82
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                android.content.Intent r0 = (android.content.Intent) r0
            L82:
                r4.sendIntentSync(r0)
                r7.writeNoException()
                return r1
            L89:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L9b
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                android.content.Intent r0 = (android.content.Intent) r0
            L9b:
                r4.sendIntent(r0)
                return r1
            L9f:
                r6.enforceInterface(r2)
                r4.releaseBinder()
                r7.writeNoException()
                return r1
            La9:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r6 = r6.readString()
                android.os.IBinder r5 = r4.queryBinder(r5, r6)
                r7.writeNoException()
                r7.writeStrongBinder(r5)
                return r1
            Lbf:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                java.lang.String r2 = r6.readString()
                int r3 = r6.readInt()
                if (r3 == 0) goto Ldd
                android.os.Parcelable$Creator r0 = android.content.Intent.CREATOR
                java.lang.Object r6 = r0.createFromParcel(r6)
                r0 = r6
                android.content.Intent r0 = (android.content.Intent) r0
            Ldd:
                java.lang.String r5 = r4.allocActivityContainer(r5, r8, r2, r0)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            Le8:
                r7.writeString(r2)
                return r1
        }
    }

    java.lang.String allocActivityContainer(java.lang.String r1, int r2, java.lang.String r3, android.content.Intent r4) throws android.os.RemoteException;

    java.lang.String dumpActivities() throws android.os.RemoteException;

    java.lang.String dumpServices() throws android.os.RemoteException;

    com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException;

    void onReceive(java.lang.String r1, java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException;

    android.os.IBinder queryBinder(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    void releaseBinder() throws android.os.RemoteException;

    void sendIntent(android.content.Intent r1) throws android.os.RemoteException;

    void sendIntentSync(android.content.Intent r1) throws android.os.RemoteException;

    int sumActivities() throws android.os.RemoteException;
}
