package com.alipay.android.app;

public interface IRemoteServiceCallback extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements com.alipay.android.app.IRemoteServiceCallback {
        public static final java.lang.String DESCRIPTOR = "com.alipay.android.app.IRemoteServiceCallback";
        public static final int TRANSACTION_getVersion = 4;
        public static final int TRANSACTION_isHideLoadingScreen = 3;
        public static final int TRANSACTION_payEnd = 2;
        public static final int TRANSACTION_r03 = 5;
        public static final int TRANSACTION_startActivity = 1;

        public static class a implements com.alipay.android.app.IRemoteServiceCallback {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }

            public java.lang.String d() {
                    r1 = this;
                    java.lang.String r0 = "com.alipay.android.app.IRemoteServiceCallback"
                    return r0
            }

            @Override
            public int getVersion() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IRemoteServiceCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22
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

            @Override
            public boolean isHideLoadingScreen() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IRemoteServiceCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L25
                    r3 = 3
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L25
                    if (r2 == 0) goto L1e
                    r4 = 1
                L1e:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L25:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public void payEnd(boolean r4, java.lang.String r5) throws android.os.RemoteException {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IRemoteServiceCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L24
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L24
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L24
                    android.os.IBinder r4 = r3.a     // Catch: java.lang.Throwable -> L24
                    r5 = 2
                    r2 = 0
                    r4.transact(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L24
                    r1.readException()     // Catch: java.lang.Throwable -> L24
                    r1.recycle()
                    r0.recycle()
                    return
                L24:
                    r4 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r4
            }

            @Override
            public void r03(java.lang.String r3, java.lang.String r4, java.util.Map r5) throws android.os.RemoteException {
                    r2 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.alipay.android.app.IRemoteServiceCallback"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L1e
                    r0.writeString(r3)     // Catch: java.lang.Throwable -> L1e
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L1e
                    r0.writeMap(r5)     // Catch: java.lang.Throwable -> L1e
                    android.os.IBinder r3 = r2.a     // Catch: java.lang.Throwable -> L1e
                    r4 = 5
                    r5 = 0
                    r1 = 1
                    r3.transact(r4, r0, r5, r1)     // Catch: java.lang.Throwable -> L1e
                    r0.recycle()
                    return
                L1e:
                    r3 = move-exception
                    r0.recycle()
                    throw r3
            }

            @Override
            public void startActivity(java.lang.String r4, java.lang.String r5, int r6, android.os.Bundle r7) throws android.os.RemoteException {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IRemoteServiceCallback"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L33
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L33
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L33
                    r0.writeInt(r6)     // Catch: java.lang.Throwable -> L33
                    r4 = 1
                    r5 = 0
                    if (r7 == 0) goto L21
                    r0.writeInt(r4)     // Catch: java.lang.Throwable -> L33
                    r7.writeToParcel(r0, r5)     // Catch: java.lang.Throwable -> L33
                    goto L24
                L21:
                    r0.writeInt(r5)     // Catch: java.lang.Throwable -> L33
                L24:
                    android.os.IBinder r6 = r3.a     // Catch: java.lang.Throwable -> L33
                    r6.transact(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L33
                    r1.readException()     // Catch: java.lang.Throwable -> L33
                    r1.recycle()
                    r0.recycle()
                    return
                L33:
                    r4 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r4
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.alipay.android.app.IRemoteServiceCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.alipay.android.app.IRemoteServiceCallback asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.alipay.android.app.IRemoteServiceCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.alipay.android.app.IRemoteServiceCallback
                if (r1 == 0) goto L13
                com.alipay.android.app.IRemoteServiceCallback r0 = (com.alipay.android.app.IRemoteServiceCallback) r0
                return r0
            L13:
                com.alipay.android.app.IRemoteServiceCallback$Stub$a r0 = new com.alipay.android.app.IRemoteServiceCallback$Stub$a
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
                java.lang.String r0 = "com.alipay.android.app.IRemoteServiceCallback"
                r1 = 1
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L8f
                if (r4 == r1) goto L69
                r2 = 2
                if (r4 == r2) goto L52
                r2 = 3
                if (r4 == r2) goto L44
                r2 = 4
                if (r4 == r2) goto L36
                r2 = 5
                if (r4 == r2) goto L1b
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L1b:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                java.lang.String r6 = r5.readString()
                java.lang.Class r7 = r3.getClass()
                java.lang.ClassLoader r7 = r7.getClassLoader()
                java.util.HashMap r5 = r5.readHashMap(r7)
                r3.r03(r4, r6, r5)
                return r1
            L36:
                r5.enforceInterface(r0)
                int r4 = r3.getVersion()
                r6.writeNoException()
                r6.writeInt(r4)
                return r1
            L44:
                r5.enforceInterface(r0)
                boolean r4 = r3.isHideLoadingScreen()
                r6.writeNoException()
                r6.writeInt(r4)
                return r1
            L52:
                r5.enforceInterface(r0)
                int r4 = r5.readInt()
                if (r4 == 0) goto L5d
                r4 = 1
                goto L5e
            L5d:
                r4 = 0
            L5e:
                java.lang.String r5 = r5.readString()
                r3.payEnd(r4, r5)
                r6.writeNoException()
                return r1
            L69:
                r5.enforceInterface(r0)
                java.lang.String r4 = r5.readString()
                java.lang.String r7 = r5.readString()
                int r0 = r5.readInt()
                int r2 = r5.readInt()
                if (r2 == 0) goto L87
                android.os.Parcelable$Creator r2 = android.os.Bundle.CREATOR
                java.lang.Object r5 = r2.createFromParcel(r5)
                android.os.Bundle r5 = (android.os.Bundle) r5
                goto L88
            L87:
                r5 = 0
            L88:
                r3.startActivity(r4, r7, r0, r5)
                r6.writeNoException()
                return r1
            L8f:
                r6.writeString(r0)
                return r1
        }
    }

    int getVersion() throws android.os.RemoteException;

    boolean isHideLoadingScreen() throws android.os.RemoteException;

    void payEnd(boolean r1, java.lang.String r2) throws android.os.RemoteException;

    void r03(java.lang.String r1, java.lang.String r2, java.util.Map r3) throws android.os.RemoteException;

    void startActivity(java.lang.String r1, java.lang.String r2, int r3, android.os.Bundle r4) throws android.os.RemoteException;
}
