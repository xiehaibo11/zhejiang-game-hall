package com.tkay.china.a.a;

public final class a implements android.os.IInterface {
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
            java.lang.String r2 = "com.asus.msa.SupplementaryDID.IDidAidlInterface"
            r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
            android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1c
            r3 = 3
            r4 = 0
            r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
            r1.readException()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
            goto L27
        L1c:
            r2 = move-exception
            r0.recycle()
            r1.recycle()
            r2.printStackTrace()
            r2 = 0
        L27:
            r0.recycle()
            r1.recycle()
            return r2
    }

    @Override
    public final android.os.IBinder asBinder() {
            r1 = this;
            android.os.IBinder r0 = r1.a
            return r0
    }
}
