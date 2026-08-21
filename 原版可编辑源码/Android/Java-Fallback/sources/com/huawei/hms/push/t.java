package com.huawei.hms.push;

public class t {
    public static boolean a(android.content.Context r2) {
            com.huawei.hms.aaid.utils.PushPreferences r0 = new com.huawei.hms.aaid.utils.PushPreferences
            java.lang.String r1 = "push_notify_flag"
            r0.<init>(r2, r1)
            java.lang.String r1 = "notify_msg_enable"
            boolean r0 = r0.getBoolean(r1)
            if (r0 == 0) goto L11
            r2 = 0
            return r2
        L11:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L1c
            boolean r2 = b(r2)
            return r2
        L1c:
            r1 = 19
            if (r0 < r1) goto L25
            boolean r2 = b(r2)
            return r2
        L25:
            r2 = 1
            return r2
    }

    public static boolean b(android.content.Context r10) {
            java.lang.String r0 = "appops"
            java.lang.Object r0 = r10.getSystemService(r0)
            android.app.AppOpsManager r0 = (android.app.AppOpsManager) r0
            android.content.pm.ApplicationInfo r1 = r10.getApplicationInfo()
            android.content.Context r10 = r10.getApplicationContext()
            java.lang.String r10 = r10.getPackageName()
            int r1 = r1.uid
            r2 = 1
            java.lang.Class<android.app.AppOpsManager> r3 = android.app.AppOpsManager.class
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L68
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "checkOpNoThrow"
            r5 = 3
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Class r7 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            r6[r2] = r7     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r9 = 2
            r6[r9] = r7     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.reflect.Method r4 = r3.getMethod(r4, r6)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.String r6 = "OP_POST_NOTIFICATION"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r6)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Class<java.lang.Integer> r6 = java.lang.Integer.class
            java.lang.Object r3 = r3.get(r6)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            r5[r8] = r3     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            r5[r2] = r1     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            r5[r9] = r10     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Object r10 = r4.invoke(r0, r5)     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            java.lang.Integer r10 = (java.lang.Integer) r10     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            int r10 = r10.intValue()     // Catch: java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68 java.lang.Throwable -> L68
            if (r10 != 0) goto L67
            goto L68
        L67:
            r2 = r8
        L68:
            return r2
    }
}
