.class public interface abstract Lcom/bytedance/android/live/base/api/ILiveHostContextParam;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;,
        Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;,
        Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;
    }
.end annotation


# virtual methods
.method public abstract getALogConfig()Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;
.end method

.method public abstract getAid()I
.end method

.method public abstract getAppIcon()I
.end method

.method public abstract getAppLogConfig()Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;
.end method

.method public abstract getAppName()Ljava/lang/String;
.end method

.method public abstract getCJAppId()Ljava/lang/String;
.end method

.method public abstract getCJMerchantId()Ljava/lang/String;
.end method

.method public abstract getChannel()Ljava/lang/String;
.end method

.method public abstract getClientKey()Ljava/lang/String;
.end method

.method public abstract getContext()Landroid/app/Application;
.end method

.method public abstract getDebug()Z
.end method

.method public abstract getECHostAppId()Ljava/lang/String;
.end method

.method public abstract getFEParamsExtra()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getGeneralAppId()Ljava/lang/String;
.end method

.method public abstract getHostAction()Lcom/bytedance/android/live/base/api/ILiveHostActionParam;
.end method

.method public abstract getHostActivity(I)Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end method

.method public abstract getHostPermission()Lcom/bytedance/android/live/base/api/IHostPermission;
.end method

.method public abstract getHostWebViewParam()Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;
.end method

.method public abstract getNativeLibraryDir()Ljava/lang/String;
.end method

.method public abstract getPartner()Ljava/lang/String;
.end method

.method public abstract getPartnerExtra()Lcom/bytedance/android/live/base/api/PartnerExtra;
.end method

.method public abstract getPartnerSecret()Ljava/lang/String;
.end method

.method public abstract getTtSDKAppId()Ljava/lang/String;
.end method

.method public abstract getTtSDKCertAssetsPath()Ljava/lang/String;
.end method

.method public abstract getVersion()Ljava/lang/String;
.end method

.method public abstract getVersionCode()I
.end method

.method public abstract injectAccount()Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;
.end method

.method public abstract isBoe()Z
.end method

.method public abstract isNeedInitNetwork()Z
.end method

.method public abstract provideMethodChannel()Lcom/bytedance/android/live/base/api/MethodChannelService;
.end method

.method public abstract provideUserIdGetter()Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;
.end method

.method public abstract toBuilder()Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
.end method
