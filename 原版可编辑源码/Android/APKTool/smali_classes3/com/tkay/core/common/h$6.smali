.class final Lcom/tkay/core/common/h$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/k$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->v()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 1494
    iput-object p1, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 1498
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object p1

    iget-object p3, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {p1, p3, v0, p2}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V

    .line 1500
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 1503
    iget-object p3, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object v1, v1, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {p3, v0, v1, v2, p2}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V

    const/16 p3, 0x8

    .line 1505
    invoke-virtual {p2, p3}, Lcom/tkay/core/common/f/aj;->x(I)V

    .line 1506
    iget-object p3, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {p3, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1510
    iget-object p3, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    const/4 v0, 0x3

    invoke-static {p3, p2, v0}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;I)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 1521
    iget-object p1, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/tkay/core/common/h;->S:Z

    .line 1522
    iget-object p1, p0, Lcom/tkay/core/common/h$6;->a:Lcom/tkay/core/common/h;

    invoke-static {p1}, Lcom/tkay/core/common/h;->d(Lcom/tkay/core/common/h;)V

    return-void
.end method
