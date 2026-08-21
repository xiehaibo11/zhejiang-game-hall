.class final Lcom/tkay/expressad/exoplayer/h/n$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/n;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h;[Lcom/tkay/expressad/exoplayer/e/e;ILcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/n$c;Lcom/tkay/expressad/exoplayer/j/b;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/n;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/n;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/n$2;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$2;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/n;->b(Lcom/tkay/expressad/exoplayer/h/n;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/n$2;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/h/n;->c(Lcom/tkay/expressad/exoplayer/h/n;)Lcom/tkay/expressad/exoplayer/h/r$a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/n$2;->a:Lcom/tkay/expressad/exoplayer/h/n;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/h/r$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    :cond_0
    return-void
.end method
