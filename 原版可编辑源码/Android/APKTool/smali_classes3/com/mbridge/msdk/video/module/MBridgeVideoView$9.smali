.class final Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;
.super Ljava/lang/Object;
.source "MBridgeVideoView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/video/module/MBridgeVideoView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 527
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 530
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->d(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 531
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z

    .line 533
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 534
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p1, :cond_2

    .line 535
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    iget-object p1, p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x7b

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_0

    .line 538
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    goto :goto_0

    .line 541
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;->a:Lcom/mbridge/msdk/video/module/MBridgeVideoView;

    invoke-static {p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    :cond_2
    :goto_0
    return-void
.end method
