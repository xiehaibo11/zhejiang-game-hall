.class public abstract Lcom/czhj/wire/EnumAdapter;
.super Lcom/czhj/wire/ProtoAdapter;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<E::",
        "Lcom/czhj/wire/WireEnum;",
        ">",
        "Lcom/czhj/wire/ProtoAdapter<",
        "TE;>;"
    }
.end annotation


# direct methods
.method protected constructor <init>(Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "TE;>;)V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    invoke-direct {p0, v0, p1}, Lcom/czhj/wire/ProtoAdapter;-><init>(Lcom/czhj/wire/FieldEncoding;Ljava/lang/Class;)V

    return-void
.end method


# virtual methods
.method public final decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/WireEnum;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoReader;",
            ")TE;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->readVarint32()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/EnumAdapter;->fromValue(I)Lcom/czhj/wire/WireEnum;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    new-instance v0, Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;

    iget-object v1, p0, Lcom/czhj/wire/EnumAdapter;->javaType:Ljava/lang/Class;

    invoke-direct {v0, p1, v1}, Lcom/czhj/wire/ProtoAdapter$EnumConstantNotFoundException;-><init>(ILjava/lang/Class;)V

    throw v0
.end method

.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/wire/EnumAdapter;->decode(Lcom/czhj/wire/ProtoReader;)Lcom/czhj/wire/WireEnum;

    move-result-object p1

    return-object p1
.end method

.method public final encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/WireEnum;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/wire/ProtoWriter;",
            "TE;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-interface {p2}, Lcom/czhj/wire/WireEnum;->getValue()I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeVarint32(I)V

    return-void
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Lcom/czhj/wire/WireEnum;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/EnumAdapter;->encode(Lcom/czhj/wire/ProtoWriter;Lcom/czhj/wire/WireEnum;)V

    return-void
.end method

.method public final encodedSize(Lcom/czhj/wire/WireEnum;)I
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)I"
        }
    .end annotation

    invoke-interface {p1}, Lcom/czhj/wire/WireEnum;->getValue()I

    move-result p1

    invoke-static {p1}, Lcom/czhj/wire/ProtoWriter;->c(I)I

    move-result p1

    return p1
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/wire/WireEnum;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/EnumAdapter;->encodedSize(Lcom/czhj/wire/WireEnum;)I

    move-result p1

    return p1
.end method

.method protected abstract fromValue(I)Lcom/czhj/wire/WireEnum;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)TE;"
        }
    .end annotation
.end method
