.class final Lcom/tkay/expressad/exoplayer/b/g$a$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/m;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/m;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/b/g$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/b/g$a;Lcom/tkay/expressad/exoplayer/m;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/g$a$3;->b:Lcom/tkay/expressad/exoplayer/b/g$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/g$a$3;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 142
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/g$a$3;->b:Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/b/g$a;)Lcom/tkay/expressad/exoplayer/b/g;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/g$a$3;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/b/g;->b(Lcom/tkay/expressad/exoplayer/m;)V

    return-void
.end method
