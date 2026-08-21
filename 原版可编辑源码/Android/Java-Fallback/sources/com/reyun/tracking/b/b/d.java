package com.reyun.tracking.b.b;

public abstract class d extends android.os.Binder implements com.reyun.tracking.b.b.c {
    @Override
    protected boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) {
            r3 = this;
            r0 = 1
            java.lang.String r1 = "com.zui.deviceidservice.IDeviceidInterface"
            if (r4 == r0) goto L53
            r2 = 2
            if (r4 == r2) goto L4b
            r2 = 3
            if (r4 == r2) goto L3d
            r2 = 4
            if (r4 == r2) goto L31
            r2 = 5
            if (r4 == r2) goto L1f
            r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
            if (r4 == r2) goto L1b
            boolean r4 = super.onTransact(r4, r5, r6, r7)
            return r4
        L1b:
            r6.writeString(r1)
            return r0
        L1f:
            r5.enforceInterface(r1)
            java.lang.String r4 = r5.readString()
            java.lang.String r4 = r3.b(r4)
        L2a:
            r6.writeNoException()
            r6.writeString(r4)
            return r0
        L31:
            r5.enforceInterface(r1)
            java.lang.String r4 = r5.readString()
            java.lang.String r4 = r3.a(r4)
            goto L2a
        L3d:
            r5.enforceInterface(r1)
            boolean r4 = r3.c()
            r6.writeNoException()
            r6.writeInt(r4)
            return r0
        L4b:
            r5.enforceInterface(r1)
            java.lang.String r4 = r3.b()
            goto L2a
        L53:
            r5.enforceInterface(r1)
            java.lang.String r4 = r3.a()
            goto L2a
    }
}
