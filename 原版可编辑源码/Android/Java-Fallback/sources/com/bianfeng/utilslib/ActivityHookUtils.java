package com.bianfeng.utilslib;

public class ActivityHookUtils {
    private static com.bianfeng.utilslib.ActivityHookUtils utils;

    private ActivityHookUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private void fixOrientation(android.app.Activity r3) {
            r2 = this;
            java.lang.Class<android.app.Activity> r0 = android.app.Activity.class
            java.lang.String r1 = "mActivityInfo"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Exception -> L16
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Exception -> L16
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Exception -> L16
            android.content.pm.ActivityInfo r3 = (android.content.pm.ActivityInfo) r3     // Catch: java.lang.Exception -> L16
            r0 = -1
            r3.screenOrientation = r0     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r3 = move-exception
            r3.printStackTrace()
        L1a:
            return
    }

    public static com.bianfeng.utilslib.ActivityHookUtils getInstance() {
            com.bianfeng.utilslib.ActivityHookUtils r0 = com.bianfeng.utilslib.ActivityHookUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.ActivityHookUtils r0 = new com.bianfeng.utilslib.ActivityHookUtils
            r0.<init>()
            com.bianfeng.utilslib.ActivityHookUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.ActivityHookUtils r0 = com.bianfeng.utilslib.ActivityHookUtils.utils
            return r0
    }

    private boolean isTranslucentOrFloating(android.app.Activity r8) {
            r7 = this;
            r0 = 0
            java.lang.String r1 = "com.android.internal.R$styleable"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L3e
            java.lang.String r2 = "Window"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Exception -> L3e
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L3e
            r3 = 0
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Exception -> L3e
            int[] r1 = (int[]) r1     // Catch: java.lang.Exception -> L3e
            int[] r1 = (int[]) r1     // Catch: java.lang.Exception -> L3e
            android.content.res.TypedArray r8 = r8.obtainStyledAttributes(r1)     // Catch: java.lang.Exception -> L3e
            java.lang.Class<android.content.pm.ActivityInfo> r1 = android.content.pm.ActivityInfo.class
            java.lang.String r4 = "isTranslucentOrFloating"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L3e
            java.lang.Class<android.content.res.TypedArray> r6 = android.content.res.TypedArray.class
            r5[r0] = r6     // Catch: java.lang.Exception -> L3e
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r4, r5)     // Catch: java.lang.Exception -> L3e
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L3e
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L3e
            r2[r0] = r8     // Catch: java.lang.Exception -> L3e
            java.lang.Object r8 = r1.invoke(r3, r2)     // Catch: java.lang.Exception -> L3e
            java.lang.Boolean r8 = (java.lang.Boolean) r8     // Catch: java.lang.Exception -> L3e
            boolean r0 = r8.booleanValue()     // Catch: java.lang.Exception -> L3e
            goto L5b
        L3e:
            r8 = move-exception
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "测试------"
            r2.append(r3)
            java.lang.String r8 = r8.getMessage()
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            r1.i(r8)
        L5b:
            return r0
    }

    public void hookOrientation(android.app.Activity r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 != r1) goto Lf
            boolean r0 = r2.isTranslucentOrFloating(r3)
            if (r0 == 0) goto Lf
            r2.fixOrientation(r3)
        Lf:
            return
    }
}
