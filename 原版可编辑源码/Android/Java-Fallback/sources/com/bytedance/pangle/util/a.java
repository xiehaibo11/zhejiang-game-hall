package com.bytedance.pangle.util;

public final class a {
    public static void a(com.bytedance.pangle.activity.IPluginActivity r3, android.app.Activity r4) {
            java.lang.String r0 = "mTheme"
            r1 = 0
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = "mThemeResource"
            r1 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L25
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r2)     // Catch: java.lang.Exception -> L25
            int[] r4 = a(r4)     // Catch: java.lang.Exception -> L25
            if (r4 != 0) goto L17
            return
        L17:
            int r0 = r4.length     // Catch: java.lang.Exception -> L25
        L18:
            if (r1 >= r0) goto L24
            r2 = r4[r1]     // Catch: java.lang.Exception -> L25
            if (r2 == 0) goto L21
            r3.setProxyTheme2Plugin(r2)     // Catch: java.lang.Exception -> L25
        L21:
            int r1 = r1 + 1
            goto L18
        L24:
            return
        L25:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public static void a(com.bytedance.pangle.wrapper.a r3, android.app.Activity r4) {
            java.lang.String r0 = "mTheme"
            r1 = 0
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r0 = "mThemeResource"
            r1 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L25
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r2)     // Catch: java.lang.Exception -> L25
            int[] r4 = a(r4)     // Catch: java.lang.Exception -> L25
            if (r4 != 0) goto L17
            return
        L17:
            int r0 = r4.length     // Catch: java.lang.Exception -> L25
        L18:
            if (r1 >= r0) goto L24
            r2 = r4[r1]     // Catch: java.lang.Exception -> L25
            if (r2 == 0) goto L21
            r3.setWrapperActivityTheme(r2)     // Catch: java.lang.Exception -> L25
        L21:
            int r1 = r1 + 1
            goto L18
        L24:
            return
        L25:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private static int[] a(android.app.Activity r7) {
            java.lang.String r0 = "Zeus/activity_pangle"
            android.content.res.Resources$Theme r7 = r7.getTheme()
            r1 = 0
            if (r7 != 0) goto La
            return r1
        La:
            boolean r2 = com.bytedance.pangle.util.i.g()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r3 = "mResId"
            java.lang.String r4 = "getKey"
            r5 = 0
            if (r2 == 0) goto L5d
            java.lang.String r2 = "mThemeImpl"
            java.lang.Object r7 = com.bytedance.pangle.util.FieldUtils.readField(r7, r2)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L1e
            return r1
        L1e:
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> Lab
            java.lang.Object r2 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r4, r2)     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> Lab
            if (r2 == 0) goto L2f
            java.lang.Object r2 = com.bytedance.pangle.util.FieldUtils.readField(r2, r3)     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> Lab
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> Lab
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L2f java.lang.Throwable -> Lab
            return r2
        L2f:
            java.lang.Class r2 = r7.getClass()     // Catch: java.lang.Throwable -> Lab
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> Lab
            java.lang.reflect.Method r2 = com.bytedance.pangle.b.b.a.a(r2, r4, r6)     // Catch: java.lang.Throwable -> Lab
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lab
            java.lang.Object r7 = r2.invoke(r7, r4)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L47
            java.lang.String r7 = "getKey failed!"
            com.bytedance.pangle.log.ZeusLogger.d(r0, r7)     // Catch: java.lang.Throwable -> Lab
            return r1
        L47:
            java.lang.String r2 = "getKey success by doubleReflector!"
            com.bytedance.pangle.log.ZeusLogger.d(r0, r2)     // Catch: java.lang.Throwable -> Lab
            java.lang.Class r2 = r7.getClass()     // Catch: java.lang.Throwable -> Lab
            java.lang.reflect.Field r2 = com.bytedance.pangle.b.b.a.a(r2, r3)     // Catch: java.lang.Throwable -> Lab
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> Lab
            int[] r7 = (int[]) r7     // Catch: java.lang.Throwable -> Lab
            int[] r7 = (int[]) r7     // Catch: java.lang.Throwable -> Lab
            return r7
        L5d:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lab
            r6 = 22
            if (r2 <= r6) goto L65
            r2 = 1
            goto L66
        L65:
            r2 = r5
        L66:
            if (r2 == 0) goto L7a
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lab
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r4, r2)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L71
            return r1
        L71:
            java.lang.Object r7 = com.bytedance.pangle.util.FieldUtils.readField(r7, r3)     // Catch: java.lang.Throwable -> Lab
            int[] r7 = (int[]) r7     // Catch: java.lang.Throwable -> Lab
            int[] r7 = (int[]) r7     // Catch: java.lang.Throwable -> Lab
            return r7
        L7a:
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lab
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r4, r2)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L85
            return r1
        L85:
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "!"
            java.lang.String r3 = ""
            java.lang.String r7 = r7.replace(r2, r3)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = " "
            java.lang.String[] r7 = r7.split(r2)     // Catch: java.lang.Throwable -> Lab
            int r2 = r7.length     // Catch: java.lang.Throwable -> Lab
            int[] r2 = new int[r2]     // Catch: java.lang.Throwable -> Lab
        L9a:
            int r3 = r7.length     // Catch: java.lang.Throwable -> Lab
            if (r5 >= r3) goto Laa
            r3 = r7[r5]     // Catch: java.lang.Throwable -> Lab
            r4 = 16
            int r3 = java.lang.Integer.parseInt(r3, r4)     // Catch: java.lang.Throwable -> Lab
            r2[r5] = r3     // Catch: java.lang.Throwable -> Lab
            int r5 = r5 + 1
            goto L9a
        Laa:
            return r2
        Lab:
            r7 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "getKey exception!"
            r2.<init>(r3)
            java.lang.String r7 = r7.getMessage()
            r2.append(r7)
            java.lang.String r7 = r2.toString()
            com.bytedance.pangle.log.ZeusLogger.d(r0, r7)
            return r1
    }
}
