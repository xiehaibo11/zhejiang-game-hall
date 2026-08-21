.class final Lcom/tkay/expressad/exoplayer/h/a/c$c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/a/c$c;->a(Lcom/tkay/expressad/exoplayer/h/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/a/a;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/a/c$c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/a/c$c;Lcom/tkay/expressad/exoplayer/h/a/a;)V
    .locals 0

    .line 494
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$1;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$1;->a:Lcom/tkay/expressad/exoplayer/h/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 497
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$1;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a(Lcom/tkay/expressad/exoplayer/h/a/c$c;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 500
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$1;->b:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$1;->a:Lcom/tkay/expressad/exoplayer/h/a/a;

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h/a/a;)V

    return-void
.end method
