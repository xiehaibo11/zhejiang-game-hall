package com.qihoo360.i;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class Factory {
    public static final java.lang.String PLUGIN_ENTRY_CLASS_NAME = "Entry";
    public static final java.lang.Class<?>[] PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS = null;
    public static final java.lang.String PLUGIN_ENTRY_EXPORT_METHOD_NAME = "create";
    public static final java.lang.Class<?>[] PLUGIN_ENTRY_EXPORT_METHOD_PARAMS = null;
    public static final java.lang.String PLUGIN_ENTRY_PACKAGE_PREFIX = "com.qihoo360.plugin";
    public static final java.lang.String REPLUGIN_LIBRARY_ENTRY_PACKAGE_PREFIX = "com.qihoo360.replugin";
    public static com.qihoo360.loader2.PluginCommImpl sPluginManager;

    static {
            r0 = 2
            java.lang.Class[] r1 = new java.lang.Class[r0]
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r3 = 0
            r1[r3] = r2
            java.lang.Class<com.qihoo360.i.IPluginManager> r2 = com.qihoo360.i.IPluginManager.class
            r4 = 1
            r1[r4] = r2
            com.qihoo360.i.Factory.PLUGIN_ENTRY_EXPORT_METHOD_PARAMS = r1
            r1 = 3
            java.lang.Class[] r1 = new java.lang.Class[r1]
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r1[r3] = r2
            java.lang.Class<java.lang.ClassLoader> r2 = java.lang.ClassLoader.class
            r1[r4] = r2
            java.lang.Class<android.os.IBinder> r2 = android.os.IBinder.class
            r1[r0] = r2
            com.qihoo360.i.Factory.PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS = r1
            return
    }

    public Factory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final java.lang.String fetchPluginName(java.lang.ClassLoader r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            java.lang.String r1 = r0.fetchPluginName(r1)
            return r1
    }

    public static android.content.pm.ActivityInfo getActivityInfo(java.lang.String r1, java.lang.String r2, android.content.Intent r3) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.pm.ActivityInfo r1 = r0.getActivityInfo(r1, r2, r3)
            return r1
    }

    public static final boolean isPluginLoaded(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            boolean r1 = r0.isPluginLoaded(r1)
            return r1
    }

    public static final android.content.ComponentName loadPluginActivity(android.content.Intent r1, java.lang.String r2, java.lang.String r3, int r4) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.ComponentName r1 = r0.loadPluginActivity(r1, r2, r3, r4)
            return r1
    }

    @java.lang.Deprecated
    public static final android.net.Uri loadPluginProvider(java.lang.String r1, java.lang.String r2, int r3) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.net.Uri r1 = r0.loadPluginProvider(r1, r2, r3)
            return r1
    }

    public static final android.content.ComponentName loadPluginService(java.lang.String r1, java.lang.String r2, int r3) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.ComponentName r1 = r0.loadPluginService(r1, r2, r3)
            return r1
    }

    public static final android.net.Uri makePluginProviderUri(java.lang.String r0, android.net.Uri r1, int r2) {
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 != 0) goto L5
            return r1
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    public static final android.os.IBinder query(java.lang.String r1, java.lang.String r2) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.os.IBinder r1 = r0.query(r1, r2)
            return r1
    }

    public static final android.os.IBinder query(java.lang.String r1, java.lang.String r2, int r3) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.os.IBinder r1 = r0.query(r1, r2, r3)
            return r1
    }

    @java.lang.Deprecated
    public static final com.qihoo360.i.IModule query(java.lang.String r1, java.lang.Class<? extends com.qihoo360.i.IModule> r2) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            com.qihoo360.i.IModule r1 = r0.query(r1, r2)
            return r1
    }

    public static final android.content.pm.ActivityInfo queryActivityInfo(java.lang.String r1, java.lang.String r2) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            com.qihoo360.replugin.component.ComponentList r1 = r0.queryPluginComponentList(r1)
            if (r1 == 0) goto Ld
            android.content.pm.ActivityInfo r1 = r1.getActivity(r2)
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static final java.lang.ClassLoader queryPluginClassLoader(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            java.lang.ClassLoader r1 = r0.queryPluginClassLoader(r1)
            return r1
    }

    public static final com.qihoo360.replugin.component.ComponentList queryPluginComponentList(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            com.qihoo360.replugin.component.ComponentList r1 = r0.queryPluginComponentList(r1)
            return r1
    }

    public static final android.content.Context queryPluginContext(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.Context r1 = r0.queryPluginContext(r1)
            return r1
    }

    public static final android.content.pm.PackageInfo queryPluginPackageInfo(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.pm.PackageInfo r1 = r0.queryPluginPackageInfo(r1)
            return r1
    }

    public static final android.content.pm.PackageInfo queryPluginPackageInfo(java.lang.String r1, int r2) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.pm.PackageInfo r1 = r0.queryPluginPackageInfo(r1, r2)
            return r1
    }

    public static final android.content.res.Resources queryPluginResouces(java.lang.String r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            android.content.res.Resources r1 = r0.queryPluginResouces(r1)
            return r1
    }

    public static java.util.List<android.content.pm.ActivityInfo> queryPluginsReceiverList(android.content.Intent r1) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            java.util.List r1 = r0.queryPluginsReceiverList(r1)
            return r1
    }

    public static final android.content.pm.ServiceInfo queryServiceInfo(java.lang.String r1, java.lang.String r2) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            com.qihoo360.replugin.component.ComponentList r1 = r0.queryPluginComponentList(r1)
            if (r1 == 0) goto Ld
            android.content.pm.ServiceInfo r1 = r1.getService(r2)
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static final boolean startActivity(android.content.Context r1, android.content.Intent r2, java.lang.String r3, java.lang.String r4, int r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L13
            android.content.ComponentName r0 = com.qihoo360.replugin.RePlugin.createComponentName(r3, r4)
            r2.setComponent(r0)
        L13:
            boolean r1 = startActivityWithNoInjectCN(r1, r2, r3, r4, r5)
            return r1
    }

    public static boolean startActivityForResult(android.app.Activity r1, android.content.Intent r2, int r3, android.os.Bundle r4) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            boolean r1 = r0.startActivityForResult(r1, r2, r3, r4)
            return r1
    }

    public static final boolean startActivityWithNoInjectCN(android.content.Context r6, android.content.Intent r7, java.lang.String r8, java.lang.String r9, int r10) {
            com.qihoo360.loader2.PluginCommImpl r0 = com.qihoo360.i.Factory.sPluginManager
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            boolean r6 = r0.startActivity(r1, r2, r3, r4, r5)
            com.qihoo360.replugin.RePluginConfig r7 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r7 = r7.getEventCallbacks()
            r7.onStartActivityCompleted(r8, r9, r6)
            return r6
    }
}
