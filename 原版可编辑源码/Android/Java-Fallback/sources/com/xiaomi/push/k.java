package com.xiaomi.push;

final class k {

    final class a {
        private final java.lang.String a;
        private final boolean a;

        a(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }
    }

    final class b implements android.content.ServiceConnection {
        private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> a;
        boolean a;

        private b() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
                r1 = 1
                r0.<init>(r1)
                r2.a = r0
                return
        }

        b(com.xiaomi.push.l r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public android.os.IBinder a() {
                r4 = this;
                boolean r0 = r4.a
                if (r0 != 0) goto L14
                r0 = 1
                r4.a = r0
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.a
                r1 = 30000(0x7530, double:1.4822E-319)
                java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS
                java.lang.Object r0 = r0.poll(r1, r3)
                android.os.IBinder r0 = (android.os.IBinder) r0
                return r0
            L14:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.a     // Catch: java.lang.InterruptedException -> L5
                r1.put(r2)     // Catch: java.lang.InterruptedException -> L5
            L5:
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    final class c implements android.os.IInterface {
        private android.os.IBinder a;

        public c(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public java.lang.String a() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
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
        public android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.a
                return r0
        }
    }

    public static com.xiaomi.push.k.a a(android.content.Context r4) {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L5b
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L59
            java.lang.String r1 = "com.android.vending"
            r2 = 0
            r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L59
            com.xiaomi.push.k$b r0 = new com.xiaomi.push.k$b
            r1 = 0
            r0.<init>(r1)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.google.android.gms.ads.identifier.service.START"
            r1.<init>(r3)
            java.lang.String r3 = "com.google.android.gms"
            r1.setPackage(r3)
            r3 = 1
            boolean r1 = r4.bindService(r1, r0, r3)
            if (r1 == 0) goto L51
            android.os.IBinder r1 = r0.a()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            if (r1 == 0) goto L45
            com.xiaomi.push.k$c r3 = new com.xiaomi.push.k$c     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            com.xiaomi.push.k$a r1 = new com.xiaomi.push.k$a     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r4.unbindService(r0)
            return r1
        L45:
            r4.unbindService(r0)
            goto L51
        L49:
            r1 = move-exception
            goto L4d
        L4b:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L49
        L4d:
            r4.unbindService(r0)
            throw r1
        L51:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "Google Play connection failed"
            r4.<init>(r0)
            throw r4
        L59:
            r4 = move-exception
            throw r4
        L5b:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Cannot be called from the main thread"
            r4.<init>(r0)
            throw r4
    }
}
