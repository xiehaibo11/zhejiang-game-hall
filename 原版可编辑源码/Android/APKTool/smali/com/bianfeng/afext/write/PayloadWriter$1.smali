.class final Lcom/bianfeng/afext/write/PayloadWriter$1;
.super Ljava/lang/Object;
.source "PayloadWriter.java"

# interfaces
.implements Lcom/bianfeng/afext/write/PayloadWriter$ApkSigningBlockHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/afext/write/PayloadWriter;->putAll(Ljava/io/File;Ljava/util/Map;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$idValues:Ljava/util/Map;


# direct methods
.method constructor <init>(Ljava/util/Map;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/afext/write/PayloadWriter$1;->val$idValues:Ljava/util/Map;

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

    .line 59
    iget-object v0, p0, Lcom/bianfeng/afext/write/PayloadWriter$1;->val$idValues:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/bianfeng/afext/write/PayloadWriter$1;->val$idValues:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 62
    :cond_0
    new-instance v0, Lcom/bianfeng/afext/write/ApkSigningBlock;

    invoke-direct {v0}, Lcom/bianfeng/afext/write/ApkSigningBlock;-><init>()V

    .line 63
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    .line 64
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 65
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

    .line 66
    invoke-virtual {v0, v2}, Lcom/bianfeng/afext/write/ApkSigningBlock;->addPayload(Lcom/bianfeng/afext/write/ApkSigningPayload;)V

    goto :goto_0

    :cond_1
    return-object v0
.end method
