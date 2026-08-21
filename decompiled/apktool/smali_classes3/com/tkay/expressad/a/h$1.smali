.class final Lcom/tkay/expressad/a/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/h;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/h;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/h;)V
    .locals 0

    .line 469
    iput-object p1, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 473
    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->h(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/e;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 474
    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 475
    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->h(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/e;

    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    return-void

    .line 477
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->h(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/e;

    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    iget-object v0, p0, Lcom/tkay/expressad/a/h$1;->a:Lcom/tkay/expressad/a/h;

    invoke-static {v0}, Lcom/tkay/expressad/a/h;->g(Lcom/tkay/expressad/a/h;)Lcom/tkay/expressad/a/c$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->h()Ljava/lang/String;

    :cond_1
    return-void
.end method
