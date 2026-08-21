.class public final Lcom/kwad/components/offline/obiwan/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/obiwan/IObiwanOfflineCompoInitConfig;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getLogDirPath()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/av;->cM(Landroid/content/Context;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getLogObiwanData()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->getLogObiwanData()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getLogObiwanStorageQuota()J
    .locals 2

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alT:Lcom/kwad/sdk/core/config/item/m;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/m;)J

    move-result-wide v0

    return-wide v0
.end method

.method public final isLogObiwanEnableNow()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alR:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    return v0
.end method

.method public final isLogObiwanRecordAll()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alS:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    return v0
.end method

.method public final wrapper()Lcom/kwad/components/offline/api/core/api/IOfflineCompoWrapper;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/offline/init/a/i;

    const-string v1, "com.kwad.components.obiwan"

    invoke-direct {v0, v1}, Lcom/kwad/components/core/offline/init/a/i;-><init>(Ljava/lang/String;)V

    return-object v0
.end method
