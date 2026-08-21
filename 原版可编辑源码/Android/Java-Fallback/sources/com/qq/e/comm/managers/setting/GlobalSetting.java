package com.qq.e.comm.managers.setting;

public final class GlobalSetting {
    public static final java.lang.String ADMOB_SDK_WRAPPER = "ADMOB";
    public static final java.lang.String AGREE_PRIVACY_KEY = "agree_privacy";
    public static final java.lang.String AGREE_READ_AAID = "allow_read_aaid";
    public static final java.lang.String APPLOVIN_SDK_WRAPPER = "APPLOVIN";
    public static final java.lang.String BD_SDK_WRAPPER = "BD";
    public static final java.lang.String CCPA = "ccpa";
    public static final java.lang.String COPPA = "coppa";
    public static final java.lang.String FACEBOOK_SDK_WRAPPER = "FACEBOOK";
    public static final java.lang.String GDPR = "gdpr";
    public static final java.lang.String KS_SDK_WRAPPER = "KS";
    public static final java.lang.String OVERSEA_PRIVACY_INFO = "oversea_privacy_info";
    public static final java.lang.String PAG_SDK_WRAPPER = "PAG";
    public static final java.lang.String TT_SDK_WRAPPER = "TT";
    private static volatile java.lang.Integer a = null;
    private static volatile boolean b = false;
    private static volatile boolean c = true;
    private static volatile java.lang.Integer d;
    private static volatile java.lang.Boolean e;
    private static volatile java.lang.Boolean f;
    private static volatile java.lang.Boolean g;
    private static volatile java.util.Map<java.lang.String, java.lang.String> h;
    private static volatile java.util.Map<java.lang.String, java.lang.String> i;
    private static final java.util.Map<java.lang.String, java.lang.String> j = null;
    private static final org.json.JSONObject k = null;
    private static volatile java.lang.String l;
    private static volatile java.lang.String m;
    private static volatile java.lang.String n;
    private static volatile java.lang.String o;
    private static volatile java.lang.String p;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qq.e.comm.managers.setting.GlobalSetting.h = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qq.e.comm.managers.setting.GlobalSetting.i = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qq.e.comm.managers.setting.GlobalSetting.j = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.qq.e.comm.managers.setting.GlobalSetting.k = r0
            r0 = 0
            com.qq.e.comm.managers.setting.GlobalSetting.l = r0
            com.qq.e.comm.managers.setting.GlobalSetting.m = r0
            com.qq.e.comm.managers.setting.GlobalSetting.n = r0
            com.qq.e.comm.managers.setting.GlobalSetting.o = r0
            com.qq.e.comm.managers.setting.GlobalSetting.p = r0
            return
    }

    public GlobalSetting() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Boolean getAgreeReadAndroidId() {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.g
            return r0
    }

    public static java.lang.Boolean getAgreeReadDeviceId() {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.f
            return r0
    }

    public static java.lang.Integer getChannel() {
            java.lang.Integer r0 = com.qq.e.comm.managers.setting.GlobalSetting.a
            return r0
    }

    public static java.lang.String getCustomADActivityClassName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.l
            return r0
    }

    public static java.lang.String getCustomLandscapeActivityClassName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.o
            return r0
    }

    public static java.lang.String getCustomPortraitActivityClassName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.m
            return r0
    }

    public static java.lang.String getCustomRewardvideoLandscapeActivityClassName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.p
            return r0
    }

    public static java.lang.String getCustomRewardvideoPortraitActivityClassName() {
            java.lang.String r0 = com.qq.e.comm.managers.setting.GlobalSetting.n
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getExtraUserData() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.qq.e.comm.managers.setting.GlobalSetting.h
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            return r0
    }

    public static java.lang.Integer getPersonalizedState() {
            java.lang.Integer r0 = com.qq.e.comm.managers.setting.GlobalSetting.d
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getPreloadAdapterMaps() {
            java.util.Map<java.lang.String, java.lang.String> r0 = com.qq.e.comm.managers.setting.GlobalSetting.j
            return r0
    }

    public static org.json.JSONObject getSettings() {
            org.json.JSONObject r0 = com.qq.e.comm.managers.setting.GlobalSetting.k
            return r0
    }

    public static boolean isAgreePrivacyStrategy() {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.e
            if (r0 == 0) goto Lf
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.e
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static boolean isAgreeReadAndroidId() {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.g
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.g
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean isAgreeReadDeviceId() {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.f
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.f
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static boolean isEnableMediationTool() {
            boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.b
            return r0
    }

    public static boolean isEnableVideoDownloadingCache() {
            boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.c
            return r0
    }

    public static void setAgreePrivacyStrategy(boolean r1) {
            java.lang.Boolean r0 = com.qq.e.comm.managers.setting.GlobalSetting.e
            if (r0 != 0) goto La
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            com.qq.e.comm.managers.setting.GlobalSetting.e = r1
        La:
            return
    }

    @java.lang.Deprecated
    public static void setAgreeReadAndroidId(boolean r0) {
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.qq.e.comm.managers.setting.GlobalSetting.g = r0
            return
    }

    @java.lang.Deprecated
    public static void setAgreeReadDeviceId(boolean r0) {
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.qq.e.comm.managers.setting.GlobalSetting.f = r0
            return
    }

    public static void setAgreeReadPrivacyInfo(java.util.Map<java.lang.String, java.lang.Boolean> r3) {
            if (r3 == 0) goto L2f
            int r0 = r3.size()
            if (r0 != 0) goto L9
            goto L2f
        L9:
            org.json.JSONObject r0 = com.qq.e.comm.managers.setting.GlobalSetting.k     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "agree_privacy"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L16
            r2.<init>(r3)     // Catch: java.lang.Exception -> L16
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L16
            goto L2f
        L16:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setAgreeReadPrivacyInfo错误："
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.qq.e.comm.util.GDTLogger.e(r3)
        L2f:
            return
    }

    public static void setChannel(int r1) {
            java.lang.Integer r0 = com.qq.e.comm.managers.setting.GlobalSetting.a
            if (r0 != 0) goto La
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            com.qq.e.comm.managers.setting.GlobalSetting.a = r1
        La:
            return
    }

    public static void setCustomADActivityClassName(java.lang.String r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.l = r0
            return
    }

    public static void setCustomLandscapeActivityClassName(java.lang.String r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.o = r0
            return
    }

    public static void setCustomPortraitActivityClassName(java.lang.String r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.m = r0
            return
    }

    public static void setCustomRewardvideoLandscapeActivityClassName(java.lang.String r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.p = r0
            return
    }

    public static void setCustomRewardvideoPortraitActivityClassName(java.lang.String r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.n = r0
            return
    }

    public static void setEnableCollectAppInstallStatus(boolean r2) {
            org.json.JSONObject r0 = com.qq.e.comm.managers.setting.GlobalSetting.k     // Catch: org.json.JSONException -> Lb
            java.lang.String r1 = "ecais"
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: org.json.JSONException -> Lb
            r0.putOpt(r1, r2)     // Catch: org.json.JSONException -> Lb
        Lb:
            return
    }

    public static void setEnableMediationTool(boolean r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.b = r0
            return
    }

    public static void setEnableVideoDownloadingCache(boolean r0) {
            com.qq.e.comm.managers.setting.GlobalSetting.c = r0
            return
    }

    public static void setExtraUserData(java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Set r0 = r3.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L2f
            java.lang.Object r1 = r1.getValue()
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lb
        L2f:
            java.lang.String r3 = "参数key和value不能为空！"
            com.qq.e.comm.util.GDTLogger.e(r3)
            return
        L35:
            com.qq.e.comm.managers.setting.GlobalSetting.h = r3
            return
    }

    public static void setMediaExtData(java.util.Map<java.lang.String, java.lang.String> r2, boolean r3) {
            if (r2 != 0) goto L3
            return
        L3:
            if (r3 == 0) goto Lc
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            com.qq.e.comm.managers.setting.GlobalSetting.i = r3
        Lc:
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L14:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L46
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r0 = r3.getKey()
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            java.lang.Object r0 = r3.getValue()
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L14
            java.util.Map<java.lang.String, java.lang.String> r0 = com.qq.e.comm.managers.setting.GlobalSetting.i
            java.lang.Object r1 = r3.getKey()
            java.lang.Object r3 = r3.getValue()
            r0.put(r1, r3)
            goto L14
        L46:
            org.json.JSONObject r2 = com.qq.e.comm.managers.setting.GlobalSetting.k     // Catch: org.json.JSONException -> L55
            java.lang.String r3 = "media_ext"
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L55
            java.util.Map<java.lang.String, java.lang.String> r1 = com.qq.e.comm.managers.setting.GlobalSetting.i     // Catch: org.json.JSONException -> L55
            r0.<init>(r1)     // Catch: org.json.JSONException -> L55
            r2.putOpt(r3, r0)     // Catch: org.json.JSONException -> L55
            goto L5a
        L55:
            java.lang.String r2 = "setMediaExtData失败，请检查"
            com.qq.e.comm.util.GDTLogger.e(r2)
        L5a:
            return
    }

    public static void setPersonalizedState(int r0) {
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.qq.e.comm.managers.setting.GlobalSetting.d = r0
            return
    }

    public static void setPreloadAdapters(java.util.Map<java.lang.String, java.lang.String> r1) {
            if (r1 != 0) goto L3
            return
        L3:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.qq.e.comm.managers.setting.GlobalSetting.j
            r0.putAll(r1)
            return
    }
}
