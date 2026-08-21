package com.kwad.sdk.core.f.b;

public interface d extends android.os.IInterface {

    public static final class a implements com.kwad.sdk.core.f.b.d {
        private android.os.IBinder aqt;

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

        @Override
        public final java.lang.String getSerID(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                r3 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.heytap.openid.IOpenID"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r0.writeString(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r0.writeString(r5)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r0.writeString(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                android.os.IBinder r4 = r3.aqt     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r5 = 1
                r6 = 0
                r4.transact(r5, r0, r1, r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r1.readException()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                java.lang.String r4 = r1.readString()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L33
                r0.recycle()
                r1.recycle()
                goto L3a
            L2b:
                r4 = move-exception
                r0.recycle()
                r1.recycle()
                throw r4
            L33:
                r0.recycle()
                r1.recycle()
                r4 = 0
            L3a:
                return r4
        }
    }

    java.lang.String getSerID(java.lang.String r1, java.lang.String r2, java.lang.String r3);
}
