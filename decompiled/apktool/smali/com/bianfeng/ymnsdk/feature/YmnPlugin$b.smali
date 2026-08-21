.class public Lcom/bianfeng/ymnsdk/feature/YmnPlugin$b;
.super Ljava/lang/Object;
.source "YmnPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/YmnPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# direct methods
.method public static a(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;)Ljava/lang/String;
    .locals 9
    .param p0, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 335
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getInterfaces()[Ljava/lang/Class;

    move-result-object v0

    .line 336
    .local v0, "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
    if-eqz v0, :cond_2

    array-length v1, v0

    if-nez v1, :cond_0

    goto :goto_1

    .line 339
    :cond_0
    const/16 v1, 0x1f

    .line 340
    .local v1, "prime":I
    const/4 v2, 0x1

    .line 341
    .local v2, "result":I
    array-length v3, v0

    const/4 v4, 0x0

    move v5, v2

    const/4 v2, 0x0

    .end local v2    # "result":I
    .local v5, "result":I
    :goto_0
    if-ge v2, v3, :cond_1

    aget-object v6, v0, v2

    .line 342
    .local v6, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    mul-int/lit8 v7, v5, 0x1f

    invoke-virtual {v6}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8}, Ljava/lang/String;->hashCode()I

    move-result v8

    add-int v5, v7, v8

    .line 341
    .end local v6    # "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 344
    :cond_1
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v4

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    const-string v3, "%s_%d"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    return-object v2

    .line 337
    .end local v1    # "prime":I
    .end local v5    # "result":I
    :cond_2
    :goto_1
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method
