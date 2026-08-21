.class final Lcom/tkay/expressad/reward/a/d$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d$3;->a(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/reward/a/d$3;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d$3;Ljava/lang/String;)V
    .locals 0

    .line 2232
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$3$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 2235
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 2236
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2237
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 2239
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v0, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2240
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 2242
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3$1;->b:Lcom/tkay/expressad/reward/a/d$3;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    const-string v1, "errorCode: 3202 errorMessage: temp resource download failed"

    invoke-interface {v0, v1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method
