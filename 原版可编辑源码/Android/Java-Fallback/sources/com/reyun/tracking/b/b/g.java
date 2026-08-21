package com.reyun.tracking.b.b;

public abstract class g extends android.os.Binder implements com.reyun.tracking.b.b.f {
    public static com.reyun.tracking.b.b.f a(android.os.IBinder r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "com.heytap.openid.IOpenID"
            android.os.IInterface r1 = r3.queryLocalInterface(r1)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L14
            boolean r2 = r1 instanceof com.reyun.tracking.b.b.f     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L11
            goto L14
        L11:
            com.reyun.tracking.b.b.f r1 = (com.reyun.tracking.b.b.f) r1     // Catch: java.lang.Throwable -> L1a
            return r1
        L14:
            com.reyun.tracking.b.b.h r1 = new com.reyun.tracking.b.b.h     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
            return r1
        L1a:
            return r0
    }
}
