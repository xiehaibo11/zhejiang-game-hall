.class final Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/protobuf/FileDescriptorProto;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_FileDescriptorProto"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/wire/protobuf/FileDescriptorProto;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FileDescriptorProto;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    invoke-direct {v0}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;-><init>()V

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

    invoke-virtual {v0, v3, v4, v5}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :pswitch_0
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->syntax(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    goto :goto_0

    :pswitch_1
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->weak_dependency:Ljava/util/List;

    goto :goto_1

    :pswitch_2
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->public_dependency:Ljava/util/List;

    :goto_1
    sget-object v4, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_3
    sget-object v3, Lcom/czhj/wire/protobuf/SourceCodeInfo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info(Lcom/czhj/wire/protobuf/SourceCodeInfo;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    goto :goto_0

    :pswitch_4
    sget-object v3, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/wire/protobuf/FileOptions;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options(Lcom/czhj/wire/protobuf/FileOptions;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    goto :goto_0

    :pswitch_5
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_6
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/ServiceDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_7
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/EnumDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_8
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/protobuf/DescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    goto :goto_2

    :pswitch_9
    iget-object v3, v0, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->dependency:Ljava/util/List;

    sget-object v4, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    :goto_2
    invoke-virtual {v4, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :pswitch_a
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->package_(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    goto :goto_0

    :pswitch_b
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->name(Ljava/lang/String;)Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/FileDescriptorProto;

    move-result-object p1

    return-object p1

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_b
        :pswitch_a
        :pswitch_9
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

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/protobuf/FileDescriptorProto;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FileDescriptorProto;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    const/16 v2, 0xa

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    const/16 v2, 0xb

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/DescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/EnumDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    const/4 v2, 0x5

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/ServiceDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    const/4 v2, 0x6

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v0}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v0

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    const/4 v2, 0x7

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    const/16 v2, 0x8

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    const/16 v2, 0x9

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    const/16 v2, 0xc

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/protobuf/FileDescriptorProto;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/protobuf/FileDescriptorProto;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->name:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->package_:Ljava/lang/String;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->dependency:Ljava/util/List;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->public_dependency:Ljava/util/List;

    const/16 v3, 0xa

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->INT32:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->weak_dependency:Ljava/util/List;

    const/16 v3, 0xb

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/DescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->message_type:Ljava/util/List;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/EnumDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->enum_type:Ljava/util/List;

    const/4 v3, 0x5

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/ServiceDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->service:Ljava/util/List;

    const/4 v3, 0x6

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v1}, Lcom/czhj/wire/ProtoAdapter;->asRepeated()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v1

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->extension:Ljava/util/List;

    const/4 v3, 0x7

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->options:Lcom/czhj/wire/protobuf/FileOptions;

    const/16 v3, 0x8

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/protobuf/SourceCodeInfo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    const/16 v3, 0x9

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->STRING:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;->syntax:Ljava/lang/String;

    const/16 v3, 0xc

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;->encodedSize(Lcom/czhj/wire/protobuf/FileDescriptorProto;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/czhj/wire/protobuf/FileDescriptorProto;)Lcom/czhj/wire/protobuf/FileDescriptorProto;
    .locals 2

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto;->newBuilder()Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;

    move-result-object p1

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->message_type:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/DescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->enum_type:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/EnumDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->service:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/ServiceDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->extension:Ljava/util/List;

    sget-object v1, Lcom/czhj/wire/protobuf/FieldDescriptorProto;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0, v1}, Lcom/czhj/wire/internal/Internal;->redactElements(Ljava/util/List;Lcom/czhj/wire/ProtoAdapter;)V

    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/czhj/wire/protobuf/FileOptions;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/protobuf/FileOptions;

    iput-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->options:Lcom/czhj/wire/protobuf/FileOptions;

    :cond_0
    iget-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/czhj/wire/protobuf/SourceCodeInfo;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/ProtoAdapter;->redact(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/wire/protobuf/SourceCodeInfo;

    iput-object v0, p1, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->source_code_info:Lcom/czhj/wire/protobuf/SourceCodeInfo;

    :cond_1
    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$Builder;->build()Lcom/czhj/wire/protobuf/FileDescriptorProto;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/czhj/wire/protobuf/FileDescriptorProto;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/protobuf/FileDescriptorProto$ProtoAdapter_FileDescriptorProto;->redact(Lcom/czhj/wire/protobuf/FileDescriptorProto;)Lcom/czhj/wire/protobuf/FileDescriptorProto;

    move-result-object p1

    return-object p1
.end method
