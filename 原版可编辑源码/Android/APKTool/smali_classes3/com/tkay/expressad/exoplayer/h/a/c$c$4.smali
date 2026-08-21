.class final Lcom/tkay/expressad/exoplayer/h/a/c$c$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/a/c$c;->a(Lcom/tkay/expressad/exoplayer/h/a/c$a;Lcom/tkay/expressad/exoplayer/j/k;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/a/c$a;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/a/c$c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/a/c$c;Lcom/tkay/expressad/exoplayer/h/a/c$a;)V
    .locals 0

    .line 555
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->a:Lcom/tkay/expressad/exoplayer/h/a/c$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 558
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a(Lcom/tkay/expressad/exoplayer/h/a/c$c;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 559
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->a:Lcom/tkay/expressad/exoplayer/h/a/c$a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;->e:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    .line 560
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c;->d(Lcom/tkay/expressad/exoplayer/h/a/c;)Lcom/tkay/expressad/exoplayer/h/a/c$d;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->a:Lcom/tkay/expressad/exoplayer/h/a/c$a;

    .line 1130
    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/a/c$a;->e:I

    if-ne v2, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 1131
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/a/c$a;->getCause()Ljava/lang/Throwable;

    return-void

    .line 562
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$4;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c;->d(Lcom/tkay/expressad/exoplayer/h/a/c;)Lcom/tkay/expressad/exoplayer/h/a/c$d;

    :cond_2
    return-void
.end method
