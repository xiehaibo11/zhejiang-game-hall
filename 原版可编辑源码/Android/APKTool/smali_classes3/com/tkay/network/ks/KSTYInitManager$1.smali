.class final Lcom/tkay/network/ks/KSTYInitManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/MediationInitCallback;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Landroid/content/Context;

.field final synthetic d:Lcom/tkay/network/ks/KSTYInitManager;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYInitManager;Lcom/tkay/core/api/MediationInitCallback;Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 142
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    iput-object p2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    iput-object p3, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->c:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 145
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInitManager;->a(Lcom/tkay/network/ks/KSTYInitManager;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    .line 146
    :try_start_0
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v1}, Lcom/tkay/network/ks/KSTYInitManager;->b(Lcom/tkay/network/ks/KSTYInitManager;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 147
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v1, :cond_0

    .line 148
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    invoke-interface {v1}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    .line 150
    :cond_0
    monitor-exit v0

    return-void

    .line 152
    :cond_1
    new-instance v1, Lcom/kwad/sdk/api/SdkConfig$Builder;

    invoke-direct {v1}, Lcom/kwad/sdk/api/SdkConfig$Builder;-><init>()V

    .line 153
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/SdkConfig$Builder;->appId(Ljava/lang/String;)Lcom/kwad/sdk/api/SdkConfig$Builder;

    .line 154
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 155
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/network/ks/KSTYCustomController;->getCanReadICCID()Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/SdkConfig$Builder;->canReadICCID(Z)Lcom/kwad/sdk/api/SdkConfig$Builder;

    .line 156
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/network/ks/KSTYCustomController;->getCanReadMacAddress()Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/SdkConfig$Builder;->canReadMacAddress(Z)Lcom/kwad/sdk/api/SdkConfig$Builder;

    .line 157
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/network/ks/KSTYCustomController;->getCanReadNearbyWifiList()Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/SdkConfig$Builder;->canReadNearbyWifiList(Z)Lcom/kwad/sdk/api/SdkConfig$Builder;

    .line 158
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/network/ks/KSTYCustomController;->getKsCustomeController()Lcom/kwad/sdk/api/KsCustomController;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 159
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/network/ks/KSTYCustomController;->getKsCustomeController()Lcom/kwad/sdk/api/KsCustomController;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/SdkConfig$Builder;->customController(Lcom/kwad/sdk/api/KsCustomController;)Lcom/kwad/sdk/api/SdkConfig$Builder;

    .line 162
    :cond_2
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->c:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/kwad/sdk/api/SdkConfig$Builder;->build()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/kwad/sdk/api/KsAdSDK;->init(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;)Z

    move-result v1

    .line 163
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v2}, Lcom/tkay/network/ks/KSTYInitManager;->d(Lcom/tkay/network/ks/KSTYInitManager;)V

    if-eqz v1, :cond_3

    .line 165
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->d:Lcom/tkay/network/ks/KSTYInitManager;

    invoke-static {v1}, Lcom/tkay/network/ks/KSTYInitManager;->e(Lcom/tkay/network/ks/KSTYInitManager;)Z

    .line 166
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v1, :cond_4

    .line 167
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    invoke-interface {v1}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    goto :goto_0

    .line 170
    :cond_3
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v1, :cond_4

    .line 171
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInitManager$1;->a:Lcom/tkay/core/api/MediationInitCallback;

    const-string v2, "Kuaishou init failed"

    invoke-interface {v1, v2}, Lcom/tkay/core/api/MediationInitCallback;->onFail(Ljava/lang/String;)V

    .line 175
    :cond_4
    :goto_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
