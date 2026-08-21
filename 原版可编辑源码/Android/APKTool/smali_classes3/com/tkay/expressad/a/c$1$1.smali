.class final Lcom/tkay/expressad/a/c$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/c$1;->a(Lcom/tkay/expressad/foundation/g/g/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/c$1;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/c$1;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/a/c;->b(Lcom/tkay/expressad/a/c;)Lcom/tkay/expressad/a/e;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    iget-object v0, v0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/a/c;->b(Lcom/tkay/expressad/a/c;)Lcom/tkay/expressad/a/e;

    return-void

    .line 119
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/a/c;->b(Lcom/tkay/expressad/a/c;)Lcom/tkay/expressad/a/e;

    iget-object v0, p0, Lcom/tkay/expressad/a/c$1$1;->a:Lcom/tkay/expressad/a/c$1;

    iget-object v0, v0, Lcom/tkay/expressad/a/c$1;->a:Lcom/tkay/expressad/a/c;

    iget-object v0, v0, Lcom/tkay/expressad/a/c;->a:Lcom/tkay/expressad/a/c$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/a/c$b;->h()Ljava/lang/String;

    :cond_1
    return-void
.end method
