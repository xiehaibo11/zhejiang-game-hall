package com.bytedance.pangle;

public interface f extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.bytedance.pangle.f {

        static class a implements com.bytedance.pangle.f {
            public static com.bytedance.pangle.f a;
            private android.os.IBinder b;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.b = r1
                    return
            }

            @Override
            public final int a() {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.ServiceConnection"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L3a
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L2c
                    com.bytedance.pangle.f r2 = com.bytedance.pangle.f.a.b()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L2c
                    com.bytedance.pangle.f r2 = com.bytedance.pangle.f.a.b()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r2.a()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L2c:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    int r2 = r1.readInt()     // Catch: java.lang.Throwable -> L3a
                    r1.recycle()
                    r0.recycle()
                    return r2
                L3a:
                    r2 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r2
            }

            @Override
            public final void a(android.content.ComponentName r6, android.os.IBinder r7) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.ServiceConnection"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3e
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L3e
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L3e
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L3e
                L1b:
                    r0.writeStrongBinder(r7)     // Catch: java.lang.Throwable -> L3e
                    android.os.IBinder r4 = r5.b     // Catch: java.lang.Throwable -> L3e
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L3e
                    if (r2 != 0) goto L3a
                    com.bytedance.pangle.f r2 = com.bytedance.pangle.f.a.b()     // Catch: java.lang.Throwable -> L3e
                    if (r2 == 0) goto L3a
                    com.bytedance.pangle.f r2 = com.bytedance.pangle.f.a.b()     // Catch: java.lang.Throwable -> L3e
                    r2.a(r6, r7)     // Catch: java.lang.Throwable -> L3e
                L33:
                    r1.recycle()
                    r0.recycle()
                    return
                L3a:
                    r1.readException()     // Catch: java.lang.Throwable -> L3e
                    goto L33
                L3e:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.b
                    return r0
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.bytedance.pangle.ServiceConnection"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.bytedance.pangle.f a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.bytedance.pangle.ServiceConnection"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.bytedance.pangle.f
                if (r1 == 0) goto L13
                com.bytedance.pangle.f r0 = (com.bytedance.pangle.f) r0
                return r0
            L13:
                com.bytedance.pangle.f$a$a r0 = new com.bytedance.pangle.f$a$a
                r0.<init>(r2)
                return r0
        }

        public static com.bytedance.pangle.f b() {
                com.bytedance.pangle.f r0 = com.bytedance.pangle.f.a.a.a
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) {
                r3 = this;
                r0 = 1
                java.lang.String r1 = "com.bytedance.pangle.ServiceConnection"
                if (r4 == r0) goto L24
                r2 = 2
                if (r4 == r2) goto L16
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L12
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L12:
                r6.writeString(r1)
                return r0
            L16:
                r5.enforceInterface(r1)
                int r4 = r3.a()
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L24:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                if (r4 == 0) goto L36
                android.os.Parcelable$Creator r4 = android.content.ComponentName.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                android.content.ComponentName r4 = (android.content.ComponentName) r4
                goto L37
            L36:
                r4 = 0
            L37:
                android.os.IBinder r5 = r5.readStrongBinder()
                r3.a(r4, r5)
                r6.writeNoException()
                return r0
        }
    }

    int a();

    void a(android.content.ComponentName r1, android.os.IBinder r2);
}
