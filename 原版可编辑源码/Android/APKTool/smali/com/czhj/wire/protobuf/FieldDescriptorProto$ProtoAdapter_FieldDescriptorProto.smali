.class final Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FieldDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_FieldDescriptorProto"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/wire/protobuf/FieldDescriptorProto;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FieldDescriptorProto;
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    packed-switch v3, :pswitch_data_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_0
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->oneof_index(Ljava/lang/Integer;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_1
    sget-object v3, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->options(Lcom/czhj/wire/protobuf/FieldOptions;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_2
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->default_value(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_3
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->type_name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_4
    :try_start_0
    sget-object v4, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    invoke-virtual {v0, v4}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->type(Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_5
    sget-object v4, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    invoke-virtual {v0, v4}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->label(Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;
    :try_end_0
    .catch Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    sget-object v5, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    iget v4, v4, Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;->value:I

    int-to-long v6, v4

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v0, v3, v5, v4}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_6
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->number(Ljava/lang/Integer;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto :goto_0

    :pswitch_7
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->extendee(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto/16 :goto_0

    :pswitch_8
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    move-result-object p1

    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FieldDescriptorProto;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    const/4 v2, 0x7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    const/16 v2, 0x9

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    const/16 v2, 0x8

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FieldDescriptorProto;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/protobuf/FieldDescriptorProto;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->name:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->number:Ljava/lang/Integer;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->label:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Label;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type:Lcom/czhj/wire/protobuf/FieldDescriptorProto$Type;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->type_name:Ljava/lang/String;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->extendee:Ljava/lang/String;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->default_value:Ljava/lang/String;

    const/4 v3, 0x7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->oneof_index:Ljava/lang/Integer;

    const/16 v3, 0x9

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;->encodedSize(Lcom/czhj/wire/protobuf/FieldDescriptorProto;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/wire/protobuf/FieldDescriptorProto;)Lcom/czhj/wire/protobuf/FieldDescriptorProto;
    .locals 2

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->newBuilder()Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/czhj/wire/protobuf/FieldOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/protobuf/FieldOptions;

    iput-object v0, p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FieldOptions;

    :cond_0
    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FieldDescriptorProto$ProtoAdapter_FieldDescriptorProto;->redact(Lcom/czhj/wire/protobuf/FieldDescriptorProto;)Lcom/czhj/wire/protobuf/FieldDescriptorProto;

    move-result-object p1

    return-object p1
.end method
