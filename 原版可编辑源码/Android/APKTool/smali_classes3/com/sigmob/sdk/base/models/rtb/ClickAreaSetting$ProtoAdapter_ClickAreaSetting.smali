.class final Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProtoAdapter_ClickAreaSetting"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 2

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->LENGTH_DELIMITED:Lcom/czhj/wire/FieldEncoding;

    const-class v1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-direct {p0, v0, v1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;-><init>()V

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->beginMessage()J

    move-result-wide v1

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->nextTag()I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_4

    const/4 v4, 0x1

    if-eq v3, v4, :cond_3

    const/4 v4, 0x2

    if-eq v3, v4, :cond_2

    const/4 v4, 0x3

    if-eq v3, v4, :cond_1

    const/4 v4, 0x4

    if-eq v3, v4, :cond_0

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->peekFieldEncoding()Lcom/czhj/wire/FieldEncoding;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;

    goto :goto_0

    :cond_0
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->right(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    goto :goto_0

    :cond_1
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->bottom(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    goto :goto_0

    :cond_2
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->left(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    goto :goto_0

    :cond_3
    sget-object v3, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    invoke-virtual {v3, p1}, Lcom/czhj/wire/ProtoAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Float;

    invoke-virtual {v0, v3}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->top(Ljava/lang/Float;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    goto :goto_0

    :cond_4
    invoke-virtual {p1, v1, v2}, Lcom/czhj/wire/ProtoReader;->endMessage(J)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

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

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    const/4 v2, 0x2

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    const/4 v2, 0x3

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p2, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    const/4 v2, 0x4

    invoke-virtual {v0, p1, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

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

    check-cast p2, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)V

    return-void
.end method

.method public encodedSize(Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)I
    .locals 4

    sget-object v0, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v1, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->top:Ljava/lang/Float;

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v0

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->left:Ljava/lang/Float;

    const/4 v3, 0x2

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->bottom:Ljava/lang/Float;

    const/4 v3, 0x3

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    sget-object v1, Lcom/czhj/wire/ProtoAdapter;->FLOAT:Lcom/czhj/wire/ProtoAdapter;

    iget-object v2, p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->right:Ljava/lang/Float;

    const/4 v3, 0x4

    invoke-virtual {v1, v3, v2}, Lcom/czhj/wire/ProtoAdapter;->encodedSizeWithTag(ILjava/lang/Object;)I

    move-result v1

    add-int/2addr v0, v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;->encodedSize(Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)I

    move-result p1

    return p1
.end method

.method public redact(Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;
    .locals 0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->clearUnknownFields()Lcom/czhj/wire/Message$Builder;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic redact(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting$ProtoAdapter_ClickAreaSetting;->redact(Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;)Lcom/sigmob/sdk/base/models/rtb/ClickAreaSetting;

    move-result-object p1

    return-object p1
.end method
