package com.czhj.devicehelper.oaId.interfaces;

public interface g extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.czhj.devicehelper.oaId.interfaces.g {

        public static class a implements com.czhj.devicehelper.oaId.interfaces.g {
            private android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public boolean a() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    r2 = 0
                    java.lang.String r3 = "com.bun.lib.MsaIdInterface"
                    r0.writeInterfaceToken(r3)     // Catch: java.lang.Throwable -> L26
                    android.os.IBinder r3 = r5.a     // Catch: java.lang.Throwable -> L26
                    r4 = 2
                    r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L26
                    r1.readException()     // Catch: java.lang.Throwable -> L26
                    int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L26
                    if (r3 != 0) goto L30
                    r1.recycle()     // Catch: java.lang.Throwable -> L26
                    r0.recycle()     // Catch: java.lang.Throwable -> L26
                    r0 = 1
                    r2 = r0
                    goto L30
                L26:
                    r3 = move-exception
                    r1.recycle()
                    r0.recycle()
                    r3.printStackTrace()
                L30:
                    return r2
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }

            @Override
            public java.lang.String b() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bun.lib.MsaIdInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1c
                    r3 = 3
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
                    r1.readException()     // Catch: java.lang.Throwable -> L1c
                    java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
                    goto L23
                L1c:
                    r0.recycle()
                    r1.recycle()
                    r2 = 0
                L23:
                    r0.recycle()
                    r1.recycle()
                    return r2
            }

            @Override
            public boolean c() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    r2 = 0
                    java.lang.String r3 = "com.bun.lib.MsaIdInterface"
                    r0.writeInterfaceToken(r3)     // Catch: java.lang.Exception -> L1f
                    android.os.IBinder r3 = r5.a     // Catch: java.lang.Exception -> L1f
                    r4 = 1
                    r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Exception -> L1f
                    r1.readException()     // Catch: java.lang.Exception -> L1f
                    int r0 = r1.readInt()     // Catch: java.lang.Exception -> L1f
                    if (r0 == 0) goto L25
                    r2 = r4
                    goto L25
                L1f:
                    r1.recycle()
                    r0.recycle()
                L25:
                    return r2
            }

            @Override
            public void d() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bun.lib.MsaIdInterface"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L18
                    android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L18
                    r3 = 6
                    r4 = 0
                    r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L18
                    r1.readException()     // Catch: java.lang.Throwable -> L18
                    goto L1e
                L18:
                    r1.recycle()
                    r0.recycle()
                L1e:
                    r1.recycle()
                    r0.recycle()
                    return
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    boolean a();

    java.lang.String b();

    boolean c();

    void d();
}
