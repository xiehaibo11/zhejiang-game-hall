.class final Lcom/mbridge/msdk/d/b$3;
.super Landroid/os/Handler;
.source "ShortCutsManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/d/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/d/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/b;Landroid/os/Looper;)V
    .locals 0

    .line 697
    iput-object p1, p0, Lcom/mbridge/msdk/d/b$3;->a:Lcom/mbridge/msdk/d/b;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 700
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x2710

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 703
    :cond_0
    :try_start_0
    iget v0, p1, Landroid/os/Message;->arg1:I

    .line 704
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v1, 0x0

    .line 706
    instance-of v2, p1, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 707
    move-object v1, p1

    check-cast v1, Ljava/lang/String;

    .line 709
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/d/b$3;->a:Lcom/mbridge/msdk/d/b;

    invoke-static {p1, v0, v1}, Lcom/mbridge/msdk/d/b;->a(Lcom/mbridge/msdk/d/b;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 711
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_2

    .line 712
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method
