.class public final Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;",
        "Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public image:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

.field public index:Ljava/lang/Integer;

.field public text:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;

.field public video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;->DEFAULT_INDEX:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->index:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;
    .locals 7

    new-instance v6, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->index:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->image:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    iget-object v4, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->text:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v5

    move-object v0, v6

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset;-><init>(Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;Lcom/czhj/wire/okio/ByteString;)V

    return-object v6
.end method

.method public image(Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;)Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->image:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetImage;

    return-object p0
.end method

.method public index(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->index:Ljava/lang/Integer;

    return-object p0
.end method

.method public text(Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;)Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->text:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetText;

    return-object p0
.end method

.method public video(Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;)Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/ResponseAsset$Builder;->video:Lcom/sigmob/sdk/base/models/rtb/ResponseAssetVideo;

    return-object p0
.end method
