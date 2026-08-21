package com.bianfeng.ymnsdk.sysfunc.interfaces;

public interface OppoIDInterface extends android.os.IInterface {

    public static abstract class up extends android.os.Binder implements com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface {

        public static class down implements com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface {
            public android.os.IBinder iBinder;

            public down(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.iBinder = r1
                    return
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.iBinder
                    return r0
            }

            public java.lang.String getSerID(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.heytap.openid.IOpenID"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
                    android.os.IBinder r4 = r3.iBinder     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
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
        }

        public up() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface genInterface(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.heytap.openid.IOpenID"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L14
                boolean r1 = r0 instanceof com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface
                if (r1 != 0) goto L11
                goto L14
            L11:
                com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface r0 = (com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface) r0
                return r0
            L14:
                com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface$up$down r0 = new com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface$up$down
                r0.<init>(r2)
                return r0
        }
    }
}
