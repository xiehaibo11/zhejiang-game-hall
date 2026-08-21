.class final Lcom/tkay/expressad/exoplayer/j/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/j/m;->a(IJJ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:J

.field final synthetic c:J

.field final synthetic d:Lcom/tkay/expressad/exoplayer/j/m;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/j/m;IJJ)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/m$1;->d:Lcom/tkay/expressad/exoplayer/j/m;

    iput p2, p0, Lcom/tkay/expressad/exoplayer/j/m$1;->a:I

    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/j/m$1;->b:J

    iput-wide p5, p0, Lcom/tkay/expressad/exoplayer/j/m$1;->c:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/m$1;->d:Lcom/tkay/expressad/exoplayer/j/m;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/j/m;->a(Lcom/tkay/expressad/exoplayer/j/m;)Lcom/tkay/expressad/exoplayer/j/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/d$a;->c()V

    return-void
.end method
