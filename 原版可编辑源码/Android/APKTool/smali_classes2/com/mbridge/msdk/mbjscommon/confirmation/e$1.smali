.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;
.super Landroid/os/Handler;
.source "SecondaryConfirmationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Landroid/os/Looper;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 76
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 77
    iget p1, p1, Landroid/os/Message;->what:I

    const-string v0, "render is time out"

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v2, 0x2

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 79
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 80
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-result-object p1

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    goto :goto_0

    .line 84
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 85
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    move-result-object p1

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    goto :goto_0

    .line 87
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    :cond_3
    :goto_0
    return-void
.end method
