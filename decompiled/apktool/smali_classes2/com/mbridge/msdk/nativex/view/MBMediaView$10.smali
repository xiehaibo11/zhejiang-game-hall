.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$10;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 3116
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 3120
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->c(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 3121
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 3123
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->S(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    goto :goto_0

    .line 3126
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->T(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V

    .line 3130
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$10;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->J(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Landroid/os/Handler;

    move-result-object v0

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, p0, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 3132
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method
