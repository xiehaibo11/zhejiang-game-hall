package com.bianfeng.ymnsdk.sysfunc.interfaces;

public interface SamsungIDInterface extends android.os.IInterface {

    public static class Proxy implements com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface {
        private android.os.IBinder mIBinder;

        public Proxy(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                r0.mIBinder = r1
                return
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.mIBinder
                return r0
        }

        @Override
        public java.lang.String getID() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.samsung.android.deviceidservice.IDeviceIdService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
                android.os.IBinder r2 = r5.mIBinder     // Catch: java.lang.Throwable -> L1c
                r3 = 1
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
                r1.readException()     // Catch: java.lang.Throwable -> L1c
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
                goto L27
            L1c:
                r2 = move-exception
                r1.recycle()
                r0.recycle()
                r2.printStackTrace()
                r2 = 0
            L27:
                r1.recycle()
                r0.recycle()
                return r2
        }
    }

    public static abstract class Stub extends android.os.Binder implements com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface {
        public Stub() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "com.samsung.android.deviceidservice.IDeviceIdService"
                r1.attachInterface(r1, r0)
                return
        }

        public com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface a(android.os.IBinder r3) {
                r2 = this;
                r0 = 0
                if (r3 != 0) goto L4
                return r0
            L4:
                java.lang.String r1 = "com.samsung.android.deviceidservice.IDeviceIdService"
                android.os.IInterface r1 = r3.queryLocalInterface(r1)
                if (r1 != 0) goto Ld
                return r0
            Ld:
                com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface$Proxy r0 = new com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface$Proxy
                r0.<init>(r3)
                return r0
        }
    }

    java.lang.String getID();
}
