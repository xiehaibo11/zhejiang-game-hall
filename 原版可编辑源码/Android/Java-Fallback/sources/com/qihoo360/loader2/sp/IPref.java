package com.qihoo360.loader2.sp;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface IPref extends android.os.IInterface {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class Default implements com.qihoo360.loader2.sp.IPref {
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
        public java.lang.String get(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public android.os.Bundle getAll(java.lang.String r1) throws android.os.RemoteException {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public void set(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException {
                r0 = this;
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static abstract class Stub extends android.os.Binder implements com.qihoo360.loader2.sp.IPref {
        private static final java.lang.String DESCRIPTOR = "com.qihoo360.loader2.sp.IPref";
        static final int TRANSACTION_get = 1;
        static final int TRANSACTION_getAll = 3;
        static final int TRANSACTION_set = 2;

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes3.dex
         */
        private static class Proxy implements com.qihoo360.loader2.sp.IPref {
            public static com.qihoo360.loader2.sp.IPref sDefaultImpl;
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
            public java.lang.String get(java.lang.String r6, java.lang.String r7, java.lang.String r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.sp.IPref"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L43
                    r3 = 1
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L35
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L35
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L43
                    java.lang.String r6 = r2.get(r6, r7, r8)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L35:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    java.lang.String r6 = r1.readString()     // Catch: java.lang.Throwable -> L43
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
            public android.os.Bundle getAll(java.lang.String r6) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.sp.IPref"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L49
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L49
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L49
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L49
                    if (r2 != 0) goto L2f
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    if (r2 == 0) goto L2f
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L49
                    android.os.Bundle r6 = r2.getAll(r6)     // Catch: java.lang.Throwable -> L49
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L49
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L49
                    if (r6 == 0) goto L41
                    android.os.Parcelable$Creator r6 = android.os.Bundle.CREATOR     // Catch: java.lang.Throwable -> L49
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L49
                    android.os.Bundle r6 = (android.os.Bundle) r6     // Catch: java.lang.Throwable -> L49
                    goto L42
                L41:
                    r6 = 0
                L42:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L49:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            public java.lang.String getInterfaceDescriptor() {
                    r1 = this;
                    java.lang.String r0 = "com.qihoo360.loader2.sp.IPref"
                    return r0
            }

            @Override
            public void set(java.lang.String r6, java.lang.String r7, java.lang.String r8) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.qihoo360.loader2.sp.IPref"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L3e
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r2 = r5.mRemote     // Catch: java.lang.Throwable -> L3e
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L34
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L34
                    com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.getDefaultImpl()     // Catch: java.lang.Throwable -> L3e
                    r2.set(r6, r7, r8)     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return
                L34:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    r1.recycle()
                    r0.recycle()
                    return
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.qihoo360.loader2.sp.IPref"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.qihoo360.loader2.sp.IPref asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.qihoo360.loader2.sp.IPref"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.qihoo360.loader2.sp.IPref
                if (r1 == 0) goto L13
                com.qihoo360.loader2.sp.IPref r0 = (com.qihoo360.loader2.sp.IPref) r0
                return r0
            L13:
                com.qihoo360.loader2.sp.IPref$Stub$Proxy r0 = new com.qihoo360.loader2.sp.IPref$Stub$Proxy
                r0.<init>(r2)
                return r0
        }

        public static com.qihoo360.loader2.sp.IPref getDefaultImpl() {
                com.qihoo360.loader2.sp.IPref r0 = com.qihoo360.loader2.sp.IPref.Stub.Proxy.sDefaultImpl
                return r0
        }

        public static boolean setDefaultImpl(com.qihoo360.loader2.sp.IPref r1) {
                com.qihoo360.loader2.sp.IPref r0 = com.qihoo360.loader2.sp.IPref.Stub.Proxy.sDefaultImpl
                if (r0 != 0) goto Lc
                if (r1 == 0) goto La
                com.qihoo360.loader2.sp.IPref.Stub.Proxy.sDefaultImpl = r1
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
                java.lang.String r1 = "com.qihoo360.loader2.sp.IPref"
                if (r4 == r0) goto L4b
                r2 = 2
                if (r4 == r2) goto L35
                r2 = 3
                if (r4 == r2) goto L19
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L15
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L15:
                r6.writeString(r1)
                return r0
            L19:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                android.os.Bundle r4 = r3.getAll(r4)
                r6.writeNoException()
                if (r4 == 0) goto L30
                r6.writeInt(r0)
                r4.writeToParcel(r6, r0)
                goto L34
            L30:
                r4 = 0
                r6.writeInt(r4)
            L34:
                return r0
            L35:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r7 = r5.readString()
                java.lang.String r5 = r5.readString()
                r3.set(r4, r7, r5)
                r6.writeNoException()
                return r0
            L4b:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r7 = r5.readString()
                java.lang.String r5 = r5.readString()
                java.lang.String r4 = r3.get(r4, r7, r5)
                r6.writeNoException()
                r6.writeString(r4)
                return r0
        }
    }

    java.lang.String get(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException;

    android.os.Bundle getAll(java.lang.String r1) throws android.os.RemoteException;

    void set(java.lang.String r1, java.lang.String r2, java.lang.String r3) throws android.os.RemoteException;
}
