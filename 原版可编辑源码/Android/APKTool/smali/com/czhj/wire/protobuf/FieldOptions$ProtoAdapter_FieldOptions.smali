.class final Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldOptions;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_FieldOptions"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/wire/protobuf/FieldOptions;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FieldOptions;
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_7

    const/4 v4, 0x1

    if-eq v3, v4, :cond_6

    const/4 v4, 0x2

    if-eq v3, v4, :cond_5

    const/4 v4, 0x3

    if-eq v3, v4, :cond_4

    const/4 v4, 0x5

    if-eq v3, v4, :cond_3

    const/4 v4, 0x6

    if-eq v3, v4, :cond_2

    const/16 v4, 0xa

    if-eq v3, v4, :cond_1

    const/16 v4, 0x3e7

    if-eq v3, v4, :cond_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :cond_0
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/UninterpretedOption;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->weak(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    goto :goto_0

    :cond_2
    :try_start_0
    sget-object v4, Lcom/czhj/wire/protobuf/FieldOptions$JSType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    invoke-virtual {v0, v4}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->jstype(Lcom/czhj/wire/protobuf/FieldOptions$JSType;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    :try_end_0
    .catch Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_3
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->lazy(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    goto :goto_0

    :cond_4
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->deprecated(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    goto :goto_0

    :cond_5
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->packed(Ljava/lang/Boolean;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    goto :goto_0

    :cond_6
    :try_start_1
    sget-object v4, Lcom/czhj/wire/protobuf/FieldOptions$CType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/czhj/wire/protobuf/FieldOptions$CType;

    invoke-virtual {v0, v4}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->ctype(Lcom/czhj/wire/protobuf/FieldOptions$CType;)Lcom/czhj/wire/protobuf/FieldOptions$Builder;
    :try_end_1
    .catch Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException; {:try_start_1 .. :try_end_1} :catch_0

    goto/16 :goto_0

    :catch_0
    move-exception v4

    sget-object v5, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    iget v4, v4, Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;->value:I

    int-to-long v6, v4

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v5, v4}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto/16 :goto_0

    :cond_7
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->build()Lcom/czhj/wire/protobuf/FieldOptions;

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

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FieldOptions;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FieldOptions;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions$JSType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    const/16 v2, 0xa

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/UninterpretedOption;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    const/16 v2, 0x3e7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FieldOptions;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/protobuf/FieldOptions;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions$CType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FieldOptions;->ctype:Lcom/czhj/wire/protobuf/FieldOptions$CType;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->packed:Ljava/lang/Boolean;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldOptions$JSType;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->jstype:Lcom/czhj/wire/protobuf/FieldOptions$JSType;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->lazy:Ljava/lang/Boolean;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->deprecated:Ljava/lang/Boolean;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->BOOL:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->weak:Ljava/lang/Boolean;

    const/16 v3, 0xa

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/UninterpretedOption;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldOptions;->uninterpreted_option:Ljava/util/List;

    const/16 v3, 0x3e7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldOptions;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;->encodedSize(Lcom/czhj/wire/protobuf/FieldOptions;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/wire/protobuf/FieldOptions;)Lcom/czhj/wire/protobuf/FieldOptions;
    .locals 2

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldOptions;->newBuilder()Lcom/czhj/wire/protobuf/FieldOptions$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->uninterpreted_option:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/UninterpretedOption;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldOptions$Builder;->build()Lcom/czhj/wire/protobuf/FieldOptions;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldOptions$ProtoAdapter_FieldOptions;->redact(Lcom/czhj/wire/protobuf/FieldOptions;)Lcom/czhj/wire/protobuf/FieldOptions;

    move-result-object p1

    return-object p1
.end method
