.class public final Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public h:Ljava/lang/Integer;

.field public url:Ljava/lang/String;

.field public w:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->url:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->DEFAULT_W:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->w:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;->DEFAULT_H:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->h:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->url:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->w:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->h:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;-><init>(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public h(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->h:Ljava/lang/Integer;

    return-object p0
.end method

.method public url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->url:Ljava/lang/String;

    return-object p0
.end method

.method public w(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage$Builder;->w:Ljava/lang/Integer;

    return-object p0
.end method
