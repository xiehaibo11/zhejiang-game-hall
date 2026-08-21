.class public final Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public duration:Ljava/lang/Integer;

.field public h:Ljava/lang/Integer;

.field public url:Ljava/lang/String;

.field public w:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->url:Ljava/lang/String;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->DEFAULT_W:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->w:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->DEFAULT_H:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->h:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;->DEFAULT_DURATION:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->duration:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->url:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->w:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->h:Ljava/lang/Integer;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->duration:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;-><init>(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public duration(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->duration:Ljava/lang/Integer;

    return-object p0
.end method

.method public h(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->h:Ljava/lang/Integer;

    return-object p0
.end method

.method public url(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->url:Ljava/lang/String;

    return-object p0
.end method

.method public w(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo$Builder;->w:Ljava/lang/Integer;

    return-object p0
.end method
