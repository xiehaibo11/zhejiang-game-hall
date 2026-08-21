.class public final Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public code:Ljava/lang/Integer;

.field public config:Lcom/sigmob/sdk/base/models/config/SdkConfig;

.field public error_message:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;->DEFAULT_CODE:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->code:Ljava/lang/Integer;

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->error_message:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->build()Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->code:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->error_message:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->config:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse;-><init>(Ljava/lang/Integer;Ljava/lang/String;Lcom/sigmob/sdk/base/models/config/SdkConfig;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public code(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->code:Ljava/lang/Integer;

    return-object p0
.end method

.method public config(Lcom/sigmob/sdk/base/models/config/SdkConfig;)Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->config:Lcom/sigmob/sdk/base/models/config/SdkConfig;

    return-object p0
.end method

.method public error_message(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigResponse$Builder;->error_message:Ljava/lang/String;

    return-object p0
.end method
