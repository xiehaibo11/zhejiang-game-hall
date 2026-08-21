package com.reyun.tracking.b;

class g implements com.reyun.tracking.b.e {
    private android.os.IBinder a;

    g(android.os.IBinder r1) {
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
            java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
            r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
            android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L22
            r3 = 1
            r4 = 0
            r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L22
            r1.readException()     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L22
            r1.recycle()
            r0.recycle()
            return r2
        L22:
            r2 = move-exception
            r1.recycle()
            r0.recycle()
            throw r2
    }

    @Override
    public android.os.IBinder asBinder() {
            r1 = this;
            android.os.IBinder r0 = r1.a
            return r0
    }

    @Override
    public boolean b() {
            r5 = this;
            android.os.Parcel r0 = android.os.Parcel.obtain()
            android.os.Parcel r1 = android.os.Parcel.obtain()
            java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
            r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L25
            android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L25
            r3 = 2
            r4 = 0
            r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L25
            r1.readException()     // Catch: java.lang.Throwable -> L25
            int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L1e
            r4 = 1
        L1e:
            r1.recycle()
            r0.recycle()
            return r4
        L25:
            r2 = move-exception
            r1.recycle()
            r0.recycle()
            throw r2
    }
}
