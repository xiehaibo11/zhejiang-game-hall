.class public abstract Lcom/tkay/basead/e/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/g;


# instance fields
.field a:Lcom/tkay/core/common/f/h;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/h;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/tkay/basead/e/f;->a:Lcom/tkay/core/common/f/h;

    return-void
.end method

.method private a()V
    .locals 3

    .line 25
    iget-object v0, p0, Lcom/tkay/basead/e/f;->a:Lcom/tkay/core/common/f/h;

    instance-of v1, v0, Lcom/tkay/core/common/f/f;

    if-eqz v1, :cond_0

    .line 26
    check-cast v0, Lcom/tkay/core/common/f/f;

    .line 28
    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->c()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 29
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/a/b;->b(Lcom/tkay/core/common/f/f;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public onAdShow()V
    .locals 3

    .line 1025
    iget-object v0, p0, Lcom/tkay/basead/e/f;->a:Lcom/tkay/core/common/f/h;

    instance-of v1, v0, Lcom/tkay/core/common/f/f;

    if-eqz v1, :cond_0

    .line 1026
    check-cast v0, Lcom/tkay/core/common/f/f;

    .line 1028
    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->c()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 1029
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/a/b;->b(Lcom/tkay/core/common/f/f;)V

    :cond_0
    return-void
.end method
