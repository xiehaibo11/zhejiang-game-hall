.class final Lcom/mbridge/msdk/reward/adapter/d$c;
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
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/reward/adapter/d;

.field private b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private c:Ljava/lang/String;

.field private d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Lcom/mbridge/msdk/videocommon/d/c;

.field private i:I

.field private j:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/d/c;ILcom/mbridge/msdk/reward/adapter/d;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/d/c;",
            "I",
            "Lcom/mbridge/msdk/reward/adapter/d;",
            ")V"
        }
    .end annotation

    .line 696
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 697
    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 698
    iput-object p3, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->c:Ljava/lang/String;

    .line 699
    iput-object p4, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 700
    iput-object p5, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->e:Ljava/util/List;

    .line 701
    iput-object p6, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->f:Ljava/lang/String;

    .line 702
    iput-object p7, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->g:Ljava/lang/String;

    .line 703
    iput-object p8, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->h:Lcom/mbridge/msdk/videocommon/d/c;

    .line 704
    iput p9, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->i:I

    .line 705
    iput-object p10, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->j:Lcom/mbridge/msdk/reward/adapter/d;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 13

    const-string v0, "RewardMVVideoAdapter"

    .line 711
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "retry load template url = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 712
    new-instance v6, Lcom/mbridge/msdk/videocommon/a$a;

    invoke-direct {v6}, Lcom/mbridge/msdk/videocommon/a$a;-><init>()V

    .line 713
    new-instance v1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 714
    invoke-virtual {v6, v1}, Lcom/mbridge/msdk/videocommon/a$a;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 716
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->e:Ljava/util/List;

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    .line 717
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->e:Ljava/util/List;

    invoke-direct {v2, v3, v4, v5}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    goto :goto_0

    .line 719
    :cond_0
    new-instance v2, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v2, v3, v4}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_0
    move-object v11, v2

    .line 721
    iget v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->i:I

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(I)V

    .line 722
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->g:Ljava/lang/String;

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 723
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->h:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 724
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->a:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v2}, Lcom/mbridge/msdk/reward/adapter/d;->o(Lcom/mbridge/msdk/reward/adapter/d;)Z

    move-result v2

    invoke-virtual {v11, v2}, Lcom/mbridge/msdk/video/js/a/j;->e(Z)V

    .line 725
    new-instance v12, Lcom/mbridge/msdk/reward/adapter/d$f;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->b:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->c:Ljava/lang/String;

    iget-object v7, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->j:Lcom/mbridge/msdk/reward/adapter/d;

    const/4 v9, 0x0

    const/4 v10, 0x0

    move-object v2, v12

    invoke-direct/range {v2 .. v10}, Lcom/mbridge/msdk/reward/adapter/d$f;-><init>(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/a$a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/reward/adapter/d$c;Landroid/os/Handler;)V

    .line 726
    invoke-virtual {v1, v12}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 727
    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 728
    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$c;->f:Ljava/lang/String;

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

    .line 734
    :goto_1
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 730
    :goto_2
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 731
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_3
    return-void
.end method
