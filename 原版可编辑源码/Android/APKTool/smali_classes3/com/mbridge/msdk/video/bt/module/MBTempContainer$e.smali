.class final Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;
.super Lcom/mbridge/msdk/video/js/a/c$a;
.source "MBTempContainer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "e"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V
    .locals 0

    .line 1658
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/c$a;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer$1;)V
    .locals 0

    .line 1658
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;-><init>(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 1662
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/c$a;->a()V

    .line 1663
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->receiveSuccess()V

    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 1

    .line 1723
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c$a;->a(ILjava/lang/String;)V

    .line 1724
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void
.end method

.method public final a(Z)V
    .locals 3

    .line 1717
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/a/c$a;->a(Z)V

    .line 1718
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->S(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->T(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, p1, v1, v2}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 2

    .line 1729
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/c$a;->b()V

    .line 1730
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 1731
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v0, v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->h:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 2

    .line 1681
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c$a;->onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1682
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 v0, 0x1

    invoke-static {p2, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    .line 1683
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->O(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    if-eqz p1, :cond_1

    .line 1684
    instance-of p2, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p2, :cond_1

    .line 1686
    :try_start_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1687
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getJSVideoModule()Lcom/mbridge/msdk/video/js/i;

    move-result-object p2

    invoke-interface {p2}, Lcom/mbridge/msdk/video/js/i;->getCurrentProgress()Ljava/lang/String;

    move-result-object p2

    .line 1688
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "progress"

    const-string v1, ""

    .line 1689
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1690
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndcard_click_result()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    const-string p1, "1.0"

    .line 1691
    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->P(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1692
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->Q(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1693
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->m(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    goto :goto_0

    .line 1695
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->R(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1700
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 1703
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->N(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1704
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onResume()V

    :cond_2
    return-void
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 1710
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c$a;->onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1711
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->O(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    .line 1712
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->e(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Z)Z

    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 1668
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c$a;->onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    .line 1669
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->M(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)V

    .line 1670
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-static {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->N(Lcom/mbridge/msdk/video/bt/module/MBTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1671
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer$e;->a:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onPause()V

    :cond_0
    return-void
.end method
