package com.kwad.sdk.core.f.b;

public interface b extends android.os.IInterface {

    public static final class a implements com.kwad.sdk.core.f.b.b {
        private android.os.IBinder aqt;

        public a(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.aqt = r1
                return
        }

        public final java.lang.String BM() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                android.os.IBinder r2 = r5.aqt     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r3 = 1
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r1.readException()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r0.recycle()
                r1.recycle()
                goto L31
            L22:
                r2 = move-exception
                r0.recycle()
                r1.recycle()
                throw r2
            L2a:
                r0.recycle()
                r1.recycle()
                r2 = 0
            L31:
                return r2
        }

        public final boolean BN() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                r2 = 0
                java.lang.String r3 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r3)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L27
                android.os.IBinder r3 = r5.aqt     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L27
                r4 = 1
                r3.transact(r4, r0, r1, r2)     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L27
                r1.readException()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L27
                int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L1f java.lang.Exception -> L27
                if (r3 != 0) goto L27
                r2 = r4
                goto L27
            L1f:
                r2 = move-exception
                r0.recycle()
                r1.recycle()
                throw r2
            L27:
                r0.recycle()
                r1.recycle()
                return r2
        }

        @Override
        public final android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.aqt
                return r0
        }
    }
}
