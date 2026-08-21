package com.czhj.devicehelper.oaId.interfaces;

public interface a extends android.os.IInterface {

    public static final class a implements com.czhj.devicehelper.oaId.interfaces.a {
        private android.os.IBinder a;

        public a(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public java.lang.String a() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.asus.msa.SupplementaryDID.IDidAidlInterface"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
                android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1c
                r3 = 3
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
                r1.readException()     // Catch: java.lang.Throwable -> L1c
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
                goto L2b
            L1c:
                r2 = move-exception
                r0.recycle()
                r1.recycle()
                java.lang.String r2 = r2.getMessage()
                com.czhj.sdk.logger.SigmobLog.e(r2)
                r2 = 0
            L2b:
                r0.recycle()
                r1.recycle()
                return r2
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.a
                return r0
        }

        public boolean b() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                r2 = 0
                java.lang.String r3 = "com.asus.msa.SupplementaryDID.IDidAidlInterface"
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
    }

    java.lang.String a();
}
