.class public final Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/SdkConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfig;",
        "Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public android_config:Lcom/sigmob/sdk/base/models/config/Android;

.field public common_config:Lcom/sigmob/sdk/base/models/config/Common;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public android_config(Lcom/sigmob/sdk/base/models/config/Android;)Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    return-object p0
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/SdkConfig;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/SdkConfig;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/models/config/SdkConfig;-><init>(Lcom/sigmob/sdk/base/models/config/Common;Lcom/sigmob/sdk/base/models/config/Android;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public common_config(Lcom/sigmob/sdk/base/models/config/Common;)Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    return-object p0
.end method
