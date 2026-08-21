package com.bytedance.pangle;

public interface d extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.bytedance.pangle.d {

        static class a implements com.bytedance.pangle.d {
            public static com.bytedance.pangle.d a;
            private android.os.IBinder b;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.b = r1
                    return
            }

            @Override
            public final android.content.ComponentName a(android.content.Intent r6, java.lang.String r7) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IServiceManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L55
                    r2 = 1
                    r3 = 0
                    if (r6 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L55
                    r6.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L55
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L55
                L1b:
                    r0.writeString(r7)     // Catch: java.lang.Throwable -> L55
                    android.os.IBinder r4 = r5.b     // Catch: java.lang.Throwable -> L55
                    boolean r2 = r4.transact(r2, r0, r1, r3)     // Catch: java.lang.Throwable -> L55
                    if (r2 != 0) goto L3b
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L55
                    if (r2 == 0) goto L3b
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L55
                    android.content.ComponentName r6 = r2.a(r6, r7)     // Catch: java.lang.Throwable -> L55
                    r1.recycle()
                    r0.recycle()
                    return r6
                L3b:
                    r1.readException()     // Catch: java.lang.Throwable -> L55
                    int r6 = r1.readInt()     // Catch: java.lang.Throwable -> L55
                    if (r6 == 0) goto L4d
                    android.os.Parcelable$Creator r6 = android.content.ComponentName.CREATOR     // Catch: java.lang.Throwable -> L55
                    java.lang.Object r6 = r6.createFromParcel(r1)     // Catch: java.lang.Throwable -> L55
                    android.content.ComponentName r6 = (android.content.ComponentName) r6     // Catch: java.lang.Throwable -> L55
                    goto L4e
                L4d:
                    r6 = 0
                L4e:
                    r1.recycle()
                    r0.recycle()
                    return r6
                L55:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final void a(com.bytedance.pangle.f r6) {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IServiceManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L3a
                    if (r6 == 0) goto L14
                    android.os.IBinder r2 = r6.asBinder()     // Catch: java.lang.Throwable -> L3a
                    goto L15
                L14:
                    r2 = 0
                L15:
                    r0.writeStrongBinder(r2)     // Catch: java.lang.Throwable -> L3a
                    android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L3a
                    r3 = 4
                    r4 = 0
                    boolean r2 = r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L3a
                    if (r2 != 0) goto L36
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L3a
                    if (r2 == 0) goto L36
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L3a
                    r2.a(r6)     // Catch: java.lang.Throwable -> L3a
                L2f:
                    r1.recycle()
                    r0.recycle()
                    return
                L36:
                    r1.readException()     // Catch: java.lang.Throwable -> L3a
                    goto L2f
                L3a:
                    r6 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r6
            }

            @Override
            public final boolean a(android.content.Intent r7, com.bytedance.pangle.f r8, int r9, java.lang.String r10) {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IServiceManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L5c
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L5c
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L5c
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L5c
                L1b:
                    if (r8 == 0) goto L22
                    android.os.IBinder r4 = r8.asBinder()     // Catch: java.lang.Throwable -> L5c
                    goto L23
                L22:
                    r4 = 0
                L23:
                    r0.writeStrongBinder(r4)     // Catch: java.lang.Throwable -> L5c
                    r0.writeInt(r9)     // Catch: java.lang.Throwable -> L5c
                    r0.writeString(r10)     // Catch: java.lang.Throwable -> L5c
                    android.os.IBinder r4 = r6.b     // Catch: java.lang.Throwable -> L5c
                    r5 = 3
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L5c
                    if (r4 != 0) goto L4a
                    com.bytedance.pangle.d r4 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L5c
                    if (r4 == 0) goto L4a
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L5c
                    boolean r7 = r2.a(r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L5c
                    r1.recycle()
                    r0.recycle()
                    return r7
                L4a:
                    r1.readException()     // Catch: java.lang.Throwable -> L5c
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L5c
                    if (r7 == 0) goto L54
                    goto L55
                L54:
                    r2 = r3
                L55:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L5c:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }

            @Override
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.b
                    return r0
            }

            @Override
            public final boolean b(android.content.Intent r7, java.lang.String r8) {
                    r6 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.bytedance.pangle.IServiceManager"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L4e
                    r2 = 1
                    r3 = 0
                    if (r7 == 0) goto L18
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L4e
                    r7.writeToParcel(r0, r3)     // Catch: java.lang.Throwable -> L4e
                    goto L1b
                L18:
                    r0.writeInt(r3)     // Catch: java.lang.Throwable -> L4e
                L1b:
                    r0.writeString(r8)     // Catch: java.lang.Throwable -> L4e
                    android.os.IBinder r4 = r6.b     // Catch: java.lang.Throwable -> L4e
                    r5 = 2
                    boolean r4 = r4.transact(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L4e
                    if (r4 != 0) goto L3c
                    com.bytedance.pangle.d r4 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L4e
                    if (r4 == 0) goto L3c
                    com.bytedance.pangle.d r2 = com.bytedance.pangle.d.a.a()     // Catch: java.lang.Throwable -> L4e
                    boolean r7 = r2.b(r7, r8)     // Catch: java.lang.Throwable -> L4e
                    r1.recycle()
                    r0.recycle()
                    return r7
                L3c:
                    r1.readException()     // Catch: java.lang.Throwable -> L4e
                    int r7 = r1.readInt()     // Catch: java.lang.Throwable -> L4e
                    if (r7 == 0) goto L46
                    goto L47
                L46:
                    r2 = r3
                L47:
                    r1.recycle()
                    r0.recycle()
                    return r2
                L4e:
                    r7 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r7
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.bytedance.pangle.IServiceManager"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.bytedance.pangle.d a() {
                com.bytedance.pangle.d r0 = com.bytedance.pangle.d.a.a.a
                return r0
        }

        public static com.bytedance.pangle.d a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.bytedance.pangle.IServiceManager"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.bytedance.pangle.d
                if (r1 == 0) goto L13
                com.bytedance.pangle.d r0 = (com.bytedance.pangle.d) r0
                return r0
            L13:
                com.bytedance.pangle.d$a$a r0 = new com.bytedance.pangle.d$a$a
                r0.<init>(r2)
                return r0
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r5, android.os.Parcel r6, android.os.Parcel r7, int r8) {
                r4 = this;
                r0 = 0
                r1 = 1
                java.lang.String r2 = "com.bytedance.pangle.IServiceManager"
                if (r5 == r1) goto L7d
                r3 = 2
                if (r5 == r3) goto L5c
                r3 = 3
                if (r5 == r3) goto L2f
                r0 = 4
                if (r5 == r0) goto L1d
                r0 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r5 == r0) goto L19
                boolean r5 = super.onTransact(r5, r6, r7, r8)
                return r5
            L19:
                r7.writeString(r2)
                return r1
            L1d:
                r6.enforceInterface(r2)
                android.os.IBinder r5 = r6.readStrongBinder()
                com.bytedance.pangle.f r5 = com.bytedance.pangle.f.a.a(r5)
                r4.a(r5)
                r7.writeNoException()
                return r1
            L2f:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L41
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                android.content.Intent r0 = (android.content.Intent) r0
            L41:
                android.os.IBinder r5 = r6.readStrongBinder()
                com.bytedance.pangle.f r5 = com.bytedance.pangle.f.a.a(r5)
                int r8 = r6.readInt()
                java.lang.String r6 = r6.readString()
                boolean r5 = r4.a(r0, r5, r8, r6)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L5c:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L6e
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                android.content.Intent r0 = (android.content.Intent) r0
            L6e:
                java.lang.String r5 = r6.readString()
                boolean r5 = r4.b(r0, r5)
                r7.writeNoException()
                r7.writeInt(r5)
                return r1
            L7d:
                r6.enforceInterface(r2)
                int r5 = r6.readInt()
                if (r5 == 0) goto L8f
                android.os.Parcelable$Creator r5 = android.content.Intent.CREATOR
                java.lang.Object r5 = r5.createFromParcel(r6)
                r0 = r5
                android.content.Intent r0 = (android.content.Intent) r0
            L8f:
                java.lang.String r5 = r6.readString()
                android.content.ComponentName r5 = r4.a(r0, r5)
                r7.writeNoException()
                if (r5 == 0) goto La3
                r7.writeInt(r1)
                r5.writeToParcel(r7, r1)
                goto La7
            La3:
                r5 = 0
                r7.writeInt(r5)
            La7:
                return r1
        }
    }

    android.content.ComponentName a(android.content.Intent r1, java.lang.String r2);

    void a(com.bytedance.pangle.f r1);

    boolean a(android.content.Intent r1, com.bytedance.pangle.f r2, int r3, java.lang.String r4);

    boolean b(android.content.Intent r1, java.lang.String r2);
}
