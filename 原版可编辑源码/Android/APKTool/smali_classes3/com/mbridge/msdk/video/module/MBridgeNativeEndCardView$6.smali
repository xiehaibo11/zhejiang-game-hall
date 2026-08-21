.class final Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;
.super Lcom/mbridge/msdk/shake/b;
.source "MBridgeNativeEndCardView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;II)V
    .locals 0

    .line 852
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/shake/b;-><init>(II)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 855
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d()Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 856
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d()Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->isShowing()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 861
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->q(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 865
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    .line 869
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const/4 v1, 0x0

    iput v1, v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->g:F

    .line 870
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    iput v1, v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->h:F

    .line 871
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;->a:Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;

    const/4 v1, 0x4

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;I)V

    return-void
.end method
