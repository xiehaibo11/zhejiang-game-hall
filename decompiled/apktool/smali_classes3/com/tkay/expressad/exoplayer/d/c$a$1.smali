.class final Lcom/tkay/expressad/exoplayer/d/c$a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/d/c$a;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/d/c;

.field final synthetic b:Lcom/tkay/expressad/exoplayer/d/c$a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/d/c$a;Lcom/tkay/expressad/exoplayer/d/c;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/c$a$1;->b:Lcom/tkay/expressad/exoplayer/d/c$a;

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/d/c$a$1;->a:Lcom/tkay/expressad/exoplayer/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/c$a$1;->a:Lcom/tkay/expressad/exoplayer/d/c;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/c;->d()V

    return-void
.end method
