.class public abstract Lcom/czhj/wire/Message$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/Message;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<M:",
        "Lcom/czhj/wire/Message<",
        "TM;TB;>;B:",
        "Lcom/czhj/wire/Message$Builder<",
        "TM;TB;>;>",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field transient unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

.field transient unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

.field transient unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;


# direct methods
.method protected constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    return-void
.end method

.method private prepareForNewUnknownFields()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    if-nez v0, :cond_0

    new-instance v0, Lcom/czhj/wire/okio/Buffer;

    invoke-direct {v0}, Lcom/czhj/wire/okio/Buffer;-><init>()V

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    new-instance v1, Lcom/czhj/wire/ProtoWriter;

    invoke-direct {v1, v0}, Lcom/czhj/wire/ProtoWriter;-><init>(Lcom/czhj/wire/okio/BufferedSink;)V

    iput-object v1, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {v1, v0}, Lcom/czhj/wire/ProtoWriter;->writeBytes(Lcom/czhj/wire/okio/ByteString;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    goto :goto_0

    :catch_0
    new-instance v0, Ljava/lang/AssertionError;

    invoke-direct {v0}, Ljava/lang/AssertionError;-><init>()V

    throw v0

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public final addUnknownField(ILcom/czhj/wire/FieldEncoding;Ljava/lang/Object;)Lcom/czhj/wire/Message$Builder;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/czhj/wire/FieldEncoding;",
            "Ljava/lang/Object;",
            ")",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;"
        }
    .end annotation

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;->prepareForNewUnknownFields()V

    :try_start_0
    invoke-virtual {p2}, Lcom/czhj/wire/FieldEncoding;->rawProtoAdapter()Lcom/czhj/wire/ProtoAdapter;

    move-result-object p2

    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;

    invoke-virtual {p2, v0, p1, p3}, Lcom/czhj/wire/ProtoAdapter;->encodeWithTag(Lcom/czhj/wire/ProtoWriter;ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    new-instance p1, Ljava/lang/AssertionError;

    invoke-direct {p1}, Ljava/lang/AssertionError;-><init>()V

    throw p1
.end method

.method public final addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/okio/ByteString;",
            ")",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;"
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result v0

    if-lez v0, :cond_0

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;->prepareForNewUnknownFields()V

    :try_start_0
    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/ProtoWriter;->writeBytes(Lcom/czhj/wire/okio/ByteString;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    new-instance p1, Ljava/lang/AssertionError;

    invoke-direct {p1}, Ljava/lang/AssertionError;-><init>()V

    throw p1

    :cond_0
    :goto_0
    return-object p0
.end method

.method public abstract build()Lcom/czhj/wire/Message;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TM;"
        }
    .end annotation
.end method

.method public final buildUnknownFields()Lcom/czhj/wire/okio/ByteString;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Buffer;->readByteString()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    return-object v0
.end method

.method public final clearUnknownFields()Lcom/czhj/wire/Message$Builder;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/czhj/wire/Message$Builder<",
            "TM;TB;>;"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    iput-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsByteString:Lcom/czhj/wire/okio/ByteString;

    iget-object v0, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Buffer;->clear()V

    iput-object v1, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsBuffer:Lcom/czhj/wire/okio/Buffer;

    :cond_0
    iput-object v1, p0, Lcom/czhj/wire/Message$Builder;->unknownFieldsWriter:Lcom/czhj/wire/ProtoWriter;

    return-object p0
.end method
