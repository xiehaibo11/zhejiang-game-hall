.class final Lcom/mbridge/msdk/splash/c/d$5;
.super Ljava/lang/Object;
.source "SplashShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/click/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/c/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/d;)V
    .locals 0

    .line 525
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d$5;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 536
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 537
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

    .line 538
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$5;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/d;->g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 547
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 548
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

    .line 549
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d$5;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/d;->g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 528
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d$5;->a:Lcom/mbridge/msdk/splash/c/d;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/c/d;->g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/ViewGroup;)V

    return-void
.end method
