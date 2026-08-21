package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceChannelCursor extends android.database.MatrixCursor {
    static final java.lang.String[] DEFAULT_COLUMNS = null;
    public static final java.lang.String SERVER_CHANNEL_BUNDLE_KEY = "servicechannel";
    android.os.Bundle mBinderExtra;

    static {
            java.lang.String r0 = "s"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor.DEFAULT_COLUMNS = r0
            return
    }

    public ServiceChannelCursor(java.lang.String[] r2, android.os.IBinder r3) {
            r1 = this;
            r1.<init>(r2)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            r1.mBinderExtra = r2
            com.qihoo360.mobilesafe.svcmanager.ParcelBinder r0 = new com.qihoo360.mobilesafe.svcmanager.ParcelBinder
            r0.<init>(r3)
            java.lang.String r3 = "servicechannel"
            r2.putParcelable(r3, r0)
            return
    }

    static final android.os.IBinder getBinder(android.database.Cursor r1) {
            android.os.Bundle r1 = r1.getExtras()
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.ParcelBinder> r0 = com.qihoo360.mobilesafe.svcmanager.ParcelBinder.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            r1.setClassLoader(r0)
            java.lang.String r0 = "servicechannel"
            android.os.Parcelable r1 = r1.getParcelable(r0)
            com.qihoo360.mobilesafe.svcmanager.ParcelBinder r1 = (com.qihoo360.mobilesafe.svcmanager.ParcelBinder) r1
            android.os.IBinder r1 = r1.getIbinder()
            return r1
    }

    static final com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor makeCursor(android.os.IBinder r2) {
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor r0 = new com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor
            java.lang.String[] r1 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor.DEFAULT_COLUMNS
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public android.os.Bundle getExtras() {
            r1 = this;
            android.os.Bundle r0 = r1.mBinderExtra
            return r0
    }
}
