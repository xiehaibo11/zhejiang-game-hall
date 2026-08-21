package com.reyun.tracking.b.b;

public class h implements com.reyun.tracking.b.b.f {
    public android.os.IBinder a;

    public h(android.os.IBinder r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.lang.String a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            android.os.Parcel r0 = android.os.Parcel.obtain()
            android.os.Parcel r1 = android.os.Parcel.obtain()
            java.lang.String r2 = "com.heytap.openid.IOpenID"
            r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.writeString(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.writeString(r5)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.writeString(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            android.os.IBinder r4 = r3.a     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r5 = 1
            r6 = 0
            r4.transact(r5, r0, r1, r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r1.readException()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.lang.String r4 = r1.readString()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.recycle()
            r1.recycle()
            goto L38
        L2b:
            r4 = move-exception
            goto L39
        L2d:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L2b
            r0.recycle()
            r1.recycle()
            r4 = 0
        L38:
            return r4
        L39:
            r0.recycle()
            r1.recycle()
            throw r4
    }

    @Override
    public android.os.IBinder asBinder() {
            r1 = this;
            android.os.IBinder r0 = r1.a
            return r0
    }
}
