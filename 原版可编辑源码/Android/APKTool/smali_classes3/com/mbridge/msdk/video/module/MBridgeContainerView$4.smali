.class final Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;
.super Lcom/mbridge/msdk/video/module/a/a/h;
.source "MBridgeContainerView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/module/MBridgeContainerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeContainerView;Lcom/mbridge/msdk/video/module/a/a;)V
    .locals 0

    .line 822
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 1

    .line 825
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/a/a/h;->a(ILjava/lang/Object;)V

    const/16 p2, 0x64

    if-ne p1, p2, :cond_1

    .line 827
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->webviewshow()V

    .line 828
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 830
    new-instance p1, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {p1}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 831
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 832
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 833
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 834
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p2

    if-eqz p2, :cond_0

    sget p2, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_0

    :cond_0
    sget p2, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_0
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 835
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    iget-object p2, p2, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeContainerView$4;->a:Lcom/mbridge/msdk/video/module/MBridgeContainerView;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/MBridgeContainerView;->a(Lcom/mbridge/msdk/video/module/MBridgeContainerView;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
