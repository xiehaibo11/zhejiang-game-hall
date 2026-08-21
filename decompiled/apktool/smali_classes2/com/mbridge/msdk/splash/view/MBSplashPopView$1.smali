.class final Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;
.super Ljava/lang/Object;
.source "MBSplashPopView.java"

# interfaces
.implements Lcom/mbridge/msdk/click/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/view/MBSplashPopView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 106
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 107
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

    .line 108
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 117
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 118
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

    .line 119
    iget-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public final onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 4

    .line 87
    iget-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->a(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)I

    move-result p2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-ne p2, v1, :cond_0

    .line 88
    iget-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getWidth()I

    move-result p2

    .line 89
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getHeight()I

    move-result v0

    .line 90
    invoke-static {p2, v0}, Ljava/lang/Math;->min(II)I

    move-result p2

    .line 91
    div-int/lit8 v0, p2, 0x4

    const/16 v1, 0x46

    .line 92
    invoke-static {v0, v1}, Ljava/lang/Math;->max(II)I

    move-result v0

    .line 93
    invoke-static {v0, p2}, Ljava/lang/Math;->min(II)I

    move-result p2

    .line 94
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x42700000    # 60.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    sub-int/2addr v0, p2

    div-int/lit8 v0, v0, 0x2

    .line 95
    iget-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object p2

    const/high16 v1, 0x41b80000    # 23.0f

    invoke-static {p2, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p2

    add-int/2addr p2, v0

    .line 96
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    add-int/2addr v0, v1

    move v3, v0

    move v0, p2

    move p2, v3

    goto :goto_0

    :cond_0
    move p2, v0

    .line 98
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$1;->a:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {p1, v1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/ViewGroup;II)V

    return-void
.end method
