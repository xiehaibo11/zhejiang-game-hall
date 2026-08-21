.class Lcom/czhj/wire/ProtoAdapter$8;
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
        "Ljava/lang/Long;",
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
.method public decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Long;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/wire/ProtoReader;->readVarint64()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoWriter;->c(J)J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

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

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$8;->decode(Lcom/czhj/wire/ProtoReader;)Ljava/lang/Long;

    move-result-object p1

    return-object p1
.end method

.method public encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Long;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoWriter;->b(J)J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/czhj/wire/ProtoWriter;->writeVarint64(J)V

    return-void
.end method

.method public bridge synthetic encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/wire/ProtoAdapter$8;->encode(Lcom/czhj/wire/ProtoWriter;Ljava/lang/Long;)V

    return-void
.end method

.method public encodedSize(Ljava/lang/Long;)I
    .locals 2

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoWriter;->b(J)J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/czhj/wire/ProtoWriter;->a(J)I

    move-result p1

    return p1
.end method

.method public bridge synthetic encodedSize(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoAdapter$8;->encodedSize(Ljava/lang/Long;)I

    move-result p1

    return p1
.end method
