package com.alipay.sdk.m.c;

public class b implements com.alipay.sdk.m.b.b {
    public static final java.lang.String a = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService";
    public static final int b = 1;
    public static final int c = 2;

    public static class a {
    }

    public static final class b implements android.content.ServiceConnection {
        public boolean a;
        public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;

        public b() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
                r0.<init>()
                r1.b = r0
                return
        }

        public b(com.alipay.sdk.m.c.b.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public android.os.IBinder a() throws java.lang.InterruptedException {
                r4 = this;
                boolean r0 = r4.a
                if (r0 != 0) goto L14
                r0 = 1
                r4.a = r0
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.b
                java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
                r2 = 5
                java.lang.Object r0 = r0.poll(r2, r1)
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
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.b     // Catch: java.lang.InterruptedException -> L5
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

    public static final class c implements android.os.IInterface {
        public android.os.IBinder a;

        public c(android.os.IBinder r1) {
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

        public java.lang.String d() throws android.os.RemoteException {
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

        public boolean e() throws android.os.RemoteException {
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

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a(android.content.Context r5) {
            r4 = this;
            com.alipay.sdk.m.c.b$b r0 = new com.alipay.sdk.m.c.b$b
            r1 = 0
            r0.<init>(r1)
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r2.<init>(r3)
            java.lang.String r3 = "com.huawei.hwid"
            r2.setPackage(r3)
            r3 = 1
            boolean r2 = r5.bindService(r2, r0, r3)
            if (r2 == 0) goto L32
            com.alipay.sdk.m.c.b$c r2 = new com.alipay.sdk.m.c.b$c     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            android.os.IBinder r3 = r0.a()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            java.lang.String r1 = r2.d()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            r5.unbindService(r0)
            return r1
        L2a:
            r1 = move-exception
            r5.unbindService(r0)
            throw r1
        L2f:
            r5.unbindService(r0)
        L32:
            return r1
    }
}
