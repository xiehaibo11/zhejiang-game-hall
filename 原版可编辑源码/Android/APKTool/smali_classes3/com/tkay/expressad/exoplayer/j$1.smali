.class final Lcom/tkay/expressad/exoplayer/j$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/exoplayer/j;-><init>([Lcom/tkay/expressad/exoplayer/y;Lcom/tkay/expressad/exoplayer/i/h;Lcom/tkay/expressad/exoplayer/p;Lcom/tkay/expressad/exoplayer/k/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/j;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/exoplayer/j;Landroid/os/Looper;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j$1;->a:Lcom/tkay/expressad/exoplayer/j;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j$1;->a:Lcom/tkay/expressad/exoplayer/j;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/j;->a(Landroid/os/Message;)V

    return-void
.end method
