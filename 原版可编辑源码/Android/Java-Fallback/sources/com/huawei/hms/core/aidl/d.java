package com.huawei.hms.core.aidl;

public interface d extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.huawei.hms.core.aidl.d {

        private static class a implements com.huawei.hms.core.aidl.d {
            public static com.huawei.hms.core.aidl.d b;
            private android.os.IBinder a;

            a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            @Override
            public void a(com.huawei.hms.core.aidl.b r6, com.huawei.hms.core.aidl.c r7) throws android.os.RemoteException {
                    r5 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    java.lang.String r1 = "com.huawei.hms.core.aidl.IAIDLInvoke"
                    r0.writeInterfaceToken(r1)     // Catch: java.lang.Throwable -> L41
                    r1 = 1
                    r2 = 0
                    if (r6 == 0) goto L14
                    r0.writeInt(r1)     // Catch: java.lang.Throwable -> L41
                    r6.writeToParcel(r0, r2)     // Catch: java.lang.Throwable -> L41
                    goto L17
                L14:
                    r0.writeInt(r2)     // Catch: java.lang.Throwable -> L41
                L17:
                    r2 = 0
                    if (r7 == 0) goto L1f
                    android.os.IBinder r3 = r7.asBinder()     // Catch: java.lang.Throwable -> L41
                    goto L20
                L1f:
                    r3 = r2
                L20:
                    r0.writeStrongBinder(r3)     // Catch: java.lang.Throwable -> L41
                    android.os.IBinder r3 = r5.a     // Catch: java.lang.Throwable -> L41
                    r4 = 2
                    boolean r1 = r3.transact(r4, r0, r2, r1)     // Catch: java.lang.Throwable -> L41
                    if (r1 != 0) goto L3d
                    com.huawei.hms.core.aidl.d r1 = com.huawei.hms.core.aidl.d.a.a()     // Catch: java.lang.Throwable -> L41
                    if (r1 == 0) goto L3d
                    com.huawei.hms.core.aidl.d r1 = com.huawei.hms.core.aidl.d.a.a()     // Catch: java.lang.Throwable -> L41
                    r1.a(r6, r7)     // Catch: java.lang.Throwable -> L41
                    r0.recycle()
                    return
                L3d:
                    r0.recycle()
                    return
                L41:
                    r6 = move-exception
                    r0.recycle()
                    throw r6
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }
        }

        public static com.huawei.hms.core.aidl.d a() {
                com.huawei.hms.core.aidl.d r0 = com.huawei.hms.core.aidl.d.a.a.b
                return r0
        }

        public static com.huawei.hms.core.aidl.d a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.huawei.hms.core.aidl.IAIDLInvoke"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.huawei.hms.core.aidl.d
                if (r1 == 0) goto L13
                com.huawei.hms.core.aidl.d r0 = (com.huawei.hms.core.aidl.d) r0
                return r0
            L13:
                com.huawei.hms.core.aidl.d$a$a r0 = new com.huawei.hms.core.aidl.d$a$a
                r0.<init>(r2)
                return r0
        }
    }

    void a(com.huawei.hms.core.aidl.b r1, com.huawei.hms.core.aidl.c r2) throws android.os.RemoteException;
}
