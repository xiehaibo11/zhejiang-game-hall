.class final Lcom/mbridge/msdk/mbbanner/common/c/c$4;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "BannerShowManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 1001
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1070
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1, p3}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;)V

    .line 1071
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const/4 p2, 0x2

    invoke-static {p1, p3, p2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;I)V

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 8

    const-string p2, "OMSDK"

    .line 1004
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z

    const-string v0, "WindVaneWebView"

    const-string v2, "BANNER onPageFinished"

    .line 1007
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "BannerCallJS"

    const-string v2, "fireOnJSBridgeConnected"

    .line 2033
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2034
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    .line 1009
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z

    .line 1011
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1012
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {p1}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v4}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v4

    invoke-static {v2, p1, v3, v4}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;Landroid/webkit/WebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 1013
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    if-eqz v0, :cond_2

    .line 1015
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 1016
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->p(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 1019
    :try_start_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    .line 1020
    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->p(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;

    move-result-object v2

    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    .line 1019
    invoke-virtual {p1, v2, v3, v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/RuntimeException; {:try_start_2 .. :try_end_2} :catch_0
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 1027
    :catch_0
    :cond_0
    :try_start_3
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->l(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;

    move-result-object p1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    if-eqz p1, :cond_1

    .line 1029
    :try_start_4
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    iget-object v2, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    .line 1030
    invoke-static {v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->l(Lcom/mbridge/msdk/mbbanner/common/c/c;)Landroid/widget/ImageView;

    move-result-object v2

    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    .line 1029
    invoke-virtual {p1, v2, v3, v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/RuntimeException; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 1037
    :catch_1
    :cond_1
    :try_start_5
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p1

    invoke-virtual {p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    goto :goto_0

    :catch_2
    move-exception p1

    .line 1039
    :try_start_6
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const-string p1, "adSession.start()"

    .line 1041
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 1043
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 1044
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    .line 1045
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v4

    .line 1046
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    .line 1047
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->o(Lcom/mbridge/msdk/mbbanner/common/c/c;)Ljava/lang/String;

    move-result-object v6

    .line 1048
    new-instance v2, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v2, p1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    const-string v7, "fetch OM failed, context null"

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_1

    :catch_3
    move-exception p1

    .line 1053
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1054
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 1055
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    .line 1056
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v4

    .line 1057
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    .line 1058
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->o(Lcom/mbridge/msdk/mbbanner/common/c/c;)Ljava/lang/String;

    move-result-object v6

    .line 1059
    new-instance v2, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v2, p1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    const-string v7, "fetch OM failed, context null"

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1062
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result p1

    if-nez p1, :cond_4

    .line 1063
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->f(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    .line 1064
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$4;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const-string p2, ""

    invoke-static {p1, p2, v1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;I)V

    :cond_4
    return-void
.end method
