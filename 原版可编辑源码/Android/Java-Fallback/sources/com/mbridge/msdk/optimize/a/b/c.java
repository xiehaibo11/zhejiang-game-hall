package com.mbridge.msdk.optimize.a.b;

public interface c extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.mbridge.msdk.optimize.a.b.c {

        public static class a implements com.mbridge.msdk.optimize.a.b.c {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            public final java.lang.String a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
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
            public final android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }
        }

        public static com.mbridge.msdk.optimize.a.b.c a(android.os.IBinder r3) {
                r0 = 0
                if (r3 != 0) goto L4
                return r0
            L4:
                java.lang.String r1 = "com.heytap.openid.IOpenID"
                android.os.IInterface r1 = r3.queryLocalInterface(r1)     // Catch: java.lang.Throwable -> L1a
                if (r1 == 0) goto L14
                boolean r2 = r1 instanceof com.mbridge.msdk.optimize.a.b.c     // Catch: java.lang.Throwable -> L1a
                if (r2 != 0) goto L11
                goto L14
            L11:
                com.mbridge.msdk.optimize.a.b.c r1 = (com.mbridge.msdk.optimize.a.b.c) r1     // Catch: java.lang.Throwable -> L1a
                return r1
            L14:
                com.mbridge.msdk.optimize.a.b.c$a$a r1 = new com.mbridge.msdk.optimize.a.b.c$a$a     // Catch: java.lang.Throwable -> L1a
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L1a
                return r1
            L1a:
                return r0
        }
    }
}
