package com.kwad.sdk.core.f.b;

public interface a extends android.os.IInterface {

    public static final class a implements com.kwad.sdk.core.f.b.a {
        private final android.os.IBinder aqt;

        public a(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.aqt = r1
                return
        }

        @Override
        public final android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.aqt
                return r0
        }

        public final java.lang.String getID() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.asus.msa.SupplementaryDID.IDidAidlInterface"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                android.os.IBinder r2 = r5.aqt     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L2a
                r3 = 3
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
    }
}
