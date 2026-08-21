package com.igexin.push.extension.distribution.basic.g;

public class a {
    private static int a;
    private static int b;

    public static boolean a(android.content.Context r6) {
            int r0 = com.igexin.push.extension.distribution.basic.g.a.b
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.xiaomi.MiuiPushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkXMDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.push.extension.distribution.basic.g.a.b     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.push.extension.distribution.basic.g.a.b = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.push.extension.distribution.basic.g.a.b
            r6 = r6 | r3
            com.igexin.push.extension.distribution.basic.g.a.b = r6
            return r2
    }

    public static boolean b(android.content.Context r6) {
            int r0 = com.igexin.push.extension.distribution.basic.g.a.a
            r1 = r0 & 1
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r6 = r0 & 2
            if (r6 == 0) goto Ld
            r2 = r3
        Ld:
            return r2
        Le:
            java.lang.String r0 = "com.igexin.assist.control.meizu.FlymePushManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "checkMZDevice"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L37
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r4[r2] = r5     // Catch: java.lang.Throwable -> L37
            java.lang.reflect.Method r0 = r0.getMethod(r1, r4)     // Catch: java.lang.Throwable -> L37
            r1 = 0
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37
            r4[r2] = r6     // Catch: java.lang.Throwable -> L37
            java.lang.Object r6 = r0.invoke(r1, r4)     // Catch: java.lang.Throwable -> L37
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L37
            boolean r2 = r6.booleanValue()     // Catch: java.lang.Throwable -> L37
            if (r2 == 0) goto L37
            int r6 = com.igexin.push.extension.distribution.basic.g.a.a     // Catch: java.lang.Throwable -> L37
            r6 = r6 | 2
            com.igexin.push.extension.distribution.basic.g.a.a = r6     // Catch: java.lang.Throwable -> L37
        L37:
            int r6 = com.igexin.push.extension.distribution.basic.g.a.a
            r6 = r6 | r3
            com.igexin.push.extension.distribution.basic.g.a.a = r6
            return r2
    }

    public static void c(android.content.Context r7) {
            r0 = 0
            boolean r1 = a(r7)     // Catch: java.lang.Throwable -> L4f
            r2 = 0
            java.lang.String r3 = "clearNotification"
            r4 = 1
            if (r1 == 0) goto L2a
            java.lang.String r1 = "com.xiaomi.mipush.sdk.MiPushClient"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L4f
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r5[r0] = r6     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4f
            r3[r0] = r7     // Catch: java.lang.Throwable -> L4f
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r7 = "AssistUtil | cancelAllAssistNotification() XM "
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4f
            com.igexin.b.a.c.b.a(r7, r1)     // Catch: java.lang.Throwable -> L4f
            goto L6a
        L2a:
            boolean r1 = b(r7)     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L6a
            java.lang.String r1 = "com.meizu.cloud.pushsdk.PushManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L4f
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r5[r0] = r6     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4f
            r3[r0] = r7     // Catch: java.lang.Throwable -> L4f
            r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r7 = "AssistUtil | cancelAllAssistNotification() MZ "
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4f
            com.igexin.b.a.c.b.a(r7, r1)     // Catch: java.lang.Throwable -> L4f
            goto L6a
        L4f:
            r7 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "AssistUtil | cancelAllAssistNotification() err "
            r1.append(r2)
            java.lang.String r7 = r7.toString()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r7, r0)
        L6a:
            return
    }
}
