package com.czhj.sdk.common.utils;

public class PlayServicesUtil {

    static class 1 {
    }

    private static final class AdvertisingConnection implements android.content.ServiceConnection {
        boolean a;
        private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;

        private AdvertisingConnection() {
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

        AdvertisingConnection(com.czhj.sdk.common.utils.PlayServicesUtil.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        android.os.IBinder a() throws java.lang.InterruptedException {
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
        public void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r0.b     // Catch: java.lang.Throwable -> L6
                r1.put(r2)     // Catch: java.lang.Throwable -> L6
                goto Le
            L6:
                r1 = move-exception
                java.lang.String r1 = r1.getMessage()
                com.czhj.sdk.logger.SigmobLog.e(r1)
            Le:
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    public static class AdvertisingInfo {
        public final java.lang.String advertisingId;
        public final boolean limitAdTracking;

        AdvertisingInfo(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.advertisingId = r1
                r0.limitAdTracking = r2
                return
        }
    }

    private static final class AdvertisingInterface implements android.os.IInterface {
        private final android.os.IBinder a;

        AdvertisingInterface(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        java.lang.String a() throws android.os.RemoteException {
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

        boolean b() throws android.os.RemoteException {
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

    public PlayServicesUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.czhj.sdk.common.utils.PlayServicesUtil.AdvertisingInfo getAdvertisingIdInfo(android.content.Context r4) throws java.lang.Exception {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r2 = 0
            if (r0 != r1) goto Lc
            return r2
        Lc:
            java.lang.String r0 = "private : getAdvertisingIdInfo"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingConnection r0 = new com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingConnection
            r0.<init>(r2)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "com.google.android.gms.ads.identifier.service.START"
            r1.<init>(r2)
            java.lang.String r2 = "com.google.android.gms"
            r1.setPackage(r2)
            r2 = 1
            boolean r1 = r4.bindService(r1, r0, r2)     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L43
            com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingInterface r1 = new com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingInterface     // Catch: java.lang.Throwable -> L4e
            android.os.IBinder r2 = r0.a()     // Catch: java.lang.Throwable -> L4e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4e
            com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingInfo r2 = new com.czhj.sdk.common.utils.PlayServicesUtil$AdvertisingInfo     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L4e
            boolean r1 = r1.b()     // Catch: java.lang.Throwable -> L4e
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L4e
            r4.unbindService(r0)
            return r2
        L43:
            r4.unbindService(r0)
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "Google Play connection failed"
            r4.<init>(r0)
            throw r4
        L4e:
            r1 = move-exception
            r4.unbindService(r0)
            throw r1
    }
}
