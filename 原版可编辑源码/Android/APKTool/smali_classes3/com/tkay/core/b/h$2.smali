.class final Lcom/tkay/core/b/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h;->a(Lcom/tkay/core/common/k$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/a;

.field final synthetic b:Ljava/lang/Integer;

.field final synthetic c:Lcom/tkay/core/b/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h;Lcom/tkay/core/b/a;Ljava/lang/Integer;)V
    .locals 0

    .line 204
    iput-object p1, p0, Lcom/tkay/core/b/h$2;->c:Lcom/tkay/core/b/h;

    iput-object p2, p0, Lcom/tkay/core/b/h$2;->a:Lcom/tkay/core/b/a;

    iput-object p3, p0, Lcom/tkay/core/b/h$2;->b:Ljava/lang/Integer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 207
    iget-object v0, p0, Lcom/tkay/core/b/h$2;->a:Lcom/tkay/core/b/a;

    if-eqz v0, :cond_0

    .line 208
    iget-object v1, p0, Lcom/tkay/core/b/h$2;->c:Lcom/tkay/core/b/h;

    invoke-static {v1}, Lcom/tkay/core/b/h;->b(Lcom/tkay/core/b/h;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/b/a;->a(Z)V

    .line 209
    iget-object v0, p0, Lcom/tkay/core/b/h$2;->a:Lcom/tkay/core/b/a;

    new-instance v1, Lcom/tkay/core/b/h$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/b/h$2$1;-><init>(Lcom/tkay/core/b/h$2;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/b/a;->a(Lcom/tkay/core/b/b/a;)V

    :cond_0
    return-void
.end method
