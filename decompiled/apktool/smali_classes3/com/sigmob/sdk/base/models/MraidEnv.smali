.class public Lcom/sigmob/sdk/base/models/MraidEnv;
.super Ljava/lang/Object;


# instance fields
.field public final appId:Ljava/lang/String;

.field public final coppa:Ljava/lang/Boolean;

.field public final ifa:Ljava/lang/String;

.field public final limitAdTracking:Ljava/lang/Boolean;

.field public final sdk:Ljava/lang/String;

.field public final sdkVersion:Ljava/lang/String;

.field public final version:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "2.0"

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->version:Ljava/lang/String;

    const-string v0, "sigmob"

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->sdk:Ljava/lang/String;

    const-string v0, "4.9.0"

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->sdkVersion:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getAppPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->appId:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getAdvertisingId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->ifa:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/ClientMetadata;->getLimitAdTrackingEnabled()Z

    move-result v0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->limitAdTracking:Ljava/lang/Boolean;

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->c()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/MraidEnv;->coppa:Ljava/lang/Boolean;

    return-void
.end method
