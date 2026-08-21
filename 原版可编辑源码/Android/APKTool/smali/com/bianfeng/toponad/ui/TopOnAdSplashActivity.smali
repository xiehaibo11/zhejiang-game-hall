.class public Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;
.super Landroid/support/v4/app/FragmentActivity;
.source "TopOnAdSplashActivity.java"

# interfaces
.implements Lcom/tkay/splashad/api/TYSplashAdListener;


# instance fields
.field private appid:Ljava/lang/String;

.field private appkey:Ljava/lang/String;

.field private mSplashContainer:Landroid/widget/FrameLayout;

.field private sourceId:Ljava/lang/String;

.field private splashAd:Lcom/tkay/splashad/api/TYSplashAd;

.field private splashadId:Ljava/lang/String;

.field private toponSplashadId:Ljava/lang/String;

.field private unitId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Landroid/support/v4/app/FragmentActivity;-><init>()V

    return-void
.end method

.method private getGameActivityName()Ljava/lang/String;
    .locals 2

    const-string v0, "TOPONAD_MAIN_ACTIVITY"

    .line 187
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataStr(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 188
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "org.cocos2dx.cpp.AppActivity"

    :cond_0
    return-object v0
.end method

.method private goToMainActivity()V
    .locals 3

    .line 176
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->getGameActivityName()Ljava/lang/String;

    move-result-object v0

    .line 177
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 178
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 179
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 181
    :cond_0
    invoke-virtual {v1, p0, v0}, Landroid/content/Intent;->setClassName(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;

    .line 182
    invoke-virtual {p0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->startActivity(Landroid/content/Intent;)V

    .line 183
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->finish()V

    return-void
.end method

.method private initAd()V
    .locals 2

    const-string v0, "TOPONAD_SPLASHAD_APPID"

    .line 63
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    const-string v0, "TOPONAD_SPLASHAD_APPKEY"

    .line 64
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appkey:Ljava/lang/String;

    const-string v0, "TOPONAD_SPLASHAD_ID"

    .line 65
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    const-string v0, "TOPONAD_SPLASHAD_ID_JUHE"

    .line 66
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->toponSplashadId:Ljava/lang/String;

    const-string v0, "TOPONAD_SOURCE_ID"

    .line 67
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    const-string v0, "TOPONAD_UNIT_ID"

    .line 68
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataInt(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->unitId:Ljava/lang/String;

    .line 69
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "initAd--->appid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-appkey->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appkey:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-splashadId->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-sourceId->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-unitId->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->unitId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 70
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->showAd()V

    return-void
.end method

.method private initGdtAd()V
    .locals 3

    .line 130
    new-instance v0, Lcom/tkay/network/gdt/GDTTYRequestInfo;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYRequestInfo;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYMediationRequestInfo;->setAdSourceId(Ljava/lang/String;)V

    .line 132
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v1, p0, v2, v0, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    return-void
.end method

.method private initKsAd()V
    .locals 3

    .line 105
    new-instance v0, Lcom/tkay/network/ks/KSTYRequestInfo;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/network/ks/KSTYRequestInfo;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYMediationRequestInfo;->setAdSourceId(Ljava/lang/String;)V

    .line 107
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v1, p0, v2, v0, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    return-void
.end method

.method private initMintegralAd()V
    .locals 5

    .line 111
    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYRequestInfo;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appkey:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->unitId:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/network/mintegral/MintegralTYRequestInfo;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYMediationRequestInfo;->setAdSourceId(Ljava/lang/String;)V

    .line 113
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v1, p0, v2, v0, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    return-void
.end method

.method private initPangleAd()V
    .locals 4

    .line 118
    new-instance v0, Lcom/tkay/network/toutiao/TTTYRequestInfo;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/network/toutiao/TTTYRequestInfo;-><init>(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 119
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYMediationRequestInfo;->setAdSourceId(Ljava/lang/String;)V

    .line 120
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v1, p0, v2, v0, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    return-void
.end method

.method private initSigmobAd()V
    .locals 4

    .line 124
    new-instance v0, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appid:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->appkey:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobiTYRequestInfo;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->sourceId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/TYMediationRequestInfo;->setAdSourceId(Ljava/lang/String;)V

    .line 126
    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashadId:Ljava/lang/String;

    invoke-direct {v1, p0, v2, v0, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    return-void
.end method

.method private showAd()V
    .locals 2

    .line 77
    invoke-static {}, Lcom/bianfeng/toponad/common/ToponSpUtils;->isSHowSplashAd()Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "TOPONAD_SPLASHAD_TYPE"

    .line 78
    invoke-static {p0, v0}, Lcom/bianfeng/toponad/common/ToponAdToolUtils;->getMetaDataStr(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "ks"

    .line 79
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 80
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initKsAd()V

    goto :goto_0

    :cond_0
    const-string v1, "mintegral"

    .line 81
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 82
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initMintegralAd()V

    goto :goto_0

    :cond_1
    const-string v1, "pangle"

    .line 83
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 84
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initPangleAd()V

    goto :goto_0

    :cond_2
    const-string v1, "sigmob"

    .line 85
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 86
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initSigmobAd()V

    goto :goto_0

    :cond_3
    const-string v1, "gdt"

    .line 87
    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 89
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initGdtAd()V

    goto :goto_0

    .line 93
    :cond_4
    new-instance v0, Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->toponSplashadId:Ljava/lang/String;

    invoke-direct {v0, p0, v1, p0}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    .line 95
    :cond_5
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashAd;->isAdReady()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 96
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->mSplashContainer:Landroid/widget/FrameLayout;

    invoke-virtual {v0, p0, v1}, Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;)V

    goto :goto_1

    .line 98
    :cond_6
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashAd;->loadAd()V

    :goto_1
    return-void
.end method


# virtual methods
.method public onAdClick(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onAdClick"

    .line 157
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V
    .locals 0

    const-string p1, "onAdDismiss"

    .line 162
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 163
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->goToMainActivity()V

    return-void
.end method

.method public onAdLoadTimeout()V
    .locals 1

    const-string v0, "onAdLoadTimeout"

    .line 168
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 169
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->goToMainActivity()V

    return-void
.end method

.method public onAdLoaded(Z)V
    .locals 1

    const-string p1, "onAdLoaded"

    .line 138
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 139
    iget-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->mSplashContainer:Landroid/widget/FrameLayout;

    invoke-virtual {p1, p0, v0}, Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public onAdShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onAdShow"

    .line 151
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 45
    invoke-super {p0, p1}, Landroid/support/v4/app/FragmentActivity;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 46
    invoke-virtual {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->requestWindowFeature(I)Z

    .line 47
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    const/16 v0, 0x400

    invoke-virtual {p1, v0, v0}, Landroid/view/Window;->setFlags(II)V

    const-string p1, "R.layout.activity_topon_splash"

    .line 49
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->setContentView(I)V

    const-string p1, "R.id.topon_splash_container"

    .line 50
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout;

    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->mSplashContainer:Landroid/widget/FrameLayout;

    .line 51
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result p1

    if-nez p1, :cond_0

    .line 52
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->goToMainActivity()V

    goto :goto_0

    .line 54
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->initAd()V

    :goto_0
    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 198
    invoke-super {p0}, Landroid/support/v4/app/FragmentActivity;->onDestroy()V

    .line 199
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    if-eqz v0, :cond_0

    .line 200
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashAd;->onDestory()V

    const/4 v0, 0x0

    .line 201
    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->splashAd:Lcom/tkay/splashad/api/TYSplashAd;

    :cond_0
    return-void
.end method

.method public onNoAdError(Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onNoAdError--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 145
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdSplashActivity;->goToMainActivity()V

    return-void
.end method

.method public onPointerCaptureChanged(Z)V
    .locals 0

    return-void
.end method
