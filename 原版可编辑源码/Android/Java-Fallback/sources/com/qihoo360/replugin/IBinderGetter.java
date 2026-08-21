package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IBinderGetter extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.replugin.IBinderGetter {
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
        public android.os.IBinder get() throws android.os.RemoteException {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.replugin.IBinderGetter {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.replugin.IBinderGetter";
        static final int TRANSACTION_get = 1;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.replugin.IBinderGetter {
            public static com.qihoo360.replugin.IBinderGetter sDefaultImpl;
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
            public android.os.IBinder get() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.replugin.IBinderGetter"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3a
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.qihoo360.replugin.IBinderGetter r2 = com.qihoo360.replugin.IBinderGetter.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.qihoo360.replugin.IBinderGetter r2 = com.qihoo360.replugin.IBinderGetter.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r2.get()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r1.readStrongBinder()     // Catch: java.lang.Throwable -> L3a
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
                    java.lang.String r0 = "com.qihoo360.replugin.IBinderGetter"
                    return r0
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.replugin.IBinderGetter"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.replugin.IBinderGetter asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.replugin.IBinderGetter"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.replugin.IBinderGetter
                if (r1 == 0) goto L13
                com.qihoo360.replugin.IBinderGetter r0 = (com.qihoo360.replugin.IBinderGetter) r0
                return r0
            L13:
                com.qihoo360.replugin.IBinderGetter$Stub$Proxy r0 = new com.qihoo360.replugin.IBinderGetter$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.replugin.IBinderGetter getDefaultImpl() {
                com.qihoo360.replugin.IBinderGetter r0 = com.qihoo360.replugin.IBinderGetter.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.replugin.IBinderGetter r1) {
                com.qihoo360.replugin.IBinderGetter r0 = com.qihoo360.replugin.IBinderGetter.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.replugin.IBinderGetter.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.qihoo360.replugin.IBinderGetter"
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
                android.os.IBinder r4 = r3.get()
                r6.writeNoException()
                r6.writeStrongBinder(r4)
                return r0
        }
    }

    android.os.IBinder get() throws android.os.RemoteException;
}
