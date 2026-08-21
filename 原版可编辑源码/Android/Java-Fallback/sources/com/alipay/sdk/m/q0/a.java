package com.alipay.sdk.m.q0;

public interface a extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.alipay.sdk.m.q0.a {
        public static final java.lang.String a = "com.zui.deviceidservice.IDeviceidInterface";
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;
        public static final int e = 4;
        public static final int f = 5;
        public static final int g = 6;

        public static class a implements com.alipay.sdk.m.q0.a {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public java.lang.String a() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22
                    r3 = 1
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
            public java.lang.String a(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
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
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }

            @Override
            public java.lang.String b() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
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
            public java.lang.String b(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L25
                    r2 = 4
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
            public boolean c() throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
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
            public boolean c(java.lang.String r5) throws android.os.RemoteException {
                    r4 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L28
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L28
                    android.os.IBinder r5 = r4.a     // Catch: java.lang.Throwable -> L28
                    r2 = 6
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

            public java.lang.String d() {
                    r1 = this;
                    java.lang.String r0 = "com.zui.deviceidservice.IDeviceidInterface"
                    return r0
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.zui.deviceidservice.IDeviceidInterface"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.alipay.sdk.m.q0.a a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.zui.deviceidservice.IDeviceidInterface"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.alipay.sdk.m.q0.a
                if (r1 == 0) goto L13
                com.alipay.sdk.m.q0.a r0 = (com.alipay.sdk.m.q0.a) r0
                return r0
            L13:
                com.alipay.sdk.m.q0.a$a$a r0 = new com.alipay.sdk.m.q0.a$a$a
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
                r0 = 1
                java.lang.String r1 = "com.zui.deviceidservice.IDeviceidInterface"
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L70
                switch(r4) {
                    case 1: goto L62;
                    case 2: goto L54;
                    case 3: goto L46;
                    case 4: goto L34;
                    case 5: goto L22;
                    case 6: goto L10;
                    default: goto Lb;
                }
            Lb:
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L10:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                boolean r4 = r3.c(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L22:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r4 = r3.a(r4)
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L34:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r4 = r3.b(r4)
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L46:
                r5.enforceInterface(r1)
                boolean r4 = r3.c()
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L54:
                r5.enforceInterface(r1)
                java.lang.String r4 = r3.b()
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L62:
                r5.enforceInterface(r1)
                java.lang.String r4 = r3.a()
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L70:
                r6.writeString(r1)
                return r0
        }
    }

    java.lang.String a() throws android.os.RemoteException;

    java.lang.String a(java.lang.String r1) throws android.os.RemoteException;

    java.lang.String b() throws android.os.RemoteException;

    java.lang.String b(java.lang.String r1) throws android.os.RemoteException;

    boolean c() throws android.os.RemoteException;

    boolean c(java.lang.String r1) throws android.os.RemoteException;
}
