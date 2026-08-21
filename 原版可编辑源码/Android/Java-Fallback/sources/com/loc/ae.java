package com.loc;

public final class ae {

    private static final class a {
        private final java.lang.String a;
        private final boolean b;

        a(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        static java.lang.String a(com.loc.ae.a r0) {
                java.lang.String r0 = r0.a
                return r0
        }

        public final boolean a() {
                r1 = this;
                boolean r0 = r1.b
                return r0
        }
    }

    private static final class b implements android.content.ServiceConnection {
        boolean a;
        private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;

        private b() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
                r1 = 1
                r0.<init>(r1)
                r2.b = r0
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final android.os.IBinder a() throws java.lang.InterruptedException {
                r1 = this;
                boolean r0 = r1.a
                if (r0 != 0) goto L10
                r0 = 1
                r1.a = r0
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r1.b
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
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.b     // Catch: java.lang.InterruptedException -> L5
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

    private static final class c implements android.os.IInterface {
        private android.os.IBinder a;

        public c(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public final java.lang.String a() throws android.os.RemoteException {
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
        public final android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.a
                return r0
        }

        public final boolean b() throws android.os.RemoteException {
                r6 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.google.android.gms.ads.identifier.internal.IAdvertisingIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L2a
                r2 = 1
                r0.writeInt(r2)     // Catch: java.lang.Throwable -> L2a
                android.os.IBinder r3 = r6.a     // Catch: java.lang.Throwable -> L2a
                r4 = 2
                r5 = 0
                r3.transact(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L2a
                r1.readException()     // Catch: java.lang.Throwable -> L2a
                int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L2a
                if (r3 == 0) goto L22
                goto L23
            L22:
                r2 = 0
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

    public static java.lang.String a(android.content.Context r2) {
            r0 = 0
            com.loc.ae$a r2 = b(r2)     // Catch: java.lang.Throwable -> L13
            if (r2 != 0) goto L8
            return r0
        L8:
            boolean r1 = r2.a()     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L13
            java.lang.String r2 = com.loc.ae.a.a(r2)     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            return r0
    }

    private static com.loc.ae.a b(android.content.Context r4) throws java.lang.Exception {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto Lc
            r4 = 0
            return r4
        Lc:
            android.content.pm.PackageManager r0 = r4.getPackageManager()     // Catch: java.lang.Exception -> L5c
            java.lang.String r1 = "com.android.vending"
            r2 = 0
            r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L5c
            com.loc.ae$b r0 = new com.loc.ae$b
            r0.<init>(r2)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.google.android.gms.ads.identifier.service.START"
            r1.<init>(r2)
            java.lang.String r2 = "com.google.android.gms"
            r1.setPackage(r2)
            r2 = 1
            boolean r1 = r4.bindService(r1, r0, r2)
            if (r1 == 0) goto L54
            com.loc.ae$c r1 = new com.loc.ae$c     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            android.os.IBinder r2 = r0.a()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            boolean r2 = r1.b()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            java.lang.String r3 = ""
            if (r2 != 0) goto L43
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
        L43:
            com.loc.ae$a r1 = new com.loc.ae$a     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r4.unbindService(r0)
            return r1
        L4c:
            r1 = move-exception
            goto L50
        L4e:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L4c
        L50:
            r4.unbindService(r0)
            throw r1
        L54:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "Google Play connection failed"
            r4.<init>(r0)
            throw r4
        L5c:
            r4 = move-exception
            throw r4
    }
}
