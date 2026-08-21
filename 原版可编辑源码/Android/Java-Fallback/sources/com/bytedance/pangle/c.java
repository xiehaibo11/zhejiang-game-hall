package com.bytedance.pangle;

public interface c extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.bytedance.pangle.c {

        static class a implements com.bytedance.pangle.c {
            public static com.bytedance.pangle.c a;
            private android.os.IBinder b;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.b = r1
                    return
            }

            @Override
            public final boolean a(java.lang.String r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IPackageManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L40
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L40
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L40
                    r3 = 0
                    r4 = 1
                    boolean r2 = r2.transact(r4, r0, r1, r3)     // Catch: java.lang.Throwable -> L40
                    if (r2 != 0) goto L2f
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L40
                    if (r2 == 0) goto L2f
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L40
                    boolean r6 = r2.a(r6)     // Catch: java.lang.Throwable -> L40
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L40
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L40
                    if (r6 == 0) goto L39
                    r3 = r4
                L39:
                    r1.recycle()
                    r0.recycle()
                    return r3
                L40:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final boolean a(java.lang.String r6, java.lang.String r7) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IPackageManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L43
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L43
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L43
                    r3 = 3
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L43
                    if (r2 != 0) goto L32
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L43
                    if (r2 == 0) goto L32
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L43
                    boolean r6 = r2.a(r6, r7)     // Catch: java.lang.Throwable -> L43
                    r1.recycle()
                    r0.recycle()
                    return r6
                L32:
                    r1.readException()     // Catch: java.lang.Throwable -> L43
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L43
                    if (r6 == 0) goto L3c
                    r4 = 1
                L3c:
                    r1.recycle()
                    r0.recycle()
                    return r4
                L43:
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

            @Override
            public final int b(java.lang.String r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IPackageManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3d
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L3d
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L3d
                    r3 = 2
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
                    if (r2 != 0) goto L2f
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L3d
                    if (r2 == 0) goto L2f
                    com.bytedance.pangle.c r2 = com.bytedance.pangle.c.a.a()     // Catch: java.lang.Throwable -> L3d
                    int r6 = r2.b(r6)     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L2f:
                    r1.readException()     // Catch: java.lang.Throwable -> L3d
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L3d
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3d:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.bytedance.pangle.IPackageManager"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.bytedance.pangle.c a() {
                com.bytedance.pangle.c r0 = com.bytedance.pangle.c.a.a.a
                return r0
        }

        public static com.bytedance.pangle.c a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.bytedance.pangle.IPackageManager"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.bytedance.pangle.c
                if (r1 == 0) goto L13
                com.bytedance.pangle.c r0 = (com.bytedance.pangle.c) r0
                return r0
            L13:
                com.bytedance.pangle.c$a$a r0 = new com.bytedance.pangle.c$a$a
                r0.<init>(r2)
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
                java.lang.String r1 = "com.bytedance.pangle.IPackageManager"
                if (r4 == r0) goto L41
                r2 = 2
                if (r4 == r2) goto L2f
                r2 = 3
                if (r4 == r2) goto L19
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto L15
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            L15:
                r6.writeString(r1)
                return r0
            L19:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                java.lang.String r5 = r5.readString()
                boolean r4 = r3.a(r4, r5)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L2f:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                int r4 = r3.b(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
            L41:
                r5.enforceInterface(r1)
                java.lang.String r4 = r5.readString()
                boolean r4 = r3.a(r4)
                r6.writeNoException()
                r6.writeInt(r4)
                return r0
        }
    }

    boolean a(java.lang.String r1);

    boolean a(java.lang.String r1, java.lang.String r2);

    int b(java.lang.String r1);
}
