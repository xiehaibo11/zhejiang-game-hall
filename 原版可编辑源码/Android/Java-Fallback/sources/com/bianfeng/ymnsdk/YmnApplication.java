package com.bianfeng.ymnsdk;

public class YmnApplication extends android.app.Application {
    public YmnApplication() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            android.support.multidex.MultiDex.install(r1)
            return
    }

    @Override
    public void onCreate() {
            r8 = this;
            super.onCreate()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnApplication--->"
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.i(r1, r0)
            net.grandcentrix.tray.AppPreferences r0 = new net.grandcentrix.tray.AppPreferences
            r0.<init>(r8)
            java.lang.String r1 = "ymnInit"
            java.lang.String r2 = "false"
            java.lang.String r3 = r0.getString(r1, r2)
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L43
            java.lang.String r2 = "YmnApplication"
            java.lang.String r4 = "onCreate"
            android.util.Log.e(r2, r4)
            com.bianfeng.ymnsdk.YmnSdk.innerInit(r8)
            java.lang.String r2 = "true"
            r0.put(r1, r2)
        L43:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L76
            r1.<init>()     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = r8.getPackageName()     // Catch: java.lang.Exception -> L76
            r1.append(r2)     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = ".R"
            r1.append(r2)     // Catch: java.lang.Exception -> L76
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L76
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L76
            java.lang.String r2 = "init"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L76
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L76
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r5)     // Catch: java.lang.Exception -> L76
            r1.setAccessible(r4)     // Catch: java.lang.Exception -> L76
            r2 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L76
            r4[r7] = r8     // Catch: java.lang.Exception -> L76
            r1.invoke(r2, r4)     // Catch: java.lang.Exception -> L76
            return
        L76:
            r1 = move-exception
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.String r4 = "PlatformApplication can't find init method on R class"
            r2.println(r4)
            return
    }
}
