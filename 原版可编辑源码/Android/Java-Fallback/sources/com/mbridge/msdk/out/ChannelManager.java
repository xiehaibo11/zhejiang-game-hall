package com.mbridge.msdk.out;

public class ChannelManager {
    public ChannelManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void setChannel(java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L2c
            com.mbridge.msdk.foundation.same.net.Aa r0 = new com.mbridge.msdk.foundation.same.net.Aa     // Catch: java.lang.Throwable -> L28
            r0.<init>()     // Catch: java.lang.Throwable -> L28
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "b"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L28
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L28
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L28
            r1.setAccessible(r3)     // Catch: java.lang.Throwable -> L28
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L28
            r2[r6] = r7     // Catch: java.lang.Throwable -> L28
            r1.invoke(r0, r2)     // Catch: java.lang.Throwable -> L28
            goto L2c
        L28:
            r7 = move-exception
            r7.printStackTrace()
        L2c:
            return
    }
}
