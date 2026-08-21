package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceWrapper implements android.os.IBinder, android.os.IBinder.DeathRecipient {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = null;
    private final android.content.Context mAppCpntext;
    private final java.lang.String mName;
    private android.os.IBinder mRemote;

    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "ServiceWrapper"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.ServiceWrapper> r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG = r0
            return
    }

    private ServiceWrapper(android.content.Context r1, java.lang.String r2, android.os.IBinder r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.mAppCpntext = r1
            r0.mRemote = r3
            r0.mName = r2
            r1 = 0
            r3.linkToDeath(r0, r1)     // Catch: android.os.RemoteException -> L12
            goto L1e
        L12:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r2 == 0) goto L1e
            java.lang.String r2 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r3 = "linkToDeath ex"
            android.util.Log.d(r2, r3, r1)
        L1e:
            return
    }

    public static android.os.IBinder factory(android.content.Context r3, java.lang.String r4, android.os.IBinder r5) {
            java.lang.String r0 = r5.getInterfaceDescriptor()     // Catch: android.os.RemoteException -> L5
            goto L12
        L5:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r1 == 0) goto L11
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r2 = "getInterfaceDescriptor()"
            android.util.Log.d(r1, r2, r0)
        L11:
            r0 = 0
        L12:
            android.os.IInterface r0 = r5.queryLocalInterface(r0)
            if (r0 == 0) goto L19
            return r5
        L19:
            com.qihoo360.mobilesafe.svcmanager.ServiceWrapper r0 = new com.qihoo360.mobilesafe.svcmanager.ServiceWrapper
            r0.<init>(r3, r4, r5)
            return r0
    }

    private android.os.IBinder getRemoteBinder() throws android.os.RemoteException {
            r2 = this;
            android.os.IBinder r0 = r2.mRemote
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = r2.mAppCpntext
            com.qihoo360.mobilesafe.svcmanager.IServiceChannel r0 = com.qihoo360.mobilesafe.svcmanager.QihooServiceManager.getServerChannel(r0)
            if (r0 == 0) goto L1e
            java.lang.String r1 = r2.mName
            android.os.IBinder r0 = r0.getService(r1)
            if (r0 == 0) goto L18
            r2.mRemote = r0
            return r0
        L18:
            android.os.RemoteException r0 = new android.os.RemoteException
            r0.<init>()
            throw r0
        L1e:
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r1 = "sw.grb: s is n"
            android.util.Log.e(r0, r1)
            android.os.RemoteException r0 = new android.os.RemoteException
            r0.<init>()
            throw r0
    }

    @Override
    public void binderDied() {
            r3 = this;
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r0 == 0) goto L1c
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ServiceWrapper [binderDied]: "
            r1.append(r2)
            java.lang.String r2 = r3.mName
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
        L1c:
            r0 = 0
            r3.mRemote = r0
            return
    }

    @Override
    public void dump(java.io.FileDescriptor r2, java.lang.String[] r3) throws android.os.RemoteException {
            r1 = this;
            android.os.IBinder r0 = r1.getRemoteBinder()
            r0.dump(r2, r3)
            return
    }

    @Override
    public void dumpAsync(java.io.FileDescriptor r1, java.lang.String[] r2) throws android.os.RemoteException {
            r0 = this;
            return
    }

    @Override
    public java.lang.String getInterfaceDescriptor() throws android.os.RemoteException {
            r1 = this;
            android.os.IBinder r0 = r1.getRemoteBinder()
            java.lang.String r0 = r0.getInterfaceDescriptor()
            return r0
    }

    @Override
    public boolean isBinderAlive() {
            r3 = this;
            android.os.IBinder r0 = r3.getRemoteBinder()     // Catch: android.os.RemoteException -> L9
            boolean r0 = r0.isBinderAlive()     // Catch: android.os.RemoteException -> L9
            return r0
        L9:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r1 == 0) goto L15
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r2 = "isBinderAlive()"
            android.util.Log.d(r1, r2, r0)
        L15:
            r0 = 0
            return r0
    }

    @Override
    public void linkToDeath(android.os.IBinder.DeathRecipient r1, int r2) throws android.os.RemoteException {
            r0 = this;
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r1 != 0) goto L5
            return
        L5:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "ServiceWrapper does NOT support Death Recipient!"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public boolean pingBinder() {
            r3 = this;
            android.os.IBinder r0 = r3.getRemoteBinder()     // Catch: android.os.RemoteException -> L9
            boolean r0 = r0.pingBinder()     // Catch: android.os.RemoteException -> L9
            return r0
        L9:
            r0 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r1 == 0) goto L15
            java.lang.String r1 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r2 = "getRemoteBinder()"
            android.util.Log.d(r1, r2, r0)
        L15:
            r0 = 0
            return r0
    }

    @Override
    public android.os.IInterface queryLocalInterface(java.lang.String r3) {
            r2 = this;
            android.os.IBinder r0 = r2.getRemoteBinder()     // Catch: android.os.RemoteException -> L9
            android.os.IInterface r3 = r0.queryLocalInterface(r3)     // Catch: android.os.RemoteException -> L9
            return r3
        L9:
            r3 = move-exception
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.DEBUG
            if (r0 == 0) goto L15
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.ServiceWrapper.TAG
            java.lang.String r1 = "queryLocalInterface()"
            android.util.Log.d(r0, r1, r3)
        L15:
            r3 = 0
            return r3
    }

    @Override
    public boolean transact(int r2, android.os.Parcel r3, android.os.Parcel r4, int r5) throws android.os.RemoteException {
            r1 = this;
            android.os.IBinder r0 = r1.getRemoteBinder()
            boolean r2 = r0.transact(r2, r3, r4, r5)
            return r2
    }

    @Override
    public boolean unlinkToDeath(android.os.IBinder.DeathRecipient r1, int r2) {
            r0 = this;
            r1 = 0
            return r1
    }
}
