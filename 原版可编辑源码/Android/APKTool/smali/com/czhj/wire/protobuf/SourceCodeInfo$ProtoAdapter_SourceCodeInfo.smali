.class final Lcom/czhj/wire/protobuf/SourceCodeInfo$ProtoAdapter_SourceCodeInfo;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/SourceCodeInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_SourceCodeInfo"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/wire/protobuf/SourceCodeInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/SourceCodeInfo;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_1

    const/4 v4, 0x1

    if-eq v3, v4, :cond_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :cond_0
    iget-object v3, v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->location:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->build()Lcom/czhj/wire/protobuf/SourceCodeInfo;

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

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$ProtoAdapter_SourceCodeInfo;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/SourceCodeInfo;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/SourceCodeInfo;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/SourceCodeInfo;->location:Ljava/util/List;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/wire/protobuf/SourceCodeInfo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/protobuf/SourceCodeInfo$ProtoAdapter_SourceCodeInfo;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/SourceCodeInfo;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/protobuf/SourceCodeInfo;)I
    .locals 3

    sget-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo;->location:Ljava/util/List;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$ProtoAdapter_SourceCodeInfo;->encodedSize(Lcom/czhj/wire/protobuf/SourceCodeInfo;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/wire/protobuf/SourceCodeInfo;)Lcom/czhj/wire/protobuf/SourceCodeInfo;
    .locals 2

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo;->newBuilder()Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->location:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/SourceCodeInfo$Location;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$Builder;->build()Lcom/czhj/wire/protobuf/SourceCodeInfo;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/SourceCodeInfo$ProtoAdapter_SourceCodeInfo;->redact(Lcom/czhj/wire/protobuf/SourceCodeInfo;)Lcom/czhj/wire/protobuf/SourceCodeInfo;

    move-result-object p1

    return-object p1
.end method
