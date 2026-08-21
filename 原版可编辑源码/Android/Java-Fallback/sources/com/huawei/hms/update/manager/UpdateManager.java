package com.huawei.hms.update.manager;

public class UpdateManager {
    public UpdateManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.app.Activity r2, java.util.ArrayList<java.lang.Integer> r3) {
            java.lang.String r0 = "com.huawei.appmarket"
            boolean r1 = a(r2, r0)
            if (r1 == 0) goto L1a
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L1a
            r2 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
        L1a:
            return
    }

    public static void a(android.content.Context r2, java.util.ArrayList<java.lang.Integer> r3) {
            boolean r0 = com.huawei.hms.android.SystemUtils.isTVDevice()
            if (r0 == 0) goto Lf
            r2 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
            return
        Lf:
            android.content.Context r0 = r2.getApplicationContext()
            java.lang.String r1 = "com.huawei.appmarket"
            boolean r0 = com.huawei.hms.android.SystemUtils.isSystemApp(r0, r1)
            if (r0 == 0) goto L38
            boolean r0 = b(r2)
            if (r0 == 0) goto L38
            boolean r0 = com.huawei.hms.android.SystemUtils.isChinaROM()
            if (r0 == 0) goto L38
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
            r2 = 6
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
            goto L3b
        L38:
            c(r2, r3)
        L3b:
            return
    }

    public static boolean a(android.content.Context r6) {
            java.lang.String r0 = "com.huawei.hms.client.channel.androidMarket"
            r1 = 1
            java.lang.String r2 = "UpdateManager"
            if (r6 != 0) goto Ld
            java.lang.String r6 = "In getAndroidMarketSetting, context is null."
            com.huawei.hms.support.log.HMSLog.e(r2, r6)
            return r1
        Ld:
            android.content.pm.PackageManager r3 = r6.getPackageManager()
            java.lang.String r4 = "In getAndroidMarketSetting, configuration not found for android channel market setting."
            if (r3 != 0) goto L19
            com.huawei.hms.support.log.HMSLog.i(r2, r4)
            return r1
        L19:
            java.lang.String r6 = r6.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            r5 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r6 = r3.getPackageInfo(r6, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            android.content.pm.ApplicationInfo r6 = r6.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            if (r6 == 0) goto L3f
            android.os.Bundle r3 = r6.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            if (r3 == 0) goto L3f
            android.os.Bundle r3 = r6.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            boolean r3 = r3.containsKey(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            if (r3 == 0) goto L3f
            android.os.Bundle r6 = r6.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            boolean r6 = r6.getBoolean(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            return r6
        L3a:
            java.lang.String r6 = "In getAndroidMarketSetting, Failed to read meta data from android market channel."
            com.huawei.hms.support.log.HMSLog.e(r2, r6)
        L3f:
            com.huawei.hms.support.log.HMSLog.i(r2, r4)
            return r1
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r2)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = r0.getPackageStates(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app is: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ";status is:"
            r0.append(r3)
            r0.append(r2)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "UpdateManager"
            com.huawei.hms.support.log.HMSLog.i(r0, r3)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r3 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.ENABLED
            if (r3 != r2) goto L2d
            r2 = 1
            goto L2e
        L2d:
            r2 = 0
        L2e:
            return r2
    }

    public static void b(android.content.Context r2, java.util.ArrayList<java.lang.Integer> r3) {
            java.lang.String r0 = "com.huawei.appmarket"
            boolean r1 = a(r2, r0)
            if (r1 == 0) goto L1a
            java.lang.String r2 = r2.getPackageName()
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L1a
            r2 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
        L1a:
            return
    }

    public static boolean b(android.content.Context r4) {
            com.huawei.hms.utils.PackageManagerHelper r0 = new com.huawei.hms.utils.PackageManagerHelper
            r0.<init>(r4)
            java.lang.String r4 = "com.huawei.appmarket"
            int r4 = r0.getPackageVersionCode(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getHiappVersion is "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "UpdateManager"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            long r0 = (long) r4
            r2 = 70203000(0x42f3678, double:3.46848905E-316)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L2b
            r4 = 1
            goto L2c
        L2b:
            r4 = 0
        L2c:
            return r4
    }

    public static void c(android.content.Context r2, java.util.ArrayList<java.lang.Integer> r3) {
            java.lang.String r0 = "com.huawei.appmarket"
            boolean r1 = a(r2, r0)
            if (r1 == 0) goto L21
            java.lang.String r1 = r2.getPackageName()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L21
            boolean r0 = c(r2)
            if (r0 == 0) goto L21
            r2 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
            goto L3e
        L21:
            boolean r0 = d(r2)
            if (r0 == 0) goto L30
            r2 = 7
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
            goto L3e
        L30:
            boolean r2 = a(r2)
            if (r2 != 0) goto L3e
            r2 = 6
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.add(r2)
        L3e:
            return
    }

    public static boolean c(android.content.Context r7) {
            java.lang.String r0 = ":"
            java.lang.String r1 = "com.huawei.hms.client.service.name:base"
            r2 = 0
            java.lang.String r3 = "UpdateManager"
            if (r7 != 0) goto Lf
            java.lang.String r7 = "In isAgNewVersion, context is null."
            com.huawei.hms.support.log.HMSLog.i(r3, r7)
            return r2
        Lf:
            android.content.pm.PackageManager r7 = r7.getPackageManager()
            java.lang.String r4 = "In isAgNewVersion, configuration not found for base version setting"
            if (r7 != 0) goto L1b
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            return r2
        L1b:
            java.lang.String r5 = "com.huawei.appmarket"
            r6 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r7 = r7.getPackageInfo(r5, r6)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            android.content.pm.ApplicationInfo r7 = r7.applicationInfo     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            if (r7 == 0) goto L5e
            android.os.Bundle r5 = r7.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            if (r5 == 0) goto L5e
            android.os.Bundle r5 = r7.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            boolean r5 = r5.containsKey(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            if (r5 != 0) goto L34
            goto L5e
        L34:
            android.os.Bundle r7 = r7.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            java.lang.String r7 = r7.getString(r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            if (r1 != 0) goto L5a
            java.lang.String[] r1 = r7.split(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            int r1 = r1.length     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            r5 = 2
            if (r1 == r5) goto L49
            goto L5a
        L49:
            java.lang.String[] r7 = r7.split(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            r0 = 1
            r7 = r7[r0]     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            int r7 = com.huawei.hms.utils.StringUtil.convertVersion2Integer(r7)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            r1 = 50004100(0x2fb0084, float:3.6881431E-37)
            if (r7 < r1) goto L67
            return r0
        L5a:
            com.huawei.hms.support.log.HMSLog.i(r3, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            return r2
        L5e:
            com.huawei.hms.support.log.HMSLog.i(r3, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L62
            return r2
        L62:
            java.lang.String r7 = "In isAgNewVersion, Failed to read meta data from base version setting channel."
            com.huawei.hms.support.log.HMSLog.e(r3, r7)
        L67:
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            return r2
    }

    public static boolean d(android.content.Context r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.apptouch.intent.action.update_hms"
            r0.<init>(r1)
            android.content.pm.PackageManager r1 = r4.getPackageManager()
            r2 = 0
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            if (r0 == 0) goto L3f
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L3f
            java.util.Iterator r0 = r0.iterator()
        L1c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ServiceInfo r1 = r1.serviceInfo
            if (r1 == 0) goto L1c
            java.lang.String r1 = r1.packageName
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L1c
            android.content.Context r3 = r4.getApplicationContext()
            boolean r3 = com.huawei.hms.android.SystemUtils.isSystemApp(r3, r1)
            if (r3 == 0) goto L1c
            goto L40
        L3f:
            r1 = 0
        L40:
            if (r1 == 0) goto L43
            r2 = 1
        L43:
            return r2
    }

    public static android.content.Intent getStartUpdateIntent(android.app.Activity r4, com.huawei.hms.update.ui.UpdateBean r5) {
            if (r4 == 0) goto L46
            if (r5 != 0) goto L5
            goto L46
        L5:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r5.getClientAppName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L18
            a(r4, r0)
            goto L1b
        L18:
            a(r4, r0)
        L1b:
            r1 = -2
            int r2 = r0.size()
            if (r2 <= 0) goto L2e
            r1 = 0
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            goto L35
        L2e:
            java.lang.String r2 = "UpdateManager"
            java.lang.String r3 = "typeList is empty, no upgrade solution"
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
        L35:
            r5.setTypeList(r0)
            java.lang.String r0 = com.huawei.hms.availableupdate.p.a(r1)
            android.content.Intent r4 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r4, r0)
            java.lang.String r0 = "intent.extra.update.info"
            r4.putExtra(r0, r5)
            return r4
        L46:
            r4 = 0
            return r4
    }

    public static android.content.Intent getStartUpdateIntent(android.content.Context r4, com.huawei.hms.update.ui.UpdateBean r5) {
            if (r4 == 0) goto L46
            if (r5 != 0) goto L5
            goto L46
        L5:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r5.getClientAppName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L18
            a(r4, r0)
            goto L1b
        L18:
            b(r4, r0)
        L1b:
            r1 = -2
            int r2 = r0.size()
            if (r2 <= 0) goto L2e
            r1 = 0
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            goto L35
        L2e:
            java.lang.String r2 = "UpdateManager"
            java.lang.String r3 = "typeList is empty, no upgrade solution"
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
        L35:
            r5.setTypeList(r0)
            java.lang.String r0 = com.huawei.hms.availableupdate.p.a(r1)
            android.content.Intent r4 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r4, r0)
            java.lang.String r0 = "intent.extra.update.info"
            r4.putExtra(r0, r5)
            return r4
        L46:
            r4 = 0
            return r4
    }

    public static void startUpdate(android.app.Activity r0, int r1, com.huawei.hms.update.ui.UpdateBean r2) {
            android.content.Intent r2 = getStartUpdateIntent(r0, r2)
            if (r2 == 0) goto L9
            r0.startActivityForResult(r2, r1)
        L9:
            return
    }

    public static android.content.Intent startUpdateIntent(android.app.Activity r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            com.huawei.hms.update.ui.UpdateBean r0 = new com.huawei.hms.update.ui.UpdateBean
            r0.<init>()
            r1 = 1
            r0.setHmsOrApkUpgrade(r1)
            android.content.Context r2 = r5.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
            java.lang.String r2 = r2.getHMSPackageName()
            r0.setClientPackageName(r2)
            android.content.Context r2 = r5.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r2 = com.huawei.hms.utils.HMSPackageManager.getInstance(r2)
            int r2 = r2.getHmsVersionCode()
            r0.setClientVersionCode(r2)
            java.lang.String r2 = "C10132067"
            r0.setClientAppId(r2)
            r2 = 0
            r0.setNeedConfirm(r2)
            android.content.Context r3 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r3 != 0) goto L41
            android.content.Context r3 = r5.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r3)
        L41:
            java.lang.String r3 = "hms_update_title"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            r0.setClientAppName(r3)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            java.lang.String r4 = r0.getClientAppName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L5d
            a(r5, r3)
            goto L60
        L5d:
            a(r5, r3)
        L60:
            r0.setTypeList(r3)
            int r4 = r3.size()
            if (r4 <= r1) goto L7c
            java.lang.Object r1 = r3.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.lang.String r1 = com.huawei.hms.availableupdate.p.a(r1)
            android.content.Intent r5 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r5, r1)
            goto L9d
        L7c:
            r1 = -2
            int r4 = r3.size()
            if (r4 <= 0) goto L8e
            java.lang.Object r1 = r3.get(r2)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            goto L95
        L8e:
            java.lang.String r2 = "UpdateManager"
            java.lang.String r3 = "typeList is empty, no upgrade solution"
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
        L95:
            java.lang.String r1 = com.huawei.hms.availableupdate.p.a(r1)
            android.content.Intent r5 = com.huawei.hms.activity.BridgeActivity.getIntentStartBridgeActivity(r5, r1)
        L9d:
            java.lang.String r1 = "intent.extra.update.info"
            r5.putExtra(r1, r0)
            return r5
    }
}
