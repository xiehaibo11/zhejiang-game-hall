.class final Lcom/bianfeng/afext/write/PayloadWriter$2;
.super Ljava/lang/Object;
.source "PayloadWriter.java"

# interfaces
.implements Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/afext/write/PayloadWriter;->remove(Ljava/io/File;IZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$id:I


# direct methods
.method constructor <init>(I)V
    .locals 0

    .line 78
    iput p1, p0, Lcom/bianfeng/afext/write/PayloadWriter$2;->val$id:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handle(Ljava/util/Map;)Lcom/bianfeng/afext/write/ApkSigningBlock;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;)",
            "Lcom/bianfeng/afext/write/ApkSigningBlock;"
        }
    .end annotation

    .line 81
    new-instance v0, Lcom/bianfeng/afext/write/ApkSigningBlock;

    invoke-direct {v0}, Lcom/bianfeng/afext/write/ApkSigningBlock;-><init>()V

    .line 82
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    .line 83
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 84
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget v3, p0, Lcom/bianfeng/afext/write/PayloadWriter$2;->val$id:I

    if-eq v2, v3, :cond_0

    .line 85
    new-instance v2, Lcom/bianfeng/afext/write/ApkSigningPayload;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/nio/ByteBuffer;

    invoke-direct {v2, v3, v1}, Lcom/bianfeng/afext/write/ApkSigningPayload;-><init>(ILjava/nio/ByteBuffer;)V

    .line 86
    invoke-virtual {v0, v2}, Lcom/bianfeng/afext/write/ApkSigningBlock;->addPayload(Lcom/bianfeng/afext/write/ApkSigningPayload;)V

    goto :goto_0

    :cond_1
    return-object v0
.end method
