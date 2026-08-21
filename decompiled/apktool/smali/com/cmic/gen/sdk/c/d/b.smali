.class public Lcom/cmic/gen/sdk/c/d/b;
.super Ljava/lang/Object;
.source "HttpSuccessResponse.java"


# instance fields
.field private a:I

.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private c:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/util/Map;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput p1, p0, Lcom/cmic/gen/sdk/c/d/b;->a:I

    .line 23
    iput-object p2, p0, Lcom/cmic/gen/sdk/c/d/b;->b:Ljava/util/Map;

    .line 24
    iput-object p3, p0, Lcom/cmic/gen/sdk/c/d/b;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    .line 28
    iget v0, p0, Lcom/cmic/gen/sdk/c/d/b;->a:I

    return v0
.end method

.method public b()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation

    .line 32
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/d/b;->b:Ljava/util/Map;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    :cond_0
    return-object v0
.end method

.method public c()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/d/b;->c:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    :cond_0
    return-object v0
.end method

.method public d()Z
    .locals 2

    .line 40
    iget v0, p0, Lcom/cmic/gen/sdk/c/d/b;->a:I

    const/16 v1, 0x12e

    if-eq v0, v1, :cond_1

    const/16 v1, 0x12d

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method
