package com.reyun.tracking.b;

public abstract class f extends android.os.Binder implements com.reyun.tracking.b.e {
    public static com.reyun.tracking.b.e a(android.os.IBinder r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
            android.os.IInterface r0 = r2.queryLocalInterface(r0)
            if (r0 == 0) goto L13
            boolean r1 = r0 instanceof com.reyun.tracking.b.e
            if (r1 == 0) goto L13
            com.reyun.tracking.b.e r0 = (com.reyun.tracking.b.e) r0
            goto L18
        L13:
            com.reyun.tracking.b.g r0 = new com.reyun.tracking.b.g
            r0.<init>(r2)
        L18:
            return r0
    }

    @Override
    public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) {
            r3 = this;
            java.lang.String r0 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
            r1 = 1
            if (r4 == r1) goto L24
            r2 = 2
            if (r4 == r2) goto L16
            r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
            if (r4 == r2) goto L12
            boolean r4 = super.onTransact(r4, r5, r6, r7)
            return r4
        L12:
            r6.writeString(r0)
            return r1
        L16:
            r5.enforceInterface(r0)
            boolean r4 = r3.b()
            r6.writeNoException()
            r6.writeInt(r4)
            return r1
        L24:
            r5.enforceInterface(r0)
            java.lang.String r4 = r3.a()
            r6.writeNoException()
            r6.writeString(r4)
            return r1
    }
}
