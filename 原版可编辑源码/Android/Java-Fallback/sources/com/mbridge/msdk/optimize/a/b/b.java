package com.mbridge.msdk.optimize.a.b;

public interface b extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.mbridge.msdk.optimize.a.b.b {

        public static class a implements com.mbridge.msdk.optimize.a.b.b {
            private android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public final java.lang.String a() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r3 = 1
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r1.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r1.recycle()
                    r0.recycle()
                    return r2
                L22:
                    r2 = move-exception
                    goto L30
                L24:
                    r2 = move-exception
                    r2.printStackTrace()     // Catch: java.lang.Throwable -> L22
                    r1.recycle()
                    r0.recycle()
                    r0 = 0
                    return r0
                L30:
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public final java.lang.String a(java.lang.String r5) {
                    r4 = this;
                    android.os.Parcel r5 = android.os.Parcel.obtain()
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.zui.deviceidservice.IDeviceidInterface"
                    r5.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    android.os.IBinder r1 = r4.a     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r2 = 4
                    r3 = 0
                    r1.transact(r2, r5, r0, r3)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r0.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    java.lang.String r1 = r0.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r0.recycle()
                    r5.recycle()
                    return r1
                L22:
                    r1 = move-exception
                    goto L30
                L24:
                    r1 = move-exception
                    r1.printStackTrace()     // Catch: java.lang.Throwable -> L22
                    r0.recycle()
                    r5.recycle()
                    r5 = 0
                    return r5
                L30:
                    r0.recycle()
                    r5.recycle()
                    throw r1
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    r0 = 0
                    return r0
            }

            @Override
            public final java.lang.String b() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r3 = 2
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r1.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r1.recycle()
                    r0.recycle()
                    return r2
                L22:
                    r2 = move-exception
                    goto L30
                L24:
                    r2 = move-exception
                    r2.printStackTrace()     // Catch: java.lang.Throwable -> L22
                    r1.recycle()
                    r0.recycle()
                    r0 = 0
                    return r0
                L30:
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public final java.lang.String b(java.lang.String r5) {
                    r4 = this;
                    android.os.Parcel r5 = android.os.Parcel.obtain()
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.zui.deviceidservice.IDeviceidInterface"
                    r5.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    android.os.IBinder r1 = r4.a     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r2 = 5
                    r3 = 0
                    r1.transact(r2, r5, r0, r3)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r0.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    java.lang.String r1 = r0.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
                    r0.recycle()
                    r5.recycle()
                    return r1
                L22:
                    r1 = move-exception
                    goto L30
                L24:
                    r1 = move-exception
                    r1.printStackTrace()     // Catch: java.lang.Throwable -> L22
                    r0.recycle()
                    r5.recycle()
                    r5 = 0
                    return r5
                L30:
                    r0.recycle()
                    r5.recycle()
                    throw r1
            }

            @Override
            public final boolean c() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    r2 = 0
                    java.lang.String r3 = "com.zui.deviceidservice.IDeviceidInterface"
                    r0.writeInterfaceToken(r3)     // Catch: java.lang.Throwable -> L25
                    android.os.IBinder r3 = r5.a     // Catch: java.lang.Throwable -> L25
                    r4 = 3
                    r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L25
                    r1.readException()     // Catch: java.lang.Throwable -> L25
                    int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L25
                    if (r3 == 0) goto L1e
                    r2 = 1
                L1e:
                    r1.recycle()     // Catch: java.lang.Throwable -> L25
                    r0.recycle()     // Catch: java.lang.Throwable -> L25
                    goto L2b
                L25:
                    r1.recycle()
                    r0.recycle()
                L2b:
                    return r2
            }
        }

        @Override
        protected boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                r0 = 1
                java.lang.String r1 = "com.zui.deviceidservice.IDeviceidInterface"
                if (r4 == r0) goto L5f
                r2 = 2
                if (r4 == r2) goto L51
                r2 = 3
                if (r4 == r2) goto L43
                r2 = 4
                if (r4 == r2) goto L31
                r2 = 5
                if (r4 == r2) goto L1f
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L1b
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L1b:
                r6.writeString(r1)
                return r0
            L1f:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r4 = r3.b(r4)
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L31:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r4 = r3.a(r4)
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L43:
                r5.enforceInterface(r1)
                boolean r4 = r3.c()
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L51:
                r5.enforceInterface(r1)
                java.lang.String r4 = r3.b()
                r6.writeNoException()
                r6.writeString(r4)
                return r0
            L5f:
                r5.enforceInterface(r1)
                java.lang.String r4 = r3.a()
                r6.writeNoException()
                r6.writeString(r4)
                return r0
        }
    }

    java.lang.String a();

    java.lang.String a(java.lang.String r1);

    java.lang.String b();

    java.lang.String b(java.lang.String r1);

    boolean c();
}
