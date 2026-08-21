package com.qihoo360.replugin.component.app;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginApplicationClient {
    private static final byte[] LOCKER = null;
    private static java.lang.reflect.Method sAttachBaseContextMethod;
    private static volatile boolean sInited;
    private static com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> sRunningClients;
    private android.app.Application mApplication;
    private java.lang.reflect.Constructor mApplicationConstructor;
    private final android.content.pm.ApplicationInfo mApplicationInfo;
    private final java.lang.ClassLoader mPlgClassLoader;


    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.component.app.PluginApplicationClient.LOCKER = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients = r0
            return
    }

    private PluginApplicationClient(java.lang.ClassLoader r1, com.qihoo360.replugin.component.ComponentList r2, com.qihoo360.replugin.model.PluginInfo r3) {
            r0 = this;
            r0.<init>()
            r0.mPlgClassLoader = r1
            android.content.pm.ApplicationInfo r1 = r2.getApplication()
            r0.mApplicationInfo = r1
            if (r1 == 0) goto L18
            java.lang.String r1 = r1.className     // Catch: java.lang.Throwable -> L2d
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L18
            r0.initCustom()     // Catch: java.lang.Throwable -> L2d
        L18:
            boolean r1 = r0.isValid()     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L3c
            int r1 = r3.getFrameworkVersion()     // Catch: java.lang.Throwable -> L2d
            r2 = 3
            if (r1 < r2) goto L3c
            android.app.Application r1 = new android.app.Application     // Catch: java.lang.Throwable -> L2d
            r1.<init>()     // Catch: java.lang.Throwable -> L2d
            r0.mApplication = r1     // Catch: java.lang.Throwable -> L2d
            goto L3c
        L2d:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L35
            r1.printStackTrace()
        L35:
            android.app.Application r1 = new android.app.Application
            r1.<init>()
            r0.mApplication = r1
        L3c:
            return
    }

    public static com.qihoo360.replugin.component.app.PluginApplicationClient getOrCreate(java.lang.String r4, java.lang.ClassLoader r5, com.qihoo360.replugin.component.ComponentList r6, com.qihoo360.replugin.model.PluginInfo r7) {
            int r0 = r7.getFrameworkVersion()
            java.lang.String r1 = "ws001"
            r2 = 0
            r3 = 1
            if (r0 > r3) goto L23
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L22
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "PAC.create(): FrameworkVer less than 1. cl="
            r4.append(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L22:
            return r2
        L23:
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = getRunning(r4)
            if (r0 == 0) goto L42
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L41
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "PAC.create(): Already Loaded."
            r4.append(r6)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L41:
            return r0
        L42:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L5a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "PAC.create(): Create and load Application. cl="
            r0.append(r3)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L5a:
            initMethods()     // Catch: java.lang.Throwable -> L86
            com.qihoo360.replugin.component.app.PluginApplicationClient r0 = new com.qihoo360.replugin.component.app.PluginApplicationClient
            r0.<init>(r5, r6, r7)
            boolean r5 = r0.isValid()
            if (r5 == 0) goto L85
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> r5 = com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients
            java.lang.ref.WeakReference r6 = new java.lang.ref.WeakReference
            r6.<init>(r0)
            r5.put(r4, r6)
            int r4 = android.os.Build.VERSION.SDK_INT
            r5 = 14
            if (r4 < r5) goto L84
            android.content.Context r4 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            com.qihoo360.replugin.component.app.PluginApplicationClient$1 r5 = new com.qihoo360.replugin.component.app.PluginApplicationClient$1
            r5.<init>(r0)
            r4.registerComponentCallbacks(r5)
        L84:
            return r0
        L85:
            return r2
        L86:
            r4 = move-exception
            boolean r5 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r5 == 0) goto L8e
            r4.printStackTrace()
        L8e:
            return r2
    }

    public static com.qihoo360.replugin.component.app.PluginApplicationClient getRunning(java.lang.String r1) {
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients
            java.lang.Object r1 = r0.get(r1)
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            if (r1 != 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.Object r1 = r1.get()
            com.qihoo360.replugin.component.app.PluginApplicationClient r1 = (com.qihoo360.replugin.component.app.PluginApplicationClient) r1
            return r1
    }

    private boolean initCustom() {
            r3 = this;
            r0 = 0
            r3.initCustomConstructor()     // Catch: java.lang.Throwable -> Ld
            r3.initCustomObject()     // Catch: java.lang.Throwable -> Ld
            android.app.Application r1 = r3.mApplication     // Catch: java.lang.Throwable -> Ld
            if (r1 == 0) goto Lc
            r0 = 1
        Lc:
            return r0
        Ld:
            r1 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L15
            r1.printStackTrace()
        L15:
            return r0
    }

    private void initCustomConstructor() throws java.lang.ClassNotFoundException, java.lang.NoSuchMethodException {
            r2 = this;
            android.content.pm.ApplicationInfo r0 = r2.mApplicationInfo
            java.lang.String r0 = r0.className
            java.lang.ClassLoader r1 = r2.mPlgClassLoader
            java.lang.Class r0 = r1.loadClass(r0)
            r1 = 0
            java.lang.Class[] r1 = new java.lang.Class[r1]
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)
            r2.mApplicationConstructor = r0
            return
    }

    private void initCustomObject() throws java.lang.IllegalAccessException, java.lang.reflect.InvocationTargetException, java.lang.InstantiationException {
            r2 = this;
            java.lang.reflect.Constructor r0 = r2.mApplicationConstructor
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Object r0 = r0.newInstance(r1)
            boolean r1 = r0 instanceof android.app.Application
            if (r1 == 0) goto L11
            android.app.Application r0 = (android.app.Application) r0
            r2.mApplication = r0
        L11:
            return
    }

    private static void initMethods() throws java.lang.NoSuchMethodException {
            boolean r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sInited
            if (r0 == 0) goto L5
            return
        L5:
            byte[] r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.LOCKER
            monitor-enter(r0)
            boolean r1 = com.qihoo360.replugin.component.app.PluginApplicationClient.sInited     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return
        Le:
            java.lang.Class<android.app.Application> r1 = android.app.Application.class
            java.lang.String r2 = "attach"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L27
            r5 = 0
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r4[r5] = r6     // Catch: java.lang.Throwable -> L27
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L27
            com.qihoo360.replugin.component.app.PluginApplicationClient.sAttachBaseContextMethod = r1     // Catch: java.lang.Throwable -> L27
            r1.setAccessible(r3)     // Catch: java.lang.Throwable -> L27
            com.qihoo360.replugin.component.app.PluginApplicationClient.sInited = r3     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            return
        L27:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r1
    }

    private boolean isValid() {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public static void notifyOnConfigurationChanged(android.content.res.Configuration r2) {
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.qihoo360.replugin.component.app.PluginApplicationClient r1 = (com.qihoo360.replugin.component.app.PluginApplicationClient) r1
            if (r1 != 0) goto L1f
            goto La
        L1f:
            r1.callOnConfigurationChanged(r2)
            goto La
        L23:
            return
    }

    public static void notifyOnLowMemory() {
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.qihoo360.replugin.component.app.PluginApplicationClient r1 = (com.qihoo360.replugin.component.app.PluginApplicationClient) r1
            if (r1 != 0) goto L1f
            goto La
        L1f:
            r1.callOnLowMemory()
            goto La
        L23:
            return
    }

    public static void notifyOnTrimMemory(int r2) {
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.app.PluginApplicationClient>> r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sRunningClients
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            java.lang.Object r1 = r1.get()
            com.qihoo360.replugin.component.app.PluginApplicationClient r1 = (com.qihoo360.replugin.component.app.PluginApplicationClient) r1
            if (r1 != 0) goto L1f
            goto La
        L1f:
            r1.callOnTrimMemory(r2)
            goto La
        L23:
            return
    }

    public void callAttachBaseContext(android.content.Context r5) {
            r4 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PAC.callAttachBaseContext(): Call attachBaseContext(), cl="
            r0.append(r1)
            java.lang.ClassLoader r1 = r4.mPlgClassLoader
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1c:
            java.lang.reflect.Method r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sAttachBaseContextMethod     // Catch: java.lang.Throwable -> L2f
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.reflect.Method r0 = com.qihoo360.replugin.component.app.PluginApplicationClient.sAttachBaseContextMethod     // Catch: java.lang.Throwable -> L2f
            android.app.Application r2 = r4.mApplication     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2f
            r3 = 0
            r1[r3] = r5     // Catch: java.lang.Throwable -> L2f
            r0.invoke(r2, r1)     // Catch: java.lang.Throwable -> L2f
            goto L37
        L2f:
            r5 = move-exception
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L37
            r5.printStackTrace()
        L37:
            return
    }

    public void callOnConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PAC.callOnLowMemory(): Call onConfigurationChanged(), cl="
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.mPlgClassLoader
            r0.append(r1)
            java.lang.String r1 = "; nc="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L24:
            android.app.Application r0 = r2.mApplication
            r0.onConfigurationChanged(r3)
            return
    }

    public void callOnCreate() {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PAC.callOnCreate(): Call onCreate(), cl="
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.mPlgClassLoader
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1c:
            android.app.Application r0 = r2.mApplication
            r0.onCreate()
            return
    }

    public void callOnLowMemory() {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PAC.callOnLowMemory(): Call onLowMemory(), cl="
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.mPlgClassLoader
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1c:
            android.app.Application r0 = r2.mApplication
            r0.onLowMemory()
            return
    }

    public void callOnTrimMemory(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 14
            if (r0 >= r1) goto L7
            return
        L7:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PAC.callOnLowMemory(): Call onTrimMemory(), cl="
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.mPlgClassLoader
            r0.append(r1)
            java.lang.String r1 = "; lv="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L2b:
            android.app.Application r0 = r2.mApplication
            r0.onTrimMemory(r3)
            return
    }

    public android.app.Application getObj() {
            r1 = this;
            android.app.Application r0 = r1.mApplication
            return r0
    }
}
