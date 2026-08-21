.class public final Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/RvConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/RvConfig;",
        "Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public ad_load_timeout:Ljava/lang/Integer;

.field public cacheTop:Ljava/lang/Integer;

.field public close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->DEFAULT_CACHETOP:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->cacheTop:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/RvConfig;->DEFAULT_AD_LOAD_TIMEOUT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->ad_load_timeout:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public ad_load_timeout(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->ad_load_timeout:Ljava/lang/Integer;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/RvConfig;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/RvConfig;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/config/RvConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->cacheTop:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->ad_load_timeout:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/config/RvConfig;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/config/DialogSetting;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public cacheTop(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->cacheTop:Ljava/lang/Integer;

    return-object p0
.end method

.method public close_dialog_setting(Lcom/sigmob/sdk/base/models/config/DialogSetting;)Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/RvConfig$Builder;->close_dialog_setting:Lcom/sigmob/sdk/base/models/config/DialogSetting;

    return-object p0
.end method
