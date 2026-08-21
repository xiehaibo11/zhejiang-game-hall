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

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/util/Map;)Lcom/bianfeng/ymnsdk/gongxiang/g;
    .locals 4
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

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/j$a;->a:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 4
    :cond_0
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/g;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/gongxiang/g;-><init>()V

    .line 5
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    .line 6
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 7
    new-instance v2, Lcom/bianfeng/ymnsdk/gongxiang/h;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/nio/ByteBuffer;

    invoke-direct {v2, v3, v1}, Lcom/bianfeng/ymnsdk/gongxiang/h;-><init>(ILjava/nio/ByteBuffer;)V

    .line 8
    invoke-virtual {v0, v2}, Lcom/bianfeng/ymnsdk/gongxiang/g;->a(Lcom/bianfeng/ymnsdk/gongxiang/h;)V

    goto :goto_0

    :cond_1
    return-object v0
.end method
