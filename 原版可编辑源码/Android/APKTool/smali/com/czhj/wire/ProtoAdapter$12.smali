.class Lcom/czhj/wire/ProtoAdapter$12;
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
        "Ljava/lang/String;",
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
.method public bridge synthetic decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$12;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->readString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Ljava/lang/String;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/ProtoAdapter$12;->encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/String;)V

    return-void
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p1, p2}, Lcom/czhj/wire/ProtoWriter;->writeString(Ljava/lang/String;)V

    return-void
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$12;->encodedSize(Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public encodedSize(Ljava/lang/String;)I
    .locals 2

    invoke-static {p1}, Lcom/czhj/wire/okio/Utf8;->size(Ljava/lang/String;)J

    move-result-wide v0

    long-to-int p1, v0

    return p1
.end method
