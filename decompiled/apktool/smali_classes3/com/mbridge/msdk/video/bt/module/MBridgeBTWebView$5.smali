.class final Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;
.super Ljava/lang/Object;
.source "MBridgeBTWebView.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)V
    .locals 0

    .line 500
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 503
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)V

    .line 504
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 505
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v1, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v2, v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    const-string v3, "onInstallAlertHide"

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 4

    .line 511
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 512
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v1, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v2, v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    const-string v3, "onInstallAlertHide"

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 518
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->b:Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;->a:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)V

    return-void
.end method
