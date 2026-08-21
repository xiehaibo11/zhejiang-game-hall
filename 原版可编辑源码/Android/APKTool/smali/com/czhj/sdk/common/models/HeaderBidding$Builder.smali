.class public final Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/HeaderBidding;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/HeaderBidding;",
        "Lcom/czhj/sdk/common/models/HeaderBidding$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public bid_token:Ljava/lang/String;

.field public channel_id:Ljava/lang/Integer;

.field public cur:Ljava/lang/String;

.field public options:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public p_id:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->bid_token:Ljava/lang/String;

    sget-object v1, Lcom/czhj/sdk/common/models/HeaderBidding;->DEFAULT_CHANNEL_ID:Ljava/lang/Integer;

    iput-object v1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->channel_id:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->p_id:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->cur:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableMap()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->options:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public bid_token(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->bid_token:Ljava/lang/String;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/HeaderBidding;
    .locals 8

    new-instance v7, Lcom/czhj/sdk/common/models/HeaderBidding;

    iget-object v1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->bid_token:Ljava/lang/String;

    iget-object v2, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->channel_id:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->options:Ljava/util/Map;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->p_id:Ljava/lang/String;

    iget-object v5, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->cur:Ljava/lang/String;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v6

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/czhj/sdk/common/models/HeaderBidding;-><init>(Ljava/lang/String;Ljava/lang/Integer;Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;Lcom/czhj/wire/okio/ByteString;)V

    return-object v7
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->build()Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object v0

    return-object v0
.end method

.method public channel_id(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->channel_id:Ljava/lang/Integer;

    return-object p0
.end method

.method public cur(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->cur:Ljava/lang/String;

    return-object p0
.end method

.method public options(Ljava/util/Map;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/czhj/sdk/common/models/HeaderBidding$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/Map;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->options:Ljava/util/Map;

    return-object p0
.end method

.method public p_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->p_id:Ljava/lang/String;

    return-object p0
.end method
