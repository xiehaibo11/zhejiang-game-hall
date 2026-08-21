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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

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

    .line 1
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

    .line 2
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

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    return-object v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-nez p1, :cond_1

    return v1

    .line 1
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    const-class v3, Lcom/bianfeng/ymnsdk/gongxiang/d;

    if-eq v3, v2, :cond_2

    return v1

    .line 5
    :cond_2
    check-cast p1, Lcom/bianfeng/ymnsdk/gongxiang/d;

    .line 6
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    if-nez v2, :cond_3

    .line 7
    iget-object v2, p1, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    if-eqz v2, :cond_4

    return v1

    .line 10
    :cond_3
    iget-object v3, p1, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    invoke-virtual {v2, v3}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_4

    return v1

    .line 13
    :cond_4
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-nez v2, :cond_5

    .line 14
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-eqz p1, :cond_6

    return v1

    .line 17
    :cond_5
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    invoke-virtual {v2, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_6

    return v1

    :cond_6
    return v0
.end method

.method public hashCode()I
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->a:Ljava/lang/Object;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    :goto_0
    add-int/lit8 v0, v0, 0x1f

    mul-int/lit8 v0, v0, 0x1f

    .line 2
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/gongxiang/d;->b:Ljava/lang/Object;

    if-nez v2, :cond_1

    goto :goto_1

    :cond_1
    invoke-virtual {v2}, Ljava/lang/Object;->hashCode()I

    move-result v1

    :goto_1
    add-int/2addr v0, v1

    return v0
.end method
