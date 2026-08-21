package com.bytedance.android.live.base.api;

public interface ILiveHostContextParam {

    public static class Builder {
        private com.bytedance.android.live.saas.middleware.alog.ALogConfig aLogConfig;
        private com.bytedance.android.live.base.api.ILiveHostContextParam.IHostActivityProvider activityProvider;
        private int aid;
        private int appIcon;
        private com.bytedance.android.live.saas.middleware.applog.AppLogConfig appLogConfig;
        private java.lang.String appName;
        private java.lang.String channel;
        private java.lang.String cjAppId;
        private java.lang.String cjMerchantId;
        private java.lang.String clientKey;
        private android.app.Application context;
        private java.lang.String ecHostAppId;
        private java.util.Map<java.lang.String, java.lang.String> feParamsExtra;
        private java.lang.String generalAppId;
        private com.bytedance.android.live.base.api.ILiveHostActionParam hostActionParam;
        private com.bytedance.android.live.base.api.IHostPermission hostPermission;
        private com.bytedance.android.live.base.api.ILiveHostWebViewParam hostWebViewParam;
        private com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth injectionAuth;
        private boolean isBoe;
        private boolean isDebug;
        private com.bytedance.android.live.base.api.MethodChannelService methodChannelService;
        private java.lang.String nativeLibraryDir;
        private boolean needInitNetwork;
        private java.lang.String partner;
        private com.bytedance.android.live.base.api.PartnerExtra partnerExtra;
        private java.lang.String partnerSecret;
        private java.lang.String ttSDKAppId;
        private java.lang.String ttSDKCertAssetsPath;
        private com.bytedance.android.live.base.api.ILiveHostContextParam.IUserIdGetter userIdGetter;
        private java.lang.String version;
        private int versionCode;



        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.cjAppId = r0
                r2.cjMerchantId = r0
                r2.nativeLibraryDir = r0
                r1 = 0
                r2.partnerExtra = r1
                r2.feParamsExtra = r1
                r2.ecHostAppId = r1
                r2.clientKey = r0
                r0 = 1
                r2.needInitNetwork = r0
                com.bytedance.android.live.base.api.DefaultHostWebViewParam r0 = new com.bytedance.android.live.base.api.DefaultHostWebViewParam
                r0.<init>()
                r2.hostWebViewParam = r0
                r2.injectionAuth = r1
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder$1 r0 = new com.bytedance.android.live.base.api.ILiveHostContextParam$Builder$1
                r0.<init>(r2)
                r2.userIdGetter = r0
                com.bytedance.android.live.base.api.DefaultHostPermission r0 = new com.bytedance.android.live.base.api.DefaultHostPermission
                r0.<init>()
                r2.hostPermission = r0
                return
        }

        static com.bytedance.android.live.base.api.ILiveHostContextParam.Builder access$000(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r1) {
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = r0.copy(r1)
                return r0
        }

        static com.bytedance.android.live.base.api.MethodChannelService access$100(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.MethodChannelService r0 = r0.methodChannelService
                return r0
        }

        static int access$1000(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                int r0 = r0.appIcon
                return r0
        }

        static boolean access$1100(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                boolean r0 = r0.isDebug
                return r0
        }

        static boolean access$1200(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                boolean r0 = r0.isBoe
                return r0
        }

        static java.lang.String access$1300(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.generalAppId
                return r0
        }

        static java.lang.String access$1400(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.ttSDKAppId
                return r0
        }

        static java.lang.String access$1500(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.ttSDKCertAssetsPath
                return r0
        }

        static com.bytedance.android.live.base.api.ILiveHostActionParam access$1600(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.ILiveHostActionParam r0 = r0.hostActionParam
                return r0
        }

        static com.bytedance.android.live.base.api.ILiveHostWebViewParam access$1700(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.ILiveHostWebViewParam r0 = r0.hostWebViewParam
                return r0
        }

        static java.lang.String access$1800(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.cjAppId
                return r0
        }

        static java.lang.String access$1900(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.cjMerchantId
                return r0
        }

        static int access$200(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                int r0 = r0.aid
                return r0
        }

        static java.lang.String access$2000(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.nativeLibraryDir
                return r0
        }

        static com.bytedance.android.live.base.api.ILiveHostContextParam.IHostActivityProvider access$2100(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.ILiveHostContextParam$IHostActivityProvider r0 = r0.activityProvider
                return r0
        }

        static com.bytedance.android.live.base.api.ILiveHostContextParam.IUserIdGetter access$2200(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.ILiveHostContextParam$IUserIdGetter r0 = r0.userIdGetter
                return r0
        }

        static com.bytedance.android.live.saas.middleware.alog.ALogConfig access$2300(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.saas.middleware.alog.ALogConfig r0 = r0.aLogConfig
                return r0
        }

        static com.bytedance.android.live.saas.middleware.applog.AppLogConfig access$2400(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.saas.middleware.applog.AppLogConfig r0 = r0.appLogConfig
                return r0
        }

        static java.lang.String access$2500(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.partner
                return r0
        }

        static java.lang.String access$2600(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.partnerSecret
                return r0
        }

        static com.bytedance.android.live.base.api.PartnerExtra access$2700(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.PartnerExtra r0 = r0.partnerExtra
                return r0
        }

        static java.util.Map access$2800(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.util.Map<java.lang.String, java.lang.String> r0 = r0.feParamsExtra
                return r0
        }

        static java.lang.String access$2900(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.ecHostAppId
                return r0
        }

        static java.lang.String access$300(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.appName
                return r0
        }

        static java.lang.String access$3000(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.clientKey
                return r0
        }

        static boolean access$3100(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                boolean r0 = r0.needInitNetwork
                return r0
        }

        static com.bytedance.android.live.base.api.IHostPermission access$3200(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.live.base.api.IHostPermission r0 = r0.hostPermission
                return r0
        }

        static android.app.Application access$400(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                android.app.Application r0 = r0.context
                return r0
        }

        static android.content.pm.PackageInfo access$500(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0, android.app.Application r1) {
                android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1)
                return r0
        }

        static java.lang.String access$600(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.channel
                return r0
        }

        static java.lang.String access$700(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                java.lang.String r0 = r0.version
                return r0
        }

        static int access$800(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                int r0 = r0.versionCode
                return r0
        }

        static com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth access$900(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r0) {
                com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth r0 = r0.injectionAuth
                return r0
        }

        private com.bytedance.android.live.base.api.ILiveHostContextParam.Builder copy(com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r8) {
                r7 = this;
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r0 = new com.bytedance.android.live.base.api.ILiveHostContextParam$Builder
                r0.<init>()
                java.lang.Class<com.bytedance.android.live.base.api.ILiveHostContextParam$Builder> r1 = com.bytedance.android.live.base.api.ILiveHostContextParam.Builder.class
                java.lang.reflect.Field[] r1 = r1.getDeclaredFields()
                int r2 = r1.length
                r3 = 0
            Ld:
                if (r3 >= r2) goto L28
                r4 = r1[r3]
                boolean r5 = r4.isAccessible()
                if (r5 != 0) goto L1b
                r6 = 1
                r4.setAccessible(r6)
            L1b:
                java.lang.Object r6 = r4.get(r8)
                r4.set(r0, r6)
                r4.setAccessible(r5)
                int r3 = r3 + 1
                goto Ld
            L28:
                return r0
        }

        private android.content.pm.PackageInfo getPackageInfo(android.app.Application r3) {
                r2 = this;
                android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
                java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
                r1 = 0
                android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
                return r3
            Le:
                r3 = move-exception
                r3.printStackTrace()
                r3 = 0
                return r3
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam build() {
                r2 = this;
                java.lang.String r0 = r2.partner
                if (r0 == 0) goto Le
                java.lang.String r0 = r2.partnerSecret
                if (r0 == 0) goto Le
                com.bytedance.android.live.base.api.ILiveHostContextParam$Builder$2 r0 = new com.bytedance.android.live.base.api.ILiveHostContextParam$Builder$2
                r0.<init>(r2, r2)
                return r0
            Le:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "partner & partnerSecret is required"
                r0.<init>(r1)
                throw r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder provideMethodChannel(com.bytedance.android.live.base.api.MethodChannelService r1) {
                r0 = this;
                r0.methodChannelService = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setALogConfig(com.bytedance.android.live.saas.middleware.alog.ALogConfig r1) {
                r0 = this;
                r0.aLogConfig = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setActivityProvider(com.bytedance.android.live.base.api.ILiveHostContextParam.IHostActivityProvider r1) {
                r0 = this;
                r0.activityProvider = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setAid(int r1) {
                r0 = this;
                r0.aid = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setAppIcon(int r1) {
                r0 = this;
                r0.appIcon = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setAppLogConfig(com.bytedance.android.live.saas.middleware.applog.AppLogConfig r1) {
                r0 = this;
                r0.appLogConfig = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setAppName(java.lang.String r1) {
                r0 = this;
                r0.appName = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setChannel(java.lang.String r1) {
                r0 = this;
                r0.channel = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setCjAppId(java.lang.String r1) {
                r0 = this;
                r0.cjAppId = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setCjMerchantId(java.lang.String r1) {
                r0 = this;
                r0.cjMerchantId = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setClientKey(java.lang.String r1) {
                r0 = this;
                r0.clientKey = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setContext(android.app.Application r1) {
                r0 = this;
                r0.context = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setECHostAppId(java.lang.String r1) {
                r0 = this;
                r0.ecHostAppId = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setFeParamsExtra(java.util.Map<java.lang.String, java.lang.String> r1) {
                r0 = this;
                r0.feParamsExtra = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setGeneralAppId(java.lang.String r1) {
                r0 = this;
                r0.generalAppId = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setHostActionParam(com.bytedance.android.live.base.api.ILiveHostActionParam r1) {
                r0 = this;
                r0.hostActionParam = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setHostPermission(com.bytedance.android.live.base.api.IHostPermission r1) {
                r0 = this;
                if (r1 == 0) goto L4
                r0.hostPermission = r1
            L4:
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setHostWebViewParam(com.bytedance.android.live.base.api.ILiveHostWebViewParam r1) {
                r0 = this;
                r0.hostWebViewParam = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setInjectionAuth(com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth r1) {
                r0 = this;
                r0.injectionAuth = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setIsBoe(boolean r1) {
                r0 = this;
                r0.isBoe = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setIsDebug(boolean r1) {
                r0 = this;
                r0.isDebug = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setIsNeedInitNetwork(boolean r1) {
                r0 = this;
                r0.needInitNetwork = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setNativeLibraryDir(java.lang.String r1) {
                r0 = this;
                r0.nativeLibraryDir = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setPartner(java.lang.String r1) {
                r0 = this;
                r0.partner = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setPartnerExtra(com.bytedance.android.live.base.api.PartnerExtra r1) {
                r0 = this;
                r0.partnerExtra = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setPartnerSecret(java.lang.String r1) {
                r0 = this;
                r0.partnerSecret = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setTtSDKAppId(java.lang.String r1) {
                r0 = this;
                r0.ttSDKAppId = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setTtSDKCertAssetsPath(java.lang.String r1) {
                r0 = this;
                r0.ttSDKCertAssetsPath = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setUserIdGetter(com.bytedance.android.live.base.api.ILiveHostContextParam.IUserIdGetter r1) {
                r0 = this;
                r0.userIdGetter = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setVersion(java.lang.String r1) {
                r0 = this;
                r0.version = r1
                return r0
        }

        public com.bytedance.android.live.base.api.ILiveHostContextParam.Builder setVersionCode(int r1) {
                r0 = this;
                r0.versionCode = r1
                return r0
        }
    }

    public interface IHostActivityProvider {
        java.lang.Class<?> getHostActivity(int r1);
    }

    public interface IUserIdGetter {
        java.lang.String getUserId();
    }

    com.bytedance.android.live.saas.middleware.alog.ALogConfig getALogConfig();

    int getAid();

    int getAppIcon();

    com.bytedance.android.live.saas.middleware.applog.AppLogConfig getAppLogConfig();

    java.lang.String getAppName();

    java.lang.String getCJAppId();

    java.lang.String getCJMerchantId();

    java.lang.String getChannel();

    java.lang.String getClientKey();

    android.app.Application getContext();

    boolean getDebug();

    java.lang.String getECHostAppId();

    java.util.Map<java.lang.String, java.lang.String> getFEParamsExtra();

    java.lang.String getGeneralAppId();

    com.bytedance.android.live.base.api.ILiveHostActionParam getHostAction();

    java.lang.Class<?> getHostActivity(int r1);

    com.bytedance.android.live.base.api.IHostPermission getHostPermission();

    com.bytedance.android.live.base.api.ILiveHostWebViewParam getHostWebViewParam();

    java.lang.String getNativeLibraryDir();

    java.lang.String getPartner();

    com.bytedance.android.live.base.api.PartnerExtra getPartnerExtra();

    java.lang.String getPartnerSecret();

    java.lang.String getTtSDKAppId();

    java.lang.String getTtSDKCertAssetsPath();

    java.lang.String getVersion();

    int getVersionCode();

    com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth injectAccount();

    boolean isBoe();

    boolean isNeedInitNetwork();

    com.bytedance.android.live.base.api.MethodChannelService provideMethodChannel();

    com.bytedance.android.live.base.api.ILiveHostContextParam.IUserIdGetter provideUserIdGetter();

    com.bytedance.android.live.base.api.ILiveHostContextParam.Builder toBuilder();
}
