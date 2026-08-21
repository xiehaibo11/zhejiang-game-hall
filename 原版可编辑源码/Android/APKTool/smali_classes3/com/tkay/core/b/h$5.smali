.class final Lcom/tkay/core/b/h$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h;->a(Lcom/tkay/core/common/f/aj;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/d;

.field final synthetic b:Lcom/tkay/core/common/f/aj;

.field final synthetic c:Lcom/tkay/core/b/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V
    .locals 0

    .line 552
    iput-object p1, p0, Lcom/tkay/core/b/h$5;->c:Lcom/tkay/core/b/h;

    iput-object p2, p0, Lcom/tkay/core/b/h$5;->a:Lcom/tkay/core/common/f/d;

    iput-object p3, p0, Lcom/tkay/core/b/h$5;->b:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 555
    iget-object v0, p0, Lcom/tkay/core/b/h$5;->c:Lcom/tkay/core/b/h;

    invoke-static {v0}, Lcom/tkay/core/b/h;->e(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/f/ag;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_1

    .line 556
    iget-object v0, p0, Lcom/tkay/core/b/h$5;->a:Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_0

    .line 558
    iget-object v0, p0, Lcom/tkay/core/b/h$5;->c:Lcom/tkay/core/b/h;

    invoke-static {v0}, Lcom/tkay/core/b/h;->e(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/f/ag;

    move-result-object v0

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    iget-object v1, p0, Lcom/tkay/core/b/h$5;->a:Lcom/tkay/core/common/f/d;

    iget-object v2, p0, Lcom/tkay/core/b/h$5;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v2

    const-string v3, "4007"

    const-string v4, ""

    invoke-static {v3, v4, v2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    .line 561
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/b/h$5;->c:Lcom/tkay/core/b/h;

    iget-object v0, v0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    iget-object v1, p0, Lcom/tkay/core/b/h$5;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void
.end method
