.class final Lcom/bianfeng/ymnsdk/gongxiang/j$a;
.super Ljava/lang/Object;
.source "PayloadWriter.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/gongxiang/j$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;Ljava/util/Map;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;


# direct methods
.method constructor <init>(Ljava/util/Map;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/util/Map;)Lcom/bianfeng/ymnsdk/gongxiang/g;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/nio/ByteBuffer;",
            ">;)",
            "Lcom/bianfeng/ymnsdk/gongxiang/g;"
        }
    .end annotation

    .line 59
    .local p1, "originIdValues":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 62
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/g;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/gongxiang/g;-><init>()V

    .line 63
    .local v0, "apkSigningBlock":Lcom/bianfeng/ymnsdk/gongxiang/g;
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    .line 64
    .local v1, "entrySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;>;"
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 65
    .local v3, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    new-instance v4, Lcom/bianfeng/ymnsdk/gongxiang/h;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/nio/ByteBuffer;

    invoke-direct {v4, v5, v6}, Lcom/bianfeng/ymnsdk/gongxiang/h;-><init>(ILjava/nio/ByteBuffer;)V

    .line 66
    .local v4, "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    invoke-virtual {v0, v4}, Lcom/bianfeng/ymnsdk/gongxiang/g;->a(Lcom/bianfeng/ymnsdk/gongxiang/h;)V

    .line 67
    .end local v3    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Integer;Ljava/nio/ByteBuffer;>;"
    .end local v4    # "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    goto :goto_0

    .line 68
    :cond_1
    return-object v0
.end method
