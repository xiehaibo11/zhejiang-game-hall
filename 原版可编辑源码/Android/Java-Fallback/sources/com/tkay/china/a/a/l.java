package com.tkay.china.a.a;

public interface l extends android.os.IInterface {

    public static class a implements com.tkay.china.a.a.l {
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
                r3 = 4
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
    }

    java.lang.String a();

    java.lang.String b();
}
