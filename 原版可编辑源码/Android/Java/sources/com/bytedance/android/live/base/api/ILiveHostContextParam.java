package com.bytedance.android.live.base.api;

import android.app.Application;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import com.bytedance.android.live.saas.middleware.alog.ALogConfig;
import com.bytedance.android.live.saas.middleware.applog.AppLogConfig;
import com.bytedance.android.livehostapi.platform.IHostTokenInjectionAuth;
import java.lang.reflect.Field;
import java.util.Map;

public interface ILiveHostContextParam {

    public interface IHostActivityProvider {
        Class<?> getHostActivity(int i);
    }

    public interface IUserIdGetter {
        String getUserId();
    }

    ALogConfig getALogConfig();

    int getAid();

    int getAppIcon();

    AppLogConfig getAppLogConfig();

    String getAppName();

    String getCJAppId();

    String getCJMerchantId();

    String getChannel();

    String getClientKey();

    Application getContext();

    boolean getDebug();

    String getECHostAppId();

    Map<String, String> getFEParamsExtra();

    String getGeneralAppId();

    ILiveHostActionParam getHostAction();

    Class<?> getHostActivity(int i);

    IHostPermission getHostPermission();

    ILiveHostWebViewParam getHostWebViewParam();

    String getNativeLibraryDir();

    String getPartner();

    PartnerExtra getPartnerExtra();

    String getPartnerSecret();

    String getTtSDKAppId();

    String getTtSDKCertAssetsPath();

    String getVersion();

    int getVersionCode();

    IHostTokenInjectionAuth injectAccount();

    boolean isBoe();

    boolean isNeedInitNetwork();

    MethodChannelService provideMethodChannel();

    IUserIdGetter provideUserIdGetter();

    Builder toBuilder();

    public static class Builder {
        private ALogConfig aLogConfig;
        private IHostActivityProvider activityProvider;
        private int aid;
        private int appIcon;
        private AppLogConfig appLogConfig;
        private String appName;
        private String channel;
        private Application context;
        private String generalAppId;
        private ILiveHostActionParam hostActionParam;
        private boolean isBoe;
        private boolean isDebug;
        private MethodChannelService methodChannelService;
        private String partner;
        private String partnerSecret;
        private String ttSDKAppId;
        private String ttSDKCertAssetsPath;
        private String version;
        private int versionCode;
        private String cjAppId = "";
        private String cjMerchantId = "";
        private String nativeLibraryDir = "";
        private PartnerExtra partnerExtra = null;
        private Map<String, String> feParamsExtra = null;
        private String ecHostAppId = null;
        private String clientKey = "";
        private boolean needInitNetwork = true;
        private ILiveHostWebViewParam hostWebViewParam = new DefaultHostWebViewParam();
        private IHostTokenInjectionAuth injectionAuth = null;
        private IUserIdGetter userIdGetter = new IUserIdGetter() {
            @Override
            public String getUserId() {
                return "";
            }
        };
        private IHostPermission hostPermission = new DefaultHostPermission();

        public Builder setAid(int i) {
            this.aid = i;
            return this;
        }

        public Builder setAppName(String str) {
            this.appName = str;
            return this;
        }

        public Builder setVersion(String str) {
            this.version = str;
            return this;
        }

        public Builder setClientKey(String str) {
            this.clientKey = str;
            return this;
        }

        public Builder setPartner(String str) {
            this.partner = str;
            return this;
        }

        public Builder setPartnerSecret(String str) {
            this.partnerSecret = str;
            return this;
        }

        public Builder setVersionCode(int i) {
            this.versionCode = i;
            return this;
        }

        public Builder setChannel(String str) {
            this.channel = str;
            return this;
        }

        public Builder setContext(Application application) {
            this.context = application;
            return this;
        }

        public Builder setAppIcon(int i) {
            this.appIcon = i;
            return this;
        }

        public Builder setIsDebug(boolean z) {
            this.isDebug = z;
            return this;
        }

        public Builder setIsBoe(boolean z) {
            this.isBoe = z;
            return this;
        }

        public Builder setGeneralAppId(String str) {
            this.generalAppId = str;
            return this;
        }

        public Builder setTtSDKAppId(String str) {
            this.ttSDKAppId = str;
            return this;
        }

        public Builder setTtSDKCertAssetsPath(String str) {
            this.ttSDKCertAssetsPath = str;
            return this;
        }

        public Builder setCjAppId(String str) {
            this.cjAppId = str;
            return this;
        }

        public Builder setCjMerchantId(String str) {
            this.cjMerchantId = str;
            return this;
        }

        public Builder setNativeLibraryDir(String str) {
            this.nativeLibraryDir = str;
            return this;
        }

        public Builder setInjectionAuth(IHostTokenInjectionAuth iHostTokenInjectionAuth) {
            this.injectionAuth = iHostTokenInjectionAuth;
            return this;
        }

        public Builder setActivityProvider(IHostActivityProvider iHostActivityProvider) {
            this.activityProvider = iHostActivityProvider;
            return this;
        }

        public Builder setHostActionParam(ILiveHostActionParam iLiveHostActionParam) {
            this.hostActionParam = iLiveHostActionParam;
            return this;
        }

        public Builder setHostWebViewParam(ILiveHostWebViewParam iLiveHostWebViewParam) {
            this.hostWebViewParam = iLiveHostWebViewParam;
            return this;
        }

        public Builder setUserIdGetter(IUserIdGetter iUserIdGetter) {
            this.userIdGetter = iUserIdGetter;
            return this;
        }

        public Builder setALogConfig(ALogConfig aLogConfig) {
            this.aLogConfig = aLogConfig;
            return this;
        }

        public Builder setAppLogConfig(AppLogConfig appLogConfig) {
            this.appLogConfig = appLogConfig;
            return this;
        }

        public Builder setIsNeedInitNetwork(boolean z) {
            this.needInitNetwork = z;
            return this;
        }

        public Builder setPartnerExtra(PartnerExtra partnerExtra) {
            this.partnerExtra = partnerExtra;
            return this;
        }

        public Builder setFeParamsExtra(Map<String, String> map) {
            this.feParamsExtra = map;
            return this;
        }

        public Builder setECHostAppId(String str) {
            this.ecHostAppId = str;
            return this;
        }

        public Builder provideMethodChannel(MethodChannelService methodChannelService) {
            this.methodChannelService = methodChannelService;
            return this;
        }

        public Builder setHostPermission(IHostPermission iHostPermission) {
            if (iHostPermission != null) {
                this.hostPermission = iHostPermission;
            }
            return this;
        }

        public ILiveHostContextParam build() {
            if (this.partner == null || this.partnerSecret == null) {
                throw new IllegalArgumentException("partner & partnerSecret is required");
            }
            return new ILiveHostContextParam() {
                @Override
                public Builder toBuilder() {
                    try {
                        return Builder.this.copy(this);
                    } catch (Exception unused) {
                        return this;
                    }
                }

                @Override
                public MethodChannelService provideMethodChannel() {
                    return Builder.this.methodChannelService;
                }

                @Override
                public int getAid() {
                    return Builder.this.aid;
                }

                @Override
                public String getAppName() {
                    if (Builder.this.appName == null) {
                        Builder builder = Builder.this;
                        PackageInfo packageInfo = builder.getPackageInfo(builder.context);
                        if (packageInfo != null && packageInfo.applicationInfo != null) {
                            return packageInfo.applicationInfo.name;
                        }
                    }
                    return Builder.this.appName;
                }

                @Override
                public String getChannel() {
                    return Builder.this.channel;
                }

                @Override
                public Application getContext() {
                    return Builder.this.context;
                }

                @Override
                public String getVersion() {
                    if (Builder.this.version != null) {
                        return Builder.this.version;
                    }
                    Builder builder = Builder.this;
                    PackageInfo packageInfo = builder.getPackageInfo(builder.context);
                    return (packageInfo == null || packageInfo.versionName == null) ? "1.0.0-default" : packageInfo.versionName;
                }

                @Override
                public int getVersionCode() {
                    if (Builder.this.versionCode != 0) {
                        return Builder.this.versionCode;
                    }
                    Builder builder = Builder.this;
                    PackageInfo packageInfo = builder.getPackageInfo(builder.context);
                    if (packageInfo != null) {
                        return packageInfo.versionCode;
                    }
                    return 1;
                }

                @Override
                public IHostTokenInjectionAuth injectAccount() {
                    return Builder.this.injectionAuth;
                }

                @Override
                public int getAppIcon() {
                    if (Builder.this.appIcon == 0) {
                        Builder builder = Builder.this;
                        PackageInfo packageInfo = builder.getPackageInfo(builder.context);
                        if (packageInfo != null && packageInfo.applicationInfo != null) {
                            return packageInfo.applicationInfo.icon;
                        }
                    }
                    return Builder.this.appIcon;
                }

                @Override
                public boolean getDebug() {
                    return Builder.this.isDebug;
                }

                @Override
                public boolean isBoe() {
                    return Builder.this.isBoe;
                }

                @Override
                public String getGeneralAppId() {
                    return Builder.this.generalAppId;
                }

                @Override
                public String getTtSDKAppId() {
                    return Builder.this.ttSDKAppId;
                }

                @Override
                public String getTtSDKCertAssetsPath() {
                    return Builder.this.ttSDKCertAssetsPath;
                }

                @Override
                public ILiveHostActionParam getHostAction() {
                    return Builder.this.hostActionParam;
                }

                @Override
                public ILiveHostWebViewParam getHostWebViewParam() {
                    return Builder.this.hostWebViewParam;
                }

                @Override
                public String getCJAppId() {
                    return Builder.this.cjAppId;
                }

                @Override
                public String getCJMerchantId() {
                    return Builder.this.cjMerchantId;
                }

                @Override
                public String getNativeLibraryDir() {
                    return Builder.this.nativeLibraryDir;
                }

                @Override
                public Class<?> getHostActivity(int i) {
                    return Builder.this.activityProvider.getHostActivity(i);
                }

                @Override
                public IUserIdGetter provideUserIdGetter() {
                    return Builder.this.userIdGetter;
                }

                @Override
                public ALogConfig getALogConfig() {
                    return Builder.this.aLogConfig;
                }

                @Override
                public AppLogConfig getAppLogConfig() {
                    return Builder.this.appLogConfig;
                }

                @Override
                public String getPartner() {
                    return Builder.this.partner;
                }

                @Override
                public String getPartnerSecret() {
                    return Builder.this.partnerSecret;
                }

                @Override
                public PartnerExtra getPartnerExtra() {
                    return Builder.this.partnerExtra;
                }

                @Override
                public Map<String, String> getFEParamsExtra() {
                    return Builder.this.feParamsExtra;
                }

                @Override
                public String getECHostAppId() {
                    return Builder.this.ecHostAppId;
                }

                @Override
                public String getClientKey() {
                    return Builder.this.clientKey;
                }

                @Override
                public boolean isNeedInitNetwork() {
                    return Builder.this.needInitNetwork;
                }

                @Override
                public IHostPermission getHostPermission() {
                    return Builder.this.hostPermission;
                }
            };
        }

        private Builder copy(Builder builder) throws IllegalAccessException {
            Builder builder2 = new Builder();
            for (Field field : Builder.class.getDeclaredFields()) {
                boolean zIsAccessible = field.isAccessible();
                if (!zIsAccessible) {
                    field.setAccessible(true);
                }
                field.set(builder2, field.get(builder));
                field.setAccessible(zIsAccessible);
            }
            return builder2;
        }

        private PackageInfo getPackageInfo(Application application) {
            try {
                return application.getPackageManager().getPackageInfo(application.getPackageName(), 0);
            } catch (PackageManager.NameNotFoundException e) {
                e.printStackTrace();
                return null;
            }
        }
    }
}
