package com.alipay.sdk.m.a;

public interface a extends android.os.IInterface {

    public static abstract class a extends android.os.Binder implements com.alipay.sdk.m.a.a {

        public static class a implements com.alipay.sdk.m.a.a {
            public android.os.IBinder a;

            public a(android.os.IBinder r1) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    return
            }

            public java.lang.String a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                    r3 = this;
                    android.os.Parcel r0 = android.os.Parcel.obtain()
                    android.os.Parcel r1 = android.os.Parcel.obtain()
                    java.lang.String r2 = "com.heytap.openid.IOpenID"
                    r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2b
                    r0.writeString(r4)     // Catch: java.lang.Throwable -> L2b
                    r0.writeString(r5)     // Catch: java.lang.Throwable -> L2b
                    r0.writeString(r6)     // Catch: java.lang.Throwable -> L2b
                    android.os.IBinder r4 = r3.a     // Catch: java.lang.Throwable -> L2b
                    r5 = 1
                    r6 = 0
                    r4.transact(r5, r0, r1, r6)     // Catch: java.lang.Throwable -> L2b
                    r1.readException()     // Catch: java.lang.Throwable -> L2b
                    java.lang.String r4 = r1.readString()     // Catch: java.lang.Throwable -> L2b
                    r1.recycle()
                    r0.recycle()
                    return r4
                L2b:
                    r4 = move-exception
                    r1.recycle()
                    r0.recycle()
                    throw r4
            }

            @Override
            public android.os.IBinder asBinder() {
                    r1 = this;
                    android.os.IBinder r0 = r1.a
                    return r0
            }
        }

        public static com.alipay.sdk.m.a.a a(android.os.IBinder r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                java.lang.String r0 = "com.heytap.openid.IOpenID"
                android.os.IInterface r0 = r2.queryLocalInterface(r0)
                if (r0 == 0) goto L13
                boolean r1 = r0 instanceof com.alipay.sdk.m.a.a
                if (r1 == 0) goto L13
                com.alipay.sdk.m.a.a r0 = (com.alipay.sdk.m.a.a) r0
                return r0
            L13:
                com.alipay.sdk.m.a.a$a$a r0 = new com.alipay.sdk.m.a.a$a$a
                r0.<init>(r2)
                return r0
        }
    }

    public class b {
        public static boolean a;
        public static boolean b;
    }

    public class c {
        public com.alipay.sdk.m.a.a a;
        public java.lang.String b;
        public java.lang.String c;
        public final java.lang.Object d;
        public android.content.ServiceConnection e;

        public class a implements android.content.ServiceConnection {
            public final com.alipay.sdk.m.a.a.c a;

            public a(com.alipay.sdk.m.a.a.c r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                    r0 = this;
                    com.alipay.sdk.m.a.a$c r1 = r0.a
                    com.alipay.sdk.m.a.a r2 = com.alipay.sdk.m.a.a.a.a(r2)
                    r1.a = r2
                    com.alipay.sdk.m.a.a$c r1 = r0.a
                    java.lang.Object r1 = r1.d
                    monitor-enter(r1)
                    com.alipay.sdk.m.a.a$c r2 = r0.a     // Catch: java.lang.Throwable -> L16
                    java.lang.Object r2 = r2.d     // Catch: java.lang.Throwable -> L16
                    r2.notify()     // Catch: java.lang.Throwable -> L16
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L16
                    return
                L16:
                    r2 = move-exception
                    monitor-exit(r1)     // Catch: java.lang.Throwable -> L16
                    throw r2
            }

            @Override
            public void onServiceDisconnected(android.content.ComponentName r2) {
                    r1 = this;
                    com.alipay.sdk.m.a.a$c r2 = r1.a
                    r0 = 0
                    r2.a = r0
                    return
            }
        }

        public static class b {
            public static final com.alipay.sdk.m.a.a.c a = null;

            static {
                    com.alipay.sdk.m.a.a$c r0 = new com.alipay.sdk.m.a.a$c
                    r1 = 0
                    r0.<init>(r1)
                    com.alipay.sdk.m.a.a.c.b.a = r0
                    return
            }
        }

        public c(com.alipay.sdk.m.a.a.c.a r1) {
                r0 = this;
                r0.<init>()
                r1 = 0
                r0.a = r1
                r0.b = r1
                r0.c = r1
                java.lang.Object r1 = new java.lang.Object
                r1.<init>()
                r0.d = r1
                com.alipay.sdk.m.a.a$c$a r1 = new com.alipay.sdk.m.a.a$c$a
                r1.<init>(r0)
                r0.e = r1
                return
        }

        public synchronized java.lang.String a(android.content.Context r5, java.lang.String r6) {
                r4 = this;
                monitor-enter(r4)
                android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L6f
                android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L6f
                if (r0 == r1) goto L67
                com.alipay.sdk.m.a.a r0 = r4.a     // Catch: java.lang.Throwable -> L6f
                if (r0 != 0) goto L59
                android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L6f
                r0.<init>()     // Catch: java.lang.Throwable -> L6f
                android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L6f
                java.lang.String r2 = "com.heytap.openid"
                java.lang.String r3 = "com.heytap.openid.IdentifyService"
                r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L6f
                r0.setComponent(r1)     // Catch: java.lang.Throwable -> L6f
                java.lang.String r1 = "action.com.heytap.openid.OPEN_ID_SERVICE"
                r0.setAction(r1)     // Catch: java.lang.Throwable -> L6f
                android.content.ServiceConnection r1 = r4.e     // Catch: java.lang.Throwable -> L6f
                r2 = 1
                boolean r0 = r5.bindService(r0, r1, r2)     // Catch: java.lang.Throwable -> L6f
                if (r0 == 0) goto L43
                java.lang.Object r0 = r4.d     // Catch: java.lang.Throwable -> L6f
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L6f
                java.lang.Object r1 = r4.d     // Catch: java.lang.Throwable -> L39 java.lang.InterruptedException -> L3b
                r2 = 3000(0xbb8, double:1.482E-320)
                r1.wait(r2)     // Catch: java.lang.Throwable -> L39 java.lang.InterruptedException -> L3b
                goto L3f
            L39:
                r5 = move-exception
                goto L41
            L3b:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L39
            L3f:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
                goto L43
            L41:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
                throw r5     // Catch: java.lang.Throwable -> L6f
            L43:
                com.alipay.sdk.m.a.a r0 = r4.a     // Catch: java.lang.Throwable -> L6f
                if (r0 != 0) goto L4b
                java.lang.String r5 = ""
                monitor-exit(r4)
                return r5
            L4b:
                java.lang.String r5 = r4.b(r5, r6)     // Catch: android.os.RemoteException -> L51 java.lang.Throwable -> L6f
                monitor-exit(r4)
                return r5
            L51:
                r5 = move-exception
                r5.printStackTrace()     // Catch: java.lang.Throwable -> L6f
                java.lang.String r5 = ""
                monitor-exit(r4)
                return r5
            L59:
                java.lang.String r5 = r4.b(r5, r6)     // Catch: android.os.RemoteException -> L5f java.lang.Throwable -> L6f
                monitor-exit(r4)
                return r5
            L5f:
                r5 = move-exception
                r5.printStackTrace()     // Catch: java.lang.Throwable -> L6f
                java.lang.String r5 = ""
                monitor-exit(r4)
                return r5
            L67:
                java.lang.IllegalStateException r5 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L6f
                java.lang.String r6 = "Cannot run on MainThread"
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L6f
                throw r5     // Catch: java.lang.Throwable -> L6f
            L6f:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
        }

        public boolean a(android.content.Context r7) {
                r6 = this;
                r0 = 0
                android.content.pm.PackageManager r7 = r7.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L28
                java.lang.String r1 = "com.heytap.openid"
                android.content.pm.PackageInfo r7 = r7.getPackageInfo(r1, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L28
                int r1 = android.os.Build.VERSION.SDK_INT     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L28
                r2 = 28
                r3 = 1
                if (r1 < r2) goto L20
                if (r7 == 0) goto L1f
                long r1 = r7.getLongVersionCode()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L28
                r4 = 1
                int r7 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
                if (r7 < 0) goto L1f
                r0 = 1
            L1f:
                return r0
            L20:
                if (r7 == 0) goto L27
                int r7 = r7.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L28
                if (r7 < r3) goto L27
                r0 = 1
            L27:
                return r0
            L28:
                r7 = move-exception
                r7.printStackTrace()
                return r0
        }

        public final java.lang.String b(android.content.Context r8, java.lang.String r9) {
                r7 = this;
                java.lang.String r0 = r7.b
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto Le
                java.lang.String r0 = r8.getPackageName()
                r7.b = r0
            Le:
                java.lang.String r0 = r7.c
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L6c
                java.lang.String r0 = r7.b
                r1 = 0
                android.content.pm.PackageManager r8 = r8.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
                r2 = 64
                android.content.pm.PackageInfo r8 = r8.getPackageInfo(r0, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
                android.content.pm.Signature[] r8 = r8.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
                goto L2b
            L26:
                r8 = move-exception
                r8.printStackTrace()
                r8 = r1
            L2b:
                if (r8 == 0) goto L6a
                int r0 = r8.length
                if (r0 <= 0) goto L6a
                r0 = 0
                r8 = r8[r0]
                java.lang.String r2 = "SHA1"
                byte[] r8 = r8.toByteArray()
                java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> L66
                if (r2 == 0) goto L6a
                byte[] r8 = r2.digest(r8)     // Catch: java.security.NoSuchAlgorithmException -> L66
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L66
                r2.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L66
                int r3 = r8.length     // Catch: java.security.NoSuchAlgorithmException -> L66
            L49:
                if (r0 >= r3) goto L61
                r4 = r8[r0]     // Catch: java.security.NoSuchAlgorithmException -> L66
                r4 = r4 & 255(0xff, float:3.57E-43)
                r4 = r4 | 256(0x100, float:3.59E-43)
                java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.security.NoSuchAlgorithmException -> L66
                r5 = 3
                r6 = 1
                java.lang.String r4 = r4.substring(r6, r5)     // Catch: java.security.NoSuchAlgorithmException -> L66
                r2.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L66
                int r0 = r0 + 1
                goto L49
            L61:
                java.lang.String r1 = r2.toString()     // Catch: java.security.NoSuchAlgorithmException -> L66
                goto L6a
            L66:
                r8 = move-exception
                r8.printStackTrace()
            L6a:
                r7.c = r1
            L6c:
                com.alipay.sdk.m.a.a r8 = r7.a
                java.lang.String r0 = r7.b
                java.lang.String r1 = r7.c
                com.alipay.sdk.m.a.a$a$a r8 = (com.alipay.sdk.m.a.a.a.a) r8
                java.lang.String r8 = r8.a(r0, r1, r9)
                boolean r9 = android.text.TextUtils.isEmpty(r8)
                if (r9 == 0) goto L80
                java.lang.String r8 = ""
            L80:
                return r8
        }
    }
}
