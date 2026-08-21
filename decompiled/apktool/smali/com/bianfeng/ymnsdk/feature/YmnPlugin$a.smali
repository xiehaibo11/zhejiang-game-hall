.class public Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
.super Ljava/lang/Object;
.source "YmnPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/YmnPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public final a:Ljava/lang/String;

.field public final b:[Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "[",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/lang/String;[Ljava/lang/Class;)V
    .locals 0
    .param p1, "functionName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    .line 300
    .local p2, "types":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 301
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->a:Ljava/lang/String;

    .line 302
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->b:[Ljava/lang/Class;

    .line 303
    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 5
    .param p1, "obj"    # Ljava/lang/Object;

    .line 321
    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    .line 322
    :cond_0
    const/4 v1, 0x0

    if-nez p1, :cond_1

    return v1

    .line 323
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_2

    return v1

    .line 324
    :cond_2
    move-object v2, p1

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;

    .line 325
    .local v2, "other":Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->a:Ljava/lang/String;

    if-nez v3, :cond_3

    .line 326
    iget-object v3, v2, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->a:Ljava/lang/String;

    if-eqz v3, :cond_4

    return v1

    .line 327
    :cond_3
    iget-object v4, v2, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    return v1

    .line 328
    :cond_4
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->b:[Ljava/lang/Class;

    iget-object v4, v2, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->b:[Ljava/lang/Class;

    invoke-static {v3, v4}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_5

    return v1

    .line 329
    :cond_5
    return v0
.end method

.method public hashCode()I
    .locals 8

    .line 307
    const/16 v0, 0x1f

    .line 308
    .local v0, "prime":I
    const/4 v1, 0x1

    .line 309
    .local v1, "result":I
    mul-int/lit8 v2, v1, 0x1f

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->a:Ljava/lang/String;

    const/4 v4, 0x0

    if-nez v3, :cond_0

    const/4 v3, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    :goto_0
    add-int/2addr v2, v3

    .line 310
    .end local v1    # "result":I
    .local v2, "result":I
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/YmnPlugin$a;->b:[Ljava/lang/Class;

    if-nez v1, :cond_1

    .line 311
    return v2

    .line 313
    :cond_1
    array-length v3, v1

    :goto_1
    if-ge v4, v3, :cond_2

    aget-object v5, v1, v4

    .line 314
    .local v5, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    mul-int/lit8 v6, v2, 0x1f

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->hashCode()I

    move-result v7

    add-int v2, v6, v7

    .line 313
    .end local v5    # "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 316
    :cond_2
    return v2
.end method
