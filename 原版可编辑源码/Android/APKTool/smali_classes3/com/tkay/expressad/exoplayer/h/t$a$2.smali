.class final Lcom/tkay/expressad/exoplayer/h/t$a$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/h/t$a;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/h/t;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/h/t$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/h/t$a;Lcom/tkay/expressad/exoplayer/h/t;)V
    .locals 0

    .line 354
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$2;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$2;->a:Lcom/tkay/expressad/exoplayer/h/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 357
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/t$a$2;->a:Lcom/tkay/expressad/exoplayer/h/t;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/t$a$2;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v1, v1, Lcom/tkay/expressad/exoplayer/h/t$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/t$a$2;->b:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/t$a;->b:Lcom/tkay/expressad/exoplayer/h/s$a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/t;->b(ILcom/tkay/expressad/exoplayer/h/s$a;)V

    return-void
.end method
