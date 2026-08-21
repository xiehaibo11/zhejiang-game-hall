package com.kwad.sdk.utils;

public final class al {
    private static java.util.Map<java.lang.String, java.lang.Integer> aIT;
    private static java.util.Set<java.lang.String> aIU;
    private static java.lang.reflect.Method aIV;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.kwad.sdk.utils.al.aIU = r0
            java.lang.String r1 = "android.permission.REQUEST_INSTALL_PACKAGES"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.kwad.sdk.utils.al.aIU
            java.lang.String r1 = "android.permission.WRITE_SETTINGS"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.kwad.sdk.utils.al.aIU
            java.lang.String r1 = "android.permission.SYSTEM_ALERT_WINDOW"
            r0.add(r1)
            return
    }

    public static int ao(android.content.Context r3, java.lang.String r4) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.utils.al.aIT
            if (r0 != 0) goto Lb
            java.lang.String[] r0 = com.kwad.sdk.utils.aj.cp(r3)
            h(r0)
        Lb:
            java.util.Set<java.lang.String> r0 = com.kwad.sdk.utils.al.aIU
            boolean r0 = r0.contains(r4)
            r1 = -2
            if (r0 == 0) goto L1b
            int r0 = ap(r3, r4)
            if (r0 == r1) goto L1b
            return r0
        L1b:
            int r0 = aq(r3, r4)
            if (r0 == r1) goto L22
            return r0
        L22:
            int r1 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L2f
            int r2 = android.os.Process.myUid()     // Catch: java.lang.Throwable -> L2f
            int r3 = r3.checkPermission(r4, r1, r2)     // Catch: java.lang.Throwable -> L2f
            return r3
        L2f:
            return r0
    }

    private static int ap(android.content.Context r6, java.lang.String r7) {
            int r0 = r7.hashCode()
            r1 = -2078357533(0xffffffff841ec7e3, float:-1.8664594E-36)
            r2 = 2
            r3 = 1
            r4 = 0
            r5 = -1
            if (r0 == r1) goto L2c
            r1 = -1561629405(0xffffffffa2eb6d23, float:-6.381243E-18)
            if (r0 == r1) goto L22
            r1 = 1777263169(0x69eee241, float:3.60991E25)
            if (r0 == r1) goto L18
            goto L36
        L18:
            java.lang.String r0 = "android.permission.REQUEST_INSTALL_PACKAGES"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r4
            goto L37
        L22:
            java.lang.String r0 = "android.permission.SYSTEM_ALERT_WINDOW"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r2
            goto L37
        L2c:
            java.lang.String r0 = "android.permission.WRITE_SETTINGS"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L36
            r7 = r3
            goto L37
        L36:
            r7 = r5
        L37:
            if (r7 == 0) goto L5d
            r0 = 23
            if (r7 == r3) goto L52
            if (r7 == r2) goto L40
            goto L6a
        L40:
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 < r0) goto L6a
            boolean r6 = android.provider.Settings.canDrawOverlays(r6)     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto L4b
            goto L6b
        L4b:
            r4 = r5
            goto L6b
        L4d:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
            goto L6a
        L52:
            int r7 = android.os.Build.VERSION.SDK_INT
            if (r7 < r0) goto L6a
            boolean r6 = android.provider.Settings.System.canWrite(r6)     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L4b
            goto L6b
        L5d:
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 26
            if (r7 < r0) goto L6a
            boolean r6 = com.kwad.sdk.utils.aj.co(r6)
            if (r6 == 0) goto L4b
            goto L6b
        L6a:
            r4 = -2
        L6b:
            return r4
    }

    private static int aq(android.content.Context r8, java.lang.String r9) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.utils.al.aIT
            r1 = -2
            if (r0 == 0) goto L78
            if (r9 != 0) goto L8
            goto L78
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            r3 = 0
            if (r0 >= r2) goto L10
            return r3
        L10:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.utils.al.aIT
            boolean r0 = r0.containsKey(r9)
            if (r0 != 0) goto L19
            return r1
        L19:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.utils.al.aIT     // Catch: java.lang.Exception -> L73
            java.lang.Object r9 = r0.get(r9)     // Catch: java.lang.Exception -> L73
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.Exception -> L73
            if (r9 != 0) goto L24
            return r1
        L24:
            java.lang.reflect.Method r0 = com.kwad.sdk.utils.al.aIV     // Catch: java.lang.Exception -> L73
            r1 = 2
            r2 = 3
            r4 = 1
            if (r0 != 0) goto L46
            java.lang.Class<android.app.AppOpsManager> r0 = android.app.AppOpsManager.class
            java.lang.String r5 = "checkOp"
            java.lang.Class[] r6 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L73
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L73
            r6[r3] = r7     // Catch: java.lang.Exception -> L73
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L73
            r6[r4] = r7     // Catch: java.lang.Exception -> L73
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r1] = r7     // Catch: java.lang.Exception -> L73
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r5, r6)     // Catch: java.lang.Exception -> L73
            com.kwad.sdk.utils.al.aIV = r0     // Catch: java.lang.Exception -> L73
            r0.setAccessible(r4)     // Catch: java.lang.Exception -> L73
        L46:
            java.lang.String r0 = "appops"
            java.lang.Object r0 = r8.getSystemService(r0)     // Catch: java.lang.Exception -> L73
            android.app.AppOpsManager r0 = (android.app.AppOpsManager) r0     // Catch: java.lang.Exception -> L73
            java.lang.reflect.Method r5 = com.kwad.sdk.utils.al.aIV     // Catch: java.lang.Exception -> L73
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L73
            r2[r3] = r9     // Catch: java.lang.Exception -> L73
            int r9 = android.os.Binder.getCallingUid()     // Catch: java.lang.Exception -> L73
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Exception -> L73
            r2[r4] = r9     // Catch: java.lang.Exception -> L73
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Exception -> L73
            r2[r1] = r8     // Catch: java.lang.Exception -> L73
            java.lang.Object r8 = r5.invoke(r0, r2)     // Catch: java.lang.Exception -> L73
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Exception -> L73
            int r8 = r8.intValue()     // Catch: java.lang.Exception -> L73
            if (r8 != 0) goto L71
            return r3
        L71:
            r8 = -1
            return r8
        L73:
            r8 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r8)
            return r3
        L78:
            return r1
    }

    public static boolean cq(android.content.Context r2) {
            r0 = 0
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> Lc
            java.lang.String r1 = "accessibility_enabled"
            int r2 = android.provider.Settings.Secure.getInt(r2, r1)     // Catch: java.lang.Throwable -> Lc
            goto Ld
        Lc:
            r2 = r0
        Ld:
            r1 = 1
            if (r2 != r1) goto L11
            return r1
        L11:
            return r0
    }

    private static java.lang.String fD(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.String r0 = "."
            int r0 = r1.lastIndexOf(r0)
            if (r0 >= 0) goto Ld
            return r1
        Ld:
            int r0 = r0 + 1
            java.lang.String r1 = r1.substring(r0)     // Catch: java.lang.Exception -> L13
        L13:
            return r1
    }

    private static void h(java.lang.String[] r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L43
            if (r6 != 0) goto L9
            goto L43
        L9:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.utils.al.aIT = r0
            int r0 = r6.length
            r1 = 0
        L12:
            if (r1 >= r0) goto L43
            r2 = r6[r1]
            java.lang.String r3 = fD(r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "OP_"
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.Class<android.app.AppOpsManager> r4 = android.app.AppOpsManager.class
            java.lang.Object r3 = com.kwad.sdk.utils.s.c(r4, r3)     // Catch: java.lang.Throwable -> L40
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L40
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L40
            if (r3 >= 0) goto L37
            goto L40
        L37:
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.kwad.sdk.utils.al.aIT     // Catch: java.lang.Throwable -> L40
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L40
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L40
        L40:
            int r1 = r1 + 1
            goto L12
        L43:
            return
    }
}
