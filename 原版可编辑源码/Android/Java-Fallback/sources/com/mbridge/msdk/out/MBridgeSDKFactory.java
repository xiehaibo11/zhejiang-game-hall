package com.mbridge.msdk.out;

public class MBridgeSDKFactory {
    private static volatile com.mbridge.msdk.system.a instance;

    private MBridgeSDKFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.system.a getMBridgeSDK() {
            com.mbridge.msdk.system.a r0 = com.mbridge.msdk.out.MBridgeSDKFactory.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.out.MBridgeSDKFactory> r0 = com.mbridge.msdk.out.MBridgeSDKFactory.class
            monitor-enter(r0)
            com.mbridge.msdk.system.a r1 = com.mbridge.msdk.out.MBridgeSDKFactory.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.system.a r1 = new com.mbridge.msdk.system.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.out.MBridgeSDKFactory.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.system.a r0 = com.mbridge.msdk.out.MBridgeSDKFactory.instance
            return r0
    }
}
