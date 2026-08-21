package com.kwad.sdk.core.f.b;

public interface e extends android.os.IInterface {

    public static class a implements com.kwad.sdk.core.f.b.e {
        private android.os.IBinder aqu;

        public a(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.aqu = r1
                return
        }

        @Override
        public final android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.aqu
                return r0
        }

        public final java.lang.String getID() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.samsung.android.deviceidservice.IDeviceIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                android.os.IBinder r2 = r5.aqu     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r3 = 1
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r1.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r1.recycle()
                r0.recycle()
                goto L31
            L22:
                r2 = move-exception
                r1.recycle()
                r0.recycle()
                throw r2
            L2a:
                r1.recycle()
                r0.recycle()
                r2 = 0
            L31:
                return r2
        }
    }
}
