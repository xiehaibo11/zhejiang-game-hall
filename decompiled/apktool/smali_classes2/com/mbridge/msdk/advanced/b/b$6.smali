.class final Lcom/mbridge/msdk/advanced/b/b$6;
.super Ljava/lang/Object;
.source "NativeAdvancedShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/out/NativeListener$TrackingExListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/b;)V
    .locals 0

    .line 461
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDismissLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onDownloadFinish(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onDownloadProgress(I)V
    .locals 0

    return-void
.end method

.method public final onDownloadStart(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 494
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 495
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 496
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onInterceptDefaultLoadingDialog()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final onLeaveApp()V
    .locals 2

    .line 464
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 465
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/c/d;->d(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 505
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 506
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 507
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onShowLoading(Lcom/mbridge/msdk/out/Campaign;)V
    .locals 0

    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 486
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b$6;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/ViewGroup;)V

    return-void
.end method
