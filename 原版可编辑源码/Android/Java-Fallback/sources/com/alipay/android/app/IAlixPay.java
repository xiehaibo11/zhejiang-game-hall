package com.alipay.android.app;

public interface IAlixPay extends android.os.IInterface {

    public static abstract class Stub extends android.os.Binder implements com.alipay.android.app.IAlixPay {
        public static final java.lang.String DESCRIPTOR = "com.alipay.android.app.IAlixPay";
        public static final int TRANSACTION_Pay = 1;
        public static final int TRANSACTION_deployFastConnect = 6;
        public static final int TRANSACTION_getVersion = 8;
        public static final int TRANSACTION_manager = 7;
        public static final int TRANSACTION_pay02 = 9;
        public static final int TRANSACTION_prePay = 5;
        public static final int TRANSACTION_r03 = 10;
        public static final int TRANSACTION_registerCallback = 3;
        public static final int TRANSACTION_registerCallback03 = 11;
        public static final int TRANSACTION_test = 2;
        public static final int TRANSACTION_unregisterCallback = 4;

        public static class a implements com.alipay.android.app.IAlixPay {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public java.lang.String Pay(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L25
                    r2 = 1
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    java.lang.String r5 = r1.readString()     // Catch: java.lang.Throwable -> L25
                    r1.recycle()
                    r0.recycle()
                    return r5
                L25:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }

            public java.lang.String d() {
                    r1 = this;
                    java.lang.String r0 = "com.alipay.android.app.IAlixPay"
                    return r0
            }

            @Override
            public void deployFastConnect() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1e
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1e
                    r3 = 6
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1e
                    r1.readException()     // Catch: java.lang.Throwable -> L1e
                    r1.recycle()
                    r0.recycle()
                    return
                L1e:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public int getVersion() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L23
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L23
                    r3 = 8
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L23
                    r1.readException()     // Catch: java.lang.Throwable -> L23
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L23
                    r1.recycle()
                    r0.recycle()
                    return r2
                L23:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public boolean manager(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L28
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L28
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L28
                    r2 = 7
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L28
                    r1.readException()     // Catch: java.lang.Throwable -> L28
                    int r5 = r1.readInt()     // Catch: java.lang.Throwable -> L28
                    if (r5 == 0) goto L21
                    r3 = 1
                L21:
                    r1.recycle()
                    r0.recycle()
                    return r3
                L28:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public java.lang.String pay02(java.lang.String r4, java.util.Map r5) throws android.os.RemoteException {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L29
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L29
                    r0.writeMap(r5)     // Catch: java.lang.Throwable -> L29
                    android.os.IBinder r4 = r3.a     // Catch: java.lang.Throwable -> L29
                    r5 = 9
                    r2 = 0
                    r4.transact(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L29
                    r1.readException()     // Catch: java.lang.Throwable -> L29
                    java.lang.String r4 = r1.readString()     // Catch: java.lang.Throwable -> L29
                    r1.recycle()
                    r0.recycle()
                    return r4
                L29:
                    r4 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r4
            }

            @Override
            public java.lang.String prePay(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L25
                    r2 = 5
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    java.lang.String r5 = r1.readString()     // Catch: java.lang.Throwable -> L25
                    r1.recycle()
                    r0.recycle()
                    return r5
                L25:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public void r03(java.lang.String r3, java.lang.String r4, java.util.Map r5) throws android.os.RemoteException {
                    r2 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L1f
                    r0.writeString(r3)     // Catch: java.lang.Throwable -> L1f
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L1f
                    r0.writeMap(r5)     // Catch: java.lang.Throwable -> L1f
                    android.os.IBinder r3 = r2.a     // Catch: java.lang.Throwable -> L1f
                    r4 = 10
                    r5 = 0
                    r1 = 1
                    r3.transact(r4, r0, r5, r1)     // Catch: java.lang.Throwable -> L1f
                    r0.recycle()
                    return
                L1f:
                    r3 = move-exception
                    r0.recycle()
                    throw r3
            }

            @Override
            public void registerCallback(com.alipay.android.app.IRemoteServiceCallback r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L29
                    if (r5 == 0) goto L14
                    android.os.IBinder r5 = r5.asBinder()     // Catch: java.lang.Throwable -> L29
                    goto L15
                L14:
                    r5 = 0
                L15:
                    r0.writeStrongBinder(r5)     // Catch: java.lang.Throwable -> L29
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L29
                    r2 = 3
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L29
                    r1.readException()     // Catch: java.lang.Throwable -> L29
                    r1.recycle()
                    r0.recycle()
                    return
                L29:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }

            @Override
            public void registerCallback03(com.alipay.android.app.IRemoteServiceCallback r4, java.lang.String r5, java.util.Map r6) throws android.os.RemoteException {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L30
                    if (r4 == 0) goto L14
                    android.os.IBinder r4 = r4.asBinder()     // Catch: java.lang.Throwable -> L30
                    goto L15
                L14:
                    r4 = 0
                L15:
                    r0.writeStrongBinder(r4)     // Catch: java.lang.Throwable -> L30
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L30
                    r0.writeMap(r6)     // Catch: java.lang.Throwable -> L30
                    android.os.IBinder r4 = r3.a     // Catch: java.lang.Throwable -> L30
                    r5 = 11
                    r6 = 0
                    r4.transact(r5, r0, r1, r6)     // Catch: java.lang.Throwable -> L30
                    r1.readException()     // Catch: java.lang.Throwable -> L30
                    r1.recycle()
                    r0.recycle()
                    return
                L30:
                    r4 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r4
            }

            @Override
            public java.lang.String test() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22
                    r3 = 2
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22
                    r1.readException()     // Catch: java.lang.Throwable -> L22
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22
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
            public void unregisterCallback(com.alipay.android.app.IRemoteServiceCallback r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L29
                    if (r5 == 0) goto L14
                    android.os.IBinder r5 = r5.asBinder()     // Catch: java.lang.Throwable -> L29
                    goto L15
                L14:
                    r5 = 0
                L15:
                    r0.writeStrongBinder(r5)     // Catch: java.lang.Throwable -> L29
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L29
                    r2 = 4
                    r3 = 0
                    r5.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L29
                    r1.readException()     // Catch: java.lang.Throwable -> L29
                    r1.recycle()
                    r0.recycle()
                    return
                L29:
                    r5 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r5
            }
        }

        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.alipay.android.app.IAlixPay"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.alipay.android.app.IAlixPay asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.alipay.android.app.IAlixPay"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.alipay.android.app.IAlixPay
                if (r1 == 0) goto L13
                com.alipay.android.app.IAlixPay r0 = (com.alipay.android.app.IAlixPay) r0
                return r0
            L13:
                com.alipay.android.app.IAlixPay$Stub$a r0 = new com.alipay.android.app.IAlixPay$Stub$a
                r0.<init>(r2)
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r5, android.os.Parcel r6, android.os.Parcel r7, int r8) throws android.os.RemoteException {
                r4 = this;
                java.lang.Class<com.alipay.android.app.IAlixPay$Stub> r0 = com.alipay.android.app.IAlixPay.Stub.class
                r1 = 1
                java.lang.String r2 = "com.alipay.android.app.IAlixPay"
                r3 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r5 == r3) goto Le1
                switch(r5) {
                    case 1: goto Lcf;
                    case 2: goto Lc1;
                    case 3: goto Laf;
                    case 4: goto L9d;
                    case 5: goto L8b;
                    case 6: goto L81;
                    case 7: goto L6f;
                    case 8: goto L61;
                    case 9: goto L47;
                    case 10: goto L30;
                    case 11: goto L12;
                    default: goto Ld;
                }
            Ld:
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L12:
                r6.enforceInterface(r2)
                android.os.IBinder r5 = r6.readStrongBinder()
                com.alipay.android.app.IRemoteServiceCallback r5 = com.alipay.android.app.IRemoteServiceCallback.Stub.asInterface(r5)
                java.lang.String r8 = r6.readString()
                java.lang.ClassLoader r0 = r0.getClassLoader()
                java.util.HashMap r6 = r6.readHashMap(r0)
                r4.registerCallback03(r5, r8, r6)
                r7.writeNoException()
                return r1
            L30:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r7 = r6.readString()
                java.lang.ClassLoader r8 = r0.getClassLoader()
                java.util.HashMap r6 = r6.readHashMap(r8)
                r4.r03(r5, r7, r6)
                return r1
            L47:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.ClassLoader r8 = r0.getClassLoader()
                java.util.HashMap r6 = r6.readHashMap(r8)
                java.lang.String r5 = r4.pay02(r5, r6)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L61:
                r6.enforceInterface(r2)
                int r5 = r4.getVersion()
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L6f:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                boolean r5 = r4.manager(r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L81:
                r6.enforceInterface(r2)
                r4.deployFastConnect()
                r7.writeNoException()
                return r1
            L8b:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r5 = r4.prePay(r5)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            L9d:
                r6.enforceInterface(r2)
                android.os.IBinder r5 = r6.readStrongBinder()
                com.alipay.android.app.IRemoteServiceCallback r5 = com.alipay.android.app.IRemoteServiceCallback.Stub.asInterface(r5)
                r4.unregisterCallback(r5)
                r7.writeNoException()
                return r1
            Laf:
                r6.enforceInterface(r2)
                android.os.IBinder r5 = r6.readStrongBinder()
                com.alipay.android.app.IRemoteServiceCallback r5 = com.alipay.android.app.IRemoteServiceCallback.Stub.asInterface(r5)
                r4.registerCallback(r5)
                r7.writeNoException()
                return r1
            Lc1:
                r6.enforceInterface(r2)
                java.lang.String r5 = r4.test()
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            Lcf:
                r6.enforceInterface(r2)
                java.lang.String r5 = r6.readString()
                java.lang.String r5 = r4.Pay(r5)
                r7.writeNoException()
                r7.writeString(r5)
                return r1
            Le1:
                r7.writeString(r2)
                return r1
        }
    }

    java.lang.String Pay(java.lang.String r1) throws android.os.RemoteException;

    void deployFastConnect() throws android.os.RemoteException;

    int getVersion() throws android.os.RemoteException;

    boolean manager(java.lang.String r1) throws android.os.RemoteException;

    java.lang.String pay02(java.lang.String r1, java.util.Map r2) throws android.os.RemoteException;

    java.lang.String prePay(java.lang.String r1) throws android.os.RemoteException;

    void r03(java.lang.String r1, java.lang.String r2, java.util.Map r3) throws android.os.RemoteException;

    void registerCallback(com.alipay.android.app.IRemoteServiceCallback r1) throws android.os.RemoteException;

    void registerCallback03(com.alipay.android.app.IRemoteServiceCallback r1, java.lang.String r2, java.util.Map r3) throws android.os.RemoteException;

    java.lang.String test() throws android.os.RemoteException;

    void unregisterCallback(com.alipay.android.app.IRemoteServiceCallback r1) throws android.os.RemoteException;
}
