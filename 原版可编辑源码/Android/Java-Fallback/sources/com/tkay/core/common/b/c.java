package com.tkay.core.common.b;

public final class c {

    static class 1 {
    }

    public final class a {
        final com.tkay.core.common.b.c a;
        private final java.lang.String b;
        private final boolean c;

        a(com.tkay.core.common.b.c r1, java.lang.String r2, boolean r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                return
        }

        private boolean b() {
                r1 = this;
                boolean r0 = r1.c
                return r0
        }

        public final java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    private final class b implements android.content.ServiceConnection {
        boolean a;
        final com.tkay.core.common.b.c b;
        private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> c;

        private b(com.tkay.core.common.b.c r2) {
                r1 = this;
                r1.b = r2
                r1.<init>()
                r2 = 0
                r1.a = r2
                java.util.concurrent.LinkedBlockingQueue r2 = new java.util.concurrent.LinkedBlockingQueue
                r0 = 1
                r2.<init>(r0)
                r1.c = r2
                return
        }

        b(com.tkay.core.common.b.c r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final android.os.IBinder a() {
                r1 = this;
                boolean r0 = r1.a
                if (r0 != 0) goto L10
                r0 = 1
                r1.a = r0
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r1.c
                java.lang.Object r0 = r0.take()
                android.os.IBinder r0 = (android.os.IBinder) r0
                return r0
            L10:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }

        @Override
        public final void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.c     // Catch: java.lang.InterruptedException -> L5
                r1.put(r2)     // Catch: java.lang.InterruptedException -> L5
            L5:
                return
        }

        @Override
        public final void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    private final class c implements android.os.IInterface {
        final com.tkay.core.common.b.c a;
        private android.os.IBinder b;

        public c(com.tkay.core.common.b.c r1, android.os.IBinder r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        public final java.lang.String a() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L22
                android.os.IBinder r2 = r5.b     // Catch: java.lang.Throwable -> L22
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
                android.os.IBinder r0 = r1.b
                return r0
        }

        public final boolean b() {
                r6 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2a
                r2 = 1
                r0.writeInt(r2)     // Catch: java.lang.Throwable -> L2a
                android.os.IBinder r3 = r6.b     // Catch: java.lang.Throwable -> L2a
                r4 = 2
                r5 = 0
                r3.transact(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L2a
                r1.readException()     // Catch: java.lang.Throwable -> L2a
                int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L2a
                if (r3 == 0) goto L22
                goto L23
            L22:
                r2 = r5
            L23:
                r1.recycle()
                r0.recycle()
                return r2
            L2a:
                r2 = move-exception
                r1.recycle()
                r0.recycle()
                throw r2
        }
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.tkay.core.common.b.c.a a(android.content.Context r5) {
            r4 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L67
            android.content.pm.PackageManager r0 = r5.getPackageManager()     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = "com.android.vending"
            r2 = 0
            r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L65
            com.tkay.core.common.b.c$b r0 = new com.tkay.core.common.b.c$b
            r0.<init>(r4, r2)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r3 = "com.google.android.gms.ads.identifier.service.START"
            r1.<init>(r3)
            java.lang.String r3 = "com.google.android.gms"
            r1.setPackage(r3)
            android.content.pm.PackageManager r3 = r5.getPackageManager()
            java.util.List r2 = r3.queryIntentServices(r1, r2)
            if (r2 == 0) goto L5d
            int r2 = r2.size()
            if (r2 <= 0) goto L5d
            r2 = 1
            boolean r1 = r5.bindService(r1, r0, r2)
            if (r1 == 0) goto L5d
            com.tkay.core.common.b.c$c r1 = new com.tkay.core.common.b.c$c     // Catch: java.lang.Throwable -> L56
            android.os.IBinder r2 = r0.a()     // Catch: java.lang.Throwable -> L56
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L56
            com.tkay.core.common.b.c$a r2 = new com.tkay.core.common.b.c$a     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L56
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> L56
            r2.<init>(r4, r3, r1)     // Catch: java.lang.Throwable -> L56
            r5.unbindService(r0)     // Catch: java.lang.Throwable -> L55
        L55:
            return r2
        L56:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L58
        L58:
            r1 = move-exception
            r5.unbindService(r0)     // Catch: java.lang.Throwable -> L5c
        L5c:
            throw r1
        L5d:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "Google Play connection failed"
            r5.<init>(r0)
            throw r5
        L65:
            r5 = move-exception
            throw r5
        L67:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "Cannot be called from the main thread"
            r5.<init>(r0)
            throw r5
    }
}
