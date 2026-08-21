package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginHost extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.loader2.IPluginHost {
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
        public java.lang.String attachPluginProcess(java.lang.String r1, int r2, android.os.IBinder r3, java.lang.String r4) throws android.os.RemoteException {
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
        public android.os.IBinder fetchBinder(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.qihoo360.replugin.packages.IPluginManagerServer fetchManagerServer() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public long fetchPersistentCookie() throws android.os.RemoteException {
                r2 = this;
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
        public int getPidByProcessName(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.lang.String getProcessNameByPid(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int getTaskAffinityGroupIndex(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void installBinder(java.lang.String r1, android.os.IBinder r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean isProcessAlive(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.qihoo360.replugin.model.PluginInfo> listPlugins() throws android.os.RemoteException {
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
        public com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean pluginExtracted(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean pluginUninstalled(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.os.IBinder queryPluginBinder(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List queryPluginsReceiverList(android.content.Intent r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void regActivity(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void regPluginBinder(com.qihoo360.loader2.PluginBinderInfo r1, android.os.IBinder r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void regReceiver(java.lang.String r1, java.util.Map r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void regService(int r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntent2Plugin(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntent2PluginSync(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntent2Process(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void sendIntent2ProcessSync(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public com.qihoo360.loader2.IPluginClient startPluginProcess(java.lang.String r1, int r2, com.qihoo360.loader2.PluginBinderInfo r3) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public int sumBinders(int r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void unregActivity(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void unregPluginBinder(com.qihoo360.loader2.PluginBinderInfo r1, android.os.IBinder r2) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void unregReceiver() throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void unregService(int r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public void updatePluginInfo(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.loader2.IPluginHost {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.loader2.IPluginHost";
        static final int TRANSACTION_attachPluginProcess = 5;
        static final int TRANSACTION_dump = 33;
        static final int TRANSACTION_fetchBinder = 2;
        static final int TRANSACTION_fetchManagerServer = 29;
        static final int TRANSACTION_fetchPersistentCookie = 3;
        static final int TRANSACTION_fetchServiceServer = 28;
        static final int TRANSACTION_getPidByProcessName = 31;
        static final int TRANSACTION_getProcessNameByPid = 32;
        static final int TRANSACTION_getTaskAffinityGroupIndex = 30;
        static final int TRANSACTION_installBinder = 1;
        static final int TRANSACTION_isProcessAlive = 25;
        static final int TRANSACTION_listPlugins = 6;
        static final int TRANSACTION_onReceive = 15;
        static final int TRANSACTION_pluginDownloaded = 18;
        static final int TRANSACTION_pluginExtracted = 20;
        static final int TRANSACTION_pluginUninstalled = 19;
        static final int TRANSACTION_queryPluginBinder = 26;
        static final int TRANSACTION_queryPluginsReceiverList = 27;
        static final int TRANSACTION_regActivity = 7;
        static final int TRANSACTION_regPluginBinder = 11;
        static final int TRANSACTION_regReceiver = 13;
        static final int TRANSACTION_regService = 9;
        static final int TRANSACTION_sendIntent2Plugin = 22;
        static final int TRANSACTION_sendIntent2PluginSync = 24;
        static final int TRANSACTION_sendIntent2Process = 21;
        static final int TRANSACTION_sendIntent2ProcessSync = 23;
        static final int TRANSACTION_startPluginProcess = 4;
        static final int TRANSACTION_sumBinders = 16;
        static final int TRANSACTION_unregActivity = 8;
        static final int TRANSACTION_unregPluginBinder = 12;
        static final int TRANSACTION_unregReceiver = 14;
        static final int TRANSACTION_unregService = 10;
        static final int TRANSACTION_updatePluginInfo = 17;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.loader2.IPluginHost {
            public static com.qihoo360.loader2.IPluginHost sDefaultImpl;
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
            public java.lang.String attachPluginProcess(java.lang.String r6, int r7, android.os.IBinder r8, java.lang.String r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L46
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L46
                    r0.writeStrongBinder(r8)     // Catch: java.lang.Throwable -> L46
                    r0.writeString(r9)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r3 = 5
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    java.lang.String r6 = r2.attachPluginProcess(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return r6
                L38:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    java.lang.String r6 = r1.readString()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return r6
                L46:
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
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 33
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    java.lang.String r2 = r2.dump()     // Catch: java.lang.Throwable -> L3b
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
            public android.os.IBinder fetchBinder(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3d
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r6 = r2.fetchBinder(r6)     // Catch: java.lang.Throwable -> L3d
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
            public com.qihoo360.replugin.packages.IPluginManagerServer fetchManagerServer() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 29
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = r2.fetchManagerServer()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public long fetchPersistentCookie() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    long r2 = r2.fetchPersistentCookie()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    long r2 = r1.readLong()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3a:
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
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 28
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L2d
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = r2.fetchServiceServer()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2d:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3f
                    com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = com.qihoo360.replugin.component.service.server.IPluginServiceServer.Stub.asInterface(r2)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3f:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.loader2.IPluginHost"
                    return r0
            }

            @Override
            public int getPidByProcessName(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 31
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r2.getPidByProcessName(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.lang.String getProcessNameByPid(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 32
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    java.lang.String r6 = r2.getProcessNameByPid(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    java.lang.String r6 = r1.readString()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int getTaskAffinityGroupIndex(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 30
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r2.getTaskAffinityGroupIndex(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void installBinder(java.lang.String r6, android.os.IBinder r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3b
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3b
                    r0.writeStrongBinder(r7)     // Catch: java.lang.Throwable -> L3b
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3b
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3b
                    if (r2 != 0) goto L31
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    if (r2 == 0) goto L31
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3b
                    r2.installBinder(r6, r7)     // Catch: java.lang.Throwable -> L3b
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
            public boolean isProcessAlive(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 25
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.isProcessAlive(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.qihoo360.replugin.model.PluginInfo> listPlugins() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    java.util.List r2 = r2.listPlugins()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r2 = com.qihoo360.replugin.model.PluginInfo.CREATOR     // Catch: java.lang.Throwable -> L3c
                    java.util.ArrayList r2 = r1.createTypedArrayList(r2)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3c:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void onReceive(java.lang.String r6, java.lang.String r7, android.content.Intent r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
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
                    r4 = 15
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L49
                    if (r2 != 0) goto L3f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    if (r2 == 0) goto L3f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
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
            public com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L52
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L52
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L52
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L52
                    r4 = 18
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L52
                    if (r2 != 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L52
                    if (r2 == 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L52
                    com.qihoo360.replugin.model.PluginInfo r6 = r2.pluginDownloaded(r6, r7)     // Catch: java.lang.Throwable -> L52
                    r1.recycle()
                    r0.recycle()
                    return r6
                L38:
                    r1.readException()     // Catch: java.lang.Throwable -> L52
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L52
                    if (r6 == 0) goto L4a
                    android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r6 = com.qihoo360.replugin.model.PluginInfo.CREATOR     // Catch: java.lang.Throwable -> L52
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L52
                    com.qihoo360.replugin.model.PluginInfo r6 = (com.qihoo360.replugin.model.PluginInfo) r6     // Catch: java.lang.Throwable -> L52
                    goto L4b
                L4a:
                    r6 = 0
                L4b:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L52:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean pluginExtracted(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 20
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    boolean r6 = r2.pluginExtracted(r6)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L41
                    if (r6 == 0) goto L3a
                    r4 = 1
                L3a:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean pluginUninstalled(com.qihoo360.replugin.model.PluginInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4c
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4c
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4c
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4c
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4c
                    r5 = 19
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4c
                    if (r4 != 0) goto L3a
                    com.qihoo360.loader2.IPluginHost r4 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    if (r4 == 0) goto L3a
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4c
                    boolean r7 = r2.pluginUninstalled(r7)     // Catch: java.lang.Throwable -> L4c
                    r1.recycle()
                    r0.recycle()
                    return r7
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L4c
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4c
                    if (r7 == 0) goto L44
                    goto L45
                L44:
                    r2 = r3
                L45:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4c:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public android.os.IBinder queryPluginBinder(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 26
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L33
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L33
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r6 = r2.queryPluginBinder(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L33:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return r6
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List queryPluginsReceiverList(android.content.Intent r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L50
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L50
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L50
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L50
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L50
                    r4 = 27
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L50
                    if (r2 != 0) goto L3a
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L50
                    if (r2 == 0) goto L3a
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L50
                    java.util.List r6 = r2.queryPluginsReceiverList(r6)     // Catch: java.lang.Throwable -> L50
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L50
                    java.lang.Class r6 = r5.getClass()     // Catch: java.lang.Throwable -> L50
                    java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.Throwable -> L50
                    java.util.ArrayList r6 = r1.readArrayList(r6)     // Catch: java.lang.Throwable -> L50
                    r1.recycle()
                    r0.recycle()
                    return r6
                L50:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void regActivity(int r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L41
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L41
                    r0.writeString(r9)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L41
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L41
                    if (r2 != 0) goto L37
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    if (r2 == 0) goto L37
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L41
                    r2.regActivity(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L41
                    r1.recycle()
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void regPluginBinder(com.qihoo360.loader2.PluginBinderInfo r6, android.os.IBinder r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L46
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L46
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L46
                L1b:
                    r0.writeStrongBinder(r7)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r4 = 11
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    r2.regPluginBinder(r6, r7)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void regReceiver(java.lang.String r6, java.util.Map r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3c
                    r0.writeMap(r7)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 13
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L32
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L32
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    r2.regReceiver(r6, r7)     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L3c
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void regService(int r6, java.lang.String r7, java.lang.String r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L35
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L35
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    r2.regService(r6, r7, r8)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L3f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void sendIntent2Plugin(java.lang.String r6, android.content.Intent r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L3a
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3a
                    r1 = 1
                    r2 = 0
                    if (r7 == 0) goto L17
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L3a
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L3a
                    goto L1a
                L17:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L3a
                L1a:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 22
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L3a
                    if (r1 != 0) goto L36
                    com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r1 == 0) goto L36
                    com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    r1.sendIntent2Plugin(r6, r7)     // Catch: java.lang.Throwable -> L3a
                    r0.recycle()
                    return
                L36:
                    r0.recycle()
                    return
                L3a:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public void sendIntent2PluginSync(java.lang.String r6, android.content.Intent r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L46
                    r2 = 0
                    if (r7 == 0) goto L1b
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L46
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L46
                    goto L1e
                L1b:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L46
                L1e:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r4 = 24
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    r2.sendIntent2PluginSync(r6, r7)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void sendIntent2Process(java.lang.String r6, android.content.Intent r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L3a
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3a
                    r1 = 1
                    r2 = 0
                    if (r7 == 0) goto L17
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L3a
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L3a
                    goto L1a
                L17:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L3a
                L1a:
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 21
                    r4 = 0
                    boolean r1 = r2.transact(r3, r0, r4, r1)     // Catch: java.lang.Throwable -> L3a
                    if (r1 != 0) goto L36
                    com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r1 == 0) goto L36
                    com.qihoo360.loader2.IPluginHost r1 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    r1.sendIntent2Process(r6, r7)     // Catch: java.lang.Throwable -> L3a
                    r0.recycle()
                    return
                L36:
                    r0.recycle()
                    return
                L3a:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public void sendIntent2ProcessSync(java.lang.String r6, android.content.Intent r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L46
                    r2 = 0
                    if (r7 == 0) goto L1b
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L46
                    r7.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L46
                    goto L1e
                L1b:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L46
                L1e:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r4 = 23
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    r2.sendIntent2ProcessSync(r6, r7)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public com.qihoo360.loader2.IPluginClient startPluginProcess(java.lang.String r6, int r7, com.qihoo360.loader2.PluginBinderInfo r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L5a
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L5a
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L5a
                    r2 = 0
                    if (r8 == 0) goto L1e
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L5a
                    r8.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L5a
                    goto L21
                L1e:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L5a
                L21:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L5a
                    r4 = 4
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L5a
                    if (r2 != 0) goto L3f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5a
                    if (r2 == 0) goto L3f
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L5a
                    com.qihoo360.loader2.IPluginClient r6 = r2.startPluginProcess(r6, r7, r8)     // Catch: java.lang.Throwable -> L5a
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3f:
                    r1.readException()     // Catch: java.lang.Throwable -> L5a
                    android.os.IBinder r6 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L5a
                    com.qihoo360.loader2.IPluginClient r6 = com.qihoo360.loader2.IPluginClient.Stub.asInterface(r6)     // Catch: java.lang.Throwable -> L5a
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L5a
                    if (r7 == 0) goto L53
                    r8.readFromParcel(r1)     // Catch: java.lang.Throwable -> L5a
                L53:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L5a:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public int sumBinders(int r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 16
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r2.sumBinders(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void unregActivity(int r6, java.lang.String r7, java.lang.String r8, java.lang.String r9) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L42
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L42
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L42
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L42
                    r0.writeString(r9)     // Catch: java.lang.Throwable -> L42
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L42
                    r3 = 8
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L42
                    if (r2 != 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    if (r2 == 0) goto L38
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L42
                    r2.unregActivity(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L42
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
            public void unregPluginBinder(com.qihoo360.loader2.PluginBinderInfo r6, android.os.IBinder r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L46
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L46
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L46
                L1b:
                    r0.writeStrongBinder(r7)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r4 = 12
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    r2.unregPluginBinder(r6, r7)     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return
                L46:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void unregReceiver() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L36
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L36
                    r3 = 14
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L36
                    if (r2 != 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    if (r2 == 0) goto L2c
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L36
                    r2.unregReceiver()     // Catch: java.lang.Throwable -> L36
                    r1.recycle()
                    r0.recycle()
                    return
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L36
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void unregService(int r6, java.lang.String r7, java.lang.String r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L35
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L35
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    r2.unregService(r6, r7, r8)     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L3f
                    r1.recycle()
                    r0.recycle()
                    return
                L3f:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public void updatePluginInfo(com.qihoo360.replugin.model.PluginInfo r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r2 = 0
                    if (r6 == 0) goto L18
                    r3 = 1
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L43
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L43
                    goto L1b
                L18:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L43
                L1b:
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r4 = 17
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.updatePluginInfo(r6)     // Catch: java.lang.Throwable -> L43
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
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.loader2.IPluginHost"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.loader2.IPluginHost asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.loader2.IPluginHost"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.loader2.IPluginHost
                if (r1 == 0) goto L13
                com.qihoo360.loader2.IPluginHost r0 = (com.qihoo360.loader2.IPluginHost) r0
                return r0
            L13:
                com.qihoo360.loader2.IPluginHost$Stub$Proxy r0 = new com.qihoo360.loader2.IPluginHost$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.loader2.IPluginHost getDefaultImpl() {
                com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.IPluginHost.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.loader2.IPluginHost r1) {
                com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.IPluginHost.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.loader2.IPluginHost.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r2 = "com.qihoo360.loader2.IPluginHost"
                if (r5 == r0) goto L324
                r0 = 0
                r3 = 0
                switch(r5) {
                    case 1: goto L312;
                    case 2: goto L300;
                    case 3: goto L2f2;
                    case 4: goto L2ba;
                    case 5: goto L29c;
                    case 6: goto L28e;
                    case 7: goto L274;
                    case 8: goto L25a;
                    case 9: goto L244;
                    case 10: goto L22e;
                    case 11: goto L211;
                    case 12: goto L1f4;
                    case 13: goto L1da;
                    case 14: goto L1d0;
                    case 15: goto L1af;
                    case 16: goto L19d;
                    case 17: goto L184;
                    case 18: goto L160;
                    case 19: goto L143;
                    case 20: goto L131;
                    case 21: goto L117;
                    case 22: goto Lfd;
                    case 23: goto Le0;
                    case 24: goto Lc3;
                    case 25: goto Lb1;
                    case 26: goto L9b;
                    case 27: goto L7e;
                    case 28: goto L6a;
                    case 29: goto L56;
                    case 30: goto L44;
                    case 31: goto L32;
                    case 32: goto L20;
                    case 33: goto L12;
                    default: goto Ld;
                }
            Ld:
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L12:
                r6.enforceInterface(r2)
                java.lang.String r5 = r4.dump()
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L20:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                java.lang.String r5 = r4.getProcessNameByPid(r5)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L32:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r5 = r4.getPidByProcessName(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L44:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r5 = r4.getTaskAffinityGroupIndex(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L56:
                r6.enforceInterface(r2)
                com.qihoo360.replugin.packages.IPluginManagerServer r5 = r4.fetchManagerServer()
                r7.writeNoException()
                if (r5 == 0) goto L66
                android.os.IBinder r3 = r5.asBinder()
            L66:
                r7.writeStrongBinder(r3)
                return r1
            L6a:
                r6.enforceInterface(r2)
                com.qihoo360.replugin.component.service.server.IPluginServiceServer r5 = r4.fetchServiceServer()
                r7.writeNoException()
                if (r5 == 0) goto L7a
                android.os.IBinder r3 = r5.asBinder()
            L7a:
                r7.writeStrongBinder(r3)
                return r1
            L7e:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L90
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r3 = r5
                android.content.Intent r3 = (android.content.Intent) r3
            L90:
                java.util.List r5 = r4.queryPluginsReceiverList(r3)
                r7.writeNoException()
                r7.writeList(r5)
                return r1
            L9b:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r6 = r6.readString()
                android.os.IBinder r5 = r4.queryPluginBinder(r5, r6)
                r7.writeNoException()
                r7.writeStrongBinder(r5)
                return r1
            Lb1:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                boolean r5 = r4.isProcessAlive(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            Lc3:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                if (r8 == 0) goto Ld9
                android.os.Parcelable$Creator r8 = android.content.Intent.CREATOR
                java.lang.Object r6 = r8.createFromParcel(r6)
                r3 = r6
                android.content.Intent r3 = (android.content.Intent) r3
            Ld9:
                r4.sendIntent2PluginSync(r5, r3)
                r7.writeNoException()
                return r1
            Le0:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                if (r8 == 0) goto Lf6
                android.os.Parcelable$Creator r8 = android.content.Intent.CREATOR
                java.lang.Object r6 = r8.createFromParcel(r6)
                r3 = r6
                android.content.Intent r3 = (android.content.Intent) r3
            Lf6:
                r4.sendIntent2ProcessSync(r5, r3)
                r7.writeNoException()
                return r1
            Lfd:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r7 = r6.readInt()
                if (r7 == 0) goto L113
                android.os.Parcelable$Creator r7 = android.content.Intent.CREATOR
                java.lang.Object r6 = r7.createFromParcel(r6)
                r3 = r6
                android.content.Intent r3 = (android.content.Intent) r3
            L113:
                r4.sendIntent2Plugin(r5, r3)
                return r1
            L117:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r7 = r6.readInt()
                if (r7 == 0) goto L12d
                android.os.Parcelable$Creator r7 = android.content.Intent.CREATOR
                java.lang.Object r6 = r7.createFromParcel(r6)
                r3 = r6
                android.content.Intent r3 = (android.content.Intent) r3
            L12d:
                r4.sendIntent2Process(r5, r3)
                return r1
            L131:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                boolean r5 = r4.pluginExtracted(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L143:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L155
                android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r5 = com.qihoo360.replugin.model.PluginInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r3 = r5
                com.qihoo360.replugin.model.PluginInfo r3 = (com.qihoo360.replugin.model.PluginInfo) r3
            L155:
                boolean r5 = r4.pluginUninstalled(r3)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L160:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r6 = r6.readInt()
                if (r6 == 0) goto L16f
                r6 = r1
                goto L170
            L16f:
                r6 = r0
            L170:
                com.qihoo360.replugin.model.PluginInfo r5 = r4.pluginDownloaded(r5, r6)
                r7.writeNoException()
                if (r5 == 0) goto L180
                r7.writeInt(r1)
                r5.writeToParcel(r7, r1)
                goto L183
            L180:
                r7.writeInt(r0)
            L183:
                return r1
            L184:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L196
                android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r5 = com.qihoo360.replugin.model.PluginInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r3 = r5
                com.qihoo360.replugin.model.PluginInfo r3 = (com.qihoo360.replugin.model.PluginInfo) r3
            L196:
                r4.updatePluginInfo(r3)
                r7.writeNoException()
                return r1
            L19d:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                int r5 = r4.sumBinders(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L1af:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r8 = r6.readString()
                int r0 = r6.readInt()
                if (r0 == 0) goto L1c9
                android.os.Parcelable$Creator r0 = android.content.Intent.CREATOR
                java.lang.Object r6 = r0.createFromParcel(r6)
                r3 = r6
                android.content.Intent r3 = (android.content.Intent) r3
            L1c9:
                r4.onReceive(r5, r8, r3)
                r7.writeNoException()
                return r1
            L1d0:
                r6.enforceInterface(r2)
                r4.unregReceiver()
                r7.writeNoException()
                return r1
            L1da:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.Class r8 = r4.getClass()
                java.lang.ClassLoader r8 = r8.getClassLoader()
                java.util.HashMap r6 = r6.readHashMap(r8)
                r4.regReceiver(r5, r6)
                r7.writeNoException()
                return r1
            L1f4:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L206
                android.os.Parcelable$Creator<com.qihoo360.loader2.PluginBinderInfo> r5 = com.qihoo360.loader2.PluginBinderInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r3 = r5
                com.qihoo360.loader2.PluginBinderInfo r3 = (com.qihoo360.loader2.PluginBinderInfo) r3
            L206:
                android.os.IBinder r5 = r6.readStrongBinder()
                r4.unregPluginBinder(r3, r5)
                r7.writeNoException()
                return r1
            L211:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L223
                android.os.Parcelable$Creator<com.qihoo360.loader2.PluginBinderInfo> r5 = com.qihoo360.loader2.PluginBinderInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r3 = r5
                com.qihoo360.loader2.PluginBinderInfo r3 = (com.qihoo360.loader2.PluginBinderInfo) r3
            L223:
                android.os.IBinder r5 = r6.readStrongBinder()
                r4.regPluginBinder(r3, r5)
                r7.writeNoException()
                return r1
            L22e:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                java.lang.String r8 = r6.readString()
                java.lang.String r6 = r6.readString()
                r4.unregService(r5, r8, r6)
                r7.writeNoException()
                return r1
            L244:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                java.lang.String r8 = r6.readString()
                java.lang.String r6 = r6.readString()
                r4.regService(r5, r8, r6)
                r7.writeNoException()
                return r1
            L25a:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                java.lang.String r8 = r6.readString()
                java.lang.String r0 = r6.readString()
                java.lang.String r6 = r6.readString()
                r4.unregActivity(r5, r8, r0, r6)
                r7.writeNoException()
                return r1
            L274:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                java.lang.String r8 = r6.readString()
                java.lang.String r0 = r6.readString()
                java.lang.String r6 = r6.readString()
                r4.regActivity(r5, r8, r0, r6)
                r7.writeNoException()
                return r1
            L28e:
                r6.enforceInterface(r2)
                java.util.List r5 = r4.listPlugins()
                r7.writeNoException()
                r7.writeTypedList(r5)
                return r1
            L29c:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                android.os.IBinder r0 = r6.readStrongBinder()
                java.lang.String r6 = r6.readString()
                java.lang.String r5 = r4.attachPluginProcess(r5, r8, r0, r6)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L2ba:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                int r2 = r6.readInt()
                if (r2 == 0) goto L2d4
                android.os.Parcelable$Creator<com.qihoo360.loader2.PluginBinderInfo> r2 = com.qihoo360.loader2.PluginBinderInfo.CREATOR
                java.lang.Object r6 = r2.createFromParcel(r6)
                com.qihoo360.loader2.PluginBinderInfo r6 = (com.qihoo360.loader2.PluginBinderInfo) r6
                goto L2d5
            L2d4:
                r6 = r3
            L2d5:
                com.qihoo360.loader2.IPluginClient r5 = r4.startPluginProcess(r5, r8, r6)
                r7.writeNoException()
                if (r5 == 0) goto L2e2
                android.os.IBinder r3 = r5.asBinder()
            L2e2:
                r7.writeStrongBinder(r3)
                if (r6 == 0) goto L2ee
                r7.writeInt(r1)
                r6.writeToParcel(r7, r1)
                goto L2f1
            L2ee:
                r7.writeInt(r0)
            L2f1:
                return r1
            L2f2:
                r6.enforceInterface(r2)
                long r5 = r4.fetchPersistentCookie()
                r7.writeNoException()
                r7.writeLong(r5)
                return r1
            L300:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                android.os.IBinder r5 = r4.fetchBinder(r5)
                r7.writeNoException()
                r7.writeStrongBinder(r5)
                return r1
            L312:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                android.os.IBinder r6 = r6.readStrongBinder()
                r4.installBinder(r5, r6)
                r7.writeNoException()
                return r1
            L324:
                r7.writeString(r2)
                return r1
        }
    }

    java.lang.String attachPluginProcess(java.lang.String r1, int r2, android.os.IBinder r3, java.lang.String r4) throws android.os.RemoteException;

    java.lang.String dump() throws android.os.RemoteException;

    android.os.IBinder fetchBinder(java.lang.String r1) throws android.os.RemoteException;

    com.qihoo360.replugin.packages.IPluginManagerServer fetchManagerServer() throws android.os.RemoteException;

    long fetchPersistentCookie() throws android.os.RemoteException;

    com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchServiceServer() throws android.os.RemoteException;

    int getPidByProcessName(java.lang.String r1) throws android.os.RemoteException;

    java.lang.String getProcessNameByPid(int r1) throws android.os.RemoteException;

    int getTaskAffinityGroupIndex(java.lang.String r1) throws android.os.RemoteException;

    void installBinder(java.lang.String r1, android.os.IBinder r2) throws android.os.RemoteException;

    boolean isProcessAlive(java.lang.String r1) throws android.os.RemoteException;

    java.util.List<com.qihoo360.replugin.model.PluginInfo> listPlugins() throws android.os.RemoteException;

    void onReceive(java.lang.String r1, java.lang.String r2, android.content.Intent r3) throws android.os.RemoteException;

    com.qihoo360.replugin.model.PluginInfo pluginDownloaded(java.lang.String r1, boolean r2) throws android.os.RemoteException;

    boolean pluginExtracted(java.lang.String r1) throws android.os.RemoteException;

    boolean pluginUninstalled(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException;

    android.os.IBinder queryPluginBinder(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    java.util.List queryPluginsReceiverList(android.content.Intent r1) throws android.os.RemoteException;

    void regActivity(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException;

    void regPluginBinder(com.qihoo360.loader2.PluginBinderInfo r1, android.os.IBinder r2) throws android.os.RemoteException;

    void regReceiver(java.lang.String r1, java.util.Map r2) throws android.os.RemoteException;

    void regService(int r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException;

    void sendIntent2Plugin(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException;

    void sendIntent2PluginSync(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException;

    void sendIntent2Process(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException;

    void sendIntent2ProcessSync(java.lang.String r1, android.content.Intent r2) throws android.os.RemoteException;

    com.qihoo360.loader2.IPluginClient startPluginProcess(java.lang.String r1, int r2, com.qihoo360.loader2.PluginBinderInfo r3) throws android.os.RemoteException;

    int sumBinders(int r1) throws android.os.RemoteException;

    void unregActivity(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) throws android.os.RemoteException;

    void unregPluginBinder(com.qihoo360.loader2.PluginBinderInfo r1, android.os.IBinder r2) throws android.os.RemoteException;

    void unregReceiver() throws android.os.RemoteException;

    void unregService(int r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException;

    void updatePluginInfo(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException;
}
