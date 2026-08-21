.class public Lcom/bianfeng/toponad/ToponAdInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "ToponAdInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->APPLICATION:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final TOPONAD_CLOSE_BANNER:Ljava/lang/String; = "topon_close_banner_ad"

.field private static final TOPONAD_CLOSE_INTERSTIAL:Ljava/lang/String; = "topon_close_interstitial_ad"

.field private static final TOPONAD_CLOSE_NATIVE:Ljava/lang/String; = "toponad_close_native_ad"

.field private static final TOPONAD_CLOSE_REWARDVIDEO:Ljava/lang/String; = "topon_close_rewardvideo_ad"

.field private static final TOPONAD_LOAD_BANNER:Ljava/lang/String; = "topon_load_banner_ad"

.field private static final TOPONAD_LOAD_INTERSTIAL:Ljava/lang/String; = "topon_load_interstitial_ad"

.field private static final TOPONAD_LOAD_NATIVE:Ljava/lang/String; = "toponad_load_native_ad"

.field private static final TOPONAD_LOAD_REWARDVIDEO:Ljava/lang/String; = "topon_load_rewardvideo_ad"

.field private static final TOPONAD_SHOW_BANNER:Ljava/lang/String; = "topon_show_banner_ad"

.field private static final TOPONAD_SHOW_INTERSTIAL:Ljava/lang/String; = "topon_show_interstitial_ad"

.field private static final TOPONAD_SHOW_NATIVE:Ljava/lang/String; = "toponad_show_native_ad"

.field private static final TOPONAD_SHOW_REWARDVIDEO:Ljava/lang/String; = "topon_show_rewardvideo_ad"

.field private static final TOPON_AD_CLICK_ACTION:I = 0x1d8a8

.field private static final TOPON_AD_CLOSE_ACTION:I = 0x1d8a9

.field private static final TOPON_AD_COMPLETE_ACTION:I = 0x1d8ad

.field private static final TOPON_AD_ChECK_FAIL_ACTION:I = 0x1d8b2

.field private static final TOPON_AD_ERROR_ACTION:I = 0x1d8aa

.field private static final TOPON_AD_LOADED_ACTION:I = 0x1d8af

.field private static final TOPON_AD_LOADING_ACTION:I = 0x1d8b0

.field private static final TOPON_AD_LOAD_API_ACTION:I = 0x1d8b1

.field private static final TOPON_AD_READY_ACTION:I = 0x1d8ac

.field private static final TOPON_AD_SHOW_ACTION:I = 0x1d8ab

.field private static final TOPON_AD_SHOW_API_ACTION:I = 0x1d8b3

.field private static final TOPON_AD_SHOW_FAIL_ACTION:I = 0x1d8b4

.field private static final TOPON_AD_VERIFY_ACTION:I = 0x1d8ae


# instance fields
.field private callback:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

.field private isFirst:Z

.field private isInited:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isInited:Z

    .line 80
    new-instance v0, Lcom/bianfeng/toponad/ToponAdInterface$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/toponad/ToponAdInterface$1;-><init>(Lcom/bianfeng/toponad/ToponAdInterface;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->callback:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    const/4 v0, 0x1

    .line 194
    iput-boolean v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isFirst:Z

    return-void
.end method


# virtual methods
.method public closeBanner()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_close_banner_ad"
    .end annotation

    const-string v0, "\u5173\u95edbanner\u5e7f\u544a"

    .line 261
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 262
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->closeBanner()V

    return-void
.end method

.method public closeInterstial()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_close_interstitial_ad"
    .end annotation

    const-string v0, "\u5173\u95ed\u63d2\u5c4f\u5e7f\u544a"

    .line 243
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 244
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->closeInterstial()V

    return-void
.end method

.method public closeNative()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "toponad_close_native_ad"
    .end annotation

    const-string v0, "\u5173\u95edNative\u5e7f\u544a"

    .line 279
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 280
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->closeBanner()V

    return-void
.end method

.method public closeRewardvideo()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_close_rewardvideo_ad"
    .end annotation

    const-string v0, "\u5173\u95ed\u6fc0\u52b1\u89c6\u9891\u5e7f\u544a"

    .line 225
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 226
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->closeRewardVideoAd()V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "121"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "toponad"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x24

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "6.1.74"

    return-object v0
.end method

.method public initTopon(Landroid/content/Context;)V
    .locals 2

    .line 286
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/toponad/ToponAdInterface$3;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/toponad/ToponAdInterface$3;-><init>(Lcom/bianfeng/toponad/ToponAdInterface;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->setTtCustomController(Lcom/bykv/vk/openvk/TTCustomController;)V

    const-string v0, "TOPON_APP_ID"

    .line 337
    invoke-virtual {p0, v0}, Lcom/bianfeng/toponad/ToponAdInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "TOPON_APP_KEY"

    invoke-virtual {p0, v1}, Lcom/bianfeng/toponad/ToponAdInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/tkay/core/api/TYSDK;->init(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 338
    iput-boolean p1, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isInited:Z

    return-void
.end method

.method public loadBanner(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_load_banner_ad"
    .end annotation

    const-string v0, "\u52a0\u8f7dbanner\u5e7f\u544a"

    .line 249
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 250
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ToponAdInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-object v7, p6

    invoke-static/range {v1 .. v7}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->loadBanner(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public loadInterstial(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_load_interstitial_ad"
    .end annotation

    const-string v0, "\u52a0\u8f7d\u63d2\u5c4f\u5e7f\u544a"

    .line 231
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 232
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ToponAdInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->loadInterstial(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method

.method public loadNative(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "toponad_load_native_ad"
    .end annotation

    const-string v0, "\u52a0\u8f7dNative\u5e7f\u544a"

    .line 267
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 268
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ToponAdInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-object v7, p6

    invoke-static/range {v1 .. v7}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->loadBanner(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public loadRewardvideo(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_load_rewardvideo_ad"
    .end annotation

    .line 213
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u52a0\u8f7d\u6fc0\u52b1\u89c6\u9891\u5e7f\u544a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 214
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ToponAdInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->loadRewardVideoAd(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method

.method public onContextChanged(Landroid/content/Context;)V
    .locals 1

    .line 198
    iget-boolean v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isFirst:Z

    if-eqz v0, :cond_0

    .line 199
    invoke-static {p1}, Lcom/bianfeng/toponad/ResourceHelper;->initResourceR(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 200
    iput-boolean v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isFirst:Z

    .line 203
    :cond_0
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 204
    iget-boolean v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->isInited:Z

    if-nez v0, :cond_1

    .line 205
    invoke-virtual {p0, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->initTopon(Landroid/content/Context;)V

    :cond_1
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 2

    .line 163
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 170
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface;->callback:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    invoke-static {v0}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->setYSDKAdCallBack(Lcom/bianfeng/toponad/ui/TopOnAdCallBack;)V

    const/4 v0, 0x0

    .line 171
    invoke-static {v0}, Lcom/tkay/china/api/TYChinaSDKHandler;->setAllowUseMdidSDK(Z)V

    .line 174
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->getShowDebugLog()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    .line 175
    invoke-static {v0}, Lcom/tkay/core/api/TYSDK;->setNetworkLogDebug(Z)V

    .line 176
    invoke-static {p1}, Lcom/tkay/core/api/TYSDK;->integrationChecking(Landroid/content/Context;)V

    .line 177
    new-instance v0, Lcom/bianfeng/toponad/ToponAdInterface$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/toponad/ToponAdInterface$2;-><init>(Lcom/bianfeng/toponad/ToponAdInterface;)V

    invoke-static {p1, v0}, Lcom/tkay/core/api/TYSDK;->testModeDeviceInfo(Landroid/content/Context;Lcom/tkay/core/api/DeviceInfoCallback;)V

    goto :goto_0

    .line 184
    :cond_0
    invoke-static {v0}, Lcom/tkay/core/api/TYSDK;->setNetworkLogDebug(Z)V

    .line 188
    :goto_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 189
    invoke-virtual {p0, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->initTopon(Landroid/content/Context;)V

    :cond_1
    return-void
.end method

.method public showBanner()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_show_banner_ad"
    .end annotation

    const-string v0, "\u663e\u793abanner\u5e7f\u544a"

    .line 255
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 256
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->showBanner()V

    return-void
.end method

.method public showInterstial()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_show_interstitial_ad"
    .end annotation

    const-string v0, "\u663e\u793a\u63d2\u5c4f\u5e7f\u544a"

    .line 237
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 238
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->showInterstial()V

    return-void
.end method

.method public showNative()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "toponad_show_native_ad"
    .end annotation

    const-string v0, "\u663e\u793aNative\u5e7f\u544a"

    .line 273
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 274
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->showBanner()V

    return-void
.end method

.method public showRewardvideo()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "topon_show_rewardvideo_ad"
    .end annotation

    const-string v0, "\u663e\u793a\u6fc0\u52b1\u89c6\u9891\u5e7f\u544a"

    .line 219
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 220
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->showRewardVideoAd()V

    return-void
.end method
