package com.sigmob.sdk.base.common;

public class d {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.windad.WindAdError a() {
            java.lang.String r0 = "checkActivity: "
            java.lang.String r1 = ""
            android.content.Context r2 = com.sigmob.sdk.b.b()
            r3 = 128(0x80, float:1.8E-43)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            r4.<init>()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            r4.append(r0)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r5 = com.sigmob.sdk.base.common.AdActivity.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            r4.append(r5)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            android.content.ComponentName r4 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            java.lang.Class<com.sigmob.sdk.base.common.AdActivity> r5 = com.sigmob.sdk.base.common.AdActivity.class
            r4.<init>(r2, r5)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            android.content.pm.PackageManager r5 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            r5.getActivityInfo(r4, r3)     // Catch: java.lang.Throwable -> L31 android.content.pm.PackageManager.NameNotFoundException -> L269
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            r0 = 0
            android.content.pm.ApplicationInfo r4 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L6d
            int r4 = r4.targetSdkVersion     // Catch: java.lang.Throwable -> L6d
            r5 = 26
            if (r4 < r5) goto L86
            android.content.pm.PackageManager r4 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r5 = r2.getPackageName()     // Catch: java.lang.Throwable -> L6d
            r6 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r5, r6)     // Catch: java.lang.Throwable -> L6d
            java.lang.String[] r4 = r4.requestedPermissions     // Catch: java.lang.Throwable -> L6d
            r5 = r0
            r6 = r1
        L52:
            int r7 = r4.length     // Catch: java.lang.Throwable -> L6d
            if (r5 >= r7) goto L64
            r7 = r4[r5]     // Catch: java.lang.Throwable -> L6d
            java.lang.String r8 = "android.permission.REQUEST_INSTALL_PACKAGES"
            boolean r7 = r7.equals(r8)     // Catch: java.lang.Throwable -> L6d
            if (r7 == 0) goto L61
            r6 = r4[r5]     // Catch: java.lang.Throwable -> L6d
        L61:
            int r5 = r5 + 1
            goto L52
        L64:
            boolean r4 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L86
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_INSTALL_PERMISSION_ERROR     // Catch: java.lang.Throwable -> L6d
            return r0
        L6d:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "checkPermission: "
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L86:
            java.lang.Class<com.sigmob.sdk.base.models.rtb.Ad> r4 = com.sigmob.sdk.base.models.rtb.Ad.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "sdk.base.models.rtb.Ad"
            boolean r4 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L132
            if (r4 != 0) goto Lb1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L132
            r4.<init>()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "checkProguard Ad: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.Class<com.sigmob.sdk.base.models.rtb.Ad> r5 = com.sigmob.sdk.base.models.rtb.Ad.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L132
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L132
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L132
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR     // Catch: java.lang.Throwable -> L132
            return r0
        Lb1:
            java.lang.Class<com.sigmob.sdk.base.models.rtb.MaterialMeta> r4 = com.sigmob.sdk.base.models.rtb.MaterialMeta.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "sdk.base.models.rtb.MaterialMeta"
            boolean r4 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L132
            if (r4 != 0) goto Ldc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L132
            r4.<init>()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "checkProguard Strategy: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.Class<com.sigmob.sdk.base.models.rtb.MaterialMeta> r5 = com.sigmob.sdk.base.models.rtb.MaterialMeta.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L132
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L132
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L132
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR     // Catch: java.lang.Throwable -> L132
            return r0
        Ldc:
            java.lang.Class<com.sigmob.sdk.base.models.AppInfo> r4 = com.sigmob.sdk.base.models.AppInfo.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "sdk.base.models.AppInfo"
            boolean r4 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L132
            if (r4 != 0) goto L107
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L132
            r4.<init>()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "checkProguard AppInfo: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.Class<com.sigmob.sdk.base.models.AppInfo> r5 = com.sigmob.sdk.base.models.AppInfo.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L132
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L132
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L132
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR     // Catch: java.lang.Throwable -> L132
            return r0
        L107:
            java.lang.Class<com.czhj.sdk.common.mta.PointEntitySuper> r4 = com.czhj.sdk.common.mta.PointEntitySuper.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "sdk.common.mta.PointEntitySuper"
            boolean r4 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L132
            if (r4 != 0) goto L14b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L132
            r4.<init>()     // Catch: java.lang.Throwable -> L132
            java.lang.String r5 = "checkProguard PointCategory: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.Class<com.czhj.sdk.common.mta.PointEntitySuper> r5 = com.czhj.sdk.common.mta.PointEntitySuper.class
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L132
            r4.append(r5)     // Catch: java.lang.Throwable -> L132
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L132
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Throwable -> L132
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROGUARD_ERROR     // Catch: java.lang.Throwable -> L132
            return r0
        L132:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "checkProguard: "
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L14b:
            java.lang.String r4 = r2.getPackageName()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.content.pm.PackageManager r5 = r2.getPackageManager()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r6 = 8
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r4, r6)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.content.pm.ProviderInfo[] r6 = r5.providers     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r7 = -1
            if (r6 == 0) goto L19e
            android.content.pm.ProviderInfo[] r5 = r5.providers     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            int r6 = r5.length     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r8 = r0
        L162:
            if (r8 >= r6) goto L19e
            r9 = r5[r8]     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r10 = r9.authority     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r10 == 0) goto L19b
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r11.<init>()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r11.append(r4)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r12 = ".sigprovider"
            r11.append(r12)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            boolean r11 = r10.equals(r11)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r11 == 0) goto L19b
            android.content.ComponentName r4 = new android.content.ComponentName     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r5 = r9.name     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r4.<init>(r2, r5)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.content.pm.PackageManager r5 = r2.getPackageManager()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.content.pm.ProviderInfo r3 = r5.getProviderInfo(r4, r3)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.os.Bundle r3 = r3.metaData     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r3 == 0) goto L19f
            java.lang.String r4 = "android.support.FILE_PROVIDER_PATHS"
            int r3 = r3.getInt(r4)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            goto L1a0
        L19b:
            int r8 = r8 + 1
            goto L162
        L19e:
            r10 = r1
        L19f:
            r3 = r7
        L1a0:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r4.<init>()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r5 = "check targetAuthority:"
            r4.append(r5)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r4.append(r10)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r5 = " xml :"
            r4.append(r5)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r4.append(r3)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            com.czhj.sdk.logger.SigmobLog.e(r4)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            boolean r4 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r4 == 0) goto L1c5
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_ERROR     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            return r0
        L1c5:
            if (r3 == r7) goto L253
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            android.content.res.XmlResourceParser r2 = r2.getXml(r3)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            int r3 = r2.getEventType()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r4 = r3
            r3 = r1
        L1d5:
            java.lang.String r5 = " path :"
            java.lang.String r6 = "check name: "
            java.lang.String r7 = "SigDownload"
            java.lang.String r8 = "SigMob_root"
            r9 = 1
            if (r4 == r9) goto L22b
            r10 = 2
            if (r4 != r10) goto L222
            java.lang.String r4 = r2.getName()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r11 = "external-cache-path"
            boolean r4 = r4.equals(r11)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r4 == 0) goto L226
            int r4 = r2.getAttributeCount()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r4 < r10) goto L226
            java.lang.String r1 = r2.getAttributeValue(r0)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r3 = r2.getAttributeValue(r9)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            boolean r4 = r1.equals(r8)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r4 == 0) goto L226
            boolean r4 = r3.equals(r7)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r4 == 0) goto L226
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.<init>()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r6)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r1)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r5)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r3)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            goto L22b
        L222:
            if (r4 != 0) goto L225
            goto L226
        L225:
            r5 = 3
        L226:
            int r4 = r2.next()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            goto L1d5
        L22b:
            boolean r0 = r1.equals(r8)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r0 == 0) goto L250
            boolean r0 = r3.equals(r7)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            if (r0 == 0) goto L250
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.<init>()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r6)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r1)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r5)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            r0.append(r3)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            goto L267
        L250:
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            return r0
        L253:
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_PROVIDER_XML_ERROR     // Catch: java.lang.Exception -> L256 org.xmlpull.v1.XmlPullParserException -> L258 android.content.pm.PackageManager.NameNotFoundException -> L25a
            return r0
        L256:
            r0 = move-exception
            goto L25c
        L258:
            r0 = move-exception
            goto L260
        L25a:
            r0 = move-exception
            goto L264
        L25c:
            r0.printStackTrace()
            goto L267
        L260:
            r0.printStackTrace()
            goto L267
        L264:
            r0.printStackTrace()
        L267:
            r0 = 0
            return r0
        L269:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = r1.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_LOAD_FILTER_FOR_ACTIVITY_ERROR
            return r0
    }
}
