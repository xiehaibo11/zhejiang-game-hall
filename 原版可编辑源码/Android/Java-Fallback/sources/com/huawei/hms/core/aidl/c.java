package com.huawei.hms.core.aidl;

public interface c extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.huawei.hms.core.aidl.c {

        private static class a implements com.huawei.hms.core.aidl.c {
            public static com.huawei.hms.core.aidl.c b;
            private android.os.IBinder a;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.huawei.hms.core.aidl.IAIDLCallback"
                r1.attachInterface(r1, r0)
                return
        }

        public static com.huawei.hms.core.aidl.c asInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.huawei.hms.core.aidl.IAIDLCallback"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.huawei.hms.core.aidl.c
                if (r1 == 0) goto L13
                com.huawei.hms.core.aidl.c r0 = (com.huawei.hms.core.aidl.c) r0
                return r0
            L13:
                com.huawei.hms.core.aidl.c$a$a r0 = new com.huawei.hms.core.aidl.c$a$a
                r0.<init>(r2)
                return r0
        }

        public static com.huawei.hms.core.aidl.c getDefaultImpl() {
                com.huawei.hms.core.aidl.c r0 = com.huawei.hms.core.aidl.c.a.a.b
                return r0
        }

        public static boolean setDefaultImpl(com.huawei.hms.core.aidl.c r1) {
                com.huawei.hms.core.aidl.c r0 = com.huawei.hms.core.aidl.c.a.a.b
                if (r0 != 0) goto La
                if (r1 == 0) goto La
                com.huawei.hms.core.aidl.c.a.a.b = r1
                r1 = 1
                return r1
            La:
                r1 = 0
                return r1
        }

        @Override
        public android.os.IBinder asBinder() {
                r0 = this;
                return r0
        }

        @Override
        public boolean onTransact(int r4, android.os.Parcel r5, android.os.Parcel r6, int r7) throws android.os.RemoteException {
                r3 = this;
                r0 = 1
                java.lang.String r1 = "com.huawei.hms.core.aidl.IAIDLCallback"
                if (r4 == r0) goto L13
                r2 = 1598968902(0x5f4e5446, float:1.4867585E19)
                if (r4 == r2) goto Lf
                boolean r4 = super.onTransact(r4, r5, r6, r7)
                return r4
            Lf:
                r6.writeString(r1)
                return r0
            L13:
                r5.enforceInterface(r1)
                int r4 = r5.readInt()
                if (r4 == 0) goto L25
                android.os.Parcelable$Creator<com.huawei.hms.core.aidl.b> r4 = com.huawei.hms.core.aidl.b.CREATOR
                java.lang.Object r4 = r4.createFromParcel(r5)
                com.huawei.hms.core.aidl.b r4 = (com.huawei.hms.core.aidl.b) r4
                goto L26
            L25:
                r4 = 0
            L26:
                r3.call(r4)
                return r0
        }
    }

    void call(com.huawei.hms.core.aidl.b r1) throws android.os.RemoteException;
}
