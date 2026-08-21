.class final Lcom/mbridge/msdk/click/b$9;
.super Landroid/os/Handler;
.source "CommonClickControl.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 1761
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 1764
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 1765
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_1

    const/4 p1, 0x1

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 1773
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/click/b;->b()V

    goto :goto_0

    .line 1767
    :cond_1
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_2

    .line 1768
    instance-of v0, p1, Landroid/content/Context;

    if-eqz v0, :cond_2

    .line 1769
    check-cast p1, Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;)V

    :cond_2
    :goto_0
    return-void
.end method
