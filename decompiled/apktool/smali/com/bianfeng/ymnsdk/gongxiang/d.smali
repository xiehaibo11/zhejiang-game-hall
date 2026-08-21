.class public final Lcom/bianfeng/ymnsdk/gongxiang/d;
.super Ljava/lang/Object;
.source "Pair.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<A:",
        "Ljava/lang/Object;",
        "B:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TA;"
        }
    .end annotation
.end field

.field private final b:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TB;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TA;TB;)V"
        }
    .end annotation

    .line 26
    .local p0, "this":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<TA;TB;>;"
    .local p1, "first":Ljava/lang/Object;, "TA;"
    .local p2, "second":Ljava/lang/Object;, "TB;"
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 27
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    .line 28
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    .line 29
    return-void
.end method

.method public static a(Ljava/lang/Object;Ljava/lang/Object;)Lcom/bianfeng/ymnsdk/gongxiang/d;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<A:",
            "Ljava/lang/Object;",
            "B:",
            "Ljava/lang/Object;",
            ">(TA;TB;)",
            "Lcom/bianfeng/ymnsdk/gongxiang/d<",
            "TA;TB;>;"
        }
    .end annotation

    .line 32
    .local p0, "first":Ljava/lang/Object;, "TA;"
    .local p1, "second":Ljava/lang/Object;, "TB;"
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/d;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/gongxiang/d;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TA;"
        }
    .end annotation

    .line 36
    .local p0, "this":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<TA;TB;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    return-object v0
.end method

.method public b()Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TB;"
        }
    .end annotation

    .line 40
    .local p0, "this":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<TA;TB;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    return-object v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 5
    .param p1, "obj"    # Ljava/lang/Object;

    .line 54
    .local p0, "this":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<TA;TB;>;"
    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    .line 55
    return v0

    .line 57
    :cond_0
    const/4 v1, 0x0

    if-nez p1, :cond_1

    .line 58
    return v1

    .line 60
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_2

    .line 61
    return v1

    .line 64
    :cond_2
    move-object v2, p1

    check-cast v2, Lcom/bianfeng/ymnsdk/gongxiang/d;

    .line 65
    .local v2, "other":Lcom/bianfeng/ymnsdk/gongxiang/d;
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    if-nez v3, :cond_3

    .line 66
    iget-object v3, v2, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    if-eqz v3, :cond_4

    .line 67
    return v1

    .line 69
    :cond_3
    iget-object v4, v2, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    invoke-virtual {v3, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_4

    .line 70
    return v1

    .line 72
    :cond_4
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-nez v3, :cond_5

    .line 73
    iget-object v3, v2, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-eqz v3, :cond_6

    .line 74
    return v1

    .line 76
    :cond_5
    iget-object v4, v2, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    invoke-virtual {v3, v4}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 77
    return v1

    .line 79
    :cond_6
    return v0
.end method

.method public hashCode()I
    .locals 5

    .line 45
    .local p0, "this":Lcom/bianfeng/ymnsdk/gongxiang/d;, "Lcom/bianfeng/afext/read/Pair<TA;TB;>;"
    const/16 v0, 0x1f

    .line 46
    .local v0, "prime":I
    const/4 v1, 0x1

    .line 47
    .local v1, "result":I
    mul-int/lit8 v2, v1, 0x1f

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    const/4 v4, 0x0

    if-nez v3, :cond_0

    const/4 v3, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v3}, Ljava/lang/Object;->hashCode()I

    move-result v3

    :goto_0
    add-int/2addr v2, v3

    .line 48
    .end local v1    # "result":I
    .local v2, "result":I
    mul-int/lit8 v1, v2, 0x1f

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-nez v3, :cond_1

    goto :goto_1

    :cond_1
    invoke-virtual {v3}, Ljava/lang/Object;->hashCode()I

    move-result v4

    :goto_1
    add-int/2addr v1, v4

    .line 49
    .end local v2    # "result":I
    .restart local v1    # "result":I
    return v1
.end method
