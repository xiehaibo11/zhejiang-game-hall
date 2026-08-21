package com.mbridge.msdk.widget.custom;

public class CustomViewMessageWrap implements com.mbridge.msdk.system.NoProGuard {
    private com.mbridge.msdk.out.ApkDisplayInfo apkDisplayInfo;
    private com.mbridge.msdk.foundation.entity.CampaignEx campaignEx;
    private java.lang.String layoutFilePath;
    private java.util.Map<java.lang.String, android.view.View> views;

    public CustomViewMessageWrap() {
            r0 = this;
            r0.<init>()
            return
    }

    public CustomViewMessageWrap(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.campaignEx = r1
            if (r1 != 0) goto L9
            r1 = 0
            goto Ld
        L9:
            com.mbridge.msdk.out.ApkDisplayInfo r1 = r1.getApkDisplayInfo()
        Ld:
            r0.apkDisplayInfo = r1
            r0.layoutFilePath = r2
            return
    }

    private static void copyAssetsDir2Phone(android.content.Context r9, java.lang.String r10) {
            r0 = 0
            android.content.res.AssetManager r1 = r9.getAssets()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String[] r1 = r1.list(r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            int r2 = r1.length     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r3 = 0
            if (r2 <= 0) goto L5b
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r4.<init>()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            com.mbridge.msdk.foundation.same.b.c r5 = com.mbridge.msdk.foundation.same.b.c.j     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r5 = com.mbridge.msdk.foundation.same.b.e.b(r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r4.append(r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r4.append(r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r4.append(r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r2.<init>(r4)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r2.mkdirs()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            int r2 = r1.length     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r4 = r3
        L31:
            if (r4 >= r2) goto L59
            r5 = r1[r4]     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r6.<init>()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r6.append(r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r10 = java.io.File.separator     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r6.append(r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            r6.append(r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r10 = r6.toString()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            copyAssetsDir2Phone(r9, r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            int r5 = r10.lastIndexOf(r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.lang.String r10 = r10.substring(r3, r5)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            int r4 = r4 + 1
            goto L31
        L59:
            r9 = r0
            goto La7
        L5b:
            android.content.res.AssetManager r9 = r9.getAssets()     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.io.InputStream r9 = r9.open(r10)     // Catch: java.lang.Throwable -> Lcb java.io.IOException -> Lce
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r2.<init>()     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            com.mbridge.msdk.foundation.same.b.c r4 = com.mbridge.msdk.foundation.same.b.c.j     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            java.lang.String r4 = com.mbridge.msdk.foundation.same.b.e.b(r4)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r2.append(r4)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            java.lang.String r4 = java.io.File.separator     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r2.append(r4)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r2.append(r10)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r1.<init>(r10)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            boolean r10 = r1.exists()     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            if (r10 == 0) goto L92
            long r4 = r1.length()     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r6 = 0
            int r10 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r10 != 0) goto La7
        L92:
            java.io.FileOutputStream r10 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r10.<init>(r1)     // Catch: java.lang.Throwable -> Lc1 java.io.IOException -> Lc6
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lbb
        L9b:
            int r1 = r9.read(r0)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lbb
            r2 = -1
            if (r1 == r2) goto La6
            r10.write(r0, r3, r1)     // Catch: java.lang.Throwable -> Lb5 java.io.IOException -> Lbb
            goto L9b
        La6:
            r0 = r10
        La7:
            if (r0 == 0) goto Laf
            r0.flush()     // Catch: java.io.IOException -> Laf
            r0.close()     // Catch: java.io.IOException -> Laf
        Laf:
            if (r9 == 0) goto Le6
            r9.close()     // Catch: java.io.IOException -> Le6
            goto Le6
        Lb5:
            r0 = move-exception
            r8 = r10
            r10 = r9
            r9 = r0
            r0 = r8
            goto Le8
        Lbb:
            r0 = move-exception
            r8 = r10
            r10 = r9
            r9 = r0
            r0 = r8
            goto Ld0
        Lc1:
            r10 = move-exception
            r8 = r10
            r10 = r9
            r9 = r8
            goto Le8
        Lc6:
            r10 = move-exception
            r8 = r10
            r10 = r9
            r9 = r8
            goto Ld0
        Lcb:
            r9 = move-exception
            r10 = r0
            goto Le8
        Lce:
            r9 = move-exception
            r10 = r0
        Ld0:
            java.lang.String r1 = "wrap"
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> Le7
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)     // Catch: java.lang.Throwable -> Le7
            if (r0 == 0) goto Le1
            r0.flush()     // Catch: java.io.IOException -> Le1
            r0.close()     // Catch: java.io.IOException -> Le1
        Le1:
            if (r10 == 0) goto Le6
            r10.close()     // Catch: java.io.IOException -> Le6
        Le6:
            return
        Le7:
            r9 = move-exception
        Le8:
            if (r0 == 0) goto Lf0
            r0.flush()     // Catch: java.io.IOException -> Lf0
            r0.close()     // Catch: java.io.IOException -> Lf0
        Lf0:
            if (r10 == 0) goto Lf5
            r10.close()     // Catch: java.io.IOException -> Lf5
        Lf5:
            throw r9
    }

    public static final void copyViewFile(android.content.Context r0, java.lang.String r1) {
            copyAssetsDir2Phone(r0, r1)
            return
    }

    public static final java.lang.String getMessage(com.mbridge.msdk.widget.custom.CustomViewMessageWrap r5, java.lang.String r6) {
            java.lang.String r0 = "CustomViewMessageWrap"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 == 0) goto Lc
            if (r5 != 0) goto Lc
            r5 = 0
            return r5
        Lc:
            java.lang.String r1 = ""
            java.lang.Class r2 = r5.getClass()     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            java.lang.reflect.Method r6 = r2.getMethod(r6, r4)     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            r2 = 1
            r6.setAccessible(r2)     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            java.lang.Object r5 = r6.invoke(r5, r2)     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            if (r5 == 0) goto L45
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.IllegalAccessException -> L2b java.lang.reflect.InvocationTargetException -> L34 java.lang.NoSuchMethodException -> L3d
            r1 = r5
            goto L45
        L2b:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            goto L45
        L34:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            goto L45
        L3d:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L45:
            return r1
    }

    public static final java.lang.String getViewFilePath(java.lang.String r2) {
            java.lang.String r0 = "mbridge_download_dialog_view"
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 == 0) goto L28
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.j
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ".xml"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L28:
            java.lang.String r2 = ""
            return r2
    }

    public boolean checkIsNull(java.lang.Object r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 1
            goto L5
        L4:
            r1 = 0
        L5:
            return r1
    }

    public java.lang.String getApplicationContext() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            java.lang.String r0 = r0.getAppDesc()
        L11:
            return r0
    }

    public java.lang.String getApplicationDeveloper() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            java.lang.String r0 = r0.getDevName()
        L11:
            return r0
    }

    public java.lang.String getApplicationImage() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            java.lang.String r0 = r0.getImageUrl()
        L11:
            return r0
    }

    public java.lang.String getApplicationLogo() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            java.lang.String r0 = r0.getIconUrl()
        L11:
            return r0
    }

    public java.lang.String getApplicationName() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            java.lang.String r0 = r0.getAppName()
        L11:
            return r0
    }

    public java.lang.String getApplicationNameFromCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            java.lang.String r0 = r0.getAppName()
        L11:
            return r0
    }

    public java.lang.String getApplicationPermissions() {
            r5 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r5.apkDisplayInfo
            boolean r0 = r5.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            return r0
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.out.ApkDisplayInfo r1 = r5.apkDisplayInfo
            java.util.ArrayList r1 = r1.getPermDescAllList()
            if (r1 == 0) goto L44
            int r2 = r1.size()
            if (r2 <= 0) goto L44
            r2 = 0
        L1f:
            int r3 = r1.size()
            if (r2 >= r3) goto L44
            java.lang.Object r3 = r1.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L41
            r0.append(r3)
            int r3 = r1.size()
            int r3 = r3 + (-1)
            if (r2 >= r3) goto L41
            java.lang.String r3 = "\n"
            r0.append(r3)
        L41:
            int r2 = r2 + 1
            goto L1f
        L44:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getApplicationPrivacy() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            java.lang.String r0 = r0.getPriUrl()
        L11:
            return r0
    }

    public java.lang.String getApplicationScore() {
            r6 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.campaignEx
            boolean r0 = r6.checkIsNull(r0)
            r1 = 0
            r2 = 1
            java.lang.String r3 = "已有 %s 人评分"
            if (r0 == 0) goto L28
            java.lang.Object[] r0 = new java.lang.Object[r2]
            r2 = 100000(0x186a0, float:1.4013E-40)
            java.util.Random r4 = new java.util.Random
            r4.<init>()
            r5 = 10000(0x2710, float:1.4013E-41)
            int r4 = r4.nextInt(r5)
            int r4 = r4 + r2
            java.lang.String r2 = java.lang.String.valueOf(r4)
            r0[r1] = r2
            java.lang.String r0 = java.lang.String.format(r3, r0)
            goto L3a
        L28:
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.campaignEx
            int r2 = r2.getNumberRating()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0[r1] = r2
            java.lang.String r0 = java.lang.String.format(r3, r0)
        L3a:
            return r0
    }

    public java.lang.String getApplicationUpdateTime() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            java.lang.String r0 = r0.getUpdateTime()
        L11:
            return r0
    }

    public java.lang.String getApplicationVersion() {
            r1 = this;
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            boolean r0 = r1.checkIsNull(r0)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ""
            goto L11
        Lb:
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r1.apkDisplayInfo
            java.lang.String r0 = r0.getAppVersion()
        L11:
            return r0
    }

    public com.mbridge.msdk.foundation.entity.CampaignEx getCampaignEx() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.campaignEx
            return r0
    }

    public java.lang.String getLayoutFilePath() {
            r1 = this;
            java.lang.String r0 = r1.layoutFilePath
            return r0
    }

    public int getStarCount() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.campaignEx
            boolean r0 = r2.checkIsNull(r0)
            if (r0 == 0) goto La
            r0 = 5
            goto L15
        La:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.campaignEx
            double r0 = r0.getRating()
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
        L15:
            return r0
    }

    public android.view.View getView(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, android.view.View> r0 = r1.views
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            android.view.View r2 = (android.view.View) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public void putView(java.lang.String r2, android.view.View r3) {
            r1 = this;
            java.util.Map<java.lang.String, android.view.View> r0 = r1.views
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.views = r0
        Lb:
            java.util.Map<java.lang.String, android.view.View> r0 = r1.views
            r0.put(r2, r3)
            return
    }
}
