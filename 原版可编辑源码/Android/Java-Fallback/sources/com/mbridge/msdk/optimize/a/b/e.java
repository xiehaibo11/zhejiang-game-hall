package com.mbridge.msdk.optimize.a.b;

public interface e extends android.os.IInterface {

    public static class a implements com.mbridge.msdk.optimize.a.b.e {
        private android.os.IBinder a;

        public a(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public final java.lang.String a() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.samsung.android.deviceidservice.IDeviceIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
                android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1c
                r3 = 1
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
                r1.readException()     // Catch: java.lang.Throwable -> L1c
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
                goto L27
            L1c:
                r2 = move-exception
                r1.recycle()
                r0.recycle()
                r2.printStackTrace()
                r2 = 0
            L27:
                r1.recycle()
                r0.recycle()
                return r2
        }

        @Override
        public final android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.a
                return r0
        }
    }
}
