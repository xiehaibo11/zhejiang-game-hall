package com.qihoo360.loader2.mgr;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IServiceConnection extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.loader2.mgr.IServiceConnection {
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
        public void connected(android.content.ComponentName r1, android.os.IBinder r2) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.loader2.mgr.IServiceConnection {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.loader2.mgr.IServiceConnection";
        static final int TRANSACTION_connected = 1;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.loader2.mgr.IServiceConnection {
            public static com.qihoo360.loader2.mgr.IServiceConnection sDefaultImpl;
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
            public void connected(android.content.ComponentName r5, android.os.IBinder r6) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.qihoo360.loader2.mgr.IServiceConnection"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L38
                    r1 = 0
                    r2 = 1
                    if (r5 == 0) goto L14
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L38
                    r5.writeToParcel(r0, r1)     // Catch: java.lang.Throwable -> L38
                    goto L17
                L14:
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L38
                L17:
                    r0.writeStrongBinder(r6)     // Catch: java.lang.Throwable -> L38
                    android.os.IBinder r1 = r4.mRemote     // Catch: java.lang.Throwable -> L38
                    r3 = 0
                    boolean r1 = r1.transact(r2, r0, r3, r2)     // Catch: java.lang.Throwable -> L38
                    if (r1 != 0) goto L34
                    com.qihoo360.loader2.mgr.IServiceConnection r1 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    if (r1 == 0) goto L34
                    com.qihoo360.loader2.mgr.IServiceConnection r1 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L38
                    r1.connected(r5, r6)     // Catch: java.lang.Throwable -> L38
                    r0.recycle()
                    return
                L34:
                    r0.recycle()
                    return
                L38:
                    r5 = move-exception
                    r0.recycle()
                    throw r5
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.loader2.mgr.IServiceConnection"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.loader2.mgr.IServiceConnection"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.loader2.mgr.IServiceConnection asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.loader2.mgr.IServiceConnection"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.loader2.mgr.IServiceConnection
                if (r1 == 0) goto L13
                com.qihoo360.loader2.mgr.IServiceConnection r0 = (com.qihoo360.loader2.mgr.IServiceConnection) r0
                return r0
            L13:
                com.qihoo360.loader2.mgr.IServiceConnection$Stub$Proxy r0 = new com.qihoo360.loader2.mgr.IServiceConnection$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.loader2.mgr.IServiceConnection getDefaultImpl() {
                com.qihoo360.loader2.mgr.IServiceConnection r0 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.loader2.mgr.IServiceConnection r1) {
                com.qihoo360.loader2.mgr.IServiceConnection r0 = com.qihoo360.loader2.mgr.IServiceConnection.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.loader2.mgr.IServiceConnection.Stub.Proxy.sDefaultImpl = r1
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
                r0 = 1
                java.lang.String r1 = "com.qihoo360.loader2.mgr.IServiceConnection"
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
                if (r4 == 0) goto L25
                android.os.Parcelable$Creator r4 = android.content.ComponentName.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                android.content.ComponentName r4 = (android.content.ComponentName) r4
                goto L26
            L25:
                r4 = 0
            L26:
                android.os.IBinder r5 = r5.readStrongBinder()
                r3.connected(r4, r5)
                return r0
        }
    }

    void connected(android.content.ComponentName r1, android.os.IBinder r2) throws android.os.RemoteException;
}
