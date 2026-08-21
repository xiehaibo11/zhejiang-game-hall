package com.bykv.vk.openvk;

public final class TTVfSdk {
    public static final java.lang.String INITIALIZER_CLASS_NAME = "com.bykv.vk.openvk.core.AdSdkInitializerHolder";
    private static final com.bykv.vk.openvk.TTInitializer rg = null;


    public interface InitCallback {
        void fail(int r1, java.lang.String r2);

        void success();
    }

    static {
            com.bykv.vk.openvk.api.plugin.fw r0 = new com.bykv.vk.openvk.api.plugin.fw
            r0.<init>()
            com.bykv.vk.openvk.TTVfSdk.rg = r0
            return
    }

    public TTVfSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void getCodeGroupRit(long r2, com.bykv.vk.openvk.TTCodeGroupRit.TTCodeGroupRitListener r4) {
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            if (r0 == 0) goto L11
            com.bykv.vk.openvk.TTVfManager r0 = r0.getAdManager()
            com.bykv.vk.openvk.TTVfSdk$1 r1 = new com.bykv.vk.openvk.TTVfSdk$1
            r1.<init>(r2, r4)
            r0.register(r1)
            goto L1a
        L11:
            if (r4 == 0) goto L1a
            r2 = 4100(0x1004, float:5.745E-42)
            java.lang.String r3 = "please init sdk first!"
            r4.onFail(r2, r3)
        L1a:
            return
    }

    public static com.bykv.vk.openvk.TTVfManager getVfManager() {
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            if (r0 == 0) goto L9
            com.bykv.vk.openvk.TTVfManager r0 = r0.getAdManager()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public static void init(android.content.Context r1, com.bykv.vk.openvk.TTVfConfig r2, com.bykv.vk.openvk.TTVfSdk.InitCallback r3) {
            rg(r1, r2)
            android.content.Context r1 = r1.getApplicationContext()
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            if (r0 != 0) goto L13
            r1 = 4100(0x1004, float:5.745E-42)
            java.lang.String r2 = "Load initializer failed"
            r3.fail(r1, r2)
            goto L16
        L13:
            r0.init(r1, r2, r3)
        L16:
            return
    }

    public static boolean isInitSuccess() {
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            if (r0 == 0) goto L9
            boolean r0 = r0.isInitSuccess()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public static boolean isOnePointFiveAdType(com.bykv.vk.openvk.TTNtExpressObject r2) {
            java.lang.String r0 = "_tt_ad_type_onepointfive"
            if (r2 != 0) goto L6
            r2 = 0
            goto La
        L6:
            java.util.Map r2 = r2.getMediaExtraInfo()     // Catch: java.lang.Throwable -> L1d
        La:
            if (r2 == 0) goto L21
            boolean r1 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L1d
            if (r1 == 0) goto L21
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Throwable -> L1d
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Throwable -> L1d
            return r2
        L1d:
            r2 = move-exception
            r2.printStackTrace()
        L21:
            r2 = 0
            return r2
    }

    private static void rg(android.content.Context r2, com.bykv.vk.openvk.TTVfConfig r3) {
            if (r3 == 0) goto Lb
            boolean r0 = r3.isDebug()
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.api.rg.rg()
        Lb:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 == r1) goto L1a
            java.lang.String r0 = "Wrong Thread ! Please exec TTAdSdk.init in main thread."
            com.bykv.vk.openvk.api.rg.rg(r0)
        L1a:
            java.lang.String r0 = "Context is null, please check."
            rg(r2, r0)
            java.lang.String r0 = "TTAdConfig is null, please check."
            rg(r3, r0)
            com.bykv.vk.openvk.TTAppContextHolder.setContext(r2)
            updateConfigAuth(r3)
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.lang.Long r2 = java.lang.Long.valueOf(r0)
            java.lang.String r0 = "_pangle_init_start_time"
            r3.setExtra(r0, r2)
            java.lang.String r2 = "_s_c"
            java.lang.String r0 = "oppo"
            r3.setExtra(r2, r0)
            r2 = 1
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r0 = "_l_s"
            r3.setExtra(r0, r2)
            r2 = 999(0x3e7, float:1.4E-42)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "_ext_api_code"
            r3.setExtra(r0, r2)
            return
    }

    private static void rg(java.lang.Object r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static void updateAdConfig(com.bykv.vk.openvk.TTVfConfig r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            com.bykv.vk.openvk.TTVfManager r0 = r0.getAdManager()
            if (r0 != 0) goto Lc
            return
        Lc:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = r4.getData()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L24
            java.lang.String r2 = r4.getData()
            java.lang.String r3 = "extra_data"
            r1.putString(r3, r2)
        L24:
            java.lang.String r2 = r4.getKeywords()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L37
            java.lang.String r4 = r4.getKeywords()
            java.lang.String r2 = "keywords"
            r1.putString(r2, r4)
        L37:
            java.util.Set r4 = r1.keySet()
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L46
            java.lang.Class<com.bykv.vk.openvk.AdConfig> r4 = com.bykv.vk.openvk.AdConfig.class
            r0.getExtra(r4, r1)
        L46:
            return
    }

    public static void updateConfigAuth(com.bykv.vk.openvk.TTVfConfig r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.bykv.vk.openvk.live.df r0 = com.bykv.vk.openvk.live.df.rg()
            if (r0 == 0) goto L10
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1 = r1.getInjectionAuth()
            r0.rg(r1)
        L10:
            return
    }

    public static void updatePaid(boolean r3) {
            com.bykv.vk.openvk.TTInitializer r0 = com.bykv.vk.openvk.TTVfSdk.rg
            com.bykv.vk.openvk.TTVfManager r0 = r0.getAdManager()
            if (r0 != 0) goto L9
            return
        L9:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "is_paid"
            r1.putBoolean(r2, r3)
            java.util.Set r3 = r1.keySet()
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L22
            java.lang.Class<com.bykv.vk.openvk.AdConfig> r3 = com.bykv.vk.openvk.AdConfig.class
            r0.getExtra(r3, r1)
        L22:
            return
    }
}
