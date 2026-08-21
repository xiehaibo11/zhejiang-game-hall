.class final Lcom/tkay/expressad/exoplayer/b/g$a$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/c/d;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/b/g$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/b/g$a;Lcom/tkay/expressad/exoplayer/c/d;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/g$a$5;->b:Lcom/tkay/expressad/exoplayer/b/g$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/g$a$5;->a:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 172
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/g$a$5;->b:Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/b/g$a;)Lcom/tkay/expressad/exoplayer/b/g;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/g$a$5;->a:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/b/g;->d(Lcom/tkay/expressad/exoplayer/c/d;)V

    return-void
.end method
