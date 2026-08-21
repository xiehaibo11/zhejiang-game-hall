package org.cocos2dx.javascript;

public class UaalResources extends android.content.res.Resources {
    java.lang.String TAG;
    private android.content.Context mContext;
    private android.content.res.Resources mHostResources;
    private android.content.res.Resources mPluginResource;

    public UaalResources(android.content.Context r4) {
            r3 = this;
            android.content.res.Resources r0 = r4.getResources()
            android.content.res.AssetManager r0 = r0.getAssets()
            android.content.res.Resources r1 = r4.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            android.content.res.Resources r2 = r4.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            r3.<init>(r0, r1, r2)
            java.lang.String r0 = "UaalResources"
            r3.TAG = r0
            android.content.res.Resources r0 = r4.getResources()
            r3.mPluginResource = r0
            r3.mContext = r4
            boolean r0 = com.qihoo360.replugin.RePlugin.isHostInitialized()
            if (r0 == 0) goto L38
            android.content.Context r4 = com.qihoo360.replugin.RePlugin.getHostContext()
            android.content.res.Resources r4 = r4.getResources()
            r3.mHostResources = r4
            goto L3e
        L38:
            android.content.res.Resources r4 = r4.getResources()
            r3.mHostResources = r4
        L3e:
            return
    }

    private java.lang.reflect.Method getMethod(java.lang.ClassLoader r2, java.lang.String r3, java.lang.String r4, java.lang.Class<?>[] r5) throws java.lang.ClassNotFoundException, java.lang.NoSuchMethodException {
            r1 = this;
            r0 = 0
            java.lang.Class r2 = java.lang.Class.forName(r3, r0, r2)
            if (r2 == 0) goto Lc
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r4, r5)
            return r2
        Lc:
            r2 = 0
            return r2
    }

    private java.lang.Object invokeMethod(java.lang.ClassLoader r1, java.lang.String r2, java.lang.String r3, java.lang.Object r4, java.lang.Class<?>[] r5, java.lang.Object... r6) throws java.lang.ClassNotFoundException, java.lang.NoSuchMethodException, java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException {
            r0 = this;
            if (r4 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.reflect.Method r1 = r0.getMethod(r1, r2, r3, r5)
            java.lang.Object r1 = r0.invokeMethod(r1, r4, r6)
            return r1
    }

    private java.lang.Object invokeMethod(java.lang.reflect.Method r3, java.lang.Object r4, java.lang.Object... r5) throws java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException {
            r2 = this;
            if (r3 == 0) goto L17
            boolean r0 = r3.isAccessible()
            if (r0 != 0) goto Lc
            r1 = 1
            r3.setAccessible(r1)
        Lc:
            java.lang.Object r4 = r3.invoke(r4, r5)
            if (r0 != 0) goto L16
            r5 = 0
            r3.setAccessible(r5)
        L16:
            return r4
        L17:
            r3 = 0
            return r3
    }

    @Override
    public int getIdentifier(java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r10 = this;
            java.lang.String r0 = r10.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getIdentifier name: "
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = " defType: "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r2 = " defPackage: "
            r1.append(r2)
            r1.append(r13)
            java.lang.String r13 = r1.toString()
            android.util.Log.i(r0, r13)
            java.lang.String r13 = "com.daren.goldzj"
            int r13 = super.getIdentifier(r11, r12, r13)
            if (r13 != 0) goto L74
            java.lang.String r0 = r10.TAG
            java.lang.String r1 = "super getIdentifier return 0, force use host package"
            android.util.Log.e(r0, r1)
            android.content.res.Resources r0 = r10.mHostResources     // Catch: java.lang.Exception -> L70
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.Exception -> L70
            java.lang.ClassLoader r2 = r0.getClassLoader()     // Catch: java.lang.Exception -> L70
            java.lang.String r3 = "android.content.res.Resources"
            java.lang.String r4 = "getIdentifier"
            android.content.res.Resources r5 = r10.mHostResources     // Catch: java.lang.Exception -> L70
            r0 = 3
            java.lang.Class[] r6 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L70
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r7 = 0
            r6[r7] = r1     // Catch: java.lang.Exception -> L70
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r8 = 1
            r6[r8] = r1     // Catch: java.lang.Exception -> L70
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r9 = 2
            r6[r9] = r1     // Catch: java.lang.Exception -> L70
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L70
            r0[r7] = r11     // Catch: java.lang.Exception -> L70
            r0[r8] = r12     // Catch: java.lang.Exception -> L70
            java.lang.String r11 = "android"
            r0[r9] = r11     // Catch: java.lang.Exception -> L70
            r1 = r10
            r7 = r0
            java.lang.Object r11 = r1.invokeMethod(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L70
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Exception -> L70
            int r13 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.Exception -> L70
            goto L74
        L70:
            r11 = move-exception
            r11.printStackTrace()
        L74:
            java.lang.String r11 = r10.TAG
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "getIdentifier return "
            r12.append(r0)
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            android.util.Log.i(r11, r12)
            return r13
    }
}
