.class final Lcom/tkay/expressad/exoplayer/h/a/c$c$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/a/c$c;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/a/c$c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/a/c$c;)V
    .locals 0

    .line 528
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$3;->a:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 531
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$3;->a:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a(Lcom/tkay/expressad/exoplayer/h/a/c$c;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 532
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c$c$3;->a:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/h/a/c$c;->a:Lcom/tkay/expressad/exoplayer/h/a/c;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/a/c;->d(Lcom/tkay/expressad/exoplayer/h/a/c;)Lcom/tkay/expressad/exoplayer/h/a/c$d;

    :cond_0
    return-void
.end method
