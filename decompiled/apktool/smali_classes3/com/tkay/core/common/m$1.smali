.class final Lcom/tkay/core/common/m$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/m;-><init>(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/m;Landroid/os/Looper;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/core/common/m$1;->a:Lcom/tkay/core/common/m;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 50
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 55
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    return-void

    .line 52
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/m$1;->a:Lcom/tkay/core/common/m;

    invoke-virtual {p1}, Lcom/tkay/core/common/m;->a()V

    return-void
.end method
