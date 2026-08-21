.class public interface abstract Lcom/bykv/vk/openvk/AdConfig;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/AdConfig$SdkInfo;
    }
.end annotation


# virtual methods
.method public abstract getAppId()Ljava/lang/String;
.end method

.method public abstract getAppName()Ljava/lang/String;
.end method

.method public abstract getCustomController()Lcom/bykv/vk/openvk/TTCustomController;
.end method

.method public abstract getData()Ljava/lang/String;
.end method

.method public abstract getDirectDownloadNetworkType()[I
.end method

.method public abstract getExtra(Ljava/lang/String;)Ljava/lang/Object;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract getInjectionAuth()Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;
.end method

.method public abstract getKeywords()Ljava/lang/String;
.end method

.method public abstract getNeedClearTaskReset()[Ljava/lang/String;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract getSdkInfo()Lcom/bykv/vk/openvk/AdConfig$SdkInfo;
.end method

.method public abstract getTitleBarTheme()I
.end method

.method public abstract isAllowShowNotify()Z
.end method

.method public abstract isAllowShowPageWhenScreenLock()Z
.end method

.method public abstract isAsyncInit()Z
.end method

.method public abstract isDebug()Z
.end method

.method public abstract isPaid()Z
.end method

.method public abstract isSupportMultiProcess()Z
.end method

.method public abstract isUseTextureView()Z
.end method

.method public abstract removeExtra(Ljava/lang/String;)Ljava/lang/Object;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method

.method public abstract setAgeGroup(I)V
.end method

.method public abstract setExtra(Ljava/lang/String;Ljava/lang/Object;)V
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end method
