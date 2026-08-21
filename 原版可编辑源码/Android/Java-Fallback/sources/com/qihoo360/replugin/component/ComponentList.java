package com.qihoo360.replugin.component;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ComponentList {
    final java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> mActivities;
    android.content.pm.ApplicationInfo mApplication;
    final java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> mProvidersByAuthority;
    final java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> mProvidersByName;
    final java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> mReceivers;
    final java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> mServices;

    public ComponentList(android.content.pm.PackageInfo r9, java.lang.String r10, com.qihoo360.replugin.model.PluginInfo r11) {
            r8 = this;
            r8.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.mActivities = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.mProvidersByName = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.mProvidersByAuthority = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.mServices = r0
            r0 = 0
            r8.mApplication = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.mReceivers = r0
            android.content.pm.ActivityInfo[] r0 = r9.activities
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 == 0) goto L72
            android.content.pm.ActivityInfo[] r0 = r9.activities
            int r3 = r0.length
            r4 = r1
        L34:
            if (r4 >= r3) goto L72
            r5 = r0[r4]
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L52
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "activity="
            r6.append(r7)
            java.lang.String r7 = r5.name
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        L52:
            android.content.pm.ApplicationInfo r6 = r5.applicationInfo
            r6.sourceDir = r10
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto L60
            android.content.pm.ApplicationInfo r6 = r5.applicationInfo
            java.lang.String r6 = r6.processName
            r5.processName = r6
        L60:
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto L68
            java.lang.String r6 = r5.packageName
            r5.processName = r6
        L68:
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r6 = r8.mActivities
            java.lang.String r7 = r5.name
            r6.put(r7, r5)
            int r4 = r4 + 1
            goto L34
        L72:
            android.content.pm.ProviderInfo[] r0 = r9.providers
            if (r0 == 0) goto Lc5
            android.content.pm.ProviderInfo[] r0 = r9.providers
            int r3 = r0.length
            r4 = r1
        L7a:
            if (r4 >= r3) goto Lc5
            r5 = r0[r4]
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto La2
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "provider="
            r6.append(r7)
            java.lang.String r7 = r5.name
            r6.append(r7)
            java.lang.String r7 = "; auth="
            r6.append(r7)
            java.lang.String r7 = r5.authority
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        La2:
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto Lac
            android.content.pm.ApplicationInfo r6 = r5.applicationInfo
            java.lang.String r6 = r6.processName
            r5.processName = r6
        Lac:
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto Lb4
            java.lang.String r6 = r5.packageName
            r5.processName = r6
        Lb4:
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r6 = r8.mProvidersByName
            java.lang.String r7 = r5.name
            r6.put(r7, r5)
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r6 = r8.mProvidersByAuthority
            java.lang.String r7 = r5.authority
            r6.put(r7, r5)
            int r4 = r4 + 1
            goto L7a
        Lc5:
            android.content.pm.ServiceInfo[] r0 = r9.services
            if (r0 == 0) goto L107
            android.content.pm.ServiceInfo[] r0 = r9.services
            int r3 = r0.length
            r4 = r1
        Lcd:
            if (r4 >= r3) goto L107
            r5 = r0[r4]
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto Leb
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "service="
            r6.append(r7)
            java.lang.String r7 = r5.name
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)
        Leb:
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto Lf5
            android.content.pm.ApplicationInfo r6 = r5.applicationInfo
            java.lang.String r6 = r6.processName
            r5.processName = r6
        Lf5:
            java.lang.String r6 = r5.processName
            if (r6 != 0) goto Lfd
            java.lang.String r6 = r5.packageName
            r5.processName = r6
        Lfd:
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r6 = r8.mServices
            java.lang.String r7 = r5.name
            r6.put(r7, r5)
            int r4 = r4 + 1
            goto Lcd
        L107:
            android.content.pm.ActivityInfo[] r0 = r9.receivers
            if (r0 == 0) goto L148
            android.content.pm.ActivityInfo[] r0 = r9.receivers
            int r3 = r0.length
        L10e:
            if (r1 >= r3) goto L148
            r4 = r0[r1]
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L12c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "receiver="
            r5.append(r6)
            java.lang.String r6 = r4.name
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L12c:
            java.lang.String r5 = r4.processName
            if (r5 != 0) goto L136
            android.content.pm.ApplicationInfo r5 = r4.applicationInfo
            java.lang.String r5 = r5.processName
            r4.processName = r5
        L136:
            java.lang.String r5 = r4.processName
            if (r5 != 0) goto L13e
            java.lang.String r5 = r4.packageName
            r4.processName = r5
        L13e:
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r5 = r8.mReceivers
            java.lang.String r6 = r4.name
            r5.put(r6, r4)
            int r1 = r1 + 1
            goto L10e
        L148:
            java.lang.String r0 = getManifestFromApk(r10)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L178
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "\n解析插件 "
            r1.append(r3)
            java.lang.String r3 = r11.getName()
            r1.append(r3)
            java.lang.String r3 = " : "
            r1.append(r3)
            r1.append(r10)
            java.lang.String r10 = "\nAndroidManifest: \n"
            r1.append(r10)
            r1.append(r0)
            java.lang.String r10 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r10)
        L178:
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r10 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS
            r10.parse(r11, r0)
            android.content.pm.ApplicationInfo r9 = r9.applicationInfo
            r8.mApplication = r9
            java.lang.String r9 = r9.dataDir
            if (r9 != 0) goto L1af
            android.content.pm.ApplicationInfo r9 = r8.mApplication
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.io.File r11 = android.os.Environment.getDataDirectory()
            r10.append(r11)
            java.lang.String r11 = java.io.File.separator
            r10.append(r11)
            java.lang.String r11 = "data"
            r10.append(r11)
            java.lang.String r11 = java.io.File.separator
            r10.append(r11)
            android.content.pm.ApplicationInfo r11 = r8.mApplication
            java.lang.String r11 = r11.packageName
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            r9.dataDir = r10
        L1af:
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L1c9
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "mApplication: "
            r9.append(r10)
            android.content.pm.ApplicationInfo r10 = r8.mApplication
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r9)
        L1c9:
            return
    }

    private static java.lang.String getManifestFromApk(java.lang.String r8) {
            java.lang.String r0 = com.qihoo360.replugin.component.utils.ApkCommentReader.readComment(r8)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "ws001"
            if (r1 != 0) goto L25
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L24
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "从 apk comment 中解析 xml:\n "
            r8.append(r1)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r8)
        L24:
            return r0
        L25:
            r0 = 0
            com.qihoo360.replugin.ext.parser.ApkParser r1 = new com.qihoo360.replugin.ext.parser.ApkParser     // Catch: java.lang.Throwable -> L69 java.io.IOException -> L6b
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L69 java.io.IOException -> L6b
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            if (r8 == 0) goto L56
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            java.lang.String r8 = r1.getManifestXml()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            r0.<init>()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            java.lang.String r7 = "从 apk 中解析 xml 耗时 "
            r0.append(r7)     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            long r5 = r5 - r3
            r0.append(r5)     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            java.lang.String r3 = " 毫秒"
            r0.append(r3)     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
            goto L5a
        L56:
            java.lang.String r8 = r1.getManifestXml()     // Catch: java.lang.Throwable -> L63 java.io.IOException -> L66
        L5a:
            r1.close()     // Catch: java.io.IOException -> L5e
            goto L62
        L5e:
            r0 = move-exception
            r0.printStackTrace()
        L62:
            return r8
        L63:
            r8 = move-exception
            r0 = r1
            goto L7c
        L66:
            r8 = move-exception
            r0 = r1
            goto L6c
        L69:
            r8 = move-exception
            goto L7c
        L6b:
            r8 = move-exception
        L6c:
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L69
            if (r0 == 0) goto L79
            r0.close()     // Catch: java.io.IOException -> L75
            goto L79
        L75:
            r8 = move-exception
            r8.printStackTrace()
        L79:
            java.lang.String r8 = ""
            return r8
        L7c:
            if (r0 == 0) goto L86
            r0.close()     // Catch: java.io.IOException -> L82
            goto L86
        L82:
            r0 = move-exception
            r0.printStackTrace()
        L86:
            throw r8
    }

    public android.content.pm.ActivityInfo[] getActivities() {
            r2 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r2.mActivities
            java.util.Collection r0 = r0.values()
            r1 = 0
            android.content.pm.ActivityInfo[] r1 = new android.content.pm.ActivityInfo[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            android.content.pm.ActivityInfo[] r0 = (android.content.pm.ActivityInfo[]) r0
            return r0
    }

    public android.content.pm.ActivityInfo getActivity(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r1.mActivities
            java.lang.Object r2 = r0.get(r2)
            android.content.pm.ActivityInfo r2 = (android.content.pm.ActivityInfo) r2
            return r2
    }

    public java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> getActivityMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r1.mActivities
            return r0
    }

    public android.content.pm.ApplicationInfo getApplication() {
            r1 = this;
            android.content.pm.ApplicationInfo r0 = r1.mApplication
            return r0
    }

    public android.content.pm.ProviderInfo getProvider(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r0 = r1.mProvidersByName
            java.lang.Object r2 = r0.get(r2)
            android.content.pm.ProviderInfo r2 = (android.content.pm.ProviderInfo) r2
            return r2
    }

    public android.content.pm.ProviderInfo getProviderByAuthority(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r0 = r1.mProvidersByAuthority
            java.lang.Object r2 = r0.get(r2)
            android.content.pm.ProviderInfo r2 = (android.content.pm.ProviderInfo) r2
            return r2
    }

    public java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> getProviderMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r0 = r1.mProvidersByAuthority
            return r0
    }

    public android.content.pm.ProviderInfo[] getProviders() {
            r2 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ProviderInfo> r0 = r2.mProvidersByName
            java.util.Collection r0 = r0.values()
            r1 = 0
            android.content.pm.ProviderInfo[] r1 = new android.content.pm.ProviderInfo[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            android.content.pm.ProviderInfo[] r0 = (android.content.pm.ProviderInfo[]) r0
            return r0
    }

    public java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> getReceiverMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r1.mReceivers
            return r0
    }

    public android.content.pm.ActivityInfo[] getReceivers() {
            r2 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r2.mReceivers
            java.util.Collection r0 = r0.values()
            r1 = 0
            android.content.pm.ActivityInfo[] r1 = new android.content.pm.ActivityInfo[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            android.content.pm.ActivityInfo[] r0 = (android.content.pm.ActivityInfo[]) r0
            return r0
    }

    public android.content.pm.ActivityInfo getReveiver(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ActivityInfo> r0 = r1.mReceivers
            java.lang.Object r2 = r0.get(r2)
            android.content.pm.ActivityInfo r2 = (android.content.pm.ActivityInfo) r2
            return r2
    }

    public android.content.pm.ServiceInfo getService(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r0 = r1.mServices
            java.lang.Object r2 = r0.get(r2)
            android.content.pm.ServiceInfo r2 = (android.content.pm.ServiceInfo) r2
            return r2
    }

    public android.util.Pair<android.content.pm.ServiceInfo, java.lang.String> getServiceAndPluginByIntent(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            java.lang.String r0 = r5.getAction()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L38
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r1 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS
            java.util.Set r0 = r1.getPluginsByActionWhenStartService(r0)
            if (r0 == 0) goto L38
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L38
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r2 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS
            java.util.Map r2 = r2.getServiceFilterMap(r1)
            java.lang.String r2 = com.qihoo360.replugin.component.utils.IntentMatcherHelper.doMatchIntent(r4, r5, r2)
            android.content.pm.ServiceInfo r2 = com.qihoo360.i.Factory.queryServiceInfo(r1, r2)
            if (r2 == 0) goto L16
            android.util.Pair r4 = new android.util.Pair
            r4.<init>(r2, r1)
            return r4
        L38:
            r4 = 0
            return r4
    }

    public java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> getServiceMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r0 = r1.mServices
            return r0
    }

    public android.content.pm.ServiceInfo[] getServices() {
            r2 = this;
            java.util.HashMap<java.lang.String, android.content.pm.ServiceInfo> r0 = r2.mServices
            java.util.Collection r0 = r0.values()
            r1 = 0
            android.content.pm.ServiceInfo[] r1 = new android.content.pm.ServiceInfo[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            android.content.pm.ServiceInfo[] r0 = (android.content.pm.ServiceInfo[]) r0
            return r0
    }
}
