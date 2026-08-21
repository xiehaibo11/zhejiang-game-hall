package com.kwad.sdk.utils;

public final class InstalledAppInfoManager {


    public static class AppPackageInfo implements java.io.Serializable {
        private static final long serialVersionUID = -324393456884895874L;
        public java.lang.String appName;
        public long firstInstallTime;
        public boolean isSystemApp;
        public long lastUpdateTime;
        public java.lang.String packageName;
        public int reportMethod;
        public java.lang.String versionName;

        public AppPackageInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo a(android.content.pm.PackageInfo r3, android.content.pm.PackageManager r4) {
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r0 = new com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo
            r0.<init>()
            java.lang.String r1 = r3.packageName
            r0.packageName = r1
            android.content.pm.ApplicationInfo r1 = r3.applicationInfo
            if (r1 == 0) goto L23
            android.content.pm.ApplicationInfo r1 = r3.applicationInfo
            boolean r1 = a(r1)
            if (r1 != 0) goto L20
            android.content.pm.ApplicationInfo r1 = r3.applicationInfo
            boolean r1 = b(r1)
            if (r1 == 0) goto L1e
            goto L20
        L1e:
            r1 = 0
            goto L21
        L20:
            r1 = 1
        L21:
            r0.isSystemApp = r1
        L23:
            java.lang.String r1 = r3.versionName
            r0.versionName = r1
            long r1 = r3.firstInstallTime
            r0.firstInstallTime = r1
            long r1 = r3.lastUpdateTime
            r0.lastUpdateTime = r1
            if (r4 == 0) goto L52
            android.content.pm.ApplicationInfo r1 = r3.applicationInfo
            if (r1 == 0) goto L52
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r2 = r3.packageName
            boolean r1 = com.kwad.sdk.utils.ak.ak(r1, r2)
            if (r1 == 0) goto L52
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo     // Catch: java.lang.Throwable -> L4e
            java.lang.CharSequence r3 = r3.loadLabel(r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4e
            r0.appName = r3     // Catch: java.lang.Throwable -> L4e
            goto L52
        L4e:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L52:
            return r0
    }

    public static org.json.JSONObject a(com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r4.packageName
            java.lang.String r2 = "pkgName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            boolean r1 = r4.isSystemApp
            java.lang.String r2 = "system_app"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.versionName
            java.lang.String r2 = "appVersion"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            long r1 = r4.firstInstallTime
            java.lang.String r3 = "firstInstallTime"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            long r1 = r4.lastUpdateTime
            java.lang.String r3 = "lastUpdateTime"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            int r1 = r4.reportMethod
            java.lang.String r2 = "reportMethod"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r4 = r4.appName
            java.lang.String r1 = "appName"
            com.kwad.sdk.utils.t.putValue(r0, r1, r4)
            return r0
    }

    public static void a(android.content.Context r1, com.kwad.sdk.g.a<org.json.JSONArray> r2) {
            com.kwad.sdk.utils.InstalledAppInfoManager$1 r0 = new com.kwad.sdk.utils.InstalledAppInfoManager$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    private static boolean a(android.content.pm.ApplicationInfo r1) {
            int r1 = r1.flags
            r0 = 1
            r1 = r1 & r0
            if (r1 == 0) goto L7
            return r0
        L7:
            r1 = 0
            return r1
    }

    private static boolean b(android.content.pm.ApplicationInfo r0) {
            int r0 = r0.flags
            r0 = r0 & 128(0x80, float:1.8E-43)
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static java.util.Map<java.lang.String, com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo> bV(android.content.Context r8) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r8 != 0) goto L8
            return r0
        L8:
            android.content.pm.PackageManager r1 = r8.getPackageManager()
            boolean r2 = com.kwad.sdk.utils.at.Ji()
            r3 = 0
            if (r2 == 0) goto L49
            java.util.List r8 = com.kwad.sdk.utils.at.Jj()
            if (r8 == 0) goto L48
            boolean r2 = r8.isEmpty()
            if (r2 != 0) goto L48
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r8)
            java.util.Iterator r8 = r2.iterator()
        L28:
            boolean r2 = r8.hasNext()
            if (r2 == 0) goto L48
            java.lang.Object r2 = r8.next()
            java.lang.String r2 = (java.lang.String) r2
            android.content.pm.PackageInfo r2 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Throwable -> L28
            if (r2 != 0) goto L3b
            goto L28
        L3b:
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r2 = a(r2, r1)     // Catch: java.lang.Throwable -> L28
            r4 = 3
            r2.reportMethod = r4     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r2.packageName     // Catch: java.lang.Throwable -> L28
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L28
            goto L28
        L48:
            return r0
        L49:
            java.lang.Class<com.kwad.sdk.service.a.f> r2 = com.kwad.sdk.service.a.f.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.f r2 = (com.kwad.sdk.service.a.f) r2
            if (r2 == 0) goto Lef
            boolean r4 = com.kwad.sdk.utils.o.Ia()
            if (r4 != 0) goto L5b
            goto Lef
        L5b:
            java.util.List r4 = com.kwad.sdk.utils.be.dk(r8)     // Catch: java.lang.Exception -> Le4
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> Le4
            java.lang.String r6 = "android.intent.action.MAIN"
            r7 = 0
            r5.<init>(r6, r7)     // Catch: java.lang.Exception -> Le4
            java.lang.String r6 = "android.intent.category.LAUNCHER"
            r5.addCategory(r6)     // Catch: java.lang.Exception -> Le4
            android.content.pm.PackageManager r6 = r8.getPackageManager()     // Catch: java.lang.Exception -> Le4
            r7 = 32
            java.util.List r5 = r6.queryIntentActivities(r5, r7)     // Catch: java.lang.Exception -> Le4
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> Le4
        L7a:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Exception -> Le4
            if (r6 == 0) goto Lb8
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Exception -> Le4
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6     // Catch: java.lang.Exception -> Le4
            if (r6 == 0) goto L7a
            android.content.pm.ActivityInfo r7 = r6.activityInfo     // Catch: java.lang.Exception -> Le4
            if (r7 == 0) goto L7a
            android.content.pm.ActivityInfo r7 = r6.activityInfo     // Catch: java.lang.Exception -> Le4
            java.lang.String r7 = r7.packageName     // Catch: java.lang.Exception -> Le4
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Le4
            if (r7 != 0) goto L7a
            android.content.pm.ActivityInfo r6 = r6.activityInfo     // Catch: java.lang.Exception -> Le4
            java.lang.String r6 = r6.packageName     // Catch: java.lang.Exception -> Le4
            if (r4 == 0) goto La5
            boolean r7 = r4.isEmpty()     // Catch: java.lang.Exception -> Le4
            if (r7 != 0) goto La5
            r4.remove(r6)     // Catch: java.lang.Exception -> Le4
        La5:
            android.content.pm.PackageInfo r6 = r1.getPackageInfo(r6, r3)     // Catch: java.lang.Exception -> Le4
            if (r6 == 0) goto L7a
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r6 = a(r6, r1)     // Catch: java.lang.Exception -> Le4
            r7 = 1
            r6.reportMethod = r7     // Catch: java.lang.Exception -> Le4
            java.lang.String r7 = r6.packageName     // Catch: java.lang.Exception -> Le4
            r0.put(r7, r6)     // Catch: java.lang.Exception -> Le4
            goto L7a
        Lb8:
            if (r4 == 0) goto Le4
            boolean r5 = r4.isEmpty()     // Catch: java.lang.Exception -> Le4
            if (r5 != 0) goto Le4
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> Le4
        Lc4:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Exception -> Le4
            if (r5 == 0) goto Le4
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Exception -> Le4
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Le4
            android.content.pm.PackageInfo r5 = r1.getPackageInfo(r5, r3)     // Catch: java.lang.Throwable -> Lc4
            if (r5 != 0) goto Ld7
            goto Lc4
        Ld7:
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r5 = a(r5, r1)     // Catch: java.lang.Throwable -> Lc4
            r6 = 2
            r5.reportMethod = r6     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r6 = r5.packageName     // Catch: java.lang.Throwable -> Lc4
            r0.put(r6, r5)     // Catch: java.lang.Throwable -> Lc4
            goto Lc4
        Le4:
            java.util.List r1 = r2.xA()
            java.util.Map r8 = d(r8, r1)
            r0.putAll(r8)
        Lef:
            return r0
    }

    public static org.json.JSONArray[] c(android.content.Context r6, java.util.List<java.lang.String> r7) {
            r0 = 2
            org.json.JSONArray[] r0 = new org.json.JSONArray[r0]
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1
            if (r6 == 0) goto L75
            if (r7 == 0) goto L75
            boolean r2 = r7.isEmpty()
            if (r2 != 0) goto L75
            if (r1 != 0) goto L18
            goto L75
        L18:
            boolean r1 = com.kwad.sdk.utils.o.Ia()
            if (r1 != 0) goto L1f
            return r0
        L1f:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.util.Iterator r7 = r7.iterator()
        L2d:
            boolean r3 = r7.hasNext()
            r4 = 0
            if (r3 == 0) goto L68
            java.lang.Object r3 = r7.next()
            java.lang.String r3 = (java.lang.String) r3
            android.content.pm.PackageManager r5 = r6.getPackageManager()     // Catch: java.lang.Exception -> L5b
            android.content.pm.PackageInfo r4 = r5.getPackageInfo(r3, r4)     // Catch: java.lang.Exception -> L5b
            if (r4 == 0) goto L4e
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r4 = a(r4, r5)     // Catch: java.lang.Exception -> L5b
            java.lang.String r5 = r4.packageName     // Catch: java.lang.Exception -> L5b
            r1.put(r5, r4)     // Catch: java.lang.Exception -> L5b
            goto L2d
        L4e:
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r4 = new com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo     // Catch: java.lang.Exception -> L5b
            r4.<init>()     // Catch: java.lang.Exception -> L5b
            r4.packageName = r3     // Catch: java.lang.Exception -> L5b
            java.lang.String r5 = r4.packageName     // Catch: java.lang.Exception -> L5b
            r2.put(r5, r4)     // Catch: java.lang.Exception -> L5b
            goto L2d
        L5b:
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r4 = new com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo
            r4.<init>()
            r4.packageName = r3
            java.lang.String r3 = r4.packageName
            r2.put(r3, r4)
            goto L2d
        L68:
            org.json.JSONArray r6 = f(r1)
            r0[r4] = r6
            r6 = 1
            org.json.JSONArray r7 = f(r2)
            r0[r6] = r7
        L75:
            return r0
    }

    private static java.util.Map<java.lang.String, com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo> d(android.content.Context r4, java.util.List<java.lang.String> r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 == 0) goto L2f
            if (r5 != 0) goto La
            goto L2f
        La:
            java.util.Iterator r5 = r5.iterator()
        Le:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Exception -> Le
            r3 = 0
            android.content.pm.PackageInfo r1 = r2.getPackageInfo(r1, r3)     // Catch: java.lang.Exception -> Le
            if (r1 == 0) goto Le
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r1 = a(r1, r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = r1.packageName     // Catch: java.lang.Exception -> Le
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Le
            goto Le
        L2f:
            return r0
    }

    public static org.json.JSONArray f(java.util.Map<java.lang.String, com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo> r4) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.Set r1 = r4.keySet()     // Catch: java.lang.Exception -> L31
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L31
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L31
            if (r2 == 0) goto L35
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L31
            java.lang.Object r2 = r4.get(r2)     // Catch: java.lang.Exception -> L31
            com.kwad.sdk.utils.InstalledAppInfoManager$AppPackageInfo r2 = (com.kwad.sdk.utils.InstalledAppInfoManager.AppPackageInfo) r2     // Catch: java.lang.Exception -> L31
            if (r2 == 0) goto Ld
            java.lang.String r3 = r2.packageName     // Catch: java.lang.Exception -> L31
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L31
            if (r3 != 0) goto Ld
            org.json.JSONObject r2 = a(r2)     // Catch: java.lang.Exception -> L31
            com.kwad.sdk.utils.t.putValue(r0, r2)     // Catch: java.lang.Exception -> L31
            goto Ld
        L31:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
        L35:
            return r0
    }
}
