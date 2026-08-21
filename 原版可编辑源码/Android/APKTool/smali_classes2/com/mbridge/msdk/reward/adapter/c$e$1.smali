.class final Lcom/mbridge/msdk/reward/adapter/c$e$1;
.super Ljava/lang/Object;
.source "RewardCampaignsResourceManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/reward/adapter/c$e;->onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/reward/adapter/c$e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/c$e;Ljava/lang/String;)V
    .locals 0

    .line 585
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const-string v0, "RewardCampaignsResourceManager"

    .line 587
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/c$e;->a(Lcom/mbridge/msdk/reward/adapter/c$e;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 589
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/t;

    move-result-object v1

    const-string v2, "campaign is null"

    .line 590
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 592
    new-instance v2, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    const-string v3, "2000044"

    .line 593
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 594
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 595
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/c$e;->a(Lcom/mbridge/msdk/reward/adapter/c$e;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 596
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/c$e;->a(Lcom/mbridge/msdk/reward/adapter/c$e;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->d(Ljava/lang/String;)V

    .line 597
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/c$e;->a(Lcom/mbridge/msdk/reward/adapter/c$e;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 598
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/c$e;->a(Lcom/mbridge/msdk/reward/adapter/c$e;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 599
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->b:Lcom/mbridge/msdk/reward/adapter/c$e;

    invoke-static {v3}, Lcom/mbridge/msdk/reward/adapter/c$e;->b(Lcom/mbridge/msdk/reward/adapter/c$e;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 600
    iget-object v3, p0, Lcom/mbridge/msdk/reward/adapter/c$e$1;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 601
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/db/t;->a(Lcom/mbridge/msdk/foundation/entity/p;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 603
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_0

    .line 604
    invoke-virtual {v1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
