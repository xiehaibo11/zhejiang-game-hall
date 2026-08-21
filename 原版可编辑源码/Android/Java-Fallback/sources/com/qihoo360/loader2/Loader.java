package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class Loader {
    com.qihoo360.loader2.Loader.ProxyPlugin mBinderPlugin;
    java.lang.ClassLoader mClassLoader;
    com.qihoo360.replugin.component.ComponentList mComponents;
    java.util.HashMap<java.lang.String, java.lang.reflect.Constructor<?>> mConstructors;
    private final android.content.Context mContext;
    java.lang.reflect.Method mCreateMethod;
    java.lang.reflect.Method mCreateMethod2;
    java.util.HashSet<java.lang.String> mIgnores;
    android.content.pm.PackageInfo mPackageInfo;
    final java.lang.String mPath;
    android.content.Context mPkgContext;
    android.content.res.Resources mPkgResources;
    com.qihoo360.i.IPlugin mPlugin;
    com.qihoo360.loader2.IPluginHost mPluginHost;
    private final java.lang.String mPluginName;
    final com.qihoo360.loader2.Plugin mPluginObj;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class ProxyPlugin implements com.qihoo360.i.IPlugin {
        com.qihoo360.loader2.IPlugin mPlugin;

        ProxyPlugin(android.os.IBinder r1) {
                r0 = this;
                r0.<init>()
                com.qihoo360.loader2.IPlugin r1 = com.qihoo360.loader2.IPlugin.Stub.asInterface(r1)
                r0.mPlugin = r1
                return
        }

        @Override
        public com.qihoo360.i.IModule query(java.lang.Class<? extends com.qihoo360.i.IModule> r4) {
                r3 = this;
                com.qihoo360.loader2.IPlugin r0 = r3.mPlugin     // Catch: java.lang.Throwable -> La
                java.lang.String r1 = r4.getName()     // Catch: java.lang.Throwable -> La
                r0.query(r1)     // Catch: java.lang.Throwable -> La
                goto L2d
            La:
                r0 = move-exception
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "query("
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = ") exception: "
                r1.append(r4)
                java.lang.String r4 = r0.getMessage()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                java.lang.String r1 = "ws001"
                com.qihoo360.replugin.helper.LogRelease.e(r1, r4, r0)
            L2d:
                r4 = 0
                return r4
        }
    }

    Loader(android.content.Context r2, java.lang.String r3, java.lang.String r4, com.qihoo360.loader2.Plugin r5) {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.mIgnores = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mConstructors = r0
            r1.mContext = r2
            r1.mPluginName = r3
            r1.mPath = r4
            r1.mPluginObj = r5
            return
    }

    private void adjustPluginProcess(android.content.pm.ApplicationInfo r6) {
            r5 = this;
            java.util.HashMap r6 = r5.getConfigProcessMap(r6)
            if (r6 == 0) goto Lc
            boolean r0 = r6.isEmpty()
            if (r0 == 0) goto L20
        Lc:
            java.lang.String r0 = r5.mPluginName
            r1 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.loader2.MP.getPlugin(r0, r1)
            if (r0 == 0) goto L20
            int r0 = r0.getFrameworkVersion()
            r1 = 4
            if (r0 < r1) goto L20
            java.util.HashMap r6 = r5.genDynamicProcessMap()
        L20:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L63
            java.lang.String r0 = "--- 调整插件中组件的进程 BEGIN ---"
            android.util.Log.d(r1, r0)
            java.util.Set r0 = r6.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L33:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L63
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r4 = " -> "
            r3.append(r4)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            android.util.Log.d(r1, r2)
            goto L33
        L63:
            com.qihoo360.replugin.component.ComponentList r0 = r5.mComponents
            java.util.HashMap r0 = r0.getActivityMap()
            r5.doAdjust(r6, r0)
            com.qihoo360.replugin.component.ComponentList r0 = r5.mComponents
            java.util.HashMap r0 = r0.getServiceMap()
            r5.doAdjust(r6, r0)
            com.qihoo360.replugin.component.ComponentList r0 = r5.mComponents
            java.util.HashMap r0 = r0.getReceiverMap()
            r5.doAdjust(r6, r0)
            com.qihoo360.replugin.component.ComponentList r0 = r5.mComponents
            java.util.HashMap r0 = r0.getProviderMap()
            r5.doAdjust(r6, r0)
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto La3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "--- 调整插件中组件的进程 END --- "
            r6.append(r0)
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            android.util.Log.d(r1, r6)
        La3:
            return
    }

    private void adjustPluginTaskAffinity(java.lang.String r9, android.content.pm.ApplicationInfo r10) {
            r8 = this;
            if (r10 != 0) goto L3
            return
        L3:
            android.os.Bundle r0 = r10.metaData
            if (r0 == 0) goto Lb2
            r1 = 1
            java.lang.String r2 = "use_default_task_affinity"
            boolean r0 = r0.getBoolean(r2, r1)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r3 = "task-affinity"
            if (r2 == 0) goto L28
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "useDefault = "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L28:
            if (r0 != 0) goto Lb2
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            r2 = 0
            if (r0 == 0) goto L3c
            java.lang.Object[] r0 = new java.lang.Object[r1]
            r0[r2] = r9
            java.lang.String r4 = "替换插件 %s 中默认的 TaskAffinity"
            java.lang.String r0 = java.lang.String.format(r4, r0)
            com.qihoo360.replugin.helper.LogDebug.d(r3, r0)
        L3c:
            java.lang.String r10 = r10.packageName
            com.qihoo360.replugin.component.ComponentList r0 = r8.mComponents
            java.util.HashMap r0 = r0.getActivityMap()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L4c:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto Lb2
            java.lang.Object r4 = r0.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r4 = r4.getValue()
            android.content.pm.ActivityInfo r4 = (android.content.pm.ActivityInfo) r4
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            r6 = 2
            if (r5 == 0) goto L78
            if (r4 == 0) goto L78
            java.lang.Object[] r5 = new java.lang.Object[r6]
            java.lang.String r7 = r4.name
            r5[r2] = r7
            java.lang.String r7 = r4.taskAffinity
            r5[r1] = r7
            java.lang.String r7 = "%s.taskAffinity = %s "
            java.lang.String r5 = java.lang.String.format(r7, r5)
            com.qihoo360.replugin.helper.LogDebug.d(r3, r5)
        L78:
            if (r4 == 0) goto L4c
            java.lang.String r5 = r4.taskAffinity
            boolean r5 = r5.equals(r10)
            if (r5 == 0) goto L4c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = r4.taskAffinity
            r5.append(r7)
            java.lang.String r7 = "."
            r5.append(r7)
            r5.append(r9)
            java.lang.String r5 = r5.toString()
            r4.taskAffinity = r5
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L4c
            java.lang.Object[] r5 = new java.lang.Object[r6]
            java.lang.String r6 = r4.name
            r5[r2] = r6
            java.lang.String r4 = r4.taskAffinity
            r5[r1] = r4
            java.lang.String r4 = "修改 %s 的 TaskAffinity 为 %s"
            java.lang.String r4 = java.lang.String.format(r4, r5)
            com.qihoo360.replugin.helper.LogDebug.d(r3, r4)
            goto L4c
        Lb2:
            return
    }

    private void doAdjust(java.util.HashMap<java.lang.String, java.lang.String> r6, java.util.HashMap<java.lang.String, ? extends android.content.pm.ComponentInfo> r7) {
            r5 = this;
            if (r6 == 0) goto L55
            boolean r0 = r6.isEmpty()
            if (r0 == 0) goto L9
            goto L55
        L9:
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L11:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L55
            java.lang.Object r0 = r7.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getValue()
            android.content.pm.ComponentInfo r0 = (android.content.pm.ComponentInfo) r0
            if (r0 == 0) goto L11
            java.lang.String r1 = r0.processName
            java.lang.Object r1 = r6.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L11
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L52
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r4 = r0.name
            r2[r3] = r4
            r3 = 1
            java.lang.String r4 = r0.processName
            r2[r3] = r4
            r3 = 2
            r2[r3] = r1
            java.lang.String r3 = "--- 调整组件 %s, %s -> %s"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            java.lang.String r3 = "task-affinity"
            android.util.Log.d(r3, r2)
        L52:
            r0.processName = r1
            goto L11
        L55:
            return
    }

    private java.util.HashMap<java.lang.String, java.lang.String> genDynamicProcessMap() {
            r8 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.List r1 = r8.getHostProcessList()
            java.util.List r2 = r8.getPluginProcessList()
            r3 = 0
            if (r1 == 0) goto L15
            int r4 = r1.size()
            goto L16
        L15:
            r4 = r3
        L16:
            if (r4 > 0) goto L19
            return r0
        L19:
            if (r2 == 0) goto L20
            int r5 = r2.size()
            goto L21
        L20:
            r5 = r3
        L21:
            if (r3 >= r5) goto L33
            int r6 = r3 % r4
            java.lang.Object r7 = r2.get(r3)
            java.lang.Object r6 = r1.get(r6)
            r0.put(r7, r6)
            int r3 = r3 + 1
            goto L21
        L33:
            return r0
    }

    private java.util.HashMap<java.lang.String, java.lang.String> getConfigProcessMap(android.content.pm.ApplicationInfo r6) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.os.Bundle r6 = r6.metaData
            if (r6 == 0) goto L69
            java.lang.String r1 = "process_map"
            java.lang.String r2 = r6.getString(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L16
            goto L69
        L16:
            java.lang.String r6 = r6.getString(r1)     // Catch: org.json.JSONException -> L61
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L61
            r1.<init>(r6)     // Catch: org.json.JSONException -> L61
            r6 = 0
        L20:
            int r2 = r1.length()     // Catch: org.json.JSONException -> L61
            if (r6 >= r2) goto L69
            java.lang.Object r2 = r1.get(r6)     // Catch: org.json.JSONException -> L61
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: org.json.JSONException -> L61
            if (r2 == 0) goto L5e
            java.lang.String r3 = "to"
            java.lang.String r3 = r2.getString(r3)     // Catch: org.json.JSONException -> L61
            java.lang.String r3 = r3.toLowerCase()     // Catch: org.json.JSONException -> L61
            java.lang.String r4 = "$ui"
            boolean r4 = r3.equals(r4)     // Catch: org.json.JSONException -> L61
            if (r4 == 0) goto L45
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: org.json.JSONException -> L61
            goto L55
        L45:
            java.lang.String r4 = "$p"
            boolean r4 = r3.contains(r4)     // Catch: org.json.JSONException -> L61
            if (r4 == 0) goto L55
            java.util.Map<java.lang.String, java.lang.String> r4 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_ADJUST_MAP     // Catch: org.json.JSONException -> L61
            java.lang.Object r3 = r4.get(r3)     // Catch: org.json.JSONException -> L61
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L61
        L55:
            java.lang.String r4 = "from"
            java.lang.String r2 = r2.getString(r4)     // Catch: org.json.JSONException -> L61
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L61
        L5e:
            int r6 = r6 + 1
            goto L20
        L61:
            r6 = move-exception
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r1 == 0) goto L69
            r6.printStackTrace()
        L69:
            return r0
    }

    private java.util.List<java.lang.String> getHostProcessList() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            r2 = 3
            if (r1 >= r2) goto L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getPackageName()
            r2.append(r3)
            java.lang.String r3 = ":p"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L27:
            return r0
    }

    private com.qihoo360.loader2.IPluginHost getPluginHost() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.os.IBinder r0 = com.qihoo360.loader2.PluginProviderStub.proxyFetchHostBinder(r0)
            if (r0 != 0) goto L15
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L13
            java.lang.String r0 = "ms-receiver"
            java.lang.String r1 = "p.p fhb fail"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r1)
        L13:
            r0 = 0
            return r0
        L15:
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.IPluginHost.Stub.asInterface(r0)
            return r0
    }

    private void getPluginProcess(java.util.Set<java.lang.String> r4, android.content.pm.ComponentInfo[] r5) {
            r3 = this;
            if (r5 == 0) goto L10
            int r0 = r5.length
            r1 = 0
        L4:
            if (r1 >= r0) goto L10
            r2 = r5[r1]
            java.lang.String r2 = r2.processName
            r4.add(r2)
            int r1 = r1 + 1
            goto L4
        L10:
            return
    }

    private java.util.List<java.lang.String> getPluginProcessList() {
            r3 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.qihoo360.replugin.component.ComponentList r1 = r3.mComponents
            android.content.pm.ApplicationInfo r1 = r1.getApplication()
            java.lang.String r1 = r1.packageName
            com.qihoo360.replugin.component.ComponentList r2 = r3.mComponents
            android.content.pm.ProviderInfo[] r2 = r2.getProviders()
            r3.getPluginProcess(r0, r2)
            com.qihoo360.replugin.component.ComponentList r2 = r3.mComponents
            android.content.pm.ActivityInfo[] r2 = r2.getActivities()
            r3.getPluginProcess(r0, r2)
            com.qihoo360.replugin.component.ComponentList r2 = r3.mComponents
            android.content.pm.ServiceInfo[] r2 = r2.getServices()
            r3.getPluginProcess(r0, r2)
            com.qihoo360.replugin.component.ComponentList r2 = r3.mComponents
            android.content.pm.ActivityInfo[] r2 = r2.getReceivers()
            r3.getPluginProcess(r0, r2)
            r0.remove(r1)
            r1 = 0
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            java.util.List r0 = java.util.Arrays.asList(r0)
            return r0
    }

    private void regReceivers() throws android.os.RemoteException {
            r3 = this;
            com.qihoo360.loader2.Plugin r0 = r3.mPluginObj
            com.qihoo360.replugin.model.PluginInfo r0 = r0.mInfo
            java.lang.String r0 = r0.getName()
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r1 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS
            java.util.Map r1 = r1.getReceiverFilterMap(r0)
            if (r1 == 0) goto L28
            int r2 = r1.size()
            if (r2 != 0) goto L17
            goto L28
        L17:
            com.qihoo360.loader2.IPluginHost r2 = r3.mPluginHost
            if (r2 != 0) goto L21
            com.qihoo360.loader2.IPluginHost r2 = r3.getPluginHost()
            r3.mPluginHost = r2
        L21:
            com.qihoo360.loader2.IPluginHost r2 = r3.mPluginHost
            if (r2 == 0) goto L28
            r2.regReceiver(r0, r1)
        L28:
            return
    }

    final android.content.Context createBaseContext(android.content.Context r9) {
            r8 = this;
            com.qihoo360.loader2.PluginContext r7 = new com.qihoo360.loader2.PluginContext
            java.lang.ClassLoader r3 = r8.mClassLoader
            android.content.res.Resources r4 = r8.mPkgResources
            java.lang.String r5 = r8.mPluginName
            r2 = 16973829(0x1030005, float:2.4060914E-38)
            r0 = r7
            r1 = r9
            r6 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    final boolean invoke(com.qihoo360.loader2.PluginCommImpl r7) {
            r6 = this;
            java.lang.String r0 = "ws001"
            r1 = 0
            java.lang.reflect.Method r2 = r6.mCreateMethod     // Catch: java.lang.Throwable -> L4c
            r3 = 0
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L4c
            android.content.Context r5 = r6.mPkgContext     // Catch: java.lang.Throwable -> L4c
            r4[r1] = r5     // Catch: java.lang.Throwable -> L4c
            r5 = 1
            r4[r5] = r7     // Catch: java.lang.Throwable -> L4c
            java.lang.Object r7 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L4c
            com.qihoo360.i.IPlugin r7 = (com.qihoo360.i.IPlugin) r7     // Catch: java.lang.Throwable -> L4c
            r6.mPlugin = r7     // Catch: java.lang.Throwable -> L4c
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L4c
            if (r7 == 0) goto L4b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r7.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "Loader.invoke(): plugin="
            r7.append(r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = r6.mPath     // Catch: java.lang.Throwable -> L4c
            r7.append(r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = ", cl="
            r7.append(r2)     // Catch: java.lang.Throwable -> L4c
            com.qihoo360.i.IPlugin r2 = r6.mPlugin     // Catch: java.lang.Throwable -> L4c
            if (r2 == 0) goto L3f
            com.qihoo360.i.IPlugin r2 = r6.mPlugin     // Catch: java.lang.Throwable -> L4c
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Throwable -> L4c
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Throwable -> L4c
            goto L41
        L3f:
            java.lang.String r2 = "null"
        L41:
            r7.append(r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L4c
            com.qihoo360.replugin.helper.LogDebug.d(r0, r7)     // Catch: java.lang.Throwable -> L4c
        L4b:
            return r5
        L4c:
            r7 = move-exception
            java.lang.String r2 = r7.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r2, r7)
            return r1
    }

    final boolean invoke2(com.qihoo360.loader2.PluginCommImpl r7) {
            r6 = this;
            java.lang.String r7 = "ws001"
            r0 = 0
            java.lang.reflect.Method r1 = r6.mCreateMethod2     // Catch: java.lang.Throwable -> L5d
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L5d
            android.content.Context r3 = r6.mPkgContext     // Catch: java.lang.Throwable -> L5d
            r2[r0] = r3     // Catch: java.lang.Throwable -> L5d
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L5d
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L5d
            r4 = 1
            r2[r4] = r3     // Catch: java.lang.Throwable -> L5d
            r3 = 2
            r5 = 0
            r2[r3] = r5     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r1 = r1.invoke(r5, r2)     // Catch: java.lang.Throwable -> L5d
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L29
            java.lang.String r1 = "p.e.r.b n"
            com.qihoo360.replugin.helper.LogRelease.e(r7, r1)     // Catch: java.lang.Throwable -> L5d
            return r0
        L29:
            com.qihoo360.loader2.Loader$ProxyPlugin r2 = new com.qihoo360.loader2.Loader$ProxyPlugin     // Catch: java.lang.Throwable -> L5d
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L5d
            r6.mBinderPlugin = r2     // Catch: java.lang.Throwable -> L5d
            r6.mPlugin = r2     // Catch: java.lang.Throwable -> L5d
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L5c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = "Loader.invoke2(): plugin="
            r2.append(r3)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = r6.mPath     // Catch: java.lang.Throwable -> L5d
            r2.append(r3)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = ", plugin.binder.cl="
            r2.append(r3)     // Catch: java.lang.Throwable -> L5d
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Throwable -> L5d
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Throwable -> L5d
            r2.append(r1)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L5d
            com.qihoo360.replugin.helper.LogDebug.d(r7, r1)     // Catch: java.lang.Throwable -> L5d
        L5c:
            return r4
        L5d:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r7, r2, r1)
            return r0
    }

    final boolean isAppLoaded() {
            r1 = this;
            com.qihoo360.i.IPlugin r0 = r1.mPlugin
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    final boolean isDexLoaded() {
            r1 = this;
            boolean r0 = r1.isResourcesLoaded()
            if (r0 == 0) goto Lc
            java.lang.ClassLoader r0 = r1.mClassLoader
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    final boolean isPackageInfoLoaded() {
            r1 = this;
            android.content.pm.PackageInfo r0 = r1.mPackageInfo
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    final boolean isResourcesLoaded() {
            r1 = this;
            boolean r0 = r1.isPackageInfoLoaded()
            if (r0 == 0) goto Lc
            android.content.res.Resources r0 = r1.mPkgResources
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    final boolean loadDex(java.lang.ClassLoader r13, int r14) {
            r12 = this;
            r13 = 0
            android.content.Context r0 = r12.mContext     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r12.mPath     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r1 = com.qihoo360.loader2.Plugin.queryCachedPackageInfo(r1)     // Catch: java.lang.Throwable -> L341
            r12.mPackageInfo = r1     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto Lc0
            java.lang.String r1 = r12.mPath     // Catch: java.lang.Throwable -> L341
            r2 = 143(0x8f, float:2.0E-43)
            android.content.pm.PackageInfo r1 = r0.getPackageArchiveInfo(r1, r2)     // Catch: java.lang.Throwable -> L341
            r12.mPackageInfo = r1     // Catch: java.lang.Throwable -> L341
            if (r1 == 0) goto Lb1
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto L23
            goto Lb1
        L23:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r1 == 0) goto L3f
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r2.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = "get package archive info, pi="
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r3 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)     // Catch: java.lang.Throwable -> L341
        L3f:
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r12.mPath     // Catch: java.lang.Throwable -> L341
            r1.sourceDir = r2     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r12.mPath     // Catch: java.lang.Throwable -> L341
            r1.publicSourceDir = r2     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r1.processName     // Catch: java.lang.Throwable -> L341
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L341
            if (r1 == 0) goto L67
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r2 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Throwable -> L341
            r1.processName = r2     // Catch: java.lang.Throwable -> L341
        L67:
            com.qihoo360.loader2.Plugin r1 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L341
            java.io.File r1 = r1.getNativeLibsDir()     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r2 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L341
            r2.nativeLibraryDir = r1     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.qihoo360.loader2.Plugin.PKG_NAME_2_PLUGIN_NAME     // Catch: java.lang.Throwable -> L341
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.qihoo360.loader2.Plugin.PKG_NAME_2_PLUGIN_NAME     // Catch: java.lang.Throwable -> Lae
            android.content.pm.PackageInfo r3 = r12.mPackageInfo     // Catch: java.lang.Throwable -> Lae
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = r12.mPluginName     // Catch: java.lang.Throwable -> Lae
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lae
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME     // Catch: java.lang.Throwable -> L341
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.qihoo360.loader2.Plugin.PLUGIN_NAME_2_FILENAME     // Catch: java.lang.Throwable -> Lab
            java.lang.String r3 = r12.mPluginName     // Catch: java.lang.Throwable -> Lab
            java.lang.String r4 = r12.mPath     // Catch: java.lang.Throwable -> Lab
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Lab
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lab
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> L341
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.pm.PackageInfo>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_PACKAGE_INFO     // Catch: java.lang.Throwable -> La8
            java.lang.String r3 = r12.mPath     // Catch: java.lang.Throwable -> La8
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> La8
            android.content.pm.PackageInfo r5 = r12.mPackageInfo     // Catch: java.lang.Throwable -> La8
            r4.<init>(r5)     // Catch: java.lang.Throwable -> La8
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> La8
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            goto Lc0
        La8:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La8
            throw r14     // Catch: java.lang.Throwable -> L341
        Lab:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lab
            throw r14     // Catch: java.lang.Throwable -> L341
        Lae:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lae
            throw r14     // Catch: java.lang.Throwable -> L341
        Lb1:
            boolean r14 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r14 == 0) goto Lbc
            java.lang.String r14 = "ws001"
            java.lang.String r0 = "get package archive info null"
            com.qihoo360.replugin.helper.LogDebug.d(r14, r0)     // Catch: java.lang.Throwable -> L341
        Lbc:
            r14 = 0
            r12.mPackageInfo = r14     // Catch: java.lang.Throwable -> L341
            return r13
        Lc0:
            com.qihoo360.loader2.Plugin r1 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L341
            int r1 = r1.getFrameworkVersion()     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto Ld7
            com.qihoo360.loader2.Plugin r1 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r2 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Throwable -> L341
            android.os.Bundle r2 = r2.metaData     // Catch: java.lang.Throwable -> L341
            r1.setFrameworkVersionByMeta(r2)     // Catch: java.lang.Throwable -> L341
        Ld7:
            java.lang.String r1 = r12.mPath     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.component.ComponentList r1 = com.qihoo360.loader2.Plugin.queryCachedComponentList(r1)     // Catch: java.lang.Throwable -> L341
            r12.mComponents = r1     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto L119
            com.qihoo360.replugin.component.ComponentList r1 = new com.qihoo360.replugin.component.ComponentList     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r2 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r12.mPath     // Catch: java.lang.Throwable -> L341
            com.qihoo360.loader2.Plugin r4 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r4 = r4.mInfo     // Catch: java.lang.Throwable -> L341
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L341
            r12.mComponents = r1     // Catch: java.lang.Throwable -> L341
            r12.regReceivers()     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> L341
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.qihoo360.replugin.component.ComponentList>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_COMPONENT_LIST     // Catch: java.lang.Throwable -> L116
            java.lang.String r3 = r12.mPath     // Catch: java.lang.Throwable -> L116
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L116
            com.qihoo360.replugin.component.ComponentList r5 = r12.mComponents     // Catch: java.lang.Throwable -> L116
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L116
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L116
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L116
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            r12.adjustPluginProcess(r1)     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r12.mPluginName     // Catch: java.lang.Throwable -> L341
            android.content.pm.PackageInfo r2 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo     // Catch: java.lang.Throwable -> L341
            r12.adjustPluginTaskAffinity(r1, r2)     // Catch: java.lang.Throwable -> L341
            goto L119
        L116:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L116
            throw r14     // Catch: java.lang.Throwable -> L341
        L119:
            if (r14 != 0) goto L120
            boolean r13 = r12.isPackageInfoLoaded()     // Catch: java.lang.Throwable -> L341
            return r13
        L120:
            java.lang.String r1 = r12.mPath     // Catch: java.lang.Throwable -> L341
            android.content.res.Resources r1 = com.qihoo360.loader2.Plugin.queryCachedResources(r1)     // Catch: java.lang.Throwable -> L341
            r12.mPkgResources = r1     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto L1a5
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            if (r1 == 0) goto L14a
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.res.Resources r0 = r0.getResourcesForApplication(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.res.Resources r1 = new android.content.res.Resources     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.res.AssetManager r2 = r0.getAssets()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.util.DisplayMetrics r3 = r0.getDisplayMetrics()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.res.Configuration r0 = r0.getConfiguration()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            r1.<init>(r2, r3, r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            r12.mPkgResources = r1     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            goto L154
        L14a:
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            android.content.res.Resources r0 = r0.getResourcesForApplication(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
            r12.mPkgResources = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L196 java.lang.Throwable -> L341
        L154:
            android.content.res.Resources r0 = r12.mPkgResources     // Catch: java.lang.Throwable -> L341
            if (r0 != 0) goto L164
            boolean r14 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r14 == 0) goto L163
            java.lang.String r14 = "ws001"
            java.lang.String r0 = "get resources null"
            com.qihoo360.replugin.helper.LogDebug.d(r14, r0)     // Catch: java.lang.Throwable -> L341
        L163:
            return r13
        L164:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r0 == 0) goto L180
            java.lang.String r0 = "ws001"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r1.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = "get resources for app, r="
            r1.append(r2)     // Catch: java.lang.Throwable -> L341
            android.content.res.Resources r2 = r12.mPkgResources     // Catch: java.lang.Throwable -> L341
            r1.append(r2)     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)     // Catch: java.lang.Throwable -> L341
        L180:
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r0 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> L341
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<android.content.res.Resources>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_RESOURCES     // Catch: java.lang.Throwable -> L193
            java.lang.String r2 = r12.mPath     // Catch: java.lang.Throwable -> L193
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L193
            android.content.res.Resources r4 = r12.mPkgResources     // Catch: java.lang.Throwable -> L193
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L193
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L193
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L193
            goto L1a5
        L193:
            r14 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L193
            throw r14     // Catch: java.lang.Throwable -> L341
        L196:
            r14 = move-exception
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r0 == 0) goto L1a4
            java.lang.String r0 = "ws001"
            java.lang.String r1 = r14.getMessage()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1, r14)     // Catch: java.lang.Throwable -> L341
        L1a4:
            return r13
        L1a5:
            r0 = 1
            if (r14 != r0) goto L1ad
            boolean r13 = r12.isResourcesLoaded()     // Catch: java.lang.Throwable -> L341
            return r13
        L1ad:
            java.lang.String r1 = r12.mPath     // Catch: java.lang.Throwable -> L341
            java.lang.ClassLoader r1 = com.qihoo360.loader2.Plugin.queryCachedClassLoader(r1)     // Catch: java.lang.Throwable -> L341
            r12.mClassLoader = r1     // Catch: java.lang.Throwable -> L341
            if (r1 != 0) goto L308
            com.qihoo360.loader2.Plugin r1 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L341
            java.io.File r1 = r1.getDexParentDir()     // Catch: java.lang.Throwable -> L341
            java.lang.String r5 = r1.getPath()     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = "dex"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r2.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = "load "
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r12.mPath     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = " ..."
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L341
            android.util.Log.i(r1, r2)     // Catch: java.lang.Throwable -> L341
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L341
            if (r1 == 0) goto L1ea
            java.lang.ClassLoader r1 = java.lang.ClassLoader.getSystemClassLoader()     // Catch: java.lang.Throwable -> L341
        L1e8:
            r7 = r1
            goto L1f7
        L1ea:
            java.lang.Class r1 = r12.getClass()     // Catch: java.lang.Throwable -> L341
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Throwable -> L341
            java.lang.ClassLoader r1 = r1.getParent()     // Catch: java.lang.Throwable -> L341
            goto L1e8
        L1f7:
            android.content.pm.PackageInfo r1 = r12.mPackageInfo     // Catch: java.lang.Throwable -> L341
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r6 = r1.nativeLibraryDir     // Catch: java.lang.Throwable -> L341
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            r2 = 0
            if (r1 == 0) goto L221
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.loader2.Plugin r1 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L341
            java.io.File r1 = r1.getDexFile()     // Catch: java.lang.Throwable -> L341
            boolean r4 = r1.exists()     // Catch: java.lang.Throwable -> L341
            if (r4 == 0) goto L21f
            long r10 = r1.length()     // Catch: java.lang.Throwable -> L341
            int r1 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r1 <= 0) goto L21f
            r1 = r0
            goto L223
        L21f:
            r1 = r13
            goto L223
        L221:
            r1 = r13
            r8 = r2
        L223:
            com.qihoo360.replugin.RePluginConfig r2 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.RePluginCallbacks r2 = r2.getCallbacks()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.loader2.Plugin r3 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = r12.mPath     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.PluginDexClassLoader r2 = r2.createPluginClassLoader(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L341
            r12.mClassLoader = r2     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = "dex"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r3.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = "load "
            r3.append(r4)     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = r12.mPath     // Catch: java.lang.Throwable -> L341
            r3.append(r4)     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = " = "
            r3.append(r4)     // Catch: java.lang.Throwable -> L341
            java.lang.ClassLoader r4 = r12.mClassLoader     // Catch: java.lang.Throwable -> L341
            r3.append(r4)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L341
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> L341
            java.lang.ClassLoader r2 = r12.mClassLoader     // Catch: java.lang.Throwable -> L341
            if (r2 != 0) goto L269
            boolean r14 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r14 == 0) goto L268
            java.lang.String r14 = "ws001"
            java.lang.String r0 = "get dex null"
            com.qihoo360.replugin.helper.LogDebug.d(r14, r0)     // Catch: java.lang.Throwable -> L341
        L268:
            return r13
        L269:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r2 == 0) goto L2f2
            if (r1 != 0) goto L2b1
            java.lang.String r1 = "createClassLoader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r2.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = " --释放DEX, (plugin="
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r12.mPluginName     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = ", version="
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            com.qihoo360.loader2.Plugin r3 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo     // Catch: java.lang.Throwable -> L341
            int r3 = r3.getVersion()     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = "), use:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L341
            long r3 = r3 - r8
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = ", process:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L341
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L341
            goto L2f2
        L2b1:
            java.lang.String r1 = "createClassLoader"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r2.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = " --无需释放DEX, (plugin="
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r12.mPluginName     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = ", version="
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            com.qihoo360.loader2.Plugin r3 = r12.mPluginObj     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.model.PluginInfo r3 = r3.mInfo     // Catch: java.lang.Throwable -> L341
            int r3 = r3.getVersion()     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = "), use:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L341
            long r3 = r3 - r8
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = ", process:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L341
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L341
        L2f2:
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r1 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> L341
            monitor-enter(r1)     // Catch: java.lang.Throwable -> L341
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.ClassLoader>> r2 = com.qihoo360.loader2.Plugin.FILENAME_2_DEX     // Catch: java.lang.Throwable -> L305
            java.lang.String r3 = r12.mPath     // Catch: java.lang.Throwable -> L305
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L305
            java.lang.ClassLoader r5 = r12.mClassLoader     // Catch: java.lang.Throwable -> L305
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L305
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L305
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L305
            goto L308
        L305:
            r14 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L305
            throw r14     // Catch: java.lang.Throwable -> L341
        L308:
            r1 = 2
            if (r14 != r1) goto L310
            boolean r13 = r12.isDexLoaded()     // Catch: java.lang.Throwable -> L341
            return r13
        L310:
            com.qihoo360.loader2.PluginContext r14 = new com.qihoo360.loader2.PluginContext     // Catch: java.lang.Throwable -> L341
            android.content.Context r2 = r12.mContext     // Catch: java.lang.Throwable -> L341
            r3 = 16973829(0x1030005, float:2.4060914E-38)
            java.lang.ClassLoader r4 = r12.mClassLoader     // Catch: java.lang.Throwable -> L341
            android.content.res.Resources r5 = r12.mPkgResources     // Catch: java.lang.Throwable -> L341
            java.lang.String r6 = r12.mPluginName     // Catch: java.lang.Throwable -> L341
            r1 = r14
            r7 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L341
            r12.mPkgContext = r14     // Catch: java.lang.Throwable -> L341
            boolean r14 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L341
            if (r14 == 0) goto L340
            java.lang.String r14 = "ws001"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            r1.<init>()     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = "pkg context="
            r1.append(r2)     // Catch: java.lang.Throwable -> L341
            android.content.Context r2 = r12.mPkgContext     // Catch: java.lang.Throwable -> L341
            r1.append(r2)     // Catch: java.lang.Throwable -> L341
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L341
            com.qihoo360.replugin.helper.LogDebug.d(r14, r1)     // Catch: java.lang.Throwable -> L341
        L340:
            return r0
        L341:
            r14 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "p="
            r0.append(r1)
            java.lang.String r1 = r12.mPath
            r0.append(r1)
            java.lang.String r1 = " m="
            r0.append(r1)
            java.lang.String r1 = r14.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r14)
            return r13
    }

    final boolean loadEntryMethod(boolean r6) {
            r5 = this;
            java.lang.String r0 = "ws001"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r1.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "com.qihoo360.plugin."
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = r5.mPluginName     // Catch: java.lang.Throwable -> L54
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "."
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "Entry"
            r1.append(r2)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L54
            java.lang.ClassLoader r2 = r5.mClassLoader     // Catch: java.lang.Throwable -> L54
            java.lang.Class r2 = r2.loadClass(r1)     // Catch: java.lang.Throwable -> L54
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L49
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r3.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "found entry: className="
            r3.append(r4)     // Catch: java.lang.Throwable -> L54
            r3.append(r1)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = ", loader="
            r3.append(r1)     // Catch: java.lang.Throwable -> L54
            java.lang.ClassLoader r1 = r2.getClassLoader()     // Catch: java.lang.Throwable -> L54
            r3.append(r1)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L54
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)     // Catch: java.lang.Throwable -> L54
        L49:
            java.lang.String r1 = "create"
            java.lang.Class<?>[] r3 = com.qihoo360.i.Factory.PLUGIN_ENTRY_EXPORT_METHOD_PARAMS     // Catch: java.lang.Throwable -> L54
            java.lang.reflect.Method r1 = r2.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L54
            r5.mCreateMethod = r1     // Catch: java.lang.Throwable -> L54
            goto L68
        L54:
            r1 = move-exception
            if (r6 == 0) goto L5f
            java.lang.String r6 = r1.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r6, r1)
            goto L68
        L5f:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L68
            java.lang.String r6 = "loadEntryMethod exception"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)
        L68:
            java.lang.reflect.Method r6 = r5.mCreateMethod
            if (r6 == 0) goto L6e
            r6 = 1
            goto L6f
        L6e:
            r6 = 0
        L6f:
            return r6
    }

    final boolean loadEntryMethod2() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53
            r0.<init>()     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "com.qihoo360.plugin."
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = r5.mPluginName     // Catch: java.lang.Throwable -> L53
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "."
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "Entry"
            r0.append(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L53
            java.lang.ClassLoader r1 = r5.mClassLoader     // Catch: java.lang.Throwable -> L53
            java.lang.Class r1 = r1.loadClass(r0)     // Catch: java.lang.Throwable -> L53
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L49
            java.lang.String r2 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53
            r3.<init>()     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = "found entry: className="
            r3.append(r4)     // Catch: java.lang.Throwable -> L53
            r3.append(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = ", loader="
            r3.append(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.ClassLoader r0 = r1.getClassLoader()     // Catch: java.lang.Throwable -> L53
            r3.append(r0)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L53
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L53
        L49:
            java.lang.String r0 = "create"
            java.lang.Class<?>[] r2 = com.qihoo360.i.Factory.PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS     // Catch: java.lang.Throwable -> L53
            java.lang.reflect.Method r0 = r1.getDeclaredMethod(r0, r2)     // Catch: java.lang.Throwable -> L53
            r5.mCreateMethod2 = r0     // Catch: java.lang.Throwable -> L53
        L53:
            java.lang.reflect.Method r0 = r5.mCreateMethod2
            if (r0 == 0) goto L59
            r0 = 1
            goto L5a
        L59:
            r0 = 0
        L5a:
            return r0
    }

    final boolean loadEntryMethod3() {
            r5 = this;
            java.lang.String r0 = "ws001"
            java.lang.String r1 = "com.qihoo360.replugin.Entry"
            java.lang.ClassLoader r2 = r5.mClassLoader     // Catch: java.lang.Throwable -> L39
            java.lang.Class r2 = r2.loadClass(r1)     // Catch: java.lang.Throwable -> L39
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L2e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r3.<init>()     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = "found entry: className="
            r3.append(r4)     // Catch: java.lang.Throwable -> L39
            r3.append(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = ", loader="
            r3.append(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.ClassLoader r1 = r2.getClassLoader()     // Catch: java.lang.Throwable -> L39
            r3.append(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L39
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)     // Catch: java.lang.Throwable -> L39
        L2e:
            java.lang.String r1 = "create"
            java.lang.Class<?>[] r3 = com.qihoo360.i.Factory.PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS     // Catch: java.lang.Throwable -> L39
            java.lang.reflect.Method r1 = r2.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L39
            r5.mCreateMethod2 = r1     // Catch: java.lang.Throwable -> L39
            goto L41
        L39:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r2, r1)
        L41:
            java.lang.reflect.Method r0 = r5.mCreateMethod2
            if (r0 == 0) goto L47
            r0 = 1
            goto L48
        L47:
            r0 = 0
        L48:
            return r0
    }
}
