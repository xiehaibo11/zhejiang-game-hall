.class final Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/HeaderBidding;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_HeaderBidding"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/sdk/common/models/HeaderBidding;",
        ">;"
    }
.end annotation


# instance fields
.field private final options:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->newMapAdapter(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/ProtoAdapter;)Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->options:Lcom/czhj/wire/ProtoAdapter;

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/sdk/common/models/HeaderBidding;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    invoke-direct {v0}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_5

    const/4 v4, 0x1

    if-eq v3, v4, :cond_4

    const/4 v4, 0x2

    if-eq v3, v4, :cond_3

    const/4 v4, 0x3

    if-eq v3, v4, :cond_2

    const/4 v4, 0x4

    if-eq v3, v4, :cond_1

    const/4 v4, 0x5

    if-eq v3, v4, :cond_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :cond_0
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->cur(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    goto :goto_0

    :cond_1
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->p_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    goto :goto_0

    :cond_2
    iget-object v3, v0, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->options:Ljava/util/Map;

    iget-object v4, p0, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->options:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    invoke-interface {v3, v4}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    goto :goto_0

    :cond_3
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->channel_id(Ljava/lang/Integer;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    goto :goto_0

    :cond_4
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->bid_token(Ljava/lang/String;)Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    goto :goto_0

    :cond_5
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->build()Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/sdk/common/models/HeaderBidding;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/HeaderBidding;->bid_token:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/HeaderBidding;->channel_id:Ljava/lang/Integer;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    iget-object v0, p0, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/HeaderBidding;->options:Ljava/util/Map;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/HeaderBidding;->p_id:Ljava/lang/String;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/sdk/common/models/HeaderBidding;->cur:Ljava/lang/String;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/sdk/common/models/HeaderBidding;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeBytes(Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/sdk/common/models/HeaderBidding;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/sdk/common/models/HeaderBidding;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/sdk/common/models/HeaderBidding;->bid_token:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->UINT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/HeaderBidding;->channel_id:Ljava/lang/Integer;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    iget-object v1, p0, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->options:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/HeaderBidding;->options:Ljava/util/Map;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/HeaderBidding;->p_id:Ljava/lang/String;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/sdk/common/models/HeaderBidding;->cur:Ljava/lang/String;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/HeaderBidding;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->encodedSize(Lcom/czhj/sdk/common/models/HeaderBidding;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/sdk/common/models/HeaderBidding;)Lcom/czhj/sdk/common/models/HeaderBidding;
    .locals 0

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/HeaderBidding;->newBuilder()Lcom/czhj/sdk/common/models/HeaderBidding$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/sdk/common/models/HeaderBidding$Builder;->build()Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/sdk/common/models/HeaderBidding;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/models/HeaderBidding$ProtoAdapter_HeaderBidding;->redact(Lcom/czhj/sdk/common/models/HeaderBidding;)Lcom/czhj/sdk/common/models/HeaderBidding;

    move-result-object p1

    return-object p1
.end method
