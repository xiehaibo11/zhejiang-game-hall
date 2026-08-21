.class final Lcom/mbridge/msdk/reward/adapter/d$6;
.super Ljava/lang/Object;
.source "RewardMVVideoAdapter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/reward/adapter/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

.field final synthetic b:Lcom/mbridge/msdk/reward/adapter/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/reward/adapter/d;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 0

    .line 3733
    iput-object p1, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->b:Lcom/mbridge/msdk/reward/adapter/d;

    iput-object p2, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    const-string v0, "RewardMVVideoAdapter"

    const-string v1, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5f00\u59cb"

    .line 3737
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 3740
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->b:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-static {v1}, Lcom/mbridge/msdk/reward/adapter/d;->j(Lcom/mbridge/msdk/reward/adapter/d;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    .line 3741
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    .line 3744
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 3745
    iget-object v1, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->b:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/adapter/d$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/d;Ljava/util/List;)V

    :cond_0
    const-string v1, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5b8c\u6210"

    .line 3748
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
