package com.qq.e.comm.constants;

public class CustomPkgConstants {
    private static final java.lang.String a = null;
    private static final java.lang.String b = null;
    private static final java.lang.String c = null;
    private static final java.lang.String d = null;
    private static final java.lang.String e = null;
    private static final java.lang.String f = null;

    static {
            java.lang.Class<com.qq.e.comm.DownloadService> r0 = com.qq.e.comm.DownloadService.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.a = r0
            java.lang.Class<com.qq.e.ads.ADActivity> r0 = com.qq.e.ads.ADActivity.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.b = r0
            java.lang.Class<com.qq.e.ads.PortraitADActivity> r0 = com.qq.e.ads.PortraitADActivity.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.c = r0
            java.lang.Class<com.qq.e.ads.RewardvideoPortraitADActivity> r0 = com.qq.e.ads.RewardvideoPortraitADActivity.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.d = r0
            java.lang.Class<com.qq.e.ads.LandscapeADActivity> r0 = com.qq.e.ads.LandscapeADActivity.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.e = r0
            java.lang.Class<com.qq.e.ads.RewardvideoLandscapeADActivity> r0 = com.qq.e.ads.RewardvideoLandscapeADActivity.class
            java.lang.String r0 = r0.getName()
            com.qq.e.comm.constants.CustomPkgConstants.f = r0
            return
    }

    public CustomPkgConstants() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getADActivityName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.getCustomADActivityClassName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.b
            return r0
    }

    public static java.lang.String getAssetPluginXorKey() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String getDownLoadServiceName() {
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.a
            return r0
    }

    public static java.lang.String getLandscapeADActivityName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.getCustomLandscapeActivityClassName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.e
            return r0
    }

    public static java.lang.String getPortraitADActivityName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.getCustomPortraitActivityClassName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.c
            return r0
    }

    public static java.lang.String getRewardvideoLandscapeADActivityName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.getCustomRewardvideoLandscapeActivityClassName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.f
            return r0
    }

    public static java.lang.String getRewardvideoPortraitADActivityName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.getCustomRewardvideoPortraitActivityClassName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.String r0 = com.qq.e.comm.constants.CustomPkgConstants.d
            return r0
    }
}
