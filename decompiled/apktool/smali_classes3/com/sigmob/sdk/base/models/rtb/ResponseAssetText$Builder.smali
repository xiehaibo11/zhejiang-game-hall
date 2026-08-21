.class public final Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public context:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;->context:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;->context:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;-><init>(Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public context(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText$Builder;->context:Ljava/lang/String;

    return-object p0
.end method
