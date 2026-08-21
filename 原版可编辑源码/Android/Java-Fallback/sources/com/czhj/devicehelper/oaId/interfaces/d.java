package com.czhj.devicehelper.oaId.interfaces;

public interface d extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.czhj.devicehelper.oaId.interfaces.d {

        public static class a implements com.czhj.devicehelper.oaId.interfaces.d {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            public java.lang.String a(java.lang.String r7, java.lang.String r8, java.lang.String r9) {
                    r6 = this;
                    java.lang.String r0 = "]"
                    java.lang.String r1 = "oaid"
                    android.os.Parcel r2 = android.os.Parcel.obtain()
                    android.os.Parcel r3 = android.os.Parcel.obtain()
                    r4 = 0
                    java.lang.String r5 = "com.heytap.openid.IOpenID"
                    r2.writeInterfaceToken(r5)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r2.writeString(r7)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r2.writeString(r8)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r2.writeString(r9)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    android.os.IBinder r7 = r6.a     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r8 = 1
                    r9 = 0
                    r7.transact(r8, r2, r3, r9)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r3.readException()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    java.lang.String r4 = r3.readString()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r7.<init>()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    java.lang.String r8 = "getSerID() called with: res = ["
                    r7.append(r8)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r7.append(r4)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    r7.append(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    android.util.Log.d(r1, r7)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
                    goto L66
                L41:
                    r7 = move-exception
                    goto L6d
                L43:
                    r7 = move-exception
                    java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
                    r8.<init>()     // Catch: java.lang.Throwable -> L41
                    java.lang.String r9 = "getSerID() called with: Exception = ["
                    r8.append(r9)     // Catch: java.lang.Throwable -> L41
                    java.lang.String r9 = r7.getMessage()     // Catch: java.lang.Throwable -> L41
                    r8.append(r9)     // Catch: java.lang.Throwable -> L41
                    r8.append(r0)     // Catch: java.lang.Throwable -> L41
                    java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L41
                    android.util.Log.d(r1, r8)     // Catch: java.lang.Throwable -> L41
                    java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L41
                    com.czhj.sdk.logger.SigmobLog.e(r7)     // Catch: java.lang.Throwable -> L41
                L66:
                    r2.recycle()
                    r3.recycle()
                    return r4
                L6d:
                    r2.recycle()
                    r3.recycle()
                    throw r7
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.czhj.devicehelper.oaId.interfaces.d a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.heytap.openid.IOpenID"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L14
                boolean r1 = r0 instanceof com.czhj.devicehelper.oaId.interfaces.d
                if (r1 != 0) goto L11
                goto L14
            L11:
                com.czhj.devicehelper.oaId.interfaces.d r0 = (com.czhj.devicehelper.oaId.interfaces.d) r0
                return r0
            L14:
                com.czhj.devicehelper.oaId.interfaces.d$a$a r0 = new com.czhj.devicehelper.oaId.interfaces.d$a$a
                r0.<init>(r2)
                return r0
        }
    }
}
