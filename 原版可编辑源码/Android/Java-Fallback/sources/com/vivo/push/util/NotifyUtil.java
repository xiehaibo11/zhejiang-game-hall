package com.vivo.push.util;

public class NotifyUtil {
    private static com.vivo.push.util.BaseNotifyDataAdapter sNotifyData = null;
    private static java.lang.String sNotifyDataAdapter = "com.vivo.push.util.NotifyDataAdapter";
    private static com.vivo.push.util.BaseNotifyLayoutAdapter sNotifyLayout = null;
    private static java.lang.String sNotifyLayoutAdapter = "com.vivo.push.util.NotifyLayoutAdapter";

    static {
            return
    }

    public NotifyUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.vivo.push.util.BaseNotifyDataAdapter getNotifyDataAdapter(android.content.Context r0) {
            initAdapter(r0)
            com.vivo.push.util.BaseNotifyDataAdapter r0 = com.vivo.push.util.NotifyUtil.sNotifyData
            return r0
    }

    public static com.vivo.push.util.BaseNotifyLayoutAdapter getNotifyLayoutAdapter(android.content.Context r0) {
            initAdapter(r0)
            com.vivo.push.util.BaseNotifyLayoutAdapter r0 = com.vivo.push.util.NotifyUtil.sNotifyLayout
            return r0
    }

    private static java.lang.Object getObjectByReflect(java.lang.String r1, java.lang.Object r2) {
            r0 = 0
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L6
            goto L7
        L6:
            r1 = r0
        L7:
            if (r1 == 0) goto Ld
            java.lang.Object r0 = r1.newInstance()     // Catch: java.lang.Exception -> Ld
        Ld:
            if (r0 != 0) goto L10
            goto L11
        L10:
            r2 = r0
        L11:
            return r2
    }

    private static synchronized void initAdapter(android.content.Context r3) {
            java.lang.Class<com.vivo.push.util.NotifyUtil> r0 = com.vivo.push.util.NotifyUtil.class
            monitor-enter(r0)
            com.vivo.push.util.BaseNotifyDataAdapter r1 = com.vivo.push.util.NotifyUtil.sNotifyData     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L19
            java.lang.String r1 = com.vivo.push.util.NotifyUtil.sNotifyDataAdapter     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.h r2 = new com.vivo.push.util.h     // Catch: java.lang.Throwable -> L31
            r2.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.Object r1 = getObjectByReflect(r1, r2)     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.BaseNotifyDataAdapter r1 = (com.vivo.push.util.BaseNotifyDataAdapter) r1     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.NotifyUtil.sNotifyData = r1     // Catch: java.lang.Throwable -> L31
            r1.init(r3)     // Catch: java.lang.Throwable -> L31
        L19:
            com.vivo.push.util.BaseNotifyLayoutAdapter r1 = com.vivo.push.util.NotifyUtil.sNotifyLayout     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L2f
            java.lang.String r1 = com.vivo.push.util.NotifyUtil.sNotifyLayoutAdapter     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.i r2 = new com.vivo.push.util.i     // Catch: java.lang.Throwable -> L31
            r2.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.Object r1 = getObjectByReflect(r1, r2)     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.BaseNotifyLayoutAdapter r1 = (com.vivo.push.util.BaseNotifyLayoutAdapter) r1     // Catch: java.lang.Throwable -> L31
            com.vivo.push.util.NotifyUtil.sNotifyLayout = r1     // Catch: java.lang.Throwable -> L31
            r1.init(r3)     // Catch: java.lang.Throwable -> L31
        L2f:
            monitor-exit(r0)
            return
        L31:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
