.class Lcom/czhj/wire/ProtoAdapter$13;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/wire/ProtoAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/ProtoAdapter<",
        "Lcom/czhj/wire/okio/ByteString;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/okio/ByteString;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->readBytes()Lcom/czhj/wire/okio/ByteString;

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

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$13;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/okio/ByteString;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/okio/ByteString;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

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

    check-cast p2, Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/ProtoAdapter$13;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public encodedSize(Lcom/czhj/wire/okio/ByteString;)I
    .locals 0

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->size()I

    move-result p1

    return p1
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$13;->encodedSize(Lcom/czhj/wire/okio/ByteString;)I

    move-result p1

    return p1
.end method
