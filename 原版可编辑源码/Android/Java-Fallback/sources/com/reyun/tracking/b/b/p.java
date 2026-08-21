package com.reyun.tracking.b.b;

public class p implements com.reyun.tracking.b.b.n {
    private android.os.IBinder a;

    public p(android.os.IBinder r1) {
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
            r1.recycle()
            r0.recycle()
            r2 = 0
        L23:
            r1.recycle()
            r0.recycle()
            return r2
    }

    @Override
    public android.os.IBinder asBinder() {
            r1 = this;
            android.os.IBinder r0 = r1.a
            return r0
    }
}
