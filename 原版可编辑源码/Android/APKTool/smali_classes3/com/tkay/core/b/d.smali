.class public final Lcom/tkay/core/b/d;
.super Lcom/tkay/core/b/b;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Lcom/tkay/core/b/b;-><init>(Lcom/tkay/core/common/f/ag;)V

    return-void
.end method


# virtual methods
.method protected final a(Ljava/util/List;Lcom/tkay/core/common/h/k;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;",
            "Lcom/tkay/core/common/h/k;",
            ")V"
        }
    .end annotation

    .line 28
    new-instance v0, Lcom/tkay/core/b/a/b;

    invoke-direct {v0}, Lcom/tkay/core/b/a/b;-><init>()V

    .line 29
    iget-object v1, p0, Lcom/tkay/core/b/d;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->as()I

    move-result v1

    iput v1, v0, Lcom/tkay/core/b/a/b;->f:I

    .line 32
    new-instance v1, Lcom/tkay/core/b/a/a;

    iget-object v3, p0, Lcom/tkay/core/b/d;->k:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/b/d;->j:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/b/d;->i:Ljava/lang/String;

    const/4 v7, 0x1

    move-object v2, v1

    move-object v6, p1

    invoke-direct/range {v2 .. v7}, Lcom/tkay/core/b/a/a;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;I)V

    .line 33
    invoke-virtual {v1, v0}, Lcom/tkay/core/b/a/a;->a(Lcom/tkay/core/b/a/b;)V

    const/4 p1, 0x0

    .line 34
    invoke-virtual {v1, p1, p2}, Lcom/tkay/core/b/a/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method protected final e()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/core/b/d;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    return-object v0
.end method
