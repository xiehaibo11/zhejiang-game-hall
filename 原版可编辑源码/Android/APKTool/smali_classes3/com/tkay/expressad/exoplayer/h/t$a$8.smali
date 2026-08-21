.class final Lcom/tkay/expressad/exoplayer/h/t$a$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/h/t$c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/t;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/t$c;

.field final synthetic c:Lcom/tkay/expressad/exoplayer/h/t$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;Lcom/tkay/expressad/exoplayer/h/t$c;)V
    .locals 0

    .line 657
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->a:Lcom/tkay/expressad/exoplayer/h/t;

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->b:Lcom/tkay/expressad/exoplayer/h/t$c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 660
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->a:Lcom/tkay/expressad/exoplayer/h/t;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->c:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/t$a$8;->b:Lcom/tkay/expressad/exoplayer/h/t$c;

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/h/t;->a(ILcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/t$c;)V

    return-void
.end method
