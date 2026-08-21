package com.czhj.devicehelper.oaId.interfaces;

public interface b extends android.os.IInterface {

    public static final class a implements com.czhj.devicehelper.oaId.interfaces.b {
        private android.os.IBinder a;
        private android.content.Context b;

        public a(android.os.IBinder r1, android.content.Context r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public java.lang.String a() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                java.lang.String r2 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r2)     // Catch: java.lang.Throwable -> L1c
                android.os.IBinder r2 = r5.a     // Catch: java.lang.Throwable -> L1c
                r3 = 1
                r4 = 0
                r2.transact(r3, r0, r1, r4)     // Catch: java.lang.Throwable -> L1c
                r1.readException()     // Catch: java.lang.Throwable -> L1c
                java.lang.String r2 = r1.readString()     // Catch: java.lang.Throwable -> L1c
                goto L27
            L1c:
                r2 = move-exception
                r0.recycle()
                r1.recycle()
                r2.printStackTrace()
                r2 = 0
            L27:
                r0.recycle()
                r1.recycle()
                return r2
        }

        @Override
        public android.os.IBinder asBinder() {
                r1 = this;
                android.os.IBinder r0 = r1.a
                return r0
        }

        @Override
        public boolean b() {
                r5 = this;
                android.os.Parcel r0 = android.os.Parcel.obtain()
                android.os.Parcel r1 = android.os.Parcel.obtain()
                r2 = 1
                java.lang.String r3 = "com.uodis.opendevice.aidl.OpenDeviceIdentifierService"
                r0.writeInterfaceToken(r3)     // Catch: java.lang.Throwable -> L1f
                android.os.IBinder r3 = r5.a     // Catch: java.lang.Throwable -> L1f
                r4 = 0
                r3.transact(r2, r0, r1, r4)     // Catch: java.lang.Throwable -> L1f
                r1.readException()     // Catch: java.lang.Throwable -> L1f
                int r3 = r1.readInt()     // Catch: java.lang.Throwable -> L1f
                if (r3 != 0) goto L25
                r2 = r4
                goto L25
            L1f:
                r0.recycle()
                r1.recycle()
            L25:
                r0.recycle()
                r1.recycle()
                return r2
        }

        public java.lang.String c() {
                r4 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                java.lang.String r1 = "get oaid failed"
                r2 = 24
                if (r0 < r2) goto L34
                android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L2f
                android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L2f
                java.lang.String r2 = "pps_oaid"
                java.lang.String r0 = android.provider.Settings.Global.getString(r0, r2)     // Catch: java.lang.Throwable -> L2f
                android.content.Context r2 = r4.b     // Catch: java.lang.Throwable -> L2f
                android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L2f
                java.lang.String r3 = "pps_track_limit"
                java.lang.String r2 = android.provider.Settings.Global.getString(r2, r3)     // Catch: java.lang.Throwable -> L2f
                boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2f
                if (r3 != 0) goto L2d
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2f
                if (r2 != 0) goto L2d
                goto L35
            L2d:
                r1 = r0
                goto L35
            L2f:
                r0 = move-exception
                r0.printStackTrace()
                goto L35
            L34:
                r1 = 0
            L35:
                return r1
        }
    }

    java.lang.String a();

    boolean b();
}
