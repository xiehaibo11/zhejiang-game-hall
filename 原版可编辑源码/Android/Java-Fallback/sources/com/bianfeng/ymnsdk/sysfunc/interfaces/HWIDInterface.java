package com.bianfeng.ymnsdk.sysfunc.interfaces;

public interface HWIDInterface extends android.os.IInterface {

    public static final class HWID implements com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface {
        private android.os.IBinder iBinder;

        public HWID(android.os.IBinder r1) {
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

        @Override
        public boolean getBoos() {
                r8 = this;
                java.lang.String r0 = "Wooo"
                java.lang.String r1 = "HWDeviceIDHelper getBoos IN "
                android.util.Log.i(r0, r1)
                android.os.Parcel r1 = android.os.Parcel.obtain()
                android.os.Parcel r2 = android.os.Parcel.obtain()
                r3 = 0
                java.lang.String r4 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r1.writeInterfaceToken(r4)     // Catch: java.lang.Throwable -> L3a
                android.os.IBinder r4 = r8.iBinder     // Catch: java.lang.Throwable -> L3a
                r5 = 1
                r4.transact(r5, r1, r2, r3)     // Catch: java.lang.Throwable -> L3a
                r2.readException()     // Catch: java.lang.Throwable -> L3a
                int r4 = r2.readInt()     // Catch: java.lang.Throwable -> L3a
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
                r6.<init>()     // Catch: java.lang.Throwable -> L3a
                java.lang.String r7 = "HWDeviceIDHelper getBoos IN read -> "
                r6.append(r7)     // Catch: java.lang.Throwable -> L3a
                r6.append(r4)     // Catch: java.lang.Throwable -> L3a
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L3a
                android.util.Log.i(r0, r6)     // Catch: java.lang.Throwable -> L3a
                if (r4 != 0) goto L40
                r3 = 1
                goto L40
            L3a:
                r1.recycle()
                r2.recycle()
            L40:
                r1.recycle()
                r2.recycle()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "HWDeviceIDHelper getBoos IN read2 -> "
                r1.append(r2)
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r0, r1)
                return r3
        }

        @Override
        public java.lang.String getIDs() {
                r7 = this;
                java.lang.String r0 = "Wooo"
                java.lang.String r1 = "HWIDInterface getIDs IN "
                android.util.Log.i(r0, r1)
                android.os.Parcel r1 = android.os.Parcel.obtain()
                android.os.Parcel r2 = android.os.Parcel.obtain()
                r3 = 0
                java.lang.String r4 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r1.writeInterfaceToken(r4)     // Catch: java.lang.Throwable -> L38
                android.os.IBinder r4 = r7.iBinder     // Catch: java.lang.Throwable -> L38
                r5 = 1
                r6 = 0
                r4.transact(r5, r1, r2, r6)     // Catch: java.lang.Throwable -> L38
                r2.readException()     // Catch: java.lang.Throwable -> L38
                java.lang.String r3 = r2.readString()     // Catch: java.lang.Throwable -> L38
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
                r4.<init>()     // Catch: java.lang.Throwable -> L38
                java.lang.String r5 = "HWDeviceIDHelper getIDs IN res -> "
                r4.append(r5)     // Catch: java.lang.Throwable -> L38
                r4.append(r3)     // Catch: java.lang.Throwable -> L38
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L38
                android.util.Log.i(r0, r4)     // Catch: java.lang.Throwable -> L38
                goto L42
            L38:
                r4 = move-exception
                r1.recycle()
                r2.recycle()
                r4.printStackTrace()
            L42:
                r1.recycle()
                r2.recycle()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "HWDeviceIDHelper getIDs IN res2 -> "
                r1.append(r2)
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r0, r1)
                return r3
        }
    }

    boolean getBoos();

    java.lang.String getIDs();
}
