.class final Lcom/kwad/sdk/j$c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/service/a/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "c"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/j$c;-><init>()V

    return-void
.end method


# virtual methods
.method public final ac(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    const-class p1, Lcom/kwad/components/a/a/a;

    invoke-static {p1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/a/a/a;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Lcom/kwad/components/a/a/a;->sE()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final getApiVersion()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getApiVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getApiVersionCode()I
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getApiVersionCode()I

    move-result v0

    return v0
.end method

.method public final getAppId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAppName()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getAppName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final getIsExternal()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getIsExternal()Z

    move-result v0

    return v0
.end method

.method public final getSDKVersion()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getSDKVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final hasInitFinish()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    return v0
.end method

.method public final hasLiveCompoReady()Z
    .locals 1

    const-class v0, Lcom/kwad/components/core/offline/api/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/offline/api/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/offline/api/a/a;->hasLiveCompoReady()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final isPersonalRecommend()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->isPersonalRecommend()Z

    move-result v0

    return v0
.end method

.method public final isProgrammaticRecommend()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->isProgrammaticRecommend()Z

    move-result v0

    return v0
.end method

.method public final sF()Lcom/kwad/sdk/core/response/b/e;
    .locals 1

    const-class v0, Lcom/kwad/components/a/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/a/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/a/a/a;->sF()Lcom/kwad/sdk/core/response/b/e;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method
