package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPluginManagerServer extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.replugin.packages.IPluginManagerServer {
        public Default() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void addToRunningPlugins(java.lang.String r1, int r2, java.lang.String r3) throws android.os.RemoteException {
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
        public com.qihoo360.replugin.packages.PluginRunningList getRunningPlugins() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public java.lang.String[] getRunningProcessesByPlugin(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public com.qihoo360.replugin.model.PluginInfo install(java.lang.String r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean isPluginRunning(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.qihoo360.replugin.model.PluginInfo> load() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void syncRunningPlugins(com.qihoo360.replugin.packages.PluginRunningList r1) throws android.os.RemoteException {
                r0 = this;
                return
        }

        @Override
        public boolean uninstall(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAll() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public void updateUsed(java.lang.String r1, boolean r2) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.replugin.packages.IPluginManagerServer {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.replugin.packages.IPluginManagerServer";
        static final int TRANSACTION_addToRunningPlugins = 9;
        static final int TRANSACTION_getRunningPlugins = 6;
        static final int TRANSACTION_getRunningProcessesByPlugin = 10;
        static final int TRANSACTION_install = 1;
        static final int TRANSACTION_isPluginRunning = 7;
        static final int TRANSACTION_load = 3;
        static final int TRANSACTION_syncRunningPlugins = 8;
        static final int TRANSACTION_uninstall = 2;
        static final int TRANSACTION_updateAll = 4;
        static final int TRANSACTION_updateUsed = 5;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.replugin.packages.IPluginManagerServer {
            public static com.qihoo360.replugin.packages.IPluginManagerServer sDefaultImpl;
            private android.os.IBinder mRemote;

            Proxy(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.mRemote = r1
                    return
            }

            @Override
            public void addToRunningPlugins(java.lang.String r6, int r7, java.lang.String r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3f
                    r0.writeInt(r7)     // Catch: java.lang.Throwable -> L3f
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L3f
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3f
                    r3 = 9
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3f
                    if (r2 != 0) goto L35
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    if (r2 == 0) goto L35
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3f
                    r2.addToRunningPlugins(r6, r7, r8)     // Catch: java.lang.Throwable -> L3f
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
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.mRemote
                    return r0
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    return r0
            }

            @Override
            public com.qihoo360.replugin.packages.PluginRunningList getRunningPlugins() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L46
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L46
                    r3 = 6
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L46
                    if (r2 != 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L46
                    com.qihoo360.replugin.packages.PluginRunningList r2 = r2.getRunningPlugins()     // Catch: java.lang.Throwable -> L46
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L46
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L46
                    if (r2 == 0) goto L3e
                    android.os.Parcelable$Creator<com.qihoo360.replugin.packages.PluginRunningList> r2 = com.qihoo360.replugin.packages.PluginRunningList.CREATOR     // Catch: java.lang.Throwable -> L46
                    java.lang.Object r2 = r2.createFromParcel(r1)     // Catch: java.lang.Throwable -> L46
                    com.qihoo360.replugin.packages.PluginRunningList r2 = (com.qihoo360.replugin.packages.PluginRunningList) r2     // Catch: java.lang.Throwable -> L46
                    goto L3f
                L3e:
                    r2 = 0
                L3f:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L46:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public java.lang.String[] getRunningProcessesByPlugin(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 10
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L30
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L30
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    java.lang.String[] r6 = r2.getRunningProcessesByPlugin(r6)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return r6
                L30:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    java.lang.String[] r6 = r1.createStringArray()     // Catch: java.lang.Throwable -> L3e
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
            public com.qihoo360.replugin.model.PluginInfo install(java.lang.String r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L51
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L51
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L16
                    r4 = r2
                    goto L17
                L16:
                    r4 = r3
                L17:
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L51
                    android.os.IBinder r4 = r5.mRemote     // Catch: java.lang.Throwable -> L51
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L51
                    if (r2 != 0) goto L37
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L51
                    if (r2 == 0) goto L37
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L51
                    com.qihoo360.replugin.model.PluginInfo r6 = r2.install(r6, r7)     // Catch: java.lang.Throwable -> L51
                    r1.recycle()
                    r0.recycle()
                    return r6
                L37:
                    r1.readException()     // Catch: java.lang.Throwable -> L51
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L51
                    if (r6 == 0) goto L49
                    android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r6 = com.qihoo360.replugin.model.PluginInfo.CREATOR     // Catch: java.lang.Throwable -> L51
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L51
                    com.qihoo360.replugin.model.PluginInfo r6 = (com.qihoo360.replugin.model.PluginInfo) r6     // Catch: java.lang.Throwable -> L51
                    goto L4a
                L49:
                    r6 = 0
                L4a:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L51:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public boolean isPluginRunning(java.lang.String r6, java.lang.String r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r3 = 7
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L32
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L32
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    boolean r6 = r2.isPluginRunning(r6, r7)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L43
                    if (r6 == 0) goto L3c
                    r4 = 1
                L3c:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L43:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public java.util.List<com.qihoo360.replugin.model.PluginInfo> load() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    java.util.List r2 = r2.load()     // Catch: java.lang.Throwable -> L3c
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
            public void syncRunningPlugins(com.qihoo360.replugin.packages.PluginRunningList r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
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
                    r4 = 8
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L39
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L39
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    r2.syncRunningPlugins(r6)     // Catch: java.lang.Throwable -> L43
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
            public boolean uninstall(com.qihoo360.replugin.model.PluginInfo r7) throws android.os.RemoteException {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4b
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4b
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4b
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4b
                L1b:
                    android.os.IBinder r4 = r6.mRemote     // Catch: java.lang.Throwable -> L4b
                    r5 = 2
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4b
                    if (r4 != 0) goto L39
                    com.qihoo360.replugin.packages.IPluginManagerServer r4 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    if (r4 == 0) goto L39
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L4b
                    boolean r7 = r2.uninstall(r7)     // Catch: java.lang.Throwable -> L4b
                    r1.recycle()
                    r0.recycle()
                    return r7
                L39:
                    r1.readException()     // Catch: java.lang.Throwable -> L4b
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4b
                    if (r7 == 0) goto L43
                    goto L44
                L43:
                    r2 = r3
                L44:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4b:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAll() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3c
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3c
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3c
                    if (r2 != 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    if (r2 == 0) goto L2c
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3c
                    java.util.List r2 = r2.updateAll()     // Catch: java.lang.Throwable -> L3c
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
            public void updateUsed(java.lang.String r6, boolean r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    r2 = 0
                    if (r7 == 0) goto L15
                    r3 = 1
                    goto L16
                L15:
                    r3 = r2
                L16:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r3 = r5.mRemote     // Catch: java.lang.Throwable -> L40
                    r4 = 5
                    boolean r2 = r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L36
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L36
                    com.qihoo360.replugin.packages.IPluginManagerServer r2 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L40
                    r2.updateUsed(r6, r7)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.replugin.packages.IPluginManagerServer asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.replugin.packages.IPluginManagerServer
                if (r1 == 0) goto L13
                com.qihoo360.replugin.packages.IPluginManagerServer r0 = (com.qihoo360.replugin.packages.IPluginManagerServer) r0
                return r0
            L13:
                com.qihoo360.replugin.packages.IPluginManagerServer$Stub$Proxy r0 = new com.qihoo360.replugin.packages.IPluginManagerServer$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.replugin.packages.IPluginManagerServer getDefaultImpl() {
                com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.replugin.packages.IPluginManagerServer r1) {
                com.qihoo360.replugin.packages.IPluginManagerServer r0 = com.qihoo360.replugin.packages.IPluginManagerServer.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.replugin.packages.IPluginManagerServer.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r2 = "com.qihoo360.replugin.packages.IPluginManagerServer"
                if (r5 == r0) goto Lf2
                r0 = 0
                r3 = 0
                switch(r5) {
                    case 1: goto Lce;
                    case 2: goto Lb1;
                    case 3: goto La3;
                    case 4: goto L95;
                    case 5: goto L80;
                    case 6: goto L69;
                    case 7: goto L53;
                    case 8: goto L3a;
                    case 9: goto L24;
                    case 10: goto L12;
                    default: goto Ld;
                }
            Ld:
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L12:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String[] r5 = r4.getRunningProcessesByPlugin(r5)
                r7.writeNoException()
                r7.writeStringArray(r5)
                return r1
            L24:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r8 = r6.readInt()
                java.lang.String r6 = r6.readString()
                r4.addToRunningPlugins(r5, r8, r6)
                r7.writeNoException()
                return r1
            L3a:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L4c
                android.os.Parcelable$Creator<com.qihoo360.replugin.packages.PluginRunningList> r5 = com.qihoo360.replugin.packages.PluginRunningList.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.qihoo360.replugin.packages.PluginRunningList r0 = (com.qihoo360.replugin.packages.PluginRunningList) r0
            L4c:
                r4.syncRunningPlugins(r0)
                r7.writeNoException()
                return r1
            L53:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r6 = r6.readString()
                boolean r5 = r4.isPluginRunning(r5, r6)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L69:
                r6.enforceInterface(r2)
                com.qihoo360.replugin.packages.PluginRunningList r5 = r4.getRunningPlugins()
                r7.writeNoException()
                if (r5 == 0) goto L7c
                r7.writeInt(r1)
                r5.writeToParcel(r7, r1)
                goto L7f
            L7c:
                r7.writeInt(r3)
            L7f:
                return r1
            L80:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r6 = r6.readInt()
                if (r6 == 0) goto L8e
                r3 = r1
            L8e:
                r4.updateUsed(r5, r3)
                r7.writeNoException()
                return r1
            L95:
                r6.enforceInterface(r2)
                java.util.List r5 = r4.updateAll()
                r7.writeNoException()
                r7.writeTypedList(r5)
                return r1
            La3:
                r6.enforceInterface(r2)
                java.util.List r5 = r4.load()
                r7.writeNoException()
                r7.writeTypedList(r5)
                return r1
            Lb1:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto Lc3
                android.os.Parcelable$Creator<com.qihoo360.replugin.model.PluginInfo> r5 = com.qihoo360.replugin.model.PluginInfo.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0
            Lc3:
                boolean r5 = r4.uninstall(r0)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            Lce:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                int r6 = r6.readInt()
                if (r6 == 0) goto Ldd
                r6 = r1
                goto Lde
            Ldd:
                r6 = r3
            Lde:
                com.qihoo360.replugin.model.PluginInfo r5 = r4.install(r5, r6)
                r7.writeNoException()
                if (r5 == 0) goto Lee
                r7.writeInt(r1)
                r5.writeToParcel(r7, r1)
                goto Lf1
            Lee:
                r7.writeInt(r3)
            Lf1:
                return r1
            Lf2:
                r7.writeString(r2)
                return r1
        }
    }

    void addToRunningPlugins(java.lang.String r1, int r2, java.lang.String r3) throws android.os.RemoteException;

    com.qihoo360.replugin.packages.PluginRunningList getRunningPlugins() throws android.os.RemoteException;

    java.lang.String[] getRunningProcessesByPlugin(java.lang.String r1) throws android.os.RemoteException;

    com.qihoo360.replugin.model.PluginInfo install(java.lang.String r1, boolean r2) throws android.os.RemoteException;

    boolean isPluginRunning(java.lang.String r1, java.lang.String r2) throws android.os.RemoteException;

    java.util.List<com.qihoo360.replugin.model.PluginInfo> load() throws android.os.RemoteException;

    void syncRunningPlugins(com.qihoo360.replugin.packages.PluginRunningList r1) throws android.os.RemoteException;

    boolean uninstall(com.qihoo360.replugin.model.PluginInfo r1) throws android.os.RemoteException;

    java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAll() throws android.os.RemoteException;

    void updateUsed(java.lang.String r1, boolean r2) throws android.os.RemoteException;
}
