.class public Lcom/tkay/core/common/d/a;
.super Ljava/lang/Object;


# instance fields
.field a:Lcom/tkay/core/common/c/j;

.field protected b:I


# direct methods
.method protected constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    invoke-static {p1}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/c/j;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/j;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    return-void
.end method

.method private a()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/w;",
            ">;"
        }
    .end annotation

    .line 32
    iget-object v0, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    iget v1, p0, Lcom/tkay/core/common/d/a;->b:I

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/c/j;->a(I)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/util/List;)Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/w;",
            ">;"
        }
    .end annotation

    .line 36
    iget-object v0, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    iget v1, p0, Lcom/tkay/core/common/d/a;->b:I

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/c/j;->a(Ljava/util/List;I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;II)V
    .locals 2

    .line 20
    iget-object v0, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    iget v1, p0, Lcom/tkay/core/common/d/a;->b:I

    invoke-virtual {v0, v1, p1, p2, p3}, Lcom/tkay/core/common/c/j;->a(ILjava/lang/String;II)V

    return-void
.end method

.method public final a(Ljava/lang/String;J)V
    .locals 2

    .line 24
    iget-object v0, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    iget v1, p0, Lcom/tkay/core/common/d/a;->b:I

    invoke-virtual {v0, v1, p1, p2, p3}, Lcom/tkay/core/common/c/j;->a(ILjava/lang/String;J)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 28
    iget-object v0, p0, Lcom/tkay/core/common/d/a;->a:Lcom/tkay/core/common/c/j;

    iget v1, p0, Lcom/tkay/core/common/d/a;->b:I

    invoke-virtual {v0, p1, v1, p2}, Lcom/tkay/core/common/c/j;->a(Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method
