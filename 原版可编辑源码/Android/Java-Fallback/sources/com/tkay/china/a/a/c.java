package com.tkay.china.a.a;

public interface c extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.tkay.china.a.a.c {
        static final int a = 1;
        static final int b = 2;
        private static final java.lang.String c = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService";

        private static class a implements com.tkay.china.a.a.c {
            private android.os.IBinder a;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            private static java.lang.String c() {
                    java.lang.String r0 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                    return r0
            }

            @Override
            public final java.lang.String a() {
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
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }

            @Override
            public final boolean b() {
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

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.tkay.china.a.a.c a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.tkay.china.a.a.c
                if (r1 == 0) goto L13
                com.tkay.china.a.a.c r0 = (com.tkay.china.a.a.c) r0
                return r0
            L13:
                com.tkay.china.a.a.c$a$a r0 = new com.tkay.china.a.a.c$a$a
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

    java.lang.String a();

    boolean b();
}
