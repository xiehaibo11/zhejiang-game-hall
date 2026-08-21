package com.tencent.connect.a;

public class a {
    private static java.lang.Class<?> a;
    private static java.lang.Class<?> b;
    private static java.lang.reflect.Method c;
    private static java.lang.reflect.Method d;
    private static java.lang.reflect.Method e;
    private static java.lang.reflect.Method f;
    private static boolean g;

    static {
            return
    }

    public static void a(android.content.Context r3, com.tencent.connect.auth.QQToken r4, java.lang.String r5, java.lang.String... r6) {
            boolean r0 = com.tencent.connect.a.a.g
            if (r0 != 0) goto L5
            return
        L5:
            b(r3, r4)
            java.lang.reflect.Method r4 = com.tencent.connect.a.a.d     // Catch: java.lang.Exception -> L1c
            java.lang.Class<?> r0 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L1c
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c
            r2 = 0
            r1[r2] = r3     // Catch: java.lang.Exception -> L1c
            r3 = 1
            r1[r3] = r5     // Catch: java.lang.Exception -> L1c
            r3 = 2
            r1[r3] = r6     // Catch: java.lang.Exception -> L1c
            r4.invoke(r0, r1)     // Catch: java.lang.Exception -> L1c
            goto L37
        L1c:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "trackCustomEvent exception: "
            r4.append(r5)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "OpenConfig"
            com.tencent.open.log.SLog.e(r4, r3)
        L37:
            return
    }

    public static boolean a(android.content.Context r0, com.tencent.connect.auth.QQToken r1) {
            java.lang.String r1 = r1.getAppId()
            com.tencent.open.utils.i r0 = com.tencent.open.utils.i.a(r0, r1)
            java.lang.String r1 = "Common_ta_enable"
            boolean r0 = r0.b(r1)
            return r0
    }

    public static void b(android.content.Context r3, com.tencent.connect.auth.QQToken r4) {
            boolean r3 = a(r3, r4)     // Catch: java.lang.Exception -> L28
            r4 = 0
            r0 = 1
            if (r3 == 0) goto L18
            java.lang.reflect.Method r3 = com.tencent.connect.a.a.f     // Catch: java.lang.Exception -> L28
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L28
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L28
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Exception -> L28
            r2[r4] = r0     // Catch: java.lang.Exception -> L28
            r3.invoke(r1, r2)     // Catch: java.lang.Exception -> L28
            goto L43
        L18:
            java.lang.reflect.Method r3 = com.tencent.connect.a.a.f     // Catch: java.lang.Exception -> L28
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L28
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L28
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Exception -> L28
            r0[r4] = r2     // Catch: java.lang.Exception -> L28
            r3.invoke(r1, r0)     // Catch: java.lang.Exception -> L28
            goto L43
        L28:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "checkStatStatus exception: "
            r4.append(r0)
            java.lang.String r3 = r3.toString()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "OpenConfig"
            com.tencent.open.log.SLog.e(r4, r3)
        L43:
            return
    }

    public static void c(android.content.Context r9, com.tencent.connect.auth.QQToken r10) {
            java.lang.String r0 = r10.getAppId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Aqc"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "com.tencent.stat.StatConfig"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.a = r1     // Catch: java.lang.Exception -> L129
            java.lang.String r1 = "com.tencent.stat.StatService"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.b = r1     // Catch: java.lang.Exception -> L129
            java.lang.String r2 = "reportQQ"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L129
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L129
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.c = r1     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L129
            java.lang.String r2 = "trackCustomEvent"
            r4 = 3
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L129
            java.lang.Class<android.content.Context> r8 = android.content.Context.class
            r5[r6] = r8     // Catch: java.lang.Exception -> L129
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r5[r7] = r8     // Catch: java.lang.Exception -> L129
            java.lang.Class<java.lang.String[]> r8 = java.lang.String[].class
            r5[r3] = r8     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r1 = r1.getMethod(r2, r5)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.d = r1     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L129
            java.lang.String r2 = "commitEvents"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L129
            java.lang.Class<android.content.Context> r8 = android.content.Context.class
            r5[r6] = r8     // Catch: java.lang.Exception -> L129
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L129
            r5[r7] = r8     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r1 = r1.getMethod(r2, r5)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.e = r1     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.String r2 = "setEnableStatService"
            java.lang.Class[] r5 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Class r8 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L129
            r5[r6] = r8     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r1 = r1.getMethod(r2, r5)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.f = r1     // Catch: java.lang.Exception -> L129
            b(r9, r10)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r10 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.String r1 = "setAutoExceptionCaught"
            java.lang.Class[] r2 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r10 = r10.getMethod(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.Object[] r2 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            r10.invoke(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r10 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.String r1 = "setEnableSmartReporting"
            java.lang.Class[] r2 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Class r5 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r10 = r10.getMethod(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.Object[] r2 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r7)     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            r10.invoke(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r10 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.String r1 = "setSendPeriodMinutes"
            java.lang.Class[] r2 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L129
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r10 = r10.getMethod(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.Object[] r2 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L129
            r5 = 1440(0x5a0, float:2.018E-42)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L129
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            r10.invoke(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.String r10 = "com.tencent.stat.StatReportStrategy"
            java.lang.Class r10 = java.lang.Class.forName(r10)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.String r2 = "setStatSendStrategy"
            java.lang.Class[] r5 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L129
            r5[r6] = r10     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r1 = r1.getMethod(r2, r5)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r2 = com.tencent.connect.a.a.a     // Catch: java.lang.Exception -> L129
            java.lang.Object[] r5 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L129
            java.lang.String r8 = "PERIOD"
            java.lang.reflect.Field r10 = r10.getField(r8)     // Catch: java.lang.Exception -> L129
            r8 = 0
            java.lang.Object r10 = r10.get(r8)     // Catch: java.lang.Exception -> L129
            r5[r6] = r10     // Catch: java.lang.Exception -> L129
            r1.invoke(r2, r5)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r10 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L129
            java.lang.String r1 = "startStatService"
            java.lang.Class[] r2 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L129
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r2[r6] = r5     // Catch: java.lang.Exception -> L129
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r2[r7] = r5     // Catch: java.lang.Exception -> L129
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r2[r3] = r5     // Catch: java.lang.Exception -> L129
            java.lang.reflect.Method r10 = r10.getMethod(r1, r2)     // Catch: java.lang.Exception -> L129
            java.lang.Class<?> r1 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L129
            java.lang.Object[] r2 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L129
            r2[r6] = r9     // Catch: java.lang.Exception -> L129
            r2[r7] = r0     // Catch: java.lang.Exception -> L129
            java.lang.String r9 = "com.tencent.stat.common.StatConstants"
            java.lang.Class r9 = java.lang.Class.forName(r9)     // Catch: java.lang.Exception -> L129
            java.lang.String r0 = "VERSION"
            java.lang.reflect.Field r9 = r9.getField(r0)     // Catch: java.lang.Exception -> L129
            java.lang.Object r9 = r9.get(r8)     // Catch: java.lang.Exception -> L129
            r2[r3] = r9     // Catch: java.lang.Exception -> L129
            r10.invoke(r1, r2)     // Catch: java.lang.Exception -> L129
            com.tencent.connect.a.a.g = r7     // Catch: java.lang.Exception -> L129
            goto L144
        L129:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "start4QQConnect exception: "
            r10.append(r0)
            java.lang.String r9 = r9.toString()
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            java.lang.String r10 = "OpenConfig"
            com.tencent.open.log.SLog.e(r10, r9)
        L144:
            return
    }

    public static void d(android.content.Context r10, com.tencent.connect.auth.QQToken r11) {
            java.lang.String r0 = r11.getOpenId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L25
            com.tencent.open.b.e r1 = com.tencent.open.b.e.a()
            java.lang.String r2 = r11.getOpenId()
            java.lang.String r3 = r11.getAppId()
            java.lang.String r4 = "2"
            java.lang.String r5 = "1"
            java.lang.String r6 = "11"
            java.lang.String r7 = "0"
            java.lang.String r8 = "0"
            java.lang.String r9 = "0"
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
        L25:
            boolean r0 = com.tencent.connect.a.a.g
            if (r0 != 0) goto L2a
            return
        L2a:
            b(r10, r11)
            java.lang.String r0 = r11.getOpenId()
            if (r0 == 0) goto L63
            java.lang.reflect.Method r0 = com.tencent.connect.a.a.c     // Catch: java.lang.Exception -> L48
            java.lang.Class<?> r1 = com.tencent.connect.a.a.b     // Catch: java.lang.Exception -> L48
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L48
            r3 = 0
            r2[r3] = r10     // Catch: java.lang.Exception -> L48
            r10 = 1
            java.lang.String r11 = r11.getOpenId()     // Catch: java.lang.Exception -> L48
            r2[r10] = r11     // Catch: java.lang.Exception -> L48
            r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L48
            goto L63
        L48:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "reportQQ exception: "
            r11.append(r0)
            java.lang.String r10 = r10.toString()
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            java.lang.String r11 = "OpenConfig"
            com.tencent.open.log.SLog.e(r11, r10)
        L63:
            return
    }
}
