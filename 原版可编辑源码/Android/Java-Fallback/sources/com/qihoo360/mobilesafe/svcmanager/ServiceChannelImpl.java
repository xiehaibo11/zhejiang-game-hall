package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceChannelImpl {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = null;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.IBinderGetter> sDelayedServices;
    static android.database.MatrixCursor sServiceChannelCursor;
    static com.qihoo360.mobilesafe.svcmanager.IServiceChannel.Stub sServiceChannelImpl;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> sServices;


    static {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.DEBUG = r0
            if (r0 == 0) goto L9
            java.lang.String r0 = "ServiceChannelImpl"
            goto Lf
        L9:
            java.lang.Class<com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl> r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.class
            java.lang.String r0 = r0.getSimpleName()
        Lf:
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.TAG = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServices = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sDelayedServices = r0
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl$1 r0 = new com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl$1
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServiceChannelImpl = r0
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelCursor.makeCursor(r0)
            com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServiceChannelCursor = r0
            return
    }

    ServiceChannelImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$000() {
            boolean r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.DEBUG
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.TAG
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap access$200() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, android.os.IBinder> r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sServices
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap access$300() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.qihoo360.replugin.IBinderGetter> r0 = com.qihoo360.mobilesafe.svcmanager.ServiceChannelImpl.sDelayedServices
            return r0
    }
}
