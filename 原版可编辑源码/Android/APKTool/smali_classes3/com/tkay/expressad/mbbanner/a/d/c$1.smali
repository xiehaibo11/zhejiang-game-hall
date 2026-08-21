.class final Lcom/tkay/expressad/mbbanner/a/d/c$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/mbbanner/a/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/c;Landroid/os/Looper;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/c$1;->a:Lcom/tkay/expressad/mbbanner/a/d/c;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 0

    .line 102
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 103
    iget p1, p1, Landroid/os/Message;->what:I

    return-void
.end method
