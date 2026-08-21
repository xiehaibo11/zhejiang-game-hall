.class final Lcom/mbridge/msdk/reward/adapter/d$b;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Ljava/lang/String;

.field private c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/mbridge/msdk/videocommon/d/c;

.field private g:I

.field private h:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;ILcom/mbridge/msdk/reward/adapter/d;)V
    .locals 0

    .line 597
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 598
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->b:Ljava/lang/String;

    .line 599
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 600
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->d:Ljava/lang/String;

    .line 601
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->e:Ljava/lang/String;

    .line 602
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->f:Lcom/mbridge/msdk/videocommon/d/c;

    .line 603
    iput p7, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->g:I

    .line 604
    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->h:Lcom/mbridge/msdk/reward/adapter/d;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    const-string v0, "RewardMVVideoAdapter"

    .line 610
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "retry load tpl url = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 611
    new-instance v5, Lcom/mbridge/msdk/videocommon/a$a;

    invoke-direct {v5}, Lcom/mbridge/msdk/videocommon/a$a;-><init>()V

    .line 612
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 613
    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 614
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v2

    .line 615
    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 617
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->n(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/d;->n(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 618
    new-instance v3, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v7}, Lcom/mbridge/msdk/reward/adapter/d;->n(Lcom/mbridge/msdk/reward/adapter/d;)Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v7

    invoke-direct {v3, v4, v6, v7}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    goto :goto_0

    .line 620
    :cond_0
    new-instance v3, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v3, v4, v6}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    move-object v10, v3

    .line 622
    iget v3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->g:I

    invoke-virtual {v10, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(I)V

    .line 623
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->e:Ljava/lang/String;

    invoke-virtual {v10, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 624
    invoke-virtual {v10, v2}, Lcom/mbridge/msdk/video/js/a/j;->c(Ljava/lang/String;)V

    .line 625
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->f:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v10, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 626
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->o(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v10, v2}, Lcom/mbridge/msdk/video/js/a/j;->e(Z)V

    .line 627
    new-instance v11, Lcom/mbridge/msdk/reward/adapter/d$a;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->d:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->b:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->h:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v2, v11

    invoke-direct/range {v2 .. v9}, Lcom/mbridge/msdk/reward/adapter/d$a;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$b;Landroid/os/Handler;)V

    .line 628
    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 629
    invoke-virtual {v1, v10}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 630
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$b;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v1

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_2

    .line 636
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 632
    :goto_2
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 633
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_3
    return-void
.end method
