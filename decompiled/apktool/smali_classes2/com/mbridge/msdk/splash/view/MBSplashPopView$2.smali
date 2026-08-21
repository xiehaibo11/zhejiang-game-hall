.class final Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;
.super Ljava/lang/Object;
.source "MBSplashPopView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/view/MBSplashPopView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/mbridge/msdk/widget/dialog/a;

.field final synthetic d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/view/MBSplashPopView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V
    .locals 0

    .line 680
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->c:Lcom/mbridge/msdk/widget/dialog/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 14

    .line 683
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->o(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/click/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 684
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->pauseCountDown()V

    .line 685
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->b:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eq v0, v1, :cond_0

    .line 686
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->b:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v6

    iget-object v7, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->c:Lcom/mbridge/msdk/widget/dialog/a;

    const-string v3, ""

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 688
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v8

    iget-object v10, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->getContext()Landroid/content/Context;

    move-result-object v11

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v12

    iget-object v13, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->c:Lcom/mbridge/msdk/widget/dialog/a;

    const-string v9, ""

    invoke-virtual/range {v8 .. v13}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 691
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->pauseCountDown()V

    .line 692
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/splash/e/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 693
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 694
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v3}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/d/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 695
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->j(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Lcom/mbridge/msdk/splash/d/d;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v2}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->k(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashPopView$2;->d:Lcom/mbridge/msdk/splash/view/MBSplashPopView;

    invoke-static {v3}, Lcom/mbridge/msdk/splash/view/MBSplashPopView;->l(Lcom/mbridge/msdk/splash/view/MBSplashPopView;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x6

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;I)V

    :cond_2
    :goto_0
    return-void
.end method
